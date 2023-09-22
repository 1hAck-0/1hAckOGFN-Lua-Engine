#pragma once

// Fortnite (7.4) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Biplane_AnimBP_Base.Biplane_AnimBP_Base_C
// 0x2E78 (0x3318 - 0x04A0)
class UBiplane_AnimBP_Base_C : public UFortFerretVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A64784764ADC9A502A9787AFD88B4907;// 0x04A8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BDBBCBF9483B76BBF9C937BA5B6C29D5;// 0x05B0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F0986EA143C674B3EE5E02944C54453C;// 0x06B8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                 // 0x07C0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone02;                               // 0x08C8(0x0108)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt;                                     // 0x09D0(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_DC188DFC42B264935F40299C5A05169D;    // 0x0B80(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_FF71ECA0450E871EE748068DC265AD22;    // 0x0D30(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_DCE5C6144A394DB45B1128A84B2642FE;    // 0x0EE0(0x01B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone03;                               // 0x1090(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D3F5900A4CB6AA04961791BE6B92910E;// 0x1198(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DEE4FFE6414A29670B098BABB7447E83;// 0x12A0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BFC8A18B41A60D6810432AB4F47F34F0;// 0x13A8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone04;                               // 0x14B0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone05;                               // 0x15B8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone06;                               // 0x16C0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone07;                               // 0x17C8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone08;                               // 0x18D0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone09;                               // 0x19D8(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x1AE0(0x0020)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x1B00(0x0020)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt02;                                   // 0x1B20(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt03;                                   // 0x1CD0(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt04;                                   // 0x1E80(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt05;                                   // 0x2030(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt06;                                   // 0x21E0(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt07;                                   // 0x2390(0x01B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone10;                               // 0x2540(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone11;                               // 0x2648(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone12;                               // 0x2750(0x0108)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                           // 0x2858(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult02;                         // 0x2880(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult03;                         // 0x28A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F6DE82AB4947D10AC9D210B1409FD711;// 0x28D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F18C1D1645DD78B42618E3BD0CC91504;// 0x28F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F6AFB6D846863BD93F986BB2BA8B9C7A;// 0x2920(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                             // 0x2948(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_C3D6B905421658875500FCB4F0D74FDF;// 0x29C0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer02;                           // 0x29E0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                // 0x2A58(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer03;                           // 0x2A78(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult02;                              // 0x2AF0(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                           // 0x2B10(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult03;                              // 0x2BF0(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_C9B1FF1740F5298F528473A33D2EEFA6;// 0x2C10(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_FF8407764A76EB8096E8D99A3A383626;// 0x2CF0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                               // 0x2D10(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_C8FA9F5C4E4457FAC0E8A590D0FF6895;// 0x2DC0(0x0020)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive;                              // 0x2DE0(0x00C8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult04;                         // 0x2EA8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult05;                         // 0x2ED0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult06;                         // 0x2EF8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult07;                         // 0x2F20(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult08;                         // 0x2F48(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CC4782A2402234350EDF56B8DEE753DB;// 0x2F70(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_CECD382F47BD128C000AAB8FE3B9019D;// 0x2FE8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A980AE6545D1E6220A9403898C891F47;// 0x3008(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E0ADDA814D9B0EC030ECA0AD781A1247;// 0x3080(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F4EA455A42013ED7AEA714B26A9D9509;// 0x30A0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult04;                              // 0x3118(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer04;                           // 0x3138(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult05;                              // 0x31B0(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CB4F9DAD4BF4352168E06D9E3323CAD5;// 0x31D0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult06;                              // 0x3248(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine02;                             // 0x3268(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Biplane_AnimBP_Base.Biplane_AnimBP_Base_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Biplane_AnimBP_Base_AnimGraphNode_BlendSpacePlayer();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Biplane_AnimBP_Base_AnimGraphNode_ModifyBone();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Biplane_AnimBP_Base_AnimGraphNode_ModifyBone_D3F5900A4CB6AA04961791BE6B92910E();
	void ExecuteUbergraph_Biplane_AnimBP_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
