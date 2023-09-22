// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
	GlobalObjectsArray* UObject::GObjects = nullptr;
	//std::map<std::string, uintptr_t> UObject::ObjectsCache = {};
	std::vector<std::pair<std::string, uintptr_t>> UObject::ObjectsCache = {};
	//---------------------------------------------------------------------------
	bool FWeakObjectPtr::IsValid() const
	{
		return false;
	}
	//---------------------------------------------------------------------------
	UObject* FWeakObjectPtr::Get() const
	{
		for (int i = 0; i < UObject::GObjects->Num(); i++)
		{
			auto Object = UObject::GObjects->GetByIndex(i);

			if (!Object)
				continue;

			if (i == ObjectIndex)
				return Object;
		}

		return nullptr;
	}
	//---------------------------------------------------------------------------
}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
