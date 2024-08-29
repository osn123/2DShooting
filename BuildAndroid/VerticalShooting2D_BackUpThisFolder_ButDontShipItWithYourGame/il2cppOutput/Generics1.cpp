#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};

struct U3CAnyAsyncU3Ed__0_1_tC5A26A942407B0F559D11031DC5D9E153A3C25AE;
struct U3CAnyAsyncU3Ed__1_1_t8E72A4C00F10B48E01D1E28C464D980B19ACDCAB;
struct U3CAnyAwaitAsyncU3Ed__2_1_t35E2FF0F0EA95D7A7F26DFCCEF9BF7694904DD25;
struct U3CAnyAwaitWithCancellationAsyncU3Ed__3_1_t80086595F6A0BBAFC39EF20D2C66D9AB55BF1411;
struct U3CAverageAsyncU3Ed__13_1_tF4497F5FC4DE74DA6C196678ED361D0D2A97A2A6;
struct U3CAverageAsyncU3Ed__17_1_tAD8B4205081C02C2594BCB614DAB236500FBB75E;
struct U3CAverageAsyncU3Ed__1_1_t159C2C09DDCD5B3BF8254D77B69FBB0B77FE048B;
struct U3CAverageAsyncU3Ed__21_1_t1332FF70F0A3589494CB18B96F4F4A731100690A;
struct U3CAverageAsyncU3Ed__25_1_t50DC0406CEF02DAB876282D754EA66F5781A80BF;
struct U3CAverageAsyncU3Ed__29_1_t022577A8DD5BDABA432E986818E1E4B759AE6B49;
struct U3CAverageAsyncU3Ed__33_1_tB5ED8AAD653CC1552876093A060CB51E7A2235BF;
struct U3CAverageAsyncU3Ed__37_1_tF6158B69B5E1C0CFF9AA07D2DB76CA10B145EC26;
struct U3CAverageAsyncU3Ed__5_1_t84BCC31CD3BC2E5D922564232FEDCBDFF53E19E2;
struct U3CAverageAsyncU3Ed__9_1_tF35F45927FD2FC27A65CF71EACCFEEB439F2B87D;
struct U3CAverageAwaitAsyncU3Ed__10_1_t5D0FB99AA9FEC1C73FBC2EE8C59B3E58BF40C867;
struct U3CAverageAwaitAsyncU3Ed__14_1_t9A8C09FDAF75D12C8D248536BF9A707B18D66F63;
struct U3CAverageAwaitAsyncU3Ed__18_1_t6FB452C63FD8B313DCD340AEAC77F48F395F0D14;
struct U3CAverageAwaitAsyncU3Ed__22_1_t6ACF89349A1ADA4A61F83D20FFB2D385035CE624;
struct U3CAverageAwaitAsyncU3Ed__26_1_t4A064A93DEC1BE815476E1B98F2EC9981EC964E5;
struct U3CAverageAwaitAsyncU3Ed__2_1_t3241690F59243BF1EC03264EFCC40C3C82718B77;
struct U3CAverageAwaitAsyncU3Ed__30_1_t1B91FA738692CE65DB747C8606C4EFA4FBC2C97C;
struct U3CAverageAwaitAsyncU3Ed__34_1_t53FE7D4236A524E65C4060CD9DF2F5BD6112ED2A;
struct U3CAverageAwaitAsyncU3Ed__38_1_t033B46F89946CC1CA0F521A8F9086B9E2458454B;
struct U3CAverageAwaitAsyncU3Ed__6_1_t3691944FA8BC631E4794C68710C761652161B0BF;
struct U3CAverageAwaitWithCancellationAsyncU3Ed__11_1_tDA0926F879D4DFE9E9196F374B8E80FA70547103;
struct U3CAverageAwaitWithCancellationAsyncU3Ed__15_1_tB093D6BB8EF29AA4A5EA8BC6B7371EB332077809;
struct U3CAverageAwaitWithCancellationAsyncU3Ed__19_1_t6C66A45139BAB01BADEBFE4E9DF12F84C0B643CA;
struct U3CAverageAwaitWithCancellationAsyncU3Ed__23_1_tE4D1E229AF2A45D5A6DF95DFCD6AFDD6AF3BE456;
struct U3CAverageAwaitWithCancellationAsyncU3Ed__27_1_t3ED24D2012614088A57E12CF0065332EF3C04F7E;
struct U3CAverageAwaitWithCancellationAsyncU3Ed__31_1_t5EC5BBE56145450D82111D1EACF491C5DE92DE4F;
struct U3CAverageAwaitWithCancellationAsyncU3Ed__35_1_t01F222573BFC23A5A95113AD81969CB98966F508;
struct U3CAverageAwaitWithCancellationAsyncU3Ed__39_1_t50C4E469171E993FFEFE1DE41DE151995E31ADA2;
struct U3CAverageAwaitWithCancellationAsyncU3Ed__3_1_t94F7D5E6B37B9A060647B191C4B93E9E4D47385E;
struct U3CAverageAwaitWithCancellationAsyncU3Ed__7_1_tF84BDDE66F565787632536D0CE42E7E70470F740;
struct U3CBindToCoreU3Ed__12_2_tC0C0AD26350D5274BE3703D1A40F35C8693897CA;
struct U3CBindToCoreU3Ed__6_1_tFAAEED6C5DED441AFA0394C84B7C64DFD978AD2F;
struct U3CBindToCoreU3Ed__6_1_t86689E04CADC36E81BC1A54F65539102D6B5CB49;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
struct Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8;
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
struct Func_2_t02AAAA5ED63E37D8013889ECE551ED5172A9F7A4;
struct Func_2_tB9099E603733365FA636ABD4F1512E954C883863;
struct Func_2_t0DE0378A8A90F3B8204450750A771096D0F75A98;
struct Func_2_tFC0477C87E7518136DEE345DCF44B6ACA22E24F0;
struct Func_2_tCDF39BBC1094782C50BE631779E8FD895BFEAF32;
struct Func_2_t041ABB3F33302FF5B428FF832CE110343F4DA4C6;
struct Func_2_tEBD22D2F4376CEDF9152BDE05B6E363699F0C7E1;
struct Func_2_tCD782F33543995850D4A4AF7569D83504640F79F;
struct Func_2_t898AEF8B0AC8B5CB054F91316F69A4739DB2E5B6;
struct Func_2_t9F80A31065CD628F063DA0D192A111706F695666;
struct Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C;
struct Func_2_tD6766C7D6227AC2A45F7EDFC827BDFC58C8EFE78;
struct Func_2_tF452F3FF30306E919291E498D051B5F208EB38CF;
struct Func_2_t6561E0DBB0FBFCB8DBFA46F392A86C31706164F5;
struct Func_2_t04742C32F6BEF8B1199EACA5BD7F68C041603B6D;
struct Func_2_t844387A4F32860587989B5D1B9F3950D6D5901DE;
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
struct Func_2_t5ABD904FFCFC84BA711C9261A36E9482990A6CA7;
struct Func_2_tF36C7D1152BF6807C03112D4A053E5038A13A6EB;
struct Func_2_t8DB808B3690BFDBD7B936631B430453B90DBBDE7;
struct Func_2_t08AB71331BE9C65EB982154CBB27F90B5B62A771;
struct Func_2_tFAB3D8EFCE4F55CAB3F80EABAB10F8226D7FEBF6;
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
struct Func_3_t428A771ED20C241CDDC6BDF17284D499B16CBD70;
struct Func_3_tD24255148664E4908FBCB566B787F36A4988A2BB;
struct Func_3_tA0DEFAEF785E5E0D32E2CABA4CBDB7F9D34C2B8D;
struct Func_3_t4111B7EAAEBCF4004223B4E554711FE862E5C3B2;
struct Func_3_t5604379C942DED2B342DEED029BC1AB35C5A06A1;
struct Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814;
struct Func_3_tE135AFB66CDB73C25CDE9CDD97913EE0CF6337D7;
struct Func_3_tB356387A25DA85D9F4DDAAEEFD39A96B3F81FA95;
struct Func_3_t4B0BED2CC5C1B3C74670633A89F91C13C1A0F1E4;
struct Func_3_t76BD268388DCE8B514D513440272B79CC88C6413;
struct Func_3_t79F461272893123C05C047A343D70B9B775827E4;
struct IStateMachineRunnerPromise_1_t8D57C4F4548F3BCD478D68C0B1214D4BF62AA68D;
struct IStateMachineRunnerPromise_1_t51E154A16BAD95B7D398B5F0702C3E66265C53DA;
struct IStateMachineRunnerPromise_1_t1AB0B5E2CA50004E9184B2F5382B9C646CD88F94;
struct IStateMachineRunnerPromise_1_tE89ECD2876CAE5961DE51F0E207D9EE40476C855;
struct IStateMachineRunnerPromise_1_t9061D15A609C242C57AE7E2186438B3A765049A0;
struct IStateMachineRunnerPromise_1_t60C36DF27100A1AAC871929239A758A920192D30;
struct IStateMachineRunnerPromise_1_t13A438173E94750804DBD5134EB865935FADCFD8;
struct IUniTaskAsyncEnumerable_1_tB465D2725680B21CF3074178AECADD1D24C24A74;
struct IUniTaskAsyncEnumerator_1_t256C7409E6B13FF3224A57D2DD1A4D52A2C40092;
struct IUniTaskSource_1_t485459C6F6CB25D26E56105B8D0749F0FAD63B61;
struct IUniTaskSource_1_tCE4346B1A4E6A33744233A2262F33E59C6306CA1;
struct IUniTaskSource_1_tED8322E8A8E850EEDF72FF9B9F242963B2ECE7FE;
struct IUniTaskSource_1_tE3D8C7FB2D80191B4F79AF51153AD33F56C16C37;
struct IUniTaskSource_1_t5F2BFA96825F2DFE4BA08A68BC159258E438D103;
struct IUniTaskSource_1_tB6B218F9BB467453A6CBAEE053820D3B3E8F891C;
struct IUniTaskSource_1_t43ECD5543FAA73E407F28F30300FAA39B7D954B0;
struct IUniTaskSource_1_t7B60863D376A1004EF4553185A8DC483A70F720C;
struct IUniTaskSource_1_t8F97352CA996D0781DB009E630AB2143DE1614D3;
struct IUniTaskSource_1_tE897B7736A4F7A6923CE32E4D43E3506188EE795;
struct IUniTaskSource_1_tD745CD56EC6E5CB710B56755B2E0F56C83FD8F2F;
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148;
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
struct IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D;
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct MethodInfo_t;
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m33574CDAA01061AEA24434F9DE51A5B4F03A18A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757  : public RuntimeObject
{
	Exception_t* ___m_Exception_0;
	RuntimeObject* ___m_stackTrace_1;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength_4;
	Il2CppChar ____firstChar_5;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 
{
	RuntimeObject* ___runnerPromise_0;
	Exception_t* ___ex_1;
	bool ___result_2;
	RuntimeObject* ___debuggingId_3;
};
struct AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408 
{
	RuntimeObject* ___runnerPromise_0;
	Exception_t* ___ex_1;
	double ___result_2;
	RuntimeObject* ___debuggingId_3;
};
struct AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3 
{
	RuntimeObject* ___runnerPromise_0;
	Exception_t* ___ex_1;
	float ___result_2;
	RuntimeObject* ___debuggingId_3;
};
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	bool ___hasValue_0;
	double ___value_1;
};
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	bool ___hasValue_0;
	int32_t ___value_1;
};
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	bool ___hasValue_0;
	int64_t ___value_1;
};
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	bool ___hasValue_0;
	float ___value_1;
};
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	int32_t ___index_1;
	int32_t ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	int32_t ___index_1;
	int32_t ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	int32_t ___index_1;
	int32_t ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	int32_t ___index_1;
	float ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	int32_t ___index_1;
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 
{
	RuntimeObject* ___source_0;
	bool ___result_1;
	int16_t ___token_2;
};
struct UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C 
{
	RuntimeObject* ___source_0;
	double ___result_1;
	int16_t ___token_2;
};
struct UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 
{
	RuntimeObject* ___source_0;
	int32_t ___result_1;
	int16_t ___token_2;
};
struct UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72 
{
	RuntimeObject* ___source_0;
	int64_t ___result_1;
	int16_t ___token_2;
};
struct UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1 
{
	RuntimeObject* ___source_0;
	float ___result_1;
	int16_t ___token_2;
};
struct AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B 
{
	RuntimeObject* ___runner_0;
	RuntimeObject* ___debuggingId_1;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value_0;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r_0;
	float ___g_1;
	float ___b_2;
	float ___a_3;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value_0;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value_0;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value_0;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value_0;
};
struct IntPtr_t 
{
	void* ___m_value_0;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	bool ___isDefaultMaterial_4;
	bool ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00_0;
	float ___m10_1;
	float ___m20_2;
	float ___m30_3;
	float ___m01_4;
	float ___m11_5;
	float ___m21_6;
	float ___m31_7;
	float ___m02_8;
	float ___m12_9;
	float ___m22_10;
	float ___m32_11;
	float ___m03_12;
	float ___m13_13;
	float ___m23_14;
	float ___m33_15;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value_0;
};
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	uint8_t ___bold_0;
	uint8_t ___italic_1;
	uint8_t ___underline_2;
	uint8_t ___strikethrough_3;
	uint8_t ___highlight_4;
	uint8_t ___superscript_5;
	uint8_t ___subscript_6;
	uint8_t ___uppercase_7;
	uint8_t ___lowercase_8;
	uint8_t ___smallcaps_9;
};
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	float ___m_Left_0;
	float ___m_Right_1;
	float ___m_Top_2;
	float ___m_Bottom_3;
};
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 
{
	RuntimeObject* ___source_0;
	int16_t ___token_1;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x_0;
	float ___y_1;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x_1;
	float ___y_2;
	float ___z_3;
	float ___w_4;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	int32_t ___m_Count_1;
};
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray* ___m_Array_0;
	int32_t ___m_Count_1;
};
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray* ___m_Array_0;
	int32_t ___m_Count_1;
};
struct AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438 
{
	RuntimeObject* ___runnerPromise_0;
	Exception_t* ___ex_1;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___result_2;
	RuntimeObject* ___debuggingId_3;
};
struct AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88 
{
	RuntimeObject* ___runnerPromise_0;
	Exception_t* ___ex_1;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___result_2;
	RuntimeObject* ___debuggingId_3;
};
struct AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166 
{
	RuntimeObject* ___runnerPromise_0;
	Exception_t* ___ex_1;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___result_2;
	RuntimeObject* ___debuggingId_3;
};
struct Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 
{
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 ___task_0;
};
struct Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 
{
	UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C ___task_0;
};
struct Awaiter_t8953594D03299DE782894F4A865CED79F2504266 
{
	UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 ___task_0;
};
struct Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E 
{
	UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72 ___task_0;
};
struct Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D 
{
	UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1 ___task_0;
};
struct Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB 
{
	bool ___hasValue_0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value_1;
};
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	int32_t ___index_1;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	int32_t ___index_1;
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E 
{
	RuntimeObject* ___source_0;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___result_1;
	int16_t ___token_2;
};
struct UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05 
{
	RuntimeObject* ___source_0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___result_1;
	int16_t ___token_2;
};
struct UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C 
{
	RuntimeObject* ___source_0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___result_1;
	int16_t ___token_2;
};
struct UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46 
{
	RuntimeObject* ___source_0;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___result_1;
	int16_t ___token_2;
};
struct UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3 
{
	RuntimeObject* ___source_0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___result_1;
	int16_t ___token_2;
};
struct Delegate_t  : public RuntimeObject
{
	Il2CppMethodPointer ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	RuntimeObject* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	bool ___method_is_virtual_12;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className_1;
	String_t* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t* ____innerException_4;
	String_t* ____helpURL_5;
	RuntimeObject* ____stackTrace_6;
	String_t* ____stackTraceString_7;
	String_t* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	RuntimeObject* ____dynamicMethods_10;
	int32_t ____HResult_11;
	String_t* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr_0;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr_0;
};
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_marshaled_pinvoke
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_marshaled_com
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};
struct U3CAnyAsyncU3Ed__0_1_tC5A26A942407B0F559D11031DC5D9E153A3C25AE  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_3;
	RuntimeObject* ___U3CeU3E5__1_4;
	RuntimeObject* ___U3CU3Es__2_5;
	int32_t ___U3CU3Es__3_6;
	bool ___U3CU3Es__4_7;
	bool ___U3CU3Es__5_8;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_9;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_10;
};
struct U3CAnyAsyncU3Ed__1_1_t8E72A4C00F10B48E01D1E28C464D980B19ACDCAB  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	RuntimeObject* ___U3CeU3E5__1_5;
	RuntimeObject* ___U3CU3Es__2_6;
	int32_t ___U3CU3Es__3_7;
	bool ___U3CU3Es__4_8;
	bool ___U3CU3Es__5_9;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_10;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_11;
};
struct U3CAnyAwaitAsyncU3Ed__2_1_t35E2FF0F0EA95D7A7F26DFCCEF9BF7694904DD25  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C* ___predicate_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	RuntimeObject* ___U3CeU3E5__1_5;
	RuntimeObject* ___U3CU3Es__2_6;
	int32_t ___U3CU3Es__3_7;
	bool ___U3CU3Es__4_8;
	bool ___U3CU3Es__5_9;
	bool ___U3CU3Es__6_10;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_11;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_12;
};
struct U3CAnyAwaitWithCancellationAsyncU3Ed__3_1_t80086595F6A0BBAFC39EF20D2C66D9AB55BF1411  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814* ___predicate_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	RuntimeObject* ___U3CeU3E5__1_5;
	RuntimeObject* ___U3CU3Es__2_6;
	int32_t ___U3CU3Es__3_7;
	bool ___U3CU3Es__4_8;
	bool ___U3CU3Es__5_9;
	bool ___U3CU3Es__6_10;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_11;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_12;
};
struct U3CAverageAsyncU3Ed__13_1_tF4497F5FC4DE74DA6C196678ED361D0D2A97A2A6  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_tF36C7D1152BF6807C03112D4A053E5038A13A6EB* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CcountU3E5__1_5;
	double ___U3CsumU3E5__2_6;
	RuntimeObject* ___U3CeU3E5__3_7;
	RuntimeObject* ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	bool ___U3CU3Es__6_10;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_11;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_12;
};
struct U3CAverageAsyncU3Ed__17_1_tAD8B4205081C02C2594BCB614DAB236500FBB75E  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_t5ABD904FFCFC84BA711C9261A36E9482990A6CA7* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CcountU3E5__1_5;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CsumU3E5__2_6;
	RuntimeObject* ___U3CeU3E5__3_7;
	RuntimeObject* ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	bool ___U3CU3Es__6_10;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_11;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_12;
};
struct U3CAverageAsyncU3Ed__1_1_t159C2C09DDCD5B3BF8254D77B69FBB0B77FE048B  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_t8DB808B3690BFDBD7B936631B430453B90DBBDE7* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CcountU3E5__1_5;
	int32_t ___U3CsumU3E5__2_6;
	RuntimeObject* ___U3CeU3E5__3_7;
	RuntimeObject* ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	bool ___U3CU3Es__6_10;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_11;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_12;
};
struct U3CAverageAsyncU3Ed__21_1_t1332FF70F0A3589494CB18B96F4F4A731100690A  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_t0DE0378A8A90F3B8204450750A771096D0F75A98* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CcountU3E5__1_5;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CsumU3E5__2_6;
	RuntimeObject* ___U3CeU3E5__3_7;
	RuntimeObject* ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CvU3E5__6_10;
	bool ___U3CU3Es__7_11;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_12;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_13;
};
struct U3CAverageAsyncU3Ed__25_1_t50DC0406CEF02DAB876282D754EA66F5781A80BF  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_tFC0477C87E7518136DEE345DCF44B6ACA22E24F0* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CcountU3E5__1_5;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CsumU3E5__2_6;
	RuntimeObject* ___U3CeU3E5__3_7;
	RuntimeObject* ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CvU3E5__6_10;
	bool ___U3CU3Es__7_11;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_12;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_13;
};
struct U3CAverageAsyncU3Ed__29_1_t022577A8DD5BDABA432E986818E1E4B759AE6B49  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_tCDF39BBC1094782C50BE631779E8FD895BFEAF32* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CcountU3E5__1_5;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CsumU3E5__2_6;
	RuntimeObject* ___U3CeU3E5__3_7;
	RuntimeObject* ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CvU3E5__6_10;
	bool ___U3CU3Es__7_11;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_12;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_13;
};
struct U3CAverageAsyncU3Ed__33_1_tB5ED8AAD653CC1552876093A060CB51E7A2235BF  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_tB9099E603733365FA636ABD4F1512E954C883863* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CcountU3E5__1_5;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CsumU3E5__2_6;
	RuntimeObject* ___U3CeU3E5__3_7;
	RuntimeObject* ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CvU3E5__6_10;
	bool ___U3CU3Es__7_11;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_12;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_13;
};
struct U3CAverageAsyncU3Ed__5_1_t84BCC31CD3BC2E5D922564232FEDCBDFF53E19E2  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_t08AB71331BE9C65EB982154CBB27F90B5B62A771* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CcountU3E5__1_5;
	int64_t ___U3CsumU3E5__2_6;
	RuntimeObject* ___U3CeU3E5__3_7;
	RuntimeObject* ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	bool ___U3CU3Es__6_10;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_11;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_12;
};
struct U3CAverageAsyncU3Ed__9_1_tF35F45927FD2FC27A65CF71EACCFEEB439F2B87D  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_tFAB3D8EFCE4F55CAB3F80EABAB10F8226D7FEBF6* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CcountU3E5__1_5;
	float ___U3CsumU3E5__2_6;
	RuntimeObject* ___U3CeU3E5__3_7;
	RuntimeObject* ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	bool ___U3CU3Es__6_10;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_11;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_12;
};
struct U3CAverageAwaitAsyncU3Ed__10_1_t5D0FB99AA9FEC1C73FBC2EE8C59B3E58BF40C867  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_t844387A4F32860587989B5D1B9F3950D6D5901DE* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CcountU3E5__1_5;
	float ___U3CsumU3E5__2_6;
	RuntimeObject* ___U3CeU3E5__3_7;
	RuntimeObject* ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	float ___U3CU3Es__6_10;
	float ___U3CU3Es__7_11;
	bool ___U3CU3Es__8_12;
	Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D ___U3CU3Eu__1_13;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_14;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_15;
};
struct U3CAverageAwaitAsyncU3Ed__14_1_t9A8C09FDAF75D12C8D248536BF9A707B18D66F63  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_tF452F3FF30306E919291E498D051B5F208EB38CF* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CcountU3E5__1_5;
	double ___U3CsumU3E5__2_6;
	RuntimeObject* ___U3CeU3E5__3_7;
	RuntimeObject* ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	double ___U3CU3Es__6_10;
	double ___U3CU3Es__7_11;
	bool ___U3CU3Es__8_12;
	Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 ___U3CU3Eu__1_13;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_14;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_15;
};
struct U3CAverageAwaitAsyncU3Ed__2_1_t3241690F59243BF1EC03264EFCC40C3C82718B77  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_t6561E0DBB0FBFCB8DBFA46F392A86C31706164F5* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CcountU3E5__1_5;
	int32_t ___U3CsumU3E5__2_6;
	RuntimeObject* ___U3CeU3E5__3_7;
	RuntimeObject* ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	int32_t ___U3CU3Es__6_10;
	int32_t ___U3CU3Es__7_11;
	bool ___U3CU3Es__8_12;
	Awaiter_t8953594D03299DE782894F4A865CED79F2504266 ___U3CU3Eu__1_13;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_14;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_15;
};
struct U3CAverageAwaitAsyncU3Ed__6_1_t3691944FA8BC631E4794C68710C761652161B0BF  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_t04742C32F6BEF8B1199EACA5BD7F68C041603B6D* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CcountU3E5__1_5;
	int64_t ___U3CsumU3E5__2_6;
	RuntimeObject* ___U3CeU3E5__3_7;
	RuntimeObject* ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	int64_t ___U3CU3Es__6_10;
	int64_t ___U3CU3Es__7_11;
	bool ___U3CU3Es__8_12;
	Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E ___U3CU3Eu__1_13;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_14;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_15;
};
struct U3CAverageAwaitWithCancellationAsyncU3Ed__11_1_tDA0926F879D4DFE9E9196F374B8E80FA70547103  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_t79F461272893123C05C047A343D70B9B775827E4* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CcountU3E5__1_5;
	float ___U3CsumU3E5__2_6;
	RuntimeObject* ___U3CeU3E5__3_7;
	RuntimeObject* ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	float ___U3CU3Es__6_10;
	float ___U3CU3Es__7_11;
	bool ___U3CU3Es__8_12;
	Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D ___U3CU3Eu__1_13;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_14;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_15;
};
struct U3CAverageAwaitWithCancellationAsyncU3Ed__15_1_tB093D6BB8EF29AA4A5EA8BC6B7371EB332077809  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_tB356387A25DA85D9F4DDAAEEFD39A96B3F81FA95* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CcountU3E5__1_5;
	double ___U3CsumU3E5__2_6;
	RuntimeObject* ___U3CeU3E5__3_7;
	RuntimeObject* ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	double ___U3CU3Es__6_10;
	double ___U3CU3Es__7_11;
	bool ___U3CU3Es__8_12;
	Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 ___U3CU3Eu__1_13;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_14;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_15;
};
struct U3CAverageAwaitWithCancellationAsyncU3Ed__3_1_t94F7D5E6B37B9A060647B191C4B93E9E4D47385E  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_t4B0BED2CC5C1B3C74670633A89F91C13C1A0F1E4* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CcountU3E5__1_5;
	int32_t ___U3CsumU3E5__2_6;
	RuntimeObject* ___U3CeU3E5__3_7;
	RuntimeObject* ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	int32_t ___U3CU3Es__6_10;
	int32_t ___U3CU3Es__7_11;
	bool ___U3CU3Es__8_12;
	Awaiter_t8953594D03299DE782894F4A865CED79F2504266 ___U3CU3Eu__1_13;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_14;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_15;
};
struct U3CAverageAwaitWithCancellationAsyncU3Ed__7_1_tF84BDDE66F565787632536D0CE42E7E70470F740  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_t76BD268388DCE8B514D513440272B79CC88C6413* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CcountU3E5__1_5;
	int64_t ___U3CsumU3E5__2_6;
	RuntimeObject* ___U3CeU3E5__3_7;
	RuntimeObject* ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	int64_t ___U3CU3Es__6_10;
	int64_t ___U3CU3Es__7_11;
	bool ___U3CU3Es__8_12;
	Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E ___U3CU3Eu__1_13;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_14;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_15;
};
struct U3CBindToCoreU3Ed__12_2_tC0C0AD26350D5274BE3703D1A40F35C8693897CA : public RuntimeObject {};
struct U3CBindToCoreU3Ed__6_1_tFAAEED6C5DED441AFA0394C84B7C64DFD978AD2F  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___text_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	bool ___rebindOnError_5;
	bool ___U3CrepeatU3E5__1_6;
	RuntimeObject* ___U3CeU3E5__2_7;
	RuntimeObject* ___U3CU3Es__3_8;
	int32_t ___U3CU3Es__4_9;
	bool ___U3CmoveNextU3E5__5_10;
	bool ___U3CU3Es__6_11;
	Exception_t* ___U3CexU3E5__7_12;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_13;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_14;
};
struct U3CBindToCoreU3Ed__6_1_t86689E04CADC36E81BC1A54F65539102D6B5CB49  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	bool ___rebindOnError_5;
	bool ___U3CrepeatU3E5__1_6;
	RuntimeObject* ___U3CeU3E5__2_7;
	RuntimeObject* ___U3CU3Es__3_8;
	int32_t ___U3CU3Es__4_9;
	bool ___U3CmoveNextU3E5__5_10;
	bool ___U3CU3Es__6_11;
	Exception_t* ___U3CexU3E5__7_12;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_13;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_14;
};
struct AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285 
{
	RuntimeObject* ___runnerPromise_0;
	Exception_t* ___ex_1;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___result_2;
	RuntimeObject* ___debuggingId_3;
};
struct Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 
{
	UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E ___task_0;
};
struct Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 
{
	UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05 ___task_0;
};
struct Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB 
{
	UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C ___task_0;
};
struct Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 
{
	UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46 ___task_0;
};
struct Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 
{
	UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3 ___task_0;
};
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	int32_t ___index_1;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F 
{
	RuntimeObject* ___source_0;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___result_1;
	int16_t ___token_2;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	int32_t ___controlCharacterCount_0;
	int32_t ___characterCount_1;
	int32_t ___visibleCharacterCount_2;
	int32_t ___spaceCount_3;
	int32_t ___wordCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharacterIndex_8;
	float ___length_9;
	float ___lineHeight_10;
	float ___ascender_11;
	float ___baseline_12;
	float ___descender_13;
	float ___maxAdvance_14;
	float ___width_15;
	float ___marginLeft_16;
	float ___marginRight_17;
	int32_t ___alignment_18;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};
struct U3CAverageAsyncU3Ed__37_1_tF6158B69B5E1C0CFF9AA07D2DB76CA10B145EC26  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_t02AAAA5ED63E37D8013889ECE551ED5172A9F7A4* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CcountU3E5__1_5;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CsumU3E5__2_6;
	RuntimeObject* ___U3CeU3E5__3_7;
	RuntimeObject* ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CvU3E5__6_10;
	bool ___U3CU3Es__7_11;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_12;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_13;
};
struct U3CAverageAwaitAsyncU3Ed__18_1_t6FB452C63FD8B313DCD340AEAC77F48F395F0D14  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_tD6766C7D6227AC2A45F7EDFC827BDFC58C8EFE78* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CcountU3E5__1_5;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CsumU3E5__2_6;
	RuntimeObject* ___U3CeU3E5__3_7;
	RuntimeObject* ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CU3Es__6_10;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CU3Es__7_11;
	bool ___U3CU3Es__8_12;
	Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 ___U3CU3Eu__1_13;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_14;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_15;
};
struct U3CAverageAwaitAsyncU3Ed__22_1_t6ACF89349A1ADA4A61F83D20FFB2D385035CE624  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_tCD782F33543995850D4A4AF7569D83504640F79F* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CcountU3E5__1_5;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CsumU3E5__2_6;
	RuntimeObject* ___U3CeU3E5__3_7;
	RuntimeObject* ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CvU3E5__6_10;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CU3Es__7_11;
	bool ___U3CU3Es__8_12;
	Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 ___U3CU3Eu__1_13;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_14;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_15;
};
struct U3CAverageAwaitAsyncU3Ed__26_1_t4A064A93DEC1BE815476E1B98F2EC9981EC964E5  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_t898AEF8B0AC8B5CB054F91316F69A4739DB2E5B6* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CcountU3E5__1_5;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CsumU3E5__2_6;
	RuntimeObject* ___U3CeU3E5__3_7;
	RuntimeObject* ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CvU3E5__6_10;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CU3Es__7_11;
	bool ___U3CU3Es__8_12;
	Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB ___U3CU3Eu__1_13;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_14;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_15;
};
struct U3CAverageAwaitAsyncU3Ed__30_1_t1B91FA738692CE65DB747C8606C4EFA4FBC2C97C  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_t9F80A31065CD628F063DA0D192A111706F695666* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CcountU3E5__1_5;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CsumU3E5__2_6;
	RuntimeObject* ___U3CeU3E5__3_7;
	RuntimeObject* ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CvU3E5__6_10;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CU3Es__7_11;
	bool ___U3CU3Es__8_12;
	Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 ___U3CU3Eu__1_13;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_14;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_15;
};
struct U3CAverageAwaitAsyncU3Ed__34_1_t53FE7D4236A524E65C4060CD9DF2F5BD6112ED2A  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_tEBD22D2F4376CEDF9152BDE05B6E363699F0C7E1* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CcountU3E5__1_5;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CsumU3E5__2_6;
	RuntimeObject* ___U3CeU3E5__3_7;
	RuntimeObject* ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CvU3E5__6_10;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CU3Es__7_11;
	bool ___U3CU3Es__8_12;
	Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 ___U3CU3Eu__1_13;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_14;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_15;
};
struct U3CAverageAwaitWithCancellationAsyncU3Ed__19_1_t6C66A45139BAB01BADEBFE4E9DF12F84C0B643CA  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_tE135AFB66CDB73C25CDE9CDD97913EE0CF6337D7* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CcountU3E5__1_5;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CsumU3E5__2_6;
	RuntimeObject* ___U3CeU3E5__3_7;
	RuntimeObject* ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CU3Es__6_10;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CU3Es__7_11;
	bool ___U3CU3Es__8_12;
	Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 ___U3CU3Eu__1_13;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_14;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_15;
};
struct U3CAverageAwaitWithCancellationAsyncU3Ed__23_1_tE4D1E229AF2A45D5A6DF95DFCD6AFDD6AF3BE456  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_tA0DEFAEF785E5E0D32E2CABA4CBDB7F9D34C2B8D* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CcountU3E5__1_5;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CsumU3E5__2_6;
	RuntimeObject* ___U3CeU3E5__3_7;
	RuntimeObject* ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CvU3E5__6_10;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CU3Es__7_11;
	bool ___U3CU3Es__8_12;
	Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 ___U3CU3Eu__1_13;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_14;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_15;
};
struct U3CAverageAwaitWithCancellationAsyncU3Ed__27_1_t3ED24D2012614088A57E12CF0065332EF3C04F7E  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_t4111B7EAAEBCF4004223B4E554711FE862E5C3B2* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CcountU3E5__1_5;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CsumU3E5__2_6;
	RuntimeObject* ___U3CeU3E5__3_7;
	RuntimeObject* ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CvU3E5__6_10;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CU3Es__7_11;
	bool ___U3CU3Es__8_12;
	Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB ___U3CU3Eu__1_13;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_14;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_15;
};
struct U3CAverageAwaitWithCancellationAsyncU3Ed__31_1_t5EC5BBE56145450D82111D1EACF491C5DE92DE4F  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_t5604379C942DED2B342DEED029BC1AB35C5A06A1* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CcountU3E5__1_5;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CsumU3E5__2_6;
	RuntimeObject* ___U3CeU3E5__3_7;
	RuntimeObject* ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CvU3E5__6_10;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CU3Es__7_11;
	bool ___U3CU3Es__8_12;
	Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 ___U3CU3Eu__1_13;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_14;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_15;
};
struct U3CAverageAwaitWithCancellationAsyncU3Ed__35_1_t01F222573BFC23A5A95113AD81969CB98966F508  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_tD24255148664E4908FBCB566B787F36A4988A2BB* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CcountU3E5__1_5;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CsumU3E5__2_6;
	RuntimeObject* ___U3CeU3E5__3_7;
	RuntimeObject* ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CvU3E5__6_10;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CU3Es__7_11;
	bool ___U3CU3Es__8_12;
	Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 ___U3CU3Eu__1_13;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_14;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_15;
};
struct Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8  : public MulticastDelegate_t
{
};
struct Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 
{
	UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F ___task_0;
};
struct Func_2_t02AAAA5ED63E37D8013889ECE551ED5172A9F7A4  : public MulticastDelegate_t
{
};
struct Func_2_tB9099E603733365FA636ABD4F1512E954C883863  : public MulticastDelegate_t
{
};
struct Func_2_t0DE0378A8A90F3B8204450750A771096D0F75A98  : public MulticastDelegate_t
{
};
struct Func_2_tFC0477C87E7518136DEE345DCF44B6ACA22E24F0  : public MulticastDelegate_t
{
};
struct Func_2_tCDF39BBC1094782C50BE631779E8FD895BFEAF32  : public MulticastDelegate_t
{
};
struct Func_2_t041ABB3F33302FF5B428FF832CE110343F4DA4C6  : public MulticastDelegate_t
{
};
struct Func_2_tEBD22D2F4376CEDF9152BDE05B6E363699F0C7E1  : public MulticastDelegate_t
{
};
struct Func_2_tCD782F33543995850D4A4AF7569D83504640F79F  : public MulticastDelegate_t
{
};
struct Func_2_t898AEF8B0AC8B5CB054F91316F69A4739DB2E5B6  : public MulticastDelegate_t
{
};
struct Func_2_t9F80A31065CD628F063DA0D192A111706F695666  : public MulticastDelegate_t
{
};
struct Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C  : public MulticastDelegate_t
{
};
struct Func_2_tD6766C7D6227AC2A45F7EDFC827BDFC58C8EFE78  : public MulticastDelegate_t
{
};
struct Func_2_tF452F3FF30306E919291E498D051B5F208EB38CF  : public MulticastDelegate_t
{
};
struct Func_2_t6561E0DBB0FBFCB8DBFA46F392A86C31706164F5  : public MulticastDelegate_t
{
};
struct Func_2_t04742C32F6BEF8B1199EACA5BD7F68C041603B6D  : public MulticastDelegate_t
{
};
struct Func_2_t844387A4F32860587989B5D1B9F3950D6D5901DE  : public MulticastDelegate_t
{
};
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};
struct Func_2_t5ABD904FFCFC84BA711C9261A36E9482990A6CA7  : public MulticastDelegate_t
{
};
struct Func_2_tF36C7D1152BF6807C03112D4A053E5038A13A6EB  : public MulticastDelegate_t
{
};
struct Func_2_t8DB808B3690BFDBD7B936631B430453B90DBBDE7  : public MulticastDelegate_t
{
};
struct Func_2_t08AB71331BE9C65EB982154CBB27F90B5B62A771  : public MulticastDelegate_t
{
};
struct Func_2_tFAB3D8EFCE4F55CAB3F80EABAB10F8226D7FEBF6  : public MulticastDelegate_t
{
};
struct Func_3_t428A771ED20C241CDDC6BDF17284D499B16CBD70  : public MulticastDelegate_t
{
};
struct Func_3_tD24255148664E4908FBCB566B787F36A4988A2BB  : public MulticastDelegate_t
{
};
struct Func_3_tA0DEFAEF785E5E0D32E2CABA4CBDB7F9D34C2B8D  : public MulticastDelegate_t
{
};
struct Func_3_t4111B7EAAEBCF4004223B4E554711FE862E5C3B2  : public MulticastDelegate_t
{
};
struct Func_3_t5604379C942DED2B342DEED029BC1AB35C5A06A1  : public MulticastDelegate_t
{
};
struct Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814  : public MulticastDelegate_t
{
};
struct Func_3_tE135AFB66CDB73C25CDE9CDD97913EE0CF6337D7  : public MulticastDelegate_t
{
};
struct Func_3_tB356387A25DA85D9F4DDAAEEFD39A96B3F81FA95  : public MulticastDelegate_t
{
};
struct Func_3_t4B0BED2CC5C1B3C74670633A89F91C13C1A0F1E4  : public MulticastDelegate_t
{
};
struct Func_3_t76BD268388DCE8B514D513440272B79CC88C6413  : public MulticastDelegate_t
{
};
struct Func_3_t79F461272893123C05C047A343D70B9B775827E4  : public MulticastDelegate_t
{
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken_18;
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	bool ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	bool ___tagNoParsing_63;
	bool ___isNonBreakingSpace_64;
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
struct U3CAverageAwaitAsyncU3Ed__38_1_t033B46F89946CC1CA0F521A8F9086B9E2458454B  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_t041ABB3F33302FF5B428FF832CE110343F4DA4C6* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CcountU3E5__1_5;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CsumU3E5__2_6;
	RuntimeObject* ___U3CeU3E5__3_7;
	RuntimeObject* ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CvU3E5__6_10;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CU3Es__7_11;
	bool ___U3CU3Es__8_12;
	Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 ___U3CU3Eu__1_13;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_14;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_15;
};
struct U3CAverageAwaitWithCancellationAsyncU3Ed__39_1_t50C4E469171E993FFEFE1DE41DE151995E31ADA2  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_t428A771ED20C241CDDC6BDF17284D499B16CBD70* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CcountU3E5__1_5;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CsumU3E5__2_6;
	RuntimeObject* ___U3CeU3E5__3_7;
	RuntimeObject* ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CvU3E5__6_10;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CU3Es__7_11;
	bool ___U3CU3Es__8_12;
	Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 ___U3CU3Eu__1_13;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_14;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_15;
};
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	int32_t ___index_1;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	int32_t ___m_Capacity_3;
	int32_t ___m_RolloverSize_4;
	int32_t ___m_Count_5;
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource_4;
};
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_7;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_8;
	bool ___m_SkipLayoutUpdate_9;
	bool ___m_SkipMaterialUpdate_10;
	bool ___m_RaycastTarget_11;
	bool ___m_RaycastTargetCache_12;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_13;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_14;
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_15;
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_16;
	bool ___m_VertsDirty_17;
	bool ___m_MaterialDirty_18;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_19;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_20;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_21;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_24;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_25;
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_26;
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_27;
};
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	bool ___m_ShouldRecalculateStencil_28;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_29;
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_30;
	bool ___m_Maskable_31;
	bool ___m_IsMaskingGraphic_32;
	bool ___m_IncludeForMasking_33;
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_34;
	bool ___m_ShouldRecalculate_35;
	int32_t ___m_StencilValue_36;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_37;
};
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	String_t* ___m_text_38;
	bool ___m_IsTextBackingStringDirty_39;
	RuntimeObject* ___m_TextPreprocessor_40;
	bool ___m_isRightToLeft_41;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_42;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_43;
	bool ___m_isSDFShader_44;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_45;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_46;
	int32_t ___m_currentMaterialIndex_50;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_51;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_52;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_53;
	bool ___m_isMaterialDirty_54;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_55;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_56;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_58;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_59;
	bool ___m_enableVertexGradient_60;
	int32_t ___m_colorMode_61;
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_62;
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_63;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_64;
	bool ___m_tintAllSprites_65;
	bool ___m_tintSprite_66;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_67;
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_68;
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_69;
	int32_t ___m_TextStyleHashCode_70;
	bool ___m_overrideHtmlColors_71;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_72;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_73;
	float ___m_outlineWidth_74;
	float ___m_fontSize_75;
	float ___m_currentFontSize_76;
	float ___m_fontSizeBase_77;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_78;
	int32_t ___m_fontWeight_79;
	int32_t ___m_FontWeightInternal_80;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_81;
	bool ___m_enableAutoSizing_82;
	float ___m_maxFontSize_83;
	float ___m_minFontSize_84;
	int32_t ___m_AutoSizeIterationCount_85;
	int32_t ___m_AutoSizeMaxIterationCount_86;
	bool ___m_IsAutoSizePointSizeSet_87;
	float ___m_fontSizeMin_88;
	float ___m_fontSizeMax_89;
	int32_t ___m_fontStyle_90;
	int32_t ___m_FontStyleInternal_91;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_92;
	bool ___m_isUsingBold_93;
	int32_t ___m_HorizontalAlignment_94;
	int32_t ___m_VerticalAlignment_95;
	int32_t ___m_textAlignment_96;
	int32_t ___m_lineJustification_97;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_98;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_99;
	float ___m_characterSpacing_100;
	float ___m_cSpacing_101;
	float ___m_monoSpacing_102;
	float ___m_wordSpacing_103;
	float ___m_lineSpacing_104;
	float ___m_lineSpacingDelta_105;
	float ___m_lineHeight_106;
	bool ___m_IsDrivenLineSpacing_107;
	float ___m_lineSpacingMax_108;
	float ___m_paragraphSpacing_109;
	float ___m_charWidthMaxAdj_110;
	float ___m_charWidthAdjDelta_111;
	bool ___m_enableWordWrapping_112;
	bool ___m_isCharacterWrappingEnabled_113;
	bool ___m_isNonBreakingSpace_114;
	bool ___m_isIgnoringAlignment_115;
	float ___m_wordWrappingRatios_116;
	int32_t ___m_overflowMode_117;
	int32_t ___m_firstOverflowCharacterIndex_118;
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_119;
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_120;
	bool ___m_isTextTruncated_121;
	bool ___m_enableKerning_122;
	float ___m_GlyphHorizontalAdvanceAdjustment_123;
	bool ___m_enableExtraPadding_124;
	bool ___checkPaddingRequired_125;
	bool ___m_isRichText_126;
	bool ___m_parseCtrlCharacters_127;
	bool ___m_isOverlay_128;
	bool ___m_isOrthographic_129;
	bool ___m_isCullingEnabled_130;
	bool ___m_isMaskingEnabled_131;
	bool ___isMaskUpdateRequired_132;
	bool ___m_ignoreCulling_133;
	int32_t ___m_horizontalMapping_134;
	int32_t ___m_verticalMapping_135;
	float ___m_uvLineOffset_136;
	int32_t ___m_renderMode_137;
	int32_t ___m_geometrySortingOrder_138;
	bool ___m_IsTextObjectScaleStatic_139;
	bool ___m_VertexBufferAutoSizeReduction_140;
	int32_t ___m_firstVisibleCharacter_141;
	int32_t ___m_maxVisibleCharacters_142;
	int32_t ___m_maxVisibleWords_143;
	int32_t ___m_maxVisibleLines_144;
	bool ___m_useMaxVisibleDescender_145;
	int32_t ___m_pageToDisplay_146;
	bool ___m_isNewPage_147;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_148;
	float ___m_marginLeft_149;
	float ___m_marginRight_150;
	float ___m_marginWidth_151;
	float ___m_marginHeight_152;
	float ___m_width_153;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_154;
	bool ___m_havePropertiesChanged_155;
	bool ___m_isUsingLegacyAnimationComponent_156;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_157;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_158;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_159;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_160;
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_161;
	bool ___m_autoSizeTextContainer_162;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_163;
	bool ___m_isVolumetricText_164;
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_167;
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_168;
	float ___m_flexibleHeight_169;
	float ___m_flexibleWidth_170;
	float ___m_minWidth_171;
	float ___m_minHeight_172;
	float ___m_maxWidth_173;
	float ___m_maxHeight_174;
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_175;
	float ___m_preferredWidth_176;
	float ___m_renderedWidth_177;
	bool ___m_isPreferredWidthDirty_178;
	float ___m_preferredHeight_179;
	float ___m_renderedHeight_180;
	bool ___m_isPreferredHeightDirty_181;
	bool ___m_isCalculatingPreferredValues_182;
	int32_t ___m_layoutPriority_183;
	bool ___m_isLayoutDirty_184;
	bool ___m_isAwake_185;
	bool ___m_isWaitingOnResourceLoad_186;
	int32_t ___m_inputSource_187;
	float ___m_fontScaleMultiplier_188;
	float ___tag_LineIndent_192;
	float ___tag_Indent_193;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_194;
	bool ___tag_NoParsing_195;
	bool ___m_isParsingText_196;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_197;
	bool ___m_isFXMatrixSet_198;
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_199;
	int32_t ___m_InternalTextProcessingArraySize_200;
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_201;
	int32_t ___m_totalCharacterCount_202;
	int32_t ___m_characterCount_209;
	int32_t ___m_firstCharacterOfLine_210;
	int32_t ___m_firstVisibleCharacterOfLine_211;
	int32_t ___m_lastCharacterOfLine_212;
	int32_t ___m_lastVisibleCharacterOfLine_213;
	int32_t ___m_lineNumber_214;
	int32_t ___m_lineVisibleCharacterCount_215;
	int32_t ___m_pageNumber_216;
	float ___m_PageAscender_217;
	float ___m_maxTextAscender_218;
	float ___m_maxCapHeight_219;
	float ___m_ElementAscender_220;
	float ___m_ElementDescender_221;
	float ___m_maxLineAscender_222;
	float ___m_maxLineDescender_223;
	float ___m_startOfLineAscender_224;
	float ___m_startOfLineDescender_225;
	float ___m_lineOffset_226;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_227;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_228;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_229;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_230;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_231;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_232;
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_233;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_234;
	bool ___m_colorGradientPresetIsTinted_235;
	float ___m_tabSpacing_236;
	float ___m_spacing_237;
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_238;
	int32_t ___m_TextStyleStackDepth_239;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_240;
	int32_t ___m_ItalicAngle_241;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_242;
	float ___m_padding_243;
	float ___m_baselineOffset_244;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_245;
	float ___m_xAdvance_246;
	int32_t ___m_textElementType_247;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_248;
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_249;
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_250;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_251;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_252;
	int32_t ___m_spriteCount_253;
	int32_t ___m_spriteIndex_254;
	int32_t ___m_spriteAnimationID_255;
	bool ___m_ignoreActiveState_258;
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_259;
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_260;
};
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_38;
	String_t* ___m_Text_39;
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_40;
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_41;
	bool ___m_DisableFontTextureRebuiltCallback_43;
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_44;
};
struct String_t_StaticFields
{
	String_t* ___Empty_6;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString_5;
	String_t* ___FalseString_6;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_StaticFields
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CanceledUniTask_2;
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CompletedTask_3;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock_0;
};
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_47;
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_48;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_49;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_57;
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_165;
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_166;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_189;
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_190;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_191;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_203;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_204;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_205;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_206;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_207;
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_208;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_256;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_257;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_261;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_262;
	float ___k_LargePositiveFloat_263;
	float ___k_LargeNegativeFloat_264;
	int32_t ___k_LargePositiveInt_265;
	int32_t ___k_LargeNegativeInt_266;
};
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_42;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, bool ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_gshared_inline (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_gshared_inline (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* __this, double ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_gshared_inline (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_gshared_inline (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_gshared (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, double ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_gshared_inline (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_gshared_inline (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_gshared (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_gshared (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_gshared (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_gshared (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_gshared_inline (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_gshared_inline (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* __this, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_gshared (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_gshared (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_gshared_inline (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Nullable_1_get_Value_m33574CDAA01061AEA24434F9DE51A5B4F03A18A2_gshared (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_gshared_inline (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_gshared_inline (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_gshared_inline (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* __this, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_gshared_inline (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_gshared_inline (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* __this, float ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_gshared_inline (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_gshared_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_gshared_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_gshared_inline (UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_gshared_inline (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_gshared_inline (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_gshared_inline (UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_gshared_inline (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_gshared_inline (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_gshared_inline (UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_gshared_inline (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_gshared_inline (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_gshared_inline (UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_gshared_inline (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_gshared_inline (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t8953594D03299DE782894F4A865CED79F2504266 UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_gshared_inline (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_gshared_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_gshared_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_gshared_inline (UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_gshared_inline (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_gshared_inline (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_gshared_inline (UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_gshared_inline (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_gshared_inline (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_gshared_inline (UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_gshared_inline (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_gshared_inline (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_gshared_inline (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_gshared_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_gshared_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m65B703CDA0E48F294713CCCF06A7B5AF705D8E1F_gshared_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mD1C383B359BDB954321BC6C44DA1631270CC29A6_gshared_inline (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m6F9092F52BBF30A9F5F0E23DE3EC280EF9EB161F_gshared_inline (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* __this, UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m9A2BC9ECAC9AB86D3B937A70152799E4B8A45F04_gshared_inline (UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m8581AFDBBB66C89C57A4AF21C6DA72286C674EEE_gshared_inline (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* __this, UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mD2B1B68F55469700BFCCE4B030BB08CDEFCFB5BE_gshared_inline (UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m43ADCACEE034092BE0485AC2039932F41B068645_gshared_inline (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* __this, UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mD3993C707FF463A5E5150B823D0F2C2F63D38AED_gshared_inline (UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m1A781E603FA4535B04661E93F415BD20AD7E562B_gshared_inline (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* __this, UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m668DE5FADE457B216736782DC297E4C3B141BC19_gshared_inline (UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m2D382159CB5D690EEEDB435E6183DBDBD9560CA3_gshared_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m688D534E5DE535F713C9D2C84744BB51F95416F5_gshared_inline (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mB257E1F06754BE00907B9F223E1CED109BE0A9E9_gshared_inline (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* __this, UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m5810EA6A8A912CF428FDABFDD39E978F898ABCF6_gshared_inline (UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m9D5EF23B6F3F4362E6DA714FE205E179615A6485_gshared_inline (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* __this, UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m364E955D88F0ED41DD3142E30E5C1FC3992A4320_gshared_inline (UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m411324A17AA6E44DD7F24A60FF2A75F2E7F27F53_gshared_inline (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* __this, UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m0DC9F6711B39ED08865F0CF67538D05129880C94_gshared_inline (UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m2F2F413B4B8E320AC83D464DE19E5B81D8616185_gshared_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m621A3ED628D31F42C69A04584E93A8A02E381117_gshared_inline (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 (*) (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, const RuntimeMethod*))UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_gshared_inline)(__this, method);
}
inline bool Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, const RuntimeMethod*))Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_gshared_inline)(__this, method);
}
inline bool Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, const RuntimeMethod*))Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803 (Exception_t* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330 (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
inline void AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, bool ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, bool, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_gshared_inline)(__this, ___0_result, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_inline (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_inline (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* __this, double ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, double, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_gshared_inline)(__this, ___0_result, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_d1, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___1_d2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Implicit_m8F9A38760D01B23E6DFF77EA760CCE5111F3656D (int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Division_mA0BD25988CA8010A3F8EA2F6A534F9F2D812D2AC (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_d1, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___1_d2, const RuntimeMethod* method) ;
inline void AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_inline (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_inline (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_gshared_inline)(__this, ___0_result, method);
}
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared)(__this, ___0_value, method);
}
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
inline int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared)(__this, method);
}
inline int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline)(__this, method);
}
inline void Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, double ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, double, const RuntimeMethod*))Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_gshared)(__this, ___0_value, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_inline (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_inline (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_gshared_inline)(__this, ___0_result, method);
}
inline void Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1 (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, int64_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, int64_t, const RuntimeMethod*))Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_gshared)(__this, ___0_value, method);
}
inline bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline)(__this, method);
}
inline int64_t Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_gshared)(__this, method);
}
inline int64_t Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_gshared_inline)(__this, method);
}
inline void Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420 (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, float ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, float, const RuntimeMethod*))Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_gshared)(__this, ___0_value, method);
}
inline bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline)(__this, method);
}
inline float Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_gshared)(__this, method);
}
inline float Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_gshared_inline)(__this, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_inline (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_inline (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* __this, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_gshared_inline)(__this, ___0_result, method);
}
inline bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline)(__this, method);
}
inline double Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1 (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  double (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_gshared)(__this, method);
}
inline double Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  double (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_gshared_inline)(__this, method);
}
inline void Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7 (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F, const RuntimeMethod*))Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_gshared)(__this, ___0_value, method);
}
inline bool Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*, const RuntimeMethod*))Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_gshared_inline)(__this, method);
}
inline Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Nullable_1_get_Value_m33574CDAA01061AEA24434F9DE51A5B4F03A18A2 (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method)
{
	return ((  Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F (*) (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*, const RuntimeMethod*))Nullable_1_get_Value_m33574CDAA01061AEA24434F9DE51A5B4F03A18A2_gshared)(__this, method);
}
inline Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method)
{
	return ((  Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F (*) (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_gshared_inline)(__this, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_inline (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_inline (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* __this, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_gshared_inline)(__this, ___0_result, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_inline (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_inline (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* __this, float ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, float, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_gshared_inline)(__this, ___0_result, method);
}
inline Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_inline (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D (*) (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1*, const RuntimeMethod*))UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_gshared_inline)(__this, method);
}
inline bool Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*, const RuntimeMethod*))Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_gshared_inline)(__this, method);
}
inline float Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*, const RuntimeMethod*))Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_gshared_inline)(__this, method);
}
inline Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_inline (UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 (*) (UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C*, const RuntimeMethod*))UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_gshared_inline)(__this, method);
}
inline bool Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_inline (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88*, const RuntimeMethod*))Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_gshared_inline)(__this, method);
}
inline double Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_inline (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* __this, const RuntimeMethod* method)
{
	return ((  double (*) (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88*, const RuntimeMethod*))Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_gshared_inline)(__this, method);
}
inline Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_inline (UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 (*) (UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3*, const RuntimeMethod*))UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_gshared_inline)(__this, method);
}
inline bool Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_inline (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8*, const RuntimeMethod*))Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_gshared_inline)(__this, method);
}
inline Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_inline (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* __this, const RuntimeMethod* method)
{
	return ((  Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F (*) (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8*, const RuntimeMethod*))Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_gshared_inline)(__this, method);
}
inline Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_inline (UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 (*) (UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05*, const RuntimeMethod*))UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_gshared_inline)(__this, method);
}
inline bool Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_inline (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9*, const RuntimeMethod*))Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_gshared_inline)(__this, method);
}
inline Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_inline (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 (*) (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9*, const RuntimeMethod*))Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_gshared_inline)(__this, method);
}
inline Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_inline (UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB (*) (UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C*, const RuntimeMethod*))UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_gshared_inline)(__this, method);
}
inline bool Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_inline (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB*, const RuntimeMethod*))Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_gshared_inline)(__this, method);
}
inline Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_inline (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 (*) (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB*, const RuntimeMethod*))Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_gshared_inline)(__this, method);
}
inline Awaiter_t8953594D03299DE782894F4A865CED79F2504266 UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_inline (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t8953594D03299DE782894F4A865CED79F2504266 (*) (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48*, const RuntimeMethod*))UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_gshared_inline)(__this, method);
}
inline bool Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t8953594D03299DE782894F4A865CED79F2504266*, const RuntimeMethod*))Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_gshared_inline)(__this, method);
}
inline int32_t Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Awaiter_t8953594D03299DE782894F4A865CED79F2504266*, const RuntimeMethod*))Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_gshared_inline)(__this, method);
}
inline Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_inline (UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 (*) (UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46*, const RuntimeMethod*))UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_gshared_inline)(__this, method);
}
inline bool Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_inline (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*, const RuntimeMethod*))Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_gshared_inline)(__this, method);
}
inline Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_inline (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 (*) (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*, const RuntimeMethod*))Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_gshared_inline)(__this, method);
}
inline Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_inline (UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 (*) (UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E*, const RuntimeMethod*))UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_gshared_inline)(__this, method);
}
inline bool Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_inline (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0*, const RuntimeMethod*))Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_gshared_inline)(__this, method);
}
inline Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_inline (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 (*) (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0*, const RuntimeMethod*))Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_gshared_inline)(__this, method);
}
inline Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_inline (UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 (*) (UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F*, const RuntimeMethod*))UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_gshared_inline)(__this, method);
}
inline bool Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_inline (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51*, const RuntimeMethod*))Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_gshared_inline)(__this, method);
}
inline Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_inline (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB (*) (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51*, const RuntimeMethod*))Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_gshared_inline)(__this, method);
}
inline Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_inline (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E (*) (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72*, const RuntimeMethod*))UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_gshared_inline)(__this, method);
}
inline bool Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E*, const RuntimeMethod*))Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_gshared_inline)(__this, method);
}
inline int64_t Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E*, const RuntimeMethod*))Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___0_status, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopHelper_AddContinuation_m5B8F03E45A820D91B17CFA56AA93E7444BEC17E0 (int32_t ___0_timing, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_continuation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3 (Exception_t* ___0_ex, const RuntimeMethod* method) ;
inline void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, const RuntimeMethod*))Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, const RuntimeMethod*))UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline)(__this, method);
}
inline void Awaiter__ctor_m65B703CDA0E48F294713CCCF06A7B5AF705D8E1F_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*, UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1*, const RuntimeMethod*))Awaiter__ctor_m65B703CDA0E48F294713CCCF06A7B5AF705D8E1F_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_mD1C383B359BDB954321BC6C44DA1631270CC29A6_inline (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1*, const RuntimeMethod*))UniTask_1_get_Status_mD1C383B359BDB954321BC6C44DA1631270CC29A6_gshared_inline)(__this, method);
}
inline void Awaiter__ctor_m6F9092F52BBF30A9F5F0E23DE3EC280EF9EB161F_inline (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* __this, UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88*, UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C*, const RuntimeMethod*))Awaiter__ctor_m6F9092F52BBF30A9F5F0E23DE3EC280EF9EB161F_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_m9A2BC9ECAC9AB86D3B937A70152799E4B8A45F04_inline (UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C*, const RuntimeMethod*))UniTask_1_get_Status_m9A2BC9ECAC9AB86D3B937A70152799E4B8A45F04_gshared_inline)(__this, method);
}
inline void Awaiter__ctor_m8581AFDBBB66C89C57A4AF21C6DA72286C674EEE_inline (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* __this, UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8*, UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3*, const RuntimeMethod*))Awaiter__ctor_m8581AFDBBB66C89C57A4AF21C6DA72286C674EEE_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_mD2B1B68F55469700BFCCE4B030BB08CDEFCFB5BE_inline (UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3*, const RuntimeMethod*))UniTask_1_get_Status_mD2B1B68F55469700BFCCE4B030BB08CDEFCFB5BE_gshared_inline)(__this, method);
}
inline void Awaiter__ctor_m43ADCACEE034092BE0485AC2039932F41B068645_inline (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* __this, UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9*, UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05*, const RuntimeMethod*))Awaiter__ctor_m43ADCACEE034092BE0485AC2039932F41B068645_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_mD3993C707FF463A5E5150B823D0F2C2F63D38AED_inline (UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05*, const RuntimeMethod*))UniTask_1_get_Status_mD3993C707FF463A5E5150B823D0F2C2F63D38AED_gshared_inline)(__this, method);
}
inline void Awaiter__ctor_m1A781E603FA4535B04661E93F415BD20AD7E562B_inline (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* __this, UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB*, UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C*, const RuntimeMethod*))Awaiter__ctor_m1A781E603FA4535B04661E93F415BD20AD7E562B_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_m668DE5FADE457B216736782DC297E4C3B141BC19_inline (UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C*, const RuntimeMethod*))UniTask_1_get_Status_m668DE5FADE457B216736782DC297E4C3B141BC19_gshared_inline)(__this, method);
}
inline void Awaiter__ctor_m2D382159CB5D690EEEDB435E6183DBDBD9560CA3_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t8953594D03299DE782894F4A865CED79F2504266*, UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48*, const RuntimeMethod*))Awaiter__ctor_m2D382159CB5D690EEEDB435E6183DBDBD9560CA3_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_m688D534E5DE535F713C9D2C84744BB51F95416F5_inline (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48*, const RuntimeMethod*))UniTask_1_get_Status_m688D534E5DE535F713C9D2C84744BB51F95416F5_gshared_inline)(__this, method);
}
inline void Awaiter__ctor_mB257E1F06754BE00907B9F223E1CED109BE0A9E9_inline (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* __this, UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*, UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46*, const RuntimeMethod*))Awaiter__ctor_mB257E1F06754BE00907B9F223E1CED109BE0A9E9_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_m5810EA6A8A912CF428FDABFDD39E978F898ABCF6_inline (UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46*, const RuntimeMethod*))UniTask_1_get_Status_m5810EA6A8A912CF428FDABFDD39E978F898ABCF6_gshared_inline)(__this, method);
}
inline void Awaiter__ctor_m9D5EF23B6F3F4362E6DA714FE205E179615A6485_inline (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* __this, UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0*, UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E*, const RuntimeMethod*))Awaiter__ctor_m9D5EF23B6F3F4362E6DA714FE205E179615A6485_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_m364E955D88F0ED41DD3142E30E5C1FC3992A4320_inline (UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E*, const RuntimeMethod*))UniTask_1_get_Status_m364E955D88F0ED41DD3142E30E5C1FC3992A4320_gshared_inline)(__this, method);
}
inline void Awaiter__ctor_m411324A17AA6E44DD7F24A60FF2A75F2E7F27F53_inline (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* __this, UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51*, UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F*, const RuntimeMethod*))Awaiter__ctor_m411324A17AA6E44DD7F24A60FF2A75F2E7F27F53_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_m0DC9F6711B39ED08865F0CF67538D05129880C94_inline (UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F*, const RuntimeMethod*))UniTask_1_get_Status_m0DC9F6711B39ED08865F0CF67538D05129880C94_gshared_inline)(__this, method);
}
inline void Awaiter__ctor_m2F2F413B4B8E320AC83D464DE19E5B81D8616185_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E*, UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72*, const RuntimeMethod*))Awaiter__ctor_m2F2F413B4B8E320AC83D464DE19E5B81D8616185_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_m621A3ED628D31F42C69A04584E93A8A02E381117_inline (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72*, const RuntimeMethod*))UniTask_1_get_Status_m621A3ED628D31F42C69A04584E93A8A02E381117_gshared_inline)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnyAsyncU3Ed__0_1__ctor_m1F9E11D0EC7F2D4AC5B7B88AE2A8D84492F5279B_gshared (U3CAnyAsyncU3Ed__0_1_tC5A26A942407B0F559D11031DC5D9E153A3C25AE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnyAsyncU3Ed__0_1_MoveNext_m5AC2432EA1ED3C8F7653E9B4CAACB0E9DC09F8CC_gshared (U3CAnyAsyncU3Ed__0_1_tC5A26A942407B0F559D11031DC5D9E153A3C25AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CAnyAsyncU3Ed__0_1_tC5A26A942407B0F559D11031DC5D9E153A3C25AE* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t* V_10 = NULL;
	int32_t V_11 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_003f_1;
		}

IL_0014_1:
		{
			goto IL_0142_1;
		}

IL_0019_1:
		{
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_3;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__1_4 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_4), (void*)L_5);
			__this->___U3CU3Es__2_5 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_5), (void*)NULL);
			__this->___U3CU3Es__3_6 = 0;
		}

IL_003f_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_0045_2;
				}
			}
			{
				goto IL_0047_2;
			}

IL_0045_2:
			{
				goto IL_008e_2;
			}

IL_0047_2:
			{
				RuntimeObject* L_7 = (RuntimeObject*)__this->___U3CeU3E5__1_4;
				NullCheck(L_7);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_8;
				L_8 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_7);
				V_4 = L_8;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_9;
				L_9 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_3 = L_9;
				bool L_10;
				L_10 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_00aa_2;
				}
			}
			{
				int32_t L_11 = 0;
				V_0 = L_11;
				__this->___U3CU3E1__state_0 = L_11;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_12 = V_3;
				__this->___U3CU3Eu__1_9 = L_12;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_9))->___task_0))->___source_0), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_13 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAnyAsyncU3Ed__0_1_tC5A26A942407B0F559D11031DC5D9E153A3C25AE**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_13, (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
				goto IL_01f7;
			}

IL_008e_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_14 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_9;
				V_3 = L_14;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_15 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_9);
				il2cpp_codegen_initobj(L_15, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_16 = (-1);
				V_0 = L_16;
				__this->___U3CU3E1__state_0 = L_16;
			}

IL_00aa_2:
			{
				bool L_17;
				L_17 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5_8 = L_17;
				bool L_18 = (bool)__this->___U3CU3Es__5_8;
				V_2 = L_18;
				bool L_19 = V_2;
				if (!L_19)
				{
					goto IL_00cb_2;
				}
			}
			{
				__this->___U3CU3Es__4_7 = (bool)1;
				goto IL_00d4_2;
			}

IL_00cb_2:
			{
				__this->___U3CU3Es__4_7 = (bool)0;
				goto IL_00d4_2;
			}

IL_00d4_2:
			{
				__this->___U3CU3Es__3_6 = 1;
				goto IL_00e9_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00dd_1;
			}
			throw e;
		}

CATCH_00dd_1:
		{
			V_6 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_20 = V_6;
			__this->___U3CU3Es__2_5 = L_20;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_5), (void*)L_20);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00e9_1;
		}

IL_00e9_1:
		{
			RuntimeObject* L_21 = (RuntimeObject*)__this->___U3CeU3E5__1_4;
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_21) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_22 = V_7;
			if (!L_22)
			{
				goto IL_0168_1;
			}
		}
		{
			RuntimeObject* L_23 = (RuntimeObject*)__this->___U3CeU3E5__1_4;
			NullCheck((RuntimeObject*)L_23);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_24;
			L_24 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
			V_9 = L_24;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_25;
			L_25 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_9), NULL);
			V_8 = L_25;
			bool L_26;
			L_26 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_26)
			{
				goto IL_015f_1;
			}
		}
		{
			int32_t L_27 = 1;
			V_0 = L_27;
			__this->___U3CU3E1__state_0 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_28 = V_8;
			__this->___U3CU3Eu__2_10 = L_28;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_10))->___task_0))->___source_0), (void*)NULL);
			V_5 = __this;
			AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_29 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAnyAsyncU3Ed__0_1_tC5A26A942407B0F559D11031DC5D9E153A3C25AE**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_29, (&V_8), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
			goto IL_01f7;
		}

IL_0142_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_30 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_10;
			V_8 = L_30;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_31 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_10);
			il2cpp_codegen_initobj(L_31, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_32 = (-1);
			V_0 = L_32;
			__this->___U3CU3E1__state_0 = L_32;
		}

IL_015f_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_0168_1:
		{
			RuntimeObject* L_33 = (RuntimeObject*)__this->___U3CU3Es__2_5;
			V_6 = L_33;
			RuntimeObject* L_34 = V_6;
			if (!L_34)
			{
				goto IL_0192_1;
			}
		}
		{
			RuntimeObject* L_35 = V_6;
			V_10 = ((Exception_t*)IsInstClass((RuntimeObject*)L_35, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_36 = V_10;
			if (L_36)
			{
				goto IL_0185_1;
			}
		}
		{
			RuntimeObject* L_37 = V_6;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, method);
		}

IL_0185_1:
		{
			Exception_t* L_38 = V_10;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_39;
			L_39 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_38, NULL);
			NullCheck(L_39);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_39, NULL);
		}

IL_0192_1:
		{
			int32_t L_40 = (int32_t)__this->___U3CU3Es__3_6;
			V_11 = L_40;
			int32_t L_41 = V_11;
			if ((((int32_t)L_41) == ((int32_t)1)))
			{
				goto IL_01a1_1;
			}
		}
		{
			goto IL_01aa_1;
		}

IL_01a1_1:
		{
			bool L_42 = (bool)__this->___U3CU3Es__4_7;
			V_1 = L_42;
			goto IL_01db;
		}

IL_01aa_1:
		{
			__this->___U3CU3Es__2_5 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_5), (void*)NULL);
			__this->___U3CeU3E5__1_4 = (RuntimeObject*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_4), (void*)(RuntimeObject*)NULL);
			goto IL_01db;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01ba;
		}
		throw e;
	}

CATCH_01ba:
	{
		V_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_4 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_4), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_43 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_44 = V_10;
		AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_inline(L_43, L_44, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01f7;
	}

IL_01db:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_4 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_4), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_45 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder_1);
		bool L_46 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_inline(L_45, L_46, AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
	}

IL_01f7:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnyAsyncU3Ed__0_1_SetStateMachine_m1B18C84FC24307E14F4D3CE49D3F0A76E68C6E04_gshared (U3CAnyAsyncU3Ed__0_1_tC5A26A942407B0F559D11031DC5D9E153A3C25AE* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnyAsyncU3Ed__1_1__ctor_m27ED3B80A0E11C68BDF706EFEADAB49BF391F8F6_gshared (U3CAnyAsyncU3Ed__1_1_t8E72A4C00F10B48E01D1E28C464D980B19ACDCAB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnyAsyncU3Ed__1_1_MoveNext_m955DF517A87E5982C49E847A450D0D86F7D9F84A_gshared (U3CAnyAsyncU3Ed__1_1_t8E72A4C00F10B48E01D1E28C464D980B19ACDCAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tFE2C2BD199A52F141D8920CBB996FA9087889629 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_tFE2C2BD199A52F141D8920CBB996FA9087889629);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CAnyAsyncU3Ed__1_1_t8E72A4C00F10B48E01D1E28C464D980B19ACDCAB* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	bool V_8 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Exception_t* V_11 = NULL;
	int32_t V_12 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_003f_1;
		}

IL_0014_1:
		{
			goto IL_0169_1;
		}

IL_0019_1:
		{
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__1_5 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_5), (void*)L_5);
			__this->___U3CU3Es__2_6 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_6), (void*)NULL);
			__this->___U3CU3Es__3_7 = 0;
		}

IL_003f_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_0045_2;
				}
			}
			{
				goto IL_0047_2;
			}

IL_0045_2:
			{
				goto IL_00bb_2;
			}

IL_0047_2:
			{
				goto IL_0073_2;
			}

IL_004a_2:
			{
				Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*)__this->___predicate_3;
				RuntimeObject* L_8 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				NullCheck(L_7);
				bool L_10;
				L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_9: *(void**)L_9));
				V_2 = L_10;
				bool L_11 = V_2;
				if (!L_11)
				{
					goto IL_0072_2;
				}
			}
			{
				__this->___U3CU3Es__4_8 = (bool)1;
				goto IL_00fb_2;
			}

IL_0072_2:
			{
			}

IL_0073_2:
			{
				RuntimeObject* L_12 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
				NullCheck(L_12);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_13;
				L_13 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_12);
				V_5 = L_13;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_14;
				L_14 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_5), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_4 = L_14;
				bool L_15;
				L_15 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_4), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00d8_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state_0 = L_16;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17 = V_4;
				__this->___U3CU3Eu__1_10 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_10))->___task_0))->___source_0), (void*)NULL);
				V_6 = __this;
				AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_18 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAnyAsyncU3Ed__1_1_t8E72A4C00F10B48E01D1E28C464D980B19ACDCAB**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_18, (&V_4), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_021e;
			}

IL_00bb_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_10;
				V_4 = L_19;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_20 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_10);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state_0 = L_21;
			}

IL_00d8_2:
			{
				bool L_22;
				L_22 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_4), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5_9 = L_22;
				bool L_23 = (bool)__this->___U3CU3Es__5_9;
				V_3 = L_23;
				bool L_24 = V_3;
				if (L_24)
				{
					goto IL_004a_2;
				}
			}
			{
				__this->___U3CU3Es__4_8 = (bool)0;
				goto IL_00fb_2;
			}

IL_00fb_2:
			{
				__this->___U3CU3Es__3_7 = 1;
				goto IL_0110_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0104_1;
			}
			throw e;
		}

CATCH_0104_1:
		{
			V_7 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_25 = V_7;
			__this->___U3CU3Es__2_6 = L_25;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_6), (void*)L_25);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0110_1;
		}

IL_0110_1:
		{
			RuntimeObject* L_26 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
			V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_26) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_27 = V_8;
			if (!L_27)
			{
				goto IL_018f_1;
			}
		}
		{
			RuntimeObject* L_28 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
			NullCheck((RuntimeObject*)L_28);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_29;
			L_29 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_28);
			V_10 = L_29;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_30;
			L_30 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_10), NULL);
			V_9 = L_30;
			bool L_31;
			L_31 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_9), NULL);
			if (L_31)
			{
				goto IL_0186_1;
			}
		}
		{
			int32_t L_32 = 1;
			V_0 = L_32;
			__this->___U3CU3E1__state_0 = L_32;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_33 = V_9;
			__this->___U3CU3Eu__2_11 = L_33;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_11))->___task_0))->___source_0), (void*)NULL);
			V_6 = __this;
			AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_34 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAnyAsyncU3Ed__1_1_t8E72A4C00F10B48E01D1E28C464D980B19ACDCAB**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_34, (&V_9), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_021e;
		}

IL_0169_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_35 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_11;
			V_9 = L_35;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_36 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_11);
			il2cpp_codegen_initobj(L_36, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_37 = (-1);
			V_0 = L_37;
			__this->___U3CU3E1__state_0 = L_37;
		}

IL_0186_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_9), NULL);
		}

IL_018f_1:
		{
			RuntimeObject* L_38 = (RuntimeObject*)__this->___U3CU3Es__2_6;
			V_7 = L_38;
			RuntimeObject* L_39 = V_7;
			if (!L_39)
			{
				goto IL_01b9_1;
			}
		}
		{
			RuntimeObject* L_40 = V_7;
			V_11 = ((Exception_t*)IsInstClass((RuntimeObject*)L_40, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_41 = V_11;
			if (L_41)
			{
				goto IL_01ac_1;
			}
		}
		{
			RuntimeObject* L_42 = V_7;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, method);
		}

IL_01ac_1:
		{
			Exception_t* L_43 = V_11;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_44;
			L_44 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_43, NULL);
			NullCheck(L_44);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_44, NULL);
		}

IL_01b9_1:
		{
			int32_t L_45 = (int32_t)__this->___U3CU3Es__3_7;
			V_12 = L_45;
			int32_t L_46 = V_12;
			if ((((int32_t)L_46) == ((int32_t)1)))
			{
				goto IL_01c8_1;
			}
		}
		{
			goto IL_01d1_1;
		}

IL_01c8_1:
		{
			bool L_47 = (bool)__this->___U3CU3Es__4_8;
			V_1 = L_47;
			goto IL_0202;
		}

IL_01d1_1:
		{
			__this->___U3CU3Es__2_6 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_6), (void*)NULL);
			__this->___U3CeU3E5__1_5 = (RuntimeObject*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_5), (void*)(RuntimeObject*)NULL);
			goto IL_0202;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01e1;
		}
		throw e;
	}

CATCH_01e1:
	{
		V_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_5), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_48 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_49 = V_11;
		AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_inline(L_48, L_49, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_021e;
	}

IL_0202:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_5), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_50 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder_1);
		bool L_51 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_inline(L_50, L_51, AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
	}

IL_021e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnyAsyncU3Ed__1_1_SetStateMachine_m33B19B9901CB7FE5104F8A3DAA7C9A3F36F3E17C_gshared (U3CAnyAsyncU3Ed__1_1_t8E72A4C00F10B48E01D1E28C464D980B19ACDCAB* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnyAwaitAsyncU3Ed__2_1__ctor_m6D0BEF187FFD0841E025F8F1E79827D77DD8E1F3_gshared (U3CAnyAwaitAsyncU3Ed__2_1_t35E2FF0F0EA95D7A7F26DFCCEF9BF7694904DD25* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnyAwaitAsyncU3Ed__2_1_MoveNext_mA34CD6784BE2C959108502658029A90A57F723E0_gshared (U3CAnyAwaitAsyncU3Ed__2_1_t35E2FF0F0EA95D7A7F26DFCCEF9BF7694904DD25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tC1C140B65322C79E921DAD53C891831543F3EB34 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tC1C140B65322C79E921DAD53C891831543F3EB34);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CAnyAwaitAsyncU3Ed__2_1_t35E2FF0F0EA95D7A7F26DFCCEF9BF7694904DD25* V_5 = NULL;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Exception_t* V_12 = NULL;
	int32_t V_13 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0040_1;
		}

IL_0015_1:
		{
			goto IL_01e4_1;
		}

IL_001a_1:
		{
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__1_5 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_5), (void*)L_5);
			__this->___U3CU3Es__2_6 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_6), (void*)NULL);
			__this->___U3CU3Es__3_7 = 0;
		}

IL_0040_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_004c_2;
				}
			}
			{
				goto IL_0046_2;
			}

IL_0046_2:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_004e_2;
				}
			}
			{
				goto IL_0053_2;
			}

IL_004c_2:
			{
				goto IL_00ab_2;
			}

IL_004e_2:
			{
				goto IL_0134_2;
			}

IL_0053_2:
			{
				goto IL_00ec_2;
			}

IL_0059_2:
			{
				Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C* L_8 = (Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C*)__this->___predicate_3;
				RuntimeObject* L_9 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_11;
				L_11 = InvokerFuncInvoker1< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				V_4 = L_11;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_12;
				L_12 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_3 = L_12;
				bool L_13;
				L_13 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_00c7_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state_0 = L_14;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_15 = V_3;
				__this->___U3CU3Eu__1_11 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_11))->___task_0))->___source_0), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_16 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAnyAwaitAsyncU3Ed__2_1_t35E2FF0F0EA95D7A7F26DFCCEF9BF7694904DD25**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_16, (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0299;
			}

IL_00ab_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_11;
				V_3 = L_17;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_18 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_11);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state_0 = L_19;
			}

IL_00c7_2:
			{
				bool L_20;
				L_20 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5_9 = L_20;
				bool L_21 = (bool)__this->___U3CU3Es__5_9;
				V_2 = L_21;
				bool L_22 = V_2;
				if (!L_22)
				{
					goto IL_00eb_2;
				}
			}
			{
				__this->___U3CU3Es__4_8 = (bool)1;
				goto IL_0176_2;
			}

IL_00eb_2:
			{
			}

IL_00ec_2:
			{
				RuntimeObject* L_23 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
				NullCheck(L_23);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_24;
				L_24 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_23);
				V_4 = L_24;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_25;
				L_25 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_25;
				bool L_26;
				L_26 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_26)
				{
					goto IL_0151_2;
				}
			}
			{
				int32_t L_27 = 1;
				V_0 = L_27;
				__this->___U3CU3E1__state_0 = L_27;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28 = V_7;
				__this->___U3CU3Eu__1_11 = L_28;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_11))->___task_0))->___source_0), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_29 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAnyAwaitAsyncU3Ed__2_1_t35E2FF0F0EA95D7A7F26DFCCEF9BF7694904DD25**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_29, (&V_7), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0299;
			}

IL_0134_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_30 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_11;
				V_7 = L_30;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_31 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_11);
				il2cpp_codegen_initobj(L_31, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_32 = (-1);
				V_0 = L_32;
				__this->___U3CU3E1__state_0 = L_32;
			}

IL_0151_2:
			{
				bool L_33;
				L_33 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6_10 = L_33;
				bool L_34 = (bool)__this->___U3CU3Es__6_10;
				V_6 = L_34;
				bool L_35 = V_6;
				if (L_35)
				{
					goto IL_0059_2;
				}
			}
			{
				__this->___U3CU3Es__4_8 = (bool)0;
				goto IL_0176_2;
			}

IL_0176_2:
			{
				__this->___U3CU3Es__3_7 = 1;
				goto IL_018b_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_017f_1;
			}
			throw e;
		}

CATCH_017f_1:
		{
			V_8 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_36 = V_8;
			__this->___U3CU3Es__2_6 = L_36;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_6), (void*)L_36);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_018b_1;
		}

IL_018b_1:
		{
			RuntimeObject* L_37 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_37) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_38 = V_9;
			if (!L_38)
			{
				goto IL_020a_1;
			}
		}
		{
			RuntimeObject* L_39 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
			NullCheck((RuntimeObject*)L_39);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_40;
			L_40 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_39);
			V_11 = L_40;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41;
			L_41 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_11), NULL);
			V_10 = L_41;
			bool L_42;
			L_42 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_42)
			{
				goto IL_0201_1;
			}
		}
		{
			int32_t L_43 = 2;
			V_0 = L_43;
			__this->___U3CU3E1__state_0 = L_43;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_44 = V_10;
			__this->___U3CU3Eu__2_12 = L_44;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_12))->___task_0))->___source_0), (void*)NULL);
			V_5 = __this;
			AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_45 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAnyAwaitAsyncU3Ed__2_1_t35E2FF0F0EA95D7A7F26DFCCEF9BF7694904DD25**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_45, (&V_10), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0299;
		}

IL_01e4_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_46 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_12;
			V_10 = L_46;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_47 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_12);
			il2cpp_codegen_initobj(L_47, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_48 = (-1);
			V_0 = L_48;
			__this->___U3CU3E1__state_0 = L_48;
		}

IL_0201_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_020a_1:
		{
			RuntimeObject* L_49 = (RuntimeObject*)__this->___U3CU3Es__2_6;
			V_8 = L_49;
			RuntimeObject* L_50 = V_8;
			if (!L_50)
			{
				goto IL_0234_1;
			}
		}
		{
			RuntimeObject* L_51 = V_8;
			V_12 = ((Exception_t*)IsInstClass((RuntimeObject*)L_51, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_52 = V_12;
			if (L_52)
			{
				goto IL_0227_1;
			}
		}
		{
			RuntimeObject* L_53 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_53, method);
		}

IL_0227_1:
		{
			Exception_t* L_54 = V_12;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_55;
			L_55 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_54, NULL);
			NullCheck(L_55);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_55, NULL);
		}

IL_0234_1:
		{
			int32_t L_56 = (int32_t)__this->___U3CU3Es__3_7;
			V_13 = L_56;
			int32_t L_57 = V_13;
			if ((((int32_t)L_57) == ((int32_t)1)))
			{
				goto IL_0243_1;
			}
		}
		{
			goto IL_024c_1;
		}

IL_0243_1:
		{
			bool L_58 = (bool)__this->___U3CU3Es__4_8;
			V_1 = L_58;
			goto IL_027d;
		}

IL_024c_1:
		{
			__this->___U3CU3Es__2_6 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_6), (void*)NULL);
			__this->___U3CeU3E5__1_5 = (RuntimeObject*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_5), (void*)(RuntimeObject*)NULL);
			goto IL_027d;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_025c;
		}
		throw e;
	}

CATCH_025c:
	{
		V_12 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_5), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_59 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_60 = V_12;
		AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_inline(L_59, L_60, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0299;
	}

IL_027d:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_5), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_61 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder_1);
		bool L_62 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_inline(L_61, L_62, AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
	}

IL_0299:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnyAwaitAsyncU3Ed__2_1_SetStateMachine_mF97AB56163246C709270D74216B2731ACD2D3F7A_gshared (U3CAnyAwaitAsyncU3Ed__2_1_t35E2FF0F0EA95D7A7F26DFCCEF9BF7694904DD25* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnyAwaitWithCancellationAsyncU3Ed__3_1__ctor_m87AEC15BA4A99B4316002E83085B85D19F2847D6_gshared (U3CAnyAwaitWithCancellationAsyncU3Ed__3_1_t80086595F6A0BBAFC39EF20D2C66D9AB55BF1411* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnyAwaitWithCancellationAsyncU3Ed__3_1_MoveNext_m5A9D735DD12532110AEFC0D245D72C2CED00B43B_gshared (U3CAnyAwaitWithCancellationAsyncU3Ed__3_1_t80086595F6A0BBAFC39EF20D2C66D9AB55BF1411* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t6FBF9150D602005A89F8B9AF5CD14285FF5DB88B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t6FBF9150D602005A89F8B9AF5CD14285FF5DB88B);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CAnyAwaitWithCancellationAsyncU3Ed__3_1_t80086595F6A0BBAFC39EF20D2C66D9AB55BF1411* V_5 = NULL;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Exception_t* V_12 = NULL;
	int32_t V_13 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0040_1;
		}

IL_0015_1:
		{
			goto IL_01ea_1;
		}

IL_001a_1:
		{
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__1_5 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_5), (void*)L_5);
			__this->___U3CU3Es__2_6 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_6), (void*)NULL);
			__this->___U3CU3Es__3_7 = 0;
		}

IL_0040_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_004c_2;
				}
			}
			{
				goto IL_0046_2;
			}

IL_0046_2:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_004e_2;
				}
			}
			{
				goto IL_0053_2;
			}

IL_004c_2:
			{
				goto IL_00b1_2;
			}

IL_004e_2:
			{
				goto IL_013a_2;
			}

IL_0053_2:
			{
				goto IL_00f2_2;
			}

IL_0059_2:
			{
				Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814* L_8 = (Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814*)__this->___predicate_3;
				RuntimeObject* L_9 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_8);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_12;
				L_12 = InvokerFuncInvoker2< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10), L_11);
				V_4 = L_12;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_13;
				L_13 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_3 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00cd_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state_0 = L_15;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_16 = V_3;
				__this->___U3CU3Eu__1_11 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_11))->___task_0))->___source_0), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_17 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAnyAwaitWithCancellationAsyncU3Ed__3_1_t80086595F6A0BBAFC39EF20D2C66D9AB55BF1411**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_029f;
			}

IL_00b1_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_18 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_11;
				V_3 = L_18;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_19 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_11);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state_0 = L_20;
			}

IL_00cd_2:
			{
				bool L_21;
				L_21 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5_9 = L_21;
				bool L_22 = (bool)__this->___U3CU3Es__5_9;
				V_2 = L_22;
				bool L_23 = V_2;
				if (!L_23)
				{
					goto IL_00f1_2;
				}
			}
			{
				__this->___U3CU3Es__4_8 = (bool)1;
				goto IL_017c_2;
			}

IL_00f1_2:
			{
			}

IL_00f2_2:
			{
				RuntimeObject* L_24 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
				NullCheck(L_24);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_25;
				L_25 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_24);
				V_4 = L_25;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_26;
				L_26 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_26;
				bool L_27;
				L_27 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_0157_2;
				}
			}
			{
				int32_t L_28 = 1;
				V_0 = L_28;
				__this->___U3CU3E1__state_0 = L_28;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29 = V_7;
				__this->___U3CU3Eu__1_11 = L_29;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_11))->___task_0))->___source_0), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_30 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAnyAwaitWithCancellationAsyncU3Ed__3_1_t80086595F6A0BBAFC39EF20D2C66D9AB55BF1411**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_30, (&V_7), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_029f;
			}

IL_013a_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_11;
				V_7 = L_31;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_32 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_11);
				il2cpp_codegen_initobj(L_32, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_33 = (-1);
				V_0 = L_33;
				__this->___U3CU3E1__state_0 = L_33;
			}

IL_0157_2:
			{
				bool L_34;
				L_34 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6_10 = L_34;
				bool L_35 = (bool)__this->___U3CU3Es__6_10;
				V_6 = L_35;
				bool L_36 = V_6;
				if (L_36)
				{
					goto IL_0059_2;
				}
			}
			{
				__this->___U3CU3Es__4_8 = (bool)0;
				goto IL_017c_2;
			}

IL_017c_2:
			{
				__this->___U3CU3Es__3_7 = 1;
				goto IL_0191_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0185_1;
			}
			throw e;
		}

CATCH_0185_1:
		{
			V_8 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_37 = V_8;
			__this->___U3CU3Es__2_6 = L_37;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_6), (void*)L_37);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0191_1;
		}

IL_0191_1:
		{
			RuntimeObject* L_38 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_38) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_39 = V_9;
			if (!L_39)
			{
				goto IL_0210_1;
			}
		}
		{
			RuntimeObject* L_40 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
			NullCheck((RuntimeObject*)L_40);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_41;
			L_41 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_40);
			V_11 = L_41;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_42;
			L_42 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_11), NULL);
			V_10 = L_42;
			bool L_43;
			L_43 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_43)
			{
				goto IL_0207_1;
			}
		}
		{
			int32_t L_44 = 2;
			V_0 = L_44;
			__this->___U3CU3E1__state_0 = L_44;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_45 = V_10;
			__this->___U3CU3Eu__2_12 = L_45;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_12))->___task_0))->___source_0), (void*)NULL);
			V_5 = __this;
			AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_46 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAnyAwaitWithCancellationAsyncU3Ed__3_1_t80086595F6A0BBAFC39EF20D2C66D9AB55BF1411**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_46, (&V_10), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_029f;
		}

IL_01ea_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_12;
			V_10 = L_47;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_48 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_12);
			il2cpp_codegen_initobj(L_48, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_49 = (-1);
			V_0 = L_49;
			__this->___U3CU3E1__state_0 = L_49;
		}

IL_0207_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_0210_1:
		{
			RuntimeObject* L_50 = (RuntimeObject*)__this->___U3CU3Es__2_6;
			V_8 = L_50;
			RuntimeObject* L_51 = V_8;
			if (!L_51)
			{
				goto IL_023a_1;
			}
		}
		{
			RuntimeObject* L_52 = V_8;
			V_12 = ((Exception_t*)IsInstClass((RuntimeObject*)L_52, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_53 = V_12;
			if (L_53)
			{
				goto IL_022d_1;
			}
		}
		{
			RuntimeObject* L_54 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_54, method);
		}

IL_022d_1:
		{
			Exception_t* L_55 = V_12;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_56;
			L_56 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_55, NULL);
			NullCheck(L_56);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_56, NULL);
		}

IL_023a_1:
		{
			int32_t L_57 = (int32_t)__this->___U3CU3Es__3_7;
			V_13 = L_57;
			int32_t L_58 = V_13;
			if ((((int32_t)L_58) == ((int32_t)1)))
			{
				goto IL_0249_1;
			}
		}
		{
			goto IL_0252_1;
		}

IL_0249_1:
		{
			bool L_59 = (bool)__this->___U3CU3Es__4_8;
			V_1 = L_59;
			goto IL_0283;
		}

IL_0252_1:
		{
			__this->___U3CU3Es__2_6 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_6), (void*)NULL);
			__this->___U3CeU3E5__1_5 = (RuntimeObject*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_5), (void*)(RuntimeObject*)NULL);
			goto IL_0283;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0262;
		}
		throw e;
	}

CATCH_0262:
	{
		V_12 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_5), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_60 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_61 = V_12;
		AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_inline(L_60, L_61, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_029f;
	}

IL_0283:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_5), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_62 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder_1);
		bool L_63 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_inline(L_62, L_63, AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
	}

IL_029f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnyAwaitWithCancellationAsyncU3Ed__3_1_SetStateMachine_mB6C6552E8E30501460531DA98FF48913A2D645E4_gshared (U3CAnyAwaitWithCancellationAsyncU3Ed__3_1_t80086595F6A0BBAFC39EF20D2C66D9AB55BF1411* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__13_1__ctor_m4D3EF354CA018030CD4D7C80FE56FDC3928D707A_gshared (U3CAverageAsyncU3Ed__13_1_tF4497F5FC4DE74DA6C196678ED361D0D2A97A2A6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__13_1_MoveNext_mCFD411D90831FF200EE369042E5C505131C0AED1_gshared (U3CAverageAsyncU3Ed__13_1_tF4497F5FC4DE74DA6C196678ED361D0D2A97A2A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t234FA6A06B400063E41A9CAA8BB6402A42AED822 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t234FA6A06B400063E41A9CAA8BB6402A42AED822);
	int32_t V_0 = 0;
	double V_1 = 0.0;
	int64_t V_2 = 0;
	bool V_3 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CAverageAsyncU3Ed__13_1_tF4497F5FC4DE74DA6C196678ED361D0D2A97A2A6* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	bool V_8 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Exception_t* V_11 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_0056_1;
		}

IL_0014_1:
		{
			goto IL_0183_1;
		}

IL_0019_1:
		{
			__this->___U3CcountU3E5__1_5 = ((int64_t)0);
			__this->___U3CsumU3E5__2_6 = (0.0);
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__3_7 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)L_5);
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			__this->___U3CU3Es__5_9 = 0;
		}

IL_0056_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_005c_2;
				}
			}
			{
				goto IL_0061_2;
			}

IL_005c_2:
			{
				goto IL_00e4_2;
			}

IL_0061_2:
			{
				goto IL_009c_2;
			}

IL_0064_2:
			{
				double L_7 = (double)__this->___U3CsumU3E5__2_6;
				Func_2_tF36C7D1152BF6807C03112D4A053E5038A13A6EB* L_8 = (Func_2_tF36C7D1152BF6807C03112D4A053E5038A13A6EB*)__this->___selector_3;
				RuntimeObject* L_9 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				double L_11;
				L_11 = InvokerFuncInvoker1< double, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				__this->___U3CsumU3E5__2_6 = ((double)il2cpp_codegen_add(L_7, L_11));
				int64_t L_12 = (int64_t)__this->___U3CcountU3E5__1_5;
				V_2 = L_12;
				int64_t L_13 = V_2;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_13, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1_5 = ((int64_t)il2cpp_codegen_add(L_13, ((int64_t)1)));
			}

IL_009c_2:
			{
				RuntimeObject* L_14 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_14);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_15;
				L_15 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_14);
				V_5 = L_15;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_16;
				L_16 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_5), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_4 = L_16;
				bool L_17;
				L_17 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_4), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_0101_2;
				}
			}
			{
				int32_t L_18 = 0;
				V_0 = L_18;
				__this->___U3CU3E1__state_0 = L_18;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19 = V_4;
				__this->___U3CU3Eu__1_11 = L_19;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_11))->___task_0))->___source_0), (void*)NULL);
				V_6 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_20 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAsyncU3Ed__13_1_tF4497F5FC4DE74DA6C196678ED361D0D2A97A2A6**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_20, (&V_4), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_022f;
			}

IL_00e4_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_21 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_11;
				V_4 = L_21;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_22 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_11);
				il2cpp_codegen_initobj(L_22, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_23 = (-1);
				V_0 = L_23;
				__this->___U3CU3E1__state_0 = L_23;
			}

IL_0101_2:
			{
				bool L_24;
				L_24 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_4), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6_10 = L_24;
				bool L_25 = (bool)__this->___U3CU3Es__6_10;
				V_3 = L_25;
				bool L_26 = V_3;
				if (L_26)
				{
					goto IL_0064_2;
				}
			}
			{
				goto IL_012a_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_011e_1;
			}
			throw e;
		}

CATCH_011e_1:
		{
			V_7 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_27 = V_7;
			__this->___U3CU3Es__4_8 = L_27;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)L_27);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_012a_1;
		}

IL_012a_1:
		{
			RuntimeObject* L_28 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_28) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_29 = V_8;
			if (!L_29)
			{
				goto IL_01a9_1;
			}
		}
		{
			RuntimeObject* L_30 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			NullCheck((RuntimeObject*)L_30);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_31;
			L_31 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_30);
			V_10 = L_31;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_32;
			L_32 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_10), NULL);
			V_9 = L_32;
			bool L_33;
			L_33 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_9), NULL);
			if (L_33)
			{
				goto IL_01a0_1;
			}
		}
		{
			int32_t L_34 = 1;
			V_0 = L_34;
			__this->___U3CU3E1__state_0 = L_34;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_35 = V_9;
			__this->___U3CU3Eu__2_12 = L_35;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_12))->___task_0))->___source_0), (void*)NULL);
			V_6 = __this;
			AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_36 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAsyncU3Ed__13_1_tF4497F5FC4DE74DA6C196678ED361D0D2A97A2A6**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_36, (&V_9), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_022f;
		}

IL_0183_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_37 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_12;
			V_9 = L_37;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_38 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_12);
			il2cpp_codegen_initobj(L_38, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_39 = (-1);
			V_0 = L_39;
			__this->___U3CU3E1__state_0 = L_39;
		}

IL_01a0_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_9), NULL);
		}

IL_01a9_1:
		{
			RuntimeObject* L_40 = (RuntimeObject*)__this->___U3CU3Es__4_8;
			V_7 = L_40;
			RuntimeObject* L_41 = V_7;
			if (!L_41)
			{
				goto IL_01d3_1;
			}
		}
		{
			RuntimeObject* L_42 = V_7;
			V_11 = ((Exception_t*)IsInstClass((RuntimeObject*)L_42, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_43 = V_11;
			if (L_43)
			{
				goto IL_01c6_1;
			}
		}
		{
			RuntimeObject* L_44 = V_7;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
		}

IL_01c6_1:
		{
			Exception_t* L_45 = V_11;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_46;
			L_46 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_45, NULL);
			NullCheck(L_46);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_46, NULL);
		}

IL_01d3_1:
		{
			int32_t L_47 = (int32_t)__this->___U3CU3Es__5_9;
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			double L_48 = (double)__this->___U3CsumU3E5__2_6;
			int64_t L_49 = (int64_t)__this->___U3CcountU3E5__1_5;
			V_1 = ((double)(L_48/((double)L_49)));
			goto IL_0213;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01f2;
		}
		throw e;
	}

CATCH_01f2:
	{
		V_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_50 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_51 = V_11;
		AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_inline(L_50, L_51, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_022f;
	}

IL_0213:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_52 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
		double L_53 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_inline(L_52, L_53, AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
	}

IL_022f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__13_1_SetStateMachine_m31630B986819ADEEB673FADF06BA12795EDEA859_gshared (U3CAverageAsyncU3Ed__13_1_tF4497F5FC4DE74DA6C196678ED361D0D2A97A2A6* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__17_1__ctor_m777409177DD68335662294AFF4DD072E04B76DBF_gshared (U3CAverageAsyncU3Ed__17_1_tAD8B4205081C02C2594BCB614DAB236500FBB75E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__17_1_MoveNext_m7BDD8A6886E29E0FFDFF8BEB96AB4B20F828C830_gshared (U3CAverageAsyncU3Ed__17_1_tAD8B4205081C02C2594BCB614DAB236500FBB75E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tAAAA30DB8EBC7226EB5113AC5BCC7417C05F2726 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_tAAAA30DB8EBC7226EB5113AC5BCC7417C05F2726);
	int32_t V_0 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_1;
	memset((&V_1), 0, sizeof(V_1));
	int64_t V_2 = 0;
	bool V_3 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CAverageAsyncU3Ed__17_1_tAD8B4205081C02C2594BCB614DAB236500FBB75E* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	bool V_8 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Exception_t* V_11 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_0053_1;
		}

IL_0014_1:
		{
			goto IL_0184_1;
		}

IL_0019_1:
		{
			__this->___U3CcountU3E5__1_5 = ((int64_t)0);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* L_3 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)(&__this->___U3CsumU3E5__2_6);
			il2cpp_codegen_initobj(L_3, sizeof(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F));
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__3_7 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)L_6);
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			__this->___U3CU3Es__5_9 = 0;
		}

IL_0053_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0059_2;
				}
			}
			{
				goto IL_005e_2;
			}

IL_0059_2:
			{
				goto IL_00e5_2;
			}

IL_005e_2:
			{
				goto IL_009d_2;
			}

IL_0061_2:
			{
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_8 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)__this->___U3CsumU3E5__2_6;
				Func_2_t5ABD904FFCFC84BA711C9261A36E9482990A6CA7* L_9 = (Func_2_t5ABD904FFCFC84BA711C9261A36E9482990A6CA7*)__this->___selector_3;
				RuntimeObject* L_10 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_12;
				L_12 = InvokerFuncInvoker1< Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_13;
				L_13 = Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7(L_8, L_12, NULL);
				__this->___U3CsumU3E5__2_6 = L_13;
				int64_t L_14 = (int64_t)__this->___U3CcountU3E5__1_5;
				V_2 = L_14;
				int64_t L_15 = V_2;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_15, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1_5 = ((int64_t)il2cpp_codegen_add(L_15, ((int64_t)1)));
			}

IL_009d_2:
			{
				RuntimeObject* L_16 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_16);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_17;
				L_17 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_16);
				V_5 = L_17;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_18;
				L_18 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_5), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_4 = L_18;
				bool L_19;
				L_19 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_4), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_0102_2;
				}
			}
			{
				int32_t L_20 = 0;
				V_0 = L_20;
				__this->___U3CU3E1__state_0 = L_20;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_21 = V_4;
				__this->___U3CU3Eu__1_11 = L_21;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_11))->___task_0))->___source_0), (void*)NULL);
				V_6 = __this;
				AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_22 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAsyncU3Ed__17_1_tAD8B4205081C02C2594BCB614DAB236500FBB75E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_22, (&V_4), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0238;
			}

IL_00e5_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_23 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_11;
				V_4 = L_23;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_24 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_11);
				il2cpp_codegen_initobj(L_24, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_25 = (-1);
				V_0 = L_25;
				__this->___U3CU3E1__state_0 = L_25;
			}

IL_0102_2:
			{
				bool L_26;
				L_26 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_4), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6_10 = L_26;
				bool L_27 = (bool)__this->___U3CU3Es__6_10;
				V_3 = L_27;
				bool L_28 = V_3;
				if (L_28)
				{
					goto IL_0061_2;
				}
			}
			{
				goto IL_012b_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_011f_1;
			}
			throw e;
		}

CATCH_011f_1:
		{
			V_7 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_29 = V_7;
			__this->___U3CU3Es__4_8 = L_29;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)L_29);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_012b_1;
		}

IL_012b_1:
		{
			RuntimeObject* L_30 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_30) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_31 = V_8;
			if (!L_31)
			{
				goto IL_01aa_1;
			}
		}
		{
			RuntimeObject* L_32 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			NullCheck((RuntimeObject*)L_32);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_33;
			L_33 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
			V_10 = L_33;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_34;
			L_34 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_10), NULL);
			V_9 = L_34;
			bool L_35;
			L_35 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_9), NULL);
			if (L_35)
			{
				goto IL_01a1_1;
			}
		}
		{
			int32_t L_36 = 1;
			V_0 = L_36;
			__this->___U3CU3E1__state_0 = L_36;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_37 = V_9;
			__this->___U3CU3Eu__2_12 = L_37;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_12))->___task_0))->___source_0), (void*)NULL);
			V_6 = __this;
			AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_38 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAsyncU3Ed__17_1_tAD8B4205081C02C2594BCB614DAB236500FBB75E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_38, (&V_9), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0238;
		}

IL_0184_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_12;
			V_9 = L_39;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_40 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_12);
			il2cpp_codegen_initobj(L_40, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_41 = (-1);
			V_0 = L_41;
			__this->___U3CU3E1__state_0 = L_41;
		}

IL_01a1_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_9), NULL);
		}

IL_01aa_1:
		{
			RuntimeObject* L_42 = (RuntimeObject*)__this->___U3CU3Es__4_8;
			V_7 = L_42;
			RuntimeObject* L_43 = V_7;
			if (!L_43)
			{
				goto IL_01d4_1;
			}
		}
		{
			RuntimeObject* L_44 = V_7;
			V_11 = ((Exception_t*)IsInstClass((RuntimeObject*)L_44, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_45 = V_11;
			if (L_45)
			{
				goto IL_01c7_1;
			}
		}
		{
			RuntimeObject* L_46 = V_7;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_46, method);
		}

IL_01c7_1:
		{
			Exception_t* L_47 = V_11;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_48;
			L_48 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_47, NULL);
			NullCheck(L_48);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_48, NULL);
		}

IL_01d4_1:
		{
			int32_t L_49 = (int32_t)__this->___U3CU3Es__5_9;
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_50 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)__this->___U3CsumU3E5__2_6;
			int64_t L_51 = (int64_t)__this->___U3CcountU3E5__1_5;
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_52;
			L_52 = Decimal_op_Implicit_m8F9A38760D01B23E6DFF77EA760CCE5111F3656D(L_51, NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_53;
			L_53 = Decimal_op_Division_mA0BD25988CA8010A3F8EA2F6A534F9F2D812D2AC(L_50, L_52, NULL);
			V_1 = L_53;
			goto IL_021c;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01fb;
		}
		throw e;
	}

CATCH_01fb:
	{
		V_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_54 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_55 = V_11;
		AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_inline(L_54, L_55, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0238;
	}

IL_021c:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_56 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_57 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_inline(L_56, L_57, AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_RuntimeMethod_var);
	}

IL_0238:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__17_1_SetStateMachine_m29C7ADA91EC4B59EDBD12412957709ECBE41B54F_gshared (U3CAverageAsyncU3Ed__17_1_tAD8B4205081C02C2594BCB614DAB236500FBB75E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__1_1__ctor_mB87A7D3EE55A4962B5577F16E101CE15384E3B02_gshared (U3CAverageAsyncU3Ed__1_1_t159C2C09DDCD5B3BF8254D77B69FBB0B77FE048B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__1_1_MoveNext_m124C226224B011FFCDEF7026C250771C9BD009DC_gshared (U3CAverageAsyncU3Ed__1_1_t159C2C09DDCD5B3BF8254D77B69FBB0B77FE048B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t03083B696DEB7B66918C0C7D95A668467ABF2A38 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t03083B696DEB7B66918C0C7D95A668467ABF2A38);
	int32_t V_0 = 0;
	double V_1 = 0.0;
	int64_t V_2 = 0;
	bool V_3 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CAverageAsyncU3Ed__1_1_t159C2C09DDCD5B3BF8254D77B69FBB0B77FE048B* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	bool V_8 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Exception_t* V_11 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_004e_1;
		}

IL_0014_1:
		{
			goto IL_017b_1;
		}

IL_0019_1:
		{
			__this->___U3CcountU3E5__1_5 = ((int64_t)0);
			__this->___U3CsumU3E5__2_6 = 0;
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__3_7 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)L_5);
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			__this->___U3CU3Es__5_9 = 0;
		}

IL_004e_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_0054_2;
				}
			}
			{
				goto IL_0059_2;
			}

IL_0054_2:
			{
				goto IL_00dc_2;
			}

IL_0059_2:
			{
				goto IL_0094_2;
			}

IL_005c_2:
			{
				int32_t L_7 = (int32_t)__this->___U3CsumU3E5__2_6;
				Func_2_t8DB808B3690BFDBD7B936631B430453B90DBBDE7* L_8 = (Func_2_t8DB808B3690BFDBD7B936631B430453B90DBBDE7*)__this->___selector_3;
				RuntimeObject* L_9 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				int32_t L_11;
				L_11 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				if (((int64_t)L_7 + (int64_t)L_11 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_7 + (int64_t)L_11 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CsumU3E5__2_6 = ((int32_t)il2cpp_codegen_add(L_7, L_11));
				int64_t L_12 = (int64_t)__this->___U3CcountU3E5__1_5;
				V_2 = L_12;
				int64_t L_13 = V_2;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_13, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1_5 = ((int64_t)il2cpp_codegen_add(L_13, ((int64_t)1)));
			}

IL_0094_2:
			{
				RuntimeObject* L_14 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_14);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_15;
				L_15 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_14);
				V_5 = L_15;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_16;
				L_16 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_5), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_4 = L_16;
				bool L_17;
				L_17 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_4), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_00f9_2;
				}
			}
			{
				int32_t L_18 = 0;
				V_0 = L_18;
				__this->___U3CU3E1__state_0 = L_18;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19 = V_4;
				__this->___U3CU3Eu__1_11 = L_19;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_11))->___task_0))->___source_0), (void*)NULL);
				V_6 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_20 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAsyncU3Ed__1_1_t159C2C09DDCD5B3BF8254D77B69FBB0B77FE048B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_20, (&V_4), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0228;
			}

IL_00dc_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_21 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_11;
				V_4 = L_21;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_22 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_11);
				il2cpp_codegen_initobj(L_22, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_23 = (-1);
				V_0 = L_23;
				__this->___U3CU3E1__state_0 = L_23;
			}

IL_00f9_2:
			{
				bool L_24;
				L_24 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_4), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6_10 = L_24;
				bool L_25 = (bool)__this->___U3CU3Es__6_10;
				V_3 = L_25;
				bool L_26 = V_3;
				if (L_26)
				{
					goto IL_005c_2;
				}
			}
			{
				goto IL_0122_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0116_1;
			}
			throw e;
		}

CATCH_0116_1:
		{
			V_7 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_27 = V_7;
			__this->___U3CU3Es__4_8 = L_27;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)L_27);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0122_1;
		}

IL_0122_1:
		{
			RuntimeObject* L_28 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_28) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_29 = V_8;
			if (!L_29)
			{
				goto IL_01a1_1;
			}
		}
		{
			RuntimeObject* L_30 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			NullCheck((RuntimeObject*)L_30);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_31;
			L_31 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_30);
			V_10 = L_31;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_32;
			L_32 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_10), NULL);
			V_9 = L_32;
			bool L_33;
			L_33 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_9), NULL);
			if (L_33)
			{
				goto IL_0198_1;
			}
		}
		{
			int32_t L_34 = 1;
			V_0 = L_34;
			__this->___U3CU3E1__state_0 = L_34;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_35 = V_9;
			__this->___U3CU3Eu__2_12 = L_35;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_12))->___task_0))->___source_0), (void*)NULL);
			V_6 = __this;
			AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_36 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAsyncU3Ed__1_1_t159C2C09DDCD5B3BF8254D77B69FBB0B77FE048B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_36, (&V_9), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0228;
		}

IL_017b_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_37 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_12;
			V_9 = L_37;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_38 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_12);
			il2cpp_codegen_initobj(L_38, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_39 = (-1);
			V_0 = L_39;
			__this->___U3CU3E1__state_0 = L_39;
		}

IL_0198_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_9), NULL);
		}

IL_01a1_1:
		{
			RuntimeObject* L_40 = (RuntimeObject*)__this->___U3CU3Es__4_8;
			V_7 = L_40;
			RuntimeObject* L_41 = V_7;
			if (!L_41)
			{
				goto IL_01cb_1;
			}
		}
		{
			RuntimeObject* L_42 = V_7;
			V_11 = ((Exception_t*)IsInstClass((RuntimeObject*)L_42, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_43 = V_11;
			if (L_43)
			{
				goto IL_01be_1;
			}
		}
		{
			RuntimeObject* L_44 = V_7;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
		}

IL_01be_1:
		{
			Exception_t* L_45 = V_11;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_46;
			L_46 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_45, NULL);
			NullCheck(L_46);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_46, NULL);
		}

IL_01cb_1:
		{
			int32_t L_47 = (int32_t)__this->___U3CU3Es__5_9;
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			int32_t L_48 = (int32_t)__this->___U3CsumU3E5__2_6;
			int64_t L_49 = (int64_t)__this->___U3CcountU3E5__1_5;
			V_1 = ((double)(((double)L_48)/((double)L_49)));
			goto IL_020c;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01eb;
		}
		throw e;
	}

CATCH_01eb:
	{
		V_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_50 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_51 = V_11;
		AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_inline(L_50, L_51, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0228;
	}

IL_020c:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_52 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
		double L_53 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_inline(L_52, L_53, AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
	}

IL_0228:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__1_1_SetStateMachine_m0DC90CE4343333D1845291E269E370F687DFFDBB_gshared (U3CAverageAsyncU3Ed__1_1_t159C2C09DDCD5B3BF8254D77B69FBB0B77FE048B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__21_1__ctor_m82F2D8FE8A00723E85BB6174E24902891FC89F3E_gshared (U3CAverageAsyncU3Ed__21_1_t1332FF70F0A3589494CB18B96F4F4A731100690A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__21_1_MoveNext_mD076F796E197CD2F629597B1D742678CC638422D_gshared (U3CAverageAsyncU3Ed__21_1_t1332FF70F0A3589494CB18B96F4F4A731100690A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t90FA04E377BE19BFAB8B17D4F26DAE4141D914B4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t90FA04E377BE19BFAB8B17D4F26DAE4141D914B4);
	int32_t V_0 = 0;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int64_t V_6 = 0;
	bool V_7 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_9;
	memset((&V_9), 0, sizeof(V_9));
	U3CAverageAsyncU3Ed__21_1_t1332FF70F0A3589494CB18B96F4F4A731100690A* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_13;
	memset((&V_13), 0, sizeof(V_13));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Exception_t* V_15 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	U3CAverageAsyncU3Ed__21_1_t1332FF70F0A3589494CB18B96F4F4A731100690A* G_B16_0 = NULL;
	U3CAverageAsyncU3Ed__21_1_t1332FF70F0A3589494CB18B96F4F4A731100690A* G_B15_0 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B17_0;
	memset((&G_B17_0), 0, sizeof(G_B17_0));
	U3CAverageAsyncU3Ed__21_1_t1332FF70F0A3589494CB18B96F4F4A731100690A* G_B17_1 = NULL;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_0053_1;
		}

IL_0014_1:
		{
			goto IL_01db_1;
		}

IL_0019_1:
		{
			__this->___U3CcountU3E5__1_5 = ((int64_t)0);
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_3;
			memset((&L_3), 0, sizeof(L_3));
			Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_3), 0, Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
			__this->___U3CsumU3E5__2_6 = L_3;
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__3_7 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)L_6);
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			__this->___U3CU3Es__5_9 = 0;
		}

IL_0053_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0059_2;
				}
			}
			{
				goto IL_005e_2;
			}

IL_0059_2:
			{
				goto IL_013a_2;
			}

IL_005e_2:
			{
				goto IL_00f2_2;
			}

IL_0064_2:
			{
				Func_2_t0DE0378A8A90F3B8204450750A771096D0F75A98* L_8 = (Func_2_t0DE0378A8A90F3B8204450750A771096D0F75A98*)__this->___selector_3;
				RuntimeObject* L_9 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_11;
				L_11 = InvokerFuncInvoker1< Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				__this->___U3CvU3E5__6_10 = L_11;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_12 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CvU3E5__6_10);
				bool L_13;
				L_13 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_12, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14 = V_2;
				if (!L_14)
				{
					goto IL_00e5_2;
				}
			}
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_15 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28)__this->___U3CsumU3E5__2_6;
				V_3 = L_15;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_16 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CvU3E5__6_10);
				int32_t L_17;
				L_17 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA(L_16, Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
				V_4 = L_17;
				bool L_18;
				L_18 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_3), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				if (L_18)
				{
					G_B16_0 = __this;
					goto IL_00bc_2;
				}
				G_B15_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_19 = V_5;
				G_B17_0 = L_19;
				G_B17_1 = G_B15_0;
				goto IL_00cb_2;
			}

IL_00bc_2:
			{
				int32_t L_20;
				L_20 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_3), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
				int32_t L_21 = V_4;
				if (((int64_t)L_20 + (int64_t)L_21 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_20 + (int64_t)L_21 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_22;
				memset((&L_22), 0, sizeof(L_22));
				Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_22), ((int32_t)il2cpp_codegen_add(L_20, L_21)), Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
				G_B17_0 = L_22;
				G_B17_1 = G_B16_0;
			}

IL_00cb_2:
			{
				NullCheck(G_B17_1);
				G_B17_1->___U3CsumU3E5__2_6 = G_B17_0;
				int64_t L_23 = (int64_t)__this->___U3CcountU3E5__1_5;
				V_6 = L_23;
				int64_t L_24 = V_6;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_24, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1_5 = ((int64_t)il2cpp_codegen_add(L_24, ((int64_t)1)));
			}

IL_00e5_2:
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_25 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CvU3E5__6_10);
				il2cpp_codegen_initobj(L_25, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
			}

IL_00f2_2:
			{
				RuntimeObject* L_26 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_26);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_27;
				L_27 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_26);
				V_9 = L_27;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28;
				L_28 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_9), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_8 = L_28;
				bool L_29;
				L_29 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_8), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_0157_2;
				}
			}
			{
				int32_t L_30 = 0;
				V_0 = L_30;
				__this->___U3CU3E1__state_0 = L_30;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = V_8;
				__this->___U3CU3Eu__1_12 = L_31;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_12))->___task_0))->___source_0), (void*)NULL);
				V_10 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_32 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAsyncU3Ed__21_1_t1332FF70F0A3589494CB18B96F4F4A731100690A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_32, (&V_8), (&V_10), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0292;
			}

IL_013a_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_12;
				V_8 = L_33;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_12);
				il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->___U3CU3E1__state_0 = L_35;
			}

IL_0157_2:
			{
				bool L_36;
				L_36 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_8), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_36;
				bool L_37 = (bool)__this->___U3CU3Es__7_11;
				V_7 = L_37;
				bool L_38 = V_7;
				if (L_38)
				{
					goto IL_0064_2;
				}
			}
			{
				goto IL_0182_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0176_1;
			}
			throw e;
		}

CATCH_0176_1:
		{
			V_11 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_39 = V_11;
			__this->___U3CU3Es__4_8 = L_39;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)L_39);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0182_1;
		}

IL_0182_1:
		{
			RuntimeObject* L_40 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			V_12 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_40) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_41 = V_12;
			if (!L_41)
			{
				goto IL_0201_1;
			}
		}
		{
			RuntimeObject* L_42 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			NullCheck((RuntimeObject*)L_42);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_43;
			L_43 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_42);
			V_14 = L_43;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_44;
			L_44 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_14), NULL);
			V_13 = L_44;
			bool L_45;
			L_45 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_13), NULL);
			if (L_45)
			{
				goto IL_01f8_1;
			}
		}
		{
			int32_t L_46 = 1;
			V_0 = L_46;
			__this->___U3CU3E1__state_0 = L_46;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47 = V_13;
			__this->___U3CU3Eu__2_13 = L_47;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_13))->___task_0))->___source_0), (void*)NULL);
			V_10 = __this;
			AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_48 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAsyncU3Ed__21_1_t1332FF70F0A3589494CB18B96F4F4A731100690A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_48, (&V_13), (&V_10), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0292;
		}

IL_01db_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_49 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_13;
			V_13 = L_49;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_50 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_13);
			il2cpp_codegen_initobj(L_50, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_51 = (-1);
			V_0 = L_51;
			__this->___U3CU3E1__state_0 = L_51;
		}

IL_01f8_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_13), NULL);
		}

IL_0201_1:
		{
			RuntimeObject* L_52 = (RuntimeObject*)__this->___U3CU3Es__4_8;
			V_11 = L_52;
			RuntimeObject* L_53 = V_11;
			if (!L_53)
			{
				goto IL_022b_1;
			}
		}
		{
			RuntimeObject* L_54 = V_11;
			V_15 = ((Exception_t*)IsInstClass((RuntimeObject*)L_54, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_55 = V_15;
			if (L_55)
			{
				goto IL_021e_1;
			}
		}
		{
			RuntimeObject* L_56 = V_11;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_56, method);
		}

IL_021e_1:
		{
			Exception_t* L_57 = V_15;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_58;
			L_58 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_57, NULL);
			NullCheck(L_58);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_58, NULL);
		}

IL_022b_1:
		{
			int32_t L_59 = (int32_t)__this->___U3CU3Es__5_9;
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_60 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CsumU3E5__2_6);
			int32_t L_61;
			L_61 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA(L_60, Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
			int64_t L_62 = (int64_t)__this->___U3CcountU3E5__1_5;
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_63;
			memset((&L_63), 0, sizeof(L_63));
			Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_63), ((double)(((double)L_61)/((double)L_62))), Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
			V_1 = L_63;
			goto IL_0276;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0255;
		}
		throw e;
	}

CATCH_0255:
	{
		V_15 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_64 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_65 = V_15;
		AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_inline(L_64, L_65, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0292;
	}

IL_0276:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_66 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_67 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_inline(L_66, L_67, AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
	}

IL_0292:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__21_1_SetStateMachine_m8866E1857F0D579E8F89DDD59F19A33BE84B7FC8_gshared (U3CAverageAsyncU3Ed__21_1_t1332FF70F0A3589494CB18B96F4F4A731100690A* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__25_1__ctor_mFF6C1FAF174323198C0B3B9DBDBA06CEA3F6E5DD_gshared (U3CAverageAsyncU3Ed__25_1_t50DC0406CEF02DAB876282D754EA66F5781A80BF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__25_1_MoveNext_m698BE63E46955F05A7E3BA5C4EE2A6FDC7E6355E_gshared (U3CAverageAsyncU3Ed__25_1_t50DC0406CEF02DAB876282D754EA66F5781A80BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t9028DD732BA1643117233AC1C36360CA2CA18767 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t9028DD732BA1643117233AC1C36360CA2CA18767);
	int32_t V_0 = 0;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int64_t V_4 = 0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	U3CAverageAsyncU3Ed__25_1_t50DC0406CEF02DAB876282D754EA66F5781A80BF* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_12;
	memset((&V_12), 0, sizeof(V_12));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Exception_t* V_14 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	U3CAverageAsyncU3Ed__25_1_t50DC0406CEF02DAB876282D754EA66F5781A80BF* G_B16_0 = NULL;
	U3CAverageAsyncU3Ed__25_1_t50DC0406CEF02DAB876282D754EA66F5781A80BF* G_B15_0 = NULL;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 G_B17_0;
	memset((&G_B17_0), 0, sizeof(G_B17_0));
	U3CAverageAsyncU3Ed__25_1_t50DC0406CEF02DAB876282D754EA66F5781A80BF* G_B17_1 = NULL;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_0054_1;
		}

IL_0014_1:
		{
			goto IL_01dc_1;
		}

IL_0019_1:
		{
			__this->___U3CcountU3E5__1_5 = ((int64_t)0);
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_3;
			memset((&L_3), 0, sizeof(L_3));
			Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_3), ((int64_t)0), Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
			__this->___U3CsumU3E5__2_6 = L_3;
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__3_7 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)L_6);
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			__this->___U3CU3Es__5_9 = 0;
		}

IL_0054_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_005a_2;
				}
			}
			{
				goto IL_005f_2;
			}

IL_005a_2:
			{
				goto IL_013b_2;
			}

IL_005f_2:
			{
				goto IL_00f3_2;
			}

IL_0065_2:
			{
				Func_2_tFC0477C87E7518136DEE345DCF44B6ACA22E24F0* L_8 = (Func_2_tFC0477C87E7518136DEE345DCF44B6ACA22E24F0*)__this->___selector_3;
				RuntimeObject* L_9 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_11;
				L_11 = InvokerFuncInvoker1< Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				__this->___U3CvU3E5__6_10 = L_11;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_12 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CvU3E5__6_10);
				bool L_13;
				L_13 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline(L_12, Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14 = V_2;
				if (!L_14)
				{
					goto IL_00e6_2;
				}
			}
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_15 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17)__this->___U3CsumU3E5__2_6;
				V_3 = L_15;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_16 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CvU3E5__6_10);
				int64_t L_17;
				L_17 = Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC(L_16, Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
				V_4 = L_17;
				bool L_18;
				L_18 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&V_3), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
				if (L_18)
				{
					G_B16_0 = __this;
					goto IL_00bd_2;
				}
				G_B15_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_19 = V_5;
				G_B17_0 = L_19;
				G_B17_1 = G_B15_0;
				goto IL_00cc_2;
			}

IL_00bd_2:
			{
				int64_t L_20;
				L_20 = Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_inline((&V_3), Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
				int64_t L_21 = V_4;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_20, (int64_t)L_21))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_22;
				memset((&L_22), 0, sizeof(L_22));
				Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_22), ((int64_t)il2cpp_codegen_add(L_20, L_21)), Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
				G_B17_0 = L_22;
				G_B17_1 = G_B16_0;
			}

IL_00cc_2:
			{
				NullCheck(G_B17_1);
				G_B17_1->___U3CsumU3E5__2_6 = G_B17_0;
				int64_t L_23 = (int64_t)__this->___U3CcountU3E5__1_5;
				V_4 = L_23;
				int64_t L_24 = V_4;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_24, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1_5 = ((int64_t)il2cpp_codegen_add(L_24, ((int64_t)1)));
			}

IL_00e6_2:
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_25 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CvU3E5__6_10);
				il2cpp_codegen_initobj(L_25, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
			}

IL_00f3_2:
			{
				RuntimeObject* L_26 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_26);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_27;
				L_27 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_26);
				V_8 = L_27;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28;
				L_28 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_28;
				bool L_29;
				L_29 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_0158_2;
				}
			}
			{
				int32_t L_30 = 0;
				V_0 = L_30;
				__this->___U3CU3E1__state_0 = L_30;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = V_7;
				__this->___U3CU3Eu__1_12 = L_31;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_12))->___task_0))->___source_0), (void*)NULL);
				V_9 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_32 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAsyncU3Ed__25_1_t50DC0406CEF02DAB876282D754EA66F5781A80BF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_32, (&V_7), (&V_9), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0293;
			}

IL_013b_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_12;
				V_7 = L_33;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_12);
				il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->___U3CU3E1__state_0 = L_35;
			}

IL_0158_2:
			{
				bool L_36;
				L_36 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_36;
				bool L_37 = (bool)__this->___U3CU3Es__7_11;
				V_6 = L_37;
				bool L_38 = V_6;
				if (L_38)
				{
					goto IL_0065_2;
				}
			}
			{
				goto IL_0183_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0177_1;
			}
			throw e;
		}

CATCH_0177_1:
		{
			V_10 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_39 = V_10;
			__this->___U3CU3Es__4_8 = L_39;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)L_39);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0183_1;
		}

IL_0183_1:
		{
			RuntimeObject* L_40 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_40) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_41 = V_11;
			if (!L_41)
			{
				goto IL_0202_1;
			}
		}
		{
			RuntimeObject* L_42 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			NullCheck((RuntimeObject*)L_42);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_43;
			L_43 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_42);
			V_13 = L_43;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_44;
			L_44 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_13), NULL);
			V_12 = L_44;
			bool L_45;
			L_45 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_45)
			{
				goto IL_01f9_1;
			}
		}
		{
			int32_t L_46 = 1;
			V_0 = L_46;
			__this->___U3CU3E1__state_0 = L_46;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47 = V_12;
			__this->___U3CU3Eu__2_13 = L_47;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_13))->___task_0))->___source_0), (void*)NULL);
			V_9 = __this;
			AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_48 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAsyncU3Ed__25_1_t50DC0406CEF02DAB876282D754EA66F5781A80BF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_48, (&V_12), (&V_9), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0293;
		}

IL_01dc_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_49 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_13;
			V_12 = L_49;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_50 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_13);
			il2cpp_codegen_initobj(L_50, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_51 = (-1);
			V_0 = L_51;
			__this->___U3CU3E1__state_0 = L_51;
		}

IL_01f9_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_0202_1:
		{
			RuntimeObject* L_52 = (RuntimeObject*)__this->___U3CU3Es__4_8;
			V_10 = L_52;
			RuntimeObject* L_53 = V_10;
			if (!L_53)
			{
				goto IL_022c_1;
			}
		}
		{
			RuntimeObject* L_54 = V_10;
			V_14 = ((Exception_t*)IsInstClass((RuntimeObject*)L_54, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_55 = V_14;
			if (L_55)
			{
				goto IL_021f_1;
			}
		}
		{
			RuntimeObject* L_56 = V_10;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_56, method);
		}

IL_021f_1:
		{
			Exception_t* L_57 = V_14;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_58;
			L_58 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_57, NULL);
			NullCheck(L_58);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_58, NULL);
		}

IL_022c_1:
		{
			int32_t L_59 = (int32_t)__this->___U3CU3Es__5_9;
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_60 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CsumU3E5__2_6);
			int64_t L_61;
			L_61 = Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC(L_60, Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
			int64_t L_62 = (int64_t)__this->___U3CcountU3E5__1_5;
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_63;
			memset((&L_63), 0, sizeof(L_63));
			Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_63), ((double)(((double)L_61)/((double)L_62))), Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
			V_1 = L_63;
			goto IL_0277;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0256;
		}
		throw e;
	}

CATCH_0256:
	{
		V_14 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_64 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_65 = V_14;
		AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_inline(L_64, L_65, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0293;
	}

IL_0277:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_66 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_67 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_inline(L_66, L_67, AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
	}

IL_0293:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__25_1_SetStateMachine_mB110B552350E7BB006F0E93B65BD5763DD907376_gshared (U3CAverageAsyncU3Ed__25_1_t50DC0406CEF02DAB876282D754EA66F5781A80BF* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__29_1__ctor_mB8F387941AF1D3022FF29EF58AC6A4E4068C8B21_gshared (U3CAverageAsyncU3Ed__29_1_t022577A8DD5BDABA432E986818E1E4B759AE6B49* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__29_1_MoveNext_m1175F1DB4C75AA4D5525842948E3B3E4B8C3DF30_gshared (U3CAverageAsyncU3Ed__29_1_t022577A8DD5BDABA432E986818E1E4B759AE6B49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t68EAC8F3C776CC2E9C12E564D052A2E390B42A0F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t68EAC8F3C776CC2E9C12E564D052A2E390B42A0F);
	int32_t V_0 = 0;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int64_t V_6 = 0;
	bool V_7 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_9;
	memset((&V_9), 0, sizeof(V_9));
	U3CAverageAsyncU3Ed__29_1_t022577A8DD5BDABA432E986818E1E4B759AE6B49* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_13;
	memset((&V_13), 0, sizeof(V_13));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Exception_t* V_15 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	U3CAverageAsyncU3Ed__29_1_t022577A8DD5BDABA432E986818E1E4B759AE6B49* G_B16_0 = NULL;
	U3CAverageAsyncU3Ed__29_1_t022577A8DD5BDABA432E986818E1E4B759AE6B49* G_B15_0 = NULL;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 G_B17_0;
	memset((&G_B17_0), 0, sizeof(G_B17_0));
	U3CAverageAsyncU3Ed__29_1_t022577A8DD5BDABA432E986818E1E4B759AE6B49* G_B17_1 = NULL;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 G_B37_0;
	memset((&G_B37_0), 0, sizeof(G_B37_0));
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_0057_1;
		}

IL_0014_1:
		{
			goto IL_01df_1;
		}

IL_0019_1:
		{
			__this->___U3CcountU3E5__1_5 = ((int64_t)0);
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_3;
			memset((&L_3), 0, sizeof(L_3));
			Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_3), (0.0f), Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
			__this->___U3CsumU3E5__2_6 = L_3;
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__3_7 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)L_6);
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			__this->___U3CU3Es__5_9 = 0;
		}

IL_0057_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_005d_2;
				}
			}
			{
				goto IL_0062_2;
			}

IL_005d_2:
			{
				goto IL_013e_2;
			}

IL_0062_2:
			{
				goto IL_00f6_2;
			}

IL_0068_2:
			{
				Func_2_tCDF39BBC1094782C50BE631779E8FD895BFEAF32* L_8 = (Func_2_tCDF39BBC1094782C50BE631779E8FD895BFEAF32*)__this->___selector_3;
				RuntimeObject* L_9 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_11;
				L_11 = InvokerFuncInvoker1< Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				__this->___U3CvU3E5__6_10 = L_11;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_12 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CvU3E5__6_10);
				bool L_13;
				L_13 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline(L_12, Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14 = V_2;
				if (!L_14)
				{
					goto IL_00e9_2;
				}
			}
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_15 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75)__this->___U3CsumU3E5__2_6;
				V_3 = L_15;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_16 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CvU3E5__6_10);
				float L_17;
				L_17 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA(L_16, Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
				V_4 = L_17;
				bool L_18;
				L_18 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&V_3), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				if (L_18)
				{
					G_B16_0 = __this;
					goto IL_00c0_2;
				}
				G_B15_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_19 = V_5;
				G_B17_0 = L_19;
				G_B17_1 = G_B15_0;
				goto IL_00cf_2;
			}

IL_00c0_2:
			{
				float L_20;
				L_20 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline((&V_3), Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
				float L_21 = V_4;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_22;
				memset((&L_22), 0, sizeof(L_22));
				Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_22), ((float)il2cpp_codegen_add(L_20, L_21)), Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
				G_B17_0 = L_22;
				G_B17_1 = G_B16_0;
			}

IL_00cf_2:
			{
				NullCheck(G_B17_1);
				G_B17_1->___U3CsumU3E5__2_6 = G_B17_0;
				int64_t L_23 = (int64_t)__this->___U3CcountU3E5__1_5;
				V_6 = L_23;
				int64_t L_24 = V_6;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_24, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1_5 = ((int64_t)il2cpp_codegen_add(L_24, ((int64_t)1)));
			}

IL_00e9_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_25 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CvU3E5__6_10);
				il2cpp_codegen_initobj(L_25, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
			}

IL_00f6_2:
			{
				RuntimeObject* L_26 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_26);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_27;
				L_27 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_26);
				V_9 = L_27;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28;
				L_28 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_9), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_8 = L_28;
				bool L_29;
				L_29 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_8), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_015b_2;
				}
			}
			{
				int32_t L_30 = 0;
				V_0 = L_30;
				__this->___U3CU3E1__state_0 = L_30;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = V_8;
				__this->___U3CU3Eu__1_12 = L_31;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_12))->___task_0))->___source_0), (void*)NULL);
				V_10 = __this;
				AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_32 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAsyncU3Ed__29_1_t022577A8DD5BDABA432E986818E1E4B759AE6B49**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_32, (&V_8), (&V_10), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_02c0;
			}

IL_013e_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_12;
				V_8 = L_33;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_12);
				il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->___U3CU3E1__state_0 = L_35;
			}

IL_015b_2:
			{
				bool L_36;
				L_36 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_8), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_36;
				bool L_37 = (bool)__this->___U3CU3Es__7_11;
				V_7 = L_37;
				bool L_38 = V_7;
				if (L_38)
				{
					goto IL_0068_2;
				}
			}
			{
				goto IL_0186_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_017a_1;
			}
			throw e;
		}

CATCH_017a_1:
		{
			V_11 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_39 = V_11;
			__this->___U3CU3Es__4_8 = L_39;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)L_39);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0186_1;
		}

IL_0186_1:
		{
			RuntimeObject* L_40 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			V_12 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_40) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_41 = V_12;
			if (!L_41)
			{
				goto IL_0205_1;
			}
		}
		{
			RuntimeObject* L_42 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			NullCheck((RuntimeObject*)L_42);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_43;
			L_43 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_42);
			V_14 = L_43;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_44;
			L_44 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_14), NULL);
			V_13 = L_44;
			bool L_45;
			L_45 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_13), NULL);
			if (L_45)
			{
				goto IL_01fc_1;
			}
		}
		{
			int32_t L_46 = 1;
			V_0 = L_46;
			__this->___U3CU3E1__state_0 = L_46;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47 = V_13;
			__this->___U3CU3Eu__2_13 = L_47;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_13))->___task_0))->___source_0), (void*)NULL);
			V_10 = __this;
			AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_48 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAsyncU3Ed__29_1_t022577A8DD5BDABA432E986818E1E4B759AE6B49**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_48, (&V_13), (&V_10), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_02c0;
		}

IL_01df_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_49 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_13;
			V_13 = L_49;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_50 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_13);
			il2cpp_codegen_initobj(L_50, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_51 = (-1);
			V_0 = L_51;
			__this->___U3CU3E1__state_0 = L_51;
		}

IL_01fc_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_13), NULL);
		}

IL_0205_1:
		{
			RuntimeObject* L_52 = (RuntimeObject*)__this->___U3CU3Es__4_8;
			V_11 = L_52;
			RuntimeObject* L_53 = V_11;
			if (!L_53)
			{
				goto IL_022f_1;
			}
		}
		{
			RuntimeObject* L_54 = V_11;
			V_15 = ((Exception_t*)IsInstClass((RuntimeObject*)L_54, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_55 = V_15;
			if (L_55)
			{
				goto IL_0222_1;
			}
		}
		{
			RuntimeObject* L_56 = V_11;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_56, method);
		}

IL_0222_1:
		{
			Exception_t* L_57 = V_15;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_58;
			L_58 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_57, NULL);
			NullCheck(L_58);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_58, NULL);
		}

IL_022f_1:
		{
			int32_t L_59 = (int32_t)__this->___U3CU3Es__5_9;
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_60 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75)__this->___U3CsumU3E5__2_6;
			V_3 = L_60;
			int64_t L_61 = (int64_t)__this->___U3CcountU3E5__1_5;
			V_4 = ((float)L_61);
			bool L_62;
			L_62 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&V_3), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
			if (L_62)
			{
				goto IL_0262_1;
			}
		}
		{
			il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_63 = V_5;
			G_B37_0 = L_63;
			goto IL_0271_1;
		}

IL_0262_1:
		{
			float L_64;
			L_64 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline((&V_3), Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
			float L_65 = V_4;
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_66;
			memset((&L_66), 0, sizeof(L_66));
			Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_66), ((float)(L_64/L_65)), Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
			G_B37_0 = L_66;
		}

IL_0271_1:
		{
			V_5 = G_B37_0;
			float L_67;
			L_67 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&V_5), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_68;
			memset((&L_68), 0, sizeof(L_68));
			Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_68), ((float)L_67), Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
			V_1 = L_68;
			goto IL_02a4;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0283;
		}
		throw e;
	}

CATCH_0283:
	{
		V_15 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_69 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_70 = V_15;
		AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_inline(L_69, L_70, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02c0;
	}

IL_02a4:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_71 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_72 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_inline(L_71, L_72, AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_RuntimeMethod_var);
	}

IL_02c0:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__29_1_SetStateMachine_m8B6A5E58C4855A311D8D9F71CC23AB4B2BFEFCDF_gshared (U3CAverageAsyncU3Ed__29_1_t022577A8DD5BDABA432E986818E1E4B759AE6B49* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__33_1__ctor_m82F2D09BC133BD469C453ED6F57C39A07248C6DC_gshared (U3CAverageAsyncU3Ed__33_1_tB5ED8AAD653CC1552876093A060CB51E7A2235BF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__33_1_MoveNext_m076632920D43C836E3717E2CCEEDB8294D5A3612_gshared (U3CAverageAsyncU3Ed__33_1_tB5ED8AAD653CC1552876093A060CB51E7A2235BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tD30D2F59F765B6A03C3F07E4B469CFC3A37AF7A3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tD30D2F59F765B6A03C3F07E4B469CFC3A37AF7A3);
	int32_t V_0 = 0;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_3;
	memset((&V_3), 0, sizeof(V_3));
	double V_4 = 0.0;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int64_t V_6 = 0;
	bool V_7 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_9;
	memset((&V_9), 0, sizeof(V_9));
	U3CAverageAsyncU3Ed__33_1_tB5ED8AAD653CC1552876093A060CB51E7A2235BF* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_13;
	memset((&V_13), 0, sizeof(V_13));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Exception_t* V_15 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	U3CAverageAsyncU3Ed__33_1_tB5ED8AAD653CC1552876093A060CB51E7A2235BF* G_B16_0 = NULL;
	U3CAverageAsyncU3Ed__33_1_tB5ED8AAD653CC1552876093A060CB51E7A2235BF* G_B15_0 = NULL;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 G_B17_0;
	memset((&G_B17_0), 0, sizeof(G_B17_0));
	U3CAverageAsyncU3Ed__33_1_tB5ED8AAD653CC1552876093A060CB51E7A2235BF* G_B17_1 = NULL;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 G_B37_0;
	memset((&G_B37_0), 0, sizeof(G_B37_0));
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_005b_1;
		}

IL_0014_1:
		{
			goto IL_01e3_1;
		}

IL_0019_1:
		{
			__this->___U3CcountU3E5__1_5 = ((int64_t)0);
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_3;
			memset((&L_3), 0, sizeof(L_3));
			Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_3), (0.0), Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
			__this->___U3CsumU3E5__2_6 = L_3;
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__3_7 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)L_6);
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			__this->___U3CU3Es__5_9 = 0;
		}

IL_005b_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0061_2;
				}
			}
			{
				goto IL_0066_2;
			}

IL_0061_2:
			{
				goto IL_0142_2;
			}

IL_0066_2:
			{
				goto IL_00fa_2;
			}

IL_006c_2:
			{
				Func_2_tB9099E603733365FA636ABD4F1512E954C883863* L_8 = (Func_2_tB9099E603733365FA636ABD4F1512E954C883863*)__this->___selector_3;
				RuntimeObject* L_9 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_11;
				L_11 = InvokerFuncInvoker1< Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				__this->___U3CvU3E5__6_10 = L_11;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_12 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CvU3E5__6_10);
				bool L_13;
				L_13 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline(L_12, Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14 = V_2;
				if (!L_14)
				{
					goto IL_00ed_2;
				}
			}
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_15 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165)__this->___U3CsumU3E5__2_6;
				V_3 = L_15;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_16 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CvU3E5__6_10);
				double L_17;
				L_17 = Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1(L_16, Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
				V_4 = L_17;
				bool L_18;
				L_18 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&V_3), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				if (L_18)
				{
					G_B16_0 = __this;
					goto IL_00c4_2;
				}
				G_B15_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_19 = V_5;
				G_B17_0 = L_19;
				G_B17_1 = G_B15_0;
				goto IL_00d3_2;
			}

IL_00c4_2:
			{
				double L_20;
				L_20 = Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline((&V_3), Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
				double L_21 = V_4;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_22;
				memset((&L_22), 0, sizeof(L_22));
				Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_22), ((double)il2cpp_codegen_add(L_20, L_21)), Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
				G_B17_0 = L_22;
				G_B17_1 = G_B16_0;
			}

IL_00d3_2:
			{
				NullCheck(G_B17_1);
				G_B17_1->___U3CsumU3E5__2_6 = G_B17_0;
				int64_t L_23 = (int64_t)__this->___U3CcountU3E5__1_5;
				V_6 = L_23;
				int64_t L_24 = V_6;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_24, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1_5 = ((int64_t)il2cpp_codegen_add(L_24, ((int64_t)1)));
			}

IL_00ed_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_25 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CvU3E5__6_10);
				il2cpp_codegen_initobj(L_25, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
			}

IL_00fa_2:
			{
				RuntimeObject* L_26 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_26);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_27;
				L_27 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_26);
				V_9 = L_27;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28;
				L_28 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_9), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_8 = L_28;
				bool L_29;
				L_29 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_8), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_015f_2;
				}
			}
			{
				int32_t L_30 = 0;
				V_0 = L_30;
				__this->___U3CU3E1__state_0 = L_30;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = V_8;
				__this->___U3CU3Eu__1_12 = L_31;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_12))->___task_0))->___source_0), (void*)NULL);
				V_10 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_32 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAsyncU3Ed__33_1_tB5ED8AAD653CC1552876093A060CB51E7A2235BF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_32, (&V_8), (&V_10), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_02b5;
			}

IL_0142_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_12;
				V_8 = L_33;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_12);
				il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->___U3CU3E1__state_0 = L_35;
			}

IL_015f_2:
			{
				bool L_36;
				L_36 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_8), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_36;
				bool L_37 = (bool)__this->___U3CU3Es__7_11;
				V_7 = L_37;
				bool L_38 = V_7;
				if (L_38)
				{
					goto IL_006c_2;
				}
			}
			{
				goto IL_018a_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_017e_1;
			}
			throw e;
		}

CATCH_017e_1:
		{
			V_11 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_39 = V_11;
			__this->___U3CU3Es__4_8 = L_39;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)L_39);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_018a_1;
		}

IL_018a_1:
		{
			RuntimeObject* L_40 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			V_12 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_40) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_41 = V_12;
			if (!L_41)
			{
				goto IL_0209_1;
			}
		}
		{
			RuntimeObject* L_42 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			NullCheck((RuntimeObject*)L_42);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_43;
			L_43 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_42);
			V_14 = L_43;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_44;
			L_44 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_14), NULL);
			V_13 = L_44;
			bool L_45;
			L_45 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_13), NULL);
			if (L_45)
			{
				goto IL_0200_1;
			}
		}
		{
			int32_t L_46 = 1;
			V_0 = L_46;
			__this->___U3CU3E1__state_0 = L_46;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47 = V_13;
			__this->___U3CU3Eu__2_13 = L_47;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_13))->___task_0))->___source_0), (void*)NULL);
			V_10 = __this;
			AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_48 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAsyncU3Ed__33_1_tB5ED8AAD653CC1552876093A060CB51E7A2235BF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_48, (&V_13), (&V_10), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_02b5;
		}

IL_01e3_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_49 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_13;
			V_13 = L_49;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_50 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_13);
			il2cpp_codegen_initobj(L_50, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_51 = (-1);
			V_0 = L_51;
			__this->___U3CU3E1__state_0 = L_51;
		}

IL_0200_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_13), NULL);
		}

IL_0209_1:
		{
			RuntimeObject* L_52 = (RuntimeObject*)__this->___U3CU3Es__4_8;
			V_11 = L_52;
			RuntimeObject* L_53 = V_11;
			if (!L_53)
			{
				goto IL_0233_1;
			}
		}
		{
			RuntimeObject* L_54 = V_11;
			V_15 = ((Exception_t*)IsInstClass((RuntimeObject*)L_54, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_55 = V_15;
			if (L_55)
			{
				goto IL_0226_1;
			}
		}
		{
			RuntimeObject* L_56 = V_11;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_56, method);
		}

IL_0226_1:
		{
			Exception_t* L_57 = V_15;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_58;
			L_58 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_57, NULL);
			NullCheck(L_58);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_58, NULL);
		}

IL_0233_1:
		{
			int32_t L_59 = (int32_t)__this->___U3CU3Es__5_9;
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_60 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165)__this->___U3CsumU3E5__2_6;
			V_3 = L_60;
			int64_t L_61 = (int64_t)__this->___U3CcountU3E5__1_5;
			V_4 = ((double)L_61);
			bool L_62;
			L_62 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&V_3), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
			if (L_62)
			{
				goto IL_0266_1;
			}
		}
		{
			il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_63 = V_5;
			G_B37_0 = L_63;
			goto IL_0275_1;
		}

IL_0266_1:
		{
			double L_64;
			L_64 = Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline((&V_3), Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
			double L_65 = V_4;
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_66;
			memset((&L_66), 0, sizeof(L_66));
			Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_66), ((double)(L_64/L_65)), Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
			G_B37_0 = L_66;
		}

IL_0275_1:
		{
			V_1 = G_B37_0;
			goto IL_0299;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0278;
		}
		throw e;
	}

CATCH_0278:
	{
		V_15 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_67 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_68 = V_15;
		AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_inline(L_67, L_68, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02b5;
	}

IL_0299:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_69 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_70 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_inline(L_69, L_70, AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
	}

IL_02b5:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__33_1_SetStateMachine_m33DAB9D9CA791BF7A273F671DB6853207F7FC8D4_gshared (U3CAverageAsyncU3Ed__33_1_tB5ED8AAD653CC1552876093A060CB51E7A2235BF* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__37_1__ctor_m307CDE6184FCF7F4A67203547C8EC5CD21ACAB9F_gshared (U3CAverageAsyncU3Ed__37_1_tF6158B69B5E1C0CFF9AA07D2DB76CA10B145EC26* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__37_1_MoveNext_m1469CC9E61703181D118BA7049772BC3177912F5_gshared (U3CAverageAsyncU3Ed__37_1_tF6158B69B5E1C0CFF9AA07D2DB76CA10B145EC26* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m33574CDAA01061AEA24434F9DE51A5B4F03A18A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t1EB6263FF9A2EBCA804E4CF55AC44E1D84A116BB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t1EB6263FF9A2EBCA804E4CF55AC44E1D84A116BB);
	int32_t V_0 = 0;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_1;
	memset((&V_1), 0, sizeof(V_1));
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_4;
	memset((&V_4), 0, sizeof(V_4));
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_5;
	memset((&V_5), 0, sizeof(V_5));
	int64_t V_6 = 0;
	bool V_7 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_9;
	memset((&V_9), 0, sizeof(V_9));
	U3CAverageAsyncU3Ed__37_1_tF6158B69B5E1C0CFF9AA07D2DB76CA10B145EC26* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_13;
	memset((&V_13), 0, sizeof(V_13));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Exception_t* V_15 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	U3CAverageAsyncU3Ed__37_1_tF6158B69B5E1C0CFF9AA07D2DB76CA10B145EC26* G_B16_0 = NULL;
	U3CAverageAsyncU3Ed__37_1_tF6158B69B5E1C0CFF9AA07D2DB76CA10B145EC26* G_B15_0 = NULL;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB G_B17_0;
	memset((&G_B17_0), 0, sizeof(G_B17_0));
	U3CAverageAsyncU3Ed__37_1_tF6158B69B5E1C0CFF9AA07D2DB76CA10B145EC26* G_B17_1 = NULL;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB G_B37_0;
	memset((&G_B37_0), 0, sizeof(G_B37_0));
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_005b_1;
		}

IL_0014_1:
		{
			goto IL_01e6_1;
		}

IL_0019_1:
		{
			__this->___U3CcountU3E5__1_5 = ((int64_t)0);
			il2cpp_codegen_initobj((&V_2), sizeof(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F));
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_3 = V_2;
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_4;
			memset((&L_4), 0, sizeof(L_4));
			Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7((&L_4), L_3, Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_RuntimeMethod_var);
			__this->___U3CsumU3E5__2_6 = L_4;
			RuntimeObject* L_5 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_5);
			RuntimeObject* L_7;
			L_7 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_5, L_6);
			__this->___U3CeU3E5__3_7 = L_7;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)L_7);
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			__this->___U3CU3Es__5_9 = 0;
		}

IL_005b_1:
		{
		}
		try
		{
			{
				int32_t L_8 = V_0;
				if (!L_8)
				{
					goto IL_0061_2;
				}
			}
			{
				goto IL_0066_2;
			}

IL_0061_2:
			{
				goto IL_0145_2;
			}

IL_0066_2:
			{
				goto IL_00fd_2;
			}

IL_006c_2:
			{
				Func_2_t02AAAA5ED63E37D8013889ECE551ED5172A9F7A4* L_9 = (Func_2_t02AAAA5ED63E37D8013889ECE551ED5172A9F7A4*)__this->___selector_3;
				RuntimeObject* L_10 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_12;
				L_12 = InvokerFuncInvoker1< Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
				__this->___U3CvU3E5__6_10 = L_12;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_13 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CvU3E5__6_10);
				bool L_14;
				L_14 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline(L_13, Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				V_3 = L_14;
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_00f0_2;
				}
			}
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_16 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB)__this->___U3CsumU3E5__2_6;
				V_4 = L_16;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_17 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CvU3E5__6_10);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_18;
				L_18 = Nullable_1_get_Value_m33574CDAA01061AEA24434F9DE51A5B4F03A18A2(L_17, Nullable_1_get_Value_m33574CDAA01061AEA24434F9DE51A5B4F03A18A2_RuntimeMethod_var);
				V_2 = L_18;
				bool L_19;
				L_19 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline((&V_4), Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				if (L_19)
				{
					G_B16_0 = __this;
					goto IL_00c4_2;
				}
				G_B15_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_20 = V_5;
				G_B17_0 = L_20;
				G_B17_1 = G_B15_0;
				goto IL_00d6_2;
			}

IL_00c4_2:
			{
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_21;
				L_21 = Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline((&V_4), Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_22 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_23;
				L_23 = Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7(L_21, L_22, NULL);
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_24;
				memset((&L_24), 0, sizeof(L_24));
				Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7((&L_24), L_23, Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_RuntimeMethod_var);
				G_B17_0 = L_24;
				G_B17_1 = G_B16_0;
			}

IL_00d6_2:
			{
				NullCheck(G_B17_1);
				G_B17_1->___U3CsumU3E5__2_6 = G_B17_0;
				int64_t L_25 = (int64_t)__this->___U3CcountU3E5__1_5;
				V_6 = L_25;
				int64_t L_26 = V_6;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_26, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1_5 = ((int64_t)il2cpp_codegen_add(L_26, ((int64_t)1)));
			}

IL_00f0_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_27 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CvU3E5__6_10);
				il2cpp_codegen_initobj(L_27, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
			}

IL_00fd_2:
			{
				RuntimeObject* L_28 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_28);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_29;
				L_29 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_28);
				V_9 = L_29;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_30;
				L_30 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_9), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_8 = L_30;
				bool L_31;
				L_31 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_8), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_31)
				{
					goto IL_0162_2;
				}
			}
			{
				int32_t L_32 = 0;
				V_0 = L_32;
				__this->___U3CU3E1__state_0 = L_32;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = V_8;
				__this->___U3CU3Eu__1_12 = L_33;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_12))->___task_0))->___source_0), (void*)NULL);
				V_10 = __this;
				AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_34 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAsyncU3Ed__37_1_tF6158B69B5E1C0CFF9AA07D2DB76CA10B145EC26**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_34, (&V_8), (&V_10), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_02bf;
			}

IL_0145_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_35 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_12;
				V_8 = L_35;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_36 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_12);
				il2cpp_codegen_initobj(L_36, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_37 = (-1);
				V_0 = L_37;
				__this->___U3CU3E1__state_0 = L_37;
			}

IL_0162_2:
			{
				bool L_38;
				L_38 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_8), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_38;
				bool L_39 = (bool)__this->___U3CU3Es__7_11;
				V_7 = L_39;
				bool L_40 = V_7;
				if (L_40)
				{
					goto IL_006c_2;
				}
			}
			{
				goto IL_018d_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0181_1;
			}
			throw e;
		}

CATCH_0181_1:
		{
			V_11 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_41 = V_11;
			__this->___U3CU3Es__4_8 = L_41;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)L_41);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_018d_1;
		}

IL_018d_1:
		{
			RuntimeObject* L_42 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			V_12 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_42) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_43 = V_12;
			if (!L_43)
			{
				goto IL_020c_1;
			}
		}
		{
			RuntimeObject* L_44 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			NullCheck((RuntimeObject*)L_44);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_45;
			L_45 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
			V_14 = L_45;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_46;
			L_46 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_14), NULL);
			V_13 = L_46;
			bool L_47;
			L_47 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_13), NULL);
			if (L_47)
			{
				goto IL_0203_1;
			}
		}
		{
			int32_t L_48 = 1;
			V_0 = L_48;
			__this->___U3CU3E1__state_0 = L_48;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_49 = V_13;
			__this->___U3CU3Eu__2_13 = L_49;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_13))->___task_0))->___source_0), (void*)NULL);
			V_10 = __this;
			AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_50 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAsyncU3Ed__37_1_tF6158B69B5E1C0CFF9AA07D2DB76CA10B145EC26**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_50, (&V_13), (&V_10), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_02bf;
		}

IL_01e6_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_51 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_13;
			V_13 = L_51;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_52 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_13);
			il2cpp_codegen_initobj(L_52, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_53 = (-1);
			V_0 = L_53;
			__this->___U3CU3E1__state_0 = L_53;
		}

IL_0203_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_13), NULL);
		}

IL_020c_1:
		{
			RuntimeObject* L_54 = (RuntimeObject*)__this->___U3CU3Es__4_8;
			V_11 = L_54;
			RuntimeObject* L_55 = V_11;
			if (!L_55)
			{
				goto IL_0236_1;
			}
		}
		{
			RuntimeObject* L_56 = V_11;
			V_15 = ((Exception_t*)IsInstClass((RuntimeObject*)L_56, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_57 = V_15;
			if (L_57)
			{
				goto IL_0229_1;
			}
		}
		{
			RuntimeObject* L_58 = V_11;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_58, method);
		}

IL_0229_1:
		{
			Exception_t* L_59 = V_15;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_60;
			L_60 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_59, NULL);
			NullCheck(L_60);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_60, NULL);
		}

IL_0236_1:
		{
			int32_t L_61 = (int32_t)__this->___U3CU3Es__5_9;
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_62 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB)__this->___U3CsumU3E5__2_6;
			V_4 = L_62;
			int64_t L_63 = (int64_t)__this->___U3CcountU3E5__1_5;
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_64;
			L_64 = Decimal_op_Implicit_m8F9A38760D01B23E6DFF77EA760CCE5111F3656D(L_63, NULL);
			V_2 = L_64;
			bool L_65;
			L_65 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline((&V_4), Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
			if (L_65)
			{
				goto IL_026d_1;
			}
		}
		{
			il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_66 = V_5;
			G_B37_0 = L_66;
			goto IL_027f_1;
		}

IL_026d_1:
		{
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_67;
			L_67 = Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline((&V_4), Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_68 = V_2;
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_69;
			L_69 = Decimal_op_Division_mA0BD25988CA8010A3F8EA2F6A534F9F2D812D2AC(L_67, L_68, NULL);
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_70;
			memset((&L_70), 0, sizeof(L_70));
			Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7((&L_70), L_69, Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_RuntimeMethod_var);
			G_B37_0 = L_70;
		}

IL_027f_1:
		{
			V_1 = G_B37_0;
			goto IL_02a3;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0282;
		}
		throw e;
	}

CATCH_0282:
	{
		V_15 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_71 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_72 = V_15;
		AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_inline(L_71, L_72, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02bf;
	}

IL_02a3:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_73 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_74 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_inline(L_73, L_74, AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_RuntimeMethod_var);
	}

IL_02bf:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__37_1_SetStateMachine_m7ADBC464A70F9A79B4873DE859CA949D69AEA5E6_gshared (U3CAverageAsyncU3Ed__37_1_tF6158B69B5E1C0CFF9AA07D2DB76CA10B145EC26* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__5_1__ctor_mB3A85C45B112E869225257A8EF7A7CD6483E96B6_gshared (U3CAverageAsyncU3Ed__5_1_t84BCC31CD3BC2E5D922564232FEDCBDFF53E19E2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__5_1_MoveNext_m56732FCD415A6273386FF464A776A239412FFD23_gshared (U3CAverageAsyncU3Ed__5_1_t84BCC31CD3BC2E5D922564232FEDCBDFF53E19E2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tC53BB519B4F6E411B7DD37198E8642AF6960ACA1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tC53BB519B4F6E411B7DD37198E8642AF6960ACA1);
	int32_t V_0 = 0;
	double V_1 = 0.0;
	int64_t V_2 = 0;
	bool V_3 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CAverageAsyncU3Ed__5_1_t84BCC31CD3BC2E5D922564232FEDCBDFF53E19E2* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	bool V_8 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Exception_t* V_11 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_004f_1;
		}

IL_0014_1:
		{
			goto IL_017c_1;
		}

IL_0019_1:
		{
			__this->___U3CcountU3E5__1_5 = ((int64_t)0);
			__this->___U3CsumU3E5__2_6 = ((int64_t)0);
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__3_7 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)L_5);
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			__this->___U3CU3Es__5_9 = 0;
		}

IL_004f_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_0055_2;
				}
			}
			{
				goto IL_005a_2;
			}

IL_0055_2:
			{
				goto IL_00dd_2;
			}

IL_005a_2:
			{
				goto IL_0095_2;
			}

IL_005d_2:
			{
				int64_t L_7 = (int64_t)__this->___U3CsumU3E5__2_6;
				Func_2_t08AB71331BE9C65EB982154CBB27F90B5B62A771* L_8 = (Func_2_t08AB71331BE9C65EB982154CBB27F90B5B62A771*)__this->___selector_3;
				RuntimeObject* L_9 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				int64_t L_11;
				L_11 = InvokerFuncInvoker1< int64_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				if (il2cpp_codegen_check_add_overflow((int64_t)L_7, (int64_t)L_11))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CsumU3E5__2_6 = ((int64_t)il2cpp_codegen_add(L_7, L_11));
				int64_t L_12 = (int64_t)__this->___U3CcountU3E5__1_5;
				V_2 = L_12;
				int64_t L_13 = V_2;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_13, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1_5 = ((int64_t)il2cpp_codegen_add(L_13, ((int64_t)1)));
			}

IL_0095_2:
			{
				RuntimeObject* L_14 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_14);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_15;
				L_15 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_14);
				V_5 = L_15;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_16;
				L_16 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_5), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_4 = L_16;
				bool L_17;
				L_17 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_4), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_00fa_2;
				}
			}
			{
				int32_t L_18 = 0;
				V_0 = L_18;
				__this->___U3CU3E1__state_0 = L_18;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19 = V_4;
				__this->___U3CU3Eu__1_11 = L_19;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_11))->___task_0))->___source_0), (void*)NULL);
				V_6 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_20 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAsyncU3Ed__5_1_t84BCC31CD3BC2E5D922564232FEDCBDFF53E19E2**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_20, (&V_4), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0229;
			}

IL_00dd_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_21 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_11;
				V_4 = L_21;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_22 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_11);
				il2cpp_codegen_initobj(L_22, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_23 = (-1);
				V_0 = L_23;
				__this->___U3CU3E1__state_0 = L_23;
			}

IL_00fa_2:
			{
				bool L_24;
				L_24 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_4), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6_10 = L_24;
				bool L_25 = (bool)__this->___U3CU3Es__6_10;
				V_3 = L_25;
				bool L_26 = V_3;
				if (L_26)
				{
					goto IL_005d_2;
				}
			}
			{
				goto IL_0123_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0117_1;
			}
			throw e;
		}

CATCH_0117_1:
		{
			V_7 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_27 = V_7;
			__this->___U3CU3Es__4_8 = L_27;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)L_27);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0123_1;
		}

IL_0123_1:
		{
			RuntimeObject* L_28 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_28) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_29 = V_8;
			if (!L_29)
			{
				goto IL_01a2_1;
			}
		}
		{
			RuntimeObject* L_30 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			NullCheck((RuntimeObject*)L_30);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_31;
			L_31 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_30);
			V_10 = L_31;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_32;
			L_32 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_10), NULL);
			V_9 = L_32;
			bool L_33;
			L_33 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_9), NULL);
			if (L_33)
			{
				goto IL_0199_1;
			}
		}
		{
			int32_t L_34 = 1;
			V_0 = L_34;
			__this->___U3CU3E1__state_0 = L_34;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_35 = V_9;
			__this->___U3CU3Eu__2_12 = L_35;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_12))->___task_0))->___source_0), (void*)NULL);
			V_6 = __this;
			AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_36 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAsyncU3Ed__5_1_t84BCC31CD3BC2E5D922564232FEDCBDFF53E19E2**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_36, (&V_9), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0229;
		}

IL_017c_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_37 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_12;
			V_9 = L_37;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_38 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_12);
			il2cpp_codegen_initobj(L_38, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_39 = (-1);
			V_0 = L_39;
			__this->___U3CU3E1__state_0 = L_39;
		}

IL_0199_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_9), NULL);
		}

IL_01a2_1:
		{
			RuntimeObject* L_40 = (RuntimeObject*)__this->___U3CU3Es__4_8;
			V_7 = L_40;
			RuntimeObject* L_41 = V_7;
			if (!L_41)
			{
				goto IL_01cc_1;
			}
		}
		{
			RuntimeObject* L_42 = V_7;
			V_11 = ((Exception_t*)IsInstClass((RuntimeObject*)L_42, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_43 = V_11;
			if (L_43)
			{
				goto IL_01bf_1;
			}
		}
		{
			RuntimeObject* L_44 = V_7;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
		}

IL_01bf_1:
		{
			Exception_t* L_45 = V_11;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_46;
			L_46 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_45, NULL);
			NullCheck(L_46);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_46, NULL);
		}

IL_01cc_1:
		{
			int32_t L_47 = (int32_t)__this->___U3CU3Es__5_9;
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			int64_t L_48 = (int64_t)__this->___U3CsumU3E5__2_6;
			int64_t L_49 = (int64_t)__this->___U3CcountU3E5__1_5;
			V_1 = ((double)(((double)L_48)/((double)L_49)));
			goto IL_020d;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01ec;
		}
		throw e;
	}

CATCH_01ec:
	{
		V_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_50 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_51 = V_11;
		AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_inline(L_50, L_51, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0229;
	}

IL_020d:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_52 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
		double L_53 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_inline(L_52, L_53, AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
	}

IL_0229:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__5_1_SetStateMachine_m29DB96BAD9661356468D79A540852C7C8E919442_gshared (U3CAverageAsyncU3Ed__5_1_t84BCC31CD3BC2E5D922564232FEDCBDFF53E19E2* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__9_1__ctor_m6B5212EB9AE764321564996E03DBB8FCCA0E6ADF_gshared (U3CAverageAsyncU3Ed__9_1_tF35F45927FD2FC27A65CF71EACCFEEB439F2B87D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__9_1_MoveNext_mD4420EFCF2C4C723A18F31283250F44A489F9EE3_gshared (U3CAverageAsyncU3Ed__9_1_tF35F45927FD2FC27A65CF71EACCFEEB439F2B87D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tE193AB3B7B0F1D4E58BD70428D68C79AA6D39593 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tE193AB3B7B0F1D4E58BD70428D68C79AA6D39593);
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int64_t V_2 = 0;
	bool V_3 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CAverageAsyncU3Ed__9_1_tF35F45927FD2FC27A65CF71EACCFEEB439F2B87D* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	bool V_8 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Exception_t* V_11 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_0052_1;
		}

IL_0014_1:
		{
			goto IL_017f_1;
		}

IL_0019_1:
		{
			__this->___U3CcountU3E5__1_5 = ((int64_t)0);
			__this->___U3CsumU3E5__2_6 = (0.0f);
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__3_7 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)L_5);
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			__this->___U3CU3Es__5_9 = 0;
		}

IL_0052_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_0058_2;
				}
			}
			{
				goto IL_005d_2;
			}

IL_0058_2:
			{
				goto IL_00e0_2;
			}

IL_005d_2:
			{
				goto IL_0098_2;
			}

IL_0060_2:
			{
				float L_7 = (float)__this->___U3CsumU3E5__2_6;
				Func_2_tFAB3D8EFCE4F55CAB3F80EABAB10F8226D7FEBF6* L_8 = (Func_2_tFAB3D8EFCE4F55CAB3F80EABAB10F8226D7FEBF6*)__this->___selector_3;
				RuntimeObject* L_9 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				float L_11;
				L_11 = InvokerFuncInvoker1< float, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				__this->___U3CsumU3E5__2_6 = ((float)il2cpp_codegen_add(L_7, L_11));
				int64_t L_12 = (int64_t)__this->___U3CcountU3E5__1_5;
				V_2 = L_12;
				int64_t L_13 = V_2;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_13, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1_5 = ((int64_t)il2cpp_codegen_add(L_13, ((int64_t)1)));
			}

IL_0098_2:
			{
				RuntimeObject* L_14 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_14);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_15;
				L_15 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_14);
				V_5 = L_15;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_16;
				L_16 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_5), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_4 = L_16;
				bool L_17;
				L_17 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_4), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_00fd_2;
				}
			}
			{
				int32_t L_18 = 0;
				V_0 = L_18;
				__this->___U3CU3E1__state_0 = L_18;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19 = V_4;
				__this->___U3CU3Eu__1_11 = L_19;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_11))->___task_0))->___source_0), (void*)NULL);
				V_6 = __this;
				AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_20 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAsyncU3Ed__9_1_tF35F45927FD2FC27A65CF71EACCFEEB439F2B87D**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_20, (&V_4), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_022c;
			}

IL_00e0_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_21 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_11;
				V_4 = L_21;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_22 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_11);
				il2cpp_codegen_initobj(L_22, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_23 = (-1);
				V_0 = L_23;
				__this->___U3CU3E1__state_0 = L_23;
			}

IL_00fd_2:
			{
				bool L_24;
				L_24 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_4), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6_10 = L_24;
				bool L_25 = (bool)__this->___U3CU3Es__6_10;
				V_3 = L_25;
				bool L_26 = V_3;
				if (L_26)
				{
					goto IL_0060_2;
				}
			}
			{
				goto IL_0126_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_011a_1;
			}
			throw e;
		}

CATCH_011a_1:
		{
			V_7 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_27 = V_7;
			__this->___U3CU3Es__4_8 = L_27;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)L_27);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0126_1;
		}

IL_0126_1:
		{
			RuntimeObject* L_28 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_28) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_29 = V_8;
			if (!L_29)
			{
				goto IL_01a5_1;
			}
		}
		{
			RuntimeObject* L_30 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			NullCheck((RuntimeObject*)L_30);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_31;
			L_31 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_30);
			V_10 = L_31;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_32;
			L_32 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_10), NULL);
			V_9 = L_32;
			bool L_33;
			L_33 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_9), NULL);
			if (L_33)
			{
				goto IL_019c_1;
			}
		}
		{
			int32_t L_34 = 1;
			V_0 = L_34;
			__this->___U3CU3E1__state_0 = L_34;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_35 = V_9;
			__this->___U3CU3Eu__2_12 = L_35;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_12))->___task_0))->___source_0), (void*)NULL);
			V_6 = __this;
			AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_36 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAsyncU3Ed__9_1_tF35F45927FD2FC27A65CF71EACCFEEB439F2B87D**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_36, (&V_9), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_022c;
		}

IL_017f_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_37 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_12;
			V_9 = L_37;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_38 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_12);
			il2cpp_codegen_initobj(L_38, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_39 = (-1);
			V_0 = L_39;
			__this->___U3CU3E1__state_0 = L_39;
		}

IL_019c_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_9), NULL);
		}

IL_01a5_1:
		{
			RuntimeObject* L_40 = (RuntimeObject*)__this->___U3CU3Es__4_8;
			V_7 = L_40;
			RuntimeObject* L_41 = V_7;
			if (!L_41)
			{
				goto IL_01cf_1;
			}
		}
		{
			RuntimeObject* L_42 = V_7;
			V_11 = ((Exception_t*)IsInstClass((RuntimeObject*)L_42, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_43 = V_11;
			if (L_43)
			{
				goto IL_01c2_1;
			}
		}
		{
			RuntimeObject* L_44 = V_7;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
		}

IL_01c2_1:
		{
			Exception_t* L_45 = V_11;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_46;
			L_46 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_45, NULL);
			NullCheck(L_46);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_46, NULL);
		}

IL_01cf_1:
		{
			int32_t L_47 = (int32_t)__this->___U3CU3Es__5_9;
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			float L_48 = (float)__this->___U3CsumU3E5__2_6;
			int64_t L_49 = (int64_t)__this->___U3CcountU3E5__1_5;
			V_1 = ((float)((float)(L_48/((float)L_49))));
			goto IL_0210;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01ef;
		}
		throw e;
	}

CATCH_01ef:
	{
		V_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_50 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_51 = V_11;
		AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_inline(L_50, L_51, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_022c;
	}

IL_0210:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_52 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
		float L_53 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_inline(L_52, L_53, AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_RuntimeMethod_var);
	}

IL_022c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAsyncU3Ed__9_1_SetStateMachine_mF54F7B83A1D06CCEA4B5943E46D689587FA6B40F_gshared (U3CAverageAsyncU3Ed__9_1_tF35F45927FD2FC27A65CF71EACCFEEB439F2B87D* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__10_1__ctor_m56E22020FFF450B6D5A08245C6EC984402AAF62B_gshared (U3CAverageAwaitAsyncU3Ed__10_1_t5D0FB99AA9FEC1C73FBC2EE8C59B3E58BF40C867* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__10_1_MoveNext_m3B5B9E10E985D95AEFA1E1987EEE35D0DA6F7598_gshared (U3CAverageAwaitAsyncU3Ed__10_1_t5D0FB99AA9FEC1C73FBC2EE8C59B3E58BF40C867* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t2563F9C940212A720DF1D6B40281C4294EBC037C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t2563F9C940212A720DF1D6B40281C4294EBC037C);
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CAverageAwaitAsyncU3Ed__10_1_t5D0FB99AA9FEC1C73FBC2EE8C59B3E58BF40C867* V_4 = NULL;
	int64_t V_5 = 0;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0053_1;
		}

IL_0015_1:
		{
			goto IL_0204_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1_5 = ((int64_t)0);
			__this->___U3CsumU3E5__2_6 = (0.0f);
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__3_7 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)L_5);
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			__this->___U3CU3Es__5_9 = 0;
		}

IL_0053_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_005f_2;
				}
			}
			{
				goto IL_0059_2;
			}

IL_0059_2:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_0061_2;
				}
			}
			{
				goto IL_0066_2;
			}

IL_005f_2:
			{
				goto IL_00ca_2;
			}

IL_0061_2:
			{
				goto IL_0163_2;
			}

IL_0066_2:
			{
				goto IL_011b_2;
			}

IL_006c_2:
			{
				float L_8 = (float)__this->___U3CsumU3E5__2_6;
				__this->___U3CU3Es__6_10 = L_8;
				Func_2_t844387A4F32860587989B5D1B9F3950D6D5901DE* L_9 = (Func_2_t844387A4F32860587989B5D1B9F3950D6D5901DE*)__this->___selector_3;
				RuntimeObject* L_10 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1 L_12;
				L_12 = InvokerFuncInvoker1< UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
				V_3 = L_12;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_13;
				L_13 = UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_inline((&V_3), UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_inline((&V_2), Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00e6_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state_0 = L_15;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_16 = V_2;
				__this->___U3CU3Eu__1_13 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_17 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*, U3CAverageAwaitAsyncU3Ed__10_1_t5D0FB99AA9FEC1C73FBC2EE8C59B3E58BF40C867**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_02b1;
			}

IL_00ca_2:
			{
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_18 = (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D)__this->___U3CU3Eu__1_13;
				V_2 = L_18;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* L_19 = (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*)(&__this->___U3CU3Eu__1_13);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state_0 = L_20;
			}

IL_00e6_2:
			{
				float L_21;
				L_21 = Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_inline((&V_2), Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_21;
				float L_22 = (float)__this->___U3CU3Es__6_10;
				float L_23 = (float)__this->___U3CU3Es__7_11;
				__this->___U3CsumU3E5__2_6 = ((float)il2cpp_codegen_add(L_22, L_23));
				int64_t L_24 = (int64_t)__this->___U3CcountU3E5__1_5;
				V_5 = L_24;
				int64_t L_25 = V_5;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_25, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1_5 = ((int64_t)il2cpp_codegen_add(L_25, ((int64_t)1)));
			}

IL_011b_2:
			{
				RuntimeObject* L_26 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_26);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_27;
				L_27 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_26);
				V_8 = L_27;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28;
				L_28 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_28;
				bool L_29;
				L_29 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_0180_2;
				}
			}
			{
				int32_t L_30 = 1;
				V_0 = L_30;
				__this->___U3CU3E1__state_0 = L_30;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = V_7;
				__this->___U3CU3Eu__2_14 = L_31;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_32 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAwaitAsyncU3Ed__10_1_t5D0FB99AA9FEC1C73FBC2EE8C59B3E58BF40C867**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_32, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_02b1;
			}

IL_0163_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_14;
				V_7 = L_33;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_14);
				il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->___U3CU3E1__state_0 = L_35;
			}

IL_0180_2:
			{
				bool L_36;
				L_36 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_36;
				bool L_37 = (bool)__this->___U3CU3Es__8_12;
				V_6 = L_37;
				bool L_38 = V_6;
				if (L_38)
				{
					goto IL_006c_2;
				}
			}
			{
				goto IL_01ab_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_019f_1;
			}
			throw e;
		}

CATCH_019f_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_39 = V_9;
			__this->___U3CU3Es__4_8 = L_39;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)L_39);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01ab_1;
		}

IL_01ab_1:
		{
			RuntimeObject* L_40 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_40) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_41 = V_10;
			if (!L_41)
			{
				goto IL_022a_1;
			}
		}
		{
			RuntimeObject* L_42 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			NullCheck((RuntimeObject*)L_42);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_43;
			L_43 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_42);
			V_12 = L_43;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_44;
			L_44 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_44;
			bool L_45;
			L_45 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_45)
			{
				goto IL_0221_1;
			}
		}
		{
			int32_t L_46 = 2;
			V_0 = L_46;
			__this->___U3CU3E1__state_0 = L_46;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47 = V_11;
			__this->___U3CU3Eu__3_15 = L_47;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_15))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_48 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAwaitAsyncU3Ed__10_1_t5D0FB99AA9FEC1C73FBC2EE8C59B3E58BF40C867**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_48, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_02b1;
		}

IL_0204_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_49 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_15;
			V_11 = L_49;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_50 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_15);
			il2cpp_codegen_initobj(L_50, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_51 = (-1);
			V_0 = L_51;
			__this->___U3CU3E1__state_0 = L_51;
		}

IL_0221_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_022a_1:
		{
			RuntimeObject* L_52 = (RuntimeObject*)__this->___U3CU3Es__4_8;
			V_9 = L_52;
			RuntimeObject* L_53 = V_9;
			if (!L_53)
			{
				goto IL_0254_1;
			}
		}
		{
			RuntimeObject* L_54 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_54, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_55 = V_13;
			if (L_55)
			{
				goto IL_0247_1;
			}
		}
		{
			RuntimeObject* L_56 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_56, method);
		}

IL_0247_1:
		{
			Exception_t* L_57 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_58;
			L_58 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_57, NULL);
			NullCheck(L_58);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_58, NULL);
		}

IL_0254_1:
		{
			int32_t L_59 = (int32_t)__this->___U3CU3Es__5_9;
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			float L_60 = (float)__this->___U3CsumU3E5__2_6;
			int64_t L_61 = (int64_t)__this->___U3CcountU3E5__1_5;
			V_1 = ((float)((float)(L_60/((float)L_61))));
			goto IL_0295;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0274;
		}
		throw e;
	}

CATCH_0274:
	{
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_62 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_63 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_inline(L_62, L_63, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02b1;
	}

IL_0295:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_64 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
		float L_65 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_inline(L_64, L_65, AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_RuntimeMethod_var);
	}

IL_02b1:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__10_1_SetStateMachine_m5EB9145828EC95FE6B45E6FAAEDCB3157015F51F_gshared (U3CAverageAwaitAsyncU3Ed__10_1_t5D0FB99AA9FEC1C73FBC2EE8C59B3E58BF40C867* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__14_1__ctor_m37D1E8F504338F675BBA9BD25927E23899B3AB14_gshared (U3CAverageAwaitAsyncU3Ed__14_1_t9A8C09FDAF75D12C8D248536BF9A707B18D66F63* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__14_1_MoveNext_mE58BD8C3A0D377F9AD23A5812EB4E2181C143C36_gshared (U3CAverageAwaitAsyncU3Ed__14_1_t9A8C09FDAF75D12C8D248536BF9A707B18D66F63* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t7E7A37E25008A62DAF47E61C9AA2D0EA9A9257C5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t7E7A37E25008A62DAF47E61C9AA2D0EA9A9257C5);
	int32_t V_0 = 0;
	double V_1 = 0.0;
	Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CAverageAwaitAsyncU3Ed__14_1_t9A8C09FDAF75D12C8D248536BF9A707B18D66F63* V_4 = NULL;
	int64_t V_5 = 0;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0057_1;
		}

IL_0015_1:
		{
			goto IL_0208_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1_5 = ((int64_t)0);
			__this->___U3CsumU3E5__2_6 = (0.0);
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__3_7 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)L_5);
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			__this->___U3CU3Es__5_9 = 0;
		}

IL_0057_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_0063_2;
				}
			}
			{
				goto IL_005d_2;
			}

IL_005d_2:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_0065_2;
				}
			}
			{
				goto IL_006a_2;
			}

IL_0063_2:
			{
				goto IL_00ce_2;
			}

IL_0065_2:
			{
				goto IL_0167_2;
			}

IL_006a_2:
			{
				goto IL_011f_2;
			}

IL_0070_2:
			{
				double L_8 = (double)__this->___U3CsumU3E5__2_6;
				__this->___U3CU3Es__6_10 = L_8;
				Func_2_tF452F3FF30306E919291E498D051B5F208EB38CF* L_9 = (Func_2_tF452F3FF30306E919291E498D051B5F208EB38CF*)__this->___selector_3;
				RuntimeObject* L_10 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C L_12;
				L_12 = InvokerFuncInvoker1< UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
				V_3 = L_12;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_13;
				L_13 = UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_inline((&V_3), UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_inline((&V_2), Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00ea_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state_0 = L_15;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_16 = V_2;
				__this->___U3CU3Eu__1_13 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_17 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88*, U3CAverageAwaitAsyncU3Ed__14_1_t9A8C09FDAF75D12C8D248536BF9A707B18D66F63**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_02b4;
			}

IL_00ce_2:
			{
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_18 = (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88)__this->___U3CU3Eu__1_13;
				V_2 = L_18;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* L_19 = (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88*)(&__this->___U3CU3Eu__1_13);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state_0 = L_20;
			}

IL_00ea_2:
			{
				double L_21;
				L_21 = Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_inline((&V_2), Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_21;
				double L_22 = (double)__this->___U3CU3Es__6_10;
				double L_23 = (double)__this->___U3CU3Es__7_11;
				__this->___U3CsumU3E5__2_6 = ((double)il2cpp_codegen_add(L_22, L_23));
				int64_t L_24 = (int64_t)__this->___U3CcountU3E5__1_5;
				V_5 = L_24;
				int64_t L_25 = V_5;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_25, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1_5 = ((int64_t)il2cpp_codegen_add(L_25, ((int64_t)1)));
			}

IL_011f_2:
			{
				RuntimeObject* L_26 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_26);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_27;
				L_27 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_26);
				V_8 = L_27;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28;
				L_28 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_28;
				bool L_29;
				L_29 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_0184_2;
				}
			}
			{
				int32_t L_30 = 1;
				V_0 = L_30;
				__this->___U3CU3E1__state_0 = L_30;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = V_7;
				__this->___U3CU3Eu__2_14 = L_31;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_32 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAwaitAsyncU3Ed__14_1_t9A8C09FDAF75D12C8D248536BF9A707B18D66F63**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_32, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_02b4;
			}

IL_0167_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_14;
				V_7 = L_33;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_14);
				il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->___U3CU3E1__state_0 = L_35;
			}

IL_0184_2:
			{
				bool L_36;
				L_36 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_36;
				bool L_37 = (bool)__this->___U3CU3Es__8_12;
				V_6 = L_37;
				bool L_38 = V_6;
				if (L_38)
				{
					goto IL_0070_2;
				}
			}
			{
				goto IL_01af_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01a3_1;
			}
			throw e;
		}

CATCH_01a3_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_39 = V_9;
			__this->___U3CU3Es__4_8 = L_39;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)L_39);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01af_1;
		}

IL_01af_1:
		{
			RuntimeObject* L_40 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_40) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_41 = V_10;
			if (!L_41)
			{
				goto IL_022e_1;
			}
		}
		{
			RuntimeObject* L_42 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			NullCheck((RuntimeObject*)L_42);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_43;
			L_43 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_42);
			V_12 = L_43;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_44;
			L_44 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_44;
			bool L_45;
			L_45 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_45)
			{
				goto IL_0225_1;
			}
		}
		{
			int32_t L_46 = 2;
			V_0 = L_46;
			__this->___U3CU3E1__state_0 = L_46;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47 = V_11;
			__this->___U3CU3Eu__3_15 = L_47;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_15))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_48 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAwaitAsyncU3Ed__14_1_t9A8C09FDAF75D12C8D248536BF9A707B18D66F63**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_48, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_02b4;
		}

IL_0208_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_49 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_15;
			V_11 = L_49;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_50 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_15);
			il2cpp_codegen_initobj(L_50, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_51 = (-1);
			V_0 = L_51;
			__this->___U3CU3E1__state_0 = L_51;
		}

IL_0225_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_022e_1:
		{
			RuntimeObject* L_52 = (RuntimeObject*)__this->___U3CU3Es__4_8;
			V_9 = L_52;
			RuntimeObject* L_53 = V_9;
			if (!L_53)
			{
				goto IL_0258_1;
			}
		}
		{
			RuntimeObject* L_54 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_54, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_55 = V_13;
			if (L_55)
			{
				goto IL_024b_1;
			}
		}
		{
			RuntimeObject* L_56 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_56, method);
		}

IL_024b_1:
		{
			Exception_t* L_57 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_58;
			L_58 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_57, NULL);
			NullCheck(L_58);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_58, NULL);
		}

IL_0258_1:
		{
			int32_t L_59 = (int32_t)__this->___U3CU3Es__5_9;
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			double L_60 = (double)__this->___U3CsumU3E5__2_6;
			int64_t L_61 = (int64_t)__this->___U3CcountU3E5__1_5;
			V_1 = ((double)(L_60/((double)L_61)));
			goto IL_0298;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0277;
		}
		throw e;
	}

CATCH_0277:
	{
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_62 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_63 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_inline(L_62, L_63, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02b4;
	}

IL_0298:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_64 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
		double L_65 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_inline(L_64, L_65, AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
	}

IL_02b4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__14_1_SetStateMachine_mE34D3C74493DAA18BFAA3FBC1E7040F2A103E288_gshared (U3CAverageAwaitAsyncU3Ed__14_1_t9A8C09FDAF75D12C8D248536BF9A707B18D66F63* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__18_1__ctor_m45A950D782926E371654420A45453D75CA1BC84E_gshared (U3CAverageAwaitAsyncU3Ed__18_1_t6FB452C63FD8B313DCD340AEAC77F48F395F0D14* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__18_1_MoveNext_m5D7598F5387962FF35C6A333E60917D85827BB85_gshared (U3CAverageAwaitAsyncU3Ed__18_1_t6FB452C63FD8B313DCD340AEAC77F48F395F0D14* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tC3AF8744AA634AC2B31461C443AA64F5B3371BF2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_tC3AF8744AA634AC2B31461C443AA64F5B3371BF2);
	int32_t V_0 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CAverageAwaitAsyncU3Ed__18_1_t6FB452C63FD8B313DCD340AEAC77F48F395F0D14* V_4 = NULL;
	int64_t V_5 = 0;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0054_1;
		}

IL_0015_1:
		{
			goto IL_0209_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1_5 = ((int64_t)0);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* L_3 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)(&__this->___U3CsumU3E5__2_6);
			il2cpp_codegen_initobj(L_3, sizeof(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F));
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__3_7 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)L_6);
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			__this->___U3CU3Es__5_9 = 0;
		}

IL_0054_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0060_2;
				}
			}
			{
				goto IL_005a_2;
			}

IL_005a_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_0062_2;
				}
			}
			{
				goto IL_0067_2;
			}

IL_0060_2:
			{
				goto IL_00cb_2;
			}

IL_0062_2:
			{
				goto IL_0168_2;
			}

IL_0067_2:
			{
				goto IL_0120_2;
			}

IL_006d_2:
			{
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_9 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)__this->___U3CsumU3E5__2_6;
				__this->___U3CU3Es__6_10 = L_9;
				Func_2_tD6766C7D6227AC2A45F7EDFC827BDFC58C8EFE78* L_10 = (Func_2_tD6766C7D6227AC2A45F7EDFC827BDFC58C8EFE78*)__this->___selector_3;
				RuntimeObject* L_11 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_11);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_11, (Il2CppFullySharedGenericAny*)L_12);
				NullCheck(L_10);
				UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3 L_13;
				L_13 = InvokerFuncInvoker1< UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_12: *(void**)L_12));
				V_3 = L_13;
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_14;
				L_14 = UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_inline((&V_3), UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_RuntimeMethod_var);
				V_2 = L_14;
				bool L_15;
				L_15 = Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_inline((&V_2), Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00e7_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state_0 = L_16;
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_17 = V_2;
				__this->___U3CU3Eu__1_13 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_18 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8*, U3CAverageAwaitAsyncU3Ed__18_1_t6FB452C63FD8B313DCD340AEAC77F48F395F0D14**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_18, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_02bd;
			}

IL_00cb_2:
			{
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_19 = (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8)__this->___U3CU3Eu__1_13;
				V_2 = L_19;
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* L_20 = (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8*)(&__this->___U3CU3Eu__1_13);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state_0 = L_21;
			}

IL_00e7_2:
			{
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_22;
				L_22 = Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_inline((&V_2), Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_22;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_23 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)__this->___U3CU3Es__6_10;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_24 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)__this->___U3CU3Es__7_11;
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_25;
				L_25 = Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7(L_23, L_24, NULL);
				__this->___U3CsumU3E5__2_6 = L_25;
				int64_t L_26 = (int64_t)__this->___U3CcountU3E5__1_5;
				V_5 = L_26;
				int64_t L_27 = V_5;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_27, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1_5 = ((int64_t)il2cpp_codegen_add(L_27, ((int64_t)1)));
			}

IL_0120_2:
			{
				RuntimeObject* L_28 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_28);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_29;
				L_29 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_28);
				V_8 = L_29;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_30;
				L_30 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_30;
				bool L_31;
				L_31 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_31)
				{
					goto IL_0185_2;
				}
			}
			{
				int32_t L_32 = 1;
				V_0 = L_32;
				__this->___U3CU3E1__state_0 = L_32;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = V_7;
				__this->___U3CU3Eu__2_14 = L_33;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_34 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAwaitAsyncU3Ed__18_1_t6FB452C63FD8B313DCD340AEAC77F48F395F0D14**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_34, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_02bd;
			}

IL_0168_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_35 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_14;
				V_7 = L_35;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_36 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_14);
				il2cpp_codegen_initobj(L_36, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_37 = (-1);
				V_0 = L_37;
				__this->___U3CU3E1__state_0 = L_37;
			}

IL_0185_2:
			{
				bool L_38;
				L_38 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_38;
				bool L_39 = (bool)__this->___U3CU3Es__8_12;
				V_6 = L_39;
				bool L_40 = V_6;
				if (L_40)
				{
					goto IL_006d_2;
				}
			}
			{
				goto IL_01b0_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01a4_1;
			}
			throw e;
		}

CATCH_01a4_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_41 = V_9;
			__this->___U3CU3Es__4_8 = L_41;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)L_41);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01b0_1;
		}

IL_01b0_1:
		{
			RuntimeObject* L_42 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_42) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_43 = V_10;
			if (!L_43)
			{
				goto IL_022f_1;
			}
		}
		{
			RuntimeObject* L_44 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			NullCheck((RuntimeObject*)L_44);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_45;
			L_45 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
			V_12 = L_45;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_46;
			L_46 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_46;
			bool L_47;
			L_47 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_47)
			{
				goto IL_0226_1;
			}
		}
		{
			int32_t L_48 = 2;
			V_0 = L_48;
			__this->___U3CU3E1__state_0 = L_48;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_49 = V_11;
			__this->___U3CU3Eu__3_15 = L_49;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_15))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_50 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAwaitAsyncU3Ed__18_1_t6FB452C63FD8B313DCD340AEAC77F48F395F0D14**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_50, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_02bd;
		}

IL_0209_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_51 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_15;
			V_11 = L_51;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_52 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_15);
			il2cpp_codegen_initobj(L_52, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_53 = (-1);
			V_0 = L_53;
			__this->___U3CU3E1__state_0 = L_53;
		}

IL_0226_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_022f_1:
		{
			RuntimeObject* L_54 = (RuntimeObject*)__this->___U3CU3Es__4_8;
			V_9 = L_54;
			RuntimeObject* L_55 = V_9;
			if (!L_55)
			{
				goto IL_0259_1;
			}
		}
		{
			RuntimeObject* L_56 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_56, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_57 = V_13;
			if (L_57)
			{
				goto IL_024c_1;
			}
		}
		{
			RuntimeObject* L_58 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_58, method);
		}

IL_024c_1:
		{
			Exception_t* L_59 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_60;
			L_60 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_59, NULL);
			NullCheck(L_60);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_60, NULL);
		}

IL_0259_1:
		{
			int32_t L_61 = (int32_t)__this->___U3CU3Es__5_9;
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_62 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)__this->___U3CsumU3E5__2_6;
			int64_t L_63 = (int64_t)__this->___U3CcountU3E5__1_5;
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_64;
			L_64 = Decimal_op_Implicit_m8F9A38760D01B23E6DFF77EA760CCE5111F3656D(L_63, NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_65;
			L_65 = Decimal_op_Division_mA0BD25988CA8010A3F8EA2F6A534F9F2D812D2AC(L_62, L_64, NULL);
			V_1 = L_65;
			goto IL_02a1;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0280;
		}
		throw e;
	}

CATCH_0280:
	{
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_66 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_67 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_inline(L_66, L_67, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02bd;
	}

IL_02a1:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_68 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_69 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_inline(L_68, L_69, AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_RuntimeMethod_var);
	}

IL_02bd:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__18_1_SetStateMachine_m8593C82A2900B26F2C715EE1125D4D7F24AF8D7F_gshared (U3CAverageAwaitAsyncU3Ed__18_1_t6FB452C63FD8B313DCD340AEAC77F48F395F0D14* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__22_1__ctor_mEB3E8EFDEE3BA394545EF6EDA9AFD548DBC30998_gshared (U3CAverageAwaitAsyncU3Ed__22_1_t6ACF89349A1ADA4A61F83D20FFB2D385035CE624* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__22_1_MoveNext_mF1987EEABDD9A6AFCFFE2249CE823AB313FC7F7C_gshared (U3CAverageAwaitAsyncU3Ed__22_1_t6ACF89349A1ADA4A61F83D20FFB2D385035CE624* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t24FF97AC201EF2F86AA9819FFCB45442CEC068CC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t24FF97AC201EF2F86AA9819FFCB45442CEC068CC);
	int32_t V_0 = 0;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CAverageAwaitAsyncU3Ed__22_1_t6ACF89349A1ADA4A61F83D20FFB2D385035CE624* V_4 = NULL;
	bool V_5 = false;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int64_t V_9 = 0;
	bool V_10 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_12;
	memset((&V_12), 0, sizeof(V_12));
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_15;
	memset((&V_15), 0, sizeof(V_15));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Exception_t* V_17 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	U3CAverageAwaitAsyncU3Ed__22_1_t6ACF89349A1ADA4A61F83D20FFB2D385035CE624* G_B22_0 = NULL;
	U3CAverageAwaitAsyncU3Ed__22_1_t6ACF89349A1ADA4A61F83D20FFB2D385035CE624* G_B21_0 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B23_0;
	memset((&G_B23_0), 0, sizeof(G_B23_0));
	U3CAverageAwaitAsyncU3Ed__22_1_t6ACF89349A1ADA4A61F83D20FFB2D385035CE624* G_B23_1 = NULL;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0054_1;
		}

IL_0015_1:
		{
			goto IL_025c_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1_5 = ((int64_t)0);
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_3;
			memset((&L_3), 0, sizeof(L_3));
			Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_3), 0, Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
			__this->___U3CsumU3E5__2_6 = L_3;
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__3_7 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)L_6);
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			__this->___U3CU3Es__5_9 = 0;
		}

IL_0054_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0060_2;
				}
			}
			{
				goto IL_005a_2;
			}

IL_005a_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_0062_2;
				}
			}
			{
				goto IL_0067_2;
			}

IL_0060_2:
			{
				goto IL_00be_2;
			}

IL_0062_2:
			{
				goto IL_01bb_2;
			}

IL_0067_2:
			{
				goto IL_0173_2;
			}

IL_006d_2:
			{
				Func_2_tCD782F33543995850D4A4AF7569D83504640F79F* L_9 = (Func_2_tCD782F33543995850D4A4AF7569D83504640F79F*)__this->___selector_3;
				RuntimeObject* L_10 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05 L_12;
				L_12 = InvokerFuncInvoker1< UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
				V_3 = L_12;
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_13;
				L_13 = UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_inline((&V_3), UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_inline((&V_2), Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00da_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state_0 = L_15;
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_16 = V_2;
				__this->___U3CU3Eu__1_13 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_17 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9*, U3CAverageAwaitAsyncU3Ed__22_1_t6ACF89349A1ADA4A61F83D20FFB2D385035CE624**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0313;
			}

IL_00be_2:
			{
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_18 = (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9)__this->___U3CU3Eu__1_13;
				V_2 = L_18;
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* L_19 = (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9*)(&__this->___U3CU3Eu__1_13);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state_0 = L_20;
			}

IL_00da_2:
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_21;
				L_21 = Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_inline((&V_2), Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_21;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_22 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28)__this->___U3CU3Es__7_11;
				__this->___U3CvU3E5__6_10 = L_22;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_23 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CU3Es__7_11);
				il2cpp_codegen_initobj(L_23, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_24 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CvU3E5__6_10);
				bool L_25;
				L_25 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_24, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				V_5 = L_25;
				bool L_26 = V_5;
				if (!L_26)
				{
					goto IL_0166_2;
				}
			}
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_27 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28)__this->___U3CsumU3E5__2_6;
				V_6 = L_27;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_28 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CvU3E5__6_10);
				int32_t L_29;
				L_29 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA(L_28, Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
				V_7 = L_29;
				bool L_30;
				L_30 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_6), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				if (L_30)
				{
					G_B22_0 = __this;
					goto IL_013d_2;
				}
				G_B21_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_31 = V_8;
				G_B23_0 = L_31;
				G_B23_1 = G_B21_0;
				goto IL_014c_2;
			}

IL_013d_2:
			{
				int32_t L_32;
				L_32 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_6), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
				int32_t L_33 = V_7;
				if (((int64_t)L_32 + (int64_t)L_33 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_32 + (int64_t)L_33 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_34;
				memset((&L_34), 0, sizeof(L_34));
				Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_34), ((int32_t)il2cpp_codegen_add(L_32, L_33)), Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
				G_B23_0 = L_34;
				G_B23_1 = G_B22_0;
			}

IL_014c_2:
			{
				NullCheck(G_B23_1);
				G_B23_1->___U3CsumU3E5__2_6 = G_B23_0;
				int64_t L_35 = (int64_t)__this->___U3CcountU3E5__1_5;
				V_9 = L_35;
				int64_t L_36 = V_9;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_36, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1_5 = ((int64_t)il2cpp_codegen_add(L_36, ((int64_t)1)));
			}

IL_0166_2:
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_37 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CvU3E5__6_10);
				il2cpp_codegen_initobj(L_37, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
			}

IL_0173_2:
			{
				RuntimeObject* L_38 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_38);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_39;
				L_39 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_38);
				V_12 = L_39;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_40;
				L_40 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_12), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_11 = L_40;
				bool L_41;
				L_41 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_11), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_41)
				{
					goto IL_01d8_2;
				}
			}
			{
				int32_t L_42 = 1;
				V_0 = L_42;
				__this->___U3CU3E1__state_0 = L_42;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_43 = V_11;
				__this->___U3CU3Eu__2_14 = L_43;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_44 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAwaitAsyncU3Ed__22_1_t6ACF89349A1ADA4A61F83D20FFB2D385035CE624**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_44, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0313;
			}

IL_01bb_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_45 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_14;
				V_11 = L_45;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_46 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_14);
				il2cpp_codegen_initobj(L_46, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_47 = (-1);
				V_0 = L_47;
				__this->___U3CU3E1__state_0 = L_47;
			}

IL_01d8_2:
			{
				bool L_48;
				L_48 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_11), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_48;
				bool L_49 = (bool)__this->___U3CU3Es__8_12;
				V_10 = L_49;
				bool L_50 = V_10;
				if (L_50)
				{
					goto IL_006d_2;
				}
			}
			{
				goto IL_0203_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01f7_1;
			}
			throw e;
		}

CATCH_01f7_1:
		{
			V_13 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_51 = V_13;
			__this->___U3CU3Es__4_8 = L_51;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)L_51);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0203_1;
		}

IL_0203_1:
		{
			RuntimeObject* L_52 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			V_14 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_52) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_53 = V_14;
			if (!L_53)
			{
				goto IL_0282_1;
			}
		}
		{
			RuntimeObject* L_54 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			NullCheck((RuntimeObject*)L_54);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_55;
			L_55 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_54);
			V_16 = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_56;
			L_56 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_16), NULL);
			V_15 = L_56;
			bool L_57;
			L_57 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_15), NULL);
			if (L_57)
			{
				goto IL_0279_1;
			}
		}
		{
			int32_t L_58 = 2;
			V_0 = L_58;
			__this->___U3CU3E1__state_0 = L_58;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_59 = V_15;
			__this->___U3CU3Eu__3_15 = L_59;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_15))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_60 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAwaitAsyncU3Ed__22_1_t6ACF89349A1ADA4A61F83D20FFB2D385035CE624**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_60, (&V_15), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0313;
		}

IL_025c_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_61 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_15;
			V_15 = L_61;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_62 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_15);
			il2cpp_codegen_initobj(L_62, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_63 = (-1);
			V_0 = L_63;
			__this->___U3CU3E1__state_0 = L_63;
		}

IL_0279_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_15), NULL);
		}

IL_0282_1:
		{
			RuntimeObject* L_64 = (RuntimeObject*)__this->___U3CU3Es__4_8;
			V_13 = L_64;
			RuntimeObject* L_65 = V_13;
			if (!L_65)
			{
				goto IL_02ac_1;
			}
		}
		{
			RuntimeObject* L_66 = V_13;
			V_17 = ((Exception_t*)IsInstClass((RuntimeObject*)L_66, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_67 = V_17;
			if (L_67)
			{
				goto IL_029f_1;
			}
		}
		{
			RuntimeObject* L_68 = V_13;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_68, method);
		}

IL_029f_1:
		{
			Exception_t* L_69 = V_17;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_70;
			L_70 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_69, NULL);
			NullCheck(L_70);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_70, NULL);
		}

IL_02ac_1:
		{
			int32_t L_71 = (int32_t)__this->___U3CU3Es__5_9;
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_72 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CsumU3E5__2_6);
			int32_t L_73;
			L_73 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA(L_72, Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
			int64_t L_74 = (int64_t)__this->___U3CcountU3E5__1_5;
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_75;
			memset((&L_75), 0, sizeof(L_75));
			Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_75), ((double)(((double)L_73)/((double)L_74))), Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
			V_1 = L_75;
			goto IL_02f7;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02d6;
		}
		throw e;
	}

CATCH_02d6:
	{
		V_17 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_76 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_77 = V_17;
		AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_inline(L_76, L_77, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0313;
	}

IL_02f7:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_78 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_79 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_inline(L_78, L_79, AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
	}

IL_0313:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__22_1_SetStateMachine_m31F3806307FC671D0B7A637B80119A2C08B308C6_gshared (U3CAverageAwaitAsyncU3Ed__22_1_t6ACF89349A1ADA4A61F83D20FFB2D385035CE624* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__26_1__ctor_m18A64BC77BDA48C07C3B31365FF31C2BDBFB672E_gshared (U3CAverageAwaitAsyncU3Ed__26_1_t4A064A93DEC1BE815476E1B98F2EC9981EC964E5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__26_1_MoveNext_m867EAD987B7E8B29C13610D7D1BF31E7381155D4_gshared (U3CAverageAwaitAsyncU3Ed__26_1_t4A064A93DEC1BE815476E1B98F2EC9981EC964E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t3C59A1846660C577D55C9C7F94E2F1EB07A3325C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t3C59A1846660C577D55C9C7F94E2F1EB07A3325C);
	int32_t V_0 = 0;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CAverageAwaitAsyncU3Ed__26_1_t4A064A93DEC1BE815476E1B98F2EC9981EC964E5* V_4 = NULL;
	bool V_5 = false;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int64_t V_7 = 0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_10;
	memset((&V_10), 0, sizeof(V_10));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_11;
	memset((&V_11), 0, sizeof(V_11));
	RuntimeObject* V_12 = NULL;
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Exception_t* V_16 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	U3CAverageAwaitAsyncU3Ed__26_1_t4A064A93DEC1BE815476E1B98F2EC9981EC964E5* G_B22_0 = NULL;
	U3CAverageAwaitAsyncU3Ed__26_1_t4A064A93DEC1BE815476E1B98F2EC9981EC964E5* G_B21_0 = NULL;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 G_B23_0;
	memset((&G_B23_0), 0, sizeof(G_B23_0));
	U3CAverageAwaitAsyncU3Ed__26_1_t4A064A93DEC1BE815476E1B98F2EC9981EC964E5* G_B23_1 = NULL;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0055_1;
		}

IL_0015_1:
		{
			goto IL_025d_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1_5 = ((int64_t)0);
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_3;
			memset((&L_3), 0, sizeof(L_3));
			Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_3), ((int64_t)0), Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
			__this->___U3CsumU3E5__2_6 = L_3;
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__3_7 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)L_6);
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			__this->___U3CU3Es__5_9 = 0;
		}

IL_0055_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0061_2;
				}
			}
			{
				goto IL_005b_2;
			}

IL_005b_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_0063_2;
				}
			}
			{
				goto IL_0068_2;
			}

IL_0061_2:
			{
				goto IL_00bf_2;
			}

IL_0063_2:
			{
				goto IL_01bc_2;
			}

IL_0068_2:
			{
				goto IL_0174_2;
			}

IL_006e_2:
			{
				Func_2_t898AEF8B0AC8B5CB054F91316F69A4739DB2E5B6* L_9 = (Func_2_t898AEF8B0AC8B5CB054F91316F69A4739DB2E5B6*)__this->___selector_3;
				RuntimeObject* L_10 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C L_12;
				L_12 = InvokerFuncInvoker1< UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
				V_3 = L_12;
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_13;
				L_13 = UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_inline((&V_3), UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_inline((&V_2), Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00db_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state_0 = L_15;
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_16 = V_2;
				__this->___U3CU3Eu__1_13 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_17 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB*, U3CAverageAwaitAsyncU3Ed__26_1_t4A064A93DEC1BE815476E1B98F2EC9981EC964E5**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0314;
			}

IL_00bf_2:
			{
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_18 = (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB)__this->___U3CU3Eu__1_13;
				V_2 = L_18;
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* L_19 = (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB*)(&__this->___U3CU3Eu__1_13);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state_0 = L_20;
			}

IL_00db_2:
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_21;
				L_21 = Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_inline((&V_2), Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_21;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_22 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17)__this->___U3CU3Es__7_11;
				__this->___U3CvU3E5__6_10 = L_22;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_23 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CU3Es__7_11);
				il2cpp_codegen_initobj(L_23, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_24 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CvU3E5__6_10);
				bool L_25;
				L_25 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline(L_24, Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
				V_5 = L_25;
				bool L_26 = V_5;
				if (!L_26)
				{
					goto IL_0167_2;
				}
			}
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_27 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17)__this->___U3CsumU3E5__2_6;
				V_6 = L_27;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_28 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CvU3E5__6_10);
				int64_t L_29;
				L_29 = Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC(L_28, Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
				V_7 = L_29;
				bool L_30;
				L_30 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&V_6), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
				if (L_30)
				{
					G_B22_0 = __this;
					goto IL_013e_2;
				}
				G_B21_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_31 = V_8;
				G_B23_0 = L_31;
				G_B23_1 = G_B21_0;
				goto IL_014d_2;
			}

IL_013e_2:
			{
				int64_t L_32;
				L_32 = Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_inline((&V_6), Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
				int64_t L_33 = V_7;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_32, (int64_t)L_33))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_34;
				memset((&L_34), 0, sizeof(L_34));
				Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_34), ((int64_t)il2cpp_codegen_add(L_32, L_33)), Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
				G_B23_0 = L_34;
				G_B23_1 = G_B22_0;
			}

IL_014d_2:
			{
				NullCheck(G_B23_1);
				G_B23_1->___U3CsumU3E5__2_6 = G_B23_0;
				int64_t L_35 = (int64_t)__this->___U3CcountU3E5__1_5;
				V_7 = L_35;
				int64_t L_36 = V_7;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_36, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1_5 = ((int64_t)il2cpp_codegen_add(L_36, ((int64_t)1)));
			}

IL_0167_2:
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_37 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CvU3E5__6_10);
				il2cpp_codegen_initobj(L_37, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
			}

IL_0174_2:
			{
				RuntimeObject* L_38 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_38);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_39;
				L_39 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_38);
				V_11 = L_39;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_40;
				L_40 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_11), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_10 = L_40;
				bool L_41;
				L_41 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_10), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_41)
				{
					goto IL_01d9_2;
				}
			}
			{
				int32_t L_42 = 1;
				V_0 = L_42;
				__this->___U3CU3E1__state_0 = L_42;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_43 = V_10;
				__this->___U3CU3Eu__2_14 = L_43;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_44 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAwaitAsyncU3Ed__26_1_t4A064A93DEC1BE815476E1B98F2EC9981EC964E5**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_44, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0314;
			}

IL_01bc_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_45 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_14;
				V_10 = L_45;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_46 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_14);
				il2cpp_codegen_initobj(L_46, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_47 = (-1);
				V_0 = L_47;
				__this->___U3CU3E1__state_0 = L_47;
			}

IL_01d9_2:
			{
				bool L_48;
				L_48 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_10), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_48;
				bool L_49 = (bool)__this->___U3CU3Es__8_12;
				V_9 = L_49;
				bool L_50 = V_9;
				if (L_50)
				{
					goto IL_006e_2;
				}
			}
			{
				goto IL_0204_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01f8_1;
			}
			throw e;
		}

CATCH_01f8_1:
		{
			V_12 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_51 = V_12;
			__this->___U3CU3Es__4_8 = L_51;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)L_51);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0204_1;
		}

IL_0204_1:
		{
			RuntimeObject* L_52 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_52) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_53 = V_13;
			if (!L_53)
			{
				goto IL_0283_1;
			}
		}
		{
			RuntimeObject* L_54 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			NullCheck((RuntimeObject*)L_54);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_55;
			L_55 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_54);
			V_15 = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_56;
			L_56 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_15), NULL);
			V_14 = L_56;
			bool L_57;
			L_57 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_57)
			{
				goto IL_027a_1;
			}
		}
		{
			int32_t L_58 = 2;
			V_0 = L_58;
			__this->___U3CU3E1__state_0 = L_58;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_59 = V_14;
			__this->___U3CU3Eu__3_15 = L_59;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_15))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_60 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAwaitAsyncU3Ed__26_1_t4A064A93DEC1BE815476E1B98F2EC9981EC964E5**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_60, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0314;
		}

IL_025d_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_61 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_15;
			V_14 = L_61;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_62 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_15);
			il2cpp_codegen_initobj(L_62, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_63 = (-1);
			V_0 = L_63;
			__this->___U3CU3E1__state_0 = L_63;
		}

IL_027a_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_0283_1:
		{
			RuntimeObject* L_64 = (RuntimeObject*)__this->___U3CU3Es__4_8;
			V_12 = L_64;
			RuntimeObject* L_65 = V_12;
			if (!L_65)
			{
				goto IL_02ad_1;
			}
		}
		{
			RuntimeObject* L_66 = V_12;
			V_16 = ((Exception_t*)IsInstClass((RuntimeObject*)L_66, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_67 = V_16;
			if (L_67)
			{
				goto IL_02a0_1;
			}
		}
		{
			RuntimeObject* L_68 = V_12;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_68, method);
		}

IL_02a0_1:
		{
			Exception_t* L_69 = V_16;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_70;
			L_70 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_69, NULL);
			NullCheck(L_70);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_70, NULL);
		}

IL_02ad_1:
		{
			int32_t L_71 = (int32_t)__this->___U3CU3Es__5_9;
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_72 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CsumU3E5__2_6);
			int64_t L_73;
			L_73 = Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC(L_72, Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
			int64_t L_74 = (int64_t)__this->___U3CcountU3E5__1_5;
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_75;
			memset((&L_75), 0, sizeof(L_75));
			Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_75), ((double)(((double)L_73)/((double)L_74))), Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
			V_1 = L_75;
			goto IL_02f8;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02d7;
		}
		throw e;
	}

CATCH_02d7:
	{
		V_16 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_76 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_77 = V_16;
		AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_inline(L_76, L_77, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0314;
	}

IL_02f8:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_78 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_79 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_inline(L_78, L_79, AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
	}

IL_0314:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__26_1_SetStateMachine_m9004963226B4C0CF559F0EF178EEB6E7E72D6CDD_gshared (U3CAverageAwaitAsyncU3Ed__26_1_t4A064A93DEC1BE815476E1B98F2EC9981EC964E5* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__2_1__ctor_mDACA45EF21898ACB56D307E0F02C580E59785B0B_gshared (U3CAverageAwaitAsyncU3Ed__2_1_t3241690F59243BF1EC03264EFCC40C3C82718B77* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__2_1_MoveNext_m9D1AACFA8530B15E7A6A91731940B8B2E3F5F2F5_gshared (U3CAverageAwaitAsyncU3Ed__2_1_t3241690F59243BF1EC03264EFCC40C3C82718B77* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t27452D19A086004B50D83ACE279F19F9E5376BA9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t27452D19A086004B50D83ACE279F19F9E5376BA9);
	int32_t V_0 = 0;
	double V_1 = 0.0;
	Awaiter_t8953594D03299DE782894F4A865CED79F2504266 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CAverageAwaitAsyncU3Ed__2_1_t3241690F59243BF1EC03264EFCC40C3C82718B77* V_4 = NULL;
	int64_t V_5 = 0;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_004f_1;
		}

IL_0015_1:
		{
			goto IL_0200_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1_5 = ((int64_t)0);
			__this->___U3CsumU3E5__2_6 = 0;
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__3_7 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)L_5);
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			__this->___U3CU3Es__5_9 = 0;
		}

IL_004f_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_005b_2;
				}
			}
			{
				goto IL_0055_2;
			}

IL_0055_2:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_005d_2;
				}
			}
			{
				goto IL_0062_2;
			}

IL_005b_2:
			{
				goto IL_00c6_2;
			}

IL_005d_2:
			{
				goto IL_015f_2;
			}

IL_0062_2:
			{
				goto IL_0117_2;
			}

IL_0068_2:
			{
				int32_t L_8 = (int32_t)__this->___U3CsumU3E5__2_6;
				__this->___U3CU3Es__6_10 = L_8;
				Func_2_t6561E0DBB0FBFCB8DBFA46F392A86C31706164F5* L_9 = (Func_2_t6561E0DBB0FBFCB8DBFA46F392A86C31706164F5*)__this->___selector_3;
				RuntimeObject* L_10 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 L_12;
				L_12 = InvokerFuncInvoker1< UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
				V_3 = L_12;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_13;
				L_13 = UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_inline((&V_3), UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_inline((&V_2), Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00e2_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state_0 = L_15;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_16 = V_2;
				__this->___U3CU3Eu__1_13 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_17 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_t8953594D03299DE782894F4A865CED79F2504266*, U3CAverageAwaitAsyncU3Ed__2_1_t3241690F59243BF1EC03264EFCC40C3C82718B77**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_02ad;
			}

IL_00c6_2:
			{
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_18 = (Awaiter_t8953594D03299DE782894F4A865CED79F2504266)__this->___U3CU3Eu__1_13;
				V_2 = L_18;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266* L_19 = (Awaiter_t8953594D03299DE782894F4A865CED79F2504266*)(&__this->___U3CU3Eu__1_13);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_t8953594D03299DE782894F4A865CED79F2504266));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state_0 = L_20;
			}

IL_00e2_2:
			{
				int32_t L_21;
				L_21 = Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_inline((&V_2), Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_21;
				int32_t L_22 = (int32_t)__this->___U3CU3Es__6_10;
				int32_t L_23 = (int32_t)__this->___U3CU3Es__7_11;
				if (((int64_t)L_22 + (int64_t)L_23 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_22 + (int64_t)L_23 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CsumU3E5__2_6 = ((int32_t)il2cpp_codegen_add(L_22, L_23));
				int64_t L_24 = (int64_t)__this->___U3CcountU3E5__1_5;
				V_5 = L_24;
				int64_t L_25 = V_5;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_25, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1_5 = ((int64_t)il2cpp_codegen_add(L_25, ((int64_t)1)));
			}

IL_0117_2:
			{
				RuntimeObject* L_26 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_26);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_27;
				L_27 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_26);
				V_8 = L_27;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28;
				L_28 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_28;
				bool L_29;
				L_29 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_017c_2;
				}
			}
			{
				int32_t L_30 = 1;
				V_0 = L_30;
				__this->___U3CU3E1__state_0 = L_30;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = V_7;
				__this->___U3CU3Eu__2_14 = L_31;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_32 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAwaitAsyncU3Ed__2_1_t3241690F59243BF1EC03264EFCC40C3C82718B77**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_32, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_02ad;
			}

IL_015f_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_14;
				V_7 = L_33;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_14);
				il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->___U3CU3E1__state_0 = L_35;
			}

IL_017c_2:
			{
				bool L_36;
				L_36 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_36;
				bool L_37 = (bool)__this->___U3CU3Es__8_12;
				V_6 = L_37;
				bool L_38 = V_6;
				if (L_38)
				{
					goto IL_0068_2;
				}
			}
			{
				goto IL_01a7_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_019b_1;
			}
			throw e;
		}

CATCH_019b_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_39 = V_9;
			__this->___U3CU3Es__4_8 = L_39;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)L_39);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01a7_1;
		}

IL_01a7_1:
		{
			RuntimeObject* L_40 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_40) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_41 = V_10;
			if (!L_41)
			{
				goto IL_0226_1;
			}
		}
		{
			RuntimeObject* L_42 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			NullCheck((RuntimeObject*)L_42);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_43;
			L_43 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_42);
			V_12 = L_43;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_44;
			L_44 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_44;
			bool L_45;
			L_45 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_45)
			{
				goto IL_021d_1;
			}
		}
		{
			int32_t L_46 = 2;
			V_0 = L_46;
			__this->___U3CU3E1__state_0 = L_46;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47 = V_11;
			__this->___U3CU3Eu__3_15 = L_47;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_15))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_48 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAwaitAsyncU3Ed__2_1_t3241690F59243BF1EC03264EFCC40C3C82718B77**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_48, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_02ad;
		}

IL_0200_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_49 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_15;
			V_11 = L_49;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_50 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_15);
			il2cpp_codegen_initobj(L_50, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_51 = (-1);
			V_0 = L_51;
			__this->___U3CU3E1__state_0 = L_51;
		}

IL_021d_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_0226_1:
		{
			RuntimeObject* L_52 = (RuntimeObject*)__this->___U3CU3Es__4_8;
			V_9 = L_52;
			RuntimeObject* L_53 = V_9;
			if (!L_53)
			{
				goto IL_0250_1;
			}
		}
		{
			RuntimeObject* L_54 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_54, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_55 = V_13;
			if (L_55)
			{
				goto IL_0243_1;
			}
		}
		{
			RuntimeObject* L_56 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_56, method);
		}

IL_0243_1:
		{
			Exception_t* L_57 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_58;
			L_58 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_57, NULL);
			NullCheck(L_58);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_58, NULL);
		}

IL_0250_1:
		{
			int32_t L_59 = (int32_t)__this->___U3CU3Es__5_9;
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			int32_t L_60 = (int32_t)__this->___U3CsumU3E5__2_6;
			int64_t L_61 = (int64_t)__this->___U3CcountU3E5__1_5;
			V_1 = ((double)(((double)L_60)/((double)L_61)));
			goto IL_0291;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0270;
		}
		throw e;
	}

CATCH_0270:
	{
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_62 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_63 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_inline(L_62, L_63, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02ad;
	}

IL_0291:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_64 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
		double L_65 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_inline(L_64, L_65, AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
	}

IL_02ad:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__2_1_SetStateMachine_mD6246E2347394006CB9437B38D04491FF37DFD28_gshared (U3CAverageAwaitAsyncU3Ed__2_1_t3241690F59243BF1EC03264EFCC40C3C82718B77* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__30_1__ctor_m81A64C84B75505A80D7EF8B586CE1A913C08221C_gshared (U3CAverageAwaitAsyncU3Ed__30_1_t1B91FA738692CE65DB747C8606C4EFA4FBC2C97C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__30_1_MoveNext_mB41FF63918879C0434F1A45D8C71CB27D1E05830_gshared (U3CAverageAwaitAsyncU3Ed__30_1_t1B91FA738692CE65DB747C8606C4EFA4FBC2C97C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t998163EB9D71BD356431606B676A38AFC9732503 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t998163EB9D71BD356431606B676A38AFC9732503);
	int32_t V_0 = 0;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CAverageAwaitAsyncU3Ed__30_1_t1B91FA738692CE65DB747C8606C4EFA4FBC2C97C* V_4 = NULL;
	bool V_5 = false;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int64_t V_9 = 0;
	bool V_10 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_12;
	memset((&V_12), 0, sizeof(V_12));
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_15;
	memset((&V_15), 0, sizeof(V_15));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Exception_t* V_17 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	U3CAverageAwaitAsyncU3Ed__30_1_t1B91FA738692CE65DB747C8606C4EFA4FBC2C97C* G_B22_0 = NULL;
	U3CAverageAwaitAsyncU3Ed__30_1_t1B91FA738692CE65DB747C8606C4EFA4FBC2C97C* G_B21_0 = NULL;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 G_B23_0;
	memset((&G_B23_0), 0, sizeof(G_B23_0));
	U3CAverageAwaitAsyncU3Ed__30_1_t1B91FA738692CE65DB747C8606C4EFA4FBC2C97C* G_B23_1 = NULL;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 G_B43_0;
	memset((&G_B43_0), 0, sizeof(G_B43_0));
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0058_1;
		}

IL_0015_1:
		{
			goto IL_0260_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1_5 = ((int64_t)0);
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_3;
			memset((&L_3), 0, sizeof(L_3));
			Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_3), (0.0f), Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
			__this->___U3CsumU3E5__2_6 = L_3;
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__3_7 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)L_6);
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			__this->___U3CU3Es__5_9 = 0;
		}

IL_0058_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0064_2;
				}
			}
			{
				goto IL_005e_2;
			}

IL_005e_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_0066_2;
				}
			}
			{
				goto IL_006b_2;
			}

IL_0064_2:
			{
				goto IL_00c2_2;
			}

IL_0066_2:
			{
				goto IL_01bf_2;
			}

IL_006b_2:
			{
				goto IL_0177_2;
			}

IL_0071_2:
			{
				Func_2_t9F80A31065CD628F063DA0D192A111706F695666* L_9 = (Func_2_t9F80A31065CD628F063DA0D192A111706F695666*)__this->___selector_3;
				RuntimeObject* L_10 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46 L_12;
				L_12 = InvokerFuncInvoker1< UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
				V_3 = L_12;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_13;
				L_13 = UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_inline((&V_3), UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_inline((&V_2), Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00de_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state_0 = L_15;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_16 = V_2;
				__this->___U3CU3Eu__1_13 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_17 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*, U3CAverageAwaitAsyncU3Ed__30_1_t1B91FA738692CE65DB747C8606C4EFA4FBC2C97C**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0342;
			}

IL_00c2_2:
			{
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_18 = (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91)__this->___U3CU3Eu__1_13;
				V_2 = L_18;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* L_19 = (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*)(&__this->___U3CU3Eu__1_13);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state_0 = L_20;
			}

IL_00de_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_21;
				L_21 = Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_inline((&V_2), Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_21;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_22 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75)__this->___U3CU3Es__7_11;
				__this->___U3CvU3E5__6_10 = L_22;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_23 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CU3Es__7_11);
				il2cpp_codegen_initobj(L_23, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_24 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CvU3E5__6_10);
				bool L_25;
				L_25 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline(L_24, Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				V_5 = L_25;
				bool L_26 = V_5;
				if (!L_26)
				{
					goto IL_016a_2;
				}
			}
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_27 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75)__this->___U3CsumU3E5__2_6;
				V_6 = L_27;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_28 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CvU3E5__6_10);
				float L_29;
				L_29 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA(L_28, Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
				V_7 = L_29;
				bool L_30;
				L_30 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&V_6), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				if (L_30)
				{
					G_B22_0 = __this;
					goto IL_0141_2;
				}
				G_B21_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_31 = V_8;
				G_B23_0 = L_31;
				G_B23_1 = G_B21_0;
				goto IL_0150_2;
			}

IL_0141_2:
			{
				float L_32;
				L_32 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline((&V_6), Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
				float L_33 = V_7;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_34;
				memset((&L_34), 0, sizeof(L_34));
				Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_34), ((float)il2cpp_codegen_add(L_32, L_33)), Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
				G_B23_0 = L_34;
				G_B23_1 = G_B22_0;
			}

IL_0150_2:
			{
				NullCheck(G_B23_1);
				G_B23_1->___U3CsumU3E5__2_6 = G_B23_0;
				int64_t L_35 = (int64_t)__this->___U3CcountU3E5__1_5;
				V_9 = L_35;
				int64_t L_36 = V_9;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_36, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1_5 = ((int64_t)il2cpp_codegen_add(L_36, ((int64_t)1)));
			}

IL_016a_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_37 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CvU3E5__6_10);
				il2cpp_codegen_initobj(L_37, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
			}

IL_0177_2:
			{
				RuntimeObject* L_38 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_38);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_39;
				L_39 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_38);
				V_12 = L_39;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_40;
				L_40 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_12), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_11 = L_40;
				bool L_41;
				L_41 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_11), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_41)
				{
					goto IL_01dc_2;
				}
			}
			{
				int32_t L_42 = 1;
				V_0 = L_42;
				__this->___U3CU3E1__state_0 = L_42;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_43 = V_11;
				__this->___U3CU3Eu__2_14 = L_43;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_44 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAwaitAsyncU3Ed__30_1_t1B91FA738692CE65DB747C8606C4EFA4FBC2C97C**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_44, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0342;
			}

IL_01bf_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_45 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_14;
				V_11 = L_45;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_46 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_14);
				il2cpp_codegen_initobj(L_46, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_47 = (-1);
				V_0 = L_47;
				__this->___U3CU3E1__state_0 = L_47;
			}

IL_01dc_2:
			{
				bool L_48;
				L_48 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_11), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_48;
				bool L_49 = (bool)__this->___U3CU3Es__8_12;
				V_10 = L_49;
				bool L_50 = V_10;
				if (L_50)
				{
					goto IL_0071_2;
				}
			}
			{
				goto IL_0207_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01fb_1;
			}
			throw e;
		}

CATCH_01fb_1:
		{
			V_13 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_51 = V_13;
			__this->___U3CU3Es__4_8 = L_51;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)L_51);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0207_1;
		}

IL_0207_1:
		{
			RuntimeObject* L_52 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			V_14 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_52) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_53 = V_14;
			if (!L_53)
			{
				goto IL_0286_1;
			}
		}
		{
			RuntimeObject* L_54 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			NullCheck((RuntimeObject*)L_54);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_55;
			L_55 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_54);
			V_16 = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_56;
			L_56 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_16), NULL);
			V_15 = L_56;
			bool L_57;
			L_57 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_15), NULL);
			if (L_57)
			{
				goto IL_027d_1;
			}
		}
		{
			int32_t L_58 = 2;
			V_0 = L_58;
			__this->___U3CU3E1__state_0 = L_58;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_59 = V_15;
			__this->___U3CU3Eu__3_15 = L_59;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_15))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_60 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAwaitAsyncU3Ed__30_1_t1B91FA738692CE65DB747C8606C4EFA4FBC2C97C**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_60, (&V_15), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0342;
		}

IL_0260_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_61 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_15;
			V_15 = L_61;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_62 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_15);
			il2cpp_codegen_initobj(L_62, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_63 = (-1);
			V_0 = L_63;
			__this->___U3CU3E1__state_0 = L_63;
		}

IL_027d_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_15), NULL);
		}

IL_0286_1:
		{
			RuntimeObject* L_64 = (RuntimeObject*)__this->___U3CU3Es__4_8;
			V_13 = L_64;
			RuntimeObject* L_65 = V_13;
			if (!L_65)
			{
				goto IL_02b0_1;
			}
		}
		{
			RuntimeObject* L_66 = V_13;
			V_17 = ((Exception_t*)IsInstClass((RuntimeObject*)L_66, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_67 = V_17;
			if (L_67)
			{
				goto IL_02a3_1;
			}
		}
		{
			RuntimeObject* L_68 = V_13;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_68, method);
		}

IL_02a3_1:
		{
			Exception_t* L_69 = V_17;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_70;
			L_70 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_69, NULL);
			NullCheck(L_70);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_70, NULL);
		}

IL_02b0_1:
		{
			int32_t L_71 = (int32_t)__this->___U3CU3Es__5_9;
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_72 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75)__this->___U3CsumU3E5__2_6;
			V_6 = L_72;
			int64_t L_73 = (int64_t)__this->___U3CcountU3E5__1_5;
			V_7 = ((float)L_73);
			bool L_74;
			L_74 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&V_6), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
			if (L_74)
			{
				goto IL_02e4_1;
			}
		}
		{
			il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_75 = V_8;
			G_B43_0 = L_75;
			goto IL_02f3_1;
		}

IL_02e4_1:
		{
			float L_76;
			L_76 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline((&V_6), Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
			float L_77 = V_7;
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_78;
			memset((&L_78), 0, sizeof(L_78));
			Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_78), ((float)(L_76/L_77)), Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
			G_B43_0 = L_78;
		}

IL_02f3_1:
		{
			V_8 = G_B43_0;
			float L_79;
			L_79 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&V_8), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_80;
			memset((&L_80), 0, sizeof(L_80));
			Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_80), ((float)L_79), Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
			V_1 = L_80;
			goto IL_0326;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0305;
		}
		throw e;
	}

CATCH_0305:
	{
		V_17 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_81 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_82 = V_17;
		AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_inline(L_81, L_82, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0342;
	}

IL_0326:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_83 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_84 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_inline(L_83, L_84, AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_RuntimeMethod_var);
	}

IL_0342:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__30_1_SetStateMachine_m5FA9F174E74B178112E5D6D17722C078724C1AD7_gshared (U3CAverageAwaitAsyncU3Ed__30_1_t1B91FA738692CE65DB747C8606C4EFA4FBC2C97C* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__34_1__ctor_mEF5E7A74320B0326F0BF4CC4CBB8779DF1D77528_gshared (U3CAverageAwaitAsyncU3Ed__34_1_t53FE7D4236A524E65C4060CD9DF2F5BD6112ED2A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__34_1_MoveNext_mFE7A4A82EBEC57323934571B2282BC48716CCF27_gshared (U3CAverageAwaitAsyncU3Ed__34_1_t53FE7D4236A524E65C4060CD9DF2F5BD6112ED2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t26D5387B83C8FB851E8E90DAB31A3E00A6534284 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t26D5387B83C8FB851E8E90DAB31A3E00A6534284);
	int32_t V_0 = 0;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CAverageAwaitAsyncU3Ed__34_1_t53FE7D4236A524E65C4060CD9DF2F5BD6112ED2A* V_4 = NULL;
	bool V_5 = false;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_6;
	memset((&V_6), 0, sizeof(V_6));
	double V_7 = 0.0;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int64_t V_9 = 0;
	bool V_10 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_12;
	memset((&V_12), 0, sizeof(V_12));
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_15;
	memset((&V_15), 0, sizeof(V_15));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Exception_t* V_17 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	U3CAverageAwaitAsyncU3Ed__34_1_t53FE7D4236A524E65C4060CD9DF2F5BD6112ED2A* G_B22_0 = NULL;
	U3CAverageAwaitAsyncU3Ed__34_1_t53FE7D4236A524E65C4060CD9DF2F5BD6112ED2A* G_B21_0 = NULL;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 G_B23_0;
	memset((&G_B23_0), 0, sizeof(G_B23_0));
	U3CAverageAwaitAsyncU3Ed__34_1_t53FE7D4236A524E65C4060CD9DF2F5BD6112ED2A* G_B23_1 = NULL;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 G_B43_0;
	memset((&G_B43_0), 0, sizeof(G_B43_0));
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_005c_1;
		}

IL_0015_1:
		{
			goto IL_0264_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1_5 = ((int64_t)0);
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_3;
			memset((&L_3), 0, sizeof(L_3));
			Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_3), (0.0), Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
			__this->___U3CsumU3E5__2_6 = L_3;
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__3_7 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)L_6);
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			__this->___U3CU3Es__5_9 = 0;
		}

IL_005c_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0068_2;
				}
			}
			{
				goto IL_0062_2;
			}

IL_0062_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_006a_2;
				}
			}
			{
				goto IL_006f_2;
			}

IL_0068_2:
			{
				goto IL_00c6_2;
			}

IL_006a_2:
			{
				goto IL_01c3_2;
			}

IL_006f_2:
			{
				goto IL_017b_2;
			}

IL_0075_2:
			{
				Func_2_tEBD22D2F4376CEDF9152BDE05B6E363699F0C7E1* L_9 = (Func_2_tEBD22D2F4376CEDF9152BDE05B6E363699F0C7E1*)__this->___selector_3;
				RuntimeObject* L_10 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E L_12;
				L_12 = InvokerFuncInvoker1< UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
				V_3 = L_12;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_13;
				L_13 = UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_inline((&V_3), UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_inline((&V_2), Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00e2_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state_0 = L_15;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_16 = V_2;
				__this->___U3CU3Eu__1_13 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_17 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0*, U3CAverageAwaitAsyncU3Ed__34_1_t53FE7D4236A524E65C4060CD9DF2F5BD6112ED2A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0337;
			}

IL_00c6_2:
			{
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_18 = (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0)__this->___U3CU3Eu__1_13;
				V_2 = L_18;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* L_19 = (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0*)(&__this->___U3CU3Eu__1_13);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state_0 = L_20;
			}

IL_00e2_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_21;
				L_21 = Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_inline((&V_2), Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_21;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_22 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165)__this->___U3CU3Es__7_11;
				__this->___U3CvU3E5__6_10 = L_22;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_23 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CU3Es__7_11);
				il2cpp_codegen_initobj(L_23, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_24 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CvU3E5__6_10);
				bool L_25;
				L_25 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline(L_24, Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				V_5 = L_25;
				bool L_26 = V_5;
				if (!L_26)
				{
					goto IL_016e_2;
				}
			}
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_27 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165)__this->___U3CsumU3E5__2_6;
				V_6 = L_27;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_28 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CvU3E5__6_10);
				double L_29;
				L_29 = Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1(L_28, Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
				V_7 = L_29;
				bool L_30;
				L_30 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&V_6), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				if (L_30)
				{
					G_B22_0 = __this;
					goto IL_0145_2;
				}
				G_B21_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_31 = V_8;
				G_B23_0 = L_31;
				G_B23_1 = G_B21_0;
				goto IL_0154_2;
			}

IL_0145_2:
			{
				double L_32;
				L_32 = Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline((&V_6), Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
				double L_33 = V_7;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_34;
				memset((&L_34), 0, sizeof(L_34));
				Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_34), ((double)il2cpp_codegen_add(L_32, L_33)), Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
				G_B23_0 = L_34;
				G_B23_1 = G_B22_0;
			}

IL_0154_2:
			{
				NullCheck(G_B23_1);
				G_B23_1->___U3CsumU3E5__2_6 = G_B23_0;
				int64_t L_35 = (int64_t)__this->___U3CcountU3E5__1_5;
				V_9 = L_35;
				int64_t L_36 = V_9;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_36, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1_5 = ((int64_t)il2cpp_codegen_add(L_36, ((int64_t)1)));
			}

IL_016e_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_37 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CvU3E5__6_10);
				il2cpp_codegen_initobj(L_37, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
			}

IL_017b_2:
			{
				RuntimeObject* L_38 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_38);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_39;
				L_39 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_38);
				V_12 = L_39;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_40;
				L_40 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_12), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_11 = L_40;
				bool L_41;
				L_41 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_11), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_41)
				{
					goto IL_01e0_2;
				}
			}
			{
				int32_t L_42 = 1;
				V_0 = L_42;
				__this->___U3CU3E1__state_0 = L_42;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_43 = V_11;
				__this->___U3CU3Eu__2_14 = L_43;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_44 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAwaitAsyncU3Ed__34_1_t53FE7D4236A524E65C4060CD9DF2F5BD6112ED2A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_44, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0337;
			}

IL_01c3_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_45 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_14;
				V_11 = L_45;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_46 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_14);
				il2cpp_codegen_initobj(L_46, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_47 = (-1);
				V_0 = L_47;
				__this->___U3CU3E1__state_0 = L_47;
			}

IL_01e0_2:
			{
				bool L_48;
				L_48 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_11), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_48;
				bool L_49 = (bool)__this->___U3CU3Es__8_12;
				V_10 = L_49;
				bool L_50 = V_10;
				if (L_50)
				{
					goto IL_0075_2;
				}
			}
			{
				goto IL_020b_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01ff_1;
			}
			throw e;
		}

CATCH_01ff_1:
		{
			V_13 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_51 = V_13;
			__this->___U3CU3Es__4_8 = L_51;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)L_51);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_020b_1;
		}

IL_020b_1:
		{
			RuntimeObject* L_52 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			V_14 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_52) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_53 = V_14;
			if (!L_53)
			{
				goto IL_028a_1;
			}
		}
		{
			RuntimeObject* L_54 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			NullCheck((RuntimeObject*)L_54);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_55;
			L_55 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_54);
			V_16 = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_56;
			L_56 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_16), NULL);
			V_15 = L_56;
			bool L_57;
			L_57 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_15), NULL);
			if (L_57)
			{
				goto IL_0281_1;
			}
		}
		{
			int32_t L_58 = 2;
			V_0 = L_58;
			__this->___U3CU3E1__state_0 = L_58;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_59 = V_15;
			__this->___U3CU3Eu__3_15 = L_59;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_15))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_60 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAwaitAsyncU3Ed__34_1_t53FE7D4236A524E65C4060CD9DF2F5BD6112ED2A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_60, (&V_15), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0337;
		}

IL_0264_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_61 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_15;
			V_15 = L_61;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_62 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_15);
			il2cpp_codegen_initobj(L_62, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_63 = (-1);
			V_0 = L_63;
			__this->___U3CU3E1__state_0 = L_63;
		}

IL_0281_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_15), NULL);
		}

IL_028a_1:
		{
			RuntimeObject* L_64 = (RuntimeObject*)__this->___U3CU3Es__4_8;
			V_13 = L_64;
			RuntimeObject* L_65 = V_13;
			if (!L_65)
			{
				goto IL_02b4_1;
			}
		}
		{
			RuntimeObject* L_66 = V_13;
			V_17 = ((Exception_t*)IsInstClass((RuntimeObject*)L_66, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_67 = V_17;
			if (L_67)
			{
				goto IL_02a7_1;
			}
		}
		{
			RuntimeObject* L_68 = V_13;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_68, method);
		}

IL_02a7_1:
		{
			Exception_t* L_69 = V_17;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_70;
			L_70 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_69, NULL);
			NullCheck(L_70);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_70, NULL);
		}

IL_02b4_1:
		{
			int32_t L_71 = (int32_t)__this->___U3CU3Es__5_9;
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_72 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165)__this->___U3CsumU3E5__2_6;
			V_6 = L_72;
			int64_t L_73 = (int64_t)__this->___U3CcountU3E5__1_5;
			V_7 = ((double)L_73);
			bool L_74;
			L_74 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&V_6), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
			if (L_74)
			{
				goto IL_02e8_1;
			}
		}
		{
			il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_75 = V_8;
			G_B43_0 = L_75;
			goto IL_02f7_1;
		}

IL_02e8_1:
		{
			double L_76;
			L_76 = Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline((&V_6), Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
			double L_77 = V_7;
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_78;
			memset((&L_78), 0, sizeof(L_78));
			Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_78), ((double)(L_76/L_77)), Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
			G_B43_0 = L_78;
		}

IL_02f7_1:
		{
			V_1 = G_B43_0;
			goto IL_031b;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02fa;
		}
		throw e;
	}

CATCH_02fa:
	{
		V_17 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_79 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_80 = V_17;
		AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_inline(L_79, L_80, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0337;
	}

IL_031b:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_81 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_82 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_inline(L_81, L_82, AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
	}

IL_0337:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__34_1_SetStateMachine_mB90D650EEA9CB6F33046DA124856B01136A8C774_gshared (U3CAverageAwaitAsyncU3Ed__34_1_t53FE7D4236A524E65C4060CD9DF2F5BD6112ED2A* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__38_1__ctor_mC8EE162DEE68D5FBF04566CECA463A447B83209C_gshared (U3CAverageAwaitAsyncU3Ed__38_1_t033B46F89946CC1CA0F521A8F9086B9E2458454B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__38_1_MoveNext_m5C527F55A64B6251837169E5D694CB3DE995FE26_gshared (U3CAverageAwaitAsyncU3Ed__38_1_t033B46F89946CC1CA0F521A8F9086B9E2458454B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m33574CDAA01061AEA24434F9DE51A5B4F03A18A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t904261A7CDB85C106949C91581947F56F3340163 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_t904261A7CDB85C106949C91581947F56F3340163);
	int32_t V_0 = 0;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_1;
	memset((&V_1), 0, sizeof(V_1));
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_2;
	memset((&V_2), 0, sizeof(V_2));
	Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CAverageAwaitAsyncU3Ed__38_1_t033B46F89946CC1CA0F521A8F9086B9E2458454B* V_5 = NULL;
	bool V_6 = false;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_7;
	memset((&V_7), 0, sizeof(V_7));
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_8;
	memset((&V_8), 0, sizeof(V_8));
	int64_t V_9 = 0;
	bool V_10 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_12;
	memset((&V_12), 0, sizeof(V_12));
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_15;
	memset((&V_15), 0, sizeof(V_15));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Exception_t* V_17 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	U3CAverageAwaitAsyncU3Ed__38_1_t033B46F89946CC1CA0F521A8F9086B9E2458454B* G_B22_0 = NULL;
	U3CAverageAwaitAsyncU3Ed__38_1_t033B46F89946CC1CA0F521A8F9086B9E2458454B* G_B21_0 = NULL;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB G_B23_0;
	memset((&G_B23_0), 0, sizeof(G_B23_0));
	U3CAverageAwaitAsyncU3Ed__38_1_t033B46F89946CC1CA0F521A8F9086B9E2458454B* G_B23_1 = NULL;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB G_B43_0;
	memset((&G_B43_0), 0, sizeof(G_B43_0));
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_005c_1;
		}

IL_0015_1:
		{
			goto IL_0267_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1_5 = ((int64_t)0);
			il2cpp_codegen_initobj((&V_2), sizeof(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F));
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_3 = V_2;
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_4;
			memset((&L_4), 0, sizeof(L_4));
			Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7((&L_4), L_3, Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_RuntimeMethod_var);
			__this->___U3CsumU3E5__2_6 = L_4;
			RuntimeObject* L_5 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_5);
			RuntimeObject* L_7;
			L_7 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_5, L_6);
			__this->___U3CeU3E5__3_7 = L_7;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)L_7);
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			__this->___U3CU3Es__5_9 = 0;
		}

IL_005c_1:
		{
		}
		try
		{
			{
				int32_t L_8 = V_0;
				if (!L_8)
				{
					goto IL_0068_2;
				}
			}
			{
				goto IL_0062_2;
			}

IL_0062_2:
			{
				int32_t L_9 = V_0;
				if ((((int32_t)L_9) == ((int32_t)1)))
				{
					goto IL_006a_2;
				}
			}
			{
				goto IL_006f_2;
			}

IL_0068_2:
			{
				goto IL_00c7_2;
			}

IL_006a_2:
			{
				goto IL_01c6_2;
			}

IL_006f_2:
			{
				goto IL_017e_2;
			}

IL_0075_2:
			{
				Func_2_t041ABB3F33302FF5B428FF832CE110343F4DA4C6* L_10 = (Func_2_t041ABB3F33302FF5B428FF832CE110343F4DA4C6*)__this->___selector_3;
				RuntimeObject* L_11 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_11);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_11, (Il2CppFullySharedGenericAny*)L_12);
				NullCheck(L_10);
				UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F L_13;
				L_13 = InvokerFuncInvoker1< UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_12: *(void**)L_12));
				V_4 = L_13;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_14;
				L_14 = UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_inline((&V_4), UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_RuntimeMethod_var);
				V_3 = L_14;
				bool L_15;
				L_15 = Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_inline((&V_3), Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00e3_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state_0 = L_16;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_17 = V_3;
				__this->___U3CU3Eu__1_13 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_18 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51*, U3CAverageAwaitAsyncU3Ed__38_1_t033B46F89946CC1CA0F521A8F9086B9E2458454B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_18, (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0340;
			}

IL_00c7_2:
			{
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_19 = (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51)__this->___U3CU3Eu__1_13;
				V_3 = L_19;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* L_20 = (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51*)(&__this->___U3CU3Eu__1_13);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state_0 = L_21;
			}

IL_00e3_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_22;
				L_22 = Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_inline((&V_3), Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_22;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_23 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB)__this->___U3CU3Es__7_11;
				__this->___U3CvU3E5__6_10 = L_23;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_24 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CU3Es__7_11);
				il2cpp_codegen_initobj(L_24, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_25 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CvU3E5__6_10);
				bool L_26;
				L_26 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline(L_25, Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				V_6 = L_26;
				bool L_27 = V_6;
				if (!L_27)
				{
					goto IL_0171_2;
				}
			}
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_28 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB)__this->___U3CsumU3E5__2_6;
				V_7 = L_28;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_29 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CvU3E5__6_10);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_30;
				L_30 = Nullable_1_get_Value_m33574CDAA01061AEA24434F9DE51A5B4F03A18A2(L_29, Nullable_1_get_Value_m33574CDAA01061AEA24434F9DE51A5B4F03A18A2_RuntimeMethod_var);
				V_2 = L_30;
				bool L_31;
				L_31 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline((&V_7), Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				if (L_31)
				{
					G_B22_0 = __this;
					goto IL_0145_2;
				}
				G_B21_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_32 = V_8;
				G_B23_0 = L_32;
				G_B23_1 = G_B21_0;
				goto IL_0157_2;
			}

IL_0145_2:
			{
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_33;
				L_33 = Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline((&V_7), Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_34 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_35;
				L_35 = Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7(L_33, L_34, NULL);
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_36;
				memset((&L_36), 0, sizeof(L_36));
				Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7((&L_36), L_35, Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_RuntimeMethod_var);
				G_B23_0 = L_36;
				G_B23_1 = G_B22_0;
			}

IL_0157_2:
			{
				NullCheck(G_B23_1);
				G_B23_1->___U3CsumU3E5__2_6 = G_B23_0;
				int64_t L_37 = (int64_t)__this->___U3CcountU3E5__1_5;
				V_9 = L_37;
				int64_t L_38 = V_9;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_38, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1_5 = ((int64_t)il2cpp_codegen_add(L_38, ((int64_t)1)));
			}

IL_0171_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_39 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CvU3E5__6_10);
				il2cpp_codegen_initobj(L_39, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
			}

IL_017e_2:
			{
				RuntimeObject* L_40 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_40);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_41;
				L_41 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_40);
				V_12 = L_41;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_42;
				L_42 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_12), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_11 = L_42;
				bool L_43;
				L_43 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_11), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_43)
				{
					goto IL_01e3_2;
				}
			}
			{
				int32_t L_44 = 1;
				V_0 = L_44;
				__this->___U3CU3E1__state_0 = L_44;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_45 = V_11;
				__this->___U3CU3Eu__2_14 = L_45;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_46 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAwaitAsyncU3Ed__38_1_t033B46F89946CC1CA0F521A8F9086B9E2458454B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_46, (&V_11), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0340;
			}

IL_01c6_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_47 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_14;
				V_11 = L_47;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_48 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_14);
				il2cpp_codegen_initobj(L_48, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_49 = (-1);
				V_0 = L_49;
				__this->___U3CU3E1__state_0 = L_49;
			}

IL_01e3_2:
			{
				bool L_50;
				L_50 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_11), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_50;
				bool L_51 = (bool)__this->___U3CU3Es__8_12;
				V_10 = L_51;
				bool L_52 = V_10;
				if (L_52)
				{
					goto IL_0075_2;
				}
			}
			{
				goto IL_020e_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0202_1;
			}
			throw e;
		}

CATCH_0202_1:
		{
			V_13 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_53 = V_13;
			__this->___U3CU3Es__4_8 = L_53;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)L_53);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_020e_1;
		}

IL_020e_1:
		{
			RuntimeObject* L_54 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			V_14 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_54) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_55 = V_14;
			if (!L_55)
			{
				goto IL_028d_1;
			}
		}
		{
			RuntimeObject* L_56 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			NullCheck((RuntimeObject*)L_56);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_57;
			L_57 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_56);
			V_16 = L_57;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_58;
			L_58 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_16), NULL);
			V_15 = L_58;
			bool L_59;
			L_59 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_15), NULL);
			if (L_59)
			{
				goto IL_0284_1;
			}
		}
		{
			int32_t L_60 = 2;
			V_0 = L_60;
			__this->___U3CU3E1__state_0 = L_60;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_61 = V_15;
			__this->___U3CU3Eu__3_15 = L_61;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_15))->___task_0))->___source_0), (void*)NULL);
			V_5 = __this;
			AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_62 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAwaitAsyncU3Ed__38_1_t033B46F89946CC1CA0F521A8F9086B9E2458454B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_62, (&V_15), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0340;
		}

IL_0267_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_63 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_15;
			V_15 = L_63;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_64 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_15);
			il2cpp_codegen_initobj(L_64, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_65 = (-1);
			V_0 = L_65;
			__this->___U3CU3E1__state_0 = L_65;
		}

IL_0284_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_15), NULL);
		}

IL_028d_1:
		{
			RuntimeObject* L_66 = (RuntimeObject*)__this->___U3CU3Es__4_8;
			V_13 = L_66;
			RuntimeObject* L_67 = V_13;
			if (!L_67)
			{
				goto IL_02b7_1;
			}
		}
		{
			RuntimeObject* L_68 = V_13;
			V_17 = ((Exception_t*)IsInstClass((RuntimeObject*)L_68, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_69 = V_17;
			if (L_69)
			{
				goto IL_02aa_1;
			}
		}
		{
			RuntimeObject* L_70 = V_13;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_70, method);
		}

IL_02aa_1:
		{
			Exception_t* L_71 = V_17;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_72;
			L_72 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_71, NULL);
			NullCheck(L_72);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_72, NULL);
		}

IL_02b7_1:
		{
			int32_t L_73 = (int32_t)__this->___U3CU3Es__5_9;
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_74 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB)__this->___U3CsumU3E5__2_6;
			V_7 = L_74;
			int64_t L_75 = (int64_t)__this->___U3CcountU3E5__1_5;
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_76;
			L_76 = Decimal_op_Implicit_m8F9A38760D01B23E6DFF77EA760CCE5111F3656D(L_75, NULL);
			V_2 = L_76;
			bool L_77;
			L_77 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline((&V_7), Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
			if (L_77)
			{
				goto IL_02ee_1;
			}
		}
		{
			il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_78 = V_8;
			G_B43_0 = L_78;
			goto IL_0300_1;
		}

IL_02ee_1:
		{
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_79;
			L_79 = Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline((&V_7), Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_80 = V_2;
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_81;
			L_81 = Decimal_op_Division_mA0BD25988CA8010A3F8EA2F6A534F9F2D812D2AC(L_79, L_80, NULL);
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_82;
			memset((&L_82), 0, sizeof(L_82));
			Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7((&L_82), L_81, Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_RuntimeMethod_var);
			G_B43_0 = L_82;
		}

IL_0300_1:
		{
			V_1 = G_B43_0;
			goto IL_0324;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0303;
		}
		throw e;
	}

CATCH_0303:
	{
		V_17 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_83 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_84 = V_17;
		AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_inline(L_83, L_84, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0340;
	}

IL_0324:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_85 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_86 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_inline(L_85, L_86, AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_RuntimeMethod_var);
	}

IL_0340:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__38_1_SetStateMachine_mA8B8E6A1093662812133675AB8286876D7672FCB_gshared (U3CAverageAwaitAsyncU3Ed__38_1_t033B46F89946CC1CA0F521A8F9086B9E2458454B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__6_1__ctor_m346E00854478FBAB753C6440753ED3AA763D0261_gshared (U3CAverageAwaitAsyncU3Ed__6_1_t3691944FA8BC631E4794C68710C761652161B0BF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__6_1_MoveNext_mC2BA269D56925D052077DA8865E77A7C7C03EAE3_gshared (U3CAverageAwaitAsyncU3Ed__6_1_t3691944FA8BC631E4794C68710C761652161B0BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t7A788937E94FF27403A438FF8A5C35F70967CCBC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t7A788937E94FF27403A438FF8A5C35F70967CCBC);
	int32_t V_0 = 0;
	double V_1 = 0.0;
	Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CAverageAwaitAsyncU3Ed__6_1_t3691944FA8BC631E4794C68710C761652161B0BF* V_4 = NULL;
	int64_t V_5 = 0;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0050_1;
		}

IL_0015_1:
		{
			goto IL_0201_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1_5 = ((int64_t)0);
			__this->___U3CsumU3E5__2_6 = ((int64_t)0);
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__3_7 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)L_5);
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			__this->___U3CU3Es__5_9 = 0;
		}

IL_0050_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_005c_2;
				}
			}
			{
				goto IL_0056_2;
			}

IL_0056_2:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_005e_2;
				}
			}
			{
				goto IL_0063_2;
			}

IL_005c_2:
			{
				goto IL_00c7_2;
			}

IL_005e_2:
			{
				goto IL_0160_2;
			}

IL_0063_2:
			{
				goto IL_0118_2;
			}

IL_0069_2:
			{
				int64_t L_8 = (int64_t)__this->___U3CsumU3E5__2_6;
				__this->___U3CU3Es__6_10 = L_8;
				Func_2_t04742C32F6BEF8B1199EACA5BD7F68C041603B6D* L_9 = (Func_2_t04742C32F6BEF8B1199EACA5BD7F68C041603B6D*)__this->___selector_3;
				RuntimeObject* L_10 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72 L_12;
				L_12 = InvokerFuncInvoker1< UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
				V_3 = L_12;
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_13;
				L_13 = UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_inline((&V_3), UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_inline((&V_2), Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00e3_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state_0 = L_15;
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_16 = V_2;
				__this->___U3CU3Eu__1_13 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_17 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E*, U3CAverageAwaitAsyncU3Ed__6_1_t3691944FA8BC631E4794C68710C761652161B0BF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_02ae;
			}

IL_00c7_2:
			{
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_18 = (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E)__this->___U3CU3Eu__1_13;
				V_2 = L_18;
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* L_19 = (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E*)(&__this->___U3CU3Eu__1_13);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state_0 = L_20;
			}

IL_00e3_2:
			{
				int64_t L_21;
				L_21 = Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_inline((&V_2), Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_21;
				int64_t L_22 = (int64_t)__this->___U3CU3Es__6_10;
				int64_t L_23 = (int64_t)__this->___U3CU3Es__7_11;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_22, (int64_t)L_23))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CsumU3E5__2_6 = ((int64_t)il2cpp_codegen_add(L_22, L_23));
				int64_t L_24 = (int64_t)__this->___U3CcountU3E5__1_5;
				V_5 = L_24;
				int64_t L_25 = V_5;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_25, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1_5 = ((int64_t)il2cpp_codegen_add(L_25, ((int64_t)1)));
			}

IL_0118_2:
			{
				RuntimeObject* L_26 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_26);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_27;
				L_27 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_26);
				V_8 = L_27;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28;
				L_28 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_28;
				bool L_29;
				L_29 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_017d_2;
				}
			}
			{
				int32_t L_30 = 1;
				V_0 = L_30;
				__this->___U3CU3E1__state_0 = L_30;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = V_7;
				__this->___U3CU3Eu__2_14 = L_31;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_32 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAwaitAsyncU3Ed__6_1_t3691944FA8BC631E4794C68710C761652161B0BF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_32, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_02ae;
			}

IL_0160_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_14;
				V_7 = L_33;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_14);
				il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->___U3CU3E1__state_0 = L_35;
			}

IL_017d_2:
			{
				bool L_36;
				L_36 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_36;
				bool L_37 = (bool)__this->___U3CU3Es__8_12;
				V_6 = L_37;
				bool L_38 = V_6;
				if (L_38)
				{
					goto IL_0069_2;
				}
			}
			{
				goto IL_01a8_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_019c_1;
			}
			throw e;
		}

CATCH_019c_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_39 = V_9;
			__this->___U3CU3Es__4_8 = L_39;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)L_39);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01a8_1;
		}

IL_01a8_1:
		{
			RuntimeObject* L_40 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_40) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_41 = V_10;
			if (!L_41)
			{
				goto IL_0227_1;
			}
		}
		{
			RuntimeObject* L_42 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			NullCheck((RuntimeObject*)L_42);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_43;
			L_43 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_42);
			V_12 = L_43;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_44;
			L_44 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_44;
			bool L_45;
			L_45 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_45)
			{
				goto IL_021e_1;
			}
		}
		{
			int32_t L_46 = 2;
			V_0 = L_46;
			__this->___U3CU3E1__state_0 = L_46;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47 = V_11;
			__this->___U3CU3Eu__3_15 = L_47;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_15))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_48 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAwaitAsyncU3Ed__6_1_t3691944FA8BC631E4794C68710C761652161B0BF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_48, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_02ae;
		}

IL_0201_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_49 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_15;
			V_11 = L_49;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_50 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_15);
			il2cpp_codegen_initobj(L_50, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_51 = (-1);
			V_0 = L_51;
			__this->___U3CU3E1__state_0 = L_51;
		}

IL_021e_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_0227_1:
		{
			RuntimeObject* L_52 = (RuntimeObject*)__this->___U3CU3Es__4_8;
			V_9 = L_52;
			RuntimeObject* L_53 = V_9;
			if (!L_53)
			{
				goto IL_0251_1;
			}
		}
		{
			RuntimeObject* L_54 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_54, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_55 = V_13;
			if (L_55)
			{
				goto IL_0244_1;
			}
		}
		{
			RuntimeObject* L_56 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_56, method);
		}

IL_0244_1:
		{
			Exception_t* L_57 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_58;
			L_58 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_57, NULL);
			NullCheck(L_58);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_58, NULL);
		}

IL_0251_1:
		{
			int32_t L_59 = (int32_t)__this->___U3CU3Es__5_9;
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			int64_t L_60 = (int64_t)__this->___U3CsumU3E5__2_6;
			int64_t L_61 = (int64_t)__this->___U3CcountU3E5__1_5;
			V_1 = ((double)(((double)L_60)/((double)L_61)));
			goto IL_0292;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0271;
		}
		throw e;
	}

CATCH_0271:
	{
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_62 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_63 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_inline(L_62, L_63, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02ae;
	}

IL_0292:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_64 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
		double L_65 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_inline(L_64, L_65, AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
	}

IL_02ae:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitAsyncU3Ed__6_1_SetStateMachine_m2E3746254ED28EA6F39A386F66987D09245F8A00_gshared (U3CAverageAwaitAsyncU3Ed__6_1_t3691944FA8BC631E4794C68710C761652161B0BF* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__11_1__ctor_m10994F0F8582D304E1C213F724C7E2740DF5178F_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__11_1_tDA0926F879D4DFE9E9196F374B8E80FA70547103* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__11_1_MoveNext_m7E236AA2790225E098508F8CEED0869ABD1856DC_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__11_1_tDA0926F879D4DFE9E9196F374B8E80FA70547103* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t64209783EB09A867BD4BA2ED9E20F34A30E6A697 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t64209783EB09A867BD4BA2ED9E20F34A30E6A697);
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CAverageAwaitWithCancellationAsyncU3Ed__11_1_tDA0926F879D4DFE9E9196F374B8E80FA70547103* V_4 = NULL;
	int64_t V_5 = 0;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0053_1;
		}

IL_0015_1:
		{
			goto IL_020a_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1_5 = ((int64_t)0);
			__this->___U3CsumU3E5__2_6 = (0.0f);
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__3_7 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)L_5);
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			__this->___U3CU3Es__5_9 = 0;
		}

IL_0053_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_005f_2;
				}
			}
			{
				goto IL_0059_2;
			}

IL_0059_2:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_0061_2;
				}
			}
			{
				goto IL_0066_2;
			}

IL_005f_2:
			{
				goto IL_00d0_2;
			}

IL_0061_2:
			{
				goto IL_0169_2;
			}

IL_0066_2:
			{
				goto IL_0121_2;
			}

IL_006c_2:
			{
				float L_8 = (float)__this->___U3CsumU3E5__2_6;
				__this->___U3CU3Es__6_10 = L_8;
				Func_3_t79F461272893123C05C047A343D70B9B775827E4* L_9 = (Func_3_t79F461272893123C05C047A343D70B9B775827E4*)__this->___selector_3;
				RuntimeObject* L_10 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_9);
				UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1 L_13;
				L_13 = InvokerFuncInvoker2< UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11), L_12);
				V_3 = L_13;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_14;
				L_14 = UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_inline((&V_3), UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_RuntimeMethod_var);
				V_2 = L_14;
				bool L_15;
				L_15 = Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_inline((&V_2), Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00ec_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state_0 = L_16;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_17 = V_2;
				__this->___U3CU3Eu__1_13 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_18 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*, U3CAverageAwaitWithCancellationAsyncU3Ed__11_1_tDA0926F879D4DFE9E9196F374B8E80FA70547103**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_18, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_02b7;
			}

IL_00d0_2:
			{
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_19 = (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D)__this->___U3CU3Eu__1_13;
				V_2 = L_19;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* L_20 = (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*)(&__this->___U3CU3Eu__1_13);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state_0 = L_21;
			}

IL_00ec_2:
			{
				float L_22;
				L_22 = Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_inline((&V_2), Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_22;
				float L_23 = (float)__this->___U3CU3Es__6_10;
				float L_24 = (float)__this->___U3CU3Es__7_11;
				__this->___U3CsumU3E5__2_6 = ((float)il2cpp_codegen_add(L_23, L_24));
				int64_t L_25 = (int64_t)__this->___U3CcountU3E5__1_5;
				V_5 = L_25;
				int64_t L_26 = V_5;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_26, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1_5 = ((int64_t)il2cpp_codegen_add(L_26, ((int64_t)1)));
			}

IL_0121_2:
			{
				RuntimeObject* L_27 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_27);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_28;
				L_28 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_27);
				V_8 = L_28;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29;
				L_29 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_29;
				bool L_30;
				L_30 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_30)
				{
					goto IL_0186_2;
				}
			}
			{
				int32_t L_31 = 1;
				V_0 = L_31;
				__this->___U3CU3E1__state_0 = L_31;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_32 = V_7;
				__this->___U3CU3Eu__2_14 = L_32;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_33 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAwaitWithCancellationAsyncU3Ed__11_1_tDA0926F879D4DFE9E9196F374B8E80FA70547103**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_33, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_02b7;
			}

IL_0169_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_14;
				V_7 = L_34;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_35 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_14);
				il2cpp_codegen_initobj(L_35, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_36 = (-1);
				V_0 = L_36;
				__this->___U3CU3E1__state_0 = L_36;
			}

IL_0186_2:
			{
				bool L_37;
				L_37 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_37;
				bool L_38 = (bool)__this->___U3CU3Es__8_12;
				V_6 = L_38;
				bool L_39 = V_6;
				if (L_39)
				{
					goto IL_006c_2;
				}
			}
			{
				goto IL_01b1_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01a5_1;
			}
			throw e;
		}

CATCH_01a5_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_40 = V_9;
			__this->___U3CU3Es__4_8 = L_40;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)L_40);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01b1_1;
		}

IL_01b1_1:
		{
			RuntimeObject* L_41 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_41) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_42 = V_10;
			if (!L_42)
			{
				goto IL_0230_1;
			}
		}
		{
			RuntimeObject* L_43 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			NullCheck((RuntimeObject*)L_43);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_44;
			L_44 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_43);
			V_12 = L_44;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_45;
			L_45 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_45;
			bool L_46;
			L_46 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_46)
			{
				goto IL_0227_1;
			}
		}
		{
			int32_t L_47 = 2;
			V_0 = L_47;
			__this->___U3CU3E1__state_0 = L_47;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_48 = V_11;
			__this->___U3CU3Eu__3_15 = L_48;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_15))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_49 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAwaitWithCancellationAsyncU3Ed__11_1_tDA0926F879D4DFE9E9196F374B8E80FA70547103**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_49, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_02b7;
		}

IL_020a_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_15;
			V_11 = L_50;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_51 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_15);
			il2cpp_codegen_initobj(L_51, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_52 = (-1);
			V_0 = L_52;
			__this->___U3CU3E1__state_0 = L_52;
		}

IL_0227_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_0230_1:
		{
			RuntimeObject* L_53 = (RuntimeObject*)__this->___U3CU3Es__4_8;
			V_9 = L_53;
			RuntimeObject* L_54 = V_9;
			if (!L_54)
			{
				goto IL_025a_1;
			}
		}
		{
			RuntimeObject* L_55 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_55, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_56 = V_13;
			if (L_56)
			{
				goto IL_024d_1;
			}
		}
		{
			RuntimeObject* L_57 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_57, method);
		}

IL_024d_1:
		{
			Exception_t* L_58 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_59;
			L_59 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_58, NULL);
			NullCheck(L_59);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_59, NULL);
		}

IL_025a_1:
		{
			int32_t L_60 = (int32_t)__this->___U3CU3Es__5_9;
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			float L_61 = (float)__this->___U3CsumU3E5__2_6;
			int64_t L_62 = (int64_t)__this->___U3CcountU3E5__1_5;
			V_1 = ((float)((float)(L_61/((float)L_62))));
			goto IL_029b;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_027a;
		}
		throw e;
	}

CATCH_027a:
	{
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_63 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_64 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_inline(L_63, L_64, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02b7;
	}

IL_029b:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_65 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
		float L_66 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_inline(L_65, L_66, AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_RuntimeMethod_var);
	}

IL_02b7:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__11_1_SetStateMachine_m496D93C7852BB7170756422C377FABA03159816B_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__11_1_tDA0926F879D4DFE9E9196F374B8E80FA70547103* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__15_1__ctor_m74EEA51F2EC3887BCE270E99A7FD58A04B9624C9_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__15_1_tB093D6BB8EF29AA4A5EA8BC6B7371EB332077809* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__15_1_MoveNext_m1C8EA8D55F2B9C1D861DB5605561F97EF5FDA9C6_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__15_1_tB093D6BB8EF29AA4A5EA8BC6B7371EB332077809* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tC23F18F7A7344E8D1CBB1C3781DC26675047684F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_tC23F18F7A7344E8D1CBB1C3781DC26675047684F);
	int32_t V_0 = 0;
	double V_1 = 0.0;
	Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CAverageAwaitWithCancellationAsyncU3Ed__15_1_tB093D6BB8EF29AA4A5EA8BC6B7371EB332077809* V_4 = NULL;
	int64_t V_5 = 0;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0057_1;
		}

IL_0015_1:
		{
			goto IL_020e_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1_5 = ((int64_t)0);
			__this->___U3CsumU3E5__2_6 = (0.0);
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__3_7 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)L_5);
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			__this->___U3CU3Es__5_9 = 0;
		}

IL_0057_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_0063_2;
				}
			}
			{
				goto IL_005d_2;
			}

IL_005d_2:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_0065_2;
				}
			}
			{
				goto IL_006a_2;
			}

IL_0063_2:
			{
				goto IL_00d4_2;
			}

IL_0065_2:
			{
				goto IL_016d_2;
			}

IL_006a_2:
			{
				goto IL_0125_2;
			}

IL_0070_2:
			{
				double L_8 = (double)__this->___U3CsumU3E5__2_6;
				__this->___U3CU3Es__6_10 = L_8;
				Func_3_tB356387A25DA85D9F4DDAAEEFD39A96B3F81FA95* L_9 = (Func_3_tB356387A25DA85D9F4DDAAEEFD39A96B3F81FA95*)__this->___selector_3;
				RuntimeObject* L_10 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_9);
				UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C L_13;
				L_13 = InvokerFuncInvoker2< UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11), L_12);
				V_3 = L_13;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_14;
				L_14 = UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_inline((&V_3), UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_RuntimeMethod_var);
				V_2 = L_14;
				bool L_15;
				L_15 = Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_inline((&V_2), Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00f0_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state_0 = L_16;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_17 = V_2;
				__this->___U3CU3Eu__1_13 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_18 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88*, U3CAverageAwaitWithCancellationAsyncU3Ed__15_1_tB093D6BB8EF29AA4A5EA8BC6B7371EB332077809**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_18, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_02ba;
			}

IL_00d4_2:
			{
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_19 = (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88)__this->___U3CU3Eu__1_13;
				V_2 = L_19;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* L_20 = (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88*)(&__this->___U3CU3Eu__1_13);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state_0 = L_21;
			}

IL_00f0_2:
			{
				double L_22;
				L_22 = Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_inline((&V_2), Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_22;
				double L_23 = (double)__this->___U3CU3Es__6_10;
				double L_24 = (double)__this->___U3CU3Es__7_11;
				__this->___U3CsumU3E5__2_6 = ((double)il2cpp_codegen_add(L_23, L_24));
				int64_t L_25 = (int64_t)__this->___U3CcountU3E5__1_5;
				V_5 = L_25;
				int64_t L_26 = V_5;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_26, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1_5 = ((int64_t)il2cpp_codegen_add(L_26, ((int64_t)1)));
			}

IL_0125_2:
			{
				RuntimeObject* L_27 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_27);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_28;
				L_28 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_27);
				V_8 = L_28;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29;
				L_29 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_29;
				bool L_30;
				L_30 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_30)
				{
					goto IL_018a_2;
				}
			}
			{
				int32_t L_31 = 1;
				V_0 = L_31;
				__this->___U3CU3E1__state_0 = L_31;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_32 = V_7;
				__this->___U3CU3Eu__2_14 = L_32;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_33 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAwaitWithCancellationAsyncU3Ed__15_1_tB093D6BB8EF29AA4A5EA8BC6B7371EB332077809**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_33, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_02ba;
			}

IL_016d_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_14;
				V_7 = L_34;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_35 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_14);
				il2cpp_codegen_initobj(L_35, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_36 = (-1);
				V_0 = L_36;
				__this->___U3CU3E1__state_0 = L_36;
			}

IL_018a_2:
			{
				bool L_37;
				L_37 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_37;
				bool L_38 = (bool)__this->___U3CU3Es__8_12;
				V_6 = L_38;
				bool L_39 = V_6;
				if (L_39)
				{
					goto IL_0070_2;
				}
			}
			{
				goto IL_01b5_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01a9_1;
			}
			throw e;
		}

CATCH_01a9_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_40 = V_9;
			__this->___U3CU3Es__4_8 = L_40;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)L_40);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01b5_1;
		}

IL_01b5_1:
		{
			RuntimeObject* L_41 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_41) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_42 = V_10;
			if (!L_42)
			{
				goto IL_0234_1;
			}
		}
		{
			RuntimeObject* L_43 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			NullCheck((RuntimeObject*)L_43);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_44;
			L_44 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_43);
			V_12 = L_44;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_45;
			L_45 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_45;
			bool L_46;
			L_46 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_46)
			{
				goto IL_022b_1;
			}
		}
		{
			int32_t L_47 = 2;
			V_0 = L_47;
			__this->___U3CU3E1__state_0 = L_47;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_48 = V_11;
			__this->___U3CU3Eu__3_15 = L_48;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_15))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_49 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAwaitWithCancellationAsyncU3Ed__15_1_tB093D6BB8EF29AA4A5EA8BC6B7371EB332077809**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_49, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_02ba;
		}

IL_020e_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_15;
			V_11 = L_50;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_51 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_15);
			il2cpp_codegen_initobj(L_51, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_52 = (-1);
			V_0 = L_52;
			__this->___U3CU3E1__state_0 = L_52;
		}

IL_022b_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_0234_1:
		{
			RuntimeObject* L_53 = (RuntimeObject*)__this->___U3CU3Es__4_8;
			V_9 = L_53;
			RuntimeObject* L_54 = V_9;
			if (!L_54)
			{
				goto IL_025e_1;
			}
		}
		{
			RuntimeObject* L_55 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_55, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_56 = V_13;
			if (L_56)
			{
				goto IL_0251_1;
			}
		}
		{
			RuntimeObject* L_57 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_57, method);
		}

IL_0251_1:
		{
			Exception_t* L_58 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_59;
			L_59 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_58, NULL);
			NullCheck(L_59);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_59, NULL);
		}

IL_025e_1:
		{
			int32_t L_60 = (int32_t)__this->___U3CU3Es__5_9;
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			double L_61 = (double)__this->___U3CsumU3E5__2_6;
			int64_t L_62 = (int64_t)__this->___U3CcountU3E5__1_5;
			V_1 = ((double)(L_61/((double)L_62)));
			goto IL_029e;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_027d;
		}
		throw e;
	}

CATCH_027d:
	{
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_63 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_64 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_inline(L_63, L_64, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02ba;
	}

IL_029e:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_65 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
		double L_66 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_inline(L_65, L_66, AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
	}

IL_02ba:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__15_1_SetStateMachine_m0C9A95AD5199F4BB021444924958BEA57E3963D0_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__15_1_tB093D6BB8EF29AA4A5EA8BC6B7371EB332077809* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__19_1__ctor_m86DE9D755BE70329CD030CED59A766831A6FA027_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__19_1_t6C66A45139BAB01BADEBFE4E9DF12F84C0B643CA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__19_1_MoveNext_m1ECAFFE7E640DE1975DEE02FA867B37BF209E6A2_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__19_1_t6C66A45139BAB01BADEBFE4E9DF12F84C0B643CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tA6692B50D095D709835568ED03EB4ADB63D5C149 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_tA6692B50D095D709835568ED03EB4ADB63D5C149);
	int32_t V_0 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CAverageAwaitWithCancellationAsyncU3Ed__19_1_t6C66A45139BAB01BADEBFE4E9DF12F84C0B643CA* V_4 = NULL;
	int64_t V_5 = 0;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0054_1;
		}

IL_0015_1:
		{
			goto IL_020f_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1_5 = ((int64_t)0);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* L_3 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)(&__this->___U3CsumU3E5__2_6);
			il2cpp_codegen_initobj(L_3, sizeof(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F));
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__3_7 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)L_6);
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			__this->___U3CU3Es__5_9 = 0;
		}

IL_0054_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0060_2;
				}
			}
			{
				goto IL_005a_2;
			}

IL_005a_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_0062_2;
				}
			}
			{
				goto IL_0067_2;
			}

IL_0060_2:
			{
				goto IL_00d1_2;
			}

IL_0062_2:
			{
				goto IL_016e_2;
			}

IL_0067_2:
			{
				goto IL_0126_2;
			}

IL_006d_2:
			{
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_9 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)__this->___U3CsumU3E5__2_6;
				__this->___U3CU3Es__6_10 = L_9;
				Func_3_tE135AFB66CDB73C25CDE9CDD97913EE0CF6337D7* L_10 = (Func_3_tE135AFB66CDB73C25CDE9CDD97913EE0CF6337D7*)__this->___selector_3;
				RuntimeObject* L_11 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_11);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_11, (Il2CppFullySharedGenericAny*)L_12);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_13 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_10);
				UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3 L_14;
				L_14 = InvokerFuncInvoker2< UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_12: *(void**)L_12), L_13);
				V_3 = L_14;
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_15;
				L_15 = UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_inline((&V_3), UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_RuntimeMethod_var);
				V_2 = L_15;
				bool L_16;
				L_16 = Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_inline((&V_2), Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_00ed_2;
				}
			}
			{
				int32_t L_17 = 0;
				V_0 = L_17;
				__this->___U3CU3E1__state_0 = L_17;
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_18 = V_2;
				__this->___U3CU3Eu__1_13 = L_18;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_19 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8*, U3CAverageAwaitWithCancellationAsyncU3Ed__19_1_t6C66A45139BAB01BADEBFE4E9DF12F84C0B643CA**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_19, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_02c3;
			}

IL_00d1_2:
			{
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_20 = (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8)__this->___U3CU3Eu__1_13;
				V_2 = L_20;
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* L_21 = (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8*)(&__this->___U3CU3Eu__1_13);
				il2cpp_codegen_initobj(L_21, sizeof(Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8));
				int32_t L_22 = (-1);
				V_0 = L_22;
				__this->___U3CU3E1__state_0 = L_22;
			}

IL_00ed_2:
			{
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_23;
				L_23 = Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_inline((&V_2), Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_23;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_24 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)__this->___U3CU3Es__6_10;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_25 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)__this->___U3CU3Es__7_11;
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_26;
				L_26 = Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7(L_24, L_25, NULL);
				__this->___U3CsumU3E5__2_6 = L_26;
				int64_t L_27 = (int64_t)__this->___U3CcountU3E5__1_5;
				V_5 = L_27;
				int64_t L_28 = V_5;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_28, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1_5 = ((int64_t)il2cpp_codegen_add(L_28, ((int64_t)1)));
			}

IL_0126_2:
			{
				RuntimeObject* L_29 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_29);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_30;
				L_30 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_29);
				V_8 = L_30;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31;
				L_31 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_31;
				bool L_32;
				L_32 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_32)
				{
					goto IL_018b_2;
				}
			}
			{
				int32_t L_33 = 1;
				V_0 = L_33;
				__this->___U3CU3E1__state_0 = L_33;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_34 = V_7;
				__this->___U3CU3Eu__2_14 = L_34;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_35 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAwaitWithCancellationAsyncU3Ed__19_1_t6C66A45139BAB01BADEBFE4E9DF12F84C0B643CA**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_35, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_02c3;
			}

IL_016e_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_36 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_14;
				V_7 = L_36;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_37 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_14);
				il2cpp_codegen_initobj(L_37, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_38 = (-1);
				V_0 = L_38;
				__this->___U3CU3E1__state_0 = L_38;
			}

IL_018b_2:
			{
				bool L_39;
				L_39 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_39;
				bool L_40 = (bool)__this->___U3CU3Es__8_12;
				V_6 = L_40;
				bool L_41 = V_6;
				if (L_41)
				{
					goto IL_006d_2;
				}
			}
			{
				goto IL_01b6_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01aa_1;
			}
			throw e;
		}

CATCH_01aa_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_42 = V_9;
			__this->___U3CU3Es__4_8 = L_42;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)L_42);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01b6_1;
		}

IL_01b6_1:
		{
			RuntimeObject* L_43 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_43) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_44 = V_10;
			if (!L_44)
			{
				goto IL_0235_1;
			}
		}
		{
			RuntimeObject* L_45 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			NullCheck((RuntimeObject*)L_45);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_46;
			L_46 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_45);
			V_12 = L_46;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47;
			L_47 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_47;
			bool L_48;
			L_48 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_48)
			{
				goto IL_022c_1;
			}
		}
		{
			int32_t L_49 = 2;
			V_0 = L_49;
			__this->___U3CU3E1__state_0 = L_49;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50 = V_11;
			__this->___U3CU3Eu__3_15 = L_50;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_15))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_51 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAwaitWithCancellationAsyncU3Ed__19_1_t6C66A45139BAB01BADEBFE4E9DF12F84C0B643CA**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_51, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_02c3;
		}

IL_020f_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_52 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_15;
			V_11 = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_53 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_15);
			il2cpp_codegen_initobj(L_53, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_54 = (-1);
			V_0 = L_54;
			__this->___U3CU3E1__state_0 = L_54;
		}

IL_022c_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_0235_1:
		{
			RuntimeObject* L_55 = (RuntimeObject*)__this->___U3CU3Es__4_8;
			V_9 = L_55;
			RuntimeObject* L_56 = V_9;
			if (!L_56)
			{
				goto IL_025f_1;
			}
		}
		{
			RuntimeObject* L_57 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_57, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_58 = V_13;
			if (L_58)
			{
				goto IL_0252_1;
			}
		}
		{
			RuntimeObject* L_59 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_59, method);
		}

IL_0252_1:
		{
			Exception_t* L_60 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_61;
			L_61 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_60, NULL);
			NullCheck(L_61);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_61, NULL);
		}

IL_025f_1:
		{
			int32_t L_62 = (int32_t)__this->___U3CU3Es__5_9;
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_63 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)__this->___U3CsumU3E5__2_6;
			int64_t L_64 = (int64_t)__this->___U3CcountU3E5__1_5;
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_65;
			L_65 = Decimal_op_Implicit_m8F9A38760D01B23E6DFF77EA760CCE5111F3656D(L_64, NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_66;
			L_66 = Decimal_op_Division_mA0BD25988CA8010A3F8EA2F6A534F9F2D812D2AC(L_63, L_65, NULL);
			V_1 = L_66;
			goto IL_02a7;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0286;
		}
		throw e;
	}

CATCH_0286:
	{
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_67 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_68 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_inline(L_67, L_68, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02c3;
	}

IL_02a7:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_69 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_70 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_inline(L_69, L_70, AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_RuntimeMethod_var);
	}

IL_02c3:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__19_1_SetStateMachine_m8ACE42BA9528DE5763D46CF3EA178B710A681ED3_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__19_1_t6C66A45139BAB01BADEBFE4E9DF12F84C0B643CA* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__23_1__ctor_m84660FAC32B82B12CD01CFE254069FCA9451F0EB_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__23_1_tE4D1E229AF2A45D5A6DF95DFCD6AFDD6AF3BE456* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__23_1_MoveNext_mA9C53A4C1F64A03797EAF2D9EDF1A3625BD23608_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__23_1_tE4D1E229AF2A45D5A6DF95DFCD6AFDD6AF3BE456* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tD27C0E643FF51E37A90C777E398950A92D34B9A8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_tD27C0E643FF51E37A90C777E398950A92D34B9A8);
	int32_t V_0 = 0;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CAverageAwaitWithCancellationAsyncU3Ed__23_1_tE4D1E229AF2A45D5A6DF95DFCD6AFDD6AF3BE456* V_4 = NULL;
	bool V_5 = false;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int64_t V_9 = 0;
	bool V_10 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_12;
	memset((&V_12), 0, sizeof(V_12));
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_15;
	memset((&V_15), 0, sizeof(V_15));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Exception_t* V_17 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	U3CAverageAwaitWithCancellationAsyncU3Ed__23_1_tE4D1E229AF2A45D5A6DF95DFCD6AFDD6AF3BE456* G_B22_0 = NULL;
	U3CAverageAwaitWithCancellationAsyncU3Ed__23_1_tE4D1E229AF2A45D5A6DF95DFCD6AFDD6AF3BE456* G_B21_0 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B23_0;
	memset((&G_B23_0), 0, sizeof(G_B23_0));
	U3CAverageAwaitWithCancellationAsyncU3Ed__23_1_tE4D1E229AF2A45D5A6DF95DFCD6AFDD6AF3BE456* G_B23_1 = NULL;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0054_1;
		}

IL_0015_1:
		{
			goto IL_0262_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1_5 = ((int64_t)0);
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_3;
			memset((&L_3), 0, sizeof(L_3));
			Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_3), 0, Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
			__this->___U3CsumU3E5__2_6 = L_3;
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__3_7 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)L_6);
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			__this->___U3CU3Es__5_9 = 0;
		}

IL_0054_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0060_2;
				}
			}
			{
				goto IL_005a_2;
			}

IL_005a_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_0062_2;
				}
			}
			{
				goto IL_0067_2;
			}

IL_0060_2:
			{
				goto IL_00c4_2;
			}

IL_0062_2:
			{
				goto IL_01c1_2;
			}

IL_0067_2:
			{
				goto IL_0179_2;
			}

IL_006d_2:
			{
				Func_3_tA0DEFAEF785E5E0D32E2CABA4CBDB7F9D34C2B8D* L_9 = (Func_3_tA0DEFAEF785E5E0D32E2CABA4CBDB7F9D34C2B8D*)__this->___selector_3;
				RuntimeObject* L_10 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_9);
				UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05 L_13;
				L_13 = InvokerFuncInvoker2< UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11), L_12);
				V_3 = L_13;
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_14;
				L_14 = UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_inline((&V_3), UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_RuntimeMethod_var);
				V_2 = L_14;
				bool L_15;
				L_15 = Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_inline((&V_2), Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00e0_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state_0 = L_16;
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_17 = V_2;
				__this->___U3CU3Eu__1_13 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_18 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9*, U3CAverageAwaitWithCancellationAsyncU3Ed__23_1_tE4D1E229AF2A45D5A6DF95DFCD6AFDD6AF3BE456**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_18, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0319;
			}

IL_00c4_2:
			{
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_19 = (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9)__this->___U3CU3Eu__1_13;
				V_2 = L_19;
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* L_20 = (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9*)(&__this->___U3CU3Eu__1_13);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state_0 = L_21;
			}

IL_00e0_2:
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_22;
				L_22 = Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_inline((&V_2), Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_22;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_23 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28)__this->___U3CU3Es__7_11;
				__this->___U3CvU3E5__6_10 = L_23;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_24 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CU3Es__7_11);
				il2cpp_codegen_initobj(L_24, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_25 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CvU3E5__6_10);
				bool L_26;
				L_26 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_25, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				V_5 = L_26;
				bool L_27 = V_5;
				if (!L_27)
				{
					goto IL_016c_2;
				}
			}
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_28 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28)__this->___U3CsumU3E5__2_6;
				V_6 = L_28;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_29 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CvU3E5__6_10);
				int32_t L_30;
				L_30 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA(L_29, Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
				V_7 = L_30;
				bool L_31;
				L_31 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_6), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				if (L_31)
				{
					G_B22_0 = __this;
					goto IL_0143_2;
				}
				G_B21_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_32 = V_8;
				G_B23_0 = L_32;
				G_B23_1 = G_B21_0;
				goto IL_0152_2;
			}

IL_0143_2:
			{
				int32_t L_33;
				L_33 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_6), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
				int32_t L_34 = V_7;
				if (((int64_t)L_33 + (int64_t)L_34 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_33 + (int64_t)L_34 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_35;
				memset((&L_35), 0, sizeof(L_35));
				Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_35), ((int32_t)il2cpp_codegen_add(L_33, L_34)), Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
				G_B23_0 = L_35;
				G_B23_1 = G_B22_0;
			}

IL_0152_2:
			{
				NullCheck(G_B23_1);
				G_B23_1->___U3CsumU3E5__2_6 = G_B23_0;
				int64_t L_36 = (int64_t)__this->___U3CcountU3E5__1_5;
				V_9 = L_36;
				int64_t L_37 = V_9;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_37, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1_5 = ((int64_t)il2cpp_codegen_add(L_37, ((int64_t)1)));
			}

IL_016c_2:
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_38 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CvU3E5__6_10);
				il2cpp_codegen_initobj(L_38, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
			}

IL_0179_2:
			{
				RuntimeObject* L_39 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_39);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_40;
				L_40 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_39);
				V_12 = L_40;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_41;
				L_41 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_12), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_11 = L_41;
				bool L_42;
				L_42 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_11), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_42)
				{
					goto IL_01de_2;
				}
			}
			{
				int32_t L_43 = 1;
				V_0 = L_43;
				__this->___U3CU3E1__state_0 = L_43;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_44 = V_11;
				__this->___U3CU3Eu__2_14 = L_44;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_45 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAwaitWithCancellationAsyncU3Ed__23_1_tE4D1E229AF2A45D5A6DF95DFCD6AFDD6AF3BE456**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_45, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0319;
			}

IL_01c1_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_46 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_14;
				V_11 = L_46;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_47 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_14);
				il2cpp_codegen_initobj(L_47, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_48 = (-1);
				V_0 = L_48;
				__this->___U3CU3E1__state_0 = L_48;
			}

IL_01de_2:
			{
				bool L_49;
				L_49 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_11), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_49;
				bool L_50 = (bool)__this->___U3CU3Es__8_12;
				V_10 = L_50;
				bool L_51 = V_10;
				if (L_51)
				{
					goto IL_006d_2;
				}
			}
			{
				goto IL_0209_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01fd_1;
			}
			throw e;
		}

CATCH_01fd_1:
		{
			V_13 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_52 = V_13;
			__this->___U3CU3Es__4_8 = L_52;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)L_52);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0209_1;
		}

IL_0209_1:
		{
			RuntimeObject* L_53 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			V_14 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_53) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_54 = V_14;
			if (!L_54)
			{
				goto IL_0288_1;
			}
		}
		{
			RuntimeObject* L_55 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			NullCheck((RuntimeObject*)L_55);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_56;
			L_56 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_55);
			V_16 = L_56;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_57;
			L_57 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_16), NULL);
			V_15 = L_57;
			bool L_58;
			L_58 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_15), NULL);
			if (L_58)
			{
				goto IL_027f_1;
			}
		}
		{
			int32_t L_59 = 2;
			V_0 = L_59;
			__this->___U3CU3E1__state_0 = L_59;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_60 = V_15;
			__this->___U3CU3Eu__3_15 = L_60;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_15))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_61 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAwaitWithCancellationAsyncU3Ed__23_1_tE4D1E229AF2A45D5A6DF95DFCD6AFDD6AF3BE456**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_61, (&V_15), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0319;
		}

IL_0262_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_62 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_15;
			V_15 = L_62;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_63 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_15);
			il2cpp_codegen_initobj(L_63, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_64 = (-1);
			V_0 = L_64;
			__this->___U3CU3E1__state_0 = L_64;
		}

IL_027f_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_15), NULL);
		}

IL_0288_1:
		{
			RuntimeObject* L_65 = (RuntimeObject*)__this->___U3CU3Es__4_8;
			V_13 = L_65;
			RuntimeObject* L_66 = V_13;
			if (!L_66)
			{
				goto IL_02b2_1;
			}
		}
		{
			RuntimeObject* L_67 = V_13;
			V_17 = ((Exception_t*)IsInstClass((RuntimeObject*)L_67, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_68 = V_17;
			if (L_68)
			{
				goto IL_02a5_1;
			}
		}
		{
			RuntimeObject* L_69 = V_13;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_69, method);
		}

IL_02a5_1:
		{
			Exception_t* L_70 = V_17;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_71;
			L_71 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_70, NULL);
			NullCheck(L_71);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_71, NULL);
		}

IL_02b2_1:
		{
			int32_t L_72 = (int32_t)__this->___U3CU3Es__5_9;
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_73 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CsumU3E5__2_6);
			int32_t L_74;
			L_74 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA(L_73, Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
			int64_t L_75 = (int64_t)__this->___U3CcountU3E5__1_5;
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_76;
			memset((&L_76), 0, sizeof(L_76));
			Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_76), ((double)(((double)L_74)/((double)L_75))), Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
			V_1 = L_76;
			goto IL_02fd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02dc;
		}
		throw e;
	}

CATCH_02dc:
	{
		V_17 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_77 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_78 = V_17;
		AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_inline(L_77, L_78, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0319;
	}

IL_02fd:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_79 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_80 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_inline(L_79, L_80, AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
	}

IL_0319:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__23_1_SetStateMachine_mC12637E12304FE695414EE2A933C86D7B463CA25_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__23_1_tE4D1E229AF2A45D5A6DF95DFCD6AFDD6AF3BE456* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__27_1__ctor_mECB92A057C7E2327443B89B55884FDA13644893F_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__27_1_t3ED24D2012614088A57E12CF0065332EF3C04F7E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__27_1_MoveNext_mED1F1A83358199C05C9B1D606D52ECC4345CF178_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__27_1_t3ED24D2012614088A57E12CF0065332EF3C04F7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t42B5ED6A04C7066207F316617F5B3D5FC1956022 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t42B5ED6A04C7066207F316617F5B3D5FC1956022);
	int32_t V_0 = 0;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CAverageAwaitWithCancellationAsyncU3Ed__27_1_t3ED24D2012614088A57E12CF0065332EF3C04F7E* V_4 = NULL;
	bool V_5 = false;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int64_t V_7 = 0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_10;
	memset((&V_10), 0, sizeof(V_10));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_11;
	memset((&V_11), 0, sizeof(V_11));
	RuntimeObject* V_12 = NULL;
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Exception_t* V_16 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	U3CAverageAwaitWithCancellationAsyncU3Ed__27_1_t3ED24D2012614088A57E12CF0065332EF3C04F7E* G_B22_0 = NULL;
	U3CAverageAwaitWithCancellationAsyncU3Ed__27_1_t3ED24D2012614088A57E12CF0065332EF3C04F7E* G_B21_0 = NULL;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 G_B23_0;
	memset((&G_B23_0), 0, sizeof(G_B23_0));
	U3CAverageAwaitWithCancellationAsyncU3Ed__27_1_t3ED24D2012614088A57E12CF0065332EF3C04F7E* G_B23_1 = NULL;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0055_1;
		}

IL_0015_1:
		{
			goto IL_0263_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1_5 = ((int64_t)0);
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_3;
			memset((&L_3), 0, sizeof(L_3));
			Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_3), ((int64_t)0), Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
			__this->___U3CsumU3E5__2_6 = L_3;
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__3_7 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)L_6);
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			__this->___U3CU3Es__5_9 = 0;
		}

IL_0055_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0061_2;
				}
			}
			{
				goto IL_005b_2;
			}

IL_005b_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_0063_2;
				}
			}
			{
				goto IL_0068_2;
			}

IL_0061_2:
			{
				goto IL_00c5_2;
			}

IL_0063_2:
			{
				goto IL_01c2_2;
			}

IL_0068_2:
			{
				goto IL_017a_2;
			}

IL_006e_2:
			{
				Func_3_t4111B7EAAEBCF4004223B4E554711FE862E5C3B2* L_9 = (Func_3_t4111B7EAAEBCF4004223B4E554711FE862E5C3B2*)__this->___selector_3;
				RuntimeObject* L_10 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_9);
				UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C L_13;
				L_13 = InvokerFuncInvoker2< UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11), L_12);
				V_3 = L_13;
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_14;
				L_14 = UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_inline((&V_3), UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_RuntimeMethod_var);
				V_2 = L_14;
				bool L_15;
				L_15 = Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_inline((&V_2), Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00e1_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state_0 = L_16;
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_17 = V_2;
				__this->___U3CU3Eu__1_13 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_18 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB*, U3CAverageAwaitWithCancellationAsyncU3Ed__27_1_t3ED24D2012614088A57E12CF0065332EF3C04F7E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_18, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_031a;
			}

IL_00c5_2:
			{
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_19 = (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB)__this->___U3CU3Eu__1_13;
				V_2 = L_19;
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* L_20 = (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB*)(&__this->___U3CU3Eu__1_13);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state_0 = L_21;
			}

IL_00e1_2:
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_22;
				L_22 = Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_inline((&V_2), Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_22;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_23 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17)__this->___U3CU3Es__7_11;
				__this->___U3CvU3E5__6_10 = L_23;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_24 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CU3Es__7_11);
				il2cpp_codegen_initobj(L_24, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_25 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CvU3E5__6_10);
				bool L_26;
				L_26 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline(L_25, Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
				V_5 = L_26;
				bool L_27 = V_5;
				if (!L_27)
				{
					goto IL_016d_2;
				}
			}
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_28 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17)__this->___U3CsumU3E5__2_6;
				V_6 = L_28;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_29 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CvU3E5__6_10);
				int64_t L_30;
				L_30 = Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC(L_29, Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
				V_7 = L_30;
				bool L_31;
				L_31 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&V_6), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
				if (L_31)
				{
					G_B22_0 = __this;
					goto IL_0144_2;
				}
				G_B21_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_32 = V_8;
				G_B23_0 = L_32;
				G_B23_1 = G_B21_0;
				goto IL_0153_2;
			}

IL_0144_2:
			{
				int64_t L_33;
				L_33 = Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_inline((&V_6), Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
				int64_t L_34 = V_7;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_33, (int64_t)L_34))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_35;
				memset((&L_35), 0, sizeof(L_35));
				Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_35), ((int64_t)il2cpp_codegen_add(L_33, L_34)), Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
				G_B23_0 = L_35;
				G_B23_1 = G_B22_0;
			}

IL_0153_2:
			{
				NullCheck(G_B23_1);
				G_B23_1->___U3CsumU3E5__2_6 = G_B23_0;
				int64_t L_36 = (int64_t)__this->___U3CcountU3E5__1_5;
				V_7 = L_36;
				int64_t L_37 = V_7;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_37, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1_5 = ((int64_t)il2cpp_codegen_add(L_37, ((int64_t)1)));
			}

IL_016d_2:
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_38 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CvU3E5__6_10);
				il2cpp_codegen_initobj(L_38, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
			}

IL_017a_2:
			{
				RuntimeObject* L_39 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_39);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_40;
				L_40 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_39);
				V_11 = L_40;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_41;
				L_41 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_11), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_10 = L_41;
				bool L_42;
				L_42 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_10), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_42)
				{
					goto IL_01df_2;
				}
			}
			{
				int32_t L_43 = 1;
				V_0 = L_43;
				__this->___U3CU3E1__state_0 = L_43;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_44 = V_10;
				__this->___U3CU3Eu__2_14 = L_44;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_45 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAwaitWithCancellationAsyncU3Ed__27_1_t3ED24D2012614088A57E12CF0065332EF3C04F7E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_45, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_031a;
			}

IL_01c2_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_46 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_14;
				V_10 = L_46;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_47 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_14);
				il2cpp_codegen_initobj(L_47, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_48 = (-1);
				V_0 = L_48;
				__this->___U3CU3E1__state_0 = L_48;
			}

IL_01df_2:
			{
				bool L_49;
				L_49 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_10), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_49;
				bool L_50 = (bool)__this->___U3CU3Es__8_12;
				V_9 = L_50;
				bool L_51 = V_9;
				if (L_51)
				{
					goto IL_006e_2;
				}
			}
			{
				goto IL_020a_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01fe_1;
			}
			throw e;
		}

CATCH_01fe_1:
		{
			V_12 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_52 = V_12;
			__this->___U3CU3Es__4_8 = L_52;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)L_52);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_020a_1;
		}

IL_020a_1:
		{
			RuntimeObject* L_53 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_53) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_54 = V_13;
			if (!L_54)
			{
				goto IL_0289_1;
			}
		}
		{
			RuntimeObject* L_55 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			NullCheck((RuntimeObject*)L_55);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_56;
			L_56 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_55);
			V_15 = L_56;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_57;
			L_57 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_15), NULL);
			V_14 = L_57;
			bool L_58;
			L_58 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_58)
			{
				goto IL_0280_1;
			}
		}
		{
			int32_t L_59 = 2;
			V_0 = L_59;
			__this->___U3CU3E1__state_0 = L_59;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_60 = V_14;
			__this->___U3CU3Eu__3_15 = L_60;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_15))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_61 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAwaitWithCancellationAsyncU3Ed__27_1_t3ED24D2012614088A57E12CF0065332EF3C04F7E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_61, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_031a;
		}

IL_0263_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_62 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_15;
			V_14 = L_62;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_63 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_15);
			il2cpp_codegen_initobj(L_63, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_64 = (-1);
			V_0 = L_64;
			__this->___U3CU3E1__state_0 = L_64;
		}

IL_0280_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_0289_1:
		{
			RuntimeObject* L_65 = (RuntimeObject*)__this->___U3CU3Es__4_8;
			V_12 = L_65;
			RuntimeObject* L_66 = V_12;
			if (!L_66)
			{
				goto IL_02b3_1;
			}
		}
		{
			RuntimeObject* L_67 = V_12;
			V_16 = ((Exception_t*)IsInstClass((RuntimeObject*)L_67, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_68 = V_16;
			if (L_68)
			{
				goto IL_02a6_1;
			}
		}
		{
			RuntimeObject* L_69 = V_12;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_69, method);
		}

IL_02a6_1:
		{
			Exception_t* L_70 = V_16;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_71;
			L_71 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_70, NULL);
			NullCheck(L_71);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_71, NULL);
		}

IL_02b3_1:
		{
			int32_t L_72 = (int32_t)__this->___U3CU3Es__5_9;
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_73 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CsumU3E5__2_6);
			int64_t L_74;
			L_74 = Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC(L_73, Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
			int64_t L_75 = (int64_t)__this->___U3CcountU3E5__1_5;
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_76;
			memset((&L_76), 0, sizeof(L_76));
			Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_76), ((double)(((double)L_74)/((double)L_75))), Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
			V_1 = L_76;
			goto IL_02fe;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02dd;
		}
		throw e;
	}

CATCH_02dd:
	{
		V_16 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_77 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_78 = V_16;
		AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_inline(L_77, L_78, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_031a;
	}

IL_02fe:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_79 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_80 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_inline(L_79, L_80, AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
	}

IL_031a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__27_1_SetStateMachine_mF364423084A10B1C5F3B6B7F7A6AAB9FB6F7CDBB_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__27_1_t3ED24D2012614088A57E12CF0065332EF3C04F7E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__31_1__ctor_m0BD0905052A7AD6165FBEF5E38E974720B629956_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__31_1_t5EC5BBE56145450D82111D1EACF491C5DE92DE4F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__31_1_MoveNext_m522AB6D8E0D311FD653D1F4D9D7221934C566C05_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__31_1_t5EC5BBE56145450D82111D1EACF491C5DE92DE4F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t61FB21B079579A99850B2B34C573BC0E3C5482CF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t61FB21B079579A99850B2B34C573BC0E3C5482CF);
	int32_t V_0 = 0;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CAverageAwaitWithCancellationAsyncU3Ed__31_1_t5EC5BBE56145450D82111D1EACF491C5DE92DE4F* V_4 = NULL;
	bool V_5 = false;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int64_t V_9 = 0;
	bool V_10 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_12;
	memset((&V_12), 0, sizeof(V_12));
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_15;
	memset((&V_15), 0, sizeof(V_15));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Exception_t* V_17 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	U3CAverageAwaitWithCancellationAsyncU3Ed__31_1_t5EC5BBE56145450D82111D1EACF491C5DE92DE4F* G_B22_0 = NULL;
	U3CAverageAwaitWithCancellationAsyncU3Ed__31_1_t5EC5BBE56145450D82111D1EACF491C5DE92DE4F* G_B21_0 = NULL;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 G_B23_0;
	memset((&G_B23_0), 0, sizeof(G_B23_0));
	U3CAverageAwaitWithCancellationAsyncU3Ed__31_1_t5EC5BBE56145450D82111D1EACF491C5DE92DE4F* G_B23_1 = NULL;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 G_B43_0;
	memset((&G_B43_0), 0, sizeof(G_B43_0));
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0058_1;
		}

IL_0015_1:
		{
			goto IL_0266_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1_5 = ((int64_t)0);
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_3;
			memset((&L_3), 0, sizeof(L_3));
			Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_3), (0.0f), Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
			__this->___U3CsumU3E5__2_6 = L_3;
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__3_7 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)L_6);
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			__this->___U3CU3Es__5_9 = 0;
		}

IL_0058_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0064_2;
				}
			}
			{
				goto IL_005e_2;
			}

IL_005e_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_0066_2;
				}
			}
			{
				goto IL_006b_2;
			}

IL_0064_2:
			{
				goto IL_00c8_2;
			}

IL_0066_2:
			{
				goto IL_01c5_2;
			}

IL_006b_2:
			{
				goto IL_017d_2;
			}

IL_0071_2:
			{
				Func_3_t5604379C942DED2B342DEED029BC1AB35C5A06A1* L_9 = (Func_3_t5604379C942DED2B342DEED029BC1AB35C5A06A1*)__this->___selector_3;
				RuntimeObject* L_10 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_9);
				UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46 L_13;
				L_13 = InvokerFuncInvoker2< UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11), L_12);
				V_3 = L_13;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_14;
				L_14 = UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_inline((&V_3), UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_RuntimeMethod_var);
				V_2 = L_14;
				bool L_15;
				L_15 = Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_inline((&V_2), Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00e4_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state_0 = L_16;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_17 = V_2;
				__this->___U3CU3Eu__1_13 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_18 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*, U3CAverageAwaitWithCancellationAsyncU3Ed__31_1_t5EC5BBE56145450D82111D1EACF491C5DE92DE4F**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_18, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0348;
			}

IL_00c8_2:
			{
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_19 = (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91)__this->___U3CU3Eu__1_13;
				V_2 = L_19;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* L_20 = (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*)(&__this->___U3CU3Eu__1_13);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state_0 = L_21;
			}

IL_00e4_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_22;
				L_22 = Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_inline((&V_2), Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_22;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_23 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75)__this->___U3CU3Es__7_11;
				__this->___U3CvU3E5__6_10 = L_23;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_24 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CU3Es__7_11);
				il2cpp_codegen_initobj(L_24, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_25 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CvU3E5__6_10);
				bool L_26;
				L_26 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline(L_25, Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				V_5 = L_26;
				bool L_27 = V_5;
				if (!L_27)
				{
					goto IL_0170_2;
				}
			}
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_28 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75)__this->___U3CsumU3E5__2_6;
				V_6 = L_28;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_29 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CvU3E5__6_10);
				float L_30;
				L_30 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA(L_29, Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
				V_7 = L_30;
				bool L_31;
				L_31 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&V_6), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				if (L_31)
				{
					G_B22_0 = __this;
					goto IL_0147_2;
				}
				G_B21_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_32 = V_8;
				G_B23_0 = L_32;
				G_B23_1 = G_B21_0;
				goto IL_0156_2;
			}

IL_0147_2:
			{
				float L_33;
				L_33 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline((&V_6), Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
				float L_34 = V_7;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_35;
				memset((&L_35), 0, sizeof(L_35));
				Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_35), ((float)il2cpp_codegen_add(L_33, L_34)), Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
				G_B23_0 = L_35;
				G_B23_1 = G_B22_0;
			}

IL_0156_2:
			{
				NullCheck(G_B23_1);
				G_B23_1->___U3CsumU3E5__2_6 = G_B23_0;
				int64_t L_36 = (int64_t)__this->___U3CcountU3E5__1_5;
				V_9 = L_36;
				int64_t L_37 = V_9;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_37, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1_5 = ((int64_t)il2cpp_codegen_add(L_37, ((int64_t)1)));
			}

IL_0170_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_38 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CvU3E5__6_10);
				il2cpp_codegen_initobj(L_38, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
			}

IL_017d_2:
			{
				RuntimeObject* L_39 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_39);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_40;
				L_40 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_39);
				V_12 = L_40;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_41;
				L_41 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_12), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_11 = L_41;
				bool L_42;
				L_42 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_11), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_42)
				{
					goto IL_01e2_2;
				}
			}
			{
				int32_t L_43 = 1;
				V_0 = L_43;
				__this->___U3CU3E1__state_0 = L_43;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_44 = V_11;
				__this->___U3CU3Eu__2_14 = L_44;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_45 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAwaitWithCancellationAsyncU3Ed__31_1_t5EC5BBE56145450D82111D1EACF491C5DE92DE4F**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_45, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0348;
			}

IL_01c5_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_46 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_14;
				V_11 = L_46;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_47 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_14);
				il2cpp_codegen_initobj(L_47, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_48 = (-1);
				V_0 = L_48;
				__this->___U3CU3E1__state_0 = L_48;
			}

IL_01e2_2:
			{
				bool L_49;
				L_49 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_11), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_49;
				bool L_50 = (bool)__this->___U3CU3Es__8_12;
				V_10 = L_50;
				bool L_51 = V_10;
				if (L_51)
				{
					goto IL_0071_2;
				}
			}
			{
				goto IL_020d_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0201_1;
			}
			throw e;
		}

CATCH_0201_1:
		{
			V_13 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_52 = V_13;
			__this->___U3CU3Es__4_8 = L_52;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)L_52);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_020d_1;
		}

IL_020d_1:
		{
			RuntimeObject* L_53 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			V_14 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_53) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_54 = V_14;
			if (!L_54)
			{
				goto IL_028c_1;
			}
		}
		{
			RuntimeObject* L_55 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			NullCheck((RuntimeObject*)L_55);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_56;
			L_56 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_55);
			V_16 = L_56;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_57;
			L_57 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_16), NULL);
			V_15 = L_57;
			bool L_58;
			L_58 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_15), NULL);
			if (L_58)
			{
				goto IL_0283_1;
			}
		}
		{
			int32_t L_59 = 2;
			V_0 = L_59;
			__this->___U3CU3E1__state_0 = L_59;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_60 = V_15;
			__this->___U3CU3Eu__3_15 = L_60;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_15))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_61 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAwaitWithCancellationAsyncU3Ed__31_1_t5EC5BBE56145450D82111D1EACF491C5DE92DE4F**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_61, (&V_15), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0348;
		}

IL_0266_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_62 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_15;
			V_15 = L_62;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_63 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_15);
			il2cpp_codegen_initobj(L_63, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_64 = (-1);
			V_0 = L_64;
			__this->___U3CU3E1__state_0 = L_64;
		}

IL_0283_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_15), NULL);
		}

IL_028c_1:
		{
			RuntimeObject* L_65 = (RuntimeObject*)__this->___U3CU3Es__4_8;
			V_13 = L_65;
			RuntimeObject* L_66 = V_13;
			if (!L_66)
			{
				goto IL_02b6_1;
			}
		}
		{
			RuntimeObject* L_67 = V_13;
			V_17 = ((Exception_t*)IsInstClass((RuntimeObject*)L_67, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_68 = V_17;
			if (L_68)
			{
				goto IL_02a9_1;
			}
		}
		{
			RuntimeObject* L_69 = V_13;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_69, method);
		}

IL_02a9_1:
		{
			Exception_t* L_70 = V_17;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_71;
			L_71 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_70, NULL);
			NullCheck(L_71);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_71, NULL);
		}

IL_02b6_1:
		{
			int32_t L_72 = (int32_t)__this->___U3CU3Es__5_9;
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_73 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75)__this->___U3CsumU3E5__2_6;
			V_6 = L_73;
			int64_t L_74 = (int64_t)__this->___U3CcountU3E5__1_5;
			V_7 = ((float)L_74);
			bool L_75;
			L_75 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&V_6), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
			if (L_75)
			{
				goto IL_02ea_1;
			}
		}
		{
			il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_76 = V_8;
			G_B43_0 = L_76;
			goto IL_02f9_1;
		}

IL_02ea_1:
		{
			float L_77;
			L_77 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline((&V_6), Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
			float L_78 = V_7;
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_79;
			memset((&L_79), 0, sizeof(L_79));
			Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_79), ((float)(L_77/L_78)), Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
			G_B43_0 = L_79;
		}

IL_02f9_1:
		{
			V_8 = G_B43_0;
			float L_80;
			L_80 = Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA((&V_8), Nullable_1_get_Value_mE3B978271FFA8D9DEE17BFB34320A3C67BE148EA_RuntimeMethod_var);
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_81;
			memset((&L_81), 0, sizeof(L_81));
			Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_81), ((float)L_80), Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
			V_1 = L_81;
			goto IL_032c;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_030b;
		}
		throw e;
	}

CATCH_030b:
	{
		V_17 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_82 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_83 = V_17;
		AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_inline(L_82, L_83, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0348;
	}

IL_032c:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_84 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_85 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_inline(L_84, L_85, AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_RuntimeMethod_var);
	}

IL_0348:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__31_1_SetStateMachine_m2584BBACB5410B8B00B2E2A84AECA2ADB407BA63_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__31_1_t5EC5BBE56145450D82111D1EACF491C5DE92DE4F* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__35_1__ctor_mE0C6C3A4D708EBB7491CBD246D844DF09CB1C111_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__35_1_t01F222573BFC23A5A95113AD81969CB98966F508* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__35_1_MoveNext_m058E0FC377A08AC3988A6166B4F9DEC9602CDE85_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__35_1_t01F222573BFC23A5A95113AD81969CB98966F508* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tFEE51783AC0D3C5E2535AD2A388264E218B191DE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_tFEE51783AC0D3C5E2535AD2A388264E218B191DE);
	int32_t V_0 = 0;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CAverageAwaitWithCancellationAsyncU3Ed__35_1_t01F222573BFC23A5A95113AD81969CB98966F508* V_4 = NULL;
	bool V_5 = false;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_6;
	memset((&V_6), 0, sizeof(V_6));
	double V_7 = 0.0;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int64_t V_9 = 0;
	bool V_10 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_12;
	memset((&V_12), 0, sizeof(V_12));
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_15;
	memset((&V_15), 0, sizeof(V_15));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Exception_t* V_17 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	U3CAverageAwaitWithCancellationAsyncU3Ed__35_1_t01F222573BFC23A5A95113AD81969CB98966F508* G_B22_0 = NULL;
	U3CAverageAwaitWithCancellationAsyncU3Ed__35_1_t01F222573BFC23A5A95113AD81969CB98966F508* G_B21_0 = NULL;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 G_B23_0;
	memset((&G_B23_0), 0, sizeof(G_B23_0));
	U3CAverageAwaitWithCancellationAsyncU3Ed__35_1_t01F222573BFC23A5A95113AD81969CB98966F508* G_B23_1 = NULL;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 G_B43_0;
	memset((&G_B43_0), 0, sizeof(G_B43_0));
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_005c_1;
		}

IL_0015_1:
		{
			goto IL_026a_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1_5 = ((int64_t)0);
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_3;
			memset((&L_3), 0, sizeof(L_3));
			Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_3), (0.0), Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
			__this->___U3CsumU3E5__2_6 = L_3;
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__3_7 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)L_6);
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			__this->___U3CU3Es__5_9 = 0;
		}

IL_005c_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0068_2;
				}
			}
			{
				goto IL_0062_2;
			}

IL_0062_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_006a_2;
				}
			}
			{
				goto IL_006f_2;
			}

IL_0068_2:
			{
				goto IL_00cc_2;
			}

IL_006a_2:
			{
				goto IL_01c9_2;
			}

IL_006f_2:
			{
				goto IL_0181_2;
			}

IL_0075_2:
			{
				Func_3_tD24255148664E4908FBCB566B787F36A4988A2BB* L_9 = (Func_3_tD24255148664E4908FBCB566B787F36A4988A2BB*)__this->___selector_3;
				RuntimeObject* L_10 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_9);
				UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E L_13;
				L_13 = InvokerFuncInvoker2< UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11), L_12);
				V_3 = L_13;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_14;
				L_14 = UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_inline((&V_3), UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_RuntimeMethod_var);
				V_2 = L_14;
				bool L_15;
				L_15 = Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_inline((&V_2), Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00e8_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state_0 = L_16;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_17 = V_2;
				__this->___U3CU3Eu__1_13 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_18 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0*, U3CAverageAwaitWithCancellationAsyncU3Ed__35_1_t01F222573BFC23A5A95113AD81969CB98966F508**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_18, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_033d;
			}

IL_00cc_2:
			{
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_19 = (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0)__this->___U3CU3Eu__1_13;
				V_2 = L_19;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* L_20 = (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0*)(&__this->___U3CU3Eu__1_13);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state_0 = L_21;
			}

IL_00e8_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_22;
				L_22 = Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_inline((&V_2), Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_22;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_23 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165)__this->___U3CU3Es__7_11;
				__this->___U3CvU3E5__6_10 = L_23;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_24 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CU3Es__7_11);
				il2cpp_codegen_initobj(L_24, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_25 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CvU3E5__6_10);
				bool L_26;
				L_26 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline(L_25, Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				V_5 = L_26;
				bool L_27 = V_5;
				if (!L_27)
				{
					goto IL_0174_2;
				}
			}
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_28 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165)__this->___U3CsumU3E5__2_6;
				V_6 = L_28;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_29 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CvU3E5__6_10);
				double L_30;
				L_30 = Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1(L_29, Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
				V_7 = L_30;
				bool L_31;
				L_31 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&V_6), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				if (L_31)
				{
					G_B22_0 = __this;
					goto IL_014b_2;
				}
				G_B21_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_32 = V_8;
				G_B23_0 = L_32;
				G_B23_1 = G_B21_0;
				goto IL_015a_2;
			}

IL_014b_2:
			{
				double L_33;
				L_33 = Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline((&V_6), Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
				double L_34 = V_7;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_35;
				memset((&L_35), 0, sizeof(L_35));
				Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_35), ((double)il2cpp_codegen_add(L_33, L_34)), Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
				G_B23_0 = L_35;
				G_B23_1 = G_B22_0;
			}

IL_015a_2:
			{
				NullCheck(G_B23_1);
				G_B23_1->___U3CsumU3E5__2_6 = G_B23_0;
				int64_t L_36 = (int64_t)__this->___U3CcountU3E5__1_5;
				V_9 = L_36;
				int64_t L_37 = V_9;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_37, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1_5 = ((int64_t)il2cpp_codegen_add(L_37, ((int64_t)1)));
			}

IL_0174_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_38 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CvU3E5__6_10);
				il2cpp_codegen_initobj(L_38, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
			}

IL_0181_2:
			{
				RuntimeObject* L_39 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_39);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_40;
				L_40 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_39);
				V_12 = L_40;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_41;
				L_41 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_12), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_11 = L_41;
				bool L_42;
				L_42 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_11), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_42)
				{
					goto IL_01e6_2;
				}
			}
			{
				int32_t L_43 = 1;
				V_0 = L_43;
				__this->___U3CU3E1__state_0 = L_43;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_44 = V_11;
				__this->___U3CU3Eu__2_14 = L_44;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_45 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAwaitWithCancellationAsyncU3Ed__35_1_t01F222573BFC23A5A95113AD81969CB98966F508**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_45, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_033d;
			}

IL_01c9_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_46 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_14;
				V_11 = L_46;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_47 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_14);
				il2cpp_codegen_initobj(L_47, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_48 = (-1);
				V_0 = L_48;
				__this->___U3CU3E1__state_0 = L_48;
			}

IL_01e6_2:
			{
				bool L_49;
				L_49 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_11), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_49;
				bool L_50 = (bool)__this->___U3CU3Es__8_12;
				V_10 = L_50;
				bool L_51 = V_10;
				if (L_51)
				{
					goto IL_0075_2;
				}
			}
			{
				goto IL_0211_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0205_1;
			}
			throw e;
		}

CATCH_0205_1:
		{
			V_13 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_52 = V_13;
			__this->___U3CU3Es__4_8 = L_52;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)L_52);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0211_1;
		}

IL_0211_1:
		{
			RuntimeObject* L_53 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			V_14 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_53) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_54 = V_14;
			if (!L_54)
			{
				goto IL_0290_1;
			}
		}
		{
			RuntimeObject* L_55 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			NullCheck((RuntimeObject*)L_55);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_56;
			L_56 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_55);
			V_16 = L_56;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_57;
			L_57 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_16), NULL);
			V_15 = L_57;
			bool L_58;
			L_58 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_15), NULL);
			if (L_58)
			{
				goto IL_0287_1;
			}
		}
		{
			int32_t L_59 = 2;
			V_0 = L_59;
			__this->___U3CU3E1__state_0 = L_59;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_60 = V_15;
			__this->___U3CU3Eu__3_15 = L_60;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_15))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_61 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAwaitWithCancellationAsyncU3Ed__35_1_t01F222573BFC23A5A95113AD81969CB98966F508**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_61, (&V_15), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_033d;
		}

IL_026a_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_62 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_15;
			V_15 = L_62;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_63 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_15);
			il2cpp_codegen_initobj(L_63, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_64 = (-1);
			V_0 = L_64;
			__this->___U3CU3E1__state_0 = L_64;
		}

IL_0287_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_15), NULL);
		}

IL_0290_1:
		{
			RuntimeObject* L_65 = (RuntimeObject*)__this->___U3CU3Es__4_8;
			V_13 = L_65;
			RuntimeObject* L_66 = V_13;
			if (!L_66)
			{
				goto IL_02ba_1;
			}
		}
		{
			RuntimeObject* L_67 = V_13;
			V_17 = ((Exception_t*)IsInstClass((RuntimeObject*)L_67, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_68 = V_17;
			if (L_68)
			{
				goto IL_02ad_1;
			}
		}
		{
			RuntimeObject* L_69 = V_13;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_69, method);
		}

IL_02ad_1:
		{
			Exception_t* L_70 = V_17;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_71;
			L_71 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_70, NULL);
			NullCheck(L_71);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_71, NULL);
		}

IL_02ba_1:
		{
			int32_t L_72 = (int32_t)__this->___U3CU3Es__5_9;
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_73 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165)__this->___U3CsumU3E5__2_6;
			V_6 = L_73;
			int64_t L_74 = (int64_t)__this->___U3CcountU3E5__1_5;
			V_7 = ((double)L_74);
			bool L_75;
			L_75 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&V_6), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
			if (L_75)
			{
				goto IL_02ee_1;
			}
		}
		{
			il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_76 = V_8;
			G_B43_0 = L_76;
			goto IL_02fd_1;
		}

IL_02ee_1:
		{
			double L_77;
			L_77 = Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline((&V_6), Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
			double L_78 = V_7;
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_79;
			memset((&L_79), 0, sizeof(L_79));
			Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_79), ((double)(L_77/L_78)), Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
			G_B43_0 = L_79;
		}

IL_02fd_1:
		{
			V_1 = G_B43_0;
			goto IL_0321;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0300;
		}
		throw e;
	}

CATCH_0300:
	{
		V_17 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_80 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_81 = V_17;
		AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_inline(L_80, L_81, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_033d;
	}

IL_0321:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_82 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_83 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_inline(L_82, L_83, AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
	}

IL_033d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__35_1_SetStateMachine_m2FB760169D7B57DC3B1946D5D2C028305B21A6C6_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__35_1_t01F222573BFC23A5A95113AD81969CB98966F508* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__39_1__ctor_m43A99018061CC6A71D92BFB36A869D333FD4140A_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__39_1_t50C4E469171E993FFEFE1DE41DE151995E31ADA2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__39_1_MoveNext_m29AD57669970D69F88783E4A2D1D7DE7AB53571C_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__39_1_t50C4E469171E993FFEFE1DE41DE151995E31ADA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m33574CDAA01061AEA24434F9DE51A5B4F03A18A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t642F5F5503C9B9E2EE14FD391642EF9290BCD201 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_t642F5F5503C9B9E2EE14FD391642EF9290BCD201);
	int32_t V_0 = 0;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_1;
	memset((&V_1), 0, sizeof(V_1));
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_2;
	memset((&V_2), 0, sizeof(V_2));
	Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CAverageAwaitWithCancellationAsyncU3Ed__39_1_t50C4E469171E993FFEFE1DE41DE151995E31ADA2* V_5 = NULL;
	bool V_6 = false;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_7;
	memset((&V_7), 0, sizeof(V_7));
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_8;
	memset((&V_8), 0, sizeof(V_8));
	int64_t V_9 = 0;
	bool V_10 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_12;
	memset((&V_12), 0, sizeof(V_12));
	RuntimeObject* V_13 = NULL;
	bool V_14 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_15;
	memset((&V_15), 0, sizeof(V_15));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Exception_t* V_17 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	U3CAverageAwaitWithCancellationAsyncU3Ed__39_1_t50C4E469171E993FFEFE1DE41DE151995E31ADA2* G_B22_0 = NULL;
	U3CAverageAwaitWithCancellationAsyncU3Ed__39_1_t50C4E469171E993FFEFE1DE41DE151995E31ADA2* G_B21_0 = NULL;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB G_B23_0;
	memset((&G_B23_0), 0, sizeof(G_B23_0));
	U3CAverageAwaitWithCancellationAsyncU3Ed__39_1_t50C4E469171E993FFEFE1DE41DE151995E31ADA2* G_B23_1 = NULL;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB G_B43_0;
	memset((&G_B43_0), 0, sizeof(G_B43_0));
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_005c_1;
		}

IL_0015_1:
		{
			goto IL_026d_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1_5 = ((int64_t)0);
			il2cpp_codegen_initobj((&V_2), sizeof(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F));
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_3 = V_2;
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_4;
			memset((&L_4), 0, sizeof(L_4));
			Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7((&L_4), L_3, Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_RuntimeMethod_var);
			__this->___U3CsumU3E5__2_6 = L_4;
			RuntimeObject* L_5 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_5);
			RuntimeObject* L_7;
			L_7 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_5, L_6);
			__this->___U3CeU3E5__3_7 = L_7;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)L_7);
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			__this->___U3CU3Es__5_9 = 0;
		}

IL_005c_1:
		{
		}
		try
		{
			{
				int32_t L_8 = V_0;
				if (!L_8)
				{
					goto IL_0068_2;
				}
			}
			{
				goto IL_0062_2;
			}

IL_0062_2:
			{
				int32_t L_9 = V_0;
				if ((((int32_t)L_9) == ((int32_t)1)))
				{
					goto IL_006a_2;
				}
			}
			{
				goto IL_006f_2;
			}

IL_0068_2:
			{
				goto IL_00cd_2;
			}

IL_006a_2:
			{
				goto IL_01cc_2;
			}

IL_006f_2:
			{
				goto IL_0184_2;
			}

IL_0075_2:
			{
				Func_3_t428A771ED20C241CDDC6BDF17284D499B16CBD70* L_10 = (Func_3_t428A771ED20C241CDDC6BDF17284D499B16CBD70*)__this->___selector_3;
				RuntimeObject* L_11 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_11);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_11, (Il2CppFullySharedGenericAny*)L_12);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_13 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_10);
				UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F L_14;
				L_14 = InvokerFuncInvoker2< UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_12: *(void**)L_12), L_13);
				V_4 = L_14;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_15;
				L_15 = UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_inline((&V_4), UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_RuntimeMethod_var);
				V_3 = L_15;
				bool L_16;
				L_16 = Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_inline((&V_3), Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_00e9_2;
				}
			}
			{
				int32_t L_17 = 0;
				V_0 = L_17;
				__this->___U3CU3E1__state_0 = L_17;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_18 = V_3;
				__this->___U3CU3Eu__1_13 = L_18;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_19 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51*, U3CAverageAwaitWithCancellationAsyncU3Ed__39_1_t50C4E469171E993FFEFE1DE41DE151995E31ADA2**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_19, (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0346;
			}

IL_00cd_2:
			{
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_20 = (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51)__this->___U3CU3Eu__1_13;
				V_3 = L_20;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* L_21 = (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51*)(&__this->___U3CU3Eu__1_13);
				il2cpp_codegen_initobj(L_21, sizeof(Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51));
				int32_t L_22 = (-1);
				V_0 = L_22;
				__this->___U3CU3E1__state_0 = L_22;
			}

IL_00e9_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_23;
				L_23 = Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_inline((&V_3), Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_23;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_24 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB)__this->___U3CU3Es__7_11;
				__this->___U3CvU3E5__6_10 = L_24;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_25 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CU3Es__7_11);
				il2cpp_codegen_initobj(L_25, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_26 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CvU3E5__6_10);
				bool L_27;
				L_27 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline(L_26, Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				V_6 = L_27;
				bool L_28 = V_6;
				if (!L_28)
				{
					goto IL_0177_2;
				}
			}
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_29 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB)__this->___U3CsumU3E5__2_6;
				V_7 = L_29;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_30 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CvU3E5__6_10);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_31;
				L_31 = Nullable_1_get_Value_m33574CDAA01061AEA24434F9DE51A5B4F03A18A2(L_30, Nullable_1_get_Value_m33574CDAA01061AEA24434F9DE51A5B4F03A18A2_RuntimeMethod_var);
				V_2 = L_31;
				bool L_32;
				L_32 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline((&V_7), Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				if (L_32)
				{
					G_B22_0 = __this;
					goto IL_014b_2;
				}
				G_B21_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_33 = V_8;
				G_B23_0 = L_33;
				G_B23_1 = G_B21_0;
				goto IL_015d_2;
			}

IL_014b_2:
			{
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_34;
				L_34 = Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline((&V_7), Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_35 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_36;
				L_36 = Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7(L_34, L_35, NULL);
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_37;
				memset((&L_37), 0, sizeof(L_37));
				Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7((&L_37), L_36, Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_RuntimeMethod_var);
				G_B23_0 = L_37;
				G_B23_1 = G_B22_0;
			}

IL_015d_2:
			{
				NullCheck(G_B23_1);
				G_B23_1->___U3CsumU3E5__2_6 = G_B23_0;
				int64_t L_38 = (int64_t)__this->___U3CcountU3E5__1_5;
				V_9 = L_38;
				int64_t L_39 = V_9;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_39, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1_5 = ((int64_t)il2cpp_codegen_add(L_39, ((int64_t)1)));
			}

IL_0177_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_40 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CvU3E5__6_10);
				il2cpp_codegen_initobj(L_40, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
			}

IL_0184_2:
			{
				RuntimeObject* L_41 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_41);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_42;
				L_42 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_41);
				V_12 = L_42;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_43;
				L_43 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_12), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_11 = L_43;
				bool L_44;
				L_44 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_11), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_44)
				{
					goto IL_01e9_2;
				}
			}
			{
				int32_t L_45 = 1;
				V_0 = L_45;
				__this->___U3CU3E1__state_0 = L_45;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_46 = V_11;
				__this->___U3CU3Eu__2_14 = L_46;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_47 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAwaitWithCancellationAsyncU3Ed__39_1_t50C4E469171E993FFEFE1DE41DE151995E31ADA2**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_47, (&V_11), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0346;
			}

IL_01cc_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_48 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_14;
				V_11 = L_48;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_49 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_14);
				il2cpp_codegen_initobj(L_49, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_50 = (-1);
				V_0 = L_50;
				__this->___U3CU3E1__state_0 = L_50;
			}

IL_01e9_2:
			{
				bool L_51;
				L_51 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_11), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_51;
				bool L_52 = (bool)__this->___U3CU3Es__8_12;
				V_10 = L_52;
				bool L_53 = V_10;
				if (L_53)
				{
					goto IL_0075_2;
				}
			}
			{
				goto IL_0214_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0208_1;
			}
			throw e;
		}

CATCH_0208_1:
		{
			V_13 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_54 = V_13;
			__this->___U3CU3Es__4_8 = L_54;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)L_54);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0214_1;
		}

IL_0214_1:
		{
			RuntimeObject* L_55 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			V_14 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_55) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_56 = V_14;
			if (!L_56)
			{
				goto IL_0293_1;
			}
		}
		{
			RuntimeObject* L_57 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			NullCheck((RuntimeObject*)L_57);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_58;
			L_58 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_57);
			V_16 = L_58;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_59;
			L_59 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_16), NULL);
			V_15 = L_59;
			bool L_60;
			L_60 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_15), NULL);
			if (L_60)
			{
				goto IL_028a_1;
			}
		}
		{
			int32_t L_61 = 2;
			V_0 = L_61;
			__this->___U3CU3E1__state_0 = L_61;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_62 = V_15;
			__this->___U3CU3Eu__3_15 = L_62;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_15))->___task_0))->___source_0), (void*)NULL);
			V_5 = __this;
			AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_63 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAwaitWithCancellationAsyncU3Ed__39_1_t50C4E469171E993FFEFE1DE41DE151995E31ADA2**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_63, (&V_15), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0346;
		}

IL_026d_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_64 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_15;
			V_15 = L_64;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_65 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_15);
			il2cpp_codegen_initobj(L_65, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_66 = (-1);
			V_0 = L_66;
			__this->___U3CU3E1__state_0 = L_66;
		}

IL_028a_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_15), NULL);
		}

IL_0293_1:
		{
			RuntimeObject* L_67 = (RuntimeObject*)__this->___U3CU3Es__4_8;
			V_13 = L_67;
			RuntimeObject* L_68 = V_13;
			if (!L_68)
			{
				goto IL_02bd_1;
			}
		}
		{
			RuntimeObject* L_69 = V_13;
			V_17 = ((Exception_t*)IsInstClass((RuntimeObject*)L_69, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_70 = V_17;
			if (L_70)
			{
				goto IL_02b0_1;
			}
		}
		{
			RuntimeObject* L_71 = V_13;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_71, method);
		}

IL_02b0_1:
		{
			Exception_t* L_72 = V_17;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_73;
			L_73 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_72, NULL);
			NullCheck(L_73);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_73, NULL);
		}

IL_02bd_1:
		{
			int32_t L_74 = (int32_t)__this->___U3CU3Es__5_9;
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_75 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB)__this->___U3CsumU3E5__2_6;
			V_7 = L_75;
			int64_t L_76 = (int64_t)__this->___U3CcountU3E5__1_5;
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_77;
			L_77 = Decimal_op_Implicit_m8F9A38760D01B23E6DFF77EA760CCE5111F3656D(L_76, NULL);
			V_2 = L_77;
			bool L_78;
			L_78 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline((&V_7), Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
			if (L_78)
			{
				goto IL_02f4_1;
			}
		}
		{
			il2cpp_codegen_initobj((&V_8), sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_79 = V_8;
			G_B43_0 = L_79;
			goto IL_0306_1;
		}

IL_02f4_1:
		{
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_80;
			L_80 = Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline((&V_7), Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_81 = V_2;
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_82;
			L_82 = Decimal_op_Division_mA0BD25988CA8010A3F8EA2F6A534F9F2D812D2AC(L_80, L_81, NULL);
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_83;
			memset((&L_83), 0, sizeof(L_83));
			Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7((&L_83), L_82, Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_RuntimeMethod_var);
			G_B43_0 = L_83;
		}

IL_0306_1:
		{
			V_1 = G_B43_0;
			goto IL_032a;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0309;
		}
		throw e;
	}

CATCH_0309:
	{
		V_17 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_84 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_85 = V_17;
		AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_inline(L_84, L_85, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0346;
	}

IL_032a:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_86 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_87 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_inline(L_86, L_87, AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_RuntimeMethod_var);
	}

IL_0346:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__39_1_SetStateMachine_m049320DDB240FC96279FEEE7D953A6F31756CF02_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__39_1_t50C4E469171E993FFEFE1DE41DE151995E31ADA2* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__3_1__ctor_m0B0FEDE6A764584266DCF6297818E14B1DD1458C_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__3_1_t94F7D5E6B37B9A060647B191C4B93E9E4D47385E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__3_1_MoveNext_m29ECB28EBBECA346EFC8B3FB38791993049027B6_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__3_1_t94F7D5E6B37B9A060647B191C4B93E9E4D47385E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t0CFB18EB05012AE8DC03C08CE417FCFAB6A78228 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t0CFB18EB05012AE8DC03C08CE417FCFAB6A78228);
	int32_t V_0 = 0;
	double V_1 = 0.0;
	Awaiter_t8953594D03299DE782894F4A865CED79F2504266 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CAverageAwaitWithCancellationAsyncU3Ed__3_1_t94F7D5E6B37B9A060647B191C4B93E9E4D47385E* V_4 = NULL;
	int64_t V_5 = 0;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_004f_1;
		}

IL_0015_1:
		{
			goto IL_0206_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1_5 = ((int64_t)0);
			__this->___U3CsumU3E5__2_6 = 0;
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__3_7 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)L_5);
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			__this->___U3CU3Es__5_9 = 0;
		}

IL_004f_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_005b_2;
				}
			}
			{
				goto IL_0055_2;
			}

IL_0055_2:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_005d_2;
				}
			}
			{
				goto IL_0062_2;
			}

IL_005b_2:
			{
				goto IL_00cc_2;
			}

IL_005d_2:
			{
				goto IL_0165_2;
			}

IL_0062_2:
			{
				goto IL_011d_2;
			}

IL_0068_2:
			{
				int32_t L_8 = (int32_t)__this->___U3CsumU3E5__2_6;
				__this->___U3CU3Es__6_10 = L_8;
				Func_3_t4B0BED2CC5C1B3C74670633A89F91C13C1A0F1E4* L_9 = (Func_3_t4B0BED2CC5C1B3C74670633A89F91C13C1A0F1E4*)__this->___selector_3;
				RuntimeObject* L_10 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_9);
				UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 L_13;
				L_13 = InvokerFuncInvoker2< UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11), L_12);
				V_3 = L_13;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_14;
				L_14 = UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_inline((&V_3), UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_RuntimeMethod_var);
				V_2 = L_14;
				bool L_15;
				L_15 = Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_inline((&V_2), Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00e8_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state_0 = L_16;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_17 = V_2;
				__this->___U3CU3Eu__1_13 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_18 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_t8953594D03299DE782894F4A865CED79F2504266*, U3CAverageAwaitWithCancellationAsyncU3Ed__3_1_t94F7D5E6B37B9A060647B191C4B93E9E4D47385E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_18, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_02b3;
			}

IL_00cc_2:
			{
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_19 = (Awaiter_t8953594D03299DE782894F4A865CED79F2504266)__this->___U3CU3Eu__1_13;
				V_2 = L_19;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266* L_20 = (Awaiter_t8953594D03299DE782894F4A865CED79F2504266*)(&__this->___U3CU3Eu__1_13);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_t8953594D03299DE782894F4A865CED79F2504266));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state_0 = L_21;
			}

IL_00e8_2:
			{
				int32_t L_22;
				L_22 = Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_inline((&V_2), Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_22;
				int32_t L_23 = (int32_t)__this->___U3CU3Es__6_10;
				int32_t L_24 = (int32_t)__this->___U3CU3Es__7_11;
				if (((int64_t)L_23 + (int64_t)L_24 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_23 + (int64_t)L_24 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CsumU3E5__2_6 = ((int32_t)il2cpp_codegen_add(L_23, L_24));
				int64_t L_25 = (int64_t)__this->___U3CcountU3E5__1_5;
				V_5 = L_25;
				int64_t L_26 = V_5;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_26, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1_5 = ((int64_t)il2cpp_codegen_add(L_26, ((int64_t)1)));
			}

IL_011d_2:
			{
				RuntimeObject* L_27 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_27);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_28;
				L_28 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_27);
				V_8 = L_28;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29;
				L_29 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_29;
				bool L_30;
				L_30 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_30)
				{
					goto IL_0182_2;
				}
			}
			{
				int32_t L_31 = 1;
				V_0 = L_31;
				__this->___U3CU3E1__state_0 = L_31;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_32 = V_7;
				__this->___U3CU3Eu__2_14 = L_32;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_33 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAwaitWithCancellationAsyncU3Ed__3_1_t94F7D5E6B37B9A060647B191C4B93E9E4D47385E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_33, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_02b3;
			}

IL_0165_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_14;
				V_7 = L_34;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_35 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_14);
				il2cpp_codegen_initobj(L_35, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_36 = (-1);
				V_0 = L_36;
				__this->___U3CU3E1__state_0 = L_36;
			}

IL_0182_2:
			{
				bool L_37;
				L_37 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_37;
				bool L_38 = (bool)__this->___U3CU3Es__8_12;
				V_6 = L_38;
				bool L_39 = V_6;
				if (L_39)
				{
					goto IL_0068_2;
				}
			}
			{
				goto IL_01ad_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01a1_1;
			}
			throw e;
		}

CATCH_01a1_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_40 = V_9;
			__this->___U3CU3Es__4_8 = L_40;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)L_40);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01ad_1;
		}

IL_01ad_1:
		{
			RuntimeObject* L_41 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_41) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_42 = V_10;
			if (!L_42)
			{
				goto IL_022c_1;
			}
		}
		{
			RuntimeObject* L_43 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			NullCheck((RuntimeObject*)L_43);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_44;
			L_44 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_43);
			V_12 = L_44;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_45;
			L_45 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_45;
			bool L_46;
			L_46 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_46)
			{
				goto IL_0223_1;
			}
		}
		{
			int32_t L_47 = 2;
			V_0 = L_47;
			__this->___U3CU3E1__state_0 = L_47;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_48 = V_11;
			__this->___U3CU3Eu__3_15 = L_48;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_15))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_49 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAwaitWithCancellationAsyncU3Ed__3_1_t94F7D5E6B37B9A060647B191C4B93E9E4D47385E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_49, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_02b3;
		}

IL_0206_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_15;
			V_11 = L_50;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_51 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_15);
			il2cpp_codegen_initobj(L_51, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_52 = (-1);
			V_0 = L_52;
			__this->___U3CU3E1__state_0 = L_52;
		}

IL_0223_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_022c_1:
		{
			RuntimeObject* L_53 = (RuntimeObject*)__this->___U3CU3Es__4_8;
			V_9 = L_53;
			RuntimeObject* L_54 = V_9;
			if (!L_54)
			{
				goto IL_0256_1;
			}
		}
		{
			RuntimeObject* L_55 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_55, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_56 = V_13;
			if (L_56)
			{
				goto IL_0249_1;
			}
		}
		{
			RuntimeObject* L_57 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_57, method);
		}

IL_0249_1:
		{
			Exception_t* L_58 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_59;
			L_59 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_58, NULL);
			NullCheck(L_59);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_59, NULL);
		}

IL_0256_1:
		{
			int32_t L_60 = (int32_t)__this->___U3CU3Es__5_9;
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			int32_t L_61 = (int32_t)__this->___U3CsumU3E5__2_6;
			int64_t L_62 = (int64_t)__this->___U3CcountU3E5__1_5;
			V_1 = ((double)(((double)L_61)/((double)L_62)));
			goto IL_0297;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0276;
		}
		throw e;
	}

CATCH_0276:
	{
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_63 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_64 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_inline(L_63, L_64, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02b3;
	}

IL_0297:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_65 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
		double L_66 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_inline(L_65, L_66, AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
	}

IL_02b3:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__3_1_SetStateMachine_m9163D154220BDE8E17E05F2636CFE2C8EBD511FA_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__3_1_t94F7D5E6B37B9A060647B191C4B93E9E4D47385E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__7_1__ctor_m8E4724F33213A4AEC2C293E1852FC18E57D9DA50_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__7_1_tF84BDDE66F565787632536D0CE42E7E70470F740* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__7_1_MoveNext_m4F4DF119DFE711613D10D752FD44059D849B246E_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__7_1_tF84BDDE66F565787632536D0CE42E7E70470F740* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tE2D6E331E5D0864329BEF37F67D3AE2923A23433 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_tE2D6E331E5D0864329BEF37F67D3AE2923A23433);
	int32_t V_0 = 0;
	double V_1 = 0.0;
	Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CAverageAwaitWithCancellationAsyncU3Ed__7_1_tF84BDDE66F565787632536D0CE42E7E70470F740* V_4 = NULL;
	int64_t V_5 = 0;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_0013_1;
			}
		}
		{
			goto IL_000d_1;
		}

IL_000d_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)2)))
			{
				goto IL_0015_1;
			}
		}
		{
			goto IL_001a_1;
		}

IL_0013_1:
		{
			goto IL_0050_1;
		}

IL_0015_1:
		{
			goto IL_0207_1;
		}

IL_001a_1:
		{
			__this->___U3CcountU3E5__1_5 = ((int64_t)0);
			__this->___U3CsumU3E5__2_6 = ((int64_t)0);
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__3_7 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)L_5);
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			__this->___U3CU3Es__5_9 = 0;
		}

IL_0050_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_005c_2;
				}
			}
			{
				goto IL_0056_2;
			}

IL_0056_2:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_005e_2;
				}
			}
			{
				goto IL_0063_2;
			}

IL_005c_2:
			{
				goto IL_00cd_2;
			}

IL_005e_2:
			{
				goto IL_0166_2;
			}

IL_0063_2:
			{
				goto IL_011e_2;
			}

IL_0069_2:
			{
				int64_t L_8 = (int64_t)__this->___U3CsumU3E5__2_6;
				__this->___U3CU3Es__6_10 = L_8;
				Func_3_t76BD268388DCE8B514D513440272B79CC88C6413* L_9 = (Func_3_t76BD268388DCE8B514D513440272B79CC88C6413*)__this->___selector_3;
				RuntimeObject* L_10 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_9);
				UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72 L_13;
				L_13 = InvokerFuncInvoker2< UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11), L_12);
				V_3 = L_13;
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_14;
				L_14 = UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_inline((&V_3), UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_RuntimeMethod_var);
				V_2 = L_14;
				bool L_15;
				L_15 = Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_inline((&V_2), Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00e9_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state_0 = L_16;
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_17 = V_2;
				__this->___U3CU3Eu__1_13 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_18 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E*, U3CAverageAwaitWithCancellationAsyncU3Ed__7_1_tF84BDDE66F565787632536D0CE42E7E70470F740**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_18, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_02b4;
			}

IL_00cd_2:
			{
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_19 = (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E)__this->___U3CU3Eu__1_13;
				V_2 = L_19;
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* L_20 = (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E*)(&__this->___U3CU3Eu__1_13);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state_0 = L_21;
			}

IL_00e9_2:
			{
				int64_t L_22;
				L_22 = Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_inline((&V_2), Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_22;
				int64_t L_23 = (int64_t)__this->___U3CU3Es__6_10;
				int64_t L_24 = (int64_t)__this->___U3CU3Es__7_11;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_23, (int64_t)L_24))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CsumU3E5__2_6 = ((int64_t)il2cpp_codegen_add(L_23, L_24));
				int64_t L_25 = (int64_t)__this->___U3CcountU3E5__1_5;
				V_5 = L_25;
				int64_t L_26 = V_5;
				if (il2cpp_codegen_check_add_overflow((int64_t)L_26, (int64_t)((int64_t)1)))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CcountU3E5__1_5 = ((int64_t)il2cpp_codegen_add(L_26, ((int64_t)1)));
			}

IL_011e_2:
			{
				RuntimeObject* L_27 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
				NullCheck(L_27);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_28;
				L_28 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_27);
				V_8 = L_28;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29;
				L_29 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_29;
				bool L_30;
				L_30 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_30)
				{
					goto IL_0183_2;
				}
			}
			{
				int32_t L_31 = 1;
				V_0 = L_31;
				__this->___U3CU3E1__state_0 = L_31;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_32 = V_7;
				__this->___U3CU3Eu__2_14 = L_32;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_33 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CAverageAwaitWithCancellationAsyncU3Ed__7_1_tF84BDDE66F565787632536D0CE42E7E70470F740**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_33, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_02b4;
			}

IL_0166_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_14;
				V_7 = L_34;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_35 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_14);
				il2cpp_codegen_initobj(L_35, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_36 = (-1);
				V_0 = L_36;
				__this->___U3CU3E1__state_0 = L_36;
			}

IL_0183_2:
			{
				bool L_37;
				L_37 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_37;
				bool L_38 = (bool)__this->___U3CU3Es__8_12;
				V_6 = L_38;
				bool L_39 = V_6;
				if (L_39)
				{
					goto IL_0069_2;
				}
			}
			{
				goto IL_01ae_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01a2_1;
			}
			throw e;
		}

CATCH_01a2_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_40 = V_9;
			__this->___U3CU3Es__4_8 = L_40;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)L_40);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01ae_1;
		}

IL_01ae_1:
		{
			RuntimeObject* L_41 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_41) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_42 = V_10;
			if (!L_42)
			{
				goto IL_022d_1;
			}
		}
		{
			RuntimeObject* L_43 = (RuntimeObject*)__this->___U3CeU3E5__3_7;
			NullCheck((RuntimeObject*)L_43);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_44;
			L_44 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_43);
			V_12 = L_44;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_45;
			L_45 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_45;
			bool L_46;
			L_46 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_46)
			{
				goto IL_0224_1;
			}
		}
		{
			int32_t L_47 = 2;
			V_0 = L_47;
			__this->___U3CU3E1__state_0 = L_47;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_48 = V_11;
			__this->___U3CU3Eu__3_15 = L_48;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_15))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_49 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CAverageAwaitWithCancellationAsyncU3Ed__7_1_tF84BDDE66F565787632536D0CE42E7E70470F740**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_49, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_02b4;
		}

IL_0207_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_15;
			V_11 = L_50;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_51 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_15);
			il2cpp_codegen_initobj(L_51, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_52 = (-1);
			V_0 = L_52;
			__this->___U3CU3E1__state_0 = L_52;
		}

IL_0224_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_022d_1:
		{
			RuntimeObject* L_53 = (RuntimeObject*)__this->___U3CU3Es__4_8;
			V_9 = L_53;
			RuntimeObject* L_54 = V_9;
			if (!L_54)
			{
				goto IL_0257_1;
			}
		}
		{
			RuntimeObject* L_55 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_55, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_56 = V_13;
			if (L_56)
			{
				goto IL_024a_1;
			}
		}
		{
			RuntimeObject* L_57 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_57, method);
		}

IL_024a_1:
		{
			Exception_t* L_58 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_59;
			L_59 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_58, NULL);
			NullCheck(L_59);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_59, NULL);
		}

IL_0257_1:
		{
			int32_t L_60 = (int32_t)__this->___U3CU3Es__5_9;
			__this->___U3CU3Es__4_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_8), (void*)NULL);
			int64_t L_61 = (int64_t)__this->___U3CsumU3E5__2_6;
			int64_t L_62 = (int64_t)__this->___U3CcountU3E5__1_5;
			V_1 = ((double)(((double)L_61)/((double)L_62)));
			goto IL_0298;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0277;
		}
		throw e;
	}

CATCH_0277:
	{
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_63 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_64 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_inline(L_63, L_64, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02b4;
	}

IL_0298:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_65 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
		double L_66 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_inline(L_65, L_66, AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
	}

IL_02b4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAverageAwaitWithCancellationAsyncU3Ed__7_1_SetStateMachine_m9238EDFE1CC464F3799FB0CACCD376B331231517_gshared (U3CAverageAwaitWithCancellationAsyncU3Ed__7_1_tF84BDDE66F565787632536D0CE42E7E70470F740* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBindToCoreU3Ed__12_2__ctor_m27E2A49E6268221F5E05ADF8E13FC94591671D7C_gshared (U3CBindToCoreU3Ed__12_2_tC0C0AD26350D5274BE3703D1A40F35C8693897CA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBindToCoreU3Ed__12_2_MoveNext_m9D94D8967DF645D69B6C1A4621CF6D108805FD14_gshared (U3CBindToCoreU3Ed__12_2_tC0C0AD26350D5274BE3703D1A40F35C8693897CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TObject_tD8B3017B46D0781ADF85AD3F691927CF65F1DBE7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const uint32_t SizeOf_TSource_t0192C0FAF85C41C6FD19BE2FBCA3851543878B88 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_TSource_t0192C0FAF85C41C6FD19BE2FBCA3851543878B88);
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_TObject_tD8B3017B46D0781ADF85AD3F691927CF65F1DBE7);
	int32_t V_0 = 0;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CBindToCoreU3Ed__12_2_tC0C0AD26350D5274BE3703D1A40F35C8693897CA* V_3 = NULL;
	Exception_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t V_13 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 3> __active_exceptions;
	int32_t G_B28_0 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_0047_1;
		}

IL_0014_1:
		{
			goto IL_01d7_1;
		}

IL_0019_1:
		{
			il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (bool)0);
		}

IL_0021_1:
		{
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_5);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), NULL);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), 0);
		}

IL_0047_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_004d_2;
				}
			}
			{
				goto IL_004f_2;
			}

IL_004d_2:
			{
				goto IL_0056_2;
			}

IL_004f_2:
			{
				goto IL_0159_2;
			}

IL_0055_2:
			{
			}

IL_0056_2:
			{
			}
			try
			{
				{
					int32_t L_7 = V_0;
					if (!L_7)
					{
						goto IL_005c_3;
					}
				}
				{
					goto IL_005e_3;
				}

IL_005c_3:
				{
					goto IL_00a3_3;
				}

IL_005e_3:
				{
					RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
					NullCheck(L_8);
					UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_9;
					L_9 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8);
					V_2 = L_9;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_10;
					L_10 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_2), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
					V_1 = L_10;
					bool L_11;
					L_11 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_1), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
					if (L_11)
					{
						goto IL_00bf_3;
					}
				}
				{
					int32_t L_12 = 0;
					V_0 = L_12;
					il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_12);
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_13 = V_1;
					il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), L_13);
					V_3 = __this;
					((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CBindToCoreU3Ed__12_2_tC0C0AD26350D5274BE3703D1A40F35C8693897CA**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_1), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
					goto IL_0290;
				}

IL_00a3_3:
				{
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_14 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
					V_1 = L_14;
					il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
					int32_t L_15 = (-1);
					V_0 = L_15;
					il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_15);
				}

IL_00bf_3:
				{
					bool L_16;
					L_16 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_1), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
					il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_16);
					bool L_17 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12));
					il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_17);
					il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (bool)0);
					goto IL_012a_2;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00e2_2;
				}
				throw e;
			}

CATCH_00e2_2:
			{
				{
					V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					Exception_t* L_18 = V_4;
					il2cpp_codegen_write_instance_field_data<Exception_t*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_18);
					Exception_t* L_19 = *(Exception_t**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
					V_5 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_19, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_20 = V_5;
					if (!L_20)
					{
						goto IL_0103_2;
					}
				}
				{
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_016a_2;
				}

IL_0103_2:
				{
					bool L_21 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
					if (!L_21)
					{
						goto IL_0116_2;
					}
				}
				{
					bool L_22 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
					G_B28_0 = ((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
					goto IL_0117_2;
				}

IL_0116_2:
				{
					G_B28_0 = 0;
				}

IL_0117_2:
				{
					V_6 = (bool)G_B28_0;
					bool L_23 = V_6;
					if (!L_23)
					{
						goto IL_0127_2;
					}
				}
				{
					il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (bool)1);
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0161_2;
				}

IL_0127_2:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				}
			}

IL_012a_2:
			{
				bool L_24 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
				V_7 = (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
				bool L_25 = V_7;
				if (!L_25)
				{
					goto IL_013b_2;
				}
			}
			{
				goto IL_016a_2;
			}

IL_013b_2:
			{
				Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8* L_26 = *(Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
				il2cpp_codegen_memcpy(L_27, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)), SizeOf_TObject_tD8B3017B46D0781ADF85AD3F691927CF65F1DBE7);
				RuntimeObject* L_28 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
				NullCheck(L_28);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_28, (Il2CppFullySharedGenericAny*)L_29);
				NullCheck(L_26);
				InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8)) ? L_27: *(void**)L_27), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10)) ? L_29: *(void**)L_29));
			}

IL_0159_2:
			{
				V_8 = (bool)1;
				goto IL_0055_2;
			}

IL_0161_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), 1);
				goto IL_017f_1;
			}

IL_016a_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), 2);
				goto IL_017f_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0173_1;
			}
			throw e;
		}

CATCH_0173_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_30 = V_9;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_30);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_017f_1;
		}

IL_017f_1:
		{
			RuntimeObject* L_31 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_31) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_32 = V_10;
			if (!L_32)
			{
				goto IL_01fd_1;
			}
		}
		{
			RuntimeObject* L_33 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			NullCheck((RuntimeObject*)L_33);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_34;
			L_34 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_33);
			V_12 = L_34;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_35;
			L_35 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_35;
			bool L_36;
			L_36 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_36)
			{
				goto IL_01f4_1;
			}
		}
		{
			int32_t L_37 = 1;
			V_0 = L_37;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_37);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_38 = V_11;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15), L_38);
			V_3 = __this;
			((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CBindToCoreU3Ed__12_2_tC0C0AD26350D5274BE3703D1A40F35C8693897CA**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_11), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0290;
		}

IL_01d7_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15));
			V_11 = L_39;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_40 = (-1);
			V_0 = L_40;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_40);
		}

IL_01f4_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_01fd_1:
		{
			RuntimeObject* L_41 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
			V_9 = L_41;
			RuntimeObject* L_42 = V_9;
			if (!L_42)
			{
				goto IL_0227_1;
			}
		}
		{
			RuntimeObject* L_43 = V_9;
			V_4 = ((Exception_t*)IsInstClass((RuntimeObject*)L_43, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_44 = V_4;
			if (L_44)
			{
				goto IL_021a_1;
			}
		}
		{
			RuntimeObject* L_45 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, method);
		}

IL_021a_1:
		{
			Exception_t* L_46 = V_4;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_47;
			L_47 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_46, NULL);
			NullCheck(L_47);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_47, NULL);
		}

IL_0227_1:
		{
			int32_t L_48 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
			V_13 = L_48;
			int32_t L_49 = V_13;
			if ((((int32_t)L_49) == ((int32_t)1)))
			{
				goto IL_023d_1;
			}
		}
		{
			goto IL_0236_1;
		}

IL_0236_1:
		{
			int32_t L_50 = V_13;
			if ((((int32_t)L_50) == ((int32_t)2)))
			{
				goto IL_0242_1;
			}
		}
		{
			goto IL_0244_1;
		}

IL_023d_1:
		{
			goto IL_0021_1;
		}

IL_0242_1:
		{
			goto IL_0275;
		}

IL_0244_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), NULL);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), (RuntimeObject*)NULL);
			goto IL_0275;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0254;
		}
		throw e;
	}

CATCH_0254:
	{
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), (RuntimeObject*)NULL);
		Exception_t* L_51 = V_4;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_51, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0290;
	}

IL_0275:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), (RuntimeObject*)NULL);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), NULL);
	}

IL_0290:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBindToCoreU3Ed__12_2_SetStateMachine_m8B4A48B8D29A3AD035A0A2058AD1B14BEA233DD3_gshared (U3CBindToCoreU3Ed__12_2_tC0C0AD26350D5274BE3703D1A40F35C8693897CA* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBindToCoreU3Ed__6_1__ctor_mE820D3EB57DA246FD6624D3C9955AF3D6F83C599_gshared (U3CBindToCoreU3Ed__6_1_tFAAEED6C5DED441AFA0394C84B7C64DFD978AD2F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBindToCoreU3Ed__6_1_MoveNext_m9E093C7DD0E452C7183D23FA5B6B725EADB1DB0E_gshared (U3CBindToCoreU3Ed__6_1_tFAAEED6C5DED441AFA0394C84B7C64DFD978AD2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t68B1FEBC1CA0A46BCA452278A480F61C28BA9EB8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	void* L_31 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_T_t68B1FEBC1CA0A46BCA452278A480F61C28BA9EB8);
	int32_t V_0 = 0;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CBindToCoreU3Ed__6_1_tFAAEED6C5DED441AFA0394C84B7C64DFD978AD2F* V_3 = NULL;
	Exception_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Il2CppFullySharedGenericAny V_8 = alloca(SizeOf_T_t68B1FEBC1CA0A46BCA452278A480F61C28BA9EB8);
	memset(V_8, 0, SizeOf_T_t68B1FEBC1CA0A46BCA452278A480F61C28BA9EB8);
	bool V_9 = false;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_12;
	memset((&V_12), 0, sizeof(V_12));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t V_14 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 3> __active_exceptions;
	int32_t G_B28_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_0047_1;
		}

IL_0014_1:
		{
			goto IL_01e0_1;
		}

IL_0019_1:
		{
			__this->___U3CrepeatU3E5__1_6 = (bool)0;
		}

IL_0021_1:
		{
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__2_7 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_7), (void*)L_5);
			__this->___U3CU3Es__3_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_8), (void*)NULL);
			__this->___U3CU3Es__4_9 = 0;
		}

IL_0047_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_004d_2;
				}
			}
			{
				goto IL_004f_2;
			}

IL_004d_2:
			{
				goto IL_0056_2;
			}

IL_004f_2:
			{
				goto IL_0162_2;
			}

IL_0055_2:
			{
			}

IL_0056_2:
			{
			}
			try
			{
				{
					int32_t L_7 = V_0;
					if (!L_7)
					{
						goto IL_005c_3;
					}
				}
				{
					goto IL_005e_3;
				}

IL_005c_3:
				{
					goto IL_00a3_3;
				}

IL_005e_3:
				{
					RuntimeObject* L_8 = (RuntimeObject*)__this->___U3CeU3E5__2_7;
					NullCheck(L_8);
					UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_9;
					L_9 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8);
					V_2 = L_9;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_10;
					L_10 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_2), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
					V_1 = L_10;
					bool L_11;
					L_11 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_1), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
					if (L_11)
					{
						goto IL_00bf_3;
					}
				}
				{
					int32_t L_12 = 0;
					V_0 = L_12;
					__this->___U3CU3E1__state_0 = L_12;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_13 = V_1;
					__this->___U3CU3Eu__1_13 = L_13;
					Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
					V_3 = __this;
					AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_14 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
					((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CBindToCoreU3Ed__6_1_tFAAEED6C5DED441AFA0394C84B7C64DFD978AD2F**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_14, (&V_1), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
					goto IL_0299;
				}

IL_00a3_3:
				{
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_15 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_13;
					V_1 = L_15;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_16 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_13);
					il2cpp_codegen_initobj(L_16, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
					int32_t L_17 = (-1);
					V_0 = L_17;
					__this->___U3CU3E1__state_0 = L_17;
				}

IL_00bf_3:
				{
					bool L_18;
					L_18 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_1), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
					__this->___U3CU3Es__6_11 = L_18;
					bool L_19 = (bool)__this->___U3CU3Es__6_11;
					__this->___U3CmoveNextU3E5__5_10 = L_19;
					__this->___U3CrepeatU3E5__1_6 = (bool)0;
					goto IL_012a_2;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00e2_2;
				}
				throw e;
			}

CATCH_00e2_2:
			{
				{
					V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					Exception_t* L_20 = V_4;
					__this->___U3CexU3E5__7_12 = L_20;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__7_12), (void*)L_20);
					Exception_t* L_21 = (Exception_t*)__this->___U3CexU3E5__7_12;
					V_5 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_21, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_22 = V_5;
					if (!L_22)
					{
						goto IL_0103_2;
					}
				}
				{
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0173_2;
				}

IL_0103_2:
				{
					bool L_23 = (bool)__this->___rebindOnError_5;
					if (!L_23)
					{
						goto IL_0116_2;
					}
				}
				{
					bool L_24 = (bool)__this->___U3CrepeatU3E5__1_6;
					G_B28_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
					goto IL_0117_2;
				}

IL_0116_2:
				{
					G_B28_0 = 0;
				}

IL_0117_2:
				{
					V_6 = (bool)G_B28_0;
					bool L_25 = V_6;
					if (!L_25)
					{
						goto IL_0127_2;
					}
				}
				{
					__this->___U3CrepeatU3E5__1_6 = (bool)1;
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_016a_2;
				}

IL_0127_2:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				}
			}

IL_012a_2:
			{
				bool L_26 = (bool)__this->___U3CmoveNextU3E5__5_10;
				V_7 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
				bool L_27 = V_7;
				if (!L_27)
				{
					goto IL_013b_2;
				}
			}
			{
				goto IL_0173_2;
			}

IL_013b_2:
			{
				TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_28 = (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9*)__this->___text_3;
				RuntimeObject* L_29 = (RuntimeObject*)__this->___U3CeU3E5__2_7;
				NullCheck(L_29);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_29, (Il2CppFullySharedGenericAny*)L_30);
				il2cpp_codegen_memcpy(V_8, L_30, SizeOf_T_t68B1FEBC1CA0A46BCA452278A480F61C28BA9EB8);
				String_t* L_32;
				L_32 = ConstrainedFuncInvoker0< String_t* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 8), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_31, (void*)(Il2CppFullySharedGenericAny*)V_8);
				NullCheck(L_28);
				VirtualActionInvoker1< String_t* >::Invoke(66, L_28, L_32);
			}

IL_0162_2:
			{
				V_9 = (bool)1;
				goto IL_0055_2;
			}

IL_016a_2:
			{
				__this->___U3CU3Es__4_9 = 1;
				goto IL_0188_1;
			}

IL_0173_2:
			{
				__this->___U3CU3Es__4_9 = 2;
				goto IL_0188_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_017c_1;
			}
			throw e;
		}

CATCH_017c_1:
		{
			V_10 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_33 = V_10;
			__this->___U3CU3Es__3_8 = L_33;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_8), (void*)L_33);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0188_1;
		}

IL_0188_1:
		{
			RuntimeObject* L_34 = (RuntimeObject*)__this->___U3CeU3E5__2_7;
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_34) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_35 = V_11;
			if (!L_35)
			{
				goto IL_0206_1;
			}
		}
		{
			RuntimeObject* L_36 = (RuntimeObject*)__this->___U3CeU3E5__2_7;
			NullCheck((RuntimeObject*)L_36);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_37;
			L_37 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
			V_13 = L_37;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_38;
			L_38 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_13), NULL);
			V_12 = L_38;
			bool L_39;
			L_39 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_39)
			{
				goto IL_01fd_1;
			}
		}
		{
			int32_t L_40 = 1;
			V_0 = L_40;
			__this->___U3CU3E1__state_0 = L_40;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41 = V_12;
			__this->___U3CU3Eu__2_14 = L_41;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
			V_3 = __this;
			AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_42 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CBindToCoreU3Ed__6_1_tFAAEED6C5DED441AFA0394C84B7C64DFD978AD2F**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_42, (&V_12), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
			goto IL_0299;
		}

IL_01e0_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_43 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_14;
			V_12 = L_43;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_44 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_14);
			il2cpp_codegen_initobj(L_44, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_45 = (-1);
			V_0 = L_45;
			__this->___U3CU3E1__state_0 = L_45;
		}

IL_01fd_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_0206_1:
		{
			RuntimeObject* L_46 = (RuntimeObject*)__this->___U3CU3Es__3_8;
			V_10 = L_46;
			RuntimeObject* L_47 = V_10;
			if (!L_47)
			{
				goto IL_0230_1;
			}
		}
		{
			RuntimeObject* L_48 = V_10;
			V_4 = ((Exception_t*)IsInstClass((RuntimeObject*)L_48, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_49 = V_4;
			if (L_49)
			{
				goto IL_0223_1;
			}
		}
		{
			RuntimeObject* L_50 = V_10;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_50, method);
		}

IL_0223_1:
		{
			Exception_t* L_51 = V_4;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_52;
			L_52 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_51, NULL);
			NullCheck(L_52);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_52, NULL);
		}

IL_0230_1:
		{
			int32_t L_53 = (int32_t)__this->___U3CU3Es__4_9;
			V_14 = L_53;
			int32_t L_54 = V_14;
			if ((((int32_t)L_54) == ((int32_t)1)))
			{
				goto IL_0246_1;
			}
		}
		{
			goto IL_023f_1;
		}

IL_023f_1:
		{
			int32_t L_55 = V_14;
			if ((((int32_t)L_55) == ((int32_t)2)))
			{
				goto IL_024b_1;
			}
		}
		{
			goto IL_024d_1;
		}

IL_0246_1:
		{
			goto IL_0021_1;
		}

IL_024b_1:
		{
			goto IL_027e;
		}

IL_024d_1:
		{
			__this->___U3CU3Es__3_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_8), (void*)NULL);
			__this->___U3CeU3E5__2_7 = (RuntimeObject*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_7), (void*)(RuntimeObject*)NULL);
			goto IL_027e;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_025d;
		}
		throw e;
	}

CATCH_025d:
	{
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_56 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_57 = V_4;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(L_56, L_57, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0299;
	}

IL_027e:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_58 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(L_58, NULL);
	}

IL_0299:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBindToCoreU3Ed__6_1_SetStateMachine_m13420C3224EBB316C266A1BFD1D49DB146F4B18C_gshared (U3CBindToCoreU3Ed__6_1_tFAAEED6C5DED441AFA0394C84B7C64DFD978AD2F* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBindToCoreU3Ed__6_1__ctor_mADF38082FE1FF4BE0DEB321B0EB0FE1189A53BA1_gshared (U3CBindToCoreU3Ed__6_1_t86689E04CADC36E81BC1A54F65539102D6B5CB49* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBindToCoreU3Ed__6_1_MoveNext_m47D567C7A267A1155CBCF2F52101F3977186D399_gshared (U3CBindToCoreU3Ed__6_1_t86689E04CADC36E81BC1A54F65539102D6B5CB49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tADE3540C3670C1D7457D9A24F628CF70631DA7EA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	void* L_31 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_T_tADE3540C3670C1D7457D9A24F628CF70631DA7EA);
	int32_t V_0 = 0;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CBindToCoreU3Ed__6_1_t86689E04CADC36E81BC1A54F65539102D6B5CB49* V_3 = NULL;
	Exception_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Il2CppFullySharedGenericAny V_8 = alloca(SizeOf_T_tADE3540C3670C1D7457D9A24F628CF70631DA7EA);
	memset(V_8, 0, SizeOf_T_tADE3540C3670C1D7457D9A24F628CF70631DA7EA);
	bool V_9 = false;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_12;
	memset((&V_12), 0, sizeof(V_12));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t V_14 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 3> __active_exceptions;
	int32_t G_B28_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014_1;
			}
		}
		{
			goto IL_0019_1;
		}

IL_0012_1:
		{
			goto IL_0047_1;
		}

IL_0014_1:
		{
			goto IL_01e0_1;
		}

IL_0019_1:
		{
			__this->___U3CrepeatU3E5__1_6 = (bool)0;
		}

IL_0021_1:
		{
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__2_7 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_7), (void*)L_5);
			__this->___U3CU3Es__3_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_8), (void*)NULL);
			__this->___U3CU3Es__4_9 = 0;
		}

IL_0047_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_004d_2;
				}
			}
			{
				goto IL_004f_2;
			}

IL_004d_2:
			{
				goto IL_0056_2;
			}

IL_004f_2:
			{
				goto IL_0162_2;
			}

IL_0055_2:
			{
			}

IL_0056_2:
			{
			}
			try
			{
				{
					int32_t L_7 = V_0;
					if (!L_7)
					{
						goto IL_005c_3;
					}
				}
				{
					goto IL_005e_3;
				}

IL_005c_3:
				{
					goto IL_00a3_3;
				}

IL_005e_3:
				{
					RuntimeObject* L_8 = (RuntimeObject*)__this->___U3CeU3E5__2_7;
					NullCheck(L_8);
					UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_9;
					L_9 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8);
					V_2 = L_9;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_10;
					L_10 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_2), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
					V_1 = L_10;
					bool L_11;
					L_11 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_1), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
					if (L_11)
					{
						goto IL_00bf_3;
					}
				}
				{
					int32_t L_12 = 0;
					V_0 = L_12;
					__this->___U3CU3E1__state_0 = L_12;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_13 = V_1;
					__this->___U3CU3Eu__1_13 = L_13;
					Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
					V_3 = __this;
					AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_14 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
					((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CBindToCoreU3Ed__6_1_t86689E04CADC36E81BC1A54F65539102D6B5CB49**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_14, (&V_1), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
					goto IL_0299;
				}

IL_00a3_3:
				{
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_15 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_13;
					V_1 = L_15;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_16 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_13);
					il2cpp_codegen_initobj(L_16, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
					int32_t L_17 = (-1);
					V_0 = L_17;
					__this->___U3CU3E1__state_0 = L_17;
				}

IL_00bf_3:
				{
					bool L_18;
					L_18 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_1), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
					__this->___U3CU3Es__6_11 = L_18;
					bool L_19 = (bool)__this->___U3CU3Es__6_11;
					__this->___U3CmoveNextU3E5__5_10 = L_19;
					__this->___U3CrepeatU3E5__1_6 = (bool)0;
					goto IL_012a_2;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00e2_2;
				}
				throw e;
			}

CATCH_00e2_2:
			{
				{
					V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					Exception_t* L_20 = V_4;
					__this->___U3CexU3E5__7_12 = L_20;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__7_12), (void*)L_20);
					Exception_t* L_21 = (Exception_t*)__this->___U3CexU3E5__7_12;
					V_5 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_21, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_22 = V_5;
					if (!L_22)
					{
						goto IL_0103_2;
					}
				}
				{
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0173_2;
				}

IL_0103_2:
				{
					bool L_23 = (bool)__this->___rebindOnError_5;
					if (!L_23)
					{
						goto IL_0116_2;
					}
				}
				{
					bool L_24 = (bool)__this->___U3CrepeatU3E5__1_6;
					G_B28_0 = ((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
					goto IL_0117_2;
				}

IL_0116_2:
				{
					G_B28_0 = 0;
				}

IL_0117_2:
				{
					V_6 = (bool)G_B28_0;
					bool L_25 = V_6;
					if (!L_25)
					{
						goto IL_0127_2;
					}
				}
				{
					__this->___U3CrepeatU3E5__1_6 = (bool)1;
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_016a_2;
				}

IL_0127_2:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				}
			}

IL_012a_2:
			{
				bool L_26 = (bool)__this->___U3CmoveNextU3E5__5_10;
				V_7 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
				bool L_27 = V_7;
				if (!L_27)
				{
					goto IL_013b_2;
				}
			}
			{
				goto IL_0173_2;
			}

IL_013b_2:
			{
				Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_28 = (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62*)__this->___text_3;
				RuntimeObject* L_29 = (RuntimeObject*)__this->___U3CeU3E5__2_7;
				NullCheck(L_29);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_29, (Il2CppFullySharedGenericAny*)L_30);
				il2cpp_codegen_memcpy(V_8, L_30, SizeOf_T_tADE3540C3670C1D7457D9A24F628CF70631DA7EA);
				String_t* L_32;
				L_32 = ConstrainedFuncInvoker0< String_t* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 8), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_31, (void*)(Il2CppFullySharedGenericAny*)V_8);
				NullCheck(L_28);
				VirtualActionInvoker1< String_t* >::Invoke(75, L_28, L_32);
			}

IL_0162_2:
			{
				V_9 = (bool)1;
				goto IL_0055_2;
			}

IL_016a_2:
			{
				__this->___U3CU3Es__4_9 = 1;
				goto IL_0188_1;
			}

IL_0173_2:
			{
				__this->___U3CU3Es__4_9 = 2;
				goto IL_0188_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_017c_1;
			}
			throw e;
		}

CATCH_017c_1:
		{
			V_10 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_33 = V_10;
			__this->___U3CU3Es__3_8 = L_33;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_8), (void*)L_33);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0188_1;
		}

IL_0188_1:
		{
			RuntimeObject* L_34 = (RuntimeObject*)__this->___U3CeU3E5__2_7;
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_34) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_35 = V_11;
			if (!L_35)
			{
				goto IL_0206_1;
			}
		}
		{
			RuntimeObject* L_36 = (RuntimeObject*)__this->___U3CeU3E5__2_7;
			NullCheck((RuntimeObject*)L_36);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_37;
			L_37 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
			V_13 = L_37;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_38;
			L_38 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_13), NULL);
			V_12 = L_38;
			bool L_39;
			L_39 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_39)
			{
				goto IL_01fd_1;
			}
		}
		{
			int32_t L_40 = 1;
			V_0 = L_40;
			__this->___U3CU3E1__state_0 = L_40;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41 = V_12;
			__this->___U3CU3Eu__2_14 = L_41;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
			V_3 = __this;
			AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_42 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CBindToCoreU3Ed__6_1_t86689E04CADC36E81BC1A54F65539102D6B5CB49**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_42, (&V_12), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
			goto IL_0299;
		}

IL_01e0_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_43 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_14;
			V_12 = L_43;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_44 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_14);
			il2cpp_codegen_initobj(L_44, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_45 = (-1);
			V_0 = L_45;
			__this->___U3CU3E1__state_0 = L_45;
		}

IL_01fd_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_0206_1:
		{
			RuntimeObject* L_46 = (RuntimeObject*)__this->___U3CU3Es__3_8;
			V_10 = L_46;
			RuntimeObject* L_47 = V_10;
			if (!L_47)
			{
				goto IL_0230_1;
			}
		}
		{
			RuntimeObject* L_48 = V_10;
			V_4 = ((Exception_t*)IsInstClass((RuntimeObject*)L_48, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_49 = V_4;
			if (L_49)
			{
				goto IL_0223_1;
			}
		}
		{
			RuntimeObject* L_50 = V_10;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_50, method);
		}

IL_0223_1:
		{
			Exception_t* L_51 = V_4;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_52;
			L_52 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_51, NULL);
			NullCheck(L_52);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_52, NULL);
		}

IL_0230_1:
		{
			int32_t L_53 = (int32_t)__this->___U3CU3Es__4_9;
			V_14 = L_53;
			int32_t L_54 = V_14;
			if ((((int32_t)L_54) == ((int32_t)1)))
			{
				goto IL_0246_1;
			}
		}
		{
			goto IL_023f_1;
		}

IL_023f_1:
		{
			int32_t L_55 = V_14;
			if ((((int32_t)L_55) == ((int32_t)2)))
			{
				goto IL_024b_1;
			}
		}
		{
			goto IL_024d_1;
		}

IL_0246_1:
		{
			goto IL_0021_1;
		}

IL_024b_1:
		{
			goto IL_027e;
		}

IL_024d_1:
		{
			__this->___U3CU3Es__3_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_8), (void*)NULL);
			__this->___U3CeU3E5__2_7 = (RuntimeObject*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_7), (void*)(RuntimeObject*)NULL);
			goto IL_027e;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_025d;
		}
		throw e;
	}

CATCH_025d:
	{
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_56 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_57 = V_4;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(L_56, L_57, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0299;
	}

IL_027e:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_58 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(L_58, NULL);
	}

IL_0299:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBindToCoreU3Ed__6_1_SetStateMachine_m56D06C920DFC511A173F6DF5F0E98B294C6A57ED_gshared (U3CBindToCoreU3Ed__6_1_t86689E04CADC36E81BC1A54F65539102D6B5CB49* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) 
{
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline((&L_0), __this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline(L_0, NULL);
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (&__this->___task_0);
		RuntimeObject* L_1 = L_0->___source_0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_0031;
	}

IL_0015:
	{
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_3 = (&__this->___task_0);
		RuntimeObject* L_4 = L_3->___source_0;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_5 = (&__this->___task_0);
		int16_t L_6 = L_5->___token_1;
		NullCheck(L_4);
		InterfaceActionInvoker1< int16_t >::Invoke(2, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_4, L_6);
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___runner_0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_2 = __this->___runner_0;
		NullCheck(L_2);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
		L_3 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(2, IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var, L_2);
		il2cpp_codegen_runtime_class_init_inline(PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		PlayerLoopHelper_AddContinuation_m5B8F03E45A820D91B17CFA56AA93E7444BEC17E0(((int32_t)13), L_3, NULL);
		__this->___runner_0 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runner_0), (void*)(RuntimeObject*)NULL);
	}

IL_002a:
	{
		Exception_t* L_4 = ___0_exception;
		il2cpp_codegen_runtime_class_init_inline(UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var);
		UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3(L_4, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___runner_0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_2 = __this->___runner_0;
		NullCheck(L_2);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3;
		L_3 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(2, IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var, L_2);
		il2cpp_codegen_runtime_class_init_inline(PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		PlayerLoopHelper_AddContinuation_m5B8F03E45A820D91B17CFA56AA93E7444BEC17E0(((int32_t)13), L_3, NULL);
		__this->___runner_0 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runner_0), (void*)(RuntimeObject*)NULL);
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) 
{
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_inline((&L_0), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_0 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_0 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_4 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task_0);
		bool L_5 = (bool)L_4->___result_1;
		V_2 = L_5;
		goto IL_0039;
	}

IL_0024:
	{
		RuntimeObject* L_6 = V_0;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_7 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task_0);
		int16_t L_8 = (int16_t)L_7->___token_2;
		NullCheck(L_6);
		bool L_9;
		L_9 = InterfaceFuncInvoker1< bool, int16_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_6, L_8);
		V_2 = L_9;
		goto IL_0039;
	}

IL_0039:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Exception_t* L_2 = ___0_exception;
		__this->___ex_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ex_1), (void*)L_2);
		goto IL_0028;
	}

IL_0019:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___runnerPromise_0;
		Exception_t* L_4 = ___0_exception;
		NullCheck(L_3);
		InterfaceActionInvoker1< Exception_t* >::Invoke(3, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, bool ___0_result, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		bool L_2 = ___0_result;
		__this->___result_2 = L_2;
		goto IL_0028;
	}

IL_0019:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___runnerPromise_0;
		bool L_4 = ___0_result;
		NullCheck(L_3);
		InterfaceActionInvoker1< bool >::Invoke(2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_gshared_inline (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Exception_t* L_2 = ___0_exception;
		__this->___ex_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ex_1), (void*)L_2);
		goto IL_0028;
	}

IL_0019:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___runnerPromise_0;
		Exception_t* L_4 = ___0_exception;
		NullCheck(L_3);
		InterfaceActionInvoker1< Exception_t* >::Invoke(3, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_gshared_inline (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* __this, double ___0_result, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		double L_2 = ___0_result;
		__this->___result_2 = L_2;
		goto IL_0028;
	}

IL_0019:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___runnerPromise_0;
		double L_4 = ___0_result;
		NullCheck(L_3);
		InterfaceActionInvoker1< double >::Invoke(2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_gshared_inline (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Exception_t* L_2 = ___0_exception;
		__this->___ex_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ex_1), (void*)L_2);
		goto IL_0028;
	}

IL_0019:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___runnerPromise_0;
		Exception_t* L_4 = ___0_exception;
		NullCheck(L_3);
		InterfaceActionInvoker1< Exception_t* >::Invoke(3, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_gshared_inline (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_result, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_2 = ___0_result;
		__this->___result_2 = L_2;
		goto IL_0028;
	}

IL_0019:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___runnerPromise_0;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_4 = ___0_result;
		NullCheck(L_3);
		InterfaceActionInvoker1< Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F >::Invoke(2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_gshared_inline (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Exception_t* L_2 = ___0_exception;
		__this->___ex_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ex_1), (void*)L_2);
		goto IL_0028;
	}

IL_0019:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___runnerPromise_0;
		Exception_t* L_4 = ___0_exception;
		NullCheck(L_3);
		InterfaceActionInvoker1< Exception_t* >::Invoke(3, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_gshared_inline (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_2 = ___0_result;
		__this->___result_2 = L_2;
		goto IL_0028;
	}

IL_0019:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___runnerPromise_0;
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_4 = ___0_result;
		NullCheck(L_3);
		InterfaceActionInvoker1< Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 >::Invoke(2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = (int64_t)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = (float)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_gshared_inline (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Exception_t* L_2 = ___0_exception;
		__this->___ex_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ex_1), (void*)L_2);
		goto IL_0028;
	}

IL_0019:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___runnerPromise_0;
		Exception_t* L_4 = ___0_exception;
		NullCheck(L_3);
		InterfaceActionInvoker1< Exception_t* >::Invoke(3, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_gshared_inline (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* __this, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___0_result, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_2 = ___0_result;
		__this->___result_2 = L_2;
		goto IL_0028;
	}

IL_0019:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___runnerPromise_0;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_4 = ___0_result;
		NullCheck(L_3);
		InterfaceActionInvoker1< Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 >::Invoke(2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = (double)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_gshared_inline (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_gshared_inline (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method) 
{
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_gshared_inline (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Exception_t* L_2 = ___0_exception;
		__this->___ex_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ex_1), (void*)L_2);
		goto IL_0028;
	}

IL_0019:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___runnerPromise_0;
		Exception_t* L_4 = ___0_exception;
		NullCheck(L_3);
		InterfaceActionInvoker1< Exception_t* >::Invoke(3, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_gshared_inline (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* __this, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_2 = ___0_result;
		__this->___result_2 = L_2;
		goto IL_0028;
	}

IL_0019:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___runnerPromise_0;
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_4 = ___0_result;
		NullCheck(L_3);
		InterfaceActionInvoker1< Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB >::Invoke(2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_gshared_inline (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Exception_t* L_2 = ___0_exception;
		__this->___ex_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ex_1), (void*)L_2);
		goto IL_0028;
	}

IL_0019:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___runnerPromise_0;
		Exception_t* L_4 = ___0_exception;
		NullCheck(L_3);
		InterfaceActionInvoker1< Exception_t* >::Invoke(3, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_gshared_inline (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* __this, float ___0_result, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		float L_2 = ___0_result;
		__this->___result_2 = L_2;
		goto IL_0028;
	}

IL_0019:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___runnerPromise_0;
		float L_4 = ___0_result;
		NullCheck(L_3);
		InterfaceActionInvoker1< float >::Invoke(2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_gshared_inline (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* __this, const RuntimeMethod* method) 
{
	Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m65B703CDA0E48F294713CCCF06A7B5AF705D8E1F_inline((&L_0), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_gshared_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* L_0 = (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1*)(&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_mD1C383B359BDB954321BC6C44DA1631270CC29A6_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_gshared_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* L_0 = (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* L_4 = (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1*)(&__this->___task_0);
		float L_5 = (float)L_4->___result_1;
		V_2 = L_5;
		goto IL_0039;
	}

IL_0024:
	{
		RuntimeObject* L_6 = V_0;
		UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* L_7 = (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1*)(&__this->___task_0);
		int16_t L_8 = (int16_t)L_7->___token_2;
		NullCheck(L_6);
		float L_9;
		L_9 = InterfaceFuncInvoker1< float, int16_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_6, L_8);
		V_2 = L_9;
		goto IL_0039;
	}

IL_0039:
	{
		float L_10 = V_2;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_gshared_inline (UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C* __this, const RuntimeMethod* method) 
{
	Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m6F9092F52BBF30A9F5F0E23DE3EC280EF9EB161F_inline((&L_0), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_gshared_inline (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C* L_0 = (UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C*)(&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_m9A2BC9ECAC9AB86D3B937A70152799E4B8A45F04_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_gshared_inline (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	double V_2 = 0.0;
	{
		UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C* L_0 = (UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C* L_4 = (UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C*)(&__this->___task_0);
		double L_5 = (double)L_4->___result_1;
		V_2 = L_5;
		goto IL_0039;
	}

IL_0024:
	{
		RuntimeObject* L_6 = V_0;
		UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C* L_7 = (UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C*)(&__this->___task_0);
		int16_t L_8 = (int16_t)L_7->___token_2;
		NullCheck(L_6);
		double L_9;
		L_9 = InterfaceFuncInvoker1< double, int16_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_6, L_8);
		V_2 = L_9;
		goto IL_0039;
	}

IL_0039:
	{
		double L_10 = V_2;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_gshared_inline (UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3* __this, const RuntimeMethod* method) 
{
	Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m8581AFDBBB66C89C57A4AF21C6DA72286C674EEE_inline((&L_0), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_gshared_inline (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3* L_0 = (UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3*)(&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_mD2B1B68F55469700BFCCE4B030BB08CDEFCFB5BE_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_gshared_inline (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3* L_0 = (UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3* L_4 = (UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3*)(&__this->___task_0);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_5 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)L_4->___result_1;
		V_2 = L_5;
		goto IL_0039;
	}

IL_0024:
	{
		RuntimeObject* L_6 = V_0;
		UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3* L_7 = (UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3*)(&__this->___task_0);
		int16_t L_8 = (int16_t)L_7->___token_2;
		NullCheck(L_6);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_9;
		L_9 = InterfaceFuncInvoker1< Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F, int16_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_6, L_8);
		V_2 = L_9;
		goto IL_0039;
	}

IL_0039:
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_10 = V_2;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_gshared_inline (UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05* __this, const RuntimeMethod* method) 
{
	Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m43ADCACEE034092BE0485AC2039932F41B068645_inline((&L_0), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_gshared_inline (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05* L_0 = (UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05*)(&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_mD3993C707FF463A5E5150B823D0F2C2F63D38AED_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_gshared_inline (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05* L_0 = (UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05* L_4 = (UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05*)(&__this->___task_0);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_5 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28)L_4->___result_1;
		V_2 = L_5;
		goto IL_0039;
	}

IL_0024:
	{
		RuntimeObject* L_6 = V_0;
		UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05* L_7 = (UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05*)(&__this->___task_0);
		int16_t L_8 = (int16_t)L_7->___token_2;
		NullCheck(L_6);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_9;
		L_9 = InterfaceFuncInvoker1< Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, int16_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_6, L_8);
		V_2 = L_9;
		goto IL_0039;
	}

IL_0039:
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_10 = V_2;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_gshared_inline (UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C* __this, const RuntimeMethod* method) 
{
	Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m1A781E603FA4535B04661E93F415BD20AD7E562B_inline((&L_0), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_gshared_inline (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C* L_0 = (UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C*)(&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_m668DE5FADE457B216736782DC297E4C3B141BC19_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_gshared_inline (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C* L_0 = (UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C* L_4 = (UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C*)(&__this->___task_0);
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_5 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17)L_4->___result_1;
		V_2 = L_5;
		goto IL_0039;
	}

IL_0024:
	{
		RuntimeObject* L_6 = V_0;
		UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C* L_7 = (UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C*)(&__this->___task_0);
		int16_t L_8 = (int16_t)L_7->___token_2;
		NullCheck(L_6);
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_9;
		L_9 = InterfaceFuncInvoker1< Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17, int16_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_6, L_8);
		V_2 = L_9;
		goto IL_0039;
	}

IL_0039:
	{
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_10 = V_2;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t8953594D03299DE782894F4A865CED79F2504266 UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_gshared_inline (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* __this, const RuntimeMethod* method) 
{
	Awaiter_t8953594D03299DE782894F4A865CED79F2504266 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m2D382159CB5D690EEEDB435E6183DBDBD9560CA3_inline((&L_0), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_gshared_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* L_0 = (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48*)(&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_m688D534E5DE535F713C9D2C84744BB51F95416F5_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_gshared_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* L_0 = (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* L_4 = (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48*)(&__this->___task_0);
		int32_t L_5 = (int32_t)L_4->___result_1;
		V_2 = L_5;
		goto IL_0039;
	}

IL_0024:
	{
		RuntimeObject* L_6 = V_0;
		UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* L_7 = (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48*)(&__this->___task_0);
		int16_t L_8 = (int16_t)L_7->___token_2;
		NullCheck(L_6);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_6, L_8);
		V_2 = L_9;
		goto IL_0039;
	}

IL_0039:
	{
		int32_t L_10 = V_2;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_gshared_inline (UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* __this, const RuntimeMethod* method) 
{
	Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_mB257E1F06754BE00907B9F223E1CED109BE0A9E9_inline((&L_0), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_gshared_inline (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* L_0 = (UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46*)(&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_m5810EA6A8A912CF428FDABFDD39E978F898ABCF6_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_gshared_inline (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* L_0 = (UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* L_4 = (UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46*)(&__this->___task_0);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_5 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75)L_4->___result_1;
		V_2 = L_5;
		goto IL_0039;
	}

IL_0024:
	{
		RuntimeObject* L_6 = V_0;
		UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* L_7 = (UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46*)(&__this->___task_0);
		int16_t L_8 = (int16_t)L_7->___token_2;
		NullCheck(L_6);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_9;
		L_9 = InterfaceFuncInvoker1< Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75, int16_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_6, L_8);
		V_2 = L_9;
		goto IL_0039;
	}

IL_0039:
	{
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_10 = V_2;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_gshared_inline (UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* __this, const RuntimeMethod* method) 
{
	Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m9D5EF23B6F3F4362E6DA714FE205E179615A6485_inline((&L_0), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_gshared_inline (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* L_0 = (UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E*)(&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_m364E955D88F0ED41DD3142E30E5C1FC3992A4320_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_gshared_inline (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* L_0 = (UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* L_4 = (UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E*)(&__this->___task_0);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_5 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165)L_4->___result_1;
		V_2 = L_5;
		goto IL_0039;
	}

IL_0024:
	{
		RuntimeObject* L_6 = V_0;
		UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* L_7 = (UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E*)(&__this->___task_0);
		int16_t L_8 = (int16_t)L_7->___token_2;
		NullCheck(L_6);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_9;
		L_9 = InterfaceFuncInvoker1< Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165, int16_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_6, L_8);
		V_2 = L_9;
		goto IL_0039;
	}

IL_0039:
	{
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_10 = V_2;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_gshared_inline (UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* __this, const RuntimeMethod* method) 
{
	Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m411324A17AA6E44DD7F24A60FF2A75F2E7F27F53_inline((&L_0), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_gshared_inline (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* L_0 = (UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F*)(&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_m0DC9F6711B39ED08865F0CF67538D05129880C94_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_gshared_inline (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* L_0 = (UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* L_4 = (UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F*)(&__this->___task_0);
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_5 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB)L_4->___result_1;
		V_2 = L_5;
		goto IL_0039;
	}

IL_0024:
	{
		RuntimeObject* L_6 = V_0;
		UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* L_7 = (UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F*)(&__this->___task_0);
		int16_t L_8 = (int16_t)L_7->___token_2;
		NullCheck(L_6);
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_9;
		L_9 = InterfaceFuncInvoker1< Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB, int16_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_6, L_8);
		V_2 = L_9;
		goto IL_0039;
	}

IL_0039:
	{
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_10 = V_2;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_gshared_inline (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* __this, const RuntimeMethod* method) 
{
	Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m2F2F413B4B8E320AC83D464DE19E5B81D8616185_inline((&L_0), __this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_gshared_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* L_0 = (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72*)(&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_m621A3ED628D31F42C69A04584E93A8A02E381117_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_gshared_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int64_t V_2 = 0;
	{
		UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* L_0 = (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* L_4 = (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72*)(&__this->___task_0);
		int64_t L_5 = (int64_t)L_4->___result_1;
		V_2 = L_5;
		goto IL_0039;
	}

IL_0024:
	{
		RuntimeObject* L_6 = V_0;
		UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* L_7 = (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72*)(&__this->___task_0);
		int16_t L_8 = (int16_t)L_7->___token_2;
		NullCheck(L_6);
		int64_t L_9;
		L_9 = InterfaceFuncInvoker1< int64_t, int16_t >::Invoke(0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_6, L_8);
		V_2 = L_9;
		goto IL_0039;
	}

IL_0039:
	{
		int64_t L_10 = V_2;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* ___0_task, const RuntimeMethod* method) 
{
	{
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = ___0_task;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1 = (*(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source_0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		V_1 = 1;
		goto IL_0026;
	}

IL_0012:
	{
		RuntimeObject* L_2 = __this->___source_0;
		int16_t L_3 = __this->___token_1;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_2, L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___0_status, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___0_status;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0008;
	}

IL_0008:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___0_task, const RuntimeMethod* method) 
{
	{
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_0 = ___0_task;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = (*(UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___source_0;
		int16_t L_2 = (int16_t)__this->___token_2;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m65B703CDA0E48F294713CCCF06A7B5AF705D8E1F_gshared_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* ___0_task, const RuntimeMethod* method) 
{
	{
		UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* L_0 = ___0_task;
		UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1 L_1 = (*(UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mD1C383B359BDB954321BC6C44DA1631270CC29A6_gshared_inline (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___source_0;
		int16_t L_2 = (int16_t)__this->___token_2;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m6F9092F52BBF30A9F5F0E23DE3EC280EF9EB161F_gshared_inline (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* __this, UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C* ___0_task, const RuntimeMethod* method) 
{
	{
		UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C* L_0 = ___0_task;
		UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C L_1 = (*(UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m9A2BC9ECAC9AB86D3B937A70152799E4B8A45F04_gshared_inline (UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___source_0;
		int16_t L_2 = (int16_t)__this->___token_2;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m8581AFDBBB66C89C57A4AF21C6DA72286C674EEE_gshared_inline (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* __this, UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3* ___0_task, const RuntimeMethod* method) 
{
	{
		UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3* L_0 = ___0_task;
		UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3 L_1 = (*(UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mD2B1B68F55469700BFCCE4B030BB08CDEFCFB5BE_gshared_inline (UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___source_0;
		int16_t L_2 = (int16_t)__this->___token_2;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m43ADCACEE034092BE0485AC2039932F41B068645_gshared_inline (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* __this, UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05* ___0_task, const RuntimeMethod* method) 
{
	{
		UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05* L_0 = ___0_task;
		UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05 L_1 = (*(UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mD3993C707FF463A5E5150B823D0F2C2F63D38AED_gshared_inline (UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___source_0;
		int16_t L_2 = (int16_t)__this->___token_2;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m1A781E603FA4535B04661E93F415BD20AD7E562B_gshared_inline (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* __this, UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C* ___0_task, const RuntimeMethod* method) 
{
	{
		UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C* L_0 = ___0_task;
		UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C L_1 = (*(UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m668DE5FADE457B216736782DC297E4C3B141BC19_gshared_inline (UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___source_0;
		int16_t L_2 = (int16_t)__this->___token_2;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m2D382159CB5D690EEEDB435E6183DBDBD9560CA3_gshared_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* ___0_task, const RuntimeMethod* method) 
{
	{
		UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* L_0 = ___0_task;
		UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 L_1 = (*(UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m688D534E5DE535F713C9D2C84744BB51F95416F5_gshared_inline (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___source_0;
		int16_t L_2 = (int16_t)__this->___token_2;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mB257E1F06754BE00907B9F223E1CED109BE0A9E9_gshared_inline (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* __this, UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* ___0_task, const RuntimeMethod* method) 
{
	{
		UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* L_0 = ___0_task;
		UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46 L_1 = (*(UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m5810EA6A8A912CF428FDABFDD39E978F898ABCF6_gshared_inline (UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___source_0;
		int16_t L_2 = (int16_t)__this->___token_2;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m9D5EF23B6F3F4362E6DA714FE205E179615A6485_gshared_inline (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* __this, UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* ___0_task, const RuntimeMethod* method) 
{
	{
		UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* L_0 = ___0_task;
		UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E L_1 = (*(UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m364E955D88F0ED41DD3142E30E5C1FC3992A4320_gshared_inline (UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___source_0;
		int16_t L_2 = (int16_t)__this->___token_2;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m411324A17AA6E44DD7F24A60FF2A75F2E7F27F53_gshared_inline (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* __this, UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* ___0_task, const RuntimeMethod* method) 
{
	{
		UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* L_0 = ___0_task;
		UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F L_1 = (*(UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m0DC9F6711B39ED08865F0CF67538D05129880C94_gshared_inline (UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___source_0;
		int16_t L_2 = (int16_t)__this->___token_2;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m2F2F413B4B8E320AC83D464DE19E5B81D8616185_gshared_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* ___0_task, const RuntimeMethod* method) 
{
	{
		UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* L_0 = ___0_task;
		UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72 L_1 = (*(UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m621A3ED628D31F42C69A04584E93A8A02E381117_gshared_inline (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___source_0;
		int16_t L_2 = (int16_t)__this->___token_2;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
