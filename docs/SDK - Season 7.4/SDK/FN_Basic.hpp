#pragma once
#pragma warning(disable : 4267 4244)

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
    template <typename Fn>
    inline Fn GetVFunction(const void* instance, std::size_t index)
    {
        auto vtable = *reinterpret_cast<const void***>(const_cast<void*>(instance));
        return reinterpret_cast<Fn>(vtable[index]);
    }

    class UObject;

    struct FUObjectItem
    {
        UObject* Object;
        DWORD Flags;
        DWORD ClusterIndex;
        DWORD SerialNumber;
        DWORD SerialNumber2;
    };

    struct TUObjectArrayNew
    {
        FUObjectItem* Objects[9];
    };

    struct GlobalObjectsArray
    {
        TUObjectArrayNew* ObjectArray;
        BYTE _padding_0[0xC];
        DWORD ObjectCount;

        inline void NumChunks(int* start, int* end)
        {
            int cStart = 0, cEnd = 0;

            if (!cEnd)
            {
                while (1)
                {
                    if (ObjectArray->Objects[cStart] == 0)
                    {
                        cStart++;
                    }
                    else
                    {
                        break;
                    }
                }

                cEnd = cStart;
                while (1)
                {
                    if (ObjectArray->Objects[cEnd] == 0)
                    {
                        break;
                    }
                    else
                    {
                        cEnd++;
                    }
                }
            }

            *start = cStart;
            *end = cEnd;
        }

        inline int32_t Num()
        {
            return ObjectCount;
        }

        inline FUObjectItem* GetObjectItemByIndex(int32_t Index)
        {
            int cStart = 0, cEnd = 0;
            int chunkIndex = 0, chunkSize = 0xFFFF, chunkPos;
            FUObjectItem* Object;

            NumChunks(&cStart, &cEnd);

            chunkIndex = Index / chunkSize;
            if (chunkSize * chunkIndex != 0 &&
                chunkSize * chunkIndex == Index)
            {
                chunkIndex--;
            }

            chunkPos = cStart + chunkIndex;
            if (chunkPos < cEnd)
            {
                Object = ObjectArray->Objects[chunkPos] + (Index - chunkSize * chunkIndex);

                if (!Object) { return NULL; }
                return Object;
            }

            return nullptr;
        }

        inline UObject* GetByIndex(int32_t Index)
        {
            return GetObjectItemByIndex(Index)->Object;
        }
    };

    template <class T>
    struct TArray
    {
        friend struct FString;

    public:
        inline TArray()
        {
            Data = nullptr;
            Count = Max = 0;
        };

        inline int Num() const
        {
            return Count;
        };

        inline T& operator[](int i)
        {
            return Data[i];
        };

        inline const T& operator[](int i) const
        {
            return Data[i];
        };

        inline bool IsValidIndex(int i) const
        {
            return i < Num();
        }

        inline int Slack() const
        {
            return Max - Count;
        }

        inline void Reserve(const int NumElements)
        {
            Data = Slack() >= NumElements ? Data : (T*)std::realloc(Data, (Max = Count + NumElements) * sizeof(T));
        }

        FORCEINLINE bool RemoveSingle(const int Index)
        {
            if (Index < Count)
            {
                if (Index != Count - 1)
                    Data[Index] = Data[Count - 1];

                --Count;

                return true;
            }
            return false;
        }

        FORCEINLINE void RemoveAt(int Index, int Length = 1)
        {
            for (; Length != 0; --Length)
            {
                if (!RemoveSingle(Index++))
                    break;
            }
        }

        inline int Add(const T& InData)
        {
            Reserve(1);
            Data[Count] = InData;
            ++Count;
            return Count;
        }

        inline void FreeArray()
        {
            VirtualFree((PVOID)Data, sizeof(Data), MEM_RELEASE);
            Data = nullptr;
            Count = 0;
            Max = 0;
        }

        /* inline Reset(int32_t NewSize = 0)
        {
            // If we have space to hold the excepted size, then don't reallocate
            if (NewSize <= Count)
            {
                DestructItems(GetData(), Count);
                ArrayNum = 0;
            }
            else
            {
                Empty(NewSize);
            }
        } */

        FORCEINLINE void Reset(int MinSizeAfterReset = 0)
        {
            Max = MinSizeAfterReset;
            Count = 0;

            if (Data)
                VirtualFree((PVOID)Data, sizeof(Data), MEM_RELEASE);
        }

    public:
        T* Data;
        int32_t Count;
        int32_t Max;
    };

    struct FString : public TArray<wchar_t>
    {
        inline FString() {};

        FString(const wchar_t* other)
        {
            Max = Count = *other ? std::wcslen(other) + 1 : 0;

            if (Count)
            {
                Data = const_cast<wchar_t*>(other);
            }
        };

        inline bool IsValid() const
        {
            return Data != nullptr;
        }

        inline const wchar_t* c_str() const
        {
            return Data;
        }

        std::string ToString() const
        {
            auto length = std::wcslen(Data);

            std::string str(length, '\0');

            std::use_facet<std::ctype<wchar_t>>(std::locale()).narrow(Data, Data + length, '?', &str[0]);

            return str;
        }
    };

    struct FName;

    inline void (*o_ProcessEvent)(void* a1, void* a2, void* a3);
    inline void (*FNameToString)(FName* This, FString& OutStr);

    struct FName
    {
        int32_t ComparisonIndex;
        int32_t Number;

        std::string ToString(bool bFullPath = false)
        {
            if (!this)
                return "";

            FString temp;

            FNameToString(this, temp);

            auto wName = std::wstring(temp.c_str());
            auto name = std::string(wName.begin(), wName.end());

            VirtualFree((PVOID)temp.c_str(), sizeof((void*)temp.c_str()), MEM_RELEASE);

            if (bFullPath)
                return name;

            auto pos = name.rfind('/');
            if (pos == std::string::npos)
            {
                return name;
            }

            return name.substr(pos + 1);
        }

        bool operator==(const FName& Other) const
        {
            return ComparisonIndex == Other.ComparisonIndex;
        }

        bool operator!=(const FName& Other) const
        {
            return ComparisonIndex != Other.ComparisonIndex;
        }

        bool operator<(const FName& Other) const
        {
            return ComparisonIndex < Other.ComparisonIndex;
        }

        bool operator<=(const FName& Other) const
        {
            return ComparisonIndex <= Other.ComparisonIndex;
        }

        bool operator>(const FName& Other) const
        {
            return ComparisonIndex > Other.ComparisonIndex;
        }

        bool operator>=(const FName& Other) const
        {
            return ComparisonIndex >= Other.ComparisonIndex;
        }

        std::wstring ToWString()
        {
            if (!this)
                return L"";

            FString temp;

            FNameToString(this, temp);

            auto wName = std::wstring(temp.c_str());

            VirtualFree((PVOID)temp.c_str(), sizeof((void*)temp.c_str()), MEM_RELEASE);

            auto pos = wName.rfind('/');
            if (pos == std::wstring::npos)
            {
                return wName;
            }

            return wName.substr(pos + 1);
        }
    };

    template <class TEnum>
    class TEnumAsByte
    {
    public:
        inline TEnumAsByte()
        {
        }

        inline TEnumAsByte(TEnum _value)
            : value(static_cast<uint8_t>(_value))
        {
        }

        explicit inline TEnumAsByte(int32_t _value)
            : value(static_cast<uint8_t>(_value))
        {
        }

        explicit inline TEnumAsByte(uint8_t _value)
            : value(_value)
        {
        }

        inline operator TEnum() const
        {
            return (TEnum)value;
        }

        inline TEnum GetValue() const
        {
            return (TEnum)value;
        }

    private:
        uint8_t value;
    };

    class FScriptInterface
    {
    private:
        UObject* ObjectPointer;
        void* InterfacePointer;

    public:
        inline UObject* GetObject() const
        {
            return ObjectPointer;
        }

        inline UObject*& GetObjectRef()
        {
            return ObjectPointer;
        }

        inline void* GetInterface() const
        {
            return ObjectPointer != nullptr ? InterfacePointer : nullptr;
        }
    };

    template <class InterfaceType>
    class TScriptInterface : public FScriptInterface
    {
    public:
        inline InterfaceType* operator->() const
        {
            return (InterfaceType*)GetInterface();
        }

        inline InterfaceType& operator*() const
        {
            return *((InterfaceType*)GetInterface());
        }

        inline operator bool() const
        {
            return GetInterface() != nullptr;
        }
    };

    struct FText
    {
        char UnknownData[0x18];
    };

    struct FScriptDelegate
    {
        char UnknownData[16];
    };

    struct FScriptMulticastDelegate
    {
        char UnknownData[16];
    };

    struct FWeakObjectPtr
    {
    public:
        bool IsValid() const;

        UObject* Get() const;

        int32_t ObjectIndex;
        int32_t ObjectSerialNumber;
    };

    template <class T, class TWeakObjectPtrBase = FWeakObjectPtr>
    struct TWeakObjectPtr : public TWeakObjectPtrBase
    {
    public:
        inline T* Get() const
        {
            return (T*)TWeakObjectPtrBase::Get();
        }

        inline T& operator*() const
        {
            return *Get();
        }

        inline T* operator->() const
        {
            return Get();
        }

        inline bool IsValid() const
        {
            return TWeakObjectPtrBase::IsValid();
        }
    };

    template <class T, class TBASE>
    class TAutoPointer : public TBASE
    {
    public:
        inline operator T* () const
        {
            return TBASE::Get();
        }

        inline operator const T* () const
        {
            return (const T*)TBASE::Get();
        }

        explicit inline operator bool() const
        {
            return TBASE::Get() != nullptr;
        }
    };

    template <class T>
    class TAutoWeakObjectPtr : public TAutoPointer<T, TWeakObjectPtr<T>>
    {
    public:
    };

    template <typename TObjectID>
    class TPersistentObjectPtr
    {
    public:
        FWeakObjectPtr WeakPtr;
        int32_t TagAtLastTest;
        TObjectID ObjectID;
    };

    struct FStringAssetReference_
    {
        char UnknownData[0x10];
    };

    class FAssetPtr : public TPersistentObjectPtr<FStringAssetReference_>
    {
    };

    template <typename ObjectType>
    class TAssetPtr : FAssetPtr
    {
    };

    struct FUniqueObjectGuid_
    {
        char UnknownData[0x10];
    };

    class FLazyObjectPtr : public TPersistentObjectPtr<FUniqueObjectGuid_>
    {
    };

    template <typename ObjectType>
    class TLazyObjectPtr : FLazyObjectPtr
    {
    };

