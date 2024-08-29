#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
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
template <typename T1>
struct ConstrainedActionInvoker1
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, params[0]);
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

struct U3CSingleAsyncU3Ed__1_1_tDD63529E4120D64B4A4C8E8106CE2D0588688B8D;
struct U3CSingleAwaitAsyncU3Ed__2_1_t7522BF6A86563959730ACF759C23778D1C3A9D10;
struct U3CSingleAwaitWithCancellationAsyncU3Ed__3_1_t2FCEA518DC6B93775D61B6AA5C6C272015361B9B;
struct U3CSortAsyncU3Ed__2_t057E5D531E170020DD3D6A1FC5F4888D512503FA;
struct U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47;
struct U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D;
struct U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB;
struct U3CStartU3Ed__2_t1568C5BC91DF861B9E8D83BD27BF6FB38F40D685;
struct U3CStartU3Ed__2_tBF82820C779B852A606DE0B61E09B9EB4A27F942;
struct U3CSubscribeAwaitCoreU3Ed__6_1_tC7FE9328FB7A6EBDE3A973CF3F21ED0DC0DED259;
struct U3CSubscribeAwaitCoreU3Ed__7_1_t31834B4A48C6C713676D223C49B695A3DCF34F27;
struct U3CSubscribeCoreU3Ed__2_1_tE00796033B09ACBC588647F42A7F1CEFE1039AB9;
struct U3CSubscribeCoreU3Ed__3_1_t1B707BBB1828A665EBF727F1C2B6998FE1FFC7D1;
struct U3CSubscribeCoreU3Ed__4_1_tEED4C93552B0C2FF08F4FB783AF0E55B27B6B57A;
struct U3CSubscribeCoreU3Ed__5_1_t78B9948DE9BF80171983705E80362EDDD2E14E71;
struct U3CSumAsyncU3Ed__13_1_t209934E841BF9E459D62068F36422D9C84FA129B;
struct U3CSumAsyncU3Ed__17_1_t9A799883ADE2290E1064DFC70D00986CB337A36E;
struct U3CSumAsyncU3Ed__1_1_t9BF5D0D8CADBEE6A19BA166D5976491E833861FE;
struct U3CSumAsyncU3Ed__21_1_t9D1C7252084BF8D97F912E631E7602E24570A7B1;
struct U3CSumAsyncU3Ed__25_1_tE1C9BDAC2A20628F30CDF2FBA15D3D42C30FD592;
struct U3CSumAsyncU3Ed__29_1_tB079773830BA8E89A4B0BEA49F7AE3B2745B16A0;
struct U3CSumAsyncU3Ed__33_1_tE492BB06E14A49C64213C2B23EB667C8803EE6B4;
struct U3CSumAsyncU3Ed__37_1_tB6E696A6F6E8F5B7DAF325F2930A4AF4FBFDF8F4;
struct U3CSumAsyncU3Ed__5_1_tEFCAF49FB9A4C414549A6E09E17BD5FE81C2861C;
struct U3CSumAsyncU3Ed__9_1_tE9C33F88D507553C1DEFCB5DF9AAB48A2FFABBBC;
struct U3CSumAwaitAsyncU3Ed__10_1_t3C9301D3FBC8BF17E8905D0F9C579BB0F8B5ECAB;
struct U3CSumAwaitAsyncU3Ed__14_1_t39E2613E40C2E30242C356183627962F38F04065;
struct U3CSumAwaitAsyncU3Ed__18_1_t6EB43FF2636C2168869DE066167C7D3F81EB9125;
struct U3CSumAwaitAsyncU3Ed__22_1_t625242089553211042F970C9A03E800B7C7DB719;
struct U3CSumAwaitAsyncU3Ed__26_1_t844C4B8D187A39025A4373512E24354C79BAFD9E;
struct U3CSumAwaitAsyncU3Ed__2_1_t596CCC6BAE9FFE2951D8B6694A1C7AC9954A3981;
struct U3CSumAwaitAsyncU3Ed__30_1_tCB37D1624B890AE442263C7F27D15692732E4151;
struct U3CSumAwaitAsyncU3Ed__34_1_tF81F2BBE17C4A4FC66EF061BBCD5B91BD910B040;
struct U3CSumAwaitAsyncU3Ed__38_1_t5167247A6C0E72794A66E9B645DDEB0288F05988;
struct U3CSumAwaitAsyncU3Ed__6_1_tFD7597B21E6A2D0D272827AD3E4561A5CD38F6F8;
struct U3CSumAwaitWithCancellationAsyncU3Ed__11_1_t30362DB8F1ECD4EF87DEF287A08C47822BCDDF03;
struct U3CSumAwaitWithCancellationAsyncU3Ed__15_1_tD4CD9C1B12F3430337DF9DD04607F4CCE6F4EEBE;
struct U3CSumAwaitWithCancellationAsyncU3Ed__19_1_tE07DB630BAD8C23C81D68718CC01F510B600F4C7;
struct U3CSumAwaitWithCancellationAsyncU3Ed__23_1_t3E1C181CD17E952043027C5FC752AC8458B7017A;
struct U3CSumAwaitWithCancellationAsyncU3Ed__27_1_t1A8CF8D93698BBDBD2A2BA1334B37FC52923116B;
struct U3CSumAwaitWithCancellationAsyncU3Ed__31_1_tE2A17D1F168471DC9CB5CA03843155C58FA9E86E;
struct U3CSumAwaitWithCancellationAsyncU3Ed__35_1_t41BAC341849974918993DEF5FB9BA2C2D161D8BE;
struct U3CSumAwaitWithCancellationAsyncU3Ed__39_1_t9B9764166BCC8B49A015F6D3F64552E2068D00D4;
struct Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
struct AsyncEnumerableSorter_1_tB12E111BEE1BE3928D42C95E823E309905F94836;
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
struct Func_2_tB9800595B3251D2492E40667A6C05061784D48FB;
struct Func_2_t1E86949F09236014700CDAC386B21A17602F974C;
struct Func_3_t428A771ED20C241CDDC6BDF17284D499B16CBD70;
struct Func_3_tD24255148664E4908FBCB566B787F36A4988A2BB;
struct Func_3_tA0DEFAEF785E5E0D32E2CABA4CBDB7F9D34C2B8D;
struct Func_3_t4111B7EAAEBCF4004223B4E554711FE862E5C3B2;
struct Func_3_t5604379C942DED2B342DEED029BC1AB35C5A06A1;
struct Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814;
struct Func_3_tE135AFB66CDB73C25CDE9CDD97913EE0CF6337D7;
struct Func_3_tB356387A25DA85D9F4DDAAEEFD39A96B3F81FA95;
struct Func_3_t79F461272893123C05C047A343D70B9B775827E4;
struct Func_3_tEBFC185F508D6150079151B2395F5DE7B54CC752;
struct Func_3_t5659CC7C991DA571259A44032C4AE7AC307EB3E5;
struct IObserver_1_t094BE2515872266E98A772AEA02B413105F16A8B;
struct IStateMachineRunnerPromise_1_t8D57C4F4548F3BCD478D68C0B1214D4BF62AA68D;
struct IStateMachineRunnerPromise_1_t51E154A16BAD95B7D398B5F0702C3E66265C53DA;
struct IStateMachineRunnerPromise_1_tBE2C23E7E2B62C56C552514DE41331D016E88894;
struct IStateMachineRunnerPromise_1_t2CCBC9102ABF89E60F08B479B9A9F8E564FDCE5B;
struct IStateMachineRunnerPromise_1_t1AB0B5E2CA50004E9184B2F5382B9C646CD88F94;
struct IStateMachineRunnerPromise_1_t081198957D8C689B43062E423B886E085146C60D;
struct IStateMachineRunnerPromise_1_t9061D15A609C242C57AE7E2186438B3A765049A0;
struct IStateMachineRunnerPromise_1_t60C36DF27100A1AAC871929239A758A920192D30;
struct IStateMachineRunnerPromise_1_t4D71EE585F49FBECBCB54253A802F3C93921778B;
struct IStateMachineRunnerPromise_1_tFE8A013B1056925F687501E7EA6E1D49D1DE4BE2;
struct IStateMachineRunnerPromise_1_tDE5A582A56CD943C240DEE90935B51C23578A18B;
struct IStateMachineRunnerPromise_1_t13A438173E94750804DBD5134EB865935FADCFD8;
struct IStateMachineRunnerPromise_1_t33359314377828B79D5AB55278350F65F2237DD9;
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
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148;
struct IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ColorTweenCallback_tBE6685495BFEE2763BED5BF7EFC9571F7F1D724E;
struct FloatTweenCallback_t5348AE7D6567149477FA6C0B7A70DBCEA1E73C7E;
struct FloatTweenCallback_tF3159C7BD29B10629506C32DBDC426B076A308CC;

IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Subscribe_t65C94F6EDBB645D24A16DB00D5BA490B834282BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralE451574BD6072D966A96174174834C5304D10BDC;
IL2CPP_EXTERN_C String_t* _stringLiteralF26C76B1728491A2D7039EBFC35CFDE0D352C43A;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m668B0B683F2B4B7005D076DE9400F32B1702673B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_mE8C5BA18D2449D6BD546630CE70DE315F5F91FCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_mECBEAC6E4C036A31B0911484E7BB8D58F7F543D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m58F872D008CE598740B661495F8297C4E2F555BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_RuntimeMethod_var;
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

struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CStartU3Ed__2_t1568C5BC91DF861B9E8D83BD27BF6FB38F40D685 : public RuntimeObject {};
struct U3CStartU3Ed__2_tBF82820C779B852A606DE0B61E09B9EB4A27F942 : public RuntimeObject {};
struct AsyncEnumerableSorter_1_tB12E111BEE1BE3928D42C95E823E309905F94836  : public RuntimeObject
{
};
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
struct Subscribe_t65C94F6EDBB645D24A16DB00D5BA490B834282BC  : public RuntimeObject
{
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
struct AsyncUniTaskMethodBuilder_1_t012B41921636A2A189618FE848BE0FCB77D18906 
{
	RuntimeObject* ___runnerPromise_0;
	Exception_t* ___ex_1;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___result_2;
	RuntimeObject* ___debuggingId_3;
};
struct AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408 
{
	RuntimeObject* ___runnerPromise_0;
	Exception_t* ___ex_1;
	double ___result_2;
	RuntimeObject* ___debuggingId_3;
};
struct AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E 
{
	RuntimeObject* ___runnerPromise_0;
	Exception_t* ___ex_1;
	int32_t ___result_2;
	RuntimeObject* ___debuggingId_3;
};
struct AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6 
{
	RuntimeObject* ___runnerPromise_0;
	Exception_t* ___ex_1;
	int64_t ___result_2;
	RuntimeObject* ___debuggingId_3;
};
struct AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF 
{
	RuntimeObject* ___runnerPromise_0;
	Exception_t* ___ex_1;
	RuntimeObject* ___result_2;
	RuntimeObject* ___debuggingId_3;
};
struct AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3 
{
	RuntimeObject* ___runnerPromise_0;
	Exception_t* ___ex_1;
	float ___result_2;
	RuntimeObject* ___debuggingId_3;
};
typedef Il2CppFullySharedGenericStruct AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52;
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
struct FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE 
{
	FloatTweenCallback_t5348AE7D6567149477FA6C0B7A70DBCEA1E73C7E* ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	bool ___m_IgnoreTimeScale_4;
};
struct FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE_marshaled_pinvoke
{
	FloatTweenCallback_t5348AE7D6567149477FA6C0B7A70DBCEA1E73C7E* ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};
struct FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE_marshaled_com
{
	FloatTweenCallback_t5348AE7D6567149477FA6C0B7A70DBCEA1E73C7E* ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};
struct FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A 
{
	FloatTweenCallback_tF3159C7BD29B10629506C32DBDC426B076A308CC* ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	bool ___m_IgnoreTimeScale_4;
};
struct FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_marshaled_pinvoke
{
	FloatTweenCallback_tF3159C7BD29B10629506C32DBDC426B076A308CC* ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
};
struct FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A_marshaled_com
{
	FloatTweenCallback_tF3159C7BD29B10629506C32DBDC426B076A308CC* ___m_Target_0;
	float ___m_StartValue_1;
	float ___m_TargetValue_2;
	float ___m_Duration_3;
	int32_t ___m_IgnoreTimeScale_4;
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
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value_0;
};
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 
{
	RuntimeObject* ___source_0;
	int16_t ___token_1;
};
struct UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 
{
	union
	{
		struct
		{
		};
		uint8_t UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2__padding[1];
	};
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
struct U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	RuntimeObject* ___U3CU3E2__current_1;
	FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE ___tweenInfo_2;
	float ___U3CelapsedTimeU3E5__1_3;
	float ___U3CpercentageU3E5__2_4;
};
struct U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	RuntimeObject* ___U3CU3E2__current_1;
	FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A ___tweenInfo_2;
	float ___U3CelapsedTimeU3E5__1_3;
	float ___U3CpercentageU3E5__2_4;
};
struct AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438 
{
	RuntimeObject* ___runnerPromise_0;
	Exception_t* ___ex_1;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___result_2;
	RuntimeObject* ___debuggingId_3;
};
struct AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B 
{
	RuntimeObject* ___runnerPromise_0;
	Exception_t* ___ex_1;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___result_2;
	RuntimeObject* ___debuggingId_3;
};
struct AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED 
{
	RuntimeObject* ___runnerPromise_0;
	Exception_t* ___ex_1;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___result_2;
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
struct ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7 
{
	ColorTweenCallback_tBE6685495BFEE2763BED5BF7EFC9571F7F1D724E* ___m_Target_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_StartColor_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	bool ___m_IgnoreTimeScale_5;
};
struct ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_marshaled_pinvoke
{
	ColorTweenCallback_tBE6685495BFEE2763BED5BF7EFC9571F7F1D724E* ___m_Target_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_StartColor_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	int32_t ___m_IgnoreTimeScale_5;
};
struct ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7_marshaled_com
{
	ColorTweenCallback_tBE6685495BFEE2763BED5BF7EFC9571F7F1D724E* ___m_Target_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_StartColor_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_TargetColor_2;
	int32_t ___m_TweenMode_3;
	float ___m_Duration_4;
	int32_t ___m_IgnoreTimeScale_5;
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
struct U3CSingleAsyncU3Ed__1_1_tDD63529E4120D64B4A4C8E8106CE2D0588688B8D : public RuntimeObject {};
struct U3CSingleAwaitAsyncU3Ed__2_1_t7522BF6A86563959730ACF759C23778D1C3A9D10 : public RuntimeObject {};
struct U3CSingleAwaitWithCancellationAsyncU3Ed__3_1_t2FCEA518DC6B93775D61B6AA5C6C272015361B9B : public RuntimeObject {};
struct U3CSortAsyncU3Ed__2_t057E5D531E170020DD3D6A1FC5F4888D512503FA  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t012B41921636A2A189618FE848BE0FCB77D18906 ___U3CU3Et__builder_1;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___elements_2;
	int32_t ___count_3;
	AsyncEnumerableSorter_1_tB12E111BEE1BE3928D42C95E823E309905F94836* ___U3CU3E4__this_4;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__1_5;
	int32_t ___U3CiU3E5__2_6;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_7;
};
struct U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	RuntimeObject* ___U3CU3E2__current_1;
	ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7 ___tweenInfo_2;
	float ___U3CelapsedTimeU3E5__1_3;
	float ___U3CpercentageU3E5__2_4;
};
struct U3CSubscribeAwaitCoreU3Ed__6_1_tC7FE9328FB7A6EBDE3A973CF3F21ED0DC0DED259  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_tB9800595B3251D2492E40667A6C05061784D48FB* ___onNext_3;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___onError_4;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onCompleted_5;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_6;
	RuntimeObject* ___U3CeU3E5__1_7;
	RuntimeObject* ___U3CU3Es__2_8;
	int32_t ___U3CU3Es__3_9;
	Exception_t* ___U3CexU3E5__4_10;
	bool ___U3CU3Es__5_11;
	Exception_t* ___U3CexU3E5__6_12;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_13;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_14;
};
struct U3CSubscribeAwaitCoreU3Ed__7_1_t31834B4A48C6C713676D223C49B695A3DCF34F27  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_tEBFC185F508D6150079151B2395F5DE7B54CC752* ___onNext_3;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___onError_4;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onCompleted_5;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_6;
	RuntimeObject* ___U3CeU3E5__1_7;
	RuntimeObject* ___U3CU3Es__2_8;
	int32_t ___U3CU3Es__3_9;
	Exception_t* ___U3CexU3E5__4_10;
	bool ___U3CU3Es__5_11;
	Exception_t* ___U3CexU3E5__6_12;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_13;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_14;
};
struct U3CSubscribeCoreU3Ed__2_1_tE00796033B09ACBC588647F42A7F1CEFE1039AB9  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___onNext_3;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___onError_4;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onCompleted_5;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_6;
	RuntimeObject* ___U3CeU3E5__1_7;
	RuntimeObject* ___U3CU3Es__2_8;
	int32_t ___U3CU3Es__3_9;
	Exception_t* ___U3CexU3E5__4_10;
	bool ___U3CU3Es__5_11;
	Exception_t* ___U3CexU3E5__6_12;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_13;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_14;
};
struct U3CSubscribeCoreU3Ed__3_1_t1B707BBB1828A665EBF727F1C2B6998FE1FFC7D1  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_t1E86949F09236014700CDAC386B21A17602F974C* ___onNext_3;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___onError_4;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onCompleted_5;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_6;
	RuntimeObject* ___U3CeU3E5__1_7;
	RuntimeObject* ___U3CU3Es__2_8;
	int32_t ___U3CU3Es__3_9;
	Exception_t* ___U3CexU3E5__4_10;
	bool ___U3CU3Es__5_11;
	Exception_t* ___U3CexU3E5__6_12;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_13;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_14;
};
struct U3CSubscribeCoreU3Ed__4_1_tEED4C93552B0C2FF08F4FB783AF0E55B27B6B57A  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_t5659CC7C991DA571259A44032C4AE7AC307EB3E5* ___onNext_3;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___onError_4;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onCompleted_5;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_6;
	RuntimeObject* ___U3CeU3E5__1_7;
	RuntimeObject* ___U3CU3Es__2_8;
	int32_t ___U3CU3Es__3_9;
	Exception_t* ___U3CexU3E5__4_10;
	bool ___U3CU3Es__5_11;
	Exception_t* ___U3CexU3E5__6_12;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_13;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_14;
};
struct U3CSubscribeCoreU3Ed__5_1_t78B9948DE9BF80171983705E80362EDDD2E14E71  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	RuntimeObject* ___observer_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	RuntimeObject* ___U3CeU3E5__1_5;
	RuntimeObject* ___U3CU3Es__2_6;
	int32_t ___U3CU3Es__3_7;
	Exception_t* ___U3CexU3E5__4_8;
	bool ___U3CU3Es__5_9;
	Exception_t* ___U3CexU3E5__6_10;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_11;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_12;
};
struct U3CSumAsyncU3Ed__13_1_t209934E841BF9E459D62068F36422D9C84FA129B  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_tF36C7D1152BF6807C03112D4A053E5038A13A6EB* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	double ___U3CsumU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	bool ___U3CU3Es__5_9;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_10;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_11;
};
struct U3CSumAsyncU3Ed__17_1_t9A799883ADE2290E1064DFC70D00986CB337A36E  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_t5ABD904FFCFC84BA711C9261A36E9482990A6CA7* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CsumU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	bool ___U3CU3Es__5_9;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_10;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_11;
};
struct U3CSumAsyncU3Ed__1_1_t9BF5D0D8CADBEE6A19BA166D5976491E833861FE  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_t8DB808B3690BFDBD7B936631B430453B90DBBDE7* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int32_t ___U3CsumU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	bool ___U3CU3Es__5_9;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_10;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_11;
};
struct U3CSumAsyncU3Ed__21_1_t9D1C7252084BF8D97F912E631E7602E24570A7B1  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_t0DE0378A8A90F3B8204450750A771096D0F75A98* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CsumU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	bool ___U3CU3Es__5_9;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_10;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_11;
};
struct U3CSumAsyncU3Ed__25_1_tE1C9BDAC2A20628F30CDF2FBA15D3D42C30FD592  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_tFC0477C87E7518136DEE345DCF44B6ACA22E24F0* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CsumU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	bool ___U3CU3Es__5_9;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_10;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_11;
};
struct U3CSumAsyncU3Ed__29_1_tB079773830BA8E89A4B0BEA49F7AE3B2745B16A0  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_tCDF39BBC1094782C50BE631779E8FD895BFEAF32* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CsumU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	bool ___U3CU3Es__5_9;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_10;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_11;
};
struct U3CSumAsyncU3Ed__33_1_tE492BB06E14A49C64213C2B23EB667C8803EE6B4  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_tB9099E603733365FA636ABD4F1512E954C883863* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CsumU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	bool ___U3CU3Es__5_9;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_10;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_11;
};
struct U3CSumAsyncU3Ed__5_1_tEFCAF49FB9A4C414549A6E09E17BD5FE81C2861C  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_t08AB71331BE9C65EB982154CBB27F90B5B62A771* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CsumU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	bool ___U3CU3Es__5_9;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_10;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_11;
};
struct U3CSumAsyncU3Ed__9_1_tE9C33F88D507553C1DEFCB5DF9AAB48A2FFABBBC  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_tFAB3D8EFCE4F55CAB3F80EABAB10F8226D7FEBF6* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	float ___U3CsumU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	bool ___U3CU3Es__5_9;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_10;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_11;
};
struct U3CSumAwaitAsyncU3Ed__10_1_t3C9301D3FBC8BF17E8905D0F9C579BB0F8B5ECAB  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_t844387A4F32860587989B5D1B9F3950D6D5901DE* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	float ___U3CsumU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	float ___U3CU3Es__5_9;
	float ___U3CU3Es__6_10;
	bool ___U3CU3Es__7_11;
	Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D ___U3CU3Eu__1_12;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_13;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_14;
};
struct U3CSumAwaitAsyncU3Ed__14_1_t39E2613E40C2E30242C356183627962F38F04065  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_tF452F3FF30306E919291E498D051B5F208EB38CF* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	double ___U3CsumU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	double ___U3CU3Es__5_9;
	double ___U3CU3Es__6_10;
	bool ___U3CU3Es__7_11;
	Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 ___U3CU3Eu__1_12;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_13;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_14;
};
struct U3CSumAwaitAsyncU3Ed__2_1_t596CCC6BAE9FFE2951D8B6694A1C7AC9954A3981  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_t6561E0DBB0FBFCB8DBFA46F392A86C31706164F5* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int32_t ___U3CsumU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	int32_t ___U3CU3Es__6_10;
	bool ___U3CU3Es__7_11;
	Awaiter_t8953594D03299DE782894F4A865CED79F2504266 ___U3CU3Eu__1_12;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_13;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_14;
};
struct U3CSumAwaitAsyncU3Ed__6_1_tFD7597B21E6A2D0D272827AD3E4561A5CD38F6F8  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_t04742C32F6BEF8B1199EACA5BD7F68C041603B6D* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CsumU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	int64_t ___U3CU3Es__5_9;
	int64_t ___U3CU3Es__6_10;
	bool ___U3CU3Es__7_11;
	Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E ___U3CU3Eu__1_12;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_13;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_14;
};
struct U3CSumAwaitWithCancellationAsyncU3Ed__11_1_t30362DB8F1ECD4EF87DEF287A08C47822BCDDF03  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_t79F461272893123C05C047A343D70B9B775827E4* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	float ___U3CsumU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	float ___U3CU3Es__5_9;
	float ___U3CU3Es__6_10;
	bool ___U3CU3Es__7_11;
	Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D ___U3CU3Eu__1_12;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_13;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_14;
};
struct U3CSumAwaitWithCancellationAsyncU3Ed__15_1_tD4CD9C1B12F3430337DF9DD04607F4CCE6F4EEBE  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_tB356387A25DA85D9F4DDAAEEFD39A96B3F81FA95* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	double ___U3CsumU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	double ___U3CU3Es__5_9;
	double ___U3CU3Es__6_10;
	bool ___U3CU3Es__7_11;
	Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 ___U3CU3Eu__1_12;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_13;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_14;
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
struct UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F 
{
	RuntimeObject* ___source_0;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___result_1;
	int16_t ___token_2;
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
struct U3CSumAsyncU3Ed__37_1_tB6E696A6F6E8F5B7DAF325F2930A4AF4FBFDF8F4  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_t02AAAA5ED63E37D8013889ECE551ED5172A9F7A4* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CsumU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	bool ___U3CU3Es__5_9;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_10;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_11;
};
struct U3CSumAwaitAsyncU3Ed__18_1_t6EB43FF2636C2168869DE066167C7D3F81EB9125  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_tD6766C7D6227AC2A45F7EDFC827BDFC58C8EFE78* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CsumU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CU3Es__5_9;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CU3Es__6_10;
	bool ___U3CU3Es__7_11;
	Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 ___U3CU3Eu__1_12;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_13;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_14;
};
struct U3CSumAwaitAsyncU3Ed__22_1_t625242089553211042F970C9A03E800B7C7DB719  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_tCD782F33543995850D4A4AF7569D83504640F79F* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CsumU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CU3Es__5_9;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CU3Es__6_10;
	int32_t ___U3CU3Es__7_11;
	bool ___U3CU3Es__8_12;
	Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 ___U3CU3Eu__1_13;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_14;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_15;
};
struct U3CSumAwaitAsyncU3Ed__26_1_t844C4B8D187A39025A4373512E24354C79BAFD9E  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_t898AEF8B0AC8B5CB054F91316F69A4739DB2E5B6* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CsumU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CU3Es__5_9;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CU3Es__6_10;
	int64_t ___U3CU3Es__7_11;
	bool ___U3CU3Es__8_12;
	Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB ___U3CU3Eu__1_13;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_14;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_15;
};
struct U3CSumAwaitAsyncU3Ed__30_1_tCB37D1624B890AE442263C7F27D15692732E4151  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_t9F80A31065CD628F063DA0D192A111706F695666* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CsumU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CU3Es__5_9;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CU3Es__6_10;
	float ___U3CU3Es__7_11;
	bool ___U3CU3Es__8_12;
	Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 ___U3CU3Eu__1_13;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_14;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_15;
};
struct U3CSumAwaitAsyncU3Ed__34_1_tF81F2BBE17C4A4FC66EF061BBCD5B91BD910B040  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_tEBD22D2F4376CEDF9152BDE05B6E363699F0C7E1* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CsumU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CU3Es__5_9;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CU3Es__6_10;
	double ___U3CU3Es__7_11;
	bool ___U3CU3Es__8_12;
	Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 ___U3CU3Eu__1_13;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_14;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_15;
};
struct U3CSumAwaitWithCancellationAsyncU3Ed__19_1_tE07DB630BAD8C23C81D68718CC01F510B600F4C7  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_tE135AFB66CDB73C25CDE9CDD97913EE0CF6337D7* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CsumU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CU3Es__5_9;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CU3Es__6_10;
	bool ___U3CU3Es__7_11;
	Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 ___U3CU3Eu__1_12;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_13;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_14;
};
struct U3CSumAwaitWithCancellationAsyncU3Ed__23_1_t3E1C181CD17E952043027C5FC752AC8458B7017A  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_tA0DEFAEF785E5E0D32E2CABA4CBDB7F9D34C2B8D* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CsumU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CU3Es__5_9;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CU3Es__6_10;
	int32_t ___U3CU3Es__7_11;
	bool ___U3CU3Es__8_12;
	Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 ___U3CU3Eu__1_13;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_14;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_15;
};
struct U3CSumAwaitWithCancellationAsyncU3Ed__27_1_t1A8CF8D93698BBDBD2A2BA1334B37FC52923116B  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_t4111B7EAAEBCF4004223B4E554711FE862E5C3B2* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CsumU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CU3Es__5_9;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CU3Es__6_10;
	int64_t ___U3CU3Es__7_11;
	bool ___U3CU3Es__8_12;
	Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB ___U3CU3Eu__1_13;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_14;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_15;
};
struct U3CSumAwaitWithCancellationAsyncU3Ed__31_1_tE2A17D1F168471DC9CB5CA03843155C58FA9E86E  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_t5604379C942DED2B342DEED029BC1AB35C5A06A1* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CsumU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CU3Es__5_9;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CU3Es__6_10;
	float ___U3CU3Es__7_11;
	bool ___U3CU3Es__8_12;
	Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 ___U3CU3Eu__1_13;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_14;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_15;
};
struct U3CSumAwaitWithCancellationAsyncU3Ed__35_1_t41BAC341849974918993DEF5FB9BA2C2D161D8BE  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_tD24255148664E4908FBCB566B787F36A4988A2BB* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CsumU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CU3Es__5_9;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CU3Es__6_10;
	double ___U3CU3Es__7_11;
	bool ___U3CU3Es__8_12;
	Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 ___U3CU3Eu__1_13;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_14;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_15;
};
struct Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04  : public MulticastDelegate_t
{
};
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
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
struct Func_2_tB9800595B3251D2492E40667A6C05061784D48FB  : public MulticastDelegate_t
{
};
struct Func_2_t1E86949F09236014700CDAC386B21A17602F974C  : public MulticastDelegate_t
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
struct Func_3_t79F461272893123C05C047A343D70B9B775827E4  : public MulticastDelegate_t
{
};
struct Func_3_tEBFC185F508D6150079151B2395F5DE7B54CC752  : public MulticastDelegate_t
{
};
struct Func_3_t5659CC7C991DA571259A44032C4AE7AC307EB3E5  : public MulticastDelegate_t
{
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken_18;
};
struct U3CSumAwaitAsyncU3Ed__38_1_t5167247A6C0E72794A66E9B645DDEB0288F05988  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_t041ABB3F33302FF5B428FF832CE110343F4DA4C6* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CsumU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CU3Es__5_9;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CU3Es__6_10;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CU3Es__7_11;
	bool ___U3CU3Es__8_12;
	Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 ___U3CU3Eu__1_13;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_14;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_15;
};
struct U3CSumAwaitWithCancellationAsyncU3Ed__39_1_t9B9764166BCC8B49A015F6D3F64552E2068D00D4  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_t428A771ED20C241CDDC6BDF17284D499B16CBD70* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CsumU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CU3Es__5_9;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CU3Es__6_10;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CU3Es__7_11;
	bool ___U3CU3Es__8_12;
	Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 ___U3CU3Eu__1_13;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_14;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_15;
};
struct String_t_StaticFields
{
	String_t* ___Empty_6;
};
struct Subscribe_t65C94F6EDBB645D24A16DB00D5BA490B834282BC_StaticFields
{
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___NopError_0;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___NopCompleted_1;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m8F65BBE4BCD00BC5CC3C50B468EDCB3AABCB09A7_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m9E784ED4CDCCF8F431EFFD0EF46AEB02E48CABE7_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_gshared_inline (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_gshared_inline (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* __this, double ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_gshared_inline (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_gshared_inline (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_gshared_inline (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_gshared_inline (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* __this, int32_t ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mE8C5BA18D2449D6BD546630CE70DE315F5F91FCE_gshared_inline (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_gshared_inline (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_gshared (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m668B0B683F2B4B7005D076DE9400F32B1702673B_gshared_inline (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_gshared_inline (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* __this, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_gshared (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_gshared_inline (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_gshared_inline (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* __this, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_gshared (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, double ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_gshared_inline (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_gshared_inline (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_gshared_inline (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_gshared_inline (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_gshared (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_gshared_inline (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_gshared_inline (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* __this, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_gshared_inline (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_gshared_inline (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* __this, int64_t ___0_result, const RuntimeMethod* method) ;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Error_MoreThanOneElement_mD66FED8AE9CF26384AFAA60BCFF0216F9490ECEE_inline (const RuntimeMethod* method) ;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803 (Exception_t* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330 (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
inline void AsyncUniTaskMethodBuilder_1_SetException_mECBEAC6E4C036A31B0911484E7BB8D58F7F543D5_inline (AsyncUniTaskMethodBuilder_1_t012B41921636A2A189618FE848BE0FCB77D18906* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t012B41921636A2A189618FE848BE0FCB77D18906*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m8F65BBE4BCD00BC5CC3C50B468EDCB3AABCB09A7_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m58F872D008CE598740B661495F8297C4E2F555BF_inline (AsyncUniTaskMethodBuilder_1_t012B41921636A2A189618FE848BE0FCB77D18906* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t012B41921636A2A189618FE848BE0FCB77D18906*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m9E784ED4CDCCF8F431EFFD0EF46AEB02E48CABE7_gshared_inline)(__this, ___0_result, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorTween_ValidTarget_m1D7A682CE00048FAF1A3BDD55EB76F44C9122B4D (ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorTween_get_ignoreTimeScale_mEDB15A4ADE3A0B9487D240964A7571247F974708 (ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ColorTween_get_duration_m40D8F08C13FF2FE7583746934C6A017A93398548 (ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorTween_TweenValue_mF5CBA9BDE7F73E47F9CF26DC4EC2419694049860 (ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7* __this, float ___0_floatPercentage, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FloatTween_ValidTarget_m4591FB5DBEE8762554B97A09B232893EE754D7DF (FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FloatTween_get_ignoreTimeScale_m8FE31080B4800A6CFB89918E0803BB1BE21FDA4B (FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatTween_get_duration_mE71CD40934ED69FDD7CDA8D5438E9897E6E9FE7A (FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTween_TweenValue_m022D385B013439E2FB8020F6A6BD329CECA81E89 (FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE* __this, float ___0_floatPercentage, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FloatTween_ValidTarget_m36EABC84C8FEFF79EBAC8E9C3C7A394F1377E311 (FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FloatTween_get_ignoreTimeScale_m6F6BDCBD59C19E68572370F9FE3D7373B4212B3B (FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatTween_get_duration_mB1496D38A618FF8282205FD3AA14CA9C6D76454D (FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTween_TweenValue_mE51344369BDDA58E9C3AEC62E1B1C1AC0349278E (FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A* __this, float ___0_floatPercentage, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3 (Exception_t* ___0_ex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Delegate_op_Equality_m8B96593B665536587FFD27DE233442C075971C32 (Delegate_t* ___0_d1, Delegate_t* ___1_d2, const RuntimeMethod* method) ;
inline void Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* __this, Exception_t* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*, Exception_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskVoid_Forget_mE4FC2CCCEFD822A5D63FFE97EE209FEE949CC255 (UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2* __this, const RuntimeMethod* method) ;
inline void AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_inline (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_inline (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* __this, double ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, double, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_gshared_inline)(__this, ___0_result, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_d1, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___1_d2, const RuntimeMethod* method) ;
inline void AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_inline (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_inline (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_gshared_inline)(__this, ___0_result, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_inline (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_inline (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* __this, int32_t ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, int32_t, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_gshared_inline)(__this, ___0_result, method);
}
inline int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline)(__this, method);
}
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared)(__this, ___0_value, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetException_mE8C5BA18D2449D6BD546630CE70DE315F5F91FCE_inline (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_mE8C5BA18D2449D6BD546630CE70DE315F5F91FCE_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_inline (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_gshared_inline)(__this, ___0_result, method);
}
inline int64_t Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_gshared_inline)(__this, method);
}
inline bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline)(__this, method);
}
inline void Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1 (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, int64_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, int64_t, const RuntimeMethod*))Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_gshared)(__this, ___0_value, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetException_m668B0B683F2B4B7005D076DE9400F32B1702673B_inline (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m668B0B683F2B4B7005D076DE9400F32B1702673B_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_inline (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* __this, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_gshared_inline)(__this, ___0_result, method);
}
inline float Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_gshared_inline)(__this, method);
}
inline bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline)(__this, method);
}
inline void Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420 (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, float ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, float, const RuntimeMethod*))Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_gshared)(__this, ___0_value, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_inline (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_inline (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* __this, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_gshared_inline)(__this, ___0_result, method);
}
inline double Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  double (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_gshared_inline)(__this, method);
}
inline bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline)(__this, method);
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
inline Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method)
{
	return ((  Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F (*) (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_gshared_inline)(__this, method);
}
inline bool Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*, const RuntimeMethod*))Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_gshared_inline)(__this, method);
}
inline void Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7 (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F, const RuntimeMethod*))Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_gshared)(__this, ___0_value, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_inline (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_inline (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* __this, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_gshared_inline)(__this, ___0_result, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_inline (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_inline (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* __this, int64_t ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, int64_t, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_gshared_inline)(__this, ___0_result, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___0_status, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopHelper_AddContinuation_m5B8F03E45A820D91B17CFA56AA93E7444BEC17E0 (int32_t ___0_timing, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_continuation, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSingleAsyncU3Ed__1_1__ctor_mFE0881AB333E4899531EACEAA8C6266D35CF9FD0_gshared (U3CSingleAsyncU3Ed__1_1_tDD63529E4120D64B4A4C8E8106CE2D0588688B8D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSingleAsyncU3Ed__1_1_MoveNext_m89F9D1590F5CD34CC5C32500759342A3E756D171_gshared (U3CSingleAsyncU3Ed__1_1_tDD63529E4120D64B4A4C8E8106CE2D0588688B8D* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_tF3A4C4FDD960EE1476527BA52C54C0118DF1D0DB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TSource_tF3A4C4FDD960EE1476527BA52C54C0118DF1D0DB);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	const Il2CppFullySharedGenericAny L_31 = L_8;
	const Il2CppFullySharedGenericAny L_53 = L_8;
	const Il2CppFullySharedGenericAny L_55 = L_8;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tF3A4C4FDD960EE1476527BA52C54C0118DF1D0DB);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tF3A4C4FDD960EE1476527BA52C54C0118DF1D0DB);
	memset(V_1, 0, SizeOf_TSource_tF3A4C4FDD960EE1476527BA52C54C0118DF1D0DB);
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_6;
	memset((&V_6), 0, sizeof(V_6));
	U3CSingleAsyncU3Ed__1_1_tDD63529E4120D64B4A4C8E8106CE2D0588688B8D* V_7 = NULL;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	int32_t V_14 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
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
			goto IL_003f_1;
		}

IL_0014_1:
		{
			goto IL_01d3_1;
		}

IL_0019_1:
		{
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_5);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), NULL);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 0);
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
				goto IL_004a_2;
			}

IL_0045_2:
			{
				goto IL_0104_2;
			}

IL_004a_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))), SizeOf_TSource_tF3A4C4FDD960EE1476527BA52C54C0118DF1D0DB);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), (bool)0);
				goto IL_00bc_2;
			}

IL_0060_2:
			{
				RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_7);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_7, (Il2CppFullySharedGenericAny*)L_8);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_8, SizeOf_TSource_tF3A4C4FDD960EE1476527BA52C54C0118DF1D0DB);
				Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_9 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_TSource_tF3A4C4FDD960EE1476527BA52C54C0118DF1D0DB);
				NullCheck(L_9);
				bool L_11;
				L_11 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
				V_2 = L_11;
				bool L_12 = V_2;
				if (!L_12)
				{
					goto IL_00af_2;
				}
			}
			{
				bool L_13 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
				V_3 = L_13;
				bool L_14 = V_3;
				if (!L_14)
				{
					goto IL_0099_2;
				}
			}
			{
				Exception_t* L_15;
				L_15 = Error_MoreThanOneElement_mD66FED8AE9CF26384AFAA60BCFF0216F9490ECEE_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
			}

IL_0099_2:
			{
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), (bool)1);
				il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_TSource_tF3A4C4FDD960EE1476527BA52C54C0118DF1D0DB);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_16, SizeOf_TSource_tF3A4C4FDD960EE1476527BA52C54C0118DF1D0DB);
			}

IL_00af_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)))), SizeOf_TSource_tF3A4C4FDD960EE1476527BA52C54C0118DF1D0DB);
			}

IL_00bc_2:
			{
				RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_17);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_18;
				L_18 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_17);
				V_6 = L_18;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19;
				L_19 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_6), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_5 = L_19;
				bool L_20;
				L_20 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_5), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0121_2;
				}
			}
			{
				int32_t L_21 = 0;
				V_0 = L_21;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_21);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_22 = V_5;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), L_22);
				V_7 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSingleAsyncU3Ed__1_1_tDD63529E4120D64B4A4C8E8106CE2D0588688B8D**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_5), (&V_7), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				goto IL_0294;
			}

IL_0104_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_23 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
				V_5 = L_23;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_24 = (-1);
				V_0 = L_24;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_24);
			}

IL_0121_2:
			{
				bool L_25;
				L_25 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_5), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_25);
				bool L_26 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
				V_4 = L_26;
				bool L_27 = V_4;
				if (L_27)
				{
					goto IL_0060_2;
				}
			}
			{
				bool L_28 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
				bool L_29 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				V_8 = (bool)((int32_t)((int32_t)L_28|(int32_t)L_29));
				bool L_30 = V_8;
				if (!L_30)
				{
					goto IL_015f_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TSource_tF3A4C4FDD960EE1476527BA52C54C0118DF1D0DB);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_31, SizeOf_TSource_tF3A4C4FDD960EE1476527BA52C54C0118DF1D0DB);
				goto IL_0165_2;
			}

IL_015f_2:
			{
				Exception_t* L_32;
				L_32 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, method);
			}

IL_0165_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 1);
				goto IL_017a_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_016e_1;
			}
			throw e;
		}

CATCH_016e_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_33 = V_9;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_33);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_017a_1;
		}

IL_017a_1:
		{
			RuntimeObject* L_34 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_34) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_35 = V_10;
			if (!L_35)
			{
				goto IL_01f9_1;
			}
		}
		{
			RuntimeObject* L_36 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			NullCheck((RuntimeObject*)L_36);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_37;
			L_37 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
			V_12 = L_37;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_38;
			L_38 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_38;
			bool L_39;
			L_39 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_39)
			{
				goto IL_01f0_1;
			}
		}
		{
			int32_t L_40 = 1;
			V_0 = L_40;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_40);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41 = V_11;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15), L_41);
			V_7 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSingleAsyncU3Ed__1_1_tDD63529E4120D64B4A4C8E8106CE2D0588688B8D**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_11), (&V_7), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0294;
		}

IL_01d3_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_42 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15));
			V_11 = L_42;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_43 = (-1);
			V_0 = L_43;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_43);
		}

IL_01f0_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_01f9_1:
		{
			RuntimeObject* L_44 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_9 = L_44;
			RuntimeObject* L_45 = V_9;
			if (!L_45)
			{
				goto IL_0223_1;
			}
		}
		{
			RuntimeObject* L_46 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_46, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_47 = V_13;
			if (L_47)
			{
				goto IL_0216_1;
			}
		}
		{
			RuntimeObject* L_48 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_48, method);
		}

IL_0216_1:
		{
			Exception_t* L_49 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_50;
			L_50 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_49, NULL);
			NullCheck(L_50);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_50, NULL);
		}

IL_0223_1:
		{
			int32_t L_51 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_14 = L_51;
			int32_t L_52 = V_14;
			if ((((int32_t)L_52) == ((int32_t)1)))
			{
				goto IL_0232_1;
			}
		}
		{
			goto IL_023b_1;
		}

IL_0232_1:
		{
			il2cpp_codegen_memcpy(L_53, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TSource_tF3A4C4FDD960EE1476527BA52C54C0118DF1D0DB);
			il2cpp_codegen_memcpy(V_1, L_53, SizeOf_TSource_tF3A4C4FDD960EE1476527BA52C54C0118DF1D0DB);
			goto IL_0278;
		}

IL_023b_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_TSource_tF3A4C4FDD960EE1476527BA52C54C0118DF1D0DB);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
			goto IL_0278;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0257;
		}
		throw e;
	}

CATCH_0257:
	{
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		Exception_t* L_54 = V_13;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0294;
	}

IL_0278:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_55, V_1, SizeOf_TSource_tF3A4C4FDD960EE1476527BA52C54C0118DF1D0DB);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_55: *(void**)L_55));
	}

IL_0294:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSingleAsyncU3Ed__1_1_SetStateMachine_mEA8BFE02FD6D0268A049211501A7B4E7D1DAFBD0_gshared (U3CSingleAsyncU3Ed__1_1_tDD63529E4120D64B4A4C8E8106CE2D0588688B8D* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSingleAwaitAsyncU3Ed__2_1__ctor_m6E2DEFD87FE5D945789F1F150DECFBEE30134453_gshared (U3CSingleAwaitAsyncU3Ed__2_1_t7522BF6A86563959730ACF759C23778D1C3A9D10* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSingleAwaitAsyncU3Ed__2_1_MoveNext_m0428C5A75291DF5B77DFBB8BCA1B042A7D464BE1_gshared (U3CSingleAwaitAsyncU3Ed__2_1_t7522BF6A86563959730ACF759C23778D1C3A9D10* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_tE4522522FD09EB8C0A31881949804FD8AF36C2C6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_tE4522522FD09EB8C0A31881949804FD8AF36C2C6);
	const Il2CppFullySharedGenericAny L_25 = L_9;
	const Il2CppFullySharedGenericAny L_40 = L_9;
	const Il2CppFullySharedGenericAny L_62 = L_9;
	const Il2CppFullySharedGenericAny L_64 = L_9;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_tE4522522FD09EB8C0A31881949804FD8AF36C2C6);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tE4522522FD09EB8C0A31881949804FD8AF36C2C6);
	memset(V_1, 0, SizeOf_TSource_tE4522522FD09EB8C0A31881949804FD8AF36C2C6);
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CSingleAwaitAsyncU3Ed__2_1_t7522BF6A86563959730ACF759C23778D1C3A9D10* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_12;
	memset((&V_12), 0, sizeof(V_12));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Exception_t* V_14 = NULL;
	int32_t V_15 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
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
			goto IL_024b_1;
		}

IL_001a_1:
		{
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_5);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), NULL);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 0);
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
				goto IL_00ca_2;
			}

IL_004e_2:
			{
				goto IL_017c_2;
			}

IL_0053_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))), SizeOf_TSource_tE4522522FD09EB8C0A31881949804FD8AF36C2C6);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), (bool)0);
				goto IL_0134_2;
			}

IL_006c_2:
			{
				RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_9, SizeOf_TSource_tE4522522FD09EB8C0A31881949804FD8AF36C2C6);
				Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C* L_10 = *(Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_TSource_tE4522522FD09EB8C0A31881949804FD8AF36C2C6);
				NullCheck(L_10);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_12;
				L_12 = InvokerFuncInvoker1< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11));
				V_4 = L_12;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_13;
				L_13 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_3 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00e6_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_15);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_16 = V_3;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15), L_16);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSingleAwaitAsyncU3Ed__2_1_t7522BF6A86563959730ACF759C23778D1C3A9D10**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_030c;
			}

IL_00ca_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15));
				V_3 = L_17;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_18 = (-1);
				V_0 = L_18;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_18);
			}

IL_00e6_2:
			{
				bool L_19;
				L_19 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_19);
				bool L_20 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
				V_2 = L_20;
				bool L_21 = V_2;
				if (!L_21)
				{
					goto IL_0127_2;
				}
			}
			{
				bool L_22 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
				V_6 = L_22;
				bool L_23 = V_6;
				if (!L_23)
				{
					goto IL_0111_2;
				}
			}
			{
				Exception_t* L_24;
				L_24 = Error_MoreThanOneElement_mD66FED8AE9CF26384AFAA60BCFF0216F9490ECEE_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, method);
			}

IL_0111_2:
			{
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), (bool)1);
				il2cpp_codegen_memcpy(L_25, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_TSource_tE4522522FD09EB8C0A31881949804FD8AF36C2C6);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_25, SizeOf_TSource_tE4522522FD09EB8C0A31881949804FD8AF36C2C6);
			}

IL_0127_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)))), SizeOf_TSource_tE4522522FD09EB8C0A31881949804FD8AF36C2C6);
			}

IL_0134_2:
			{
				RuntimeObject* L_26 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_26);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_27;
				L_27 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_26);
				V_4 = L_27;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28;
				L_28 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_8 = L_28;
				bool L_29;
				L_29 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_8), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_0199_2;
				}
			}
			{
				int32_t L_30 = 1;
				V_0 = L_30;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_30);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = V_8;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15), L_31);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSingleAwaitAsyncU3Ed__2_1_t7522BF6A86563959730ACF759C23778D1C3A9D10**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_8), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_030c;
			}

IL_017c_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_32 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15));
				V_8 = L_32;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_33 = (-1);
				V_0 = L_33;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_33);
			}

IL_0199_2:
			{
				bool L_34;
				L_34 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_8), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), L_34);
				bool L_35 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
				V_7 = L_35;
				bool L_36 = V_7;
				if (L_36)
				{
					goto IL_006c_2;
				}
			}
			{
				bool L_37 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
				bool L_38 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				V_9 = (bool)((int32_t)((int32_t)L_37|(int32_t)L_38));
				bool L_39 = V_9;
				if (!L_39)
				{
					goto IL_01d7_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_40, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TSource_tE4522522FD09EB8C0A31881949804FD8AF36C2C6);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_40, SizeOf_TSource_tE4522522FD09EB8C0A31881949804FD8AF36C2C6);
				goto IL_01dd_2;
			}

IL_01d7_2:
			{
				Exception_t* L_41;
				L_41 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, method);
			}

IL_01dd_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 1);
				goto IL_01f2_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01e6_1;
			}
			throw e;
		}

CATCH_01e6_1:
		{
			V_10 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_42 = V_10;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_42);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01f2_1;
		}

IL_01f2_1:
		{
			RuntimeObject* L_43 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_43) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_44 = V_11;
			if (!L_44)
			{
				goto IL_0271_1;
			}
		}
		{
			RuntimeObject* L_45 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			NullCheck((RuntimeObject*)L_45);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_46;
			L_46 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_45);
			V_13 = L_46;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47;
			L_47 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_13), NULL);
			V_12 = L_47;
			bool L_48;
			L_48 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_48)
			{
				goto IL_0268_1;
			}
		}
		{
			int32_t L_49 = 2;
			V_0 = L_49;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_49);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50 = V_12;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16), L_50);
			V_5 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSingleAwaitAsyncU3Ed__2_1_t7522BF6A86563959730ACF759C23778D1C3A9D10**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_12), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_030c;
		}

IL_024b_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_51 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16));
			V_12 = L_51;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_52 = (-1);
			V_0 = L_52;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_52);
		}

IL_0268_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_0271_1:
		{
			RuntimeObject* L_53 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_10 = L_53;
			RuntimeObject* L_54 = V_10;
			if (!L_54)
			{
				goto IL_029b_1;
			}
		}
		{
			RuntimeObject* L_55 = V_10;
			V_14 = ((Exception_t*)IsInstClass((RuntimeObject*)L_55, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_56 = V_14;
			if (L_56)
			{
				goto IL_028e_1;
			}
		}
		{
			RuntimeObject* L_57 = V_10;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_57, method);
		}

IL_028e_1:
		{
			Exception_t* L_58 = V_14;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_59;
			L_59 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_58, NULL);
			NullCheck(L_59);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_59, NULL);
		}

IL_029b_1:
		{
			int32_t L_60 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_15 = L_60;
			int32_t L_61 = V_15;
			if ((((int32_t)L_61) == ((int32_t)1)))
			{
				goto IL_02aa_1;
			}
		}
		{
			goto IL_02b3_1;
		}

IL_02aa_1:
		{
			il2cpp_codegen_memcpy(L_62, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TSource_tE4522522FD09EB8C0A31881949804FD8AF36C2C6);
			il2cpp_codegen_memcpy(V_1, L_62, SizeOf_TSource_tE4522522FD09EB8C0A31881949804FD8AF36C2C6);
			goto IL_02f0;
		}

IL_02b3_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_TSource_tE4522522FD09EB8C0A31881949804FD8AF36C2C6);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
			goto IL_02f0;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02cf;
		}
		throw e;
	}

CATCH_02cf:
	{
		V_14 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		Exception_t* L_63 = V_14;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_63, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_030c;
	}

IL_02f0:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_64, V_1, SizeOf_TSource_tE4522522FD09EB8C0A31881949804FD8AF36C2C6);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_64: *(void**)L_64));
	}

IL_030c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSingleAwaitAsyncU3Ed__2_1_SetStateMachine_mE2FE3CC4261EEF1CB22A40057BEDB49E143CCCC1_gshared (U3CSingleAwaitAsyncU3Ed__2_1_t7522BF6A86563959730ACF759C23778D1C3A9D10* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSingleAwaitWithCancellationAsyncU3Ed__3_1__ctor_mBF9E191800867D468FDC205FDD3DA24BE4B6C421_gshared (U3CSingleAwaitWithCancellationAsyncU3Ed__3_1_t2FCEA518DC6B93775D61B6AA5C6C272015361B9B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSingleAwaitWithCancellationAsyncU3Ed__3_1_MoveNext_m204B7999199C0282BBBAA814CFE742CB46EE6857_gshared (U3CSingleAwaitWithCancellationAsyncU3Ed__3_1_t2FCEA518DC6B93775D61B6AA5C6C272015361B9B* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t94E1CE32456EE53707EBDCF87499C49E99D76A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_t94E1CE32456EE53707EBDCF87499C49E99D76A5E);
	const Il2CppFullySharedGenericAny L_26 = L_9;
	const Il2CppFullySharedGenericAny L_41 = L_9;
	const Il2CppFullySharedGenericAny L_63 = L_9;
	const Il2CppFullySharedGenericAny L_65 = L_9;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t94E1CE32456EE53707EBDCF87499C49E99D76A5E);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t94E1CE32456EE53707EBDCF87499C49E99D76A5E);
	memset(V_1, 0, SizeOf_TSource_t94E1CE32456EE53707EBDCF87499C49E99D76A5E);
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CSingleAwaitWithCancellationAsyncU3Ed__3_1_t2FCEA518DC6B93775D61B6AA5C6C272015361B9B* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_12;
	memset((&V_12), 0, sizeof(V_12));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Exception_t* V_14 = NULL;
	int32_t V_15 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
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
			goto IL_0254_1;
		}

IL_001a_1:
		{
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_5);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), NULL);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 0);
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
					goto IL_0051_2;
				}
			}
			{
				goto IL_0056_2;
			}

IL_004c_2:
			{
				goto IL_00d3_2;
			}

IL_0051_2:
			{
				goto IL_0185_2;
			}

IL_0056_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))), SizeOf_TSource_t94E1CE32456EE53707EBDCF87499C49E99D76A5E);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), (bool)0);
				goto IL_013d_2;
			}

IL_006f_2:
			{
				RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_9, SizeOf_TSource_t94E1CE32456EE53707EBDCF87499C49E99D76A5E);
				Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814* L_10 = *(Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_TSource_t94E1CE32456EE53707EBDCF87499C49E99D76A5E);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
				NullCheck(L_10);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_13;
				L_13 = InvokerFuncInvoker2< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11), L_12);
				V_4 = L_13;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_14;
				L_14 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_3 = L_14;
				bool L_15;
				L_15 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00ef_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_16);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17 = V_3;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15), L_17);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSingleAwaitWithCancellationAsyncU3Ed__3_1_t2FCEA518DC6B93775D61B6AA5C6C272015361B9B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0315;
			}

IL_00d3_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_18 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15));
				V_3 = L_18;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_19 = (-1);
				V_0 = L_19;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_19);
			}

IL_00ef_2:
			{
				bool L_20;
				L_20 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_20);
				bool L_21 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
				V_2 = L_21;
				bool L_22 = V_2;
				if (!L_22)
				{
					goto IL_0130_2;
				}
			}
			{
				bool L_23 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
				V_6 = L_23;
				bool L_24 = V_6;
				if (!L_24)
				{
					goto IL_011a_2;
				}
			}
			{
				Exception_t* L_25;
				L_25 = Error_MoreThanOneElement_mD66FED8AE9CF26384AFAA60BCFF0216F9490ECEE_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
			}

IL_011a_2:
			{
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), (bool)1);
				il2cpp_codegen_memcpy(L_26, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_TSource_t94E1CE32456EE53707EBDCF87499C49E99D76A5E);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_26, SizeOf_TSource_t94E1CE32456EE53707EBDCF87499C49E99D76A5E);
			}

IL_0130_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)))), SizeOf_TSource_t94E1CE32456EE53707EBDCF87499C49E99D76A5E);
			}

IL_013d_2:
			{
				RuntimeObject* L_27 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_27);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_28;
				L_28 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_27);
				V_4 = L_28;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29;
				L_29 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_8 = L_29;
				bool L_30;
				L_30 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_8), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_30)
				{
					goto IL_01a2_2;
				}
			}
			{
				int32_t L_31 = 1;
				V_0 = L_31;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_31);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_32 = V_8;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15), L_32);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSingleAwaitWithCancellationAsyncU3Ed__3_1_t2FCEA518DC6B93775D61B6AA5C6C272015361B9B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_8), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0315;
			}

IL_0185_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15));
				V_8 = L_33;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_34 = (-1);
				V_0 = L_34;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_34);
			}

IL_01a2_2:
			{
				bool L_35;
				L_35 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_8), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), L_35);
				bool L_36 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
				V_7 = L_36;
				bool L_37 = V_7;
				if (L_37)
				{
					goto IL_006f_2;
				}
			}
			{
				bool L_38 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
				bool L_39 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				V_9 = (bool)((int32_t)((int32_t)L_38|(int32_t)L_39));
				bool L_40 = V_9;
				if (!L_40)
				{
					goto IL_01e0_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_41, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TSource_t94E1CE32456EE53707EBDCF87499C49E99D76A5E);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_41, SizeOf_TSource_t94E1CE32456EE53707EBDCF87499C49E99D76A5E);
				goto IL_01e6_2;
			}

IL_01e0_2:
			{
				Exception_t* L_42;
				L_42 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, method);
			}

IL_01e6_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 1);
				goto IL_01fb_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01ef_1;
			}
			throw e;
		}

CATCH_01ef_1:
		{
			V_10 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_43 = V_10;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_43);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01fb_1;
		}

IL_01fb_1:
		{
			RuntimeObject* L_44 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_44) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_45 = V_11;
			if (!L_45)
			{
				goto IL_027a_1;
			}
		}
		{
			RuntimeObject* L_46 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			NullCheck((RuntimeObject*)L_46);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_47;
			L_47 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
			V_13 = L_47;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_48;
			L_48 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_13), NULL);
			V_12 = L_48;
			bool L_49;
			L_49 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_49)
			{
				goto IL_0271_1;
			}
		}
		{
			int32_t L_50 = 2;
			V_0 = L_50;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_50);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_51 = V_12;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16), L_51);
			V_5 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSingleAwaitWithCancellationAsyncU3Ed__3_1_t2FCEA518DC6B93775D61B6AA5C6C272015361B9B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_12), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0315;
		}

IL_0254_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_52 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16));
			V_12 = L_52;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_53 = (-1);
			V_0 = L_53;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_53);
		}

IL_0271_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_027a_1:
		{
			RuntimeObject* L_54 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_10 = L_54;
			RuntimeObject* L_55 = V_10;
			if (!L_55)
			{
				goto IL_02a4_1;
			}
		}
		{
			RuntimeObject* L_56 = V_10;
			V_14 = ((Exception_t*)IsInstClass((RuntimeObject*)L_56, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_57 = V_14;
			if (L_57)
			{
				goto IL_0297_1;
			}
		}
		{
			RuntimeObject* L_58 = V_10;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_58, method);
		}

IL_0297_1:
		{
			Exception_t* L_59 = V_14;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_60;
			L_60 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_59, NULL);
			NullCheck(L_60);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_60, NULL);
		}

IL_02a4_1:
		{
			int32_t L_61 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_15 = L_61;
			int32_t L_62 = V_15;
			if ((((int32_t)L_62) == ((int32_t)1)))
			{
				goto IL_02b3_1;
			}
		}
		{
			goto IL_02bc_1;
		}

IL_02b3_1:
		{
			il2cpp_codegen_memcpy(L_63, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TSource_t94E1CE32456EE53707EBDCF87499C49E99D76A5E);
			il2cpp_codegen_memcpy(V_1, L_63, SizeOf_TSource_t94E1CE32456EE53707EBDCF87499C49E99D76A5E);
			goto IL_02f9;
		}

IL_02bc_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_TSource_t94E1CE32456EE53707EBDCF87499C49E99D76A5E);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
			goto IL_02f9;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02d8;
		}
		throw e;
	}

CATCH_02d8:
	{
		V_14 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		Exception_t* L_64 = V_14;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_64, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0315;
	}

IL_02f9:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_65, V_1, SizeOf_TSource_t94E1CE32456EE53707EBDCF87499C49E99D76A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_65: *(void**)L_65));
	}

IL_0315:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSingleAwaitWithCancellationAsyncU3Ed__3_1_SetStateMachine_m0DEF15BA944141A0451CD59805F68B9F90733305_gshared (U3CSingleAwaitWithCancellationAsyncU3Ed__3_1_t2FCEA518DC6B93775D61B6AA5C6C272015361B9B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSortAsyncU3Ed__2__ctor_m96D9DD7B5C7DFA3F459103A5752F875E32748DF1_gshared (U3CSortAsyncU3Ed__2_t057E5D531E170020DD3D6A1FC5F4888D512503FA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSortAsyncU3Ed__2_MoveNext_m513AF72C60D3BA63510182FA7918A1236C0CA2EC_gshared (U3CSortAsyncU3Ed__2_t057E5D531E170020DD3D6A1FC5F4888D512503FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m58F872D008CE598740B661495F8297C4E2F555BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CSortAsyncU3Ed__2_t057E5D531E170020DD3D6A1FC5F4888D512503FA* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
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
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_0060_1;
		}

IL_000e_1:
		{
			AsyncEnumerableSorter_1_tB12E111BEE1BE3928D42C95E823E309905F94836* L_2 = (AsyncEnumerableSorter_1_tB12E111BEE1BE3928D42C95E823E309905F94836*)__this->___U3CU3E4__this_4;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->___elements_2;
			int32_t L_4 = (int32_t)__this->___count_3;
			NullCheck(L_2);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_5;
			L_5 = VirtualFuncInvoker2< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(4, L_2, L_3, L_4);
			V_3 = L_5;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_6;
			L_6 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_6;
			bool L_7;
			L_7 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_7)
			{
				goto IL_007c_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_9 = V_2;
			__this->___U3CU3Eu__1_7 = L_9;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_7))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t012B41921636A2A189618FE848BE0FCB77D18906* L_10 = (AsyncUniTaskMethodBuilder_1_t012B41921636A2A189618FE848BE0FCB77D18906*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t012B41921636A2A189618FE848BE0FCB77D18906*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSortAsyncU3Ed__2_t057E5D531E170020DD3D6A1FC5F4888D512503FA**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_10, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
			goto IL_0138;
		}

IL_0060_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_7;
			V_2 = L_11;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_12 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_7);
			il2cpp_codegen_initobj(L_12, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
		}

IL_007c_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
			int32_t L_14 = (int32_t)__this->___count_3;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_14);
			__this->___U3CmapU3E5__1_5 = L_15;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__1_5), (void*)L_15);
			__this->___U3CiU3E5__2_6 = 0;
			goto IL_00c3_1;
		}

IL_009e_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->___U3CmapU3E5__1_5;
			int32_t L_17 = (int32_t)__this->___U3CiU3E5__2_6;
			int32_t L_18 = (int32_t)__this->___U3CiU3E5__2_6;
			NullCheck(L_16);
			(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (int32_t)L_18);
			int32_t L_19 = (int32_t)__this->___U3CiU3E5__2_6;
			V_5 = L_19;
			int32_t L_20 = V_5;
			__this->___U3CiU3E5__2_6 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		}

IL_00c3_1:
		{
			int32_t L_21 = (int32_t)__this->___U3CiU3E5__2_6;
			int32_t L_22 = (int32_t)__this->___count_3;
			V_6 = (bool)((((int32_t)L_21) < ((int32_t)L_22))? 1 : 0);
			bool L_23 = V_6;
			if (L_23)
			{
				goto IL_009e_1;
			}
		}
		{
			AsyncEnumerableSorter_1_tB12E111BEE1BE3928D42C95E823E309905F94836* L_24 = (AsyncEnumerableSorter_1_tB12E111BEE1BE3928D42C95E823E309905F94836*)__this->___U3CU3E4__this_4;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->___U3CmapU3E5__1_5;
			int32_t L_26 = (int32_t)__this->___count_3;
			NullCheck(L_24);
			((  void (*) (AsyncEnumerableSorter_1_tB12E111BEE1BE3928D42C95E823E309905F94836*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_24, L_25, 0, ((int32_t)il2cpp_codegen_subtract(L_26, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->___U3CmapU3E5__1_5;
			V_1 = L_27;
			goto IL_011c;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00fb;
		}
		throw e;
	}

CATCH_00fb:
	{
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CmapU3E5__1_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__1_5), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		AsyncUniTaskMethodBuilder_1_t012B41921636A2A189618FE848BE0FCB77D18906* L_28 = (AsyncUniTaskMethodBuilder_1_t012B41921636A2A189618FE848BE0FCB77D18906*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_29 = V_7;
		AsyncUniTaskMethodBuilder_1_SetException_mECBEAC6E4C036A31B0911484E7BB8D58F7F543D5_inline(L_28, L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mECBEAC6E4C036A31B0911484E7BB8D58F7F543D5_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0138;
	}

IL_011c:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CmapU3E5__1_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__1_5), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		AsyncUniTaskMethodBuilder_1_t012B41921636A2A189618FE848BE0FCB77D18906* L_30 = (AsyncUniTaskMethodBuilder_1_t012B41921636A2A189618FE848BE0FCB77D18906*)(&__this->___U3CU3Et__builder_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m58F872D008CE598740B661495F8297C4E2F555BF_inline(L_30, L_31, AsyncUniTaskMethodBuilder_1_SetResult_m58F872D008CE598740B661495F8297C4E2F555BF_RuntimeMethod_var);
	}

IL_0138:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSortAsyncU3Ed__2_SetStateMachine_m0ACBBEC8F46D5A35898B067F4C238EF9D86AEAB6_gshared (U3CSortAsyncU3Ed__2_t057E5D531E170020DD3D6A1FC5F4888D512503FA* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2__ctor_m0F5A38D7B55D76D7DD1A22C7D2346C87C12C2BC7_gshared (U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_IDisposable_Dispose_m4351C087BA62D9A48B3D9F1DDC95D03907470F42_gshared (U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__2_MoveNext_m6C0E7121B9FE2C414F762B67F7A2616E0360C61D_gshared (U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	float G_B12_0 = 0.0f;
	U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47* G_B12_1 = NULL;
	float G_B11_0 = 0.0f;
	U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47* G_B11_1 = NULL;
	float G_B13_0 = 0.0f;
	float G_B13_1 = 0.0f;
	U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47* G_B13_2 = NULL;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_00c5;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7* L_3 = (ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7*)(&__this->___tweenInfo_2);
		bool L_4;
		L_4 = ColorTween_ValidTarget_m1D7A682CE00048FAF1A3BDD55EB76F44C9122B4D(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}

IL_003d:
	{
		__this->___U3CelapsedTimeU3E5__1_3 = (0.0f);
		goto IL_00cd;
	}

IL_004d:
	{
		float L_6 = (float)__this->___U3CelapsedTimeU3E5__1_3;
		ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7* L_7 = (ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7*)(&__this->___tweenInfo_2);
		bool L_8;
		L_8 = ColorTween_get_ignoreTimeScale_mEDB15A4ADE3A0B9487D240964A7571247F974708(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if (L_8)
		{
			G_B12_0 = L_6;
			G_B12_1 = __this;
			goto IL_006f;
		}
		G_B11_0 = L_6;
		G_B11_1 = __this;
	}
	{
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		G_B13_0 = L_9;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_0074;
	}

IL_006f:
	{
		float L_10;
		L_10 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		G_B13_0 = L_10;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_0074:
	{
		NullCheck(G_B13_2);
		G_B13_2->___U3CelapsedTimeU3E5__1_3 = ((float)il2cpp_codegen_add(G_B13_1, G_B13_0));
		float L_11 = (float)__this->___U3CelapsedTimeU3E5__1_3;
		ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7* L_12 = (ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7*)(&__this->___tweenInfo_2);
		float L_13;
		L_13 = ColorTween_get_duration_m40D8F08C13FF2FE7583746934C6A017A93398548(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		float L_14;
		L_14 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(L_11/L_13)), NULL);
		__this->___U3CpercentageU3E5__2_4 = L_14;
		ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7* L_15 = (ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7*)(&__this->___tweenInfo_2);
		float L_16 = (float)__this->___U3CpercentageU3E5__2_4;
		ColorTween_TweenValue_mF5CBA9BDE7F73E47F9CF26DC4EC2419694049860(L_15, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00c5:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00cd:
	{
		float L_17 = (float)__this->___U3CelapsedTimeU3E5__1_3;
		ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7* L_18 = (ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7*)(&__this->___tweenInfo_2);
		float L_19;
		L_19 = ColorTween_get_duration_m40D8F08C13FF2FE7583746934C6A017A93398548(L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_2 = (bool)((((float)L_17) < ((float)L_19))? 1 : 0);
		bool L_20 = V_2;
		if (L_20)
		{
			goto IL_004d;
		}
	}
	{
		ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7* L_21 = (ColorTween_t15AEF379B51AC7DF9B23C440A938DCF32DA3FBB7*)(&__this->___tweenInfo_2);
		ColorTween_TweenValue_mF5CBA9BDE7F73E47F9CF26DC4EC2419694049860(L_21, (1.0f), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD5C399E5BDB2CD1C80065E31712D51A1FF1F7A57_gshared (U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CU3E2__current_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m64D83100E98E7B17D411F510BF48AF601D3D3E5D_gshared (U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__2_System_Collections_IEnumerator_get_Current_m3088183566ADDAEDFA7AA42C1345A1E3A6472D7F_gshared (U3CStartU3Ed__2_t9658309751B877709F2F33E5F2E46BE104025E47* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CU3E2__current_1;
		return L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2__ctor_m204C7F34151276EE628D17B5C5DECF463BFE649C_gshared (U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_IDisposable_Dispose_m6B7D5BE524D360F5211ADB261392102C044F80BA_gshared (U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__2_MoveNext_m09688763C8F18912CAD8923032A738C019C73021_gshared (U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	float G_B12_0 = 0.0f;
	U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D* G_B12_1 = NULL;
	float G_B11_0 = 0.0f;
	U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D* G_B11_1 = NULL;
	float G_B13_0 = 0.0f;
	float G_B13_1 = 0.0f;
	U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D* G_B13_2 = NULL;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_00c5;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE* L_3 = (FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE*)(&__this->___tweenInfo_2);
		bool L_4;
		L_4 = FloatTween_ValidTarget_m4591FB5DBEE8762554B97A09B232893EE754D7DF(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}

IL_003d:
	{
		__this->___U3CelapsedTimeU3E5__1_3 = (0.0f);
		goto IL_00cd;
	}

IL_004d:
	{
		float L_6 = (float)__this->___U3CelapsedTimeU3E5__1_3;
		FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE* L_7 = (FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE*)(&__this->___tweenInfo_2);
		bool L_8;
		L_8 = FloatTween_get_ignoreTimeScale_m8FE31080B4800A6CFB89918E0803BB1BE21FDA4B(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if (L_8)
		{
			G_B12_0 = L_6;
			G_B12_1 = __this;
			goto IL_006f;
		}
		G_B11_0 = L_6;
		G_B11_1 = __this;
	}
	{
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		G_B13_0 = L_9;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_0074;
	}

IL_006f:
	{
		float L_10;
		L_10 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		G_B13_0 = L_10;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_0074:
	{
		NullCheck(G_B13_2);
		G_B13_2->___U3CelapsedTimeU3E5__1_3 = ((float)il2cpp_codegen_add(G_B13_1, G_B13_0));
		float L_11 = (float)__this->___U3CelapsedTimeU3E5__1_3;
		FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE* L_12 = (FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE*)(&__this->___tweenInfo_2);
		float L_13;
		L_13 = FloatTween_get_duration_mE71CD40934ED69FDD7CDA8D5438E9897E6E9FE7A(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		float L_14;
		L_14 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(L_11/L_13)), NULL);
		__this->___U3CpercentageU3E5__2_4 = L_14;
		FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE* L_15 = (FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE*)(&__this->___tweenInfo_2);
		float L_16 = (float)__this->___U3CpercentageU3E5__2_4;
		FloatTween_TweenValue_m022D385B013439E2FB8020F6A6BD329CECA81E89(L_15, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00c5:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00cd:
	{
		float L_17 = (float)__this->___U3CelapsedTimeU3E5__1_3;
		FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE* L_18 = (FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE*)(&__this->___tweenInfo_2);
		float L_19;
		L_19 = FloatTween_get_duration_mE71CD40934ED69FDD7CDA8D5438E9897E6E9FE7A(L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_2 = (bool)((((float)L_17) < ((float)L_19))? 1 : 0);
		bool L_20 = V_2;
		if (L_20)
		{
			goto IL_004d;
		}
	}
	{
		FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE* L_21 = (FloatTween_t4C6604C5D2B0B4B634B53D545A74431BAE3A98BE*)(&__this->___tweenInfo_2);
		FloatTween_TweenValue_m022D385B013439E2FB8020F6A6BD329CECA81E89(L_21, (1.0f), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5044D7E234666651B25F2A52669B1DABAC9F6EF6_gshared (U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CU3E2__current_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m277B54F5F241ABED88C7A5EDFFC9DCB802BFEDA8_gshared (U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__2_System_Collections_IEnumerator_get_Current_m8886A998ED59423A494B615E495C54F92AF2D9E1_gshared (U3CStartU3Ed__2_tC9423255CD49C2088D279B9AA846474D4B59D80D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CU3E2__current_1;
		return L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2__ctor_mD1B548DCCF5485603C6FB4E9EB5431232DD5B8D0_gshared (U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_IDisposable_Dispose_mE258FFEEFB9655204943CAC39DD7B45C5C86302E_gshared (U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__2_MoveNext_mDC58E8E564F94A2ABFD7CF2CBD1FF7624A45064C_gshared (U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	float G_B12_0 = 0.0f;
	U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB* G_B12_1 = NULL;
	float G_B11_0 = 0.0f;
	U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB* G_B11_1 = NULL;
	float G_B13_0 = 0.0f;
	float G_B13_1 = 0.0f;
	U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB* G_B13_2 = NULL;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_00c5;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A* L_3 = (FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A*)(&__this->___tweenInfo_2);
		bool L_4;
		L_4 = FloatTween_ValidTarget_m36EABC84C8FEFF79EBAC8E9C3C7A394F1377E311(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}

IL_003d:
	{
		__this->___U3CelapsedTimeU3E5__1_3 = (0.0f);
		goto IL_00cd;
	}

IL_004d:
	{
		float L_6 = (float)__this->___U3CelapsedTimeU3E5__1_3;
		FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A* L_7 = (FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A*)(&__this->___tweenInfo_2);
		bool L_8;
		L_8 = FloatTween_get_ignoreTimeScale_m6F6BDCBD59C19E68572370F9FE3D7373B4212B3B(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if (L_8)
		{
			G_B12_0 = L_6;
			G_B12_1 = __this;
			goto IL_006f;
		}
		G_B11_0 = L_6;
		G_B11_1 = __this;
	}
	{
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		G_B13_0 = L_9;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_0074;
	}

IL_006f:
	{
		float L_10;
		L_10 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		G_B13_0 = L_10;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_0074:
	{
		NullCheck(G_B13_2);
		G_B13_2->___U3CelapsedTimeU3E5__1_3 = ((float)il2cpp_codegen_add(G_B13_1, G_B13_0));
		float L_11 = (float)__this->___U3CelapsedTimeU3E5__1_3;
		FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A* L_12 = (FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A*)(&__this->___tweenInfo_2);
		float L_13;
		L_13 = FloatTween_get_duration_mB1496D38A618FF8282205FD3AA14CA9C6D76454D(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		float L_14;
		L_14 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(L_11/L_13)), NULL);
		__this->___U3CpercentageU3E5__2_4 = L_14;
		FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A* L_15 = (FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A*)(&__this->___tweenInfo_2);
		float L_16 = (float)__this->___U3CpercentageU3E5__2_4;
		FloatTween_TweenValue_mE51344369BDDA58E9C3AEC62E1B1C1AC0349278E(L_15, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00c5:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00cd:
	{
		float L_17 = (float)__this->___U3CelapsedTimeU3E5__1_3;
		FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A* L_18 = (FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A*)(&__this->___tweenInfo_2);
		float L_19;
		L_19 = FloatTween_get_duration_mB1496D38A618FF8282205FD3AA14CA9C6D76454D(L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_2 = (bool)((((float)L_17) < ((float)L_19))? 1 : 0);
		bool L_20 = V_2;
		if (L_20)
		{
			goto IL_004d;
		}
	}
	{
		FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A* L_21 = (FloatTween_t11548A42FCB3B005DD83D77A529119381B2BB64A*)(&__this->___tweenInfo_2);
		FloatTween_TweenValue_mE51344369BDDA58E9C3AEC62E1B1C1AC0349278E(L_21, (1.0f), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE21E9F330D2C7762000788F9E4D277595F4615A8_gshared (U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CU3E2__current_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m40F8D57298F464D37ACA59B3E0FDE57233F1A637_gshared (U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__2_System_Collections_IEnumerator_get_Current_m5FFBD5E0572400854A31B2C0C67DF459207A3F4D_gshared (U3CStartU3Ed__2_t623C57A50EEA01089DB79D6F1F1217F89E158FEB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CU3E2__current_1;
		return L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2__ctor_mDF05087BBC59C18E5CF5357E924F318D4F9DA1CF_gshared (U3CStartU3Ed__2_t1568C5BC91DF861B9E8D83BD27BF6FB38F40D685* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_IDisposable_Dispose_mF833F55896DA165807267D9479DC1289521A0697_gshared (U3CStartU3Ed__2_t1568C5BC91DF861B9E8D83BD27BF6FB38F40D685* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__2_MoveNext_m660DB78FA8569F2F91486950B44AB9555C9F4C5C_gshared (U3CStartU3Ed__2_t1568C5BC91DF861B9E8D83BD27BF6FB38F40D685* __this, const RuntimeMethod* method) 
{
	void* L_3 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_7 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_16 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_18 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_21 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	float G_B12_0 = 0.0f;
	U3CStartU3Ed__2_t1568C5BC91DF861B9E8D83BD27BF6FB38F40D685* G_B12_1 = NULL;
	float G_B11_0 = 0.0f;
	U3CStartU3Ed__2_t1568C5BC91DF861B9E8D83BD27BF6FB38F40D685* G_B11_1 = NULL;
	float G_B13_0 = 0.0f;
	float G_B13_1 = 0.0f;
	U3CStartU3Ed__2_t1568C5BC91DF861B9E8D83BD27BF6FB38F40D685* G_B13_2 = NULL;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_00c5;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		bool L_4;
		L_4 = ConstrainedFuncInvoker0< bool >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 2), L_3, (void*)(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))));
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}

IL_003d:
	{
		il2cpp_codegen_write_instance_field_data<float>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), (0.0f));
		goto IL_00cd;
	}

IL_004d:
	{
		float L_6 = *(float*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		bool L_8;
		L_8 = ConstrainedFuncInvoker0< bool >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 3), L_7, (void*)(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))));
		if (L_8)
		{
			G_B12_0 = L_6;
			G_B12_1 = ((U3CStartU3Ed__2_t1568C5BC91DF861B9E8D83BD27BF6FB38F40D685*)__this);
			goto IL_006f;
		}
		G_B11_0 = L_6;
		G_B11_1 = ((U3CStartU3Ed__2_t1568C5BC91DF861B9E8D83BD27BF6FB38F40D685*)__this);
	}
	{
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		G_B13_0 = L_9;
		G_B13_1 = G_B11_0;
		G_B13_2 = ((U3CStartU3Ed__2_t1568C5BC91DF861B9E8D83BD27BF6FB38F40D685*)G_B11_1);
		goto IL_0074;
	}

IL_006f:
	{
		float L_10;
		L_10 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		G_B13_0 = L_10;
		G_B13_1 = G_B12_0;
		G_B13_2 = ((U3CStartU3Ed__2_t1568C5BC91DF861B9E8D83BD27BF6FB38F40D685*)G_B12_1);
	}

IL_0074:
	{
		NullCheck(G_B13_2);
		il2cpp_codegen_write_instance_field_data<float>(G_B13_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), ((float)il2cpp_codegen_add(G_B13_1, G_B13_0)));
		float L_11 = *(float*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		float L_13;
		L_13 = ConstrainedFuncInvoker0< float >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_12, (void*)(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))));
		float L_14;
		L_14 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(L_11/L_13)), NULL);
		il2cpp_codegen_write_instance_field_data<float>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_14);
		float L_15 = *(float*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		ConstrainedActionInvoker1< float >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_16, (void*)(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), L_15);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), NULL);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
		return (bool)1;
	}

IL_00c5:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
	}

IL_00cd:
	{
		float L_17 = *(float*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		float L_19;
		L_19 = ConstrainedFuncInvoker0< float >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_18, (void*)(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))));
		V_2 = (bool)((((float)L_17) < ((float)L_19))? 1 : 0);
		bool L_20 = V_2;
		if (L_20)
		{
			goto IL_004d;
		}
	}
	{
		ConstrainedActionInvoker1< float >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_21, (void*)(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), (1.0f));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m680A7188E646F2A5D5877DF596361383C047D7F8_gshared (U3CStartU3Ed__2_t1568C5BC91DF861B9E8D83BD27BF6FB38F40D685* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_mDA235ED91A0322A3DE68B0BD16507FA012A2208C_gshared (U3CStartU3Ed__2_t1568C5BC91DF861B9E8D83BD27BF6FB38F40D685* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__2_System_Collections_IEnumerator_get_Current_mA025352AE72434A95089D1DE12873AA207709B29_gshared (U3CStartU3Ed__2_t1568C5BC91DF861B9E8D83BD27BF6FB38F40D685* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		return L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2__ctor_m71C11BAA53B11582C099CF052464B764C63725A1_gshared (U3CStartU3Ed__2_tBF82820C779B852A606DE0B61E09B9EB4A27F942* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_IDisposable_Dispose_mEF28E0C41B34C83793771A6807889A3652C5E0C0_gshared (U3CStartU3Ed__2_tBF82820C779B852A606DE0B61E09B9EB4A27F942* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__2_MoveNext_m065109F8928C6D22F88CC4048CBD58CF30DA1C03_gshared (U3CStartU3Ed__2_tBF82820C779B852A606DE0B61E09B9EB4A27F942* __this, const RuntimeMethod* method) 
{
	void* L_3 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_7 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_16 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_18 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	void* L_21 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	float G_B12_0 = 0.0f;
	U3CStartU3Ed__2_tBF82820C779B852A606DE0B61E09B9EB4A27F942* G_B12_1 = NULL;
	float G_B11_0 = 0.0f;
	U3CStartU3Ed__2_tBF82820C779B852A606DE0B61E09B9EB4A27F942* G_B11_1 = NULL;
	float G_B13_0 = 0.0f;
	float G_B13_1 = 0.0f;
	U3CStartU3Ed__2_tBF82820C779B852A606DE0B61E09B9EB4A27F942* G_B13_2 = NULL;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_00c5;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		bool L_4;
		L_4 = ConstrainedFuncInvoker0< bool >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 2), L_3, (void*)(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))));
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}

IL_003d:
	{
		il2cpp_codegen_write_instance_field_data<float>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), (0.0f));
		goto IL_00cd;
	}

IL_004d:
	{
		float L_6 = *(float*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		bool L_8;
		L_8 = ConstrainedFuncInvoker0< bool >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 3), L_7, (void*)(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))));
		if (L_8)
		{
			G_B12_0 = L_6;
			G_B12_1 = ((U3CStartU3Ed__2_tBF82820C779B852A606DE0B61E09B9EB4A27F942*)__this);
			goto IL_006f;
		}
		G_B11_0 = L_6;
		G_B11_1 = ((U3CStartU3Ed__2_tBF82820C779B852A606DE0B61E09B9EB4A27F942*)__this);
	}
	{
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		G_B13_0 = L_9;
		G_B13_1 = G_B11_0;
		G_B13_2 = ((U3CStartU3Ed__2_tBF82820C779B852A606DE0B61E09B9EB4A27F942*)G_B11_1);
		goto IL_0074;
	}

IL_006f:
	{
		float L_10;
		L_10 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		G_B13_0 = L_10;
		G_B13_1 = G_B12_0;
		G_B13_2 = ((U3CStartU3Ed__2_tBF82820C779B852A606DE0B61E09B9EB4A27F942*)G_B12_1);
	}

IL_0074:
	{
		NullCheck(G_B13_2);
		il2cpp_codegen_write_instance_field_data<float>(G_B13_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), ((float)il2cpp_codegen_add(G_B13_1, G_B13_0)));
		float L_11 = *(float*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		float L_13;
		L_13 = ConstrainedFuncInvoker0< float >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_12, (void*)(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))));
		float L_14;
		L_14 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(L_11/L_13)), NULL);
		il2cpp_codegen_write_instance_field_data<float>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_14);
		float L_15 = *(float*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		ConstrainedActionInvoker1< float >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_16, (void*)(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), L_15);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), NULL);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
		return (bool)1;
	}

IL_00c5:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
	}

IL_00cd:
	{
		float L_17 = *(float*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		float L_19;
		L_19 = ConstrainedFuncInvoker0< float >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_18, (void*)(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))));
		V_2 = (bool)((((float)L_17) < ((float)L_19))? 1 : 0);
		bool L_20 = V_2;
		if (L_20)
		{
			goto IL_004d;
		}
	}
	{
		ConstrainedActionInvoker1< float >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 1), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_21, (void*)(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), (1.0f));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5D54349DF24EE5D22A50D0020D95BF15EA486C4D_gshared (U3CStartU3Ed__2_tBF82820C779B852A606DE0B61E09B9EB4A27F942* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m808D1884D246783D5DD46C128DE778FB855F2FE9_gshared (U3CStartU3Ed__2_tBF82820C779B852A606DE0B61E09B9EB4A27F942* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__2_System_Collections_IEnumerator_get_Current_mC76C8F02C58C45F7B6CB284B18BD2EFA6C603E15_gshared (U3CStartU3Ed__2_tBF82820C779B852A606DE0B61E09B9EB4A27F942* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		return L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubscribeAwaitCoreU3Ed__6_1__ctor_m7CA6BA31022910D7024D71CF9C7AA74E5F19D9A4_gshared (U3CSubscribeAwaitCoreU3Ed__6_1_tC7FE9328FB7A6EBDE3A973CF3F21ED0DC0DED259* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubscribeAwaitCoreU3Ed__6_1_MoveNext_mAB82E9E7737318E3E48747789831380886B5C105_gshared (U3CSubscribeAwaitCoreU3Ed__6_1_tC7FE9328FB7A6EBDE3A973CF3F21ED0DC0DED259* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_tAFB7B583D640A9AD3B6F2C5887E9860FDB147C42 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_tAFB7B583D640A9AD3B6F2C5887E9860FDB147C42);
	int32_t V_0 = 0;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CSubscribeAwaitCoreU3Ed__6_1_tC7FE9328FB7A6EBDE3A973CF3F21ED0DC0DED259* V_3 = NULL;
	Exception_t* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t V_13 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 4> __active_exceptions;
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
			goto IL_0255_1;
		}

IL_001a_1:
		{
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_6;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__1_7 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_7), (void*)L_5);
			__this->___U3CU3Es__2_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_8), (void*)NULL);
			__this->___U3CU3Es__3_9 = 0;
		}

IL_0040_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if ((!(((uint32_t)L_6) > ((uint32_t)1))))
				{
					goto IL_0047_2;
				}
			}
			{
				goto IL_0049_2;
			}

IL_0047_2:
			{
				goto IL_0049_2;
			}

IL_0049_2:
			{
			}
			try
			{
				{
					int32_t L_7 = V_0;
					if (!L_7)
					{
						goto IL_0055_3;
					}
				}
				{
					goto IL_004f_3;
				}

IL_004f_3:
				{
					int32_t L_8 = V_0;
					if ((((int32_t)L_8) == ((int32_t)1)))
					{
						goto IL_0057_3;
					}
				}
				{
					goto IL_005c_3;
				}

IL_0055_3:
				{
					goto IL_0063_3;
				}

IL_0057_3:
				{
					goto IL_0144_3;
				}

IL_005c_3:
				{
					goto IL_00fd_3;
				}

IL_0062_3:
				{
				}

IL_0063_3:
				{
				}
				try
				{
					{
						int32_t L_9 = V_0;
						if (!L_9)
						{
							goto IL_0069_4;
						}
					}
					{
						goto IL_006b_4;
					}

IL_0069_4:
					{
						goto IL_00bb_4;
					}

IL_006b_4:
					{
						Func_2_tB9800595B3251D2492E40667A6C05061784D48FB* L_10 = (Func_2_tB9800595B3251D2492E40667A6C05061784D48FB*)__this->___onNext_3;
						RuntimeObject* L_11 = (RuntimeObject*)__this->___U3CeU3E5__1_7;
						NullCheck(L_11);
						InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_11, (Il2CppFullySharedGenericAny*)L_12);
						NullCheck(L_10);
						UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_13;
						L_13 = InvokerFuncInvoker1< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_12: *(void**)L_12));
						V_2 = L_13;
						Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_14;
						L_14 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_2), NULL);
						V_1 = L_14;
						bool L_15;
						L_15 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_1), NULL);
						if (L_15)
						{
							goto IL_00d7_4;
						}
					}
					{
						int32_t L_16 = 0;
						V_0 = L_16;
						__this->___U3CU3E1__state_0 = L_16;
						Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_17 = V_1;
						__this->___U3CU3Eu__1_13 = L_17;
						Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
						V_3 = __this;
						AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_18 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
						((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSubscribeAwaitCoreU3Ed__6_1_tC7FE9328FB7A6EBDE3A973CF3F21ED0DC0DED259**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_18, (&V_1), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
						goto IL_02fb;
					}

IL_00bb_4:
					{
						Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_19 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_13;
						V_1 = L_19;
						Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_20 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_13);
						il2cpp_codegen_initobj(L_20, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
						int32_t L_21 = (-1);
						V_0 = L_21;
						__this->___U3CU3E1__state_0 = L_21;
					}

IL_00d7_4:
					{
						Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_1), NULL);
						goto IL_00fc_3;
					}
				}
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_00e2_3;
					}
					throw e;
				}

CATCH_00e2_3:
				{
					V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					Exception_t* L_22 = V_4;
					__this->___U3CexU3E5__4_10 = L_22;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__4_10), (void*)L_22);
					Exception_t* L_23 = (Exception_t*)__this->___U3CexU3E5__4_10;
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var)));
					UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3(L_23, NULL);
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_00fc_3;
				}

IL_00fc_3:
				{
				}

IL_00fd_3:
				{
					RuntimeObject* L_24 = (RuntimeObject*)__this->___U3CeU3E5__1_7;
					NullCheck(L_24);
					UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_25;
					L_25 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_24);
					V_7 = L_25;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_26;
					L_26 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
					V_6 = L_26;
					bool L_27;
					L_27 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_6), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
					if (L_27)
					{
						goto IL_0161_3;
					}
				}
				{
					int32_t L_28 = 1;
					V_0 = L_28;
					__this->___U3CU3E1__state_0 = L_28;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29 = V_6;
					__this->___U3CU3Eu__2_14 = L_29;
					Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
					V_3 = __this;
					AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_30 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
					((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSubscribeAwaitCoreU3Ed__6_1_tC7FE9328FB7A6EBDE3A973CF3F21ED0DC0DED259**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_30, (&V_6), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
					goto IL_02fb;
				}

IL_0144_3:
				{
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_14;
					V_6 = L_31;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_32 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_14);
					il2cpp_codegen_initobj(L_32, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
					int32_t L_33 = (-1);
					V_0 = L_33;
					__this->___U3CU3E1__state_0 = L_33;
				}

IL_0161_3:
				{
					bool L_34;
					L_34 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
					__this->___U3CU3Es__5_11 = L_34;
					bool L_35 = (bool)__this->___U3CU3Es__5_11;
					V_5 = L_35;
					bool L_36 = V_5;
					if (L_36)
					{
						goto IL_0062_3;
					}
				}
				{
					Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_37 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)__this->___onCompleted_5;
					NullCheck(L_37);
					Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_37, NULL);
					goto IL_01e7_2;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_018c_2;
				}
				throw e;
			}

CATCH_018c_2:
			{
				{
					V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					Exception_t* L_38 = V_4;
					__this->___U3CexU3E5__6_12 = L_38;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__6_12), (void*)L_38);
					Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_39 = (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*)__this->___onError_4;
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Subscribe_t65C94F6EDBB645D24A16DB00D5BA490B834282BC_il2cpp_TypeInfo_var)));
					Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_40 = ((Subscribe_t65C94F6EDBB645D24A16DB00D5BA490B834282BC_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Subscribe_t65C94F6EDBB645D24A16DB00D5BA490B834282BC_il2cpp_TypeInfo_var))))->___NopError_0;
					bool L_41;
					L_41 = Delegate_op_Equality_m8B96593B665536587FFD27DE233442C075971C32((Delegate_t*)L_39, (Delegate_t*)L_40, NULL);
					V_8 = L_41;
					bool L_42 = V_8;
					if (!L_42)
					{
						goto IL_01bc_2;
					}
				}
				{
					Exception_t* L_43 = (Exception_t*)__this->___U3CexU3E5__6_12;
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var)));
					UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3(L_43, NULL);
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_01e9_2;
				}

IL_01bc_2:
				{
					Exception_t* L_44 = (Exception_t*)__this->___U3CexU3E5__6_12;
					V_9 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_44, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_45 = V_9;
					if (!L_45)
					{
						goto IL_01d2_2;
					}
				}
				{
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_01e9_2;
				}

IL_01d2_2:
				{
					Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_46 = (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*)__this->___onError_4;
					Exception_t* L_47 = (Exception_t*)__this->___U3CexU3E5__6_12;
					NullCheck(L_46);
					Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(L_46, L_47, NULL);
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_01e7_2;
				}
			}

IL_01e7_2:
			{
				goto IL_01fe_1;
			}

IL_01e9_2:
			{
				__this->___U3CU3Es__3_9 = 1;
				goto IL_01fe_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01f2_1;
			}
			throw e;
		}

CATCH_01f2_1:
		{
			V_10 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_48 = V_10;
			__this->___U3CU3Es__2_8 = L_48;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_8), (void*)L_48);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01fe_1;
		}

IL_01fe_1:
		{
			RuntimeObject* L_49 = (RuntimeObject*)__this->___U3CeU3E5__1_7;
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_49) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_50 = V_11;
			if (!L_50)
			{
				goto IL_027b_1;
			}
		}
		{
			RuntimeObject* L_51 = (RuntimeObject*)__this->___U3CeU3E5__1_7;
			NullCheck((RuntimeObject*)L_51);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_52;
			L_52 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_51);
			V_2 = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_53;
			L_53 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_2), NULL);
			V_12 = L_53;
			bool L_54;
			L_54 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_54)
			{
				goto IL_0272_1;
			}
		}
		{
			int32_t L_55 = 2;
			V_0 = L_55;
			__this->___U3CU3E1__state_0 = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_56 = V_12;
			__this->___U3CU3Eu__1_13 = L_56;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
			V_3 = __this;
			AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_57 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSubscribeAwaitCoreU3Ed__6_1_tC7FE9328FB7A6EBDE3A973CF3F21ED0DC0DED259**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_57, (&V_12), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			goto IL_02fb;
		}

IL_0255_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_58 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_13;
			V_12 = L_58;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_59 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_13);
			il2cpp_codegen_initobj(L_59, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_60 = (-1);
			V_0 = L_60;
			__this->___U3CU3E1__state_0 = L_60;
		}

IL_0272_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_027b_1:
		{
			RuntimeObject* L_61 = (RuntimeObject*)__this->___U3CU3Es__2_8;
			V_10 = L_61;
			RuntimeObject* L_62 = V_10;
			if (!L_62)
			{
				goto IL_02a5_1;
			}
		}
		{
			RuntimeObject* L_63 = V_10;
			V_4 = ((Exception_t*)IsInstClass((RuntimeObject*)L_63, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_64 = V_4;
			if (L_64)
			{
				goto IL_0298_1;
			}
		}
		{
			RuntimeObject* L_65 = V_10;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_65, method);
		}

IL_0298_1:
		{
			Exception_t* L_66 = V_4;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_67;
			L_67 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_66, NULL);
			NullCheck(L_67);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_67, NULL);
		}

IL_02a5_1:
		{
			int32_t L_68 = (int32_t)__this->___U3CU3Es__3_9;
			V_13 = L_68;
			int32_t L_69 = V_13;
			if ((((int32_t)L_69) == ((int32_t)1)))
			{
				goto IL_02b4_1;
			}
		}
		{
			goto IL_02b6_1;
		}

IL_02b4_1:
		{
			goto IL_02e0;
		}

IL_02b6_1:
		{
			__this->___U3CU3Es__2_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_8), (void*)NULL);
			goto IL_02e0;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02bf;
		}
		throw e;
	}

CATCH_02bf:
	{
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_70 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_71 = V_4;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(L_70, L_71, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02fb;
	}

IL_02e0:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_72 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(L_72, NULL);
	}

IL_02fb:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubscribeAwaitCoreU3Ed__6_1_SetStateMachine_mDB47DBFB4820980DDA791AD1E0D1E7DE3E10151C_gshared (U3CSubscribeAwaitCoreU3Ed__6_1_tC7FE9328FB7A6EBDE3A973CF3F21ED0DC0DED259* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubscribeAwaitCoreU3Ed__7_1__ctor_mD513AE85165427D09A4C79EC6056A0CF69E2EC5D_gshared (U3CSubscribeAwaitCoreU3Ed__7_1_t31834B4A48C6C713676D223C49B695A3DCF34F27* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubscribeAwaitCoreU3Ed__7_1_MoveNext_m444BCBD8DBDB65E74923CF8C4EC544C0DC29A369_gshared (U3CSubscribeAwaitCoreU3Ed__7_1_t31834B4A48C6C713676D223C49B695A3DCF34F27* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_tAB5CD446EA0709F073524C3615D8A5BF14FE9812 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_tAB5CD446EA0709F073524C3615D8A5BF14FE9812);
	int32_t V_0 = 0;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CSubscribeAwaitCoreU3Ed__7_1_t31834B4A48C6C713676D223C49B695A3DCF34F27* V_3 = NULL;
	Exception_t* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t V_13 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 4> __active_exceptions;
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
			goto IL_025b_1;
		}

IL_001a_1:
		{
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_6;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__1_7 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_7), (void*)L_5);
			__this->___U3CU3Es__2_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_8), (void*)NULL);
			__this->___U3CU3Es__3_9 = 0;
		}

IL_0040_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if ((!(((uint32_t)L_6) > ((uint32_t)1))))
				{
					goto IL_0047_2;
				}
			}
			{
				goto IL_0049_2;
			}

IL_0047_2:
			{
				goto IL_0049_2;
			}

IL_0049_2:
			{
			}
			try
			{
				{
					int32_t L_7 = V_0;
					if (!L_7)
					{
						goto IL_0055_3;
					}
				}
				{
					goto IL_004f_3;
				}

IL_004f_3:
				{
					int32_t L_8 = V_0;
					if ((((int32_t)L_8) == ((int32_t)1)))
					{
						goto IL_0057_3;
					}
				}
				{
					goto IL_005c_3;
				}

IL_0055_3:
				{
					goto IL_0063_3;
				}

IL_0057_3:
				{
					goto IL_014a_3;
				}

IL_005c_3:
				{
					goto IL_0103_3;
				}

IL_0062_3:
				{
				}

IL_0063_3:
				{
				}
				try
				{
					{
						int32_t L_9 = V_0;
						if (!L_9)
						{
							goto IL_0069_4;
						}
					}
					{
						goto IL_006b_4;
					}

IL_0069_4:
					{
						goto IL_00c1_4;
					}

IL_006b_4:
					{
						Func_3_tEBFC185F508D6150079151B2395F5DE7B54CC752* L_10 = (Func_3_tEBFC185F508D6150079151B2395F5DE7B54CC752*)__this->___onNext_3;
						RuntimeObject* L_11 = (RuntimeObject*)__this->___U3CeU3E5__1_7;
						NullCheck(L_11);
						InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_11, (Il2CppFullySharedGenericAny*)L_12);
						CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_13 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_6;
						NullCheck(L_10);
						UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_14;
						L_14 = InvokerFuncInvoker2< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_12: *(void**)L_12), L_13);
						V_2 = L_14;
						Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_15;
						L_15 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_2), NULL);
						V_1 = L_15;
						bool L_16;
						L_16 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_1), NULL);
						if (L_16)
						{
							goto IL_00dd_4;
						}
					}
					{
						int32_t L_17 = 0;
						V_0 = L_17;
						__this->___U3CU3E1__state_0 = L_17;
						Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_18 = V_1;
						__this->___U3CU3Eu__1_13 = L_18;
						Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
						V_3 = __this;
						AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_19 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
						((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSubscribeAwaitCoreU3Ed__7_1_t31834B4A48C6C713676D223C49B695A3DCF34F27**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_19, (&V_1), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
						goto IL_0301;
					}

IL_00c1_4:
					{
						Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_20 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_13;
						V_1 = L_20;
						Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_21 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_13);
						il2cpp_codegen_initobj(L_21, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
						int32_t L_22 = (-1);
						V_0 = L_22;
						__this->___U3CU3E1__state_0 = L_22;
					}

IL_00dd_4:
					{
						Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_1), NULL);
						goto IL_0102_3;
					}
				}
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_00e8_3;
					}
					throw e;
				}

CATCH_00e8_3:
				{
					V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					Exception_t* L_23 = V_4;
					__this->___U3CexU3E5__4_10 = L_23;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__4_10), (void*)L_23);
					Exception_t* L_24 = (Exception_t*)__this->___U3CexU3E5__4_10;
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var)));
					UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3(L_24, NULL);
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0102_3;
				}

IL_0102_3:
				{
				}

IL_0103_3:
				{
					RuntimeObject* L_25 = (RuntimeObject*)__this->___U3CeU3E5__1_7;
					NullCheck(L_25);
					UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_26;
					L_26 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_25);
					V_7 = L_26;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_27;
					L_27 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
					V_6 = L_27;
					bool L_28;
					L_28 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_6), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
					if (L_28)
					{
						goto IL_0167_3;
					}
				}
				{
					int32_t L_29 = 1;
					V_0 = L_29;
					__this->___U3CU3E1__state_0 = L_29;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_30 = V_6;
					__this->___U3CU3Eu__2_14 = L_30;
					Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
					V_3 = __this;
					AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_31 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
					((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSubscribeAwaitCoreU3Ed__7_1_t31834B4A48C6C713676D223C49B695A3DCF34F27**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_31, (&V_6), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
					goto IL_0301;
				}

IL_014a_3:
				{
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_32 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_14;
					V_6 = L_32;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_33 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_14);
					il2cpp_codegen_initobj(L_33, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
					int32_t L_34 = (-1);
					V_0 = L_34;
					__this->___U3CU3E1__state_0 = L_34;
				}

IL_0167_3:
				{
					bool L_35;
					L_35 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
					__this->___U3CU3Es__5_11 = L_35;
					bool L_36 = (bool)__this->___U3CU3Es__5_11;
					V_5 = L_36;
					bool L_37 = V_5;
					if (L_37)
					{
						goto IL_0062_3;
					}
				}
				{
					Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_38 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)__this->___onCompleted_5;
					NullCheck(L_38);
					Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_38, NULL);
					goto IL_01ed_2;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0192_2;
				}
				throw e;
			}

CATCH_0192_2:
			{
				{
					V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					Exception_t* L_39 = V_4;
					__this->___U3CexU3E5__6_12 = L_39;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__6_12), (void*)L_39);
					Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_40 = (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*)__this->___onError_4;
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Subscribe_t65C94F6EDBB645D24A16DB00D5BA490B834282BC_il2cpp_TypeInfo_var)));
					Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_41 = ((Subscribe_t65C94F6EDBB645D24A16DB00D5BA490B834282BC_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Subscribe_t65C94F6EDBB645D24A16DB00D5BA490B834282BC_il2cpp_TypeInfo_var))))->___NopError_0;
					bool L_42;
					L_42 = Delegate_op_Equality_m8B96593B665536587FFD27DE233442C075971C32((Delegate_t*)L_40, (Delegate_t*)L_41, NULL);
					V_8 = L_42;
					bool L_43 = V_8;
					if (!L_43)
					{
						goto IL_01c2_2;
					}
				}
				{
					Exception_t* L_44 = (Exception_t*)__this->___U3CexU3E5__6_12;
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var)));
					UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3(L_44, NULL);
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_01ef_2;
				}

IL_01c2_2:
				{
					Exception_t* L_45 = (Exception_t*)__this->___U3CexU3E5__6_12;
					V_9 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_45, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_46 = V_9;
					if (!L_46)
					{
						goto IL_01d8_2;
					}
				}
				{
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_01ef_2;
				}

IL_01d8_2:
				{
					Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_47 = (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*)__this->___onError_4;
					Exception_t* L_48 = (Exception_t*)__this->___U3CexU3E5__6_12;
					NullCheck(L_47);
					Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(L_47, L_48, NULL);
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_01ed_2;
				}
			}

IL_01ed_2:
			{
				goto IL_0204_1;
			}

IL_01ef_2:
			{
				__this->___U3CU3Es__3_9 = 1;
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
			V_10 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_49 = V_10;
			__this->___U3CU3Es__2_8 = L_49;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_8), (void*)L_49);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0204_1;
		}

IL_0204_1:
		{
			RuntimeObject* L_50 = (RuntimeObject*)__this->___U3CeU3E5__1_7;
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_50) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_51 = V_11;
			if (!L_51)
			{
				goto IL_0281_1;
			}
		}
		{
			RuntimeObject* L_52 = (RuntimeObject*)__this->___U3CeU3E5__1_7;
			NullCheck((RuntimeObject*)L_52);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_53;
			L_53 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_52);
			V_2 = L_53;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_54;
			L_54 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_2), NULL);
			V_12 = L_54;
			bool L_55;
			L_55 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_55)
			{
				goto IL_0278_1;
			}
		}
		{
			int32_t L_56 = 2;
			V_0 = L_56;
			__this->___U3CU3E1__state_0 = L_56;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_57 = V_12;
			__this->___U3CU3Eu__1_13 = L_57;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
			V_3 = __this;
			AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_58 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSubscribeAwaitCoreU3Ed__7_1_t31834B4A48C6C713676D223C49B695A3DCF34F27**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_58, (&V_12), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			goto IL_0301;
		}

IL_025b_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_59 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_13;
			V_12 = L_59;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_60 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_13);
			il2cpp_codegen_initobj(L_60, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_61 = (-1);
			V_0 = L_61;
			__this->___U3CU3E1__state_0 = L_61;
		}

IL_0278_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_0281_1:
		{
			RuntimeObject* L_62 = (RuntimeObject*)__this->___U3CU3Es__2_8;
			V_10 = L_62;
			RuntimeObject* L_63 = V_10;
			if (!L_63)
			{
				goto IL_02ab_1;
			}
		}
		{
			RuntimeObject* L_64 = V_10;
			V_4 = ((Exception_t*)IsInstClass((RuntimeObject*)L_64, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_65 = V_4;
			if (L_65)
			{
				goto IL_029e_1;
			}
		}
		{
			RuntimeObject* L_66 = V_10;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_66, method);
		}

IL_029e_1:
		{
			Exception_t* L_67 = V_4;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_68;
			L_68 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_67, NULL);
			NullCheck(L_68);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_68, NULL);
		}

IL_02ab_1:
		{
			int32_t L_69 = (int32_t)__this->___U3CU3Es__3_9;
			V_13 = L_69;
			int32_t L_70 = V_13;
			if ((((int32_t)L_70) == ((int32_t)1)))
			{
				goto IL_02ba_1;
			}
		}
		{
			goto IL_02bc_1;
		}

IL_02ba_1:
		{
			goto IL_02e6;
		}

IL_02bc_1:
		{
			__this->___U3CU3Es__2_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_8), (void*)NULL);
			goto IL_02e6;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02c5;
		}
		throw e;
	}

CATCH_02c5:
	{
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_71 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_72 = V_4;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(L_71, L_72, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0301;
	}

IL_02e6:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_73 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(L_73, NULL);
	}

IL_0301:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubscribeAwaitCoreU3Ed__7_1_SetStateMachine_m25CD95E505C9C8A5DEA25738688D81C957E06104_gshared (U3CSubscribeAwaitCoreU3Ed__7_1_t31834B4A48C6C713676D223C49B695A3DCF34F27* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubscribeCoreU3Ed__2_1__ctor_m26785777F4306EF826891640883A92B779DF0B7C_gshared (U3CSubscribeCoreU3Ed__2_1_tE00796033B09ACBC588647F42A7F1CEFE1039AB9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubscribeCoreU3Ed__2_1_MoveNext_m361FA2CBF47B68AF24A32F6645444A545AD3D030_gshared (U3CSubscribeCoreU3Ed__2_1_tE00796033B09ACBC588647F42A7F1CEFE1039AB9* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t7D7B5D4A9E4935C0EA62177B045330B85A39164C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t7D7B5D4A9E4935C0EA62177B045330B85A39164C);
	int32_t V_0 = 0;
	Exception_t* V_1 = NULL;
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CSubscribeCoreU3Ed__2_1_tE00796033B09ACBC588647F42A7F1CEFE1039AB9* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_11;
	memset((&V_11), 0, sizeof(V_11));
	int32_t V_12 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 4> __active_exceptions;
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
			goto IL_01db_1;
		}

IL_0019_1:
		{
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_6;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__1_7 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_7), (void*)L_5);
			__this->___U3CU3Es__2_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_8), (void*)NULL);
			__this->___U3CU3Es__3_9 = 0;
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
				goto IL_0047_2;
			}

IL_0047_2:
			{
			}
			try
			{
				{
					int32_t L_7 = V_0;
					if (!L_7)
					{
						goto IL_004d_3;
					}
				}
				{
					goto IL_004f_3;
				}

IL_004d_3:
				{
					goto IL_00cd_3;
				}

IL_004f_3:
				{
					goto IL_0087_3;
				}

IL_0052_3:
				{
				}
				try
				{
					Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_8 = (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this->___onNext_3;
					RuntimeObject* L_9 = (RuntimeObject*)__this->___U3CeU3E5__1_7;
					NullCheck(L_9);
					InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
					NullCheck(L_8);
					InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
					goto IL_0086_3;
				}
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_006e_3;
					}
					throw e;
				}

CATCH_006e_3:
				{
					V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					Exception_t* L_11 = V_1;
					__this->___U3CexU3E5__4_10 = L_11;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__4_10), (void*)L_11);
					Exception_t* L_12 = (Exception_t*)__this->___U3CexU3E5__4_10;
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var)));
					UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3(L_12, NULL);
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0086_3;
				}

IL_0086_3:
				{
				}

IL_0087_3:
				{
					RuntimeObject* L_13 = (RuntimeObject*)__this->___U3CeU3E5__1_7;
					NullCheck(L_13);
					UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_14;
					L_14 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_13);
					V_4 = L_14;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_15;
					L_15 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
					V_3 = L_15;
					bool L_16;
					L_16 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
					if (L_16)
					{
						goto IL_00e9_3;
					}
				}
				{
					int32_t L_17 = 0;
					V_0 = L_17;
					__this->___U3CU3E1__state_0 = L_17;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_18 = V_3;
					__this->___U3CU3Eu__1_13 = L_18;
					Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
					V_5 = __this;
					AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_19 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
					((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSubscribeCoreU3Ed__2_1_tE00796033B09ACBC588647F42A7F1CEFE1039AB9**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_19, (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
					goto IL_027c;
				}

IL_00cd_3:
				{
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_20 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_13;
					V_3 = L_20;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_21 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_13);
					il2cpp_codegen_initobj(L_21, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
					int32_t L_22 = (-1);
					V_0 = L_22;
					__this->___U3CU3E1__state_0 = L_22;
				}

IL_00e9_3:
				{
					bool L_23;
					L_23 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
					__this->___U3CU3Es__5_11 = L_23;
					bool L_24 = (bool)__this->___U3CU3Es__5_11;
					V_2 = L_24;
					bool L_25 = V_2;
					if (L_25)
					{
						goto IL_0052_3;
					}
				}
				{
					Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_26 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)__this->___onCompleted_5;
					NullCheck(L_26);
					Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_26, NULL);
					goto IL_016b_2;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0112_2;
				}
				throw e;
			}

CATCH_0112_2:
			{
				{
					V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					Exception_t* L_27 = V_1;
					__this->___U3CexU3E5__6_12 = L_27;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__6_12), (void*)L_27);
					Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_28 = (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*)__this->___onError_4;
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Subscribe_t65C94F6EDBB645D24A16DB00D5BA490B834282BC_il2cpp_TypeInfo_var)));
					Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_29 = ((Subscribe_t65C94F6EDBB645D24A16DB00D5BA490B834282BC_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Subscribe_t65C94F6EDBB645D24A16DB00D5BA490B834282BC_il2cpp_TypeInfo_var))))->___NopError_0;
					bool L_30;
					L_30 = Delegate_op_Equality_m8B96593B665536587FFD27DE233442C075971C32((Delegate_t*)L_28, (Delegate_t*)L_29, NULL);
					V_6 = L_30;
					bool L_31 = V_6;
					if (!L_31)
					{
						goto IL_0140_2;
					}
				}
				{
					Exception_t* L_32 = (Exception_t*)__this->___U3CexU3E5__6_12;
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var)));
					UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3(L_32, NULL);
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_016d_2;
				}

IL_0140_2:
				{
					Exception_t* L_33 = (Exception_t*)__this->___U3CexU3E5__6_12;
					V_7 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_33, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_34 = V_7;
					if (!L_34)
					{
						goto IL_0156_2;
					}
				}
				{
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_016d_2;
				}

IL_0156_2:
				{
					Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_35 = (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*)__this->___onError_4;
					Exception_t* L_36 = (Exception_t*)__this->___U3CexU3E5__6_12;
					NullCheck(L_35);
					Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(L_35, L_36, NULL);
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_016b_2;
				}
			}

IL_016b_2:
			{
				goto IL_0182_1;
			}

IL_016d_2:
			{
				__this->___U3CU3Es__3_9 = 1;
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
			V_8 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_37 = V_8;
			__this->___U3CU3Es__2_8 = L_37;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_8), (void*)L_37);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0182_1;
		}

IL_0182_1:
		{
			RuntimeObject* L_38 = (RuntimeObject*)__this->___U3CeU3E5__1_7;
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_38) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_39 = V_9;
			if (!L_39)
			{
				goto IL_0201_1;
			}
		}
		{
			RuntimeObject* L_40 = (RuntimeObject*)__this->___U3CeU3E5__1_7;
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
				goto IL_01f8_1;
			}
		}
		{
			int32_t L_44 = 1;
			V_0 = L_44;
			__this->___U3CU3E1__state_0 = L_44;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_45 = V_10;
			__this->___U3CU3Eu__2_14 = L_45;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
			V_5 = __this;
			AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_46 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSubscribeCoreU3Ed__2_1_tE00796033B09ACBC588647F42A7F1CEFE1039AB9**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_46, (&V_10), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_027c;
		}

IL_01db_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_14;
			V_10 = L_47;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_48 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_14);
			il2cpp_codegen_initobj(L_48, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_49 = (-1);
			V_0 = L_49;
			__this->___U3CU3E1__state_0 = L_49;
		}

IL_01f8_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_0201_1:
		{
			RuntimeObject* L_50 = (RuntimeObject*)__this->___U3CU3Es__2_8;
			V_8 = L_50;
			RuntimeObject* L_51 = V_8;
			if (!L_51)
			{
				goto IL_0228_1;
			}
		}
		{
			RuntimeObject* L_52 = V_8;
			V_1 = ((Exception_t*)IsInstClass((RuntimeObject*)L_52, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_53 = V_1;
			if (L_53)
			{
				goto IL_021c_1;
			}
		}
		{
			RuntimeObject* L_54 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_54, method);
		}

IL_021c_1:
		{
			Exception_t* L_55 = V_1;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_56;
			L_56 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_55, NULL);
			NullCheck(L_56);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_56, NULL);
		}

IL_0228_1:
		{
			int32_t L_57 = (int32_t)__this->___U3CU3Es__3_9;
			V_12 = L_57;
			int32_t L_58 = V_12;
			if ((((int32_t)L_58) == ((int32_t)1)))
			{
				goto IL_0237_1;
			}
		}
		{
			goto IL_0239_1;
		}

IL_0237_1:
		{
			goto IL_0261;
		}

IL_0239_1:
		{
			__this->___U3CU3Es__2_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_8), (void*)NULL);
			goto IL_0261;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0242;
		}
		throw e;
	}

CATCH_0242:
	{
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_59 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_60 = V_1;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(L_59, L_60, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_027c;
	}

IL_0261:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_61 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(L_61, NULL);
	}

IL_027c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubscribeCoreU3Ed__2_1_SetStateMachine_m80F1FF916D3D55A2D3199FCCD98B2FC82607CFFF_gshared (U3CSubscribeCoreU3Ed__2_1_tE00796033B09ACBC588647F42A7F1CEFE1039AB9* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubscribeCoreU3Ed__3_1__ctor_mD3F15FE08490115FE1C3D7F16C2B4CED3FC366E1_gshared (U3CSubscribeCoreU3Ed__3_1_t1B707BBB1828A665EBF727F1C2B6998FE1FFC7D1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubscribeCoreU3Ed__3_1_MoveNext_m8CB890FF35F9CF37573F5A06DD4EC1D4EC2BCF06_gshared (U3CSubscribeCoreU3Ed__3_1_t1B707BBB1828A665EBF727F1C2B6998FE1FFC7D1* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_tAB638829E6F6FDD17CFBEBAE2F491535A5CA016C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tAB638829E6F6FDD17CFBEBAE2F491535A5CA016C);
	int32_t V_0 = 0;
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t* V_2 = NULL;
	bool V_3 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CSubscribeCoreU3Ed__3_1_t1B707BBB1828A665EBF727F1C2B6998FE1FFC7D1* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t V_13 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 4> __active_exceptions;
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
			goto IL_01e9_1;
		}

IL_0019_1:
		{
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_6;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__1_7 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_7), (void*)L_5);
			__this->___U3CU3Es__2_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_8), (void*)NULL);
			__this->___U3CU3Es__3_9 = 0;
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
				goto IL_0047_2;
			}

IL_0047_2:
			{
			}
			try
			{
				{
					int32_t L_7 = V_0;
					if (!L_7)
					{
						goto IL_004d_3;
					}
				}
				{
					goto IL_0052_3;
				}

IL_004d_3:
				{
					goto IL_00da_3;
				}

IL_0052_3:
				{
					goto IL_0092_3;
				}

IL_0055_3:
				{
				}
				try
				{
					Func_2_t1E86949F09236014700CDAC386B21A17602F974C* L_8 = (Func_2_t1E86949F09236014700CDAC386B21A17602F974C*)__this->___onNext_3;
					RuntimeObject* L_9 = (RuntimeObject*)__this->___U3CeU3E5__1_7;
					NullCheck(L_9);
					InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
					NullCheck(L_8);
					UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_11;
					L_11 = InvokerFuncInvoker1< UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
					V_1 = L_11;
					UniTaskVoid_Forget_mE4FC2CCCEFD822A5D63FFE97EE209FEE949CC255((&V_1), NULL);
					goto IL_0091_3;
				}
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_0079_3;
					}
					throw e;
				}

CATCH_0079_3:
				{
					V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					Exception_t* L_12 = V_2;
					__this->___U3CexU3E5__4_10 = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__4_10), (void*)L_12);
					Exception_t* L_13 = (Exception_t*)__this->___U3CexU3E5__4_10;
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var)));
					UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3(L_13, NULL);
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0091_3;
				}

IL_0091_3:
				{
				}

IL_0092_3:
				{
					RuntimeObject* L_14 = (RuntimeObject*)__this->___U3CeU3E5__1_7;
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
						goto IL_00f7_3;
					}
				}
				{
					int32_t L_18 = 0;
					V_0 = L_18;
					__this->___U3CU3E1__state_0 = L_18;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19 = V_4;
					__this->___U3CU3Eu__1_13 = L_19;
					Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
					V_6 = __this;
					AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_20 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
					((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSubscribeCoreU3Ed__3_1_t1B707BBB1828A665EBF727F1C2B6998FE1FFC7D1**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_20, (&V_4), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
					goto IL_028a;
				}

IL_00da_3:
				{
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_21 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_13;
					V_4 = L_21;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_22 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_13);
					il2cpp_codegen_initobj(L_22, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
					int32_t L_23 = (-1);
					V_0 = L_23;
					__this->___U3CU3E1__state_0 = L_23;
				}

IL_00f7_3:
				{
					bool L_24;
					L_24 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_4), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
					__this->___U3CU3Es__5_11 = L_24;
					bool L_25 = (bool)__this->___U3CU3Es__5_11;
					V_3 = L_25;
					bool L_26 = V_3;
					if (L_26)
					{
						goto IL_0055_3;
					}
				}
				{
					Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_27 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)__this->___onCompleted_5;
					NullCheck(L_27);
					Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_27, NULL);
					goto IL_0179_2;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0120_2;
				}
				throw e;
			}

CATCH_0120_2:
			{
				{
					V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					Exception_t* L_28 = V_2;
					__this->___U3CexU3E5__6_12 = L_28;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__6_12), (void*)L_28);
					Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_29 = (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*)__this->___onError_4;
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Subscribe_t65C94F6EDBB645D24A16DB00D5BA490B834282BC_il2cpp_TypeInfo_var)));
					Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_30 = ((Subscribe_t65C94F6EDBB645D24A16DB00D5BA490B834282BC_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Subscribe_t65C94F6EDBB645D24A16DB00D5BA490B834282BC_il2cpp_TypeInfo_var))))->___NopError_0;
					bool L_31;
					L_31 = Delegate_op_Equality_m8B96593B665536587FFD27DE233442C075971C32((Delegate_t*)L_29, (Delegate_t*)L_30, NULL);
					V_7 = L_31;
					bool L_32 = V_7;
					if (!L_32)
					{
						goto IL_014e_2;
					}
				}
				{
					Exception_t* L_33 = (Exception_t*)__this->___U3CexU3E5__6_12;
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var)));
					UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3(L_33, NULL);
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_017b_2;
				}

IL_014e_2:
				{
					Exception_t* L_34 = (Exception_t*)__this->___U3CexU3E5__6_12;
					V_8 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_34, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_35 = V_8;
					if (!L_35)
					{
						goto IL_0164_2;
					}
				}
				{
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_017b_2;
				}

IL_0164_2:
				{
					Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_36 = (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*)__this->___onError_4;
					Exception_t* L_37 = (Exception_t*)__this->___U3CexU3E5__6_12;
					NullCheck(L_36);
					Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(L_36, L_37, NULL);
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0179_2;
				}
			}

IL_0179_2:
			{
				goto IL_0190_1;
			}

IL_017b_2:
			{
				__this->___U3CU3Es__3_9 = 1;
				goto IL_0190_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0184_1;
			}
			throw e;
		}

CATCH_0184_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_38 = V_9;
			__this->___U3CU3Es__2_8 = L_38;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_8), (void*)L_38);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0190_1;
		}

IL_0190_1:
		{
			RuntimeObject* L_39 = (RuntimeObject*)__this->___U3CeU3E5__1_7;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_39) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_40 = V_10;
			if (!L_40)
			{
				goto IL_020f_1;
			}
		}
		{
			RuntimeObject* L_41 = (RuntimeObject*)__this->___U3CeU3E5__1_7;
			NullCheck((RuntimeObject*)L_41);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_42;
			L_42 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
			V_12 = L_42;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_43;
			L_43 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_43;
			bool L_44;
			L_44 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_44)
			{
				goto IL_0206_1;
			}
		}
		{
			int32_t L_45 = 1;
			V_0 = L_45;
			__this->___U3CU3E1__state_0 = L_45;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_46 = V_11;
			__this->___U3CU3Eu__2_14 = L_46;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
			V_6 = __this;
			AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_47 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSubscribeCoreU3Ed__3_1_t1B707BBB1828A665EBF727F1C2B6998FE1FFC7D1**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_47, (&V_11), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_028a;
		}

IL_01e9_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_48 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_14;
			V_11 = L_48;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_49 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_14);
			il2cpp_codegen_initobj(L_49, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_50 = (-1);
			V_0 = L_50;
			__this->___U3CU3E1__state_0 = L_50;
		}

IL_0206_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_020f_1:
		{
			RuntimeObject* L_51 = (RuntimeObject*)__this->___U3CU3Es__2_8;
			V_9 = L_51;
			RuntimeObject* L_52 = V_9;
			if (!L_52)
			{
				goto IL_0236_1;
			}
		}
		{
			RuntimeObject* L_53 = V_9;
			V_2 = ((Exception_t*)IsInstClass((RuntimeObject*)L_53, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_54 = V_2;
			if (L_54)
			{
				goto IL_022a_1;
			}
		}
		{
			RuntimeObject* L_55 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_55, method);
		}

IL_022a_1:
		{
			Exception_t* L_56 = V_2;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_57;
			L_57 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_56, NULL);
			NullCheck(L_57);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_57, NULL);
		}

IL_0236_1:
		{
			int32_t L_58 = (int32_t)__this->___U3CU3Es__3_9;
			V_13 = L_58;
			int32_t L_59 = V_13;
			if ((((int32_t)L_59) == ((int32_t)1)))
			{
				goto IL_0245_1;
			}
		}
		{
			goto IL_0247_1;
		}

IL_0245_1:
		{
			goto IL_026f;
		}

IL_0247_1:
		{
			__this->___U3CU3Es__2_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_8), (void*)NULL);
			goto IL_026f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0250;
		}
		throw e;
	}

CATCH_0250:
	{
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_60 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_61 = V_2;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(L_60, L_61, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_028a;
	}

IL_026f:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_62 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(L_62, NULL);
	}

IL_028a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubscribeCoreU3Ed__3_1_SetStateMachine_m908AB3BB9A226FB20456DC481F253AB9C201704E_gshared (U3CSubscribeCoreU3Ed__3_1_t1B707BBB1828A665EBF727F1C2B6998FE1FFC7D1* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubscribeCoreU3Ed__4_1__ctor_m2BCA9E9B22326E8B37472FEE670854BF906069D2_gshared (U3CSubscribeCoreU3Ed__4_1_tEED4C93552B0C2FF08F4FB783AF0E55B27B6B57A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubscribeCoreU3Ed__4_1_MoveNext_mE457277780B20031603AEFC27466CA3023244CEF_gshared (U3CSubscribeCoreU3Ed__4_1_tEED4C93552B0C2FF08F4FB783AF0E55B27B6B57A* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t209F038C6E0AE99654DB1B40FAC5BF503DCC8B9E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t209F038C6E0AE99654DB1B40FAC5BF503DCC8B9E);
	int32_t V_0 = 0;
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t* V_2 = NULL;
	bool V_3 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CSubscribeCoreU3Ed__4_1_tEED4C93552B0C2FF08F4FB783AF0E55B27B6B57A* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t V_13 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 4> __active_exceptions;
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
			goto IL_01ef_1;
		}

IL_0019_1:
		{
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_6;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__1_7 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_7), (void*)L_5);
			__this->___U3CU3Es__2_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_8), (void*)NULL);
			__this->___U3CU3Es__3_9 = 0;
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
				goto IL_0047_2;
			}

IL_0047_2:
			{
			}
			try
			{
				{
					int32_t L_7 = V_0;
					if (!L_7)
					{
						goto IL_004d_3;
					}
				}
				{
					goto IL_0052_3;
				}

IL_004d_3:
				{
					goto IL_00e0_3;
				}

IL_0052_3:
				{
					goto IL_0098_3;
				}

IL_0055_3:
				{
				}
				try
				{
					Func_3_t5659CC7C991DA571259A44032C4AE7AC307EB3E5* L_8 = (Func_3_t5659CC7C991DA571259A44032C4AE7AC307EB3E5*)__this->___onNext_3;
					RuntimeObject* L_9 = (RuntimeObject*)__this->___U3CeU3E5__1_7;
					NullCheck(L_9);
					InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
					CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_6;
					NullCheck(L_8);
					UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_12;
					L_12 = InvokerFuncInvoker2< UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10), L_11);
					V_1 = L_12;
					UniTaskVoid_Forget_mE4FC2CCCEFD822A5D63FFE97EE209FEE949CC255((&V_1), NULL);
					goto IL_0097_3;
				}
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_007f_3;
					}
					throw e;
				}

CATCH_007f_3:
				{
					V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					Exception_t* L_13 = V_2;
					__this->___U3CexU3E5__4_10 = L_13;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__4_10), (void*)L_13);
					Exception_t* L_14 = (Exception_t*)__this->___U3CexU3E5__4_10;
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var)));
					UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3(L_14, NULL);
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0097_3;
				}

IL_0097_3:
				{
				}

IL_0098_3:
				{
					RuntimeObject* L_15 = (RuntimeObject*)__this->___U3CeU3E5__1_7;
					NullCheck(L_15);
					UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_16;
					L_16 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_15);
					V_5 = L_16;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17;
					L_17 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_5), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
					V_4 = L_17;
					bool L_18;
					L_18 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_4), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
					if (L_18)
					{
						goto IL_00fd_3;
					}
				}
				{
					int32_t L_19 = 0;
					V_0 = L_19;
					__this->___U3CU3E1__state_0 = L_19;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_20 = V_4;
					__this->___U3CU3Eu__1_13 = L_20;
					Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
					V_6 = __this;
					AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_21 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
					((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSubscribeCoreU3Ed__4_1_tEED4C93552B0C2FF08F4FB783AF0E55B27B6B57A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_21, (&V_4), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
					goto IL_0290;
				}

IL_00e0_3:
				{
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_22 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_13;
					V_4 = L_22;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_23 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_13);
					il2cpp_codegen_initobj(L_23, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
					int32_t L_24 = (-1);
					V_0 = L_24;
					__this->___U3CU3E1__state_0 = L_24;
				}

IL_00fd_3:
				{
					bool L_25;
					L_25 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_4), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
					__this->___U3CU3Es__5_11 = L_25;
					bool L_26 = (bool)__this->___U3CU3Es__5_11;
					V_3 = L_26;
					bool L_27 = V_3;
					if (L_27)
					{
						goto IL_0055_3;
					}
				}
				{
					Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_28 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)__this->___onCompleted_5;
					NullCheck(L_28);
					Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_28, NULL);
					goto IL_017f_2;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0126_2;
				}
				throw e;
			}

CATCH_0126_2:
			{
				{
					V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					Exception_t* L_29 = V_2;
					__this->___U3CexU3E5__6_12 = L_29;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__6_12), (void*)L_29);
					Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_30 = (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*)__this->___onError_4;
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Subscribe_t65C94F6EDBB645D24A16DB00D5BA490B834282BC_il2cpp_TypeInfo_var)));
					Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_31 = ((Subscribe_t65C94F6EDBB645D24A16DB00D5BA490B834282BC_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Subscribe_t65C94F6EDBB645D24A16DB00D5BA490B834282BC_il2cpp_TypeInfo_var))))->___NopError_0;
					bool L_32;
					L_32 = Delegate_op_Equality_m8B96593B665536587FFD27DE233442C075971C32((Delegate_t*)L_30, (Delegate_t*)L_31, NULL);
					V_7 = L_32;
					bool L_33 = V_7;
					if (!L_33)
					{
						goto IL_0154_2;
					}
				}
				{
					Exception_t* L_34 = (Exception_t*)__this->___U3CexU3E5__6_12;
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var)));
					UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3(L_34, NULL);
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0181_2;
				}

IL_0154_2:
				{
					Exception_t* L_35 = (Exception_t*)__this->___U3CexU3E5__6_12;
					V_8 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_35, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_36 = V_8;
					if (!L_36)
					{
						goto IL_016a_2;
					}
				}
				{
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0181_2;
				}

IL_016a_2:
				{
					Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_37 = (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*)__this->___onError_4;
					Exception_t* L_38 = (Exception_t*)__this->___U3CexU3E5__6_12;
					NullCheck(L_37);
					Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(L_37, L_38, NULL);
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_017f_2;
				}
			}

IL_017f_2:
			{
				goto IL_0196_1;
			}

IL_0181_2:
			{
				__this->___U3CU3Es__3_9 = 1;
				goto IL_0196_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_018a_1;
			}
			throw e;
		}

CATCH_018a_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_39 = V_9;
			__this->___U3CU3Es__2_8 = L_39;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_8), (void*)L_39);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0196_1;
		}

IL_0196_1:
		{
			RuntimeObject* L_40 = (RuntimeObject*)__this->___U3CeU3E5__1_7;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_40) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_41 = V_10;
			if (!L_41)
			{
				goto IL_0215_1;
			}
		}
		{
			RuntimeObject* L_42 = (RuntimeObject*)__this->___U3CeU3E5__1_7;
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
				goto IL_020c_1;
			}
		}
		{
			int32_t L_46 = 1;
			V_0 = L_46;
			__this->___U3CU3E1__state_0 = L_46;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47 = V_11;
			__this->___U3CU3Eu__2_14 = L_47;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
			V_6 = __this;
			AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_48 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSubscribeCoreU3Ed__4_1_tEED4C93552B0C2FF08F4FB783AF0E55B27B6B57A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_48, (&V_11), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0290;
		}

IL_01ef_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_49 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_14;
			V_11 = L_49;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_50 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_14);
			il2cpp_codegen_initobj(L_50, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_51 = (-1);
			V_0 = L_51;
			__this->___U3CU3E1__state_0 = L_51;
		}

IL_020c_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_0215_1:
		{
			RuntimeObject* L_52 = (RuntimeObject*)__this->___U3CU3Es__2_8;
			V_9 = L_52;
			RuntimeObject* L_53 = V_9;
			if (!L_53)
			{
				goto IL_023c_1;
			}
		}
		{
			RuntimeObject* L_54 = V_9;
			V_2 = ((Exception_t*)IsInstClass((RuntimeObject*)L_54, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_55 = V_2;
			if (L_55)
			{
				goto IL_0230_1;
			}
		}
		{
			RuntimeObject* L_56 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_56, method);
		}

IL_0230_1:
		{
			Exception_t* L_57 = V_2;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_58;
			L_58 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_57, NULL);
			NullCheck(L_58);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_58, NULL);
		}

IL_023c_1:
		{
			int32_t L_59 = (int32_t)__this->___U3CU3Es__3_9;
			V_13 = L_59;
			int32_t L_60 = V_13;
			if ((((int32_t)L_60) == ((int32_t)1)))
			{
				goto IL_024b_1;
			}
		}
		{
			goto IL_024d_1;
		}

IL_024b_1:
		{
			goto IL_0275;
		}

IL_024d_1:
		{
			__this->___U3CU3Es__2_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_8), (void*)NULL);
			goto IL_0275;
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
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_61 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_62 = V_2;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(L_61, L_62, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0290;
	}

IL_0275:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_63 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(L_63, NULL);
	}

IL_0290:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubscribeCoreU3Ed__4_1_SetStateMachine_m1C610C1EDD1E7867A89320F56A6041FA52BC2C44_gshared (U3CSubscribeCoreU3Ed__4_1_tEED4C93552B0C2FF08F4FB783AF0E55B27B6B57A* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubscribeCoreU3Ed__5_1__ctor_m71D415AE17A28B1FAE7B9E179B29E6A0DBFFC777_gshared (U3CSubscribeCoreU3Ed__5_1_t78B9948DE9BF80171983705E80362EDDD2E14E71* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubscribeCoreU3Ed__5_1_MoveNext_m89441F45B9514DD16981F496D6A4128774811425_gshared (U3CSubscribeCoreU3Ed__5_1_t78B9948DE9BF80171983705E80362EDDD2E14E71* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t90E07AC94DE6A27583DA88F0F5778F88BA981729 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t90E07AC94DE6A27583DA88F0F5778F88BA981729);
	int32_t V_0 = 0;
	Exception_t* V_1 = NULL;
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CSubscribeCoreU3Ed__5_1_t78B9948DE9BF80171983705E80362EDDD2E14E71* V_5 = NULL;
	bool V_6 = false;
	RuntimeObject* V_7 = NULL;
	bool V_8 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 4> __active_exceptions;
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
			goto IL_01b6_1;
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
				goto IL_0047_2;
			}

IL_0047_2:
			{
			}
			try
			{
				{
					int32_t L_7 = V_0;
					if (!L_7)
					{
						goto IL_004d_3;
					}
				}
				{
					goto IL_004f_3;
				}

IL_004d_3:
				{
					goto IL_00cd_3;
				}

IL_004f_3:
				{
					goto IL_0087_3;
				}

IL_0052_3:
				{
				}
				try
				{
					RuntimeObject* L_8 = (RuntimeObject*)__this->___observer_3;
					RuntimeObject* L_9 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
					NullCheck(L_9);
					InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
					NullCheck(L_8);
					InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
					goto IL_0086_3;
				}
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_006e_3;
					}
					throw e;
				}

CATCH_006e_3:
				{
					V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					Exception_t* L_11 = V_1;
					__this->___U3CexU3E5__4_8 = L_11;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__4_8), (void*)L_11);
					Exception_t* L_12 = (Exception_t*)__this->___U3CexU3E5__4_8;
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var)));
					UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3(L_12, NULL);
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0086_3;
				}

IL_0086_3:
				{
				}

IL_0087_3:
				{
					RuntimeObject* L_13 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
					NullCheck(L_13);
					UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_14;
					L_14 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_13);
					V_4 = L_14;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_15;
					L_15 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
					V_3 = L_15;
					bool L_16;
					L_16 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
					if (L_16)
					{
						goto IL_00e9_3;
					}
				}
				{
					int32_t L_17 = 0;
					V_0 = L_17;
					__this->___U3CU3E1__state_0 = L_17;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_18 = V_3;
					__this->___U3CU3Eu__1_11 = L_18;
					Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_11))->___task_0))->___source_0), (void*)NULL);
					V_5 = __this;
					AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_19 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
					((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSubscribeCoreU3Ed__5_1_t78B9948DE9BF80171983705E80362EDDD2E14E71**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_19, (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
					goto IL_0257;
				}

IL_00cd_3:
				{
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_20 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_11;
					V_3 = L_20;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_21 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_11);
					il2cpp_codegen_initobj(L_21, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
					int32_t L_22 = (-1);
					V_0 = L_22;
					__this->___U3CU3E1__state_0 = L_22;
				}

IL_00e9_3:
				{
					bool L_23;
					L_23 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
					__this->___U3CU3Es__5_9 = L_23;
					bool L_24 = (bool)__this->___U3CU3Es__5_9;
					V_2 = L_24;
					bool L_25 = V_2;
					if (L_25)
					{
						goto IL_0052_3;
					}
				}
				{
					RuntimeObject* L_26 = (RuntimeObject*)__this->___observer_3;
					NullCheck(L_26);
					InterfaceActionInvoker0::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_26);
					goto IL_0146_2;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0112_2;
				}
				throw e;
			}

CATCH_0112_2:
			{
				{
					V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					Exception_t* L_27 = V_1;
					__this->___U3CexU3E5__6_10 = L_27;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__6_10), (void*)L_27);
					Exception_t* L_28 = (Exception_t*)__this->___U3CexU3E5__6_10;
					V_6 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_28, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_29 = V_6;
					if (!L_29)
					{
						goto IL_0131_2;
					}
				}
				{
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0148_2;
				}

IL_0131_2:
				{
					RuntimeObject* L_30 = (RuntimeObject*)__this->___observer_3;
					Exception_t* L_31 = (Exception_t*)__this->___U3CexU3E5__6_10;
					NullCheck(L_30);
					InterfaceActionInvoker1< Exception_t* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_30, L_31);
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0146_2;
				}
			}

IL_0146_2:
			{
				goto IL_015d_1;
			}

IL_0148_2:
			{
				__this->___U3CU3Es__3_7 = 1;
				goto IL_015d_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0151_1;
			}
			throw e;
		}

CATCH_0151_1:
		{
			V_7 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_32 = V_7;
			__this->___U3CU3Es__2_6 = L_32;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_6), (void*)L_32);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_015d_1;
		}

IL_015d_1:
		{
			RuntimeObject* L_33 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
			V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_33) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_34 = V_8;
			if (!L_34)
			{
				goto IL_01dc_1;
			}
		}
		{
			RuntimeObject* L_35 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
			NullCheck((RuntimeObject*)L_35);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_36;
			L_36 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_35);
			V_10 = L_36;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_37;
			L_37 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_10), NULL);
			V_9 = L_37;
			bool L_38;
			L_38 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_9), NULL);
			if (L_38)
			{
				goto IL_01d3_1;
			}
		}
		{
			int32_t L_39 = 1;
			V_0 = L_39;
			__this->___U3CU3E1__state_0 = L_39;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_40 = V_9;
			__this->___U3CU3Eu__2_12 = L_40;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_12))->___task_0))->___source_0), (void*)NULL);
			V_5 = __this;
			AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_41 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSubscribeCoreU3Ed__5_1_t78B9948DE9BF80171983705E80362EDDD2E14E71**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_41, (&V_9), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
			goto IL_0257;
		}

IL_01b6_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_42 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_12;
			V_9 = L_42;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_43 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_12);
			il2cpp_codegen_initobj(L_43, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_44 = (-1);
			V_0 = L_44;
			__this->___U3CU3E1__state_0 = L_44;
		}

IL_01d3_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_9), NULL);
		}

IL_01dc_1:
		{
			RuntimeObject* L_45 = (RuntimeObject*)__this->___U3CU3Es__2_6;
			V_7 = L_45;
			RuntimeObject* L_46 = V_7;
			if (!L_46)
			{
				goto IL_0203_1;
			}
		}
		{
			RuntimeObject* L_47 = V_7;
			V_1 = ((Exception_t*)IsInstClass((RuntimeObject*)L_47, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_48 = V_1;
			if (L_48)
			{
				goto IL_01f7_1;
			}
		}
		{
			RuntimeObject* L_49 = V_7;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_49, method);
		}

IL_01f7_1:
		{
			Exception_t* L_50 = V_1;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_51;
			L_51 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_50, NULL);
			NullCheck(L_51);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_51, NULL);
		}

IL_0203_1:
		{
			int32_t L_52 = (int32_t)__this->___U3CU3Es__3_7;
			V_11 = L_52;
			int32_t L_53 = V_11;
			if ((((int32_t)L_53) == ((int32_t)1)))
			{
				goto IL_0212_1;
			}
		}
		{
			goto IL_0214_1;
		}

IL_0212_1:
		{
			goto IL_023c;
		}

IL_0214_1:
		{
			__this->___U3CU3Es__2_6 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_6), (void*)NULL);
			goto IL_023c;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_021d;
		}
		throw e;
	}

CATCH_021d:
	{
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_5), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_54 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_55 = V_1;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(L_54, L_55, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0257;
	}

IL_023c:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_5), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_56 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(L_56, NULL);
	}

IL_0257:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubscribeCoreU3Ed__5_1_SetStateMachine_mB842E2A86F9296DACD87DFBF374C7540EE95308F_gshared (U3CSubscribeCoreU3Ed__5_1_t78B9948DE9BF80171983705E80362EDDD2E14E71* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__13_1__ctor_mC9F56865B47722D7091BA3E8F901AC7AAF206AA5_gshared (U3CSumAsyncU3Ed__13_1_t209934E841BF9E459D62068F36422D9C84FA129B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__13_1_MoveNext_mB8D6D3385C813F2F28101DE8EF0F8B2732298A32_gshared (U3CSumAsyncU3Ed__13_1_t209934E841BF9E459D62068F36422D9C84FA129B* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t83EA031A5C5DB9294670456778D1F3B096F50823 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t83EA031A5C5DB9294670456778D1F3B096F50823);
	int32_t V_0 = 0;
	double V_1 = 0.0;
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CSumAsyncU3Ed__13_1_t209934E841BF9E459D62068F36422D9C84FA129B* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t* V_10 = NULL;
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
			goto IL_0162_1;
		}

IL_0019_1:
		{
			__this->___U3CsumU3E5__1_5 = (0.0);
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__2_6 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)L_5);
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			__this->___U3CU3Es__4_8 = 0;
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
				goto IL_0056_2;
			}

IL_0054_2:
			{
				goto IL_00c4_2;
			}

IL_0056_2:
			{
				goto IL_007e_2;
			}

IL_0059_2:
			{
				double L_7 = (double)__this->___U3CsumU3E5__1_5;
				Func_2_tF36C7D1152BF6807C03112D4A053E5038A13A6EB* L_8 = (Func_2_tF36C7D1152BF6807C03112D4A053E5038A13A6EB*)__this->___selector_3;
				RuntimeObject* L_9 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				double L_11;
				L_11 = InvokerFuncInvoker1< double, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				__this->___U3CsumU3E5__1_5 = ((double)il2cpp_codegen_add(L_7, L_11));
			}

IL_007e_2:
			{
				RuntimeObject* L_12 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_12);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_13;
				L_13 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_12);
				V_4 = L_13;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_14;
				L_14 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_3 = L_14;
				bool L_15;
				L_15 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00e0_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state_0 = L_16;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17 = V_3;
				__this->___U3CU3Eu__1_10 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_10))->___task_0))->___source_0), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_18 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSumAsyncU3Ed__13_1_t209934E841BF9E459D62068F36422D9C84FA129B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_18, (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0206;
			}

IL_00c4_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_10;
				V_3 = L_19;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_20 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_10);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state_0 = L_21;
			}

IL_00e0_2:
			{
				bool L_22;
				L_22 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5_9 = L_22;
				bool L_23 = (bool)__this->___U3CU3Es__5_9;
				V_2 = L_23;
				bool L_24 = V_2;
				if (L_24)
				{
					goto IL_0059_2;
				}
			}
			{
				goto IL_0109_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00fd_1;
			}
			throw e;
		}

CATCH_00fd_1:
		{
			V_6 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_25 = V_6;
			__this->___U3CU3Es__3_7 = L_25;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_25);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0109_1;
		}

IL_0109_1:
		{
			RuntimeObject* L_26 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_26) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_27 = V_7;
			if (!L_27)
			{
				goto IL_0188_1;
			}
		}
		{
			RuntimeObject* L_28 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_28);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_29;
			L_29 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_28);
			V_9 = L_29;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_30;
			L_30 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_9), NULL);
			V_8 = L_30;
			bool L_31;
			L_31 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_31)
			{
				goto IL_017f_1;
			}
		}
		{
			int32_t L_32 = 1;
			V_0 = L_32;
			__this->___U3CU3E1__state_0 = L_32;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_33 = V_8;
			__this->___U3CU3Eu__2_11 = L_33;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_11))->___task_0))->___source_0), (void*)NULL);
			V_5 = __this;
			AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_34 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSumAsyncU3Ed__13_1_t209934E841BF9E459D62068F36422D9C84FA129B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_34, (&V_8), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0206;
		}

IL_0162_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_35 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_11;
			V_8 = L_35;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_36 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_11);
			il2cpp_codegen_initobj(L_36, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_37 = (-1);
			V_0 = L_37;
			__this->___U3CU3E1__state_0 = L_37;
		}

IL_017f_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_0188_1:
		{
			RuntimeObject* L_38 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_6 = L_38;
			RuntimeObject* L_39 = V_6;
			if (!L_39)
			{
				goto IL_01b2_1;
			}
		}
		{
			RuntimeObject* L_40 = V_6;
			V_10 = ((Exception_t*)IsInstClass((RuntimeObject*)L_40, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_41 = V_10;
			if (L_41)
			{
				goto IL_01a5_1;
			}
		}
		{
			RuntimeObject* L_42 = V_6;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, method);
		}

IL_01a5_1:
		{
			Exception_t* L_43 = V_10;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_44;
			L_44 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_43, NULL);
			NullCheck(L_44);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_44, NULL);
		}

IL_01b2_1:
		{
			int32_t L_45 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			double L_46 = (double)__this->___U3CsumU3E5__1_5;
			V_1 = L_46;
			goto IL_01ea;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01c9;
		}
		throw e;
	}

CATCH_01c9:
	{
		V_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_47 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_48 = V_10;
		AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_inline(L_47, L_48, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0206;
	}

IL_01ea:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_49 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
		double L_50 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_inline(L_49, L_50, AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
	}

IL_0206:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__13_1_SetStateMachine_mBBBD10E041B6B375FD9C1D3EEA6E5F3ECA4CF093_gshared (U3CSumAsyncU3Ed__13_1_t209934E841BF9E459D62068F36422D9C84FA129B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__17_1__ctor_m4C6E45BDA07567BFE7AAD755317F71CD3E971CEE_gshared (U3CSumAsyncU3Ed__17_1_t9A799883ADE2290E1064DFC70D00986CB337A36E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__17_1_MoveNext_mE61EFF26FDF051A7286C89E7E2FB522BADE46437_gshared (U3CSumAsyncU3Ed__17_1_t9A799883ADE2290E1064DFC70D00986CB337A36E* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_tAD76668B44724ABBB5EB48812BE6D6B471D92692 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_tAD76668B44724ABBB5EB48812BE6D6B471D92692);
	int32_t V_0 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CSumAsyncU3Ed__17_1_t9A799883ADE2290E1064DFC70D00986CB337A36E* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t* V_10 = NULL;
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
			goto IL_004b_1;
		}

IL_0014_1:
		{
			goto IL_0163_1;
		}

IL_0019_1:
		{
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* L_3 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)(&__this->___U3CsumU3E5__1_5);
			il2cpp_codegen_initobj(L_3, sizeof(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F));
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__2_6 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)L_6);
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			__this->___U3CU3Es__4_8 = 0;
		}

IL_004b_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0051_2;
				}
			}
			{
				goto IL_0053_2;
			}

IL_0051_2:
			{
				goto IL_00c5_2;
			}

IL_0053_2:
			{
				goto IL_007f_2;
			}

IL_0056_2:
			{
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_8 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)__this->___U3CsumU3E5__1_5;
				Func_2_t5ABD904FFCFC84BA711C9261A36E9482990A6CA7* L_9 = (Func_2_t5ABD904FFCFC84BA711C9261A36E9482990A6CA7*)__this->___selector_3;
				RuntimeObject* L_10 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_12;
				L_12 = InvokerFuncInvoker1< Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_13;
				L_13 = Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7(L_8, L_12, NULL);
				__this->___U3CsumU3E5__1_5 = L_13;
			}

IL_007f_2:
			{
				RuntimeObject* L_14 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_14);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_15;
				L_15 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_14);
				V_4 = L_15;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_16;
				L_16 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_3 = L_16;
				bool L_17;
				L_17 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_00e1_2;
				}
			}
			{
				int32_t L_18 = 0;
				V_0 = L_18;
				__this->___U3CU3E1__state_0 = L_18;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19 = V_3;
				__this->___U3CU3Eu__1_10 = L_19;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_10))->___task_0))->___source_0), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_20 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSumAsyncU3Ed__17_1_t9A799883ADE2290E1064DFC70D00986CB337A36E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_20, (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0207;
			}

IL_00c5_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_21 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_10;
				V_3 = L_21;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_22 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_10);
				il2cpp_codegen_initobj(L_22, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_23 = (-1);
				V_0 = L_23;
				__this->___U3CU3E1__state_0 = L_23;
			}

IL_00e1_2:
			{
				bool L_24;
				L_24 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5_9 = L_24;
				bool L_25 = (bool)__this->___U3CU3Es__5_9;
				V_2 = L_25;
				bool L_26 = V_2;
				if (L_26)
				{
					goto IL_0056_2;
				}
			}
			{
				goto IL_010a_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00fe_1;
			}
			throw e;
		}

CATCH_00fe_1:
		{
			V_6 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_27 = V_6;
			__this->___U3CU3Es__3_7 = L_27;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_27);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_010a_1;
		}

IL_010a_1:
		{
			RuntimeObject* L_28 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_28) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_29 = V_7;
			if (!L_29)
			{
				goto IL_0189_1;
			}
		}
		{
			RuntimeObject* L_30 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_30);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_31;
			L_31 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_30);
			V_9 = L_31;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_32;
			L_32 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_9), NULL);
			V_8 = L_32;
			bool L_33;
			L_33 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_33)
			{
				goto IL_0180_1;
			}
		}
		{
			int32_t L_34 = 1;
			V_0 = L_34;
			__this->___U3CU3E1__state_0 = L_34;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_35 = V_8;
			__this->___U3CU3Eu__2_11 = L_35;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_11))->___task_0))->___source_0), (void*)NULL);
			V_5 = __this;
			AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_36 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSumAsyncU3Ed__17_1_t9A799883ADE2290E1064DFC70D00986CB337A36E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_36, (&V_8), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0207;
		}

IL_0163_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_37 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_11;
			V_8 = L_37;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_38 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_11);
			il2cpp_codegen_initobj(L_38, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_39 = (-1);
			V_0 = L_39;
			__this->___U3CU3E1__state_0 = L_39;
		}

IL_0180_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_0189_1:
		{
			RuntimeObject* L_40 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_6 = L_40;
			RuntimeObject* L_41 = V_6;
			if (!L_41)
			{
				goto IL_01b3_1;
			}
		}
		{
			RuntimeObject* L_42 = V_6;
			V_10 = ((Exception_t*)IsInstClass((RuntimeObject*)L_42, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_43 = V_10;
			if (L_43)
			{
				goto IL_01a6_1;
			}
		}
		{
			RuntimeObject* L_44 = V_6;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
		}

IL_01a6_1:
		{
			Exception_t* L_45 = V_10;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_46;
			L_46 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_45, NULL);
			NullCheck(L_46);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_46, NULL);
		}

IL_01b3_1:
		{
			int32_t L_47 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_48 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)__this->___U3CsumU3E5__1_5;
			V_1 = L_48;
			goto IL_01eb;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01ca;
		}
		throw e;
	}

CATCH_01ca:
	{
		V_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_49 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_50 = V_10;
		AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_inline(L_49, L_50, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0207;
	}

IL_01eb:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_51 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_52 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_inline(L_51, L_52, AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_RuntimeMethod_var);
	}

IL_0207:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__17_1_SetStateMachine_m5DB74AFDEBB859594F520386B9CFA0900BA12B64_gshared (U3CSumAsyncU3Ed__17_1_t9A799883ADE2290E1064DFC70D00986CB337A36E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__1_1__ctor_m20CADDA63C8C72FC8B90466111B52FD1F9D82AD4_gshared (U3CSumAsyncU3Ed__1_1_t9BF5D0D8CADBEE6A19BA166D5976491E833861FE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__1_1_MoveNext_m53D943CABC7DBEF2E21DA3E4E6E56F7B0397AC22_gshared (U3CSumAsyncU3Ed__1_1_t9BF5D0D8CADBEE6A19BA166D5976491E833861FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t80A160744E14B17B286AF164EFB64DA20EDCFEC5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t80A160744E14B17B286AF164EFB64DA20EDCFEC5);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CSumAsyncU3Ed__1_1_t9BF5D0D8CADBEE6A19BA166D5976491E833861FE* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t* V_10 = NULL;
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
			goto IL_0046_1;
		}

IL_0014_1:
		{
			goto IL_015a_1;
		}

IL_0019_1:
		{
			__this->___U3CsumU3E5__1_5 = 0;
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__2_6 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)L_5);
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			__this->___U3CU3Es__4_8 = 0;
		}

IL_0046_1:
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
				goto IL_004e_2;
			}

IL_004c_2:
			{
				goto IL_00bc_2;
			}

IL_004e_2:
			{
				goto IL_0076_2;
			}

IL_0051_2:
			{
				int32_t L_7 = (int32_t)__this->___U3CsumU3E5__1_5;
				Func_2_t8DB808B3690BFDBD7B936631B430453B90DBBDE7* L_8 = (Func_2_t8DB808B3690BFDBD7B936631B430453B90DBBDE7*)__this->___selector_3;
				RuntimeObject* L_9 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				int32_t L_11;
				L_11 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				__this->___U3CsumU3E5__1_5 = ((int32_t)il2cpp_codegen_add(L_7, L_11));
			}

IL_0076_2:
			{
				RuntimeObject* L_12 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_12);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_13;
				L_13 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_12);
				V_4 = L_13;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_14;
				L_14 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_3 = L_14;
				bool L_15;
				L_15 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00d8_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state_0 = L_16;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17 = V_3;
				__this->___U3CU3Eu__1_10 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_10))->___task_0))->___source_0), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_18 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSumAsyncU3Ed__1_1_t9BF5D0D8CADBEE6A19BA166D5976491E833861FE**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_18, (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_01fe;
			}

IL_00bc_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_10;
				V_3 = L_19;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_20 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_10);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state_0 = L_21;
			}

IL_00d8_2:
			{
				bool L_22;
				L_22 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5_9 = L_22;
				bool L_23 = (bool)__this->___U3CU3Es__5_9;
				V_2 = L_23;
				bool L_24 = V_2;
				if (L_24)
				{
					goto IL_0051_2;
				}
			}
			{
				goto IL_0101_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00f5_1;
			}
			throw e;
		}

CATCH_00f5_1:
		{
			V_6 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_25 = V_6;
			__this->___U3CU3Es__3_7 = L_25;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_25);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0101_1;
		}

IL_0101_1:
		{
			RuntimeObject* L_26 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_26) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_27 = V_7;
			if (!L_27)
			{
				goto IL_0180_1;
			}
		}
		{
			RuntimeObject* L_28 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_28);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_29;
			L_29 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_28);
			V_9 = L_29;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_30;
			L_30 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_9), NULL);
			V_8 = L_30;
			bool L_31;
			L_31 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_31)
			{
				goto IL_0177_1;
			}
		}
		{
			int32_t L_32 = 1;
			V_0 = L_32;
			__this->___U3CU3E1__state_0 = L_32;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_33 = V_8;
			__this->___U3CU3Eu__2_11 = L_33;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_11))->___task_0))->___source_0), (void*)NULL);
			V_5 = __this;
			AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_34 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSumAsyncU3Ed__1_1_t9BF5D0D8CADBEE6A19BA166D5976491E833861FE**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_34, (&V_8), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_01fe;
		}

IL_015a_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_35 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_11;
			V_8 = L_35;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_36 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_11);
			il2cpp_codegen_initobj(L_36, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_37 = (-1);
			V_0 = L_37;
			__this->___U3CU3E1__state_0 = L_37;
		}

IL_0177_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_0180_1:
		{
			RuntimeObject* L_38 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_6 = L_38;
			RuntimeObject* L_39 = V_6;
			if (!L_39)
			{
				goto IL_01aa_1;
			}
		}
		{
			RuntimeObject* L_40 = V_6;
			V_10 = ((Exception_t*)IsInstClass((RuntimeObject*)L_40, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_41 = V_10;
			if (L_41)
			{
				goto IL_019d_1;
			}
		}
		{
			RuntimeObject* L_42 = V_6;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, method);
		}

IL_019d_1:
		{
			Exception_t* L_43 = V_10;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_44;
			L_44 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_43, NULL);
			NullCheck(L_44);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_44, NULL);
		}

IL_01aa_1:
		{
			int32_t L_45 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			int32_t L_46 = (int32_t)__this->___U3CsumU3E5__1_5;
			V_1 = L_46;
			goto IL_01e2;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01c1;
		}
		throw e;
	}

CATCH_01c1:
	{
		V_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_47 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_48 = V_10;
		AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_inline(L_47, L_48, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01fe;
	}

IL_01e2:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_49 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder_1);
		int32_t L_50 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_inline(L_49, L_50, AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_RuntimeMethod_var);
	}

IL_01fe:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__1_1_SetStateMachine_mC1B0DFA052FAC77FE265D16AF88BD38FA04F9B38_gshared (U3CSumAsyncU3Ed__1_1_t9BF5D0D8CADBEE6A19BA166D5976491E833861FE* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__21_1__ctor_mD34F257D341C9BA4630C413EADFF6D3FAB94AB4B_gshared (U3CSumAsyncU3Ed__21_1_t9D1C7252084BF8D97F912E631E7602E24570A7B1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__21_1_MoveNext_mA13F2227BF2DB70F126F9AB4851BA81FC0D5D15E_gshared (U3CSumAsyncU3Ed__21_1_t9D1C7252084BF8D97F912E631E7602E24570A7B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t601DA9F2AF2F9A1081AB10DFD32182B99D61BE74 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t601DA9F2AF2F9A1081AB10DFD32182B99D61BE74);
	int32_t V_0 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	U3CSumAsyncU3Ed__21_1_t9D1C7252084BF8D97F912E631E7602E24570A7B1* V_8 = NULL;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	U3CSumAsyncU3Ed__21_1_t9D1C7252084BF8D97F912E631E7602E24570A7B1* G_B15_0 = NULL;
	U3CSumAsyncU3Ed__21_1_t9D1C7252084BF8D97F912E631E7602E24570A7B1* G_B14_0 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B16_0;
	memset((&G_B16_0), 0, sizeof(G_B16_0));
	U3CSumAsyncU3Ed__21_1_t9D1C7252084BF8D97F912E631E7602E24570A7B1* G_B16_1 = NULL;
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
			goto IL_004b_1;
		}

IL_0014_1:
		{
			goto IL_0194_1;
		}

IL_0019_1:
		{
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_3 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CsumU3E5__1_5);
			il2cpp_codegen_initobj(L_3, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__2_6 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)L_6);
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			__this->___U3CU3Es__4_8 = 0;
		}

IL_004b_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0051_2;
				}
			}
			{
				goto IL_0056_2;
			}

IL_0051_2:
			{
				goto IL_00f3_2;
			}

IL_0056_2:
			{
				goto IL_00ab_2;
			}

IL_0059_2:
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_8 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28)__this->___U3CsumU3E5__1_5;
				V_2 = L_8;
				Func_2_t0DE0378A8A90F3B8204450750A771096D0F75A98* L_9 = (Func_2_t0DE0378A8A90F3B8204450750A771096D0F75A98*)__this->___selector_3;
				RuntimeObject* L_10 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_12;
				L_12 = InvokerFuncInvoker1< Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
				V_4 = L_12;
				int32_t L_13;
				L_13 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_4), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
				V_3 = L_13;
				bool L_14;
				L_14 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_2), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				if (L_14)
				{
					G_B15_0 = __this;
					goto IL_0097_2;
				}
				G_B14_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_15 = V_4;
				G_B16_0 = L_15;
				G_B16_1 = G_B14_0;
				goto IL_00a5_2;
			}

IL_0097_2:
			{
				int32_t L_16;
				L_16 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_2), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
				int32_t L_17 = V_3;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_18;
				memset((&L_18), 0, sizeof(L_18));
				Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_18), ((int32_t)il2cpp_codegen_add(L_16, L_17)), Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
				G_B16_0 = L_18;
				G_B16_1 = G_B15_0;
			}

IL_00a5_2:
			{
				NullCheck(G_B16_1);
				G_B16_1->___U3CsumU3E5__1_5 = G_B16_0;
			}

IL_00ab_2:
			{
				RuntimeObject* L_19 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_19);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_20;
				L_20 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_19);
				V_7 = L_20;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_21;
				L_21 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_6 = L_21;
				bool L_22;
				L_22 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_6), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_0110_2;
				}
			}
			{
				int32_t L_23 = 0;
				V_0 = L_23;
				__this->___U3CU3E1__state_0 = L_23;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_24 = V_6;
				__this->___U3CU3Eu__1_10 = L_24;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_10))->___task_0))->___source_0), (void*)NULL);
				V_8 = __this;
				AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_25 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSumAsyncU3Ed__21_1_t9D1C7252084BF8D97F912E631E7602E24570A7B1**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_25, (&V_6), (&V_8), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0238;
			}

IL_00f3_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_26 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_10;
				V_6 = L_26;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_27 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_10);
				il2cpp_codegen_initobj(L_27, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_28 = (-1);
				V_0 = L_28;
				__this->___U3CU3E1__state_0 = L_28;
			}

IL_0110_2:
			{
				bool L_29;
				L_29 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5_9 = L_29;
				bool L_30 = (bool)__this->___U3CU3Es__5_9;
				V_5 = L_30;
				bool L_31 = V_5;
				if (L_31)
				{
					goto IL_0059_2;
				}
			}
			{
				goto IL_013b_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_012f_1;
			}
			throw e;
		}

CATCH_012f_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_32 = V_9;
			__this->___U3CU3Es__3_7 = L_32;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_32);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_013b_1;
		}

IL_013b_1:
		{
			RuntimeObject* L_33 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_33) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_34 = V_10;
			if (!L_34)
			{
				goto IL_01ba_1;
			}
		}
		{
			RuntimeObject* L_35 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_35);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_36;
			L_36 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_35);
			V_12 = L_36;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_37;
			L_37 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_37;
			bool L_38;
			L_38 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_38)
			{
				goto IL_01b1_1;
			}
		}
		{
			int32_t L_39 = 1;
			V_0 = L_39;
			__this->___U3CU3E1__state_0 = L_39;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_40 = V_11;
			__this->___U3CU3Eu__2_11 = L_40;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_11))->___task_0))->___source_0), (void*)NULL);
			V_8 = __this;
			AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_41 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSumAsyncU3Ed__21_1_t9D1C7252084BF8D97F912E631E7602E24570A7B1**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_41, (&V_11), (&V_8), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0238;
		}

IL_0194_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_42 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_11;
			V_11 = L_42;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_43 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_11);
			il2cpp_codegen_initobj(L_43, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_44 = (-1);
			V_0 = L_44;
			__this->___U3CU3E1__state_0 = L_44;
		}

IL_01b1_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_01ba_1:
		{
			RuntimeObject* L_45 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_9 = L_45;
			RuntimeObject* L_46 = V_9;
			if (!L_46)
			{
				goto IL_01e4_1;
			}
		}
		{
			RuntimeObject* L_47 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_47, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_48 = V_13;
			if (L_48)
			{
				goto IL_01d7_1;
			}
		}
		{
			RuntimeObject* L_49 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_49, method);
		}

IL_01d7_1:
		{
			Exception_t* L_50 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_51;
			L_51 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_50, NULL);
			NullCheck(L_51);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_51, NULL);
		}

IL_01e4_1:
		{
			int32_t L_52 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_53 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28)__this->___U3CsumU3E5__1_5;
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
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_54 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_55 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_mE8C5BA18D2449D6BD546630CE70DE315F5F91FCE_inline(L_54, L_55, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mE8C5BA18D2449D6BD546630CE70DE315F5F91FCE_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0238;
	}

IL_021c:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_56 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_57 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_inline(L_56, L_57, AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_RuntimeMethod_var);
	}

IL_0238:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__21_1_SetStateMachine_mE688FF136B2915E6024A57ABB28C7D8DEFE1C0B7_gshared (U3CSumAsyncU3Ed__21_1_t9D1C7252084BF8D97F912E631E7602E24570A7B1* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__25_1__ctor_mCCC70DC4922A20DA89BE55D223B4A5971526E990_gshared (U3CSumAsyncU3Ed__25_1_tE1C9BDAC2A20628F30CDF2FBA15D3D42C30FD592* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__25_1_MoveNext_m2F6F2433C8A63784048283849ED3987A9E53EFBC_gshared (U3CSumAsyncU3Ed__25_1_tE1C9BDAC2A20628F30CDF2FBA15D3D42C30FD592* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tF260F9E91487F27A4E52680890085754CE877BD1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_tF260F9E91487F27A4E52680890085754CE877BD1);
	int32_t V_0 = 0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int64_t V_3 = 0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	U3CSumAsyncU3Ed__25_1_tE1C9BDAC2A20628F30CDF2FBA15D3D42C30FD592* V_8 = NULL;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	U3CSumAsyncU3Ed__25_1_tE1C9BDAC2A20628F30CDF2FBA15D3D42C30FD592* G_B15_0 = NULL;
	U3CSumAsyncU3Ed__25_1_tE1C9BDAC2A20628F30CDF2FBA15D3D42C30FD592* G_B14_0 = NULL;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 G_B16_0;
	memset((&G_B16_0), 0, sizeof(G_B16_0));
	U3CSumAsyncU3Ed__25_1_tE1C9BDAC2A20628F30CDF2FBA15D3D42C30FD592* G_B16_1 = NULL;
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
			goto IL_004b_1;
		}

IL_0014_1:
		{
			goto IL_0194_1;
		}

IL_0019_1:
		{
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_3 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CsumU3E5__1_5);
			il2cpp_codegen_initobj(L_3, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__2_6 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)L_6);
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			__this->___U3CU3Es__4_8 = 0;
		}

IL_004b_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0051_2;
				}
			}
			{
				goto IL_0056_2;
			}

IL_0051_2:
			{
				goto IL_00f3_2;
			}

IL_0056_2:
			{
				goto IL_00ab_2;
			}

IL_0059_2:
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_8 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17)__this->___U3CsumU3E5__1_5;
				V_2 = L_8;
				Func_2_tFC0477C87E7518136DEE345DCF44B6ACA22E24F0* L_9 = (Func_2_tFC0477C87E7518136DEE345DCF44B6ACA22E24F0*)__this->___selector_3;
				RuntimeObject* L_10 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_12;
				L_12 = InvokerFuncInvoker1< Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
				V_4 = L_12;
				int64_t L_13;
				L_13 = Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_inline((&V_4), Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
				V_3 = L_13;
				bool L_14;
				L_14 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&V_2), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
				if (L_14)
				{
					G_B15_0 = __this;
					goto IL_0097_2;
				}
				G_B14_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_15 = V_4;
				G_B16_0 = L_15;
				G_B16_1 = G_B14_0;
				goto IL_00a5_2;
			}

IL_0097_2:
			{
				int64_t L_16;
				L_16 = Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_inline((&V_2), Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
				int64_t L_17 = V_3;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_18;
				memset((&L_18), 0, sizeof(L_18));
				Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_18), ((int64_t)il2cpp_codegen_add(L_16, L_17)), Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
				G_B16_0 = L_18;
				G_B16_1 = G_B15_0;
			}

IL_00a5_2:
			{
				NullCheck(G_B16_1);
				G_B16_1->___U3CsumU3E5__1_5 = G_B16_0;
			}

IL_00ab_2:
			{
				RuntimeObject* L_19 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_19);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_20;
				L_20 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_19);
				V_7 = L_20;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_21;
				L_21 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_6 = L_21;
				bool L_22;
				L_22 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_6), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_0110_2;
				}
			}
			{
				int32_t L_23 = 0;
				V_0 = L_23;
				__this->___U3CU3E1__state_0 = L_23;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_24 = V_6;
				__this->___U3CU3Eu__1_10 = L_24;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_10))->___task_0))->___source_0), (void*)NULL);
				V_8 = __this;
				AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_25 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSumAsyncU3Ed__25_1_tE1C9BDAC2A20628F30CDF2FBA15D3D42C30FD592**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_25, (&V_6), (&V_8), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0238;
			}

IL_00f3_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_26 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_10;
				V_6 = L_26;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_27 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_10);
				il2cpp_codegen_initobj(L_27, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_28 = (-1);
				V_0 = L_28;
				__this->___U3CU3E1__state_0 = L_28;
			}

IL_0110_2:
			{
				bool L_29;
				L_29 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5_9 = L_29;
				bool L_30 = (bool)__this->___U3CU3Es__5_9;
				V_5 = L_30;
				bool L_31 = V_5;
				if (L_31)
				{
					goto IL_0059_2;
				}
			}
			{
				goto IL_013b_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_012f_1;
			}
			throw e;
		}

CATCH_012f_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_32 = V_9;
			__this->___U3CU3Es__3_7 = L_32;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_32);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_013b_1;
		}

IL_013b_1:
		{
			RuntimeObject* L_33 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_33) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_34 = V_10;
			if (!L_34)
			{
				goto IL_01ba_1;
			}
		}
		{
			RuntimeObject* L_35 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_35);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_36;
			L_36 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_35);
			V_12 = L_36;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_37;
			L_37 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_37;
			bool L_38;
			L_38 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_38)
			{
				goto IL_01b1_1;
			}
		}
		{
			int32_t L_39 = 1;
			V_0 = L_39;
			__this->___U3CU3E1__state_0 = L_39;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_40 = V_11;
			__this->___U3CU3Eu__2_11 = L_40;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_11))->___task_0))->___source_0), (void*)NULL);
			V_8 = __this;
			AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_41 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSumAsyncU3Ed__25_1_tE1C9BDAC2A20628F30CDF2FBA15D3D42C30FD592**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_41, (&V_11), (&V_8), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0238;
		}

IL_0194_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_42 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_11;
			V_11 = L_42;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_43 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_11);
			il2cpp_codegen_initobj(L_43, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_44 = (-1);
			V_0 = L_44;
			__this->___U3CU3E1__state_0 = L_44;
		}

IL_01b1_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_01ba_1:
		{
			RuntimeObject* L_45 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_9 = L_45;
			RuntimeObject* L_46 = V_9;
			if (!L_46)
			{
				goto IL_01e4_1;
			}
		}
		{
			RuntimeObject* L_47 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_47, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_48 = V_13;
			if (L_48)
			{
				goto IL_01d7_1;
			}
		}
		{
			RuntimeObject* L_49 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_49, method);
		}

IL_01d7_1:
		{
			Exception_t* L_50 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_51;
			L_51 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_50, NULL);
			NullCheck(L_51);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_51, NULL);
		}

IL_01e4_1:
		{
			int32_t L_52 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_53 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17)__this->___U3CsumU3E5__1_5;
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
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_54 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_55 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_m668B0B683F2B4B7005D076DE9400F32B1702673B_inline(L_54, L_55, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m668B0B683F2B4B7005D076DE9400F32B1702673B_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0238;
	}

IL_021c:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_56 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_57 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_inline(L_56, L_57, AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_RuntimeMethod_var);
	}

IL_0238:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__25_1_SetStateMachine_m79E686BF450630FD78E7046AFD0325F345106430_gshared (U3CSumAsyncU3Ed__25_1_tE1C9BDAC2A20628F30CDF2FBA15D3D42C30FD592* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__29_1__ctor_mB0F6963AAEB406B45F61E99C724CA38AAEA0E2EB_gshared (U3CSumAsyncU3Ed__29_1_tB079773830BA8E89A4B0BEA49F7AE3B2745B16A0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__29_1_MoveNext_m93BFA2D71E45DA186C83FFDD1801434933C54AC2_gshared (U3CSumAsyncU3Ed__29_1_tB079773830BA8E89A4B0BEA49F7AE3B2745B16A0* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t8C8C50386EA54FEE0FDFD474E8AB802D4B34B6FE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t8C8C50386EA54FEE0FDFD474E8AB802D4B34B6FE);
	int32_t V_0 = 0;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	U3CSumAsyncU3Ed__29_1_tB079773830BA8E89A4B0BEA49F7AE3B2745B16A0* V_8 = NULL;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	U3CSumAsyncU3Ed__29_1_tB079773830BA8E89A4B0BEA49F7AE3B2745B16A0* G_B15_0 = NULL;
	U3CSumAsyncU3Ed__29_1_tB079773830BA8E89A4B0BEA49F7AE3B2745B16A0* G_B14_0 = NULL;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 G_B16_0;
	memset((&G_B16_0), 0, sizeof(G_B16_0));
	U3CSumAsyncU3Ed__29_1_tB079773830BA8E89A4B0BEA49F7AE3B2745B16A0* G_B16_1 = NULL;
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
			goto IL_004b_1;
		}

IL_0014_1:
		{
			goto IL_0194_1;
		}

IL_0019_1:
		{
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_3 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CsumU3E5__1_5);
			il2cpp_codegen_initobj(L_3, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__2_6 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)L_6);
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			__this->___U3CU3Es__4_8 = 0;
		}

IL_004b_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0051_2;
				}
			}
			{
				goto IL_0056_2;
			}

IL_0051_2:
			{
				goto IL_00f3_2;
			}

IL_0056_2:
			{
				goto IL_00ab_2;
			}

IL_0059_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_8 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75)__this->___U3CsumU3E5__1_5;
				V_2 = L_8;
				Func_2_tCDF39BBC1094782C50BE631779E8FD895BFEAF32* L_9 = (Func_2_tCDF39BBC1094782C50BE631779E8FD895BFEAF32*)__this->___selector_3;
				RuntimeObject* L_10 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_12;
				L_12 = InvokerFuncInvoker1< Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
				V_4 = L_12;
				float L_13;
				L_13 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline((&V_4), Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
				V_3 = L_13;
				bool L_14;
				L_14 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&V_2), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				if (L_14)
				{
					G_B15_0 = __this;
					goto IL_0097_2;
				}
				G_B14_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_15 = V_4;
				G_B16_0 = L_15;
				G_B16_1 = G_B14_0;
				goto IL_00a5_2;
			}

IL_0097_2:
			{
				float L_16;
				L_16 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline((&V_2), Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
				float L_17 = V_3;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_18;
				memset((&L_18), 0, sizeof(L_18));
				Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_18), ((float)il2cpp_codegen_add(L_16, L_17)), Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
				G_B16_0 = L_18;
				G_B16_1 = G_B15_0;
			}

IL_00a5_2:
			{
				NullCheck(G_B16_1);
				G_B16_1->___U3CsumU3E5__1_5 = G_B16_0;
			}

IL_00ab_2:
			{
				RuntimeObject* L_19 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_19);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_20;
				L_20 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_19);
				V_7 = L_20;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_21;
				L_21 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_6 = L_21;
				bool L_22;
				L_22 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_6), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_0110_2;
				}
			}
			{
				int32_t L_23 = 0;
				V_0 = L_23;
				__this->___U3CU3E1__state_0 = L_23;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_24 = V_6;
				__this->___U3CU3Eu__1_10 = L_24;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_10))->___task_0))->___source_0), (void*)NULL);
				V_8 = __this;
				AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_25 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSumAsyncU3Ed__29_1_tB079773830BA8E89A4B0BEA49F7AE3B2745B16A0**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_25, (&V_6), (&V_8), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0238;
			}

IL_00f3_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_26 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_10;
				V_6 = L_26;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_27 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_10);
				il2cpp_codegen_initobj(L_27, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_28 = (-1);
				V_0 = L_28;
				__this->___U3CU3E1__state_0 = L_28;
			}

IL_0110_2:
			{
				bool L_29;
				L_29 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5_9 = L_29;
				bool L_30 = (bool)__this->___U3CU3Es__5_9;
				V_5 = L_30;
				bool L_31 = V_5;
				if (L_31)
				{
					goto IL_0059_2;
				}
			}
			{
				goto IL_013b_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_012f_1;
			}
			throw e;
		}

CATCH_012f_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_32 = V_9;
			__this->___U3CU3Es__3_7 = L_32;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_32);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_013b_1;
		}

IL_013b_1:
		{
			RuntimeObject* L_33 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_33) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_34 = V_10;
			if (!L_34)
			{
				goto IL_01ba_1;
			}
		}
		{
			RuntimeObject* L_35 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_35);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_36;
			L_36 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_35);
			V_12 = L_36;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_37;
			L_37 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_37;
			bool L_38;
			L_38 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_38)
			{
				goto IL_01b1_1;
			}
		}
		{
			int32_t L_39 = 1;
			V_0 = L_39;
			__this->___U3CU3E1__state_0 = L_39;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_40 = V_11;
			__this->___U3CU3Eu__2_11 = L_40;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_11))->___task_0))->___source_0), (void*)NULL);
			V_8 = __this;
			AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_41 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSumAsyncU3Ed__29_1_tB079773830BA8E89A4B0BEA49F7AE3B2745B16A0**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_41, (&V_11), (&V_8), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0238;
		}

IL_0194_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_42 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_11;
			V_11 = L_42;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_43 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_11);
			il2cpp_codegen_initobj(L_43, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_44 = (-1);
			V_0 = L_44;
			__this->___U3CU3E1__state_0 = L_44;
		}

IL_01b1_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_01ba_1:
		{
			RuntimeObject* L_45 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_9 = L_45;
			RuntimeObject* L_46 = V_9;
			if (!L_46)
			{
				goto IL_01e4_1;
			}
		}
		{
			RuntimeObject* L_47 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_47, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_48 = V_13;
			if (L_48)
			{
				goto IL_01d7_1;
			}
		}
		{
			RuntimeObject* L_49 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_49, method);
		}

IL_01d7_1:
		{
			Exception_t* L_50 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_51;
			L_51 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_50, NULL);
			NullCheck(L_51);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_51, NULL);
		}

IL_01e4_1:
		{
			int32_t L_52 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_53 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75)__this->___U3CsumU3E5__1_5;
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
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_54 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_55 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_inline(L_54, L_55, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0238;
	}

IL_021c:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_56 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_57 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_inline(L_56, L_57, AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_RuntimeMethod_var);
	}

IL_0238:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__29_1_SetStateMachine_m12EC67A79A126450DDD106BC9CD5D2AE6E18E430_gshared (U3CSumAsyncU3Ed__29_1_tB079773830BA8E89A4B0BEA49F7AE3B2745B16A0* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__33_1__ctor_mB52B698799020CED74093505A59D727C700D6BC5_gshared (U3CSumAsyncU3Ed__33_1_tE492BB06E14A49C64213C2B23EB667C8803EE6B4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__33_1_MoveNext_mC2F2C711C9494C3EDB90002C5190AA52EE25A66E_gshared (U3CSumAsyncU3Ed__33_1_tE492BB06E14A49C64213C2B23EB667C8803EE6B4* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t10218CCDB1D5DCFE6F598234A47366EAFA248C1A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t10218CCDB1D5DCFE6F598234A47366EAFA248C1A);
	int32_t V_0 = 0;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_2;
	memset((&V_2), 0, sizeof(V_2));
	double V_3 = 0.0;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	U3CSumAsyncU3Ed__33_1_tE492BB06E14A49C64213C2B23EB667C8803EE6B4* V_8 = NULL;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	U3CSumAsyncU3Ed__33_1_tE492BB06E14A49C64213C2B23EB667C8803EE6B4* G_B15_0 = NULL;
	U3CSumAsyncU3Ed__33_1_tE492BB06E14A49C64213C2B23EB667C8803EE6B4* G_B14_0 = NULL;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 G_B16_0;
	memset((&G_B16_0), 0, sizeof(G_B16_0));
	U3CSumAsyncU3Ed__33_1_tE492BB06E14A49C64213C2B23EB667C8803EE6B4* G_B16_1 = NULL;
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
			goto IL_004b_1;
		}

IL_0014_1:
		{
			goto IL_0194_1;
		}

IL_0019_1:
		{
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_3 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CsumU3E5__1_5);
			il2cpp_codegen_initobj(L_3, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__2_6 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)L_6);
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			__this->___U3CU3Es__4_8 = 0;
		}

IL_004b_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0051_2;
				}
			}
			{
				goto IL_0056_2;
			}

IL_0051_2:
			{
				goto IL_00f3_2;
			}

IL_0056_2:
			{
				goto IL_00ab_2;
			}

IL_0059_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_8 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165)__this->___U3CsumU3E5__1_5;
				V_2 = L_8;
				Func_2_tB9099E603733365FA636ABD4F1512E954C883863* L_9 = (Func_2_tB9099E603733365FA636ABD4F1512E954C883863*)__this->___selector_3;
				RuntimeObject* L_10 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_12;
				L_12 = InvokerFuncInvoker1< Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
				V_4 = L_12;
				double L_13;
				L_13 = Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline((&V_4), Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
				V_3 = L_13;
				bool L_14;
				L_14 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&V_2), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				if (L_14)
				{
					G_B15_0 = __this;
					goto IL_0097_2;
				}
				G_B14_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_15 = V_4;
				G_B16_0 = L_15;
				G_B16_1 = G_B14_0;
				goto IL_00a5_2;
			}

IL_0097_2:
			{
				double L_16;
				L_16 = Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline((&V_2), Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
				double L_17 = V_3;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_18;
				memset((&L_18), 0, sizeof(L_18));
				Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_18), ((double)il2cpp_codegen_add(L_16, L_17)), Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
				G_B16_0 = L_18;
				G_B16_1 = G_B15_0;
			}

IL_00a5_2:
			{
				NullCheck(G_B16_1);
				G_B16_1->___U3CsumU3E5__1_5 = G_B16_0;
			}

IL_00ab_2:
			{
				RuntimeObject* L_19 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_19);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_20;
				L_20 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_19);
				V_7 = L_20;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_21;
				L_21 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_6 = L_21;
				bool L_22;
				L_22 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_6), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_0110_2;
				}
			}
			{
				int32_t L_23 = 0;
				V_0 = L_23;
				__this->___U3CU3E1__state_0 = L_23;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_24 = V_6;
				__this->___U3CU3Eu__1_10 = L_24;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_10))->___task_0))->___source_0), (void*)NULL);
				V_8 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_25 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSumAsyncU3Ed__33_1_tE492BB06E14A49C64213C2B23EB667C8803EE6B4**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_25, (&V_6), (&V_8), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0238;
			}

IL_00f3_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_26 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_10;
				V_6 = L_26;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_27 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_10);
				il2cpp_codegen_initobj(L_27, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_28 = (-1);
				V_0 = L_28;
				__this->___U3CU3E1__state_0 = L_28;
			}

IL_0110_2:
			{
				bool L_29;
				L_29 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5_9 = L_29;
				bool L_30 = (bool)__this->___U3CU3Es__5_9;
				V_5 = L_30;
				bool L_31 = V_5;
				if (L_31)
				{
					goto IL_0059_2;
				}
			}
			{
				goto IL_013b_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_012f_1;
			}
			throw e;
		}

CATCH_012f_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_32 = V_9;
			__this->___U3CU3Es__3_7 = L_32;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_32);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_013b_1;
		}

IL_013b_1:
		{
			RuntimeObject* L_33 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_33) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_34 = V_10;
			if (!L_34)
			{
				goto IL_01ba_1;
			}
		}
		{
			RuntimeObject* L_35 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_35);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_36;
			L_36 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_35);
			V_12 = L_36;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_37;
			L_37 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_37;
			bool L_38;
			L_38 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_38)
			{
				goto IL_01b1_1;
			}
		}
		{
			int32_t L_39 = 1;
			V_0 = L_39;
			__this->___U3CU3E1__state_0 = L_39;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_40 = V_11;
			__this->___U3CU3Eu__2_11 = L_40;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_11))->___task_0))->___source_0), (void*)NULL);
			V_8 = __this;
			AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_41 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSumAsyncU3Ed__33_1_tE492BB06E14A49C64213C2B23EB667C8803EE6B4**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_41, (&V_11), (&V_8), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0238;
		}

IL_0194_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_42 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_11;
			V_11 = L_42;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_43 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_11);
			il2cpp_codegen_initobj(L_43, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_44 = (-1);
			V_0 = L_44;
			__this->___U3CU3E1__state_0 = L_44;
		}

IL_01b1_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_01ba_1:
		{
			RuntimeObject* L_45 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_9 = L_45;
			RuntimeObject* L_46 = V_9;
			if (!L_46)
			{
				goto IL_01e4_1;
			}
		}
		{
			RuntimeObject* L_47 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_47, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_48 = V_13;
			if (L_48)
			{
				goto IL_01d7_1;
			}
		}
		{
			RuntimeObject* L_49 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_49, method);
		}

IL_01d7_1:
		{
			Exception_t* L_50 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_51;
			L_51 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_50, NULL);
			NullCheck(L_51);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_51, NULL);
		}

IL_01e4_1:
		{
			int32_t L_52 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_53 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165)__this->___U3CsumU3E5__1_5;
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
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_54 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_55 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_inline(L_54, L_55, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0238;
	}

IL_021c:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_56 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_57 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_inline(L_56, L_57, AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
	}

IL_0238:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__33_1_SetStateMachine_m8C8E46A914D35E7CC3A7B6AE0F656FD2BDEB7151_gshared (U3CSumAsyncU3Ed__33_1_tE492BB06E14A49C64213C2B23EB667C8803EE6B4* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__37_1__ctor_mACEEB46AE664DFD7166603697A362001FB048210_gshared (U3CSumAsyncU3Ed__37_1_tB6E696A6F6E8F5B7DAF325F2930A4AF4FBFDF8F4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__37_1_MoveNext_m2C6D2C9DD41C4BCBD99D887CABF737A49EEE5858_gshared (U3CSumAsyncU3Ed__37_1_tB6E696A6F6E8F5B7DAF325F2930A4AF4FBFDF8F4* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t9B0B8179968FA6A1E7CD0E98DE73CDF3B32D7B04 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t9B0B8179968FA6A1E7CD0E98DE73CDF3B32D7B04);
	int32_t V_0 = 0;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_2;
	memset((&V_2), 0, sizeof(V_2));
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_3;
	memset((&V_3), 0, sizeof(V_3));
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	U3CSumAsyncU3Ed__37_1_tB6E696A6F6E8F5B7DAF325F2930A4AF4FBFDF8F4* V_8 = NULL;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	U3CSumAsyncU3Ed__37_1_tB6E696A6F6E8F5B7DAF325F2930A4AF4FBFDF8F4* G_B15_0 = NULL;
	U3CSumAsyncU3Ed__37_1_tB6E696A6F6E8F5B7DAF325F2930A4AF4FBFDF8F4* G_B14_0 = NULL;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB G_B16_0;
	memset((&G_B16_0), 0, sizeof(G_B16_0));
	U3CSumAsyncU3Ed__37_1_tB6E696A6F6E8F5B7DAF325F2930A4AF4FBFDF8F4* G_B16_1 = NULL;
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
			goto IL_004b_1;
		}

IL_0014_1:
		{
			goto IL_0198_1;
		}

IL_0019_1:
		{
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_3 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CsumU3E5__1_5);
			il2cpp_codegen_initobj(L_3, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__2_6 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)L_6);
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			__this->___U3CU3Es__4_8 = 0;
		}

IL_004b_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0051_2;
				}
			}
			{
				goto IL_0056_2;
			}

IL_0051_2:
			{
				goto IL_00f7_2;
			}

IL_0056_2:
			{
				goto IL_00af_2;
			}

IL_0059_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_8 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB)__this->___U3CsumU3E5__1_5;
				V_2 = L_8;
				Func_2_t02AAAA5ED63E37D8013889ECE551ED5172A9F7A4* L_9 = (Func_2_t02AAAA5ED63E37D8013889ECE551ED5172A9F7A4*)__this->___selector_3;
				RuntimeObject* L_10 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_10);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10, (Il2CppFullySharedGenericAny*)L_11);
				NullCheck(L_9);
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_12;
				L_12 = InvokerFuncInvoker1< Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
				V_4 = L_12;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_13;
				L_13 = Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline((&V_4), Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
				V_3 = L_13;
				bool L_14;
				L_14 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline((&V_2), Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				if (L_14)
				{
					G_B15_0 = __this;
					goto IL_0097_2;
				}
				G_B14_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_15 = V_4;
				G_B16_0 = L_15;
				G_B16_1 = G_B14_0;
				goto IL_00a9_2;
			}

IL_0097_2:
			{
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_16;
				L_16 = Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline((&V_2), Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_17 = V_3;
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_18;
				L_18 = Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7(L_16, L_17, NULL);
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_19;
				memset((&L_19), 0, sizeof(L_19));
				Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7((&L_19), L_18, Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_RuntimeMethod_var);
				G_B16_0 = L_19;
				G_B16_1 = G_B15_0;
			}

IL_00a9_2:
			{
				NullCheck(G_B16_1);
				G_B16_1->___U3CsumU3E5__1_5 = G_B16_0;
			}

IL_00af_2:
			{
				RuntimeObject* L_20 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_20);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_21;
				L_21 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_20);
				V_7 = L_21;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_22;
				L_22 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_6 = L_22;
				bool L_23;
				L_23 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_6), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_0114_2;
				}
			}
			{
				int32_t L_24 = 0;
				V_0 = L_24;
				__this->___U3CU3E1__state_0 = L_24;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_25 = V_6;
				__this->___U3CU3Eu__1_10 = L_25;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_10))->___task_0))->___source_0), (void*)NULL);
				V_8 = __this;
				AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_26 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSumAsyncU3Ed__37_1_tB6E696A6F6E8F5B7DAF325F2930A4AF4FBFDF8F4**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_26, (&V_6), (&V_8), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_023c;
			}

IL_00f7_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_27 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_10;
				V_6 = L_27;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_28 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_10);
				il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_29 = (-1);
				V_0 = L_29;
				__this->___U3CU3E1__state_0 = L_29;
			}

IL_0114_2:
			{
				bool L_30;
				L_30 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5_9 = L_30;
				bool L_31 = (bool)__this->___U3CU3Es__5_9;
				V_5 = L_31;
				bool L_32 = V_5;
				if (L_32)
				{
					goto IL_0059_2;
				}
			}
			{
				goto IL_013f_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0133_1;
			}
			throw e;
		}

CATCH_0133_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_33 = V_9;
			__this->___U3CU3Es__3_7 = L_33;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_33);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_013f_1;
		}

IL_013f_1:
		{
			RuntimeObject* L_34 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_34) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_35 = V_10;
			if (!L_35)
			{
				goto IL_01be_1;
			}
		}
		{
			RuntimeObject* L_36 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_36);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_37;
			L_37 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
			V_12 = L_37;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_38;
			L_38 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_38;
			bool L_39;
			L_39 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_39)
			{
				goto IL_01b5_1;
			}
		}
		{
			int32_t L_40 = 1;
			V_0 = L_40;
			__this->___U3CU3E1__state_0 = L_40;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41 = V_11;
			__this->___U3CU3Eu__2_11 = L_41;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_11))->___task_0))->___source_0), (void*)NULL);
			V_8 = __this;
			AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_42 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSumAsyncU3Ed__37_1_tB6E696A6F6E8F5B7DAF325F2930A4AF4FBFDF8F4**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_42, (&V_11), (&V_8), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_023c;
		}

IL_0198_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_43 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_11;
			V_11 = L_43;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_44 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_11);
			il2cpp_codegen_initobj(L_44, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_45 = (-1);
			V_0 = L_45;
			__this->___U3CU3E1__state_0 = L_45;
		}

IL_01b5_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_01be_1:
		{
			RuntimeObject* L_46 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_9 = L_46;
			RuntimeObject* L_47 = V_9;
			if (!L_47)
			{
				goto IL_01e8_1;
			}
		}
		{
			RuntimeObject* L_48 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_48, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_49 = V_13;
			if (L_49)
			{
				goto IL_01db_1;
			}
		}
		{
			RuntimeObject* L_50 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_50, method);
		}

IL_01db_1:
		{
			Exception_t* L_51 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_52;
			L_52 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_51, NULL);
			NullCheck(L_52);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_52, NULL);
		}

IL_01e8_1:
		{
			int32_t L_53 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_54 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB)__this->___U3CsumU3E5__1_5;
			V_1 = L_54;
			goto IL_0220;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01ff;
		}
		throw e;
	}

CATCH_01ff:
	{
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_55 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_56 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_inline(L_55, L_56, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_023c;
	}

IL_0220:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_57 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_58 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_inline(L_57, L_58, AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_RuntimeMethod_var);
	}

IL_023c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__37_1_SetStateMachine_mB011C61FA56CA81E5649E85DAD63D39C65689EF7_gshared (U3CSumAsyncU3Ed__37_1_tB6E696A6F6E8F5B7DAF325F2930A4AF4FBFDF8F4* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__5_1__ctor_mE63A4DAB4D55D226E539787AE3FBFBF58717286D_gshared (U3CSumAsyncU3Ed__5_1_tEFCAF49FB9A4C414549A6E09E17BD5FE81C2861C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__5_1_MoveNext_m5501C608BF7BEFCED3C16180D8435CC366490FB8_gshared (U3CSumAsyncU3Ed__5_1_tEFCAF49FB9A4C414549A6E09E17BD5FE81C2861C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t9D84DB220A84849D61D663015EBDE7EF654DF55E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t9D84DB220A84849D61D663015EBDE7EF654DF55E);
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CSumAsyncU3Ed__5_1_tEFCAF49FB9A4C414549A6E09E17BD5FE81C2861C* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t* V_10 = NULL;
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
			goto IL_0047_1;
		}

IL_0014_1:
		{
			goto IL_015b_1;
		}

IL_0019_1:
		{
			__this->___U3CsumU3E5__1_5 = ((int64_t)0);
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__2_6 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)L_5);
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			__this->___U3CU3Es__4_8 = 0;
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
				goto IL_00bd_2;
			}

IL_004f_2:
			{
				goto IL_0077_2;
			}

IL_0052_2:
			{
				int64_t L_7 = (int64_t)__this->___U3CsumU3E5__1_5;
				Func_2_t08AB71331BE9C65EB982154CBB27F90B5B62A771* L_8 = (Func_2_t08AB71331BE9C65EB982154CBB27F90B5B62A771*)__this->___selector_3;
				RuntimeObject* L_9 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				int64_t L_11;
				L_11 = InvokerFuncInvoker1< int64_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				__this->___U3CsumU3E5__1_5 = ((int64_t)il2cpp_codegen_add(L_7, L_11));
			}

IL_0077_2:
			{
				RuntimeObject* L_12 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_12);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_13;
				L_13 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_12);
				V_4 = L_13;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_14;
				L_14 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_3 = L_14;
				bool L_15;
				L_15 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00d9_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state_0 = L_16;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17 = V_3;
				__this->___U3CU3Eu__1_10 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_10))->___task_0))->___source_0), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_18 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSumAsyncU3Ed__5_1_tEFCAF49FB9A4C414549A6E09E17BD5FE81C2861C**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_18, (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_01ff;
			}

IL_00bd_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_10;
				V_3 = L_19;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_20 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_10);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state_0 = L_21;
			}

IL_00d9_2:
			{
				bool L_22;
				L_22 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5_9 = L_22;
				bool L_23 = (bool)__this->___U3CU3Es__5_9;
				V_2 = L_23;
				bool L_24 = V_2;
				if (L_24)
				{
					goto IL_0052_2;
				}
			}
			{
				goto IL_0102_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00f6_1;
			}
			throw e;
		}

CATCH_00f6_1:
		{
			V_6 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_25 = V_6;
			__this->___U3CU3Es__3_7 = L_25;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_25);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0102_1;
		}

IL_0102_1:
		{
			RuntimeObject* L_26 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_26) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_27 = V_7;
			if (!L_27)
			{
				goto IL_0181_1;
			}
		}
		{
			RuntimeObject* L_28 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_28);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_29;
			L_29 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_28);
			V_9 = L_29;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_30;
			L_30 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_9), NULL);
			V_8 = L_30;
			bool L_31;
			L_31 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_31)
			{
				goto IL_0178_1;
			}
		}
		{
			int32_t L_32 = 1;
			V_0 = L_32;
			__this->___U3CU3E1__state_0 = L_32;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_33 = V_8;
			__this->___U3CU3Eu__2_11 = L_33;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_11))->___task_0))->___source_0), (void*)NULL);
			V_5 = __this;
			AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_34 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSumAsyncU3Ed__5_1_tEFCAF49FB9A4C414549A6E09E17BD5FE81C2861C**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_34, (&V_8), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_01ff;
		}

IL_015b_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_35 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_11;
			V_8 = L_35;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_36 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_11);
			il2cpp_codegen_initobj(L_36, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_37 = (-1);
			V_0 = L_37;
			__this->___U3CU3E1__state_0 = L_37;
		}

IL_0178_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_0181_1:
		{
			RuntimeObject* L_38 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_6 = L_38;
			RuntimeObject* L_39 = V_6;
			if (!L_39)
			{
				goto IL_01ab_1;
			}
		}
		{
			RuntimeObject* L_40 = V_6;
			V_10 = ((Exception_t*)IsInstClass((RuntimeObject*)L_40, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_41 = V_10;
			if (L_41)
			{
				goto IL_019e_1;
			}
		}
		{
			RuntimeObject* L_42 = V_6;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, method);
		}

IL_019e_1:
		{
			Exception_t* L_43 = V_10;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_44;
			L_44 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_43, NULL);
			NullCheck(L_44);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_44, NULL);
		}

IL_01ab_1:
		{
			int32_t L_45 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			int64_t L_46 = (int64_t)__this->___U3CsumU3E5__1_5;
			V_1 = L_46;
			goto IL_01e3;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01c2;
		}
		throw e;
	}

CATCH_01c2:
	{
		V_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_47 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_48 = V_10;
		AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_inline(L_47, L_48, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01ff;
	}

IL_01e3:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_49 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder_1);
		int64_t L_50 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_inline(L_49, L_50, AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_RuntimeMethod_var);
	}

IL_01ff:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__5_1_SetStateMachine_m3B17B831B889A7FC6EA58CDAE9CC027A38F1B70C_gshared (U3CSumAsyncU3Ed__5_1_tEFCAF49FB9A4C414549A6E09E17BD5FE81C2861C* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__9_1__ctor_mD0E070CCFD62634B97E98CB0366A93B7383FB6BF_gshared (U3CSumAsyncU3Ed__9_1_tE9C33F88D507553C1DEFCB5DF9AAB48A2FFABBBC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__9_1_MoveNext_mF5B6798DFFF35C924ECCC64CE30302920A611C4C_gshared (U3CSumAsyncU3Ed__9_1_tE9C33F88D507553C1DEFCB5DF9AAB48A2FFABBBC* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t9BFD4CF1F510BD43A375B7E9E75ED1A81257CF1E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t9BFD4CF1F510BD43A375B7E9E75ED1A81257CF1E);
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CSumAsyncU3Ed__9_1_tE9C33F88D507553C1DEFCB5DF9AAB48A2FFABBBC* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t* V_10 = NULL;
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
			goto IL_004a_1;
		}

IL_0014_1:
		{
			goto IL_015e_1;
		}

IL_0019_1:
		{
			__this->___U3CsumU3E5__1_5 = (0.0f);
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__2_6 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)L_5);
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			__this->___U3CU3Es__4_8 = 0;
		}

IL_004a_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_0050_2;
				}
			}
			{
				goto IL_0052_2;
			}

IL_0050_2:
			{
				goto IL_00c0_2;
			}

IL_0052_2:
			{
				goto IL_007a_2;
			}

IL_0055_2:
			{
				float L_7 = (float)__this->___U3CsumU3E5__1_5;
				Func_2_tFAB3D8EFCE4F55CAB3F80EABAB10F8226D7FEBF6* L_8 = (Func_2_tFAB3D8EFCE4F55CAB3F80EABAB10F8226D7FEBF6*)__this->___selector_3;
				RuntimeObject* L_9 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				float L_11;
				L_11 = InvokerFuncInvoker1< float, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				__this->___U3CsumU3E5__1_5 = ((float)il2cpp_codegen_add(L_7, L_11));
			}

IL_007a_2:
			{
				RuntimeObject* L_12 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_12);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_13;
				L_13 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_12);
				V_4 = L_13;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_14;
				L_14 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_3 = L_14;
				bool L_15;
				L_15 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00dc_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state_0 = L_16;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17 = V_3;
				__this->___U3CU3Eu__1_10 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_10))->___task_0))->___source_0), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_18 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSumAsyncU3Ed__9_1_tE9C33F88D507553C1DEFCB5DF9AAB48A2FFABBBC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_18, (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0202;
			}

IL_00c0_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_10;
				V_3 = L_19;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_20 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_10);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state_0 = L_21;
			}

IL_00dc_2:
			{
				bool L_22;
				L_22 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5_9 = L_22;
				bool L_23 = (bool)__this->___U3CU3Es__5_9;
				V_2 = L_23;
				bool L_24 = V_2;
				if (L_24)
				{
					goto IL_0055_2;
				}
			}
			{
				goto IL_0105_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00f9_1;
			}
			throw e;
		}

CATCH_00f9_1:
		{
			V_6 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_25 = V_6;
			__this->___U3CU3Es__3_7 = L_25;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_25);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0105_1;
		}

IL_0105_1:
		{
			RuntimeObject* L_26 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_26) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_27 = V_7;
			if (!L_27)
			{
				goto IL_0184_1;
			}
		}
		{
			RuntimeObject* L_28 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_28);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_29;
			L_29 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_28);
			V_9 = L_29;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_30;
			L_30 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_9), NULL);
			V_8 = L_30;
			bool L_31;
			L_31 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_31)
			{
				goto IL_017b_1;
			}
		}
		{
			int32_t L_32 = 1;
			V_0 = L_32;
			__this->___U3CU3E1__state_0 = L_32;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_33 = V_8;
			__this->___U3CU3Eu__2_11 = L_33;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_11))->___task_0))->___source_0), (void*)NULL);
			V_5 = __this;
			AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_34 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSumAsyncU3Ed__9_1_tE9C33F88D507553C1DEFCB5DF9AAB48A2FFABBBC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_34, (&V_8), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_0202;
		}

IL_015e_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_35 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_11;
			V_8 = L_35;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_36 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_11);
			il2cpp_codegen_initobj(L_36, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_37 = (-1);
			V_0 = L_37;
			__this->___U3CU3E1__state_0 = L_37;
		}

IL_017b_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_0184_1:
		{
			RuntimeObject* L_38 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_6 = L_38;
			RuntimeObject* L_39 = V_6;
			if (!L_39)
			{
				goto IL_01ae_1;
			}
		}
		{
			RuntimeObject* L_40 = V_6;
			V_10 = ((Exception_t*)IsInstClass((RuntimeObject*)L_40, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_41 = V_10;
			if (L_41)
			{
				goto IL_01a1_1;
			}
		}
		{
			RuntimeObject* L_42 = V_6;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, method);
		}

IL_01a1_1:
		{
			Exception_t* L_43 = V_10;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_44;
			L_44 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_43, NULL);
			NullCheck(L_44);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_44, NULL);
		}

IL_01ae_1:
		{
			int32_t L_45 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			float L_46 = (float)__this->___U3CsumU3E5__1_5;
			V_1 = L_46;
			goto IL_01e6;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01c5;
		}
		throw e;
	}

CATCH_01c5:
	{
		V_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_47 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_48 = V_10;
		AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_inline(L_47, L_48, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0202;
	}

IL_01e6:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_49 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
		float L_50 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_inline(L_49, L_50, AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_RuntimeMethod_var);
	}

IL_0202:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__9_1_SetStateMachine_m1DC8C4D7EC02713E7CF4428FD27DEC077CAA348D_gshared (U3CSumAsyncU3Ed__9_1_tE9C33F88D507553C1DEFCB5DF9AAB48A2FFABBBC* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitAsyncU3Ed__10_1__ctor_mB355DA501DA7F7786B9443F420980EBB59A22FF9_gshared (U3CSumAwaitAsyncU3Ed__10_1_t3C9301D3FBC8BF17E8905D0F9C579BB0F8B5ECAB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitAsyncU3Ed__10_1_MoveNext_m0613F739BCE80F3D68D73E01199E4215D6C0E213_gshared (U3CSumAwaitAsyncU3Ed__10_1_t3C9301D3FBC8BF17E8905D0F9C579BB0F8B5ECAB* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t3E35E89D008DA87C8F5D7FB6E078AA0E59EDC20D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t3E35E89D008DA87C8F5D7FB6E078AA0E59EDC20D);
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CSumAwaitAsyncU3Ed__10_1_t3C9301D3FBC8BF17E8905D0F9C579BB0F8B5ECAB* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Exception_t* V_12 = NULL;
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
			goto IL_004b_1;
		}

IL_0015_1:
		{
			goto IL_01e7_1;
		}

IL_001a_1:
		{
			__this->___U3CsumU3E5__1_5 = (0.0f);
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__2_6 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)L_5);
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			__this->___U3CU3Es__4_8 = 0;
		}

IL_004b_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_0057_2;
				}
			}
			{
				goto IL_0051_2;
			}

IL_0051_2:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_0059_2;
				}
			}
			{
				goto IL_005e_2;
			}

IL_0057_2:
			{
				goto IL_00c1_2;
			}

IL_0059_2:
			{
				goto IL_0146_2;
			}

IL_005e_2:
			{
				goto IL_00fe_2;
			}

IL_0064_2:
			{
				float L_8 = (float)__this->___U3CsumU3E5__1_5;
				__this->___U3CU3Es__5_9 = L_8;
				Func_2_t844387A4F32860587989B5D1B9F3950D6D5901DE* L_9 = (Func_2_t844387A4F32860587989B5D1B9F3950D6D5901DE*)__this->___selector_3;
				RuntimeObject* L_10 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
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
					goto IL_00dd_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state_0 = L_15;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_16 = V_2;
				__this->___U3CU3Eu__1_12 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_12))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_17 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*, U3CSumAwaitAsyncU3Ed__10_1_t3C9301D3FBC8BF17E8905D0F9C579BB0F8B5ECAB**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_028b;
			}

IL_00c1_2:
			{
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_18 = (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D)__this->___U3CU3Eu__1_12;
				V_2 = L_18;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* L_19 = (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*)(&__this->___U3CU3Eu__1_12);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state_0 = L_20;
			}

IL_00dd_2:
			{
				float L_21;
				L_21 = Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_inline((&V_2), Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_RuntimeMethod_var);
				__this->___U3CU3Es__6_10 = L_21;
				float L_22 = (float)__this->___U3CU3Es__5_9;
				float L_23 = (float)__this->___U3CU3Es__6_10;
				__this->___U3CsumU3E5__1_5 = ((float)il2cpp_codegen_add(L_22, L_23));
			}

IL_00fe_2:
			{
				RuntimeObject* L_24 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_24);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_25;
				L_25 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_24);
				V_7 = L_25;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_26;
				L_26 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_6 = L_26;
				bool L_27;
				L_27 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_6), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_0163_2;
				}
			}
			{
				int32_t L_28 = 1;
				V_0 = L_28;
				__this->___U3CU3E1__state_0 = L_28;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29 = V_6;
				__this->___U3CU3Eu__2_13 = L_29;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_13))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_30 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSumAwaitAsyncU3Ed__10_1_t3C9301D3FBC8BF17E8905D0F9C579BB0F8B5ECAB**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_30, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_028b;
			}

IL_0146_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_13;
				V_6 = L_31;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_32 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_13);
				il2cpp_codegen_initobj(L_32, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_33 = (-1);
				V_0 = L_33;
				__this->___U3CU3E1__state_0 = L_33;
			}

IL_0163_2:
			{
				bool L_34;
				L_34 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_34;
				bool L_35 = (bool)__this->___U3CU3Es__7_11;
				V_5 = L_35;
				bool L_36 = V_5;
				if (L_36)
				{
					goto IL_0064_2;
				}
			}
			{
				goto IL_018e_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0182_1;
			}
			throw e;
		}

CATCH_0182_1:
		{
			V_8 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_37 = V_8;
			__this->___U3CU3Es__3_7 = L_37;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_37);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_018e_1;
		}

IL_018e_1:
		{
			RuntimeObject* L_38 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_38) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_39 = V_9;
			if (!L_39)
			{
				goto IL_020d_1;
			}
		}
		{
			RuntimeObject* L_40 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
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
				goto IL_0204_1;
			}
		}
		{
			int32_t L_44 = 2;
			V_0 = L_44;
			__this->___U3CU3E1__state_0 = L_44;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_45 = V_10;
			__this->___U3CU3Eu__3_14 = L_45;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_14))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_46 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSumAwaitAsyncU3Ed__10_1_t3C9301D3FBC8BF17E8905D0F9C579BB0F8B5ECAB**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_46, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_028b;
		}

IL_01e7_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_14;
			V_10 = L_47;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_48 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_14);
			il2cpp_codegen_initobj(L_48, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_49 = (-1);
			V_0 = L_49;
			__this->___U3CU3E1__state_0 = L_49;
		}

IL_0204_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_020d_1:
		{
			RuntimeObject* L_50 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_8 = L_50;
			RuntimeObject* L_51 = V_8;
			if (!L_51)
			{
				goto IL_0237_1;
			}
		}
		{
			RuntimeObject* L_52 = V_8;
			V_12 = ((Exception_t*)IsInstClass((RuntimeObject*)L_52, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_53 = V_12;
			if (L_53)
			{
				goto IL_022a_1;
			}
		}
		{
			RuntimeObject* L_54 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_54, method);
		}

IL_022a_1:
		{
			Exception_t* L_55 = V_12;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_56;
			L_56 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_55, NULL);
			NullCheck(L_56);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_56, NULL);
		}

IL_0237_1:
		{
			int32_t L_57 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			float L_58 = (float)__this->___U3CsumU3E5__1_5;
			V_1 = L_58;
			goto IL_026f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_024e;
		}
		throw e;
	}

CATCH_024e:
	{
		V_12 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_59 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_60 = V_12;
		AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_inline(L_59, L_60, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_028b;
	}

IL_026f:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_61 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
		float L_62 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_inline(L_61, L_62, AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_RuntimeMethod_var);
	}

IL_028b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitAsyncU3Ed__10_1_SetStateMachine_mEF16972313E2A1B0CDE2001AC289888155A2E591_gshared (U3CSumAwaitAsyncU3Ed__10_1_t3C9301D3FBC8BF17E8905D0F9C579BB0F8B5ECAB* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitAsyncU3Ed__14_1__ctor_m7E0F5F6571133EEE5C515255415FC3395E5CBD5B_gshared (U3CSumAwaitAsyncU3Ed__14_1_t39E2613E40C2E30242C356183627962F38F04065* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitAsyncU3Ed__14_1_MoveNext_mA2652F3215B338C9E8DF0196C90C992CF0723C60_gshared (U3CSumAwaitAsyncU3Ed__14_1_t39E2613E40C2E30242C356183627962F38F04065* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t00F4464A3E15F21C9827892E3B337879696FF086 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t00F4464A3E15F21C9827892E3B337879696FF086);
	int32_t V_0 = 0;
	double V_1 = 0.0;
	Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CSumAwaitAsyncU3Ed__14_1_t39E2613E40C2E30242C356183627962F38F04065* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Exception_t* V_12 = NULL;
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
			goto IL_01eb_1;
		}

IL_001a_1:
		{
			__this->___U3CsumU3E5__1_5 = (0.0);
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__2_6 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)L_5);
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			__this->___U3CU3Es__4_8 = 0;
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
				goto IL_00c5_2;
			}

IL_005d_2:
			{
				goto IL_014a_2;
			}

IL_0062_2:
			{
				goto IL_0102_2;
			}

IL_0068_2:
			{
				double L_8 = (double)__this->___U3CsumU3E5__1_5;
				__this->___U3CU3Es__5_9 = L_8;
				Func_2_tF452F3FF30306E919291E498D051B5F208EB38CF* L_9 = (Func_2_tF452F3FF30306E919291E498D051B5F208EB38CF*)__this->___selector_3;
				RuntimeObject* L_10 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
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
					goto IL_00e1_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state_0 = L_15;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_16 = V_2;
				__this->___U3CU3Eu__1_12 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_12))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_17 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88*, U3CSumAwaitAsyncU3Ed__14_1_t39E2613E40C2E30242C356183627962F38F04065**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_028f;
			}

IL_00c5_2:
			{
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_18 = (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88)__this->___U3CU3Eu__1_12;
				V_2 = L_18;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* L_19 = (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88*)(&__this->___U3CU3Eu__1_12);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state_0 = L_20;
			}

IL_00e1_2:
			{
				double L_21;
				L_21 = Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_inline((&V_2), Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_RuntimeMethod_var);
				__this->___U3CU3Es__6_10 = L_21;
				double L_22 = (double)__this->___U3CU3Es__5_9;
				double L_23 = (double)__this->___U3CU3Es__6_10;
				__this->___U3CsumU3E5__1_5 = ((double)il2cpp_codegen_add(L_22, L_23));
			}

IL_0102_2:
			{
				RuntimeObject* L_24 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_24);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_25;
				L_25 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_24);
				V_7 = L_25;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_26;
				L_26 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_6 = L_26;
				bool L_27;
				L_27 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_6), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_0167_2;
				}
			}
			{
				int32_t L_28 = 1;
				V_0 = L_28;
				__this->___U3CU3E1__state_0 = L_28;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29 = V_6;
				__this->___U3CU3Eu__2_13 = L_29;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_13))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_30 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSumAwaitAsyncU3Ed__14_1_t39E2613E40C2E30242C356183627962F38F04065**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_30, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_028f;
			}

IL_014a_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_13;
				V_6 = L_31;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_32 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_13);
				il2cpp_codegen_initobj(L_32, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_33 = (-1);
				V_0 = L_33;
				__this->___U3CU3E1__state_0 = L_33;
			}

IL_0167_2:
			{
				bool L_34;
				L_34 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_34;
				bool L_35 = (bool)__this->___U3CU3Es__7_11;
				V_5 = L_35;
				bool L_36 = V_5;
				if (L_36)
				{
					goto IL_0068_2;
				}
			}
			{
				goto IL_0192_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0186_1;
			}
			throw e;
		}

CATCH_0186_1:
		{
			V_8 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_37 = V_8;
			__this->___U3CU3Es__3_7 = L_37;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_37);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0192_1;
		}

IL_0192_1:
		{
			RuntimeObject* L_38 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_38) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_39 = V_9;
			if (!L_39)
			{
				goto IL_0211_1;
			}
		}
		{
			RuntimeObject* L_40 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
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
				goto IL_0208_1;
			}
		}
		{
			int32_t L_44 = 2;
			V_0 = L_44;
			__this->___U3CU3E1__state_0 = L_44;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_45 = V_10;
			__this->___U3CU3Eu__3_14 = L_45;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_14))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_46 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSumAwaitAsyncU3Ed__14_1_t39E2613E40C2E30242C356183627962F38F04065**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_46, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_028f;
		}

IL_01eb_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_14;
			V_10 = L_47;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_48 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_14);
			il2cpp_codegen_initobj(L_48, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_49 = (-1);
			V_0 = L_49;
			__this->___U3CU3E1__state_0 = L_49;
		}

IL_0208_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_0211_1:
		{
			RuntimeObject* L_50 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_8 = L_50;
			RuntimeObject* L_51 = V_8;
			if (!L_51)
			{
				goto IL_023b_1;
			}
		}
		{
			RuntimeObject* L_52 = V_8;
			V_12 = ((Exception_t*)IsInstClass((RuntimeObject*)L_52, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_53 = V_12;
			if (L_53)
			{
				goto IL_022e_1;
			}
		}
		{
			RuntimeObject* L_54 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_54, method);
		}

IL_022e_1:
		{
			Exception_t* L_55 = V_12;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_56;
			L_56 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_55, NULL);
			NullCheck(L_56);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_56, NULL);
		}

IL_023b_1:
		{
			int32_t L_57 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			double L_58 = (double)__this->___U3CsumU3E5__1_5;
			V_1 = L_58;
			goto IL_0273;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0252;
		}
		throw e;
	}

CATCH_0252:
	{
		V_12 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_59 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_60 = V_12;
		AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_inline(L_59, L_60, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_028f;
	}

IL_0273:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_61 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
		double L_62 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_inline(L_61, L_62, AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
	}

IL_028f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitAsyncU3Ed__14_1_SetStateMachine_m4D8095DC7B0A722CD9908A60681490B7E73FEF6B_gshared (U3CSumAwaitAsyncU3Ed__14_1_t39E2613E40C2E30242C356183627962F38F04065* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitAsyncU3Ed__18_1__ctor_mCDD0A4ACDD7406FF67A0FC6CCDA1B581C9B0D888_gshared (U3CSumAwaitAsyncU3Ed__18_1_t6EB43FF2636C2168869DE066167C7D3F81EB9125* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitAsyncU3Ed__18_1_MoveNext_mE2B4DA1AFAF0BCC2A20032FD952408BBF8EECBAF_gshared (U3CSumAwaitAsyncU3Ed__18_1_t6EB43FF2636C2168869DE066167C7D3F81EB9125* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_tCF530CC50CF6DF4158560D2D8E728540ACDF62D5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_tCF530CC50CF6DF4158560D2D8E728540ACDF62D5);
	int32_t V_0 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CSumAwaitAsyncU3Ed__18_1_t6EB43FF2636C2168869DE066167C7D3F81EB9125* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Exception_t* V_12 = NULL;
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
			goto IL_004c_1;
		}

IL_0015_1:
		{
			goto IL_01ec_1;
		}

IL_001a_1:
		{
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* L_3 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)(&__this->___U3CsumU3E5__1_5);
			il2cpp_codegen_initobj(L_3, sizeof(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F));
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__2_6 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)L_6);
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			__this->___U3CU3Es__4_8 = 0;
		}

IL_004c_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0058_2;
				}
			}
			{
				goto IL_0052_2;
			}

IL_0052_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_005a_2;
				}
			}
			{
				goto IL_005f_2;
			}

IL_0058_2:
			{
				goto IL_00c2_2;
			}

IL_005a_2:
			{
				goto IL_014b_2;
			}

IL_005f_2:
			{
				goto IL_0103_2;
			}

IL_0065_2:
			{
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_9 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)__this->___U3CsumU3E5__1_5;
				__this->___U3CU3Es__5_9 = L_9;
				Func_2_tD6766C7D6227AC2A45F7EDFC827BDFC58C8EFE78* L_10 = (Func_2_tD6766C7D6227AC2A45F7EDFC827BDFC58C8EFE78*)__this->___selector_3;
				RuntimeObject* L_11 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
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
					goto IL_00de_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state_0 = L_16;
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_17 = V_2;
				__this->___U3CU3Eu__1_12 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_12))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_18 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8*, U3CSumAwaitAsyncU3Ed__18_1_t6EB43FF2636C2168869DE066167C7D3F81EB9125**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_18, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0290;
			}

IL_00c2_2:
			{
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_19 = (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8)__this->___U3CU3Eu__1_12;
				V_2 = L_19;
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* L_20 = (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8*)(&__this->___U3CU3Eu__1_12);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state_0 = L_21;
			}

IL_00de_2:
			{
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_22;
				L_22 = Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_inline((&V_2), Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_RuntimeMethod_var);
				__this->___U3CU3Es__6_10 = L_22;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_23 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)__this->___U3CU3Es__5_9;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_24 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)__this->___U3CU3Es__6_10;
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_25;
				L_25 = Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7(L_23, L_24, NULL);
				__this->___U3CsumU3E5__1_5 = L_25;
			}

IL_0103_2:
			{
				RuntimeObject* L_26 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_26);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_27;
				L_27 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_26);
				V_7 = L_27;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28;
				L_28 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_6 = L_28;
				bool L_29;
				L_29 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_6), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_0168_2;
				}
			}
			{
				int32_t L_30 = 1;
				V_0 = L_30;
				__this->___U3CU3E1__state_0 = L_30;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = V_6;
				__this->___U3CU3Eu__2_13 = L_31;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_13))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_32 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSumAwaitAsyncU3Ed__18_1_t6EB43FF2636C2168869DE066167C7D3F81EB9125**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_32, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0290;
			}

IL_014b_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_13;
				V_6 = L_33;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_13);
				il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->___U3CU3E1__state_0 = L_35;
			}

IL_0168_2:
			{
				bool L_36;
				L_36 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_36;
				bool L_37 = (bool)__this->___U3CU3Es__7_11;
				V_5 = L_37;
				bool L_38 = V_5;
				if (L_38)
				{
					goto IL_0065_2;
				}
			}
			{
				goto IL_0193_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0187_1;
			}
			throw e;
		}

CATCH_0187_1:
		{
			V_8 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_39 = V_8;
			__this->___U3CU3Es__3_7 = L_39;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_39);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0193_1;
		}

IL_0193_1:
		{
			RuntimeObject* L_40 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_40) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_41 = V_9;
			if (!L_41)
			{
				goto IL_0212_1;
			}
		}
		{
			RuntimeObject* L_42 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_42);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_43;
			L_43 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_42);
			V_11 = L_43;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_44;
			L_44 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_11), NULL);
			V_10 = L_44;
			bool L_45;
			L_45 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_45)
			{
				goto IL_0209_1;
			}
		}
		{
			int32_t L_46 = 2;
			V_0 = L_46;
			__this->___U3CU3E1__state_0 = L_46;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47 = V_10;
			__this->___U3CU3Eu__3_14 = L_47;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_14))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_48 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSumAwaitAsyncU3Ed__18_1_t6EB43FF2636C2168869DE066167C7D3F81EB9125**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_48, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0290;
		}

IL_01ec_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_49 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_14;
			V_10 = L_49;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_50 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_14);
			il2cpp_codegen_initobj(L_50, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_51 = (-1);
			V_0 = L_51;
			__this->___U3CU3E1__state_0 = L_51;
		}

IL_0209_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_0212_1:
		{
			RuntimeObject* L_52 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_8 = L_52;
			RuntimeObject* L_53 = V_8;
			if (!L_53)
			{
				goto IL_023c_1;
			}
		}
		{
			RuntimeObject* L_54 = V_8;
			V_12 = ((Exception_t*)IsInstClass((RuntimeObject*)L_54, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_55 = V_12;
			if (L_55)
			{
				goto IL_022f_1;
			}
		}
		{
			RuntimeObject* L_56 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_56, method);
		}

IL_022f_1:
		{
			Exception_t* L_57 = V_12;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_58;
			L_58 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_57, NULL);
			NullCheck(L_58);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_58, NULL);
		}

IL_023c_1:
		{
			int32_t L_59 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_60 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)__this->___U3CsumU3E5__1_5;
			V_1 = L_60;
			goto IL_0274;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0253;
		}
		throw e;
	}

CATCH_0253:
	{
		V_12 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_61 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_62 = V_12;
		AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_inline(L_61, L_62, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0290;
	}

IL_0274:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_63 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_64 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_inline(L_63, L_64, AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_RuntimeMethod_var);
	}

IL_0290:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitAsyncU3Ed__18_1_SetStateMachine_m70187E82A0BE52790CF7E1A3BBCF41E11E4AC4E7_gshared (U3CSumAwaitAsyncU3Ed__18_1_t6EB43FF2636C2168869DE066167C7D3F81EB9125* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitAsyncU3Ed__22_1__ctor_m7371CC6DB1734766AB9172E38C8CB0657CDE6BB5_gshared (U3CSumAwaitAsyncU3Ed__22_1_t625242089553211042F970C9A03E800B7C7DB719* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitAsyncU3Ed__22_1_MoveNext_mCF759FE3C55A51F5EE78EC531683E1F5B0CA79BE_gshared (U3CSumAwaitAsyncU3Ed__22_1_t625242089553211042F970C9A03E800B7C7DB719* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t826D4F4983680B7C1C7804C4AE79AEB469842630 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_t826D4F4983680B7C1C7804C4AE79AEB469842630);
	int32_t V_0 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CSumAwaitAsyncU3Ed__22_1_t625242089553211042F970C9A03E800B7C7DB719* V_4 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_5;
	memset((&V_5), 0, sizeof(V_5));
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
	U3CSumAwaitAsyncU3Ed__22_1_t625242089553211042F970C9A03E800B7C7DB719* G_B21_0 = NULL;
	U3CSumAwaitAsyncU3Ed__22_1_t625242089553211042F970C9A03E800B7C7DB719* G_B20_0 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B22_0;
	memset((&G_B22_0), 0, sizeof(G_B22_0));
	U3CSumAwaitAsyncU3Ed__22_1_t625242089553211042F970C9A03E800B7C7DB719* G_B22_1 = NULL;
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
			goto IL_004c_1;
		}

IL_0015_1:
		{
			goto IL_0234_1;
		}

IL_001a_1:
		{
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_3 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CsumU3E5__1_5);
			il2cpp_codegen_initobj(L_3, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__2_6 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)L_6);
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			__this->___U3CU3Es__4_8 = 0;
		}

IL_004c_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0058_2;
				}
			}
			{
				goto IL_0052_2;
			}

IL_0052_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_005a_2;
				}
			}
			{
				goto IL_005f_2;
			}

IL_0058_2:
			{
				goto IL_00c2_2;
			}

IL_005a_2:
			{
				goto IL_0193_2;
			}

IL_005f_2:
			{
				goto IL_014b_2;
			}

IL_0065_2:
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_9 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28)__this->___U3CsumU3E5__1_5;
				__this->___U3CU3Es__6_10 = L_9;
				Func_2_tCD782F33543995850D4A4AF7569D83504640F79F* L_10 = (Func_2_tCD782F33543995850D4A4AF7569D83504640F79F*)__this->___selector_3;
				RuntimeObject* L_11 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_11);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_11, (Il2CppFullySharedGenericAny*)L_12);
				NullCheck(L_10);
				UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05 L_13;
				L_13 = InvokerFuncInvoker1< UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_12: *(void**)L_12));
				V_3 = L_13;
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_14;
				L_14 = UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_inline((&V_3), UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_RuntimeMethod_var);
				V_2 = L_14;
				bool L_15;
				L_15 = Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_inline((&V_2), Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00de_2;
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
				AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_18 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*, Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9*, U3CSumAwaitAsyncU3Ed__22_1_t625242089553211042F970C9A03E800B7C7DB719**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_18, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_02d8;
			}

IL_00c2_2:
			{
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_19 = (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9)__this->___U3CU3Eu__1_13;
				V_2 = L_19;
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* L_20 = (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9*)(&__this->___U3CU3Eu__1_13);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state_0 = L_21;
			}

IL_00de_2:
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_22;
				L_22 = Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_inline((&V_2), Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_RuntimeMethod_var);
				__this->___U3CU3Es__5_9 = L_22;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_23 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CU3Es__5_9);
				int32_t L_24;
				L_24 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline(L_23, Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_24;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_25 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CU3Es__6_10);
				bool L_26;
				L_26 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_25, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				if (L_26)
				{
					G_B21_0 = __this;
					goto IL_0116_2;
				}
				G_B20_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_27 = V_5;
				G_B22_0 = L_27;
				G_B22_1 = G_B20_0;
				goto IL_012d_2;
			}

IL_0116_2:
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_28 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CU3Es__6_10);
				int32_t L_29;
				L_29 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline(L_28, Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
				int32_t L_30 = (int32_t)__this->___U3CU3Es__7_11;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_31;
				memset((&L_31), 0, sizeof(L_31));
				Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_31), ((int32_t)il2cpp_codegen_add(L_29, L_30)), Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
				G_B22_0 = L_31;
				G_B22_1 = G_B21_0;
			}

IL_012d_2:
			{
				NullCheck(G_B22_1);
				G_B22_1->___U3CsumU3E5__1_5 = G_B22_0;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_32 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CU3Es__5_9);
				il2cpp_codegen_initobj(L_32, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_33 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CU3Es__6_10);
				il2cpp_codegen_initobj(L_33, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
			}

IL_014b_2:
			{
				RuntimeObject* L_34 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_34);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_35;
				L_35 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_34);
				V_8 = L_35;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_36;
				L_36 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_36;
				bool L_37;
				L_37 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_37)
				{
					goto IL_01b0_2;
				}
			}
			{
				int32_t L_38 = 1;
				V_0 = L_38;
				__this->___U3CU3E1__state_0 = L_38;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_39 = V_7;
				__this->___U3CU3Eu__2_14 = L_39;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_40 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSumAwaitAsyncU3Ed__22_1_t625242089553211042F970C9A03E800B7C7DB719**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_40, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_02d8;
			}

IL_0193_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_41 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_14;
				V_7 = L_41;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_42 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_14);
				il2cpp_codegen_initobj(L_42, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_43 = (-1);
				V_0 = L_43;
				__this->___U3CU3E1__state_0 = L_43;
			}

IL_01b0_2:
			{
				bool L_44;
				L_44 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_44;
				bool L_45 = (bool)__this->___U3CU3Es__8_12;
				V_6 = L_45;
				bool L_46 = V_6;
				if (L_46)
				{
					goto IL_0065_2;
				}
			}
			{
				goto IL_01db_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01cf_1;
			}
			throw e;
		}

CATCH_01cf_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_47 = V_9;
			__this->___U3CU3Es__3_7 = L_47;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_47);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01db_1;
		}

IL_01db_1:
		{
			RuntimeObject* L_48 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_48) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_49 = V_10;
			if (!L_49)
			{
				goto IL_025a_1;
			}
		}
		{
			RuntimeObject* L_50 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_50);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_51;
			L_51 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_50);
			V_12 = L_51;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_52;
			L_52 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_52;
			bool L_53;
			L_53 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_53)
			{
				goto IL_0251_1;
			}
		}
		{
			int32_t L_54 = 2;
			V_0 = L_54;
			__this->___U3CU3E1__state_0 = L_54;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_55 = V_11;
			__this->___U3CU3Eu__3_15 = L_55;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_15))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_56 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSumAwaitAsyncU3Ed__22_1_t625242089553211042F970C9A03E800B7C7DB719**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_56, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_02d8;
		}

IL_0234_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_57 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_15;
			V_11 = L_57;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_58 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_15);
			il2cpp_codegen_initobj(L_58, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_59 = (-1);
			V_0 = L_59;
			__this->___U3CU3E1__state_0 = L_59;
		}

IL_0251_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_025a_1:
		{
			RuntimeObject* L_60 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_9 = L_60;
			RuntimeObject* L_61 = V_9;
			if (!L_61)
			{
				goto IL_0284_1;
			}
		}
		{
			RuntimeObject* L_62 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_62, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_63 = V_13;
			if (L_63)
			{
				goto IL_0277_1;
			}
		}
		{
			RuntimeObject* L_64 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_64, method);
		}

IL_0277_1:
		{
			Exception_t* L_65 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_66;
			L_66 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_65, NULL);
			NullCheck(L_66);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_66, NULL);
		}

IL_0284_1:
		{
			int32_t L_67 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_68 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28)__this->___U3CsumU3E5__1_5;
			V_1 = L_68;
			goto IL_02bc;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_029b;
		}
		throw e;
	}

CATCH_029b:
	{
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_69 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_70 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_mE8C5BA18D2449D6BD546630CE70DE315F5F91FCE_inline(L_69, L_70, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mE8C5BA18D2449D6BD546630CE70DE315F5F91FCE_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02d8;
	}

IL_02bc:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_71 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_72 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_inline(L_71, L_72, AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_RuntimeMethod_var);
	}

IL_02d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitAsyncU3Ed__22_1_SetStateMachine_m0301154F4126344A95BEC1C487236523573B50BC_gshared (U3CSumAwaitAsyncU3Ed__22_1_t625242089553211042F970C9A03E800B7C7DB719* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitAsyncU3Ed__26_1__ctor_mA426BCD494D87D197F08217FDF65057C48EAAE02_gshared (U3CSumAwaitAsyncU3Ed__26_1_t844C4B8D187A39025A4373512E24354C79BAFD9E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitAsyncU3Ed__26_1_MoveNext_m0F18A3EEF026FD6FA786F50A5E1C7A57159C0696_gshared (U3CSumAwaitAsyncU3Ed__26_1_t844C4B8D187A39025A4373512E24354C79BAFD9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t141E62F450B634FA5B4C10F70DE1FC8553A1A10A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_t141E62F450B634FA5B4C10F70DE1FC8553A1A10A);
	int32_t V_0 = 0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CSumAwaitAsyncU3Ed__26_1_t844C4B8D187A39025A4373512E24354C79BAFD9E* V_4 = NULL;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_5;
	memset((&V_5), 0, sizeof(V_5));
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
	U3CSumAwaitAsyncU3Ed__26_1_t844C4B8D187A39025A4373512E24354C79BAFD9E* G_B21_0 = NULL;
	U3CSumAwaitAsyncU3Ed__26_1_t844C4B8D187A39025A4373512E24354C79BAFD9E* G_B20_0 = NULL;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 G_B22_0;
	memset((&G_B22_0), 0, sizeof(G_B22_0));
	U3CSumAwaitAsyncU3Ed__26_1_t844C4B8D187A39025A4373512E24354C79BAFD9E* G_B22_1 = NULL;
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
			goto IL_004c_1;
		}

IL_0015_1:
		{
			goto IL_0234_1;
		}

IL_001a_1:
		{
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_3 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CsumU3E5__1_5);
			il2cpp_codegen_initobj(L_3, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__2_6 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)L_6);
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			__this->___U3CU3Es__4_8 = 0;
		}

IL_004c_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0058_2;
				}
			}
			{
				goto IL_0052_2;
			}

IL_0052_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_005a_2;
				}
			}
			{
				goto IL_005f_2;
			}

IL_0058_2:
			{
				goto IL_00c2_2;
			}

IL_005a_2:
			{
				goto IL_0193_2;
			}

IL_005f_2:
			{
				goto IL_014b_2;
			}

IL_0065_2:
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_9 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17)__this->___U3CsumU3E5__1_5;
				__this->___U3CU3Es__6_10 = L_9;
				Func_2_t898AEF8B0AC8B5CB054F91316F69A4739DB2E5B6* L_10 = (Func_2_t898AEF8B0AC8B5CB054F91316F69A4739DB2E5B6*)__this->___selector_3;
				RuntimeObject* L_11 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_11);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_11, (Il2CppFullySharedGenericAny*)L_12);
				NullCheck(L_10);
				UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C L_13;
				L_13 = InvokerFuncInvoker1< UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_12: *(void**)L_12));
				V_3 = L_13;
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_14;
				L_14 = UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_inline((&V_3), UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_RuntimeMethod_var);
				V_2 = L_14;
				bool L_15;
				L_15 = Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_inline((&V_2), Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00de_2;
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
				AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_18 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*, Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB*, U3CSumAwaitAsyncU3Ed__26_1_t844C4B8D187A39025A4373512E24354C79BAFD9E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_18, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_02d8;
			}

IL_00c2_2:
			{
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_19 = (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB)__this->___U3CU3Eu__1_13;
				V_2 = L_19;
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* L_20 = (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB*)(&__this->___U3CU3Eu__1_13);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state_0 = L_21;
			}

IL_00de_2:
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_22;
				L_22 = Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_inline((&V_2), Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_RuntimeMethod_var);
				__this->___U3CU3Es__5_9 = L_22;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_23 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CU3Es__5_9);
				int64_t L_24;
				L_24 = Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_inline(L_23, Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_24;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_25 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CU3Es__6_10);
				bool L_26;
				L_26 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline(L_25, Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
				if (L_26)
				{
					G_B21_0 = __this;
					goto IL_0116_2;
				}
				G_B20_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_27 = V_5;
				G_B22_0 = L_27;
				G_B22_1 = G_B20_0;
				goto IL_012d_2;
			}

IL_0116_2:
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_28 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CU3Es__6_10);
				int64_t L_29;
				L_29 = Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_inline(L_28, Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
				int64_t L_30 = (int64_t)__this->___U3CU3Es__7_11;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_31;
				memset((&L_31), 0, sizeof(L_31));
				Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_31), ((int64_t)il2cpp_codegen_add(L_29, L_30)), Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
				G_B22_0 = L_31;
				G_B22_1 = G_B21_0;
			}

IL_012d_2:
			{
				NullCheck(G_B22_1);
				G_B22_1->___U3CsumU3E5__1_5 = G_B22_0;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_32 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CU3Es__5_9);
				il2cpp_codegen_initobj(L_32, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_33 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CU3Es__6_10);
				il2cpp_codegen_initobj(L_33, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
			}

IL_014b_2:
			{
				RuntimeObject* L_34 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_34);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_35;
				L_35 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_34);
				V_8 = L_35;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_36;
				L_36 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_36;
				bool L_37;
				L_37 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_37)
				{
					goto IL_01b0_2;
				}
			}
			{
				int32_t L_38 = 1;
				V_0 = L_38;
				__this->___U3CU3E1__state_0 = L_38;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_39 = V_7;
				__this->___U3CU3Eu__2_14 = L_39;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_40 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSumAwaitAsyncU3Ed__26_1_t844C4B8D187A39025A4373512E24354C79BAFD9E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_40, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_02d8;
			}

IL_0193_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_41 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_14;
				V_7 = L_41;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_42 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_14);
				il2cpp_codegen_initobj(L_42, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_43 = (-1);
				V_0 = L_43;
				__this->___U3CU3E1__state_0 = L_43;
			}

IL_01b0_2:
			{
				bool L_44;
				L_44 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_44;
				bool L_45 = (bool)__this->___U3CU3Es__8_12;
				V_6 = L_45;
				bool L_46 = V_6;
				if (L_46)
				{
					goto IL_0065_2;
				}
			}
			{
				goto IL_01db_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01cf_1;
			}
			throw e;
		}

CATCH_01cf_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_47 = V_9;
			__this->___U3CU3Es__3_7 = L_47;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_47);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01db_1;
		}

IL_01db_1:
		{
			RuntimeObject* L_48 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_48) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_49 = V_10;
			if (!L_49)
			{
				goto IL_025a_1;
			}
		}
		{
			RuntimeObject* L_50 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_50);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_51;
			L_51 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_50);
			V_12 = L_51;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_52;
			L_52 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_52;
			bool L_53;
			L_53 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_53)
			{
				goto IL_0251_1;
			}
		}
		{
			int32_t L_54 = 2;
			V_0 = L_54;
			__this->___U3CU3E1__state_0 = L_54;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_55 = V_11;
			__this->___U3CU3Eu__3_15 = L_55;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_15))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_56 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSumAwaitAsyncU3Ed__26_1_t844C4B8D187A39025A4373512E24354C79BAFD9E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_56, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_02d8;
		}

IL_0234_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_57 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_15;
			V_11 = L_57;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_58 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_15);
			il2cpp_codegen_initobj(L_58, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_59 = (-1);
			V_0 = L_59;
			__this->___U3CU3E1__state_0 = L_59;
		}

IL_0251_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_025a_1:
		{
			RuntimeObject* L_60 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_9 = L_60;
			RuntimeObject* L_61 = V_9;
			if (!L_61)
			{
				goto IL_0284_1;
			}
		}
		{
			RuntimeObject* L_62 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_62, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_63 = V_13;
			if (L_63)
			{
				goto IL_0277_1;
			}
		}
		{
			RuntimeObject* L_64 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_64, method);
		}

IL_0277_1:
		{
			Exception_t* L_65 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_66;
			L_66 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_65, NULL);
			NullCheck(L_66);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_66, NULL);
		}

IL_0284_1:
		{
			int32_t L_67 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_68 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17)__this->___U3CsumU3E5__1_5;
			V_1 = L_68;
			goto IL_02bc;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_029b;
		}
		throw e;
	}

CATCH_029b:
	{
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_69 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_70 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_m668B0B683F2B4B7005D076DE9400F32B1702673B_inline(L_69, L_70, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m668B0B683F2B4B7005D076DE9400F32B1702673B_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02d8;
	}

IL_02bc:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_71 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_72 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_inline(L_71, L_72, AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_RuntimeMethod_var);
	}

IL_02d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitAsyncU3Ed__26_1_SetStateMachine_mD5349570EADF1AC405B6665330582F577E0B3A52_gshared (U3CSumAwaitAsyncU3Ed__26_1_t844C4B8D187A39025A4373512E24354C79BAFD9E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitAsyncU3Ed__2_1__ctor_m1ABD1814516F277BDBE472A682CE5939A2B6E58C_gshared (U3CSumAwaitAsyncU3Ed__2_1_t596CCC6BAE9FFE2951D8B6694A1C7AC9954A3981* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitAsyncU3Ed__2_1_MoveNext_mAD028854EB6439B05CD650C1A04C9F6EF9A9E412_gshared (U3CSumAwaitAsyncU3Ed__2_1_t596CCC6BAE9FFE2951D8B6694A1C7AC9954A3981* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_RuntimeMethod_var);
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
	const uint32_t SizeOf_TSource_t5E26790003A697315AB6BFADCD9394DEABF4546A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t5E26790003A697315AB6BFADCD9394DEABF4546A);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Awaiter_t8953594D03299DE782894F4A865CED79F2504266 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CSumAwaitAsyncU3Ed__2_1_t596CCC6BAE9FFE2951D8B6694A1C7AC9954A3981* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Exception_t* V_12 = NULL;
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
			goto IL_0047_1;
		}

IL_0015_1:
		{
			goto IL_01e3_1;
		}

IL_001a_1:
		{
			__this->___U3CsumU3E5__1_5 = 0;
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__2_6 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)L_5);
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			__this->___U3CU3Es__4_8 = 0;
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
					goto IL_0053_2;
				}
			}
			{
				goto IL_004d_2;
			}

IL_004d_2:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_0055_2;
				}
			}
			{
				goto IL_005a_2;
			}

IL_0053_2:
			{
				goto IL_00bd_2;
			}

IL_0055_2:
			{
				goto IL_0142_2;
			}

IL_005a_2:
			{
				goto IL_00fa_2;
			}

IL_0060_2:
			{
				int32_t L_8 = (int32_t)__this->___U3CsumU3E5__1_5;
				__this->___U3CU3Es__5_9 = L_8;
				Func_2_t6561E0DBB0FBFCB8DBFA46F392A86C31706164F5* L_9 = (Func_2_t6561E0DBB0FBFCB8DBFA46F392A86C31706164F5*)__this->___selector_3;
				RuntimeObject* L_10 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
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
					goto IL_00d9_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state_0 = L_15;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_16 = V_2;
				__this->___U3CU3Eu__1_12 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_12))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_17 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_t8953594D03299DE782894F4A865CED79F2504266*, U3CSumAwaitAsyncU3Ed__2_1_t596CCC6BAE9FFE2951D8B6694A1C7AC9954A3981**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0287;
			}

IL_00bd_2:
			{
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_18 = (Awaiter_t8953594D03299DE782894F4A865CED79F2504266)__this->___U3CU3Eu__1_12;
				V_2 = L_18;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266* L_19 = (Awaiter_t8953594D03299DE782894F4A865CED79F2504266*)(&__this->___U3CU3Eu__1_12);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_t8953594D03299DE782894F4A865CED79F2504266));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state_0 = L_20;
			}

IL_00d9_2:
			{
				int32_t L_21;
				L_21 = Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_inline((&V_2), Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_RuntimeMethod_var);
				__this->___U3CU3Es__6_10 = L_21;
				int32_t L_22 = (int32_t)__this->___U3CU3Es__5_9;
				int32_t L_23 = (int32_t)__this->___U3CU3Es__6_10;
				__this->___U3CsumU3E5__1_5 = ((int32_t)il2cpp_codegen_add(L_22, L_23));
			}

IL_00fa_2:
			{
				RuntimeObject* L_24 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_24);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_25;
				L_25 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_24);
				V_7 = L_25;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_26;
				L_26 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_6 = L_26;
				bool L_27;
				L_27 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_6), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_015f_2;
				}
			}
			{
				int32_t L_28 = 1;
				V_0 = L_28;
				__this->___U3CU3E1__state_0 = L_28;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29 = V_6;
				__this->___U3CU3Eu__2_13 = L_29;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_13))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_30 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSumAwaitAsyncU3Ed__2_1_t596CCC6BAE9FFE2951D8B6694A1C7AC9954A3981**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_30, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0287;
			}

IL_0142_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_13;
				V_6 = L_31;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_32 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_13);
				il2cpp_codegen_initobj(L_32, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_33 = (-1);
				V_0 = L_33;
				__this->___U3CU3E1__state_0 = L_33;
			}

IL_015f_2:
			{
				bool L_34;
				L_34 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_34;
				bool L_35 = (bool)__this->___U3CU3Es__7_11;
				V_5 = L_35;
				bool L_36 = V_5;
				if (L_36)
				{
					goto IL_0060_2;
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
			V_8 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_37 = V_8;
			__this->___U3CU3Es__3_7 = L_37;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_37);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_018a_1;
		}

IL_018a_1:
		{
			RuntimeObject* L_38 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_38) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_39 = V_9;
			if (!L_39)
			{
				goto IL_0209_1;
			}
		}
		{
			RuntimeObject* L_40 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
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
				goto IL_0200_1;
			}
		}
		{
			int32_t L_44 = 2;
			V_0 = L_44;
			__this->___U3CU3E1__state_0 = L_44;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_45 = V_10;
			__this->___U3CU3Eu__3_14 = L_45;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_14))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_46 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSumAwaitAsyncU3Ed__2_1_t596CCC6BAE9FFE2951D8B6694A1C7AC9954A3981**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_46, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0287;
		}

IL_01e3_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_14;
			V_10 = L_47;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_48 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_14);
			il2cpp_codegen_initobj(L_48, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_49 = (-1);
			V_0 = L_49;
			__this->___U3CU3E1__state_0 = L_49;
		}

IL_0200_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_0209_1:
		{
			RuntimeObject* L_50 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_8 = L_50;
			RuntimeObject* L_51 = V_8;
			if (!L_51)
			{
				goto IL_0233_1;
			}
		}
		{
			RuntimeObject* L_52 = V_8;
			V_12 = ((Exception_t*)IsInstClass((RuntimeObject*)L_52, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_53 = V_12;
			if (L_53)
			{
				goto IL_0226_1;
			}
		}
		{
			RuntimeObject* L_54 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_54, method);
		}

IL_0226_1:
		{
			Exception_t* L_55 = V_12;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_56;
			L_56 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_55, NULL);
			NullCheck(L_56);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_56, NULL);
		}

IL_0233_1:
		{
			int32_t L_57 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			int32_t L_58 = (int32_t)__this->___U3CsumU3E5__1_5;
			V_1 = L_58;
			goto IL_026b;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_024a;
		}
		throw e;
	}

CATCH_024a:
	{
		V_12 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_59 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_60 = V_12;
		AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_inline(L_59, L_60, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0287;
	}

IL_026b:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_61 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder_1);
		int32_t L_62 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_inline(L_61, L_62, AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_RuntimeMethod_var);
	}

IL_0287:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitAsyncU3Ed__2_1_SetStateMachine_m57D45980FC90EDE30704BF6A2F3971E592272949_gshared (U3CSumAwaitAsyncU3Ed__2_1_t596CCC6BAE9FFE2951D8B6694A1C7AC9954A3981* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitAsyncU3Ed__30_1__ctor_mF377B603D012F0B7EA2734E0B11BCAABB774D8F7_gshared (U3CSumAwaitAsyncU3Ed__30_1_tCB37D1624B890AE442263C7F27D15692732E4151* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitAsyncU3Ed__30_1_MoveNext_mB8CC7B03B8FCBA5C2DA97295152D655D126EDB90_gshared (U3CSumAwaitAsyncU3Ed__30_1_tCB37D1624B890AE442263C7F27D15692732E4151* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t782EF930BEE912CD66BBAE3C6B39D50297C64881 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_t782EF930BEE912CD66BBAE3C6B39D50297C64881);
	int32_t V_0 = 0;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CSumAwaitAsyncU3Ed__30_1_tCB37D1624B890AE442263C7F27D15692732E4151* V_4 = NULL;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_5;
	memset((&V_5), 0, sizeof(V_5));
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
	U3CSumAwaitAsyncU3Ed__30_1_tCB37D1624B890AE442263C7F27D15692732E4151* G_B21_0 = NULL;
	U3CSumAwaitAsyncU3Ed__30_1_tCB37D1624B890AE442263C7F27D15692732E4151* G_B20_0 = NULL;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 G_B22_0;
	memset((&G_B22_0), 0, sizeof(G_B22_0));
	U3CSumAwaitAsyncU3Ed__30_1_tCB37D1624B890AE442263C7F27D15692732E4151* G_B22_1 = NULL;
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
			goto IL_004c_1;
		}

IL_0015_1:
		{
			goto IL_0234_1;
		}

IL_001a_1:
		{
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_3 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CsumU3E5__1_5);
			il2cpp_codegen_initobj(L_3, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__2_6 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)L_6);
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			__this->___U3CU3Es__4_8 = 0;
		}

IL_004c_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0058_2;
				}
			}
			{
				goto IL_0052_2;
			}

IL_0052_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_005a_2;
				}
			}
			{
				goto IL_005f_2;
			}

IL_0058_2:
			{
				goto IL_00c2_2;
			}

IL_005a_2:
			{
				goto IL_0193_2;
			}

IL_005f_2:
			{
				goto IL_014b_2;
			}

IL_0065_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_9 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75)__this->___U3CsumU3E5__1_5;
				__this->___U3CU3Es__6_10 = L_9;
				Func_2_t9F80A31065CD628F063DA0D192A111706F695666* L_10 = (Func_2_t9F80A31065CD628F063DA0D192A111706F695666*)__this->___selector_3;
				RuntimeObject* L_11 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_11);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_11, (Il2CppFullySharedGenericAny*)L_12);
				NullCheck(L_10);
				UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46 L_13;
				L_13 = InvokerFuncInvoker1< UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_12: *(void**)L_12));
				V_3 = L_13;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_14;
				L_14 = UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_inline((&V_3), UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_RuntimeMethod_var);
				V_2 = L_14;
				bool L_15;
				L_15 = Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_inline((&V_2), Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00de_2;
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
				((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*, U3CSumAwaitAsyncU3Ed__30_1_tCB37D1624B890AE442263C7F27D15692732E4151**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_18, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_02d8;
			}

IL_00c2_2:
			{
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_19 = (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91)__this->___U3CU3Eu__1_13;
				V_2 = L_19;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* L_20 = (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*)(&__this->___U3CU3Eu__1_13);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state_0 = L_21;
			}

IL_00de_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_22;
				L_22 = Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_inline((&V_2), Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_RuntimeMethod_var);
				__this->___U3CU3Es__5_9 = L_22;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_23 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CU3Es__5_9);
				float L_24;
				L_24 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline(L_23, Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_24;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_25 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CU3Es__6_10);
				bool L_26;
				L_26 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline(L_25, Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				if (L_26)
				{
					G_B21_0 = __this;
					goto IL_0116_2;
				}
				G_B20_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_27 = V_5;
				G_B22_0 = L_27;
				G_B22_1 = G_B20_0;
				goto IL_012d_2;
			}

IL_0116_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_28 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CU3Es__6_10);
				float L_29;
				L_29 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline(L_28, Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
				float L_30 = (float)__this->___U3CU3Es__7_11;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_31;
				memset((&L_31), 0, sizeof(L_31));
				Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_31), ((float)il2cpp_codegen_add(L_29, L_30)), Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
				G_B22_0 = L_31;
				G_B22_1 = G_B21_0;
			}

IL_012d_2:
			{
				NullCheck(G_B22_1);
				G_B22_1->___U3CsumU3E5__1_5 = G_B22_0;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_32 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CU3Es__5_9);
				il2cpp_codegen_initobj(L_32, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_33 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CU3Es__6_10);
				il2cpp_codegen_initobj(L_33, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
			}

IL_014b_2:
			{
				RuntimeObject* L_34 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_34);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_35;
				L_35 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_34);
				V_8 = L_35;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_36;
				L_36 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_36;
				bool L_37;
				L_37 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_37)
				{
					goto IL_01b0_2;
				}
			}
			{
				int32_t L_38 = 1;
				V_0 = L_38;
				__this->___U3CU3E1__state_0 = L_38;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_39 = V_7;
				__this->___U3CU3Eu__2_14 = L_39;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_40 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSumAwaitAsyncU3Ed__30_1_tCB37D1624B890AE442263C7F27D15692732E4151**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_40, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_02d8;
			}

IL_0193_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_41 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_14;
				V_7 = L_41;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_42 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_14);
				il2cpp_codegen_initobj(L_42, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_43 = (-1);
				V_0 = L_43;
				__this->___U3CU3E1__state_0 = L_43;
			}

IL_01b0_2:
			{
				bool L_44;
				L_44 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_44;
				bool L_45 = (bool)__this->___U3CU3Es__8_12;
				V_6 = L_45;
				bool L_46 = V_6;
				if (L_46)
				{
					goto IL_0065_2;
				}
			}
			{
				goto IL_01db_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01cf_1;
			}
			throw e;
		}

CATCH_01cf_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_47 = V_9;
			__this->___U3CU3Es__3_7 = L_47;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_47);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01db_1;
		}

IL_01db_1:
		{
			RuntimeObject* L_48 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_48) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_49 = V_10;
			if (!L_49)
			{
				goto IL_025a_1;
			}
		}
		{
			RuntimeObject* L_50 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_50);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_51;
			L_51 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_50);
			V_12 = L_51;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_52;
			L_52 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_52;
			bool L_53;
			L_53 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_53)
			{
				goto IL_0251_1;
			}
		}
		{
			int32_t L_54 = 2;
			V_0 = L_54;
			__this->___U3CU3E1__state_0 = L_54;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_55 = V_11;
			__this->___U3CU3Eu__3_15 = L_55;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_15))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_56 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSumAwaitAsyncU3Ed__30_1_tCB37D1624B890AE442263C7F27D15692732E4151**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_56, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_02d8;
		}

IL_0234_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_57 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_15;
			V_11 = L_57;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_58 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_15);
			il2cpp_codegen_initobj(L_58, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_59 = (-1);
			V_0 = L_59;
			__this->___U3CU3E1__state_0 = L_59;
		}

IL_0251_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_025a_1:
		{
			RuntimeObject* L_60 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_9 = L_60;
			RuntimeObject* L_61 = V_9;
			if (!L_61)
			{
				goto IL_0284_1;
			}
		}
		{
			RuntimeObject* L_62 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_62, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_63 = V_13;
			if (L_63)
			{
				goto IL_0277_1;
			}
		}
		{
			RuntimeObject* L_64 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_64, method);
		}

IL_0277_1:
		{
			Exception_t* L_65 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_66;
			L_66 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_65, NULL);
			NullCheck(L_66);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_66, NULL);
		}

IL_0284_1:
		{
			int32_t L_67 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_68 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75)__this->___U3CsumU3E5__1_5;
			V_1 = L_68;
			goto IL_02bc;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_029b;
		}
		throw e;
	}

CATCH_029b:
	{
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_69 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_70 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_inline(L_69, L_70, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02d8;
	}

IL_02bc:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_71 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_72 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_inline(L_71, L_72, AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_RuntimeMethod_var);
	}

IL_02d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitAsyncU3Ed__30_1_SetStateMachine_m3F5D9D90DB97A1B94A8EAA026AFDF8776E143508_gshared (U3CSumAwaitAsyncU3Ed__30_1_tCB37D1624B890AE442263C7F27D15692732E4151* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitAsyncU3Ed__34_1__ctor_mC7BE89C7F4525C9DC6A9EDFC74BBEDEDD5ED5E3D_gshared (U3CSumAwaitAsyncU3Ed__34_1_tF81F2BBE17C4A4FC66EF061BBCD5B91BD910B040* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitAsyncU3Ed__34_1_MoveNext_mEFF87F6528D8BD6DA310780435AD3B6BB31B1EAC_gshared (U3CSumAwaitAsyncU3Ed__34_1_tF81F2BBE17C4A4FC66EF061BBCD5B91BD910B040* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tAB11534D9DE821712C405912D88CFCF1DAF76F84 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_tAB11534D9DE821712C405912D88CFCF1DAF76F84);
	int32_t V_0 = 0;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CSumAwaitAsyncU3Ed__34_1_tF81F2BBE17C4A4FC66EF061BBCD5B91BD910B040* V_4 = NULL;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_5;
	memset((&V_5), 0, sizeof(V_5));
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
	U3CSumAwaitAsyncU3Ed__34_1_tF81F2BBE17C4A4FC66EF061BBCD5B91BD910B040* G_B21_0 = NULL;
	U3CSumAwaitAsyncU3Ed__34_1_tF81F2BBE17C4A4FC66EF061BBCD5B91BD910B040* G_B20_0 = NULL;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 G_B22_0;
	memset((&G_B22_0), 0, sizeof(G_B22_0));
	U3CSumAwaitAsyncU3Ed__34_1_tF81F2BBE17C4A4FC66EF061BBCD5B91BD910B040* G_B22_1 = NULL;
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
			goto IL_004c_1;
		}

IL_0015_1:
		{
			goto IL_0234_1;
		}

IL_001a_1:
		{
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_3 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CsumU3E5__1_5);
			il2cpp_codegen_initobj(L_3, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__2_6 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)L_6);
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			__this->___U3CU3Es__4_8 = 0;
		}

IL_004c_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0058_2;
				}
			}
			{
				goto IL_0052_2;
			}

IL_0052_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_005a_2;
				}
			}
			{
				goto IL_005f_2;
			}

IL_0058_2:
			{
				goto IL_00c2_2;
			}

IL_005a_2:
			{
				goto IL_0193_2;
			}

IL_005f_2:
			{
				goto IL_014b_2;
			}

IL_0065_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_9 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165)__this->___U3CsumU3E5__1_5;
				__this->___U3CU3Es__6_10 = L_9;
				Func_2_tEBD22D2F4376CEDF9152BDE05B6E363699F0C7E1* L_10 = (Func_2_tEBD22D2F4376CEDF9152BDE05B6E363699F0C7E1*)__this->___selector_3;
				RuntimeObject* L_11 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_11);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_11, (Il2CppFullySharedGenericAny*)L_12);
				NullCheck(L_10);
				UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E L_13;
				L_13 = InvokerFuncInvoker1< UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_12: *(void**)L_12));
				V_3 = L_13;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_14;
				L_14 = UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_inline((&V_3), UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_RuntimeMethod_var);
				V_2 = L_14;
				bool L_15;
				L_15 = Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_inline((&V_2), Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00de_2;
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
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0*, U3CSumAwaitAsyncU3Ed__34_1_tF81F2BBE17C4A4FC66EF061BBCD5B91BD910B040**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_18, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_02d8;
			}

IL_00c2_2:
			{
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_19 = (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0)__this->___U3CU3Eu__1_13;
				V_2 = L_19;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* L_20 = (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0*)(&__this->___U3CU3Eu__1_13);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state_0 = L_21;
			}

IL_00de_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_22;
				L_22 = Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_inline((&V_2), Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_RuntimeMethod_var);
				__this->___U3CU3Es__5_9 = L_22;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_23 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CU3Es__5_9);
				double L_24;
				L_24 = Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline(L_23, Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_24;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_25 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CU3Es__6_10);
				bool L_26;
				L_26 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline(L_25, Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				if (L_26)
				{
					G_B21_0 = __this;
					goto IL_0116_2;
				}
				G_B20_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_27 = V_5;
				G_B22_0 = L_27;
				G_B22_1 = G_B20_0;
				goto IL_012d_2;
			}

IL_0116_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_28 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CU3Es__6_10);
				double L_29;
				L_29 = Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline(L_28, Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
				double L_30 = (double)__this->___U3CU3Es__7_11;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_31;
				memset((&L_31), 0, sizeof(L_31));
				Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_31), ((double)il2cpp_codegen_add(L_29, L_30)), Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
				G_B22_0 = L_31;
				G_B22_1 = G_B21_0;
			}

IL_012d_2:
			{
				NullCheck(G_B22_1);
				G_B22_1->___U3CsumU3E5__1_5 = G_B22_0;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_32 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CU3Es__5_9);
				il2cpp_codegen_initobj(L_32, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_33 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CU3Es__6_10);
				il2cpp_codegen_initobj(L_33, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
			}

IL_014b_2:
			{
				RuntimeObject* L_34 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_34);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_35;
				L_35 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_34);
				V_8 = L_35;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_36;
				L_36 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_36;
				bool L_37;
				L_37 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_37)
				{
					goto IL_01b0_2;
				}
			}
			{
				int32_t L_38 = 1;
				V_0 = L_38;
				__this->___U3CU3E1__state_0 = L_38;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_39 = V_7;
				__this->___U3CU3Eu__2_14 = L_39;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_40 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSumAwaitAsyncU3Ed__34_1_tF81F2BBE17C4A4FC66EF061BBCD5B91BD910B040**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_40, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_02d8;
			}

IL_0193_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_41 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_14;
				V_7 = L_41;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_42 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_14);
				il2cpp_codegen_initobj(L_42, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_43 = (-1);
				V_0 = L_43;
				__this->___U3CU3E1__state_0 = L_43;
			}

IL_01b0_2:
			{
				bool L_44;
				L_44 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_44;
				bool L_45 = (bool)__this->___U3CU3Es__8_12;
				V_6 = L_45;
				bool L_46 = V_6;
				if (L_46)
				{
					goto IL_0065_2;
				}
			}
			{
				goto IL_01db_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01cf_1;
			}
			throw e;
		}

CATCH_01cf_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_47 = V_9;
			__this->___U3CU3Es__3_7 = L_47;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_47);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01db_1;
		}

IL_01db_1:
		{
			RuntimeObject* L_48 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_48) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_49 = V_10;
			if (!L_49)
			{
				goto IL_025a_1;
			}
		}
		{
			RuntimeObject* L_50 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_50);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_51;
			L_51 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_50);
			V_12 = L_51;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_52;
			L_52 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_52;
			bool L_53;
			L_53 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_53)
			{
				goto IL_0251_1;
			}
		}
		{
			int32_t L_54 = 2;
			V_0 = L_54;
			__this->___U3CU3E1__state_0 = L_54;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_55 = V_11;
			__this->___U3CU3Eu__3_15 = L_55;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_15))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_56 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSumAwaitAsyncU3Ed__34_1_tF81F2BBE17C4A4FC66EF061BBCD5B91BD910B040**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_56, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_02d8;
		}

IL_0234_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_57 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_15;
			V_11 = L_57;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_58 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_15);
			il2cpp_codegen_initobj(L_58, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_59 = (-1);
			V_0 = L_59;
			__this->___U3CU3E1__state_0 = L_59;
		}

IL_0251_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_025a_1:
		{
			RuntimeObject* L_60 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_9 = L_60;
			RuntimeObject* L_61 = V_9;
			if (!L_61)
			{
				goto IL_0284_1;
			}
		}
		{
			RuntimeObject* L_62 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_62, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_63 = V_13;
			if (L_63)
			{
				goto IL_0277_1;
			}
		}
		{
			RuntimeObject* L_64 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_64, method);
		}

IL_0277_1:
		{
			Exception_t* L_65 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_66;
			L_66 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_65, NULL);
			NullCheck(L_66);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_66, NULL);
		}

IL_0284_1:
		{
			int32_t L_67 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_68 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165)__this->___U3CsumU3E5__1_5;
			V_1 = L_68;
			goto IL_02bc;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_029b;
		}
		throw e;
	}

CATCH_029b:
	{
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_69 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_70 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_inline(L_69, L_70, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02d8;
	}

IL_02bc:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_71 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_72 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_inline(L_71, L_72, AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
	}

IL_02d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitAsyncU3Ed__34_1_SetStateMachine_m93CBD2AFCBC314C0A8CD3897864AE7AE63F69559_gshared (U3CSumAwaitAsyncU3Ed__34_1_tF81F2BBE17C4A4FC66EF061BBCD5B91BD910B040* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitAsyncU3Ed__38_1__ctor_m6B2E7AC98A44A7CA506BB5D8EBCDC52C95CDFEA6_gshared (U3CSumAwaitAsyncU3Ed__38_1_t5167247A6C0E72794A66E9B645DDEB0288F05988* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitAsyncU3Ed__38_1_MoveNext_m25C5FB83216B36C6818A582BD98E900035A26D5B_gshared (U3CSumAwaitAsyncU3Ed__38_1_t5167247A6C0E72794A66E9B645DDEB0288F05988* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tD260A442B586E024F0A4DC6B3D85486497D214DB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_tD260A442B586E024F0A4DC6B3D85486497D214DB);
	int32_t V_0 = 0;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CSumAwaitAsyncU3Ed__38_1_t5167247A6C0E72794A66E9B645DDEB0288F05988* V_4 = NULL;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_5;
	memset((&V_5), 0, sizeof(V_5));
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
	U3CSumAwaitAsyncU3Ed__38_1_t5167247A6C0E72794A66E9B645DDEB0288F05988* G_B21_0 = NULL;
	U3CSumAwaitAsyncU3Ed__38_1_t5167247A6C0E72794A66E9B645DDEB0288F05988* G_B20_0 = NULL;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB G_B22_0;
	memset((&G_B22_0), 0, sizeof(G_B22_0));
	U3CSumAwaitAsyncU3Ed__38_1_t5167247A6C0E72794A66E9B645DDEB0288F05988* G_B22_1 = NULL;
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
			goto IL_004c_1;
		}

IL_0015_1:
		{
			goto IL_0238_1;
		}

IL_001a_1:
		{
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_3 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CsumU3E5__1_5);
			il2cpp_codegen_initobj(L_3, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__2_6 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)L_6);
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			__this->___U3CU3Es__4_8 = 0;
		}

IL_004c_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0058_2;
				}
			}
			{
				goto IL_0052_2;
			}

IL_0052_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_005a_2;
				}
			}
			{
				goto IL_005f_2;
			}

IL_0058_2:
			{
				goto IL_00c2_2;
			}

IL_005a_2:
			{
				goto IL_0197_2;
			}

IL_005f_2:
			{
				goto IL_014f_2;
			}

IL_0065_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_9 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB)__this->___U3CsumU3E5__1_5;
				__this->___U3CU3Es__6_10 = L_9;
				Func_2_t041ABB3F33302FF5B428FF832CE110343F4DA4C6* L_10 = (Func_2_t041ABB3F33302FF5B428FF832CE110343F4DA4C6*)__this->___selector_3;
				RuntimeObject* L_11 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_11);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_11, (Il2CppFullySharedGenericAny*)L_12);
				NullCheck(L_10);
				UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F L_13;
				L_13 = InvokerFuncInvoker1< UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_12: *(void**)L_12));
				V_3 = L_13;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_14;
				L_14 = UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_inline((&V_3), UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_RuntimeMethod_var);
				V_2 = L_14;
				bool L_15;
				L_15 = Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_inline((&V_2), Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00de_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state_0 = L_16;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_17 = V_2;
				__this->___U3CU3Eu__1_13 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_18 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51*, U3CSumAwaitAsyncU3Ed__38_1_t5167247A6C0E72794A66E9B645DDEB0288F05988**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_18, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_02dc;
			}

IL_00c2_2:
			{
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_19 = (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51)__this->___U3CU3Eu__1_13;
				V_2 = L_19;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* L_20 = (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51*)(&__this->___U3CU3Eu__1_13);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state_0 = L_21;
			}

IL_00de_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_22;
				L_22 = Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_inline((&V_2), Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_RuntimeMethod_var);
				__this->___U3CU3Es__5_9 = L_22;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_23 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CU3Es__5_9);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_24;
				L_24 = Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline(L_23, Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_24;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_25 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CU3Es__6_10);
				bool L_26;
				L_26 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline(L_25, Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				if (L_26)
				{
					G_B21_0 = __this;
					goto IL_0116_2;
				}
				G_B20_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_27 = V_5;
				G_B22_0 = L_27;
				G_B22_1 = G_B20_0;
				goto IL_0131_2;
			}

IL_0116_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_28 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CU3Es__6_10);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_29;
				L_29 = Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline(L_28, Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_30 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)__this->___U3CU3Es__7_11;
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_31;
				L_31 = Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7(L_29, L_30, NULL);
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_32;
				memset((&L_32), 0, sizeof(L_32));
				Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7((&L_32), L_31, Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_RuntimeMethod_var);
				G_B22_0 = L_32;
				G_B22_1 = G_B21_0;
			}

IL_0131_2:
			{
				NullCheck(G_B22_1);
				G_B22_1->___U3CsumU3E5__1_5 = G_B22_0;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_33 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CU3Es__5_9);
				il2cpp_codegen_initobj(L_33, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_34 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CU3Es__6_10);
				il2cpp_codegen_initobj(L_34, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
			}

IL_014f_2:
			{
				RuntimeObject* L_35 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_35);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_36;
				L_36 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_35);
				V_8 = L_36;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_37;
				L_37 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_37;
				bool L_38;
				L_38 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_38)
				{
					goto IL_01b4_2;
				}
			}
			{
				int32_t L_39 = 1;
				V_0 = L_39;
				__this->___U3CU3E1__state_0 = L_39;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_40 = V_7;
				__this->___U3CU3Eu__2_14 = L_40;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_41 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSumAwaitAsyncU3Ed__38_1_t5167247A6C0E72794A66E9B645DDEB0288F05988**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_41, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_02dc;
			}

IL_0197_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_42 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_14;
				V_7 = L_42;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_43 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_14);
				il2cpp_codegen_initobj(L_43, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_44 = (-1);
				V_0 = L_44;
				__this->___U3CU3E1__state_0 = L_44;
			}

IL_01b4_2:
			{
				bool L_45;
				L_45 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_45;
				bool L_46 = (bool)__this->___U3CU3Es__8_12;
				V_6 = L_46;
				bool L_47 = V_6;
				if (L_47)
				{
					goto IL_0065_2;
				}
			}
			{
				goto IL_01df_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01d3_1;
			}
			throw e;
		}

CATCH_01d3_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_48 = V_9;
			__this->___U3CU3Es__3_7 = L_48;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_48);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01df_1;
		}

IL_01df_1:
		{
			RuntimeObject* L_49 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_49) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_50 = V_10;
			if (!L_50)
			{
				goto IL_025e_1;
			}
		}
		{
			RuntimeObject* L_51 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_51);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_52;
			L_52 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_51);
			V_12 = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_53;
			L_53 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_53;
			bool L_54;
			L_54 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_54)
			{
				goto IL_0255_1;
			}
		}
		{
			int32_t L_55 = 2;
			V_0 = L_55;
			__this->___U3CU3E1__state_0 = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_56 = V_11;
			__this->___U3CU3Eu__3_15 = L_56;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_15))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_57 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSumAwaitAsyncU3Ed__38_1_t5167247A6C0E72794A66E9B645DDEB0288F05988**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_57, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_02dc;
		}

IL_0238_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_58 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_15;
			V_11 = L_58;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_59 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_15);
			il2cpp_codegen_initobj(L_59, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_60 = (-1);
			V_0 = L_60;
			__this->___U3CU3E1__state_0 = L_60;
		}

IL_0255_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_025e_1:
		{
			RuntimeObject* L_61 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_9 = L_61;
			RuntimeObject* L_62 = V_9;
			if (!L_62)
			{
				goto IL_0288_1;
			}
		}
		{
			RuntimeObject* L_63 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_63, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_64 = V_13;
			if (L_64)
			{
				goto IL_027b_1;
			}
		}
		{
			RuntimeObject* L_65 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_65, method);
		}

IL_027b_1:
		{
			Exception_t* L_66 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_67;
			L_67 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_66, NULL);
			NullCheck(L_67);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_67, NULL);
		}

IL_0288_1:
		{
			int32_t L_68 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_69 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB)__this->___U3CsumU3E5__1_5;
			V_1 = L_69;
			goto IL_02c0;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_029f;
		}
		throw e;
	}

CATCH_029f:
	{
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_70 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_71 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_inline(L_70, L_71, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02dc;
	}

IL_02c0:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_72 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_73 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_inline(L_72, L_73, AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_RuntimeMethod_var);
	}

IL_02dc:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitAsyncU3Ed__38_1_SetStateMachine_mAD11525DD9E13275B5725B47EC00F65212037C68_gshared (U3CSumAwaitAsyncU3Ed__38_1_t5167247A6C0E72794A66E9B645DDEB0288F05988* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitAsyncU3Ed__6_1__ctor_m944380E918BEEF6DEA124E7979EAC3A18AC14BC5_gshared (U3CSumAwaitAsyncU3Ed__6_1_tFD7597B21E6A2D0D272827AD3E4561A5CD38F6F8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitAsyncU3Ed__6_1_MoveNext_m0C234E4D6A6770AAF77578763116BBBA76D1A5B5_gshared (U3CSumAwaitAsyncU3Ed__6_1_tFD7597B21E6A2D0D272827AD3E4561A5CD38F6F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_RuntimeMethod_var);
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
	const uint32_t SizeOf_TSource_t38E0FC4F2B6E2DBF9856243234E9AFD482E60F87 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t38E0FC4F2B6E2DBF9856243234E9AFD482E60F87);
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CSumAwaitAsyncU3Ed__6_1_tFD7597B21E6A2D0D272827AD3E4561A5CD38F6F8* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Exception_t* V_12 = NULL;
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
			goto IL_0048_1;
		}

IL_0015_1:
		{
			goto IL_01e4_1;
		}

IL_001a_1:
		{
			__this->___U3CsumU3E5__1_5 = ((int64_t)0);
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__2_6 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)L_5);
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			__this->___U3CU3Es__4_8 = 0;
		}

IL_0048_1:
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
				goto IL_004e_2;
			}

IL_004e_2:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_0056_2;
				}
			}
			{
				goto IL_005b_2;
			}

IL_0054_2:
			{
				goto IL_00be_2;
			}

IL_0056_2:
			{
				goto IL_0143_2;
			}

IL_005b_2:
			{
				goto IL_00fb_2;
			}

IL_0061_2:
			{
				int64_t L_8 = (int64_t)__this->___U3CsumU3E5__1_5;
				__this->___U3CU3Es__5_9 = L_8;
				Func_2_t04742C32F6BEF8B1199EACA5BD7F68C041603B6D* L_9 = (Func_2_t04742C32F6BEF8B1199EACA5BD7F68C041603B6D*)__this->___selector_3;
				RuntimeObject* L_10 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
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
					goto IL_00da_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state_0 = L_15;
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_16 = V_2;
				__this->___U3CU3Eu__1_12 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_12))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_17 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E*, U3CSumAwaitAsyncU3Ed__6_1_tFD7597B21E6A2D0D272827AD3E4561A5CD38F6F8**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0288;
			}

IL_00be_2:
			{
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_18 = (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E)__this->___U3CU3Eu__1_12;
				V_2 = L_18;
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* L_19 = (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E*)(&__this->___U3CU3Eu__1_12);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state_0 = L_20;
			}

IL_00da_2:
			{
				int64_t L_21;
				L_21 = Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_inline((&V_2), Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_RuntimeMethod_var);
				__this->___U3CU3Es__6_10 = L_21;
				int64_t L_22 = (int64_t)__this->___U3CU3Es__5_9;
				int64_t L_23 = (int64_t)__this->___U3CU3Es__6_10;
				__this->___U3CsumU3E5__1_5 = ((int64_t)il2cpp_codegen_add(L_22, L_23));
			}

IL_00fb_2:
			{
				RuntimeObject* L_24 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_24);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_25;
				L_25 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_24);
				V_7 = L_25;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_26;
				L_26 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_6 = L_26;
				bool L_27;
				L_27 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_6), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_0160_2;
				}
			}
			{
				int32_t L_28 = 1;
				V_0 = L_28;
				__this->___U3CU3E1__state_0 = L_28;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29 = V_6;
				__this->___U3CU3Eu__2_13 = L_29;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_13))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_30 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSumAwaitAsyncU3Ed__6_1_tFD7597B21E6A2D0D272827AD3E4561A5CD38F6F8**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_30, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0288;
			}

IL_0143_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_13;
				V_6 = L_31;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_32 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_13);
				il2cpp_codegen_initobj(L_32, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_33 = (-1);
				V_0 = L_33;
				__this->___U3CU3E1__state_0 = L_33;
			}

IL_0160_2:
			{
				bool L_34;
				L_34 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_34;
				bool L_35 = (bool)__this->___U3CU3Es__7_11;
				V_5 = L_35;
				bool L_36 = V_5;
				if (L_36)
				{
					goto IL_0061_2;
				}
			}
			{
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
			RuntimeObject* L_37 = V_8;
			__this->___U3CU3Es__3_7 = L_37;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_37);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_018b_1;
		}

IL_018b_1:
		{
			RuntimeObject* L_38 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_38) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_39 = V_9;
			if (!L_39)
			{
				goto IL_020a_1;
			}
		}
		{
			RuntimeObject* L_40 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
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
				goto IL_0201_1;
			}
		}
		{
			int32_t L_44 = 2;
			V_0 = L_44;
			__this->___U3CU3E1__state_0 = L_44;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_45 = V_10;
			__this->___U3CU3Eu__3_14 = L_45;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_14))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_46 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSumAwaitAsyncU3Ed__6_1_tFD7597B21E6A2D0D272827AD3E4561A5CD38F6F8**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_46, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0288;
		}

IL_01e4_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_14;
			V_10 = L_47;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_48 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_14);
			il2cpp_codegen_initobj(L_48, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_49 = (-1);
			V_0 = L_49;
			__this->___U3CU3E1__state_0 = L_49;
		}

IL_0201_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_020a_1:
		{
			RuntimeObject* L_50 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_8 = L_50;
			RuntimeObject* L_51 = V_8;
			if (!L_51)
			{
				goto IL_0234_1;
			}
		}
		{
			RuntimeObject* L_52 = V_8;
			V_12 = ((Exception_t*)IsInstClass((RuntimeObject*)L_52, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_53 = V_12;
			if (L_53)
			{
				goto IL_0227_1;
			}
		}
		{
			RuntimeObject* L_54 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_54, method);
		}

IL_0227_1:
		{
			Exception_t* L_55 = V_12;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_56;
			L_56 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_55, NULL);
			NullCheck(L_56);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_56, NULL);
		}

IL_0234_1:
		{
			int32_t L_57 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			int64_t L_58 = (int64_t)__this->___U3CsumU3E5__1_5;
			V_1 = L_58;
			goto IL_026c;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_024b;
		}
		throw e;
	}

CATCH_024b:
	{
		V_12 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_59 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_60 = V_12;
		AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_inline(L_59, L_60, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0288;
	}

IL_026c:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_61 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder_1);
		int64_t L_62 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_inline(L_61, L_62, AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_RuntimeMethod_var);
	}

IL_0288:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitAsyncU3Ed__6_1_SetStateMachine_mCF0BAFA0DB6564E2E1F6E9CA770945CF28BB414F_gshared (U3CSumAwaitAsyncU3Ed__6_1_tFD7597B21E6A2D0D272827AD3E4561A5CD38F6F8* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitWithCancellationAsyncU3Ed__11_1__ctor_mDD34A3BEEFB5ACB454D48232714C694A9EF503F4_gshared (U3CSumAwaitWithCancellationAsyncU3Ed__11_1_t30362DB8F1ECD4EF87DEF287A08C47822BCDDF03* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitWithCancellationAsyncU3Ed__11_1_MoveNext_m067CDBBC7CD42AA2B5005A1602990E217E6D240B_gshared (U3CSumAwaitWithCancellationAsyncU3Ed__11_1_t30362DB8F1ECD4EF87DEF287A08C47822BCDDF03* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t693B008404906727DD0E7B7D4DD30E6C930B1EDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t693B008404906727DD0E7B7D4DD30E6C930B1EDB);
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CSumAwaitWithCancellationAsyncU3Ed__11_1_t30362DB8F1ECD4EF87DEF287A08C47822BCDDF03* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Exception_t* V_12 = NULL;
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
			goto IL_004b_1;
		}

IL_0015_1:
		{
			goto IL_01ed_1;
		}

IL_001a_1:
		{
			__this->___U3CsumU3E5__1_5 = (0.0f);
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__2_6 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)L_5);
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			__this->___U3CU3Es__4_8 = 0;
		}

IL_004b_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if (!L_6)
				{
					goto IL_0057_2;
				}
			}
			{
				goto IL_0051_2;
			}

IL_0051_2:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_0059_2;
				}
			}
			{
				goto IL_005e_2;
			}

IL_0057_2:
			{
				goto IL_00c7_2;
			}

IL_0059_2:
			{
				goto IL_014c_2;
			}

IL_005e_2:
			{
				goto IL_0104_2;
			}

IL_0064_2:
			{
				float L_8 = (float)__this->___U3CsumU3E5__1_5;
				__this->___U3CU3Es__5_9 = L_8;
				Func_3_t79F461272893123C05C047A343D70B9B775827E4* L_9 = (Func_3_t79F461272893123C05C047A343D70B9B775827E4*)__this->___selector_3;
				RuntimeObject* L_10 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
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
					goto IL_00e3_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state_0 = L_16;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_17 = V_2;
				__this->___U3CU3Eu__1_12 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_12))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_18 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*, U3CSumAwaitWithCancellationAsyncU3Ed__11_1_t30362DB8F1ECD4EF87DEF287A08C47822BCDDF03**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_18, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0291;
			}

IL_00c7_2:
			{
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_19 = (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D)__this->___U3CU3Eu__1_12;
				V_2 = L_19;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* L_20 = (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*)(&__this->___U3CU3Eu__1_12);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state_0 = L_21;
			}

IL_00e3_2:
			{
				float L_22;
				L_22 = Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_inline((&V_2), Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_RuntimeMethod_var);
				__this->___U3CU3Es__6_10 = L_22;
				float L_23 = (float)__this->___U3CU3Es__5_9;
				float L_24 = (float)__this->___U3CU3Es__6_10;
				__this->___U3CsumU3E5__1_5 = ((float)il2cpp_codegen_add(L_23, L_24));
			}

IL_0104_2:
			{
				RuntimeObject* L_25 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_25);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_26;
				L_26 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_25);
				V_7 = L_26;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_27;
				L_27 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_6 = L_27;
				bool L_28;
				L_28 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_6), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_28)
				{
					goto IL_0169_2;
				}
			}
			{
				int32_t L_29 = 1;
				V_0 = L_29;
				__this->___U3CU3E1__state_0 = L_29;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_30 = V_6;
				__this->___U3CU3Eu__2_13 = L_30;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_13))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_31 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSumAwaitWithCancellationAsyncU3Ed__11_1_t30362DB8F1ECD4EF87DEF287A08C47822BCDDF03**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_31, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0291;
			}

IL_014c_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_32 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_13;
				V_6 = L_32;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_33 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_13);
				il2cpp_codegen_initobj(L_33, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_34 = (-1);
				V_0 = L_34;
				__this->___U3CU3E1__state_0 = L_34;
			}

IL_0169_2:
			{
				bool L_35;
				L_35 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_35;
				bool L_36 = (bool)__this->___U3CU3Es__7_11;
				V_5 = L_36;
				bool L_37 = V_5;
				if (L_37)
				{
					goto IL_0064_2;
				}
			}
			{
				goto IL_0194_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0188_1;
			}
			throw e;
		}

CATCH_0188_1:
		{
			V_8 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_38 = V_8;
			__this->___U3CU3Es__3_7 = L_38;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_38);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0194_1;
		}

IL_0194_1:
		{
			RuntimeObject* L_39 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_39) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_40 = V_9;
			if (!L_40)
			{
				goto IL_0213_1;
			}
		}
		{
			RuntimeObject* L_41 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_41);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_42;
			L_42 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
			V_11 = L_42;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_43;
			L_43 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_11), NULL);
			V_10 = L_43;
			bool L_44;
			L_44 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_44)
			{
				goto IL_020a_1;
			}
		}
		{
			int32_t L_45 = 2;
			V_0 = L_45;
			__this->___U3CU3E1__state_0 = L_45;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_46 = V_10;
			__this->___U3CU3Eu__3_14 = L_46;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_14))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_47 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSumAwaitWithCancellationAsyncU3Ed__11_1_t30362DB8F1ECD4EF87DEF287A08C47822BCDDF03**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_47, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0291;
		}

IL_01ed_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_48 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_14;
			V_10 = L_48;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_49 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_14);
			il2cpp_codegen_initobj(L_49, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_50 = (-1);
			V_0 = L_50;
			__this->___U3CU3E1__state_0 = L_50;
		}

IL_020a_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_0213_1:
		{
			RuntimeObject* L_51 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_8 = L_51;
			RuntimeObject* L_52 = V_8;
			if (!L_52)
			{
				goto IL_023d_1;
			}
		}
		{
			RuntimeObject* L_53 = V_8;
			V_12 = ((Exception_t*)IsInstClass((RuntimeObject*)L_53, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_54 = V_12;
			if (L_54)
			{
				goto IL_0230_1;
			}
		}
		{
			RuntimeObject* L_55 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_55, method);
		}

IL_0230_1:
		{
			Exception_t* L_56 = V_12;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_57;
			L_57 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_56, NULL);
			NullCheck(L_57);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_57, NULL);
		}

IL_023d_1:
		{
			int32_t L_58 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			float L_59 = (float)__this->___U3CsumU3E5__1_5;
			V_1 = L_59;
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
		V_12 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_60 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_61 = V_12;
		AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_inline(L_60, L_61, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0291;
	}

IL_0275:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_62 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
		float L_63 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_inline(L_62, L_63, AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_RuntimeMethod_var);
	}

IL_0291:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitWithCancellationAsyncU3Ed__11_1_SetStateMachine_mF9EB801D1D705521D26ABDC234A108B62DD1957F_gshared (U3CSumAwaitWithCancellationAsyncU3Ed__11_1_t30362DB8F1ECD4EF87DEF287A08C47822BCDDF03* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitWithCancellationAsyncU3Ed__15_1__ctor_mB427EE3D11D3FC0DEECBDBBBC310BAD81416DEA7_gshared (U3CSumAwaitWithCancellationAsyncU3Ed__15_1_tD4CD9C1B12F3430337DF9DD04607F4CCE6F4EEBE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitWithCancellationAsyncU3Ed__15_1_MoveNext_mAC46B1FB85AC64E9A729904BCB0068137FB0E1CD_gshared (U3CSumAwaitWithCancellationAsyncU3Ed__15_1_tD4CD9C1B12F3430337DF9DD04607F4CCE6F4EEBE* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t92DE38E1F99BC3720D4DAE5F27C473CEEF58607E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t92DE38E1F99BC3720D4DAE5F27C473CEEF58607E);
	int32_t V_0 = 0;
	double V_1 = 0.0;
	Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CSumAwaitWithCancellationAsyncU3Ed__15_1_tD4CD9C1B12F3430337DF9DD04607F4CCE6F4EEBE* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Exception_t* V_12 = NULL;
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
			goto IL_01f1_1;
		}

IL_001a_1:
		{
			__this->___U3CsumU3E5__1_5 = (0.0);
			RuntimeObject* L_3 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3CeU3E5__2_6 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)L_5);
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			__this->___U3CU3Es__4_8 = 0;
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
				goto IL_00cb_2;
			}

IL_005d_2:
			{
				goto IL_0150_2;
			}

IL_0062_2:
			{
				goto IL_0108_2;
			}

IL_0068_2:
			{
				double L_8 = (double)__this->___U3CsumU3E5__1_5;
				__this->___U3CU3Es__5_9 = L_8;
				Func_3_tB356387A25DA85D9F4DDAAEEFD39A96B3F81FA95* L_9 = (Func_3_tB356387A25DA85D9F4DDAAEEFD39A96B3F81FA95*)__this->___selector_3;
				RuntimeObject* L_10 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
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
					goto IL_00e7_2;
				}
			}
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->___U3CU3E1__state_0 = L_16;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_17 = V_2;
				__this->___U3CU3Eu__1_12 = L_17;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_12))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_18 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88*, U3CSumAwaitWithCancellationAsyncU3Ed__15_1_tD4CD9C1B12F3430337DF9DD04607F4CCE6F4EEBE**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_18, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0295;
			}

IL_00cb_2:
			{
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_19 = (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88)__this->___U3CU3Eu__1_12;
				V_2 = L_19;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* L_20 = (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88*)(&__this->___U3CU3Eu__1_12);
				il2cpp_codegen_initobj(L_20, sizeof(Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->___U3CU3E1__state_0 = L_21;
			}

IL_00e7_2:
			{
				double L_22;
				L_22 = Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_inline((&V_2), Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_RuntimeMethod_var);
				__this->___U3CU3Es__6_10 = L_22;
				double L_23 = (double)__this->___U3CU3Es__5_9;
				double L_24 = (double)__this->___U3CU3Es__6_10;
				__this->___U3CsumU3E5__1_5 = ((double)il2cpp_codegen_add(L_23, L_24));
			}

IL_0108_2:
			{
				RuntimeObject* L_25 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_25);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_26;
				L_26 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_25);
				V_7 = L_26;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_27;
				L_27 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_6 = L_27;
				bool L_28;
				L_28 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_6), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_28)
				{
					goto IL_016d_2;
				}
			}
			{
				int32_t L_29 = 1;
				V_0 = L_29;
				__this->___U3CU3E1__state_0 = L_29;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_30 = V_6;
				__this->___U3CU3Eu__2_13 = L_30;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_13))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_31 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSumAwaitWithCancellationAsyncU3Ed__15_1_tD4CD9C1B12F3430337DF9DD04607F4CCE6F4EEBE**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_31, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0295;
			}

IL_0150_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_32 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_13;
				V_6 = L_32;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_33 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_13);
				il2cpp_codegen_initobj(L_33, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_34 = (-1);
				V_0 = L_34;
				__this->___U3CU3E1__state_0 = L_34;
			}

IL_016d_2:
			{
				bool L_35;
				L_35 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_35;
				bool L_36 = (bool)__this->___U3CU3Es__7_11;
				V_5 = L_36;
				bool L_37 = V_5;
				if (L_37)
				{
					goto IL_0068_2;
				}
			}
			{
				goto IL_0198_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_018c_1;
			}
			throw e;
		}

CATCH_018c_1:
		{
			V_8 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_38 = V_8;
			__this->___U3CU3Es__3_7 = L_38;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_38);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0198_1;
		}

IL_0198_1:
		{
			RuntimeObject* L_39 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_39) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_40 = V_9;
			if (!L_40)
			{
				goto IL_0217_1;
			}
		}
		{
			RuntimeObject* L_41 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_41);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_42;
			L_42 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
			V_11 = L_42;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_43;
			L_43 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_11), NULL);
			V_10 = L_43;
			bool L_44;
			L_44 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_44)
			{
				goto IL_020e_1;
			}
		}
		{
			int32_t L_45 = 2;
			V_0 = L_45;
			__this->___U3CU3E1__state_0 = L_45;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_46 = V_10;
			__this->___U3CU3Eu__3_14 = L_46;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_14))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_47 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSumAwaitWithCancellationAsyncU3Ed__15_1_tD4CD9C1B12F3430337DF9DD04607F4CCE6F4EEBE**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_47, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0295;
		}

IL_01f1_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_48 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_14;
			V_10 = L_48;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_49 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_14);
			il2cpp_codegen_initobj(L_49, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_50 = (-1);
			V_0 = L_50;
			__this->___U3CU3E1__state_0 = L_50;
		}

IL_020e_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_0217_1:
		{
			RuntimeObject* L_51 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_8 = L_51;
			RuntimeObject* L_52 = V_8;
			if (!L_52)
			{
				goto IL_0241_1;
			}
		}
		{
			RuntimeObject* L_53 = V_8;
			V_12 = ((Exception_t*)IsInstClass((RuntimeObject*)L_53, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_54 = V_12;
			if (L_54)
			{
				goto IL_0234_1;
			}
		}
		{
			RuntimeObject* L_55 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_55, method);
		}

IL_0234_1:
		{
			Exception_t* L_56 = V_12;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_57;
			L_57 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_56, NULL);
			NullCheck(L_57);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_57, NULL);
		}

IL_0241_1:
		{
			int32_t L_58 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			double L_59 = (double)__this->___U3CsumU3E5__1_5;
			V_1 = L_59;
			goto IL_0279;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0258;
		}
		throw e;
	}

CATCH_0258:
	{
		V_12 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_60 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_61 = V_12;
		AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_inline(L_60, L_61, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0295;
	}

IL_0279:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_62 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
		double L_63 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_inline(L_62, L_63, AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
	}

IL_0295:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitWithCancellationAsyncU3Ed__15_1_SetStateMachine_mE8C8DAA1419926B288D70E363F4D5EA12ACAA231_gshared (U3CSumAwaitWithCancellationAsyncU3Ed__15_1_tD4CD9C1B12F3430337DF9DD04607F4CCE6F4EEBE* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitWithCancellationAsyncU3Ed__19_1__ctor_m888C6D7068FD5C55E435D9564D4AE9791E0AFBF0_gshared (U3CSumAwaitWithCancellationAsyncU3Ed__19_1_tE07DB630BAD8C23C81D68718CC01F510B600F4C7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitWithCancellationAsyncU3Ed__19_1_MoveNext_m46A14A81C68707C72CF45D1C41D3BD27ED6C0F81_gshared (U3CSumAwaitWithCancellationAsyncU3Ed__19_1_tE07DB630BAD8C23C81D68718CC01F510B600F4C7* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_tC7DD79A7A281A33121FCF700D8C11BA9661F718A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_tC7DD79A7A281A33121FCF700D8C11BA9661F718A);
	int32_t V_0 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CSumAwaitWithCancellationAsyncU3Ed__19_1_tE07DB630BAD8C23C81D68718CC01F510B600F4C7* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Exception_t* V_12 = NULL;
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
			goto IL_004c_1;
		}

IL_0015_1:
		{
			goto IL_01f2_1;
		}

IL_001a_1:
		{
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* L_3 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)(&__this->___U3CsumU3E5__1_5);
			il2cpp_codegen_initobj(L_3, sizeof(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F));
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__2_6 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)L_6);
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			__this->___U3CU3Es__4_8 = 0;
		}

IL_004c_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0058_2;
				}
			}
			{
				goto IL_0052_2;
			}

IL_0052_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_005a_2;
				}
			}
			{
				goto IL_005f_2;
			}

IL_0058_2:
			{
				goto IL_00c8_2;
			}

IL_005a_2:
			{
				goto IL_0151_2;
			}

IL_005f_2:
			{
				goto IL_0109_2;
			}

IL_0065_2:
			{
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_9 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)__this->___U3CsumU3E5__1_5;
				__this->___U3CU3Es__5_9 = L_9;
				Func_3_tE135AFB66CDB73C25CDE9CDD97913EE0CF6337D7* L_10 = (Func_3_tE135AFB66CDB73C25CDE9CDD97913EE0CF6337D7*)__this->___selector_3;
				RuntimeObject* L_11 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
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
					goto IL_00e4_2;
				}
			}
			{
				int32_t L_17 = 0;
				V_0 = L_17;
				__this->___U3CU3E1__state_0 = L_17;
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_18 = V_2;
				__this->___U3CU3Eu__1_12 = L_18;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_12))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_19 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8*, U3CSumAwaitWithCancellationAsyncU3Ed__19_1_tE07DB630BAD8C23C81D68718CC01F510B600F4C7**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_19, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0296;
			}

IL_00c8_2:
			{
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_20 = (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8)__this->___U3CU3Eu__1_12;
				V_2 = L_20;
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* L_21 = (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8*)(&__this->___U3CU3Eu__1_12);
				il2cpp_codegen_initobj(L_21, sizeof(Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8));
				int32_t L_22 = (-1);
				V_0 = L_22;
				__this->___U3CU3E1__state_0 = L_22;
			}

IL_00e4_2:
			{
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_23;
				L_23 = Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_inline((&V_2), Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_RuntimeMethod_var);
				__this->___U3CU3Es__6_10 = L_23;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_24 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)__this->___U3CU3Es__5_9;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_25 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)__this->___U3CU3Es__6_10;
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_26;
				L_26 = Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7(L_24, L_25, NULL);
				__this->___U3CsumU3E5__1_5 = L_26;
			}

IL_0109_2:
			{
				RuntimeObject* L_27 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_27);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_28;
				L_28 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_27);
				V_7 = L_28;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29;
				L_29 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_6 = L_29;
				bool L_30;
				L_30 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_6), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_30)
				{
					goto IL_016e_2;
				}
			}
			{
				int32_t L_31 = 1;
				V_0 = L_31;
				__this->___U3CU3E1__state_0 = L_31;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_32 = V_6;
				__this->___U3CU3Eu__2_13 = L_32;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_13))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_33 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSumAwaitWithCancellationAsyncU3Ed__19_1_tE07DB630BAD8C23C81D68718CC01F510B600F4C7**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_33, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0296;
			}

IL_0151_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_13;
				V_6 = L_34;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_35 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_13);
				il2cpp_codegen_initobj(L_35, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_36 = (-1);
				V_0 = L_36;
				__this->___U3CU3E1__state_0 = L_36;
			}

IL_016e_2:
			{
				bool L_37;
				L_37 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_37;
				bool L_38 = (bool)__this->___U3CU3Es__7_11;
				V_5 = L_38;
				bool L_39 = V_5;
				if (L_39)
				{
					goto IL_0065_2;
				}
			}
			{
				goto IL_0199_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_018d_1;
			}
			throw e;
		}

CATCH_018d_1:
		{
			V_8 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_40 = V_8;
			__this->___U3CU3Es__3_7 = L_40;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_40);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0199_1;
		}

IL_0199_1:
		{
			RuntimeObject* L_41 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_41) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_42 = V_9;
			if (!L_42)
			{
				goto IL_0218_1;
			}
		}
		{
			RuntimeObject* L_43 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_43);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_44;
			L_44 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_43);
			V_11 = L_44;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_45;
			L_45 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_11), NULL);
			V_10 = L_45;
			bool L_46;
			L_46 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_46)
			{
				goto IL_020f_1;
			}
		}
		{
			int32_t L_47 = 2;
			V_0 = L_47;
			__this->___U3CU3E1__state_0 = L_47;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_48 = V_10;
			__this->___U3CU3Eu__3_14 = L_48;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_14))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_49 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSumAwaitWithCancellationAsyncU3Ed__19_1_tE07DB630BAD8C23C81D68718CC01F510B600F4C7**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_49, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0296;
		}

IL_01f2_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_14;
			V_10 = L_50;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_51 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_14);
			il2cpp_codegen_initobj(L_51, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_52 = (-1);
			V_0 = L_52;
			__this->___U3CU3E1__state_0 = L_52;
		}

IL_020f_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_0218_1:
		{
			RuntimeObject* L_53 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_8 = L_53;
			RuntimeObject* L_54 = V_8;
			if (!L_54)
			{
				goto IL_0242_1;
			}
		}
		{
			RuntimeObject* L_55 = V_8;
			V_12 = ((Exception_t*)IsInstClass((RuntimeObject*)L_55, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_56 = V_12;
			if (L_56)
			{
				goto IL_0235_1;
			}
		}
		{
			RuntimeObject* L_57 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_57, method);
		}

IL_0235_1:
		{
			Exception_t* L_58 = V_12;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_59;
			L_59 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_58, NULL);
			NullCheck(L_59);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_59, NULL);
		}

IL_0242_1:
		{
			int32_t L_60 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_61 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)__this->___U3CsumU3E5__1_5;
			V_1 = L_61;
			goto IL_027a;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0259;
		}
		throw e;
	}

CATCH_0259:
	{
		V_12 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_62 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_63 = V_12;
		AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_inline(L_62, L_63, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0296;
	}

IL_027a:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_64 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_65 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_inline(L_64, L_65, AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_RuntimeMethod_var);
	}

IL_0296:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitWithCancellationAsyncU3Ed__19_1_SetStateMachine_mB91241960576FC07DF8D39F109EC0390B8032185_gshared (U3CSumAwaitWithCancellationAsyncU3Ed__19_1_tE07DB630BAD8C23C81D68718CC01F510B600F4C7* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitWithCancellationAsyncU3Ed__23_1__ctor_mE60C0690A3720F112C83ED1B9E660F04B1AE7532_gshared (U3CSumAwaitWithCancellationAsyncU3Ed__23_1_t3E1C181CD17E952043027C5FC752AC8458B7017A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitWithCancellationAsyncU3Ed__23_1_MoveNext_m70B170C905717830F2887C382EEAF2E4256132AA_gshared (U3CSumAwaitWithCancellationAsyncU3Ed__23_1_t3E1C181CD17E952043027C5FC752AC8458B7017A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t8075D846953E3BD192424B368EBD0D917425F033 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_t8075D846953E3BD192424B368EBD0D917425F033);
	int32_t V_0 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CSumAwaitWithCancellationAsyncU3Ed__23_1_t3E1C181CD17E952043027C5FC752AC8458B7017A* V_4 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_5;
	memset((&V_5), 0, sizeof(V_5));
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
	U3CSumAwaitWithCancellationAsyncU3Ed__23_1_t3E1C181CD17E952043027C5FC752AC8458B7017A* G_B21_0 = NULL;
	U3CSumAwaitWithCancellationAsyncU3Ed__23_1_t3E1C181CD17E952043027C5FC752AC8458B7017A* G_B20_0 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B22_0;
	memset((&G_B22_0), 0, sizeof(G_B22_0));
	U3CSumAwaitWithCancellationAsyncU3Ed__23_1_t3E1C181CD17E952043027C5FC752AC8458B7017A* G_B22_1 = NULL;
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
			goto IL_004c_1;
		}

IL_0015_1:
		{
			goto IL_023a_1;
		}

IL_001a_1:
		{
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_3 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CsumU3E5__1_5);
			il2cpp_codegen_initobj(L_3, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__2_6 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)L_6);
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			__this->___U3CU3Es__4_8 = 0;
		}

IL_004c_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0058_2;
				}
			}
			{
				goto IL_0052_2;
			}

IL_0052_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_005a_2;
				}
			}
			{
				goto IL_005f_2;
			}

IL_0058_2:
			{
				goto IL_00c8_2;
			}

IL_005a_2:
			{
				goto IL_0199_2;
			}

IL_005f_2:
			{
				goto IL_0151_2;
			}

IL_0065_2:
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_9 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28)__this->___U3CsumU3E5__1_5;
				__this->___U3CU3Es__6_10 = L_9;
				Func_3_tA0DEFAEF785E5E0D32E2CABA4CBDB7F9D34C2B8D* L_10 = (Func_3_tA0DEFAEF785E5E0D32E2CABA4CBDB7F9D34C2B8D*)__this->___selector_3;
				RuntimeObject* L_11 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_11);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_11, (Il2CppFullySharedGenericAny*)L_12);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_13 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_10);
				UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05 L_14;
				L_14 = InvokerFuncInvoker2< UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_12: *(void**)L_12), L_13);
				V_3 = L_14;
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_15;
				L_15 = UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_inline((&V_3), UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_RuntimeMethod_var);
				V_2 = L_15;
				bool L_16;
				L_16 = Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_inline((&V_2), Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_00e4_2;
				}
			}
			{
				int32_t L_17 = 0;
				V_0 = L_17;
				__this->___U3CU3E1__state_0 = L_17;
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_18 = V_2;
				__this->___U3CU3Eu__1_13 = L_18;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_19 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*, Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9*, U3CSumAwaitWithCancellationAsyncU3Ed__23_1_t3E1C181CD17E952043027C5FC752AC8458B7017A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_19, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_02de;
			}

IL_00c8_2:
			{
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_20 = (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9)__this->___U3CU3Eu__1_13;
				V_2 = L_20;
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* L_21 = (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9*)(&__this->___U3CU3Eu__1_13);
				il2cpp_codegen_initobj(L_21, sizeof(Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9));
				int32_t L_22 = (-1);
				V_0 = L_22;
				__this->___U3CU3E1__state_0 = L_22;
			}

IL_00e4_2:
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_23;
				L_23 = Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_inline((&V_2), Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_RuntimeMethod_var);
				__this->___U3CU3Es__5_9 = L_23;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_24 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CU3Es__5_9);
				int32_t L_25;
				L_25 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline(L_24, Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_25;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_26 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CU3Es__6_10);
				bool L_27;
				L_27 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_26, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				if (L_27)
				{
					G_B21_0 = __this;
					goto IL_011c_2;
				}
				G_B20_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_28 = V_5;
				G_B22_0 = L_28;
				G_B22_1 = G_B20_0;
				goto IL_0133_2;
			}

IL_011c_2:
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_29 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CU3Es__6_10);
				int32_t L_30;
				L_30 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline(L_29, Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
				int32_t L_31 = (int32_t)__this->___U3CU3Es__7_11;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_32;
				memset((&L_32), 0, sizeof(L_32));
				Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_32), ((int32_t)il2cpp_codegen_add(L_30, L_31)), Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
				G_B22_0 = L_32;
				G_B22_1 = G_B21_0;
			}

IL_0133_2:
			{
				NullCheck(G_B22_1);
				G_B22_1->___U3CsumU3E5__1_5 = G_B22_0;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_33 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CU3Es__5_9);
				il2cpp_codegen_initobj(L_33, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_34 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CU3Es__6_10);
				il2cpp_codegen_initobj(L_34, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
			}

IL_0151_2:
			{
				RuntimeObject* L_35 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_35);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_36;
				L_36 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_35);
				V_8 = L_36;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_37;
				L_37 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_37;
				bool L_38;
				L_38 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_38)
				{
					goto IL_01b6_2;
				}
			}
			{
				int32_t L_39 = 1;
				V_0 = L_39;
				__this->___U3CU3E1__state_0 = L_39;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_40 = V_7;
				__this->___U3CU3Eu__2_14 = L_40;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_41 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSumAwaitWithCancellationAsyncU3Ed__23_1_t3E1C181CD17E952043027C5FC752AC8458B7017A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_41, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_02de;
			}

IL_0199_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_42 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_14;
				V_7 = L_42;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_43 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_14);
				il2cpp_codegen_initobj(L_43, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_44 = (-1);
				V_0 = L_44;
				__this->___U3CU3E1__state_0 = L_44;
			}

IL_01b6_2:
			{
				bool L_45;
				L_45 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_45;
				bool L_46 = (bool)__this->___U3CU3Es__8_12;
				V_6 = L_46;
				bool L_47 = V_6;
				if (L_47)
				{
					goto IL_0065_2;
				}
			}
			{
				goto IL_01e1_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01d5_1;
			}
			throw e;
		}

CATCH_01d5_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_48 = V_9;
			__this->___U3CU3Es__3_7 = L_48;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_48);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01e1_1;
		}

IL_01e1_1:
		{
			RuntimeObject* L_49 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_49) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_50 = V_10;
			if (!L_50)
			{
				goto IL_0260_1;
			}
		}
		{
			RuntimeObject* L_51 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_51);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_52;
			L_52 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_51);
			V_12 = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_53;
			L_53 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_53;
			bool L_54;
			L_54 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_54)
			{
				goto IL_0257_1;
			}
		}
		{
			int32_t L_55 = 2;
			V_0 = L_55;
			__this->___U3CU3E1__state_0 = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_56 = V_11;
			__this->___U3CU3Eu__3_15 = L_56;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_15))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_57 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSumAwaitWithCancellationAsyncU3Ed__23_1_t3E1C181CD17E952043027C5FC752AC8458B7017A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_57, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_02de;
		}

IL_023a_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_58 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_15;
			V_11 = L_58;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_59 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_15);
			il2cpp_codegen_initobj(L_59, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_60 = (-1);
			V_0 = L_60;
			__this->___U3CU3E1__state_0 = L_60;
		}

IL_0257_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_0260_1:
		{
			RuntimeObject* L_61 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_9 = L_61;
			RuntimeObject* L_62 = V_9;
			if (!L_62)
			{
				goto IL_028a_1;
			}
		}
		{
			RuntimeObject* L_63 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_63, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_64 = V_13;
			if (L_64)
			{
				goto IL_027d_1;
			}
		}
		{
			RuntimeObject* L_65 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_65, method);
		}

IL_027d_1:
		{
			Exception_t* L_66 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_67;
			L_67 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_66, NULL);
			NullCheck(L_67);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_67, NULL);
		}

IL_028a_1:
		{
			int32_t L_68 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_69 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28)__this->___U3CsumU3E5__1_5;
			V_1 = L_69;
			goto IL_02c2;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02a1;
		}
		throw e;
	}

CATCH_02a1:
	{
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_70 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_71 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_mE8C5BA18D2449D6BD546630CE70DE315F5F91FCE_inline(L_70, L_71, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mE8C5BA18D2449D6BD546630CE70DE315F5F91FCE_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02de;
	}

IL_02c2:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_72 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_73 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_inline(L_72, L_73, AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_RuntimeMethod_var);
	}

IL_02de:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitWithCancellationAsyncU3Ed__23_1_SetStateMachine_mA99AE43A9D16B3397F309AB797AE5908F689DA98_gshared (U3CSumAwaitWithCancellationAsyncU3Ed__23_1_t3E1C181CD17E952043027C5FC752AC8458B7017A* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitWithCancellationAsyncU3Ed__27_1__ctor_m4375F60E752200DF404E7E67AEDE09546306C79E_gshared (U3CSumAwaitWithCancellationAsyncU3Ed__27_1_t1A8CF8D93698BBDBD2A2BA1334B37FC52923116B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitWithCancellationAsyncU3Ed__27_1_MoveNext_m639895A8B36DBE6976AEFEDC5B0FC8E9B26D0804_gshared (U3CSumAwaitWithCancellationAsyncU3Ed__27_1_t1A8CF8D93698BBDBD2A2BA1334B37FC52923116B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tBDDC855A1119E71ACFF716FDD2B92E223F789471 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_tBDDC855A1119E71ACFF716FDD2B92E223F789471);
	int32_t V_0 = 0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CSumAwaitWithCancellationAsyncU3Ed__27_1_t1A8CF8D93698BBDBD2A2BA1334B37FC52923116B* V_4 = NULL;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_5;
	memset((&V_5), 0, sizeof(V_5));
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
	U3CSumAwaitWithCancellationAsyncU3Ed__27_1_t1A8CF8D93698BBDBD2A2BA1334B37FC52923116B* G_B21_0 = NULL;
	U3CSumAwaitWithCancellationAsyncU3Ed__27_1_t1A8CF8D93698BBDBD2A2BA1334B37FC52923116B* G_B20_0 = NULL;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 G_B22_0;
	memset((&G_B22_0), 0, sizeof(G_B22_0));
	U3CSumAwaitWithCancellationAsyncU3Ed__27_1_t1A8CF8D93698BBDBD2A2BA1334B37FC52923116B* G_B22_1 = NULL;
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
			goto IL_004c_1;
		}

IL_0015_1:
		{
			goto IL_023a_1;
		}

IL_001a_1:
		{
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_3 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CsumU3E5__1_5);
			il2cpp_codegen_initobj(L_3, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__2_6 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)L_6);
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			__this->___U3CU3Es__4_8 = 0;
		}

IL_004c_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0058_2;
				}
			}
			{
				goto IL_0052_2;
			}

IL_0052_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_005a_2;
				}
			}
			{
				goto IL_005f_2;
			}

IL_0058_2:
			{
				goto IL_00c8_2;
			}

IL_005a_2:
			{
				goto IL_0199_2;
			}

IL_005f_2:
			{
				goto IL_0151_2;
			}

IL_0065_2:
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_9 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17)__this->___U3CsumU3E5__1_5;
				__this->___U3CU3Es__6_10 = L_9;
				Func_3_t4111B7EAAEBCF4004223B4E554711FE862E5C3B2* L_10 = (Func_3_t4111B7EAAEBCF4004223B4E554711FE862E5C3B2*)__this->___selector_3;
				RuntimeObject* L_11 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_11);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_11, (Il2CppFullySharedGenericAny*)L_12);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_13 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_10);
				UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C L_14;
				L_14 = InvokerFuncInvoker2< UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_12: *(void**)L_12), L_13);
				V_3 = L_14;
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_15;
				L_15 = UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_inline((&V_3), UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_RuntimeMethod_var);
				V_2 = L_15;
				bool L_16;
				L_16 = Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_inline((&V_2), Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_00e4_2;
				}
			}
			{
				int32_t L_17 = 0;
				V_0 = L_17;
				__this->___U3CU3E1__state_0 = L_17;
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_18 = V_2;
				__this->___U3CU3Eu__1_13 = L_18;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_19 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*, Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB*, U3CSumAwaitWithCancellationAsyncU3Ed__27_1_t1A8CF8D93698BBDBD2A2BA1334B37FC52923116B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_19, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_02de;
			}

IL_00c8_2:
			{
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_20 = (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB)__this->___U3CU3Eu__1_13;
				V_2 = L_20;
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* L_21 = (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB*)(&__this->___U3CU3Eu__1_13);
				il2cpp_codegen_initobj(L_21, sizeof(Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB));
				int32_t L_22 = (-1);
				V_0 = L_22;
				__this->___U3CU3E1__state_0 = L_22;
			}

IL_00e4_2:
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_23;
				L_23 = Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_inline((&V_2), Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_RuntimeMethod_var);
				__this->___U3CU3Es__5_9 = L_23;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_24 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CU3Es__5_9);
				int64_t L_25;
				L_25 = Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_inline(L_24, Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_25;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_26 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CU3Es__6_10);
				bool L_27;
				L_27 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline(L_26, Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
				if (L_27)
				{
					G_B21_0 = __this;
					goto IL_011c_2;
				}
				G_B20_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_28 = V_5;
				G_B22_0 = L_28;
				G_B22_1 = G_B20_0;
				goto IL_0133_2;
			}

IL_011c_2:
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_29 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CU3Es__6_10);
				int64_t L_30;
				L_30 = Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_inline(L_29, Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
				int64_t L_31 = (int64_t)__this->___U3CU3Es__7_11;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_32;
				memset((&L_32), 0, sizeof(L_32));
				Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_32), ((int64_t)il2cpp_codegen_add(L_30, L_31)), Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
				G_B22_0 = L_32;
				G_B22_1 = G_B21_0;
			}

IL_0133_2:
			{
				NullCheck(G_B22_1);
				G_B22_1->___U3CsumU3E5__1_5 = G_B22_0;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_33 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CU3Es__5_9);
				il2cpp_codegen_initobj(L_33, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_34 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CU3Es__6_10);
				il2cpp_codegen_initobj(L_34, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
			}

IL_0151_2:
			{
				RuntimeObject* L_35 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_35);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_36;
				L_36 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_35);
				V_8 = L_36;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_37;
				L_37 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_37;
				bool L_38;
				L_38 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_38)
				{
					goto IL_01b6_2;
				}
			}
			{
				int32_t L_39 = 1;
				V_0 = L_39;
				__this->___U3CU3E1__state_0 = L_39;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_40 = V_7;
				__this->___U3CU3Eu__2_14 = L_40;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_41 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSumAwaitWithCancellationAsyncU3Ed__27_1_t1A8CF8D93698BBDBD2A2BA1334B37FC52923116B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_41, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_02de;
			}

IL_0199_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_42 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_14;
				V_7 = L_42;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_43 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_14);
				il2cpp_codegen_initobj(L_43, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_44 = (-1);
				V_0 = L_44;
				__this->___U3CU3E1__state_0 = L_44;
			}

IL_01b6_2:
			{
				bool L_45;
				L_45 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_45;
				bool L_46 = (bool)__this->___U3CU3Es__8_12;
				V_6 = L_46;
				bool L_47 = V_6;
				if (L_47)
				{
					goto IL_0065_2;
				}
			}
			{
				goto IL_01e1_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01d5_1;
			}
			throw e;
		}

CATCH_01d5_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_48 = V_9;
			__this->___U3CU3Es__3_7 = L_48;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_48);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01e1_1;
		}

IL_01e1_1:
		{
			RuntimeObject* L_49 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_49) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_50 = V_10;
			if (!L_50)
			{
				goto IL_0260_1;
			}
		}
		{
			RuntimeObject* L_51 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_51);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_52;
			L_52 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_51);
			V_12 = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_53;
			L_53 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_53;
			bool L_54;
			L_54 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_54)
			{
				goto IL_0257_1;
			}
		}
		{
			int32_t L_55 = 2;
			V_0 = L_55;
			__this->___U3CU3E1__state_0 = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_56 = V_11;
			__this->___U3CU3Eu__3_15 = L_56;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_15))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_57 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSumAwaitWithCancellationAsyncU3Ed__27_1_t1A8CF8D93698BBDBD2A2BA1334B37FC52923116B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_57, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_02de;
		}

IL_023a_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_58 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_15;
			V_11 = L_58;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_59 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_15);
			il2cpp_codegen_initobj(L_59, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_60 = (-1);
			V_0 = L_60;
			__this->___U3CU3E1__state_0 = L_60;
		}

IL_0257_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_0260_1:
		{
			RuntimeObject* L_61 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_9 = L_61;
			RuntimeObject* L_62 = V_9;
			if (!L_62)
			{
				goto IL_028a_1;
			}
		}
		{
			RuntimeObject* L_63 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_63, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_64 = V_13;
			if (L_64)
			{
				goto IL_027d_1;
			}
		}
		{
			RuntimeObject* L_65 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_65, method);
		}

IL_027d_1:
		{
			Exception_t* L_66 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_67;
			L_67 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_66, NULL);
			NullCheck(L_67);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_67, NULL);
		}

IL_028a_1:
		{
			int32_t L_68 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_69 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17)__this->___U3CsumU3E5__1_5;
			V_1 = L_69;
			goto IL_02c2;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02a1;
		}
		throw e;
	}

CATCH_02a1:
	{
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_70 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_71 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_m668B0B683F2B4B7005D076DE9400F32B1702673B_inline(L_70, L_71, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m668B0B683F2B4B7005D076DE9400F32B1702673B_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02de;
	}

IL_02c2:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_72 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_73 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_inline(L_72, L_73, AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_RuntimeMethod_var);
	}

IL_02de:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitWithCancellationAsyncU3Ed__27_1_SetStateMachine_m470E85BB115ED1AE15B00EA4E647AF2E3964B97D_gshared (U3CSumAwaitWithCancellationAsyncU3Ed__27_1_t1A8CF8D93698BBDBD2A2BA1334B37FC52923116B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitWithCancellationAsyncU3Ed__31_1__ctor_m8F245460256152A12AC3BD98493170A023346F23_gshared (U3CSumAwaitWithCancellationAsyncU3Ed__31_1_tE2A17D1F168471DC9CB5CA03843155C58FA9E86E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitWithCancellationAsyncU3Ed__31_1_MoveNext_mD2648F1AE90033C94F958572852618E25297715E_gshared (U3CSumAwaitWithCancellationAsyncU3Ed__31_1_tE2A17D1F168471DC9CB5CA03843155C58FA9E86E* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t75E55124758C66ED3E9D6AB9F862925D6D1692BD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_t75E55124758C66ED3E9D6AB9F862925D6D1692BD);
	int32_t V_0 = 0;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CSumAwaitWithCancellationAsyncU3Ed__31_1_tE2A17D1F168471DC9CB5CA03843155C58FA9E86E* V_4 = NULL;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_5;
	memset((&V_5), 0, sizeof(V_5));
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
	U3CSumAwaitWithCancellationAsyncU3Ed__31_1_tE2A17D1F168471DC9CB5CA03843155C58FA9E86E* G_B21_0 = NULL;
	U3CSumAwaitWithCancellationAsyncU3Ed__31_1_tE2A17D1F168471DC9CB5CA03843155C58FA9E86E* G_B20_0 = NULL;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 G_B22_0;
	memset((&G_B22_0), 0, sizeof(G_B22_0));
	U3CSumAwaitWithCancellationAsyncU3Ed__31_1_tE2A17D1F168471DC9CB5CA03843155C58FA9E86E* G_B22_1 = NULL;
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
			goto IL_004c_1;
		}

IL_0015_1:
		{
			goto IL_023a_1;
		}

IL_001a_1:
		{
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_3 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CsumU3E5__1_5);
			il2cpp_codegen_initobj(L_3, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__2_6 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)L_6);
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			__this->___U3CU3Es__4_8 = 0;
		}

IL_004c_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0058_2;
				}
			}
			{
				goto IL_0052_2;
			}

IL_0052_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_005a_2;
				}
			}
			{
				goto IL_005f_2;
			}

IL_0058_2:
			{
				goto IL_00c8_2;
			}

IL_005a_2:
			{
				goto IL_0199_2;
			}

IL_005f_2:
			{
				goto IL_0151_2;
			}

IL_0065_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_9 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75)__this->___U3CsumU3E5__1_5;
				__this->___U3CU3Es__6_10 = L_9;
				Func_3_t5604379C942DED2B342DEED029BC1AB35C5A06A1* L_10 = (Func_3_t5604379C942DED2B342DEED029BC1AB35C5A06A1*)__this->___selector_3;
				RuntimeObject* L_11 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_11);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_11, (Il2CppFullySharedGenericAny*)L_12);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_13 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_10);
				UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46 L_14;
				L_14 = InvokerFuncInvoker2< UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_12: *(void**)L_12), L_13);
				V_3 = L_14;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_15;
				L_15 = UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_inline((&V_3), UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_RuntimeMethod_var);
				V_2 = L_15;
				bool L_16;
				L_16 = Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_inline((&V_2), Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_00e4_2;
				}
			}
			{
				int32_t L_17 = 0;
				V_0 = L_17;
				__this->___U3CU3E1__state_0 = L_17;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_18 = V_2;
				__this->___U3CU3Eu__1_13 = L_18;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_19 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*, U3CSumAwaitWithCancellationAsyncU3Ed__31_1_tE2A17D1F168471DC9CB5CA03843155C58FA9E86E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_19, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_02de;
			}

IL_00c8_2:
			{
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_20 = (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91)__this->___U3CU3Eu__1_13;
				V_2 = L_20;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* L_21 = (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*)(&__this->___U3CU3Eu__1_13);
				il2cpp_codegen_initobj(L_21, sizeof(Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91));
				int32_t L_22 = (-1);
				V_0 = L_22;
				__this->___U3CU3E1__state_0 = L_22;
			}

IL_00e4_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_23;
				L_23 = Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_inline((&V_2), Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_RuntimeMethod_var);
				__this->___U3CU3Es__5_9 = L_23;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_24 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CU3Es__5_9);
				float L_25;
				L_25 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline(L_24, Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_25;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_26 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CU3Es__6_10);
				bool L_27;
				L_27 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline(L_26, Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				if (L_27)
				{
					G_B21_0 = __this;
					goto IL_011c_2;
				}
				G_B20_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_28 = V_5;
				G_B22_0 = L_28;
				G_B22_1 = G_B20_0;
				goto IL_0133_2;
			}

IL_011c_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_29 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CU3Es__6_10);
				float L_30;
				L_30 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline(L_29, Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
				float L_31 = (float)__this->___U3CU3Es__7_11;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_32;
				memset((&L_32), 0, sizeof(L_32));
				Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_32), ((float)il2cpp_codegen_add(L_30, L_31)), Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
				G_B22_0 = L_32;
				G_B22_1 = G_B21_0;
			}

IL_0133_2:
			{
				NullCheck(G_B22_1);
				G_B22_1->___U3CsumU3E5__1_5 = G_B22_0;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_33 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CU3Es__5_9);
				il2cpp_codegen_initobj(L_33, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_34 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CU3Es__6_10);
				il2cpp_codegen_initobj(L_34, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
			}

IL_0151_2:
			{
				RuntimeObject* L_35 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_35);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_36;
				L_36 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_35);
				V_8 = L_36;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_37;
				L_37 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_37;
				bool L_38;
				L_38 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_38)
				{
					goto IL_01b6_2;
				}
			}
			{
				int32_t L_39 = 1;
				V_0 = L_39;
				__this->___U3CU3E1__state_0 = L_39;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_40 = V_7;
				__this->___U3CU3Eu__2_14 = L_40;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_41 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSumAwaitWithCancellationAsyncU3Ed__31_1_tE2A17D1F168471DC9CB5CA03843155C58FA9E86E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_41, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_02de;
			}

IL_0199_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_42 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_14;
				V_7 = L_42;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_43 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_14);
				il2cpp_codegen_initobj(L_43, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_44 = (-1);
				V_0 = L_44;
				__this->___U3CU3E1__state_0 = L_44;
			}

IL_01b6_2:
			{
				bool L_45;
				L_45 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_45;
				bool L_46 = (bool)__this->___U3CU3Es__8_12;
				V_6 = L_46;
				bool L_47 = V_6;
				if (L_47)
				{
					goto IL_0065_2;
				}
			}
			{
				goto IL_01e1_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01d5_1;
			}
			throw e;
		}

CATCH_01d5_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_48 = V_9;
			__this->___U3CU3Es__3_7 = L_48;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_48);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01e1_1;
		}

IL_01e1_1:
		{
			RuntimeObject* L_49 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_49) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_50 = V_10;
			if (!L_50)
			{
				goto IL_0260_1;
			}
		}
		{
			RuntimeObject* L_51 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_51);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_52;
			L_52 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_51);
			V_12 = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_53;
			L_53 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_53;
			bool L_54;
			L_54 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_54)
			{
				goto IL_0257_1;
			}
		}
		{
			int32_t L_55 = 2;
			V_0 = L_55;
			__this->___U3CU3E1__state_0 = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_56 = V_11;
			__this->___U3CU3Eu__3_15 = L_56;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_15))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_57 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSumAwaitWithCancellationAsyncU3Ed__31_1_tE2A17D1F168471DC9CB5CA03843155C58FA9E86E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_57, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_02de;
		}

IL_023a_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_58 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_15;
			V_11 = L_58;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_59 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_15);
			il2cpp_codegen_initobj(L_59, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_60 = (-1);
			V_0 = L_60;
			__this->___U3CU3E1__state_0 = L_60;
		}

IL_0257_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_0260_1:
		{
			RuntimeObject* L_61 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_9 = L_61;
			RuntimeObject* L_62 = V_9;
			if (!L_62)
			{
				goto IL_028a_1;
			}
		}
		{
			RuntimeObject* L_63 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_63, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_64 = V_13;
			if (L_64)
			{
				goto IL_027d_1;
			}
		}
		{
			RuntimeObject* L_65 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_65, method);
		}

IL_027d_1:
		{
			Exception_t* L_66 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_67;
			L_67 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_66, NULL);
			NullCheck(L_67);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_67, NULL);
		}

IL_028a_1:
		{
			int32_t L_68 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_69 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75)__this->___U3CsumU3E5__1_5;
			V_1 = L_69;
			goto IL_02c2;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02a1;
		}
		throw e;
	}

CATCH_02a1:
	{
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_70 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_71 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_inline(L_70, L_71, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02de;
	}

IL_02c2:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_72 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_73 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_inline(L_72, L_73, AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_RuntimeMethod_var);
	}

IL_02de:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitWithCancellationAsyncU3Ed__31_1_SetStateMachine_mDD1EFAD255E5FDC17F6F6FD069B53A44B9C656FC_gshared (U3CSumAwaitWithCancellationAsyncU3Ed__31_1_tE2A17D1F168471DC9CB5CA03843155C58FA9E86E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitWithCancellationAsyncU3Ed__35_1__ctor_m63F3FD5FAB32A9BE6FA2AAFA721595A4476B60FB_gshared (U3CSumAwaitWithCancellationAsyncU3Ed__35_1_t41BAC341849974918993DEF5FB9BA2C2D161D8BE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitWithCancellationAsyncU3Ed__35_1_MoveNext_mCDB97FBBB2DF15B89F7EA0378017AAD3D639AB1E_gshared (U3CSumAwaitWithCancellationAsyncU3Ed__35_1_t41BAC341849974918993DEF5FB9BA2C2D161D8BE* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tDE99E68C631BD7C919A23D1DC864C3DB4C723CAD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_tDE99E68C631BD7C919A23D1DC864C3DB4C723CAD);
	int32_t V_0 = 0;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CSumAwaitWithCancellationAsyncU3Ed__35_1_t41BAC341849974918993DEF5FB9BA2C2D161D8BE* V_4 = NULL;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_5;
	memset((&V_5), 0, sizeof(V_5));
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
	U3CSumAwaitWithCancellationAsyncU3Ed__35_1_t41BAC341849974918993DEF5FB9BA2C2D161D8BE* G_B21_0 = NULL;
	U3CSumAwaitWithCancellationAsyncU3Ed__35_1_t41BAC341849974918993DEF5FB9BA2C2D161D8BE* G_B20_0 = NULL;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 G_B22_0;
	memset((&G_B22_0), 0, sizeof(G_B22_0));
	U3CSumAwaitWithCancellationAsyncU3Ed__35_1_t41BAC341849974918993DEF5FB9BA2C2D161D8BE* G_B22_1 = NULL;
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
			goto IL_004c_1;
		}

IL_0015_1:
		{
			goto IL_023a_1;
		}

IL_001a_1:
		{
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_3 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CsumU3E5__1_5);
			il2cpp_codegen_initobj(L_3, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__2_6 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)L_6);
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			__this->___U3CU3Es__4_8 = 0;
		}

IL_004c_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0058_2;
				}
			}
			{
				goto IL_0052_2;
			}

IL_0052_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_005a_2;
				}
			}
			{
				goto IL_005f_2;
			}

IL_0058_2:
			{
				goto IL_00c8_2;
			}

IL_005a_2:
			{
				goto IL_0199_2;
			}

IL_005f_2:
			{
				goto IL_0151_2;
			}

IL_0065_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_9 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165)__this->___U3CsumU3E5__1_5;
				__this->___U3CU3Es__6_10 = L_9;
				Func_3_tD24255148664E4908FBCB566B787F36A4988A2BB* L_10 = (Func_3_tD24255148664E4908FBCB566B787F36A4988A2BB*)__this->___selector_3;
				RuntimeObject* L_11 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_11);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_11, (Il2CppFullySharedGenericAny*)L_12);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_13 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_10);
				UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E L_14;
				L_14 = InvokerFuncInvoker2< UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_12: *(void**)L_12), L_13);
				V_3 = L_14;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_15;
				L_15 = UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_inline((&V_3), UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_RuntimeMethod_var);
				V_2 = L_15;
				bool L_16;
				L_16 = Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_inline((&V_2), Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_00e4_2;
				}
			}
			{
				int32_t L_17 = 0;
				V_0 = L_17;
				__this->___U3CU3E1__state_0 = L_17;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_18 = V_2;
				__this->___U3CU3Eu__1_13 = L_18;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_19 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0*, U3CSumAwaitWithCancellationAsyncU3Ed__35_1_t41BAC341849974918993DEF5FB9BA2C2D161D8BE**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_19, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_02de;
			}

IL_00c8_2:
			{
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_20 = (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0)__this->___U3CU3Eu__1_13;
				V_2 = L_20;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* L_21 = (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0*)(&__this->___U3CU3Eu__1_13);
				il2cpp_codegen_initobj(L_21, sizeof(Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0));
				int32_t L_22 = (-1);
				V_0 = L_22;
				__this->___U3CU3E1__state_0 = L_22;
			}

IL_00e4_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_23;
				L_23 = Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_inline((&V_2), Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_RuntimeMethod_var);
				__this->___U3CU3Es__5_9 = L_23;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_24 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CU3Es__5_9);
				double L_25;
				L_25 = Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline(L_24, Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_25;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_26 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CU3Es__6_10);
				bool L_27;
				L_27 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline(L_26, Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				if (L_27)
				{
					G_B21_0 = __this;
					goto IL_011c_2;
				}
				G_B20_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_28 = V_5;
				G_B22_0 = L_28;
				G_B22_1 = G_B20_0;
				goto IL_0133_2;
			}

IL_011c_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_29 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CU3Es__6_10);
				double L_30;
				L_30 = Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline(L_29, Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
				double L_31 = (double)__this->___U3CU3Es__7_11;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_32;
				memset((&L_32), 0, sizeof(L_32));
				Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF((&L_32), ((double)il2cpp_codegen_add(L_30, L_31)), Nullable_1__ctor_mDE3158DD99CA7E1775A8BA276E428AF808AB8FBF_RuntimeMethod_var);
				G_B22_0 = L_32;
				G_B22_1 = G_B21_0;
			}

IL_0133_2:
			{
				NullCheck(G_B22_1);
				G_B22_1->___U3CsumU3E5__1_5 = G_B22_0;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_33 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CU3Es__5_9);
				il2cpp_codegen_initobj(L_33, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_34 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CU3Es__6_10);
				il2cpp_codegen_initobj(L_34, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
			}

IL_0151_2:
			{
				RuntimeObject* L_35 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_35);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_36;
				L_36 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_35);
				V_8 = L_36;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_37;
				L_37 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_37;
				bool L_38;
				L_38 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_38)
				{
					goto IL_01b6_2;
				}
			}
			{
				int32_t L_39 = 1;
				V_0 = L_39;
				__this->___U3CU3E1__state_0 = L_39;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_40 = V_7;
				__this->___U3CU3Eu__2_14 = L_40;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_41 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSumAwaitWithCancellationAsyncU3Ed__35_1_t41BAC341849974918993DEF5FB9BA2C2D161D8BE**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_41, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_02de;
			}

IL_0199_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_42 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_14;
				V_7 = L_42;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_43 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_14);
				il2cpp_codegen_initobj(L_43, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_44 = (-1);
				V_0 = L_44;
				__this->___U3CU3E1__state_0 = L_44;
			}

IL_01b6_2:
			{
				bool L_45;
				L_45 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_45;
				bool L_46 = (bool)__this->___U3CU3Es__8_12;
				V_6 = L_46;
				bool L_47 = V_6;
				if (L_47)
				{
					goto IL_0065_2;
				}
			}
			{
				goto IL_01e1_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01d5_1;
			}
			throw e;
		}

CATCH_01d5_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_48 = V_9;
			__this->___U3CU3Es__3_7 = L_48;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_48);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01e1_1;
		}

IL_01e1_1:
		{
			RuntimeObject* L_49 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_49) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_50 = V_10;
			if (!L_50)
			{
				goto IL_0260_1;
			}
		}
		{
			RuntimeObject* L_51 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_51);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_52;
			L_52 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_51);
			V_12 = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_53;
			L_53 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_53;
			bool L_54;
			L_54 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_54)
			{
				goto IL_0257_1;
			}
		}
		{
			int32_t L_55 = 2;
			V_0 = L_55;
			__this->___U3CU3E1__state_0 = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_56 = V_11;
			__this->___U3CU3Eu__3_15 = L_56;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_15))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_57 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSumAwaitWithCancellationAsyncU3Ed__35_1_t41BAC341849974918993DEF5FB9BA2C2D161D8BE**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_57, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_02de;
		}

IL_023a_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_58 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_15;
			V_11 = L_58;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_59 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_15);
			il2cpp_codegen_initobj(L_59, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_60 = (-1);
			V_0 = L_60;
			__this->___U3CU3E1__state_0 = L_60;
		}

IL_0257_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_0260_1:
		{
			RuntimeObject* L_61 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_9 = L_61;
			RuntimeObject* L_62 = V_9;
			if (!L_62)
			{
				goto IL_028a_1;
			}
		}
		{
			RuntimeObject* L_63 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_63, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_64 = V_13;
			if (L_64)
			{
				goto IL_027d_1;
			}
		}
		{
			RuntimeObject* L_65 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_65, method);
		}

IL_027d_1:
		{
			Exception_t* L_66 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_67;
			L_67 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_66, NULL);
			NullCheck(L_67);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_67, NULL);
		}

IL_028a_1:
		{
			int32_t L_68 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_69 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165)__this->___U3CsumU3E5__1_5;
			V_1 = L_69;
			goto IL_02c2;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02a1;
		}
		throw e;
	}

CATCH_02a1:
	{
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_70 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_71 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_inline(L_70, L_71, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02de;
	}

IL_02c2:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_72 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_73 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_inline(L_72, L_73, AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
	}

IL_02de:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitWithCancellationAsyncU3Ed__35_1_SetStateMachine_m113BCF654DB3E288CB9C7DB5E6AC300D11C1BAF8_gshared (U3CSumAwaitWithCancellationAsyncU3Ed__35_1_t41BAC341849974918993DEF5FB9BA2C2D161D8BE* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitWithCancellationAsyncU3Ed__39_1__ctor_m70514F36950462B0A89EA4C7BDBDDDCBDA3E3DBE_gshared (U3CSumAwaitWithCancellationAsyncU3Ed__39_1_t9B9764166BCC8B49A015F6D3F64552E2068D00D4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitWithCancellationAsyncU3Ed__39_1_MoveNext_mD636FD269811C0DED08C0093FA559EEC55E8FA94_gshared (U3CSumAwaitWithCancellationAsyncU3Ed__39_1_t9B9764166BCC8B49A015F6D3F64552E2068D00D4* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t61C2321D1539AEACB8E850BE9103041B5623CF0F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_t61C2321D1539AEACB8E850BE9103041B5623CF0F);
	int32_t V_0 = 0;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CSumAwaitWithCancellationAsyncU3Ed__39_1_t9B9764166BCC8B49A015F6D3F64552E2068D00D4* V_4 = NULL;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_5;
	memset((&V_5), 0, sizeof(V_5));
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
	U3CSumAwaitWithCancellationAsyncU3Ed__39_1_t9B9764166BCC8B49A015F6D3F64552E2068D00D4* G_B21_0 = NULL;
	U3CSumAwaitWithCancellationAsyncU3Ed__39_1_t9B9764166BCC8B49A015F6D3F64552E2068D00D4* G_B20_0 = NULL;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB G_B22_0;
	memset((&G_B22_0), 0, sizeof(G_B22_0));
	U3CSumAwaitWithCancellationAsyncU3Ed__39_1_t9B9764166BCC8B49A015F6D3F64552E2068D00D4* G_B22_1 = NULL;
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
			goto IL_004c_1;
		}

IL_0015_1:
		{
			goto IL_023e_1;
		}

IL_001a_1:
		{
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_3 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CsumU3E5__1_5);
			il2cpp_codegen_initobj(L_3, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
			RuntimeObject* L_4 = (RuntimeObject*)__this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, L_5);
			__this->___U3CeU3E5__2_6 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)L_6);
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			__this->___U3CU3Es__4_8 = 0;
		}

IL_004c_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0058_2;
				}
			}
			{
				goto IL_0052_2;
			}

IL_0052_2:
			{
				int32_t L_8 = V_0;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_005a_2;
				}
			}
			{
				goto IL_005f_2;
			}

IL_0058_2:
			{
				goto IL_00c8_2;
			}

IL_005a_2:
			{
				goto IL_019d_2;
			}

IL_005f_2:
			{
				goto IL_0155_2;
			}

IL_0065_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_9 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB)__this->___U3CsumU3E5__1_5;
				__this->___U3CU3Es__6_10 = L_9;
				Func_3_t428A771ED20C241CDDC6BDF17284D499B16CBD70* L_10 = (Func_3_t428A771ED20C241CDDC6BDF17284D499B16CBD70*)__this->___selector_3;
				RuntimeObject* L_11 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_11);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_11, (Il2CppFullySharedGenericAny*)L_12);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_13 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_10);
				UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F L_14;
				L_14 = InvokerFuncInvoker2< UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_12: *(void**)L_12), L_13);
				V_3 = L_14;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_15;
				L_15 = UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_inline((&V_3), UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_RuntimeMethod_var);
				V_2 = L_15;
				bool L_16;
				L_16 = Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_inline((&V_2), Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_00e4_2;
				}
			}
			{
				int32_t L_17 = 0;
				V_0 = L_17;
				__this->___U3CU3E1__state_0 = L_17;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_18 = V_2;
				__this->___U3CU3Eu__1_13 = L_18;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_13))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_19 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51*, U3CSumAwaitWithCancellationAsyncU3Ed__39_1_t9B9764166BCC8B49A015F6D3F64552E2068D00D4**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_19, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_02e2;
			}

IL_00c8_2:
			{
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_20 = (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51)__this->___U3CU3Eu__1_13;
				V_2 = L_20;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* L_21 = (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51*)(&__this->___U3CU3Eu__1_13);
				il2cpp_codegen_initobj(L_21, sizeof(Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51));
				int32_t L_22 = (-1);
				V_0 = L_22;
				__this->___U3CU3E1__state_0 = L_22;
			}

IL_00e4_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_23;
				L_23 = Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_inline((&V_2), Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_RuntimeMethod_var);
				__this->___U3CU3Es__5_9 = L_23;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_24 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CU3Es__5_9);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_25;
				L_25 = Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline(L_24, Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_25;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_26 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CU3Es__6_10);
				bool L_27;
				L_27 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline(L_26, Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				if (L_27)
				{
					G_B21_0 = __this;
					goto IL_011c_2;
				}
				G_B20_0 = __this;
			}
			{
				il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_28 = V_5;
				G_B22_0 = L_28;
				G_B22_1 = G_B20_0;
				goto IL_0137_2;
			}

IL_011c_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_29 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CU3Es__6_10);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_30;
				L_30 = Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline(L_29, Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_31 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)__this->___U3CU3Es__7_11;
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_32;
				L_32 = Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7(L_30, L_31, NULL);
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_33;
				memset((&L_33), 0, sizeof(L_33));
				Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7((&L_33), L_32, Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_RuntimeMethod_var);
				G_B22_0 = L_33;
				G_B22_1 = G_B21_0;
			}

IL_0137_2:
			{
				NullCheck(G_B22_1);
				G_B22_1->___U3CsumU3E5__1_5 = G_B22_0;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_34 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CU3Es__5_9);
				il2cpp_codegen_initobj(L_34, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_35 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CU3Es__6_10);
				il2cpp_codegen_initobj(L_35, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
			}

IL_0155_2:
			{
				RuntimeObject* L_36 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_36);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_37;
				L_37 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_36);
				V_8 = L_37;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_38;
				L_38 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_38;
				bool L_39;
				L_39 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_39)
				{
					goto IL_01ba_2;
				}
			}
			{
				int32_t L_40 = 1;
				V_0 = L_40;
				__this->___U3CU3E1__state_0 = L_40;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_41 = V_7;
				__this->___U3CU3Eu__2_14 = L_41;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_42 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSumAwaitWithCancellationAsyncU3Ed__39_1_t9B9764166BCC8B49A015F6D3F64552E2068D00D4**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_42, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_02e2;
			}

IL_019d_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_43 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_14;
				V_7 = L_43;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_44 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_14);
				il2cpp_codegen_initobj(L_44, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_45 = (-1);
				V_0 = L_45;
				__this->___U3CU3E1__state_0 = L_45;
			}

IL_01ba_2:
			{
				bool L_46;
				L_46 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_46;
				bool L_47 = (bool)__this->___U3CU3Es__8_12;
				V_6 = L_47;
				bool L_48 = V_6;
				if (L_48)
				{
					goto IL_0065_2;
				}
			}
			{
				goto IL_01e5_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01d9_1;
			}
			throw e;
		}

CATCH_01d9_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_49 = V_9;
			__this->___U3CU3Es__3_7 = L_49;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_49);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01e5_1;
		}

IL_01e5_1:
		{
			RuntimeObject* L_50 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_50) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_51 = V_10;
			if (!L_51)
			{
				goto IL_0264_1;
			}
		}
		{
			RuntimeObject* L_52 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_52);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_53;
			L_53 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_52);
			V_12 = L_53;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_54;
			L_54 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_54;
			bool L_55;
			L_55 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_55)
			{
				goto IL_025b_1;
			}
		}
		{
			int32_t L_56 = 2;
			V_0 = L_56;
			__this->___U3CU3E1__state_0 = L_56;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_57 = V_11;
			__this->___U3CU3Eu__3_15 = L_57;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_15))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_58 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSumAwaitWithCancellationAsyncU3Ed__39_1_t9B9764166BCC8B49A015F6D3F64552E2068D00D4**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_58, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_02e2;
		}

IL_023e_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_59 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_15;
			V_11 = L_59;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_60 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_15);
			il2cpp_codegen_initobj(L_60, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_61 = (-1);
			V_0 = L_61;
			__this->___U3CU3E1__state_0 = L_61;
		}

IL_025b_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_0264_1:
		{
			RuntimeObject* L_62 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_9 = L_62;
			RuntimeObject* L_63 = V_9;
			if (!L_63)
			{
				goto IL_028e_1;
			}
		}
		{
			RuntimeObject* L_64 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_64, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_65 = V_13;
			if (L_65)
			{
				goto IL_0281_1;
			}
		}
		{
			RuntimeObject* L_66 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_66, method);
		}

IL_0281_1:
		{
			Exception_t* L_67 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_68;
			L_68 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_67, NULL);
			NullCheck(L_68);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_68, NULL);
		}

IL_028e_1:
		{
			int32_t L_69 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_70 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB)__this->___U3CsumU3E5__1_5;
			V_1 = L_70;
			goto IL_02c6;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02a5;
		}
		throw e;
	}

CATCH_02a5:
	{
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_71 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_72 = V_13;
		AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_inline(L_71, L_72, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02e2;
	}

IL_02c6:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_73 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_74 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_inline(L_73, L_74, AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_RuntimeMethod_var);
	}

IL_02e2:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAwaitWithCancellationAsyncU3Ed__39_1_SetStateMachine_m27570F7DFA562EDE32B566BDDCEDA2910C20D122_gshared (U3CSumAwaitWithCancellationAsyncU3Ed__39_1_t9B9764166BCC8B49A015F6D3F64552E2068D00D4* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Error_MoreThanOneElement_mD66FED8AE9CF26384AFAA60BCFF0216F9490ECEE_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE451574BD6072D966A96174174834C5304D10BDC);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, _stringLiteralE451574BD6072D966A96174174834C5304D10BDC, NULL);
		V_0 = L_0;
		goto IL_000e;
	}

IL_000e:
	{
		Exception_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF26C76B1728491A2D7039EBFC35CFDE0D352C43A);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, _stringLiteralF26C76B1728491A2D7039EBFC35CFDE0D352C43A, NULL);
		V_0 = L_0;
		goto IL_000e;
	}

IL_000e:
	{
		Exception_t* L_1 = V_0;
		return L_1;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m8F65BBE4BCD00BC5CC3C50B468EDCB3AABCB09A7_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m9E784ED4CDCCF8F431EFFD0EF46AEB02E48CABE7_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
		RuntimeObject* L_2 = ___0_result;
		__this->___result_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___result_2), (void*)L_2);
		goto IL_0028;
	}

IL_0019:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___runnerPromise_0;
		RuntimeObject* L_4 = ___0_result;
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_gshared_inline (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_gshared_inline (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* __this, int32_t ___0_result, const RuntimeMethod* method) 
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
		int32_t L_2 = ___0_result;
		__this->___result_2 = L_2;
		goto IL_0028;
	}

IL_0019:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___runnerPromise_0;
		int32_t L_4 = ___0_result;
		NullCheck(L_3);
		InterfaceActionInvoker1< int32_t >::Invoke(2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mE8C5BA18D2449D6BD546630CE70DE315F5F91FCE_gshared_inline (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_gshared_inline (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method) 
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
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_2 = ___0_result;
		__this->___result_2 = L_2;
		goto IL_0028;
	}

IL_0019:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___runnerPromise_0;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_4 = ___0_result;
		NullCheck(L_3);
		InterfaceActionInvoker1< Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 >::Invoke(2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = (int64_t)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m668B0B683F2B4B7005D076DE9400F32B1702673B_gshared_inline (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_gshared_inline (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* __this, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___0_result, const RuntimeMethod* method) 
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
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_2 = ___0_result;
		__this->___result_2 = L_2;
		goto IL_0028;
	}

IL_0019:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___runnerPromise_0;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_4 = ___0_result;
		NullCheck(L_3);
		InterfaceActionInvoker1< Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 >::Invoke(2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = (float)__this->___value_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = (double)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_gshared_inline (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method) 
{
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)__this->___value_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_gshared_inline (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_gshared_inline (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* __this, int64_t ___0_result, const RuntimeMethod* method) 
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
		int64_t L_2 = ___0_result;
		__this->___result_2 = L_2;
		goto IL_0028;
	}

IL_0019:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___runnerPromise_0;
		int64_t L_4 = ___0_result;
		NullCheck(L_3);
		InterfaceActionInvoker1< int64_t >::Invoke(2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3, L_4);
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