#define NumBitsPerDWORD ((int)32)
#define NumBitsPerDWORDLogTwo ((int)5)

    static FORCEINLINE uint32_t CountLeadingZeros(uint32_t Value)
    {
        unsigned long Log2;
        if (_BitScanReverse(&Log2, Value) != 0)
        {
            return 31 - Log2;
        }

        return 32;
    }

    // Allocates Elements directly where the instance is created rather than on the heap
    template <int NumElements>
    class TInlineAllocator
    {
        template <int Size, int Alignment>
        struct alignas(Alignment) TAlligendBytes
        {
            uint8_t Pad[Size];
        };

        template <typename ElementType>
        struct TTypeCompatibleBytes : public TAlligendBytes<sizeof(ElementType), alignof(ElementType)>
        {
        };

    public:
        template <typename ElementType>
        class ForElementType
        {
            friend class TBitArray;

        public:
            TTypeCompatibleBytes<ElementType> InlineData[NumElements];

            ElementType* SecondaryData;

            FORCEINLINE int NumInlineBytes() const
            {
                return sizeof(ElementType) * NumElements;
            }
            FORCEINLINE int NumInlineBits() const
            {
                return NumInlineBytes() * 8;
            }

            FORCEINLINE ElementType& operator[](int Index)
            {
                return *(ElementType*)(&InlineData[Index]);
            }
            FORCEINLINE const ElementType& operator[](int Index) const
            {
                return *(ElementType*)(&InlineData[Index]);
            }

            FORCEINLINE void operator=(void* InElements)
            {
                SecondaryData = InElements;
            }

            FORCEINLINE ElementType& GetInlineElement(int Index)
            {
                return *(ElementType*)(&InlineData[Index]);
            }
            FORCEINLINE const ElementType& GetInlineElement(int Index) const
            {
                return *(ElementType*)(&InlineData[Index]);
            }
            FORCEINLINE ElementType& GetSecondaryElement(int Index)
            {
                return SecondaryData[Index];
            }
            FORCEINLINE const ElementType& GetSecondaryElement(int Index) const
            {
                return SecondaryData[Index];
            }
        };
    };

    class TBitArray
    {
    private:
        template <typename ArrayType>
        friend class TSparseArray;
        template <typename SetType>
        friend class TSet;

    private:
        TInlineAllocator<4>::ForElementType<uint32_t> Data;
        int NumBits;
        int MaxBits;

        struct FRelativeBitReference
        {
        public:
            FORCEINLINE explicit FRelativeBitReference(int BitIndex)
                : DWORDIndex(BitIndex >> NumBitsPerDWORDLogTwo)
                , Mask(1 << (BitIndex & ((NumBitsPerDWORD)-1)))
            {
            }

            int DWORDIndex;
            uint32_t Mask;
        };

    public:
        struct FBitReference
        {
            FORCEINLINE FBitReference(uint32_t& InData, uint32_t InMask)
                : Data(InData)
                , Mask(InMask)
            {
            }
            FORCEINLINE const FBitReference(const uint32_t& InData, const uint32_t InMask)
                : Data(const_cast<uint32_t&>(InData))
                , Mask(InMask)
            {
            }

            FORCEINLINE void SetBit(const bool Value)
            {
                Value ? Data |= Mask : Data &= ~Mask;

                // 10011101 - Data			 // 10011101 - Data
                // 00000010 - Mask - true |	 // 00000010 - Mask - false
                // 10011111	-  |=			 // 11111101 -  ~
                //							 // 10011111 -  &=
            }

            FORCEINLINE operator bool() const
            {
                return (Data & Mask) != 0;
            }
            FORCEINLINE void operator=(const bool Value)
            {
                this->SetBit(Value);
            }

        private:
            uint32_t& Data;
            uint32_t Mask;
        };

    public:
        class FBitIterator : public FRelativeBitReference
        {
        private:
            int Index;
            const TBitArray& IteratedArray;

        public:
            FORCEINLINE const FBitIterator(const TBitArray& ToIterate, const int StartIndex) // Begin
                : IteratedArray(ToIterate)
                , Index(StartIndex)
                , FRelativeBitReference(StartIndex)
            {
            }
            FORCEINLINE const FBitIterator(const TBitArray& ToIterate) // End
                : IteratedArray(ToIterate)
                , Index(ToIterate.NumBits)
                , FRelativeBitReference(ToIterate.NumBits)
            {
            }

            FORCEINLINE explicit operator bool() const
            {
                return Index < IteratedArray.Num();
            }
            FORCEINLINE FBitIterator& operator++()
            {
                ++Index;
                this->Mask <<= 1;
                if (!this->Mask)
                {
                    this->Mask = 1;
                    ++this->DWORDIndex;
                }
                return *this;
            }
            FORCEINLINE bool operator*() const
            {
                // Thesis: Once there are more elements in the BitArray than InlineData can hold it'll just allocate all of
                // them through SecondaryElements, leaving InlineData all true

                if (IteratedArray.NumBits < IteratedArray.Data.NumInlineBits())
                {
                    return (bool)FBitReference(IteratedArray.Data.GetInlineElement(this->DWORDIndex), this->Mask);
                }
                else
                {
                    return (bool)FBitReference(IteratedArray.Data.GetSecondaryElement(this->DWORDIndex), this->Mask);
                }
            }
            FORCEINLINE bool operator==(const FBitIterator& OtherIt) const
            {
                return Index == OtherIt.Index;
            }
            FORCEINLINE bool operator!=(const FBitIterator& OtherIt) const
            {
                return Index < /*=*/OtherIt.Index;
            }
            FORCEINLINE bool operator<(const int Other) const
            {
                return Index < Other;
            }
            FORCEINLINE bool operator>(const int Other) const
            {
                return Index < Other;
            }

            FORCEINLINE int GetIndex() const
            {
                return Index;
            }
        };

        class FSetBitIterator : public FRelativeBitReference
        {
        private:
            const TBitArray& IteratedArray;

            uint32_t UnvisitedBitMask;
            int CurrentBitIndex;
            int BaseBitIndex;

        public:
            FORCEINLINE FSetBitIterator(const TBitArray& ToIterate, int StartIndex)
                : FRelativeBitReference(StartIndex)
                , IteratedArray(const_cast<TBitArray&>(ToIterate))
                , UnvisitedBitMask((~0U) << (StartIndex & (NumBitsPerDWORD - 1)))
                , CurrentBitIndex(StartIndex)
                , BaseBitIndex(StartIndex & ~(NumBitsPerDWORD - 1))
            {
                if (StartIndex != IteratedArray.NumBits)
                {
                    FindNextSetBit();
                }
            }
            FORCEINLINE FSetBitIterator(const TBitArray& ToIterate)
                : FRelativeBitReference(ToIterate.NumBits)
                , IteratedArray(const_cast<TBitArray&>(ToIterate))
                , UnvisitedBitMask(0)
                , CurrentBitIndex(ToIterate.NumBits)
                , BaseBitIndex(ToIterate.NumBits)
            {
            }

            FORCEINLINE FSetBitIterator& operator++()
            {
                UnvisitedBitMask &= ~this->Mask;

                FindNextSetBit();

                return *this;
            }
            FORCEINLINE bool operator*() const
            {
                return true;
            }

            FORCEINLINE bool operator==(const FSetBitIterator& Other) const
            {
                return CurrentBitIndex == Other.CurrentBitIndex;
            }
            FORCEINLINE bool operator!=(const FSetBitIterator& Other) const
            {
                return CurrentBitIndex < /*=*/Other.CurrentBitIndex;
            }

            FORCEINLINE explicit operator bool() const
            {
                return CurrentBitIndex < IteratedArray.NumBits;
            }

            FORCEINLINE int GetIndex() const
            {
                return CurrentBitIndex;
            }

        private:
            void FindNextSetBit()
            {
                // InlineData is the first 16-bytes of TBitArray
                const uint32_t* ArrayData = (IteratedArray.NumBits < IteratedArray.Data.NumInlineBits() ? (uint32_t*)(&IteratedArray) : IteratedArray.Data.SecondaryData);

                if (ArrayData)
                {
                    const int ArrayNum = IteratedArray.NumBits;
                    const int LastDWORDIndex = (ArrayNum - 1) / NumBitsPerDWORD;

                    // std::cout << "ArrayNum: " << ArrayNum << " DWORDIndex: " << this->DWORDIndex << '\n';

                    if (ArrayNum > this->DWORDIndex)
                    {
                        uint32_t RemainingBitMask = ArrayData[this->DWORDIndex] & UnvisitedBitMask;
                        while (!RemainingBitMask)
                        {
                            ++this->DWORDIndex;
                            BaseBitIndex += NumBitsPerDWORD;

                            if (this->DWORDIndex > LastDWORDIndex)
                            {
                                CurrentBitIndex += ArrayNum;
                                return;
                            }

                            RemainingBitMask = ArrayData[this->DWORDIndex];
                            UnvisitedBitMask = ~0;
                        }

                        const uint32_t NewRemainingBitMask = RemainingBitMask & (RemainingBitMask - 1);

                        this->Mask = NewRemainingBitMask ^ RemainingBitMask;

                        CurrentBitIndex = BaseBitIndex + NumBitsPerDWORD - 1 - CountLeadingZeros(this->Mask);

                        if (CurrentBitIndex > ArrayNum)
                        {
                            CurrentBitIndex = ArrayNum;
                        }
                    }
                }
            }
        };

    public:
        FORCEINLINE FBitIterator Iterator(int StartIndex)
        {
            return FBitIterator(*this, StartIndex);
        }
        FORCEINLINE FSetBitIterator SetBitIterator(int StartIndex)
        {
            return FSetBitIterator(*this, StartIndex);
        }

        FORCEINLINE FBitIterator begin()
        {
            return FBitIterator(*this, 0);
        }
        FORCEINLINE const FBitIterator begin() const
        {
            return FBitIterator(*this, 0);
        }
        FORCEINLINE FBitIterator end()
        {
            return FBitIterator(*this);
        }
        FORCEINLINE const FBitIterator end() const
        {
            return FBitIterator(*this);
        }

        FORCEINLINE FSetBitIterator SetBitsItBegin()
        {
            return FSetBitIterator(*this, 0);
        }
        FORCEINLINE const FSetBitIterator SetBitsItBegin() const
        {
            return FSetBitIterator(*this, 0);
        }
        FORCEINLINE const FSetBitIterator SetBitsItEnd()
        {
            return FSetBitIterator(*this);
        }
        FORCEINLINE const FSetBitIterator SetBitsItEnd() const
        {
            return FSetBitIterator(*this);
        }

        FORCEINLINE int Num() const
        {
            return NumBits;
        }
        FORCEINLINE int Max() const
        {
            return MaxBits;
        }
        FORCEINLINE bool IsSet(int Index) const
        {
            return *FBitIterator(*this, Index);
        }
        FORCEINLINE void Set(const int Index, const bool Value, bool bIsSettingAllZero = false)
        {
            const int DWORDIndex = (Index >> ((int)5));
            const int Mask = (1 << (Index & (((int)32) - 1)));

            if (!bIsSettingAllZero)
                NumBits = Index >= NumBits ? Index < MaxBits ? Index + 1 : NumBits : NumBits;

            FBitReference(Data[DWORDIndex], Mask).SetBit(Value);
        }
        FORCEINLINE void ZeroAll()
        {
            for (int i = 0; i < MaxBits; i++)
            {
                Set(i, false, true);
            }
        }
        FORCEINLINE void Reset()
        {
            ZeroAll();
            NumBits = 0;
        }
    };

    template <typename ElementType>
    union TSparseArrayElementOrListLink
    {
        TSparseArrayElementOrListLink(ElementType& InElement)
            : ElementData(InElement)
        {
        }
        TSparseArrayElementOrListLink(ElementType&& InElement)
            : ElementData(InElement)
        {
        }

        TSparseArrayElementOrListLink(int InPrevFree, int InNextFree)
            : PrevFreeIndex(InPrevFree)
            , NextFreeIndex(InNextFree)
        {
        }

        TSparseArrayElementOrListLink<ElementType> operator=(const TSparseArrayElementOrListLink<ElementType>& Other)
        {
            return TSparseArrayElementOrListLink(Other.NextFreeIndex, Other.PrevFreeIndex);
        }

        /** If the element is allocated, its value is stored here. */
        ElementType ElementData;

        struct
        {
            /** If the element isn't allocated, this is a link to the previous element in the array's free list. */
            int PrevFreeIndex;

            /** If the element isn't allocated, this is a link to the next element in the array's free list. */
            int NextFreeIndex;
        };
    };

    template <typename ArrayType>
    class TSparseArray
    {
    private:
        template <typename SetType>
        friend class TSet;

    public:
        typedef TSparseArrayElementOrListLink<ArrayType> FSparseArrayElement;

    private:
        TArray<FSparseArrayElement> Data;
        TBitArray AllocationFlags;
        int FirstFreeIndex;
        int NumFreeIndices;

    public:
        class FBaseIterator
        {
        private:
            TSparseArray<ArrayType>& IteratedArray;
            TBitArray::FSetBitIterator BitArrayIt;

        public:
            FORCEINLINE FBaseIterator(const TSparseArray<ArrayType>& Array, const TBitArray::FSetBitIterator BitIterator)
                : IteratedArray(const_cast<TSparseArray<ArrayType>&>(Array))
                , BitArrayIt(const_cast<TBitArray::FSetBitIterator&>(BitIterator))
            {
            }

            FORCEINLINE explicit operator bool() const
            {
                return (bool)BitArrayIt;
            }
            FORCEINLINE TSparseArray<ArrayType>::FBaseIterator& operator++()
            {
                ++BitArrayIt;
                return *this;
            }
            FORCEINLINE ArrayType& operator*()
            {
                return IteratedArray[BitArrayIt.GetIndex()].ElementData;
            }
            FORCEINLINE const ArrayType& operator*() const
            {
                return IteratedArray[BitArrayIt.GetIndex()].ElementData;
            }
            FORCEINLINE ArrayType& operator->()
            {
                return IteratedArray[BitArrayIt.GetIndex()].ElementData;
            }
            FORCEINLINE const ArrayType& operator->() const
            {
                return IteratedArray[BitArrayIt.GetIndex()].ElementData;
            }
            FORCEINLINE bool operator==(const TSparseArray<ArrayType>::FBaseIterator& Other) const
            {
                return BitArrayIt == Other.BitArrayIt;
            }
            FORCEINLINE bool operator!=(const TSparseArray<ArrayType>::FBaseIterator& Other) const
            {
                return BitArrayIt != Other.BitArrayIt;
            }

            FORCEINLINE int GetIndex() const
            {
                return BitArrayIt.GetIndex();
            }
            FORCEINLINE bool IsElementValid() const
            {
                return *BitArrayIt;
            }
        };

    public:
        FORCEINLINE TSparseArray<ArrayType>::FBaseIterator begin()
        {
            return TSparseArray<ArrayType>::FBaseIterator(*this, TBitArray::FSetBitIterator(AllocationFlags, 0));
        }
        FORCEINLINE const TSparseArray<ArrayType>::FBaseIterator begin() const
        {
            return TSparseArray<ArrayType>::FBaseIterator(*this, TBitArray::FSetBitIterator(AllocationFlags, 0));
        }
        FORCEINLINE TSparseArray<ArrayType>::FBaseIterator end()
        {
            return TSparseArray<ArrayType>::FBaseIterator(*this, TBitArray::FSetBitIterator(AllocationFlags));
        }
        FORCEINLINE const TSparseArray<ArrayType>::FBaseIterator end() const
        {
            return TSparseArray<ArrayType>::FBaseIterator(*this, TBitArray::FSetBitIterator(AllocationFlags));
        }

        FORCEINLINE FSparseArrayElement& operator[](uint32_t Index)
        {
            return *(FSparseArrayElement*)&Data[Index].ElementData;
        }
        FORCEINLINE const FSparseArrayElement& operator[](uint32_t Index) const
        {
            return *(const FSparseArrayElement*)&Data[Index].ElementData;
        }

        FORCEINLINE int Num() const
        {
            return Data.Num() - NumFreeIndices;
        }
        FORCEINLINE int GetNumFreeIndices() const
        {
            return NumFreeIndices;
        }
        FORCEINLINE int GetFirstFreeIndex() const
        {
            return FirstFreeIndex;
        }
        FORCEINLINE const TArray<FSparseArrayElement>& GetData() const
        {
            return Data;
        }
        FORCEINLINE const TBitArray& GetAllocationFlags() const
        {
            return AllocationFlags;
        }
        FORCEINLINE bool IsIndexValid(int IndexToCheck) const
        {
            return AllocationFlags.IsSet(IndexToCheck);
        }

        FORCEINLINE bool RemoveAt(const int IndexToRemove)
        {
            if (IndexToRemove >= 0 && IndexToRemove < Data.Num() && AllocationFlags.IsSet(IndexToRemove))
            {
                int PreviousFreeIndex = -1;
                int NextFreeIndex = -1;

                if (NumFreeIndices == 0)
                {
                    FirstFreeIndex = IndexToRemove;
                    Data[IndexToRemove] = { -1, -1 };
                }
                else
                {
                    for (auto It = AllocationFlags.begin(); It != AllocationFlags.end(); ++It)
                    {
                        if (!It)
                        {
                            if (It.GetIndex() < IndexToRemove)
                            {
                                Data[IndexToRemove].PrevFreeIndex = It.GetIndex();
                            }
                            else if (It.GetIndex() > IndexToRemove)
                            {
                                Data[IndexToRemove].NextFreeIndex = It.GetIndex();
                                break;
                            }
                        }
                    }
                }
                AllocationFlags.Set(IndexToRemove, false);
                NumFreeIndices++;

                return true;
            }
            return false;
        }
        FORCEINLINE int Add(ArrayType InElement)
        {
            FSparseArrayElement Element(InElement);

            int NextFree;
            int OutIndex;
            if (FirstFreeIndex >= 1)
            {
                NextFree = Data[FirstFreeIndex].NextFreeIndex;
                Data[FirstFreeIndex] = Element;
                --NumFreeIndices;

                AllocationFlags.Set(FirstFreeIndex, true);

                if (NumFreeIndices >= 1)
                {
                    OutIndex = NextFree;
                    FirstFreeIndex = NextFree;
                    Data[NextFree].PrevFreeIndex = -1;

                    return OutIndex;
                }
            }
            else
            {
                Data.Add(Element);
                AllocationFlags.Set(Data.Num() - 1, true);

                return Data.Num() - 1;
            }
        }

        FORCEINLINE void Reset()
        {
            Data.Reset();
            FirstFreeIndex = -1;
            NumFreeIndices = 0;
            AllocationFlags.Reset();
        }
    };

    template <typename ElementType>
    class TSetElement
    {
    public:
        ElementType Value;
        mutable int HashNextId;
        mutable int HashIndex;

        TSetElement(ElementType InValue, int InHashNextId, int InHashIndex)
            : Value(InValue)
            , HashNextId(InHashNextId)
            , HashIndex(InHashIndex)
        {
        }

        FORCEINLINE TSetElement<ElementType>& operator=(const TSetElement<ElementType>& Other)
        {
            Value = Other.Value;
        }

        FORCEINLINE bool operator==(const TSetElement& Other) const
        {
            return Value == Other.Value;
        }
        FORCEINLINE bool operator!=(const TSetElement& Other) const
        {
            return Value != Other.Value;
        }
    };

    template <typename SetType>
    class TSet
    {
    private:
        friend TSparseArray;

    public:
        typedef TSetElement<SetType> ElementType;
        typedef TSparseArrayElementOrListLink<ElementType> ArrayElementType;

        TSparseArray<ElementType> Elements;

        TInlineAllocator<1>::ForElementType<int> Hash;
        int HashSize;

    public:
        class FBaseIterator
        {
        private:
            TSet<SetType>& IteratedSet;
            TSparseArray<ElementType>::FBaseIterator ElementIt;

        public:
            FORCEINLINE FBaseIterator(const TSet<SetType>& InSet, TSparseArray<TSetElement<SetType>>::FBaseIterator InElementIt)
                : IteratedSet(const_cast<TSet<SetType>&>(InSet))
                , ElementIt(InElementIt)
            {
            }

            FORCEINLINE explicit operator bool() const
            {
                return (bool)ElementIt;
            }
            FORCEINLINE TSet<SetType>::FBaseIterator& operator++()
            {
                ++ElementIt;
                return *this;
            }
            FORCEINLINE bool operator==(const TSet<SetType>::FBaseIterator& OtherIt) const
            {
                return ElementIt == OtherIt.ElementIt;
            }
            FORCEINLINE bool operator!=(const TSet<SetType>::FBaseIterator& OtherIt) const
            {
                return ElementIt != OtherIt.ElementIt;
            }
            FORCEINLINE TSet<SetType>::FBaseIterator& operator=(TSet<SetType>::FBaseIterator& OtherIt)
            {
                return ElementIt = OtherIt.ElementIt;
            }
            FORCEINLINE SetType& operator*()
            {
                return (*ElementIt).Value;
            }
            FORCEINLINE const SetType& operator*() const
            {
                return (*ElementIt).Value;
            }
            FORCEINLINE ElementType& operator->()
            {
                return *ElementIt;
            }
            FORCEINLINE const ElementType& operator->() const
            {
                return *ElementIt;
            }
            FORCEINLINE const int GetIndex() const
            {
                return ElementIt.GetIndex();
            }
            FORCEINLINE ElementType& GetSetElement()
            {
                return *ElementIt;
            }
            FORCEINLINE const ElementType& GetSetElement() const
            {
                return *ElementIt;
            }
            FORCEINLINE bool IsElementValid() const
            {
                return ElementIt.IsElementValid();
            }
        };

    public:
        FORCEINLINE TSet<SetType>::FBaseIterator begin()
        {
            return TSet<SetType>::FBaseIterator(*this, Elements.begin());
        }
        FORCEINLINE const TSet<SetType>::FBaseIterator begin() const
        {
            return TSet<SetType>::FBaseIterator(*this, Elements.begin());
        }
        FORCEINLINE TSet<SetType>::FBaseIterator end()
        {
            return TSet<SetType>::FBaseIterator(*this, Elements.end());
        }
        FORCEINLINE const TSet<SetType>::FBaseIterator end() const
        {
            return TSet<SetType>::FBaseIterator(*this, Elements.end());
        }

        FORCEINLINE SetType& operator[](int Index)
        {
            return Elements[Index].ElementData.Value;
        }

        FORCEINLINE int Num() const
        {
            return Elements.Num();
        }
        FORCEINLINE bool IsValid() const
        {
            return Elements.Data.Data != nullptr && Elements.AllocationFlags.MaxBits > 0;
        }
        FORCEINLINE TSparseArray<ElementType>& GetElements()
        {
            return Elements;
        }
        FORCEINLINE const TSparseArray<ElementType>& GetElements() const
        {
            return Elements;
        }
        FORCEINLINE const TBitArray& GetAllocationFlags() const
        {
            return Elements.GetAllocationFlags();
        }
        FORCEINLINE bool IsIndexValid(int IndexToCheck) const
        {
            return Elements.IsIndexValid(IndexToCheck);
        }
        FORCEINLINE const bool Contains(const SetType& ElementToLookFor) const
        {
            if (Num() <= 0)
                return false;

            for (SetType Element : *this)
            {
                if (Element == ElementToLookFor)
                    return true;
            }
            return false;
        }
        FORCEINLINE const int Find(const SetType& ElementToLookFor) const
        {
            for (auto It = this->begin(); It != this->end(); ++It)
            {
                if (*It == ElementToLookFor)
                {
                    return It.GetIndex();
                }
            }
            return -1;
        }
        FORCEINLINE bool Remove(const SetType& ElementToRemove)
        {
            return Elements.RemoveAt(Find(ElementToRemove));
        }
        FORCEINLINE int AddSingle(SetType InElement, int InHashIndex = 0, int InHashNextId = 0)
        {
            // ToDo: Check for duplication

            if (!this->IsValid())
                return this->Initialize();

            return Elements.AddSingle({ InElement, InHashIndex, InHashNextId });
        }
        FORCEINLINE void Initialize(const int NumElementsToInitWith = 5)
        {
            if (this->IsValid())
                return;

            Elements.Data.MaxElements = NumElementsToInitWith;
            Elements.Data.Count = NumElementsToInitWith;
            Elements.Data.Data = (ArrayElementType*)(std::malloc(NumElementsToInitWith * sizeof(ElementType)));
            for (int i = 0; i < NumElementsToInitWith; i++)
            {
                Elements.Data.Data[i].PrevFreeIndex = i - 1;
                Elements.Data.Data[i].NextFreeIndex = i + 1;
            }

            Elements.FirstFreeIndex = 0;
            Elements.NumFreeIndices = NumElementsToInitWith;

            Elements.AllocationFlags.MaxBits = 128;
            Elements.AllocationFlags.NumBits = NumElementsToInitWith;
            Elements.AllocationFlags.ZeroAll();

            Hash = std::malloc(NumElementsToInitWith * sizeof(ElementType));
            HashSize = NumElementsToInitWith * sizeof(ElementType);
        }

        FORCEINLINE void Reset()
        {
            Elements.Reset();
            Hash.InlineData->Pad[0] = 0;
            Hash.InlineData->Pad[1] = 0;
            Hash.InlineData->Pad[2] = 0;
            Hash.InlineData->Pad[3] = 0;
            Hash.SecondaryData = nullptr;
        }
    };

    template <typename KeyType, typename ValueType>
    class TPair
    {
    private:
        KeyType First;
        ValueType Second;

    public:
        TPair(KeyType Key, ValueType Value)
            : First(Key)
            , Second(Value)
        {
        }

    public:
        FORCEINLINE KeyType& Key()
        {
            return First;
        }
        FORCEINLINE const KeyType& Key() const
        {
            return First;
        }
        FORCEINLINE ValueType& Value()
        {
            return Second;
        }
        FORCEINLINE const ValueType& Value() const
        {
            return Second;
        }
    };

    template <typename KeyType, typename ValueType>
    class TMap
    {
    public:
        typedef TPair<KeyType, ValueType> ElementType;

    private:
        TSet<ElementType> Pairs;

    public:
        class FBaseIterator
        {
        private:
            TMap<KeyType, ValueType>& IteratedMap;
            TSet<ElementType>::FBaseIterator SetIt;

        public:
            FBaseIterator(TMap<KeyType, ValueType>& InMap, TSet<ElementType>::FBaseIterator InSet)
                : IteratedMap(InMap)
                , SetIt(InSet)
            {
            }
            FORCEINLINE TMap<KeyType, ValueType>::FBaseIterator operator++()
            {
                ++SetIt;
                return *this;
            }
            FORCEINLINE TMap<KeyType, ValueType>::ElementType& operator*()
            {
                return *SetIt;
            }
            FORCEINLINE const TMap<KeyType, ValueType>::ElementType& operator*() const
            {
                return *SetIt;
            }
            FORCEINLINE bool operator==(const TMap<KeyType, ValueType>::FBaseIterator& Other) const
            {
                return SetIt == Other.SetIt;
            }
            FORCEINLINE bool operator!=(const TMap<KeyType, ValueType>::FBaseIterator& Other) const
            {
                return SetIt != Other.SetIt;
            }
            FORCEINLINE bool IsElementValid() const
            {
                return SetIt.IsElementValid();
            }
        };

        FORCEINLINE TMap<KeyType, ValueType>::FBaseIterator begin()
        {
            return TMap<KeyType, ValueType>::FBaseIterator(*this, Pairs.begin());
        }
        FORCEINLINE const TMap<KeyType, ValueType>::FBaseIterator begin() const
        {
            return TMap<KeyType, ValueType>::FBaseIterator(*this, Pairs.begin());
        }
        FORCEINLINE TMap<KeyType, ValueType>::FBaseIterator end()
        {
            return TMap<KeyType, ValueType>::FBaseIterator(*this, Pairs.end());
        }
        FORCEINLINE const TMap<KeyType, ValueType>::FBaseIterator end() const
        {
            return TMap<KeyType, ValueType>::FBaseIterator(*this, Pairs.end());
        }
        FORCEINLINE ValueType& operator[](const KeyType& Key)
        {
            return this->GetByKey(Key);
        }
        FORCEINLINE const ValueType& operator[](const KeyType& Key) const
        {
            return this->GetByKey(Key);
        }
        FORCEINLINE auto GetPairs()
        {
            return Pairs;
        }
        FORCEINLINE int Num() const
        {
            return Pairs.Num();
        }
        FORCEINLINE bool IsValid() const
        {
            return Pairs.IsValid();
        }
        FORCEINLINE bool IsIndexValid(int IndexToCheck) const
        {
            return Pairs.IsIndexValid(IndexToCheck);
        }
        FORCEINLINE void Initialize(const int NumElementsToInitWith = 5)
        {
            return Pairs.Initialize(NumElementsToInitWith);
        }
        FORCEINLINE bool Contains(const KeyType& ElementToLookFor) const
        {
            for (auto Element : *this)
            {
                if (Element.Key() == ElementToLookFor)
                    return true;
            }
            return false;
        }
        FORCEINLINE int AddSingle(KeyType InKey, ValueType InValue)
        {
            return Pairs.AddSingle({ InKey, InValue });
        }
        FORCEINLINE int AddSingle(ElementType InElement)
        {
            return Pairs.AddSingle(InElement);
        }
        FORCEINLINE ValueType& GetByKey(const KeyType& Key)
        {
            for (auto Pair : *this)
            {
                if (Pair.Key() == Key)
                {
                    return Pair.Value();
                }
            }
        }
        FORCEINLINE ValueType GetByKeyNoRef(const KeyType& Key)
        {
            for (auto Pair : *this)
            {
                if (Pair.Key() == Key)
                {
                    return Pair.Value();
                }
            }
        }

        FORCEINLINE void Reset()
        {
            Pairs.Reset();
        }
    };

    template <typename PtrType>
    class TUniquePtr
    {
    private:
        PtrType* Ptr;

    public:
        bool IsValid() const
        {
            return Ptr != nullptr;
        }

        FORCEINLINE explicit operator bool() const
        {
            return IsValid();
        }

        FORCEINLINE bool operator!() const
        {
            return !IsValid();
        }

        FORCEINLINE PtrType* operator->() const
        {
            return Ptr;
        }

        FORCEINLINE PtrType& operator*() const
        {
            return *Ptr;
        }

        FORCEINLINE const PtrType*& Get() const
        {
            return Ptr;
        }

        FORCEINLINE PtrType*& Get()
        {
            return Ptr;
        }
    };

    template <class ObjectType>
    class TSharedPtr
    {
    public:
        ObjectType* Object;

        int SharedReferenceCount;
        int WeakReferenceCount;

        FORCEINLINE ObjectType* Get()
        {
            return Object;
        }
        FORCEINLINE ObjectType* Get() const
        {
            return Object;
        }
        FORCEINLINE ObjectType& operator*()
        {
            return *Object;
        }
        FORCEINLINE const ObjectType& operator*() const
        {
            return *Object;
        }
        FORCEINLINE ObjectType* operator->()
        {
            return Object;
        }

        FORCEINLINE bool operator==(const TSharedPtr<ObjectType>& Other)
        {
            return Object == Other.Object;
        }
    };
}

#ifdef _MSC_VER
#pragma pack(pop)
#endif