#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
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
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
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

struct U3CMinAwaitAsyncU3Ed__34_1_t68A8606EE27F3962E5D68168CF31BC0D359DB041;
struct U3CMinAwaitAsyncU3Ed__38_1_t0ABAF5F704BB15DC51A1D769D504B631F649F927;
struct U3CMinAwaitAsyncU3Ed__42_1_tC25E8DC6D95DDD60994DF050EE60BEAF598A5CD4;
struct U3CMinAwaitAsyncU3Ed__6_1_t0723AEB6AF5877867C68F89565108EE947DA35FB;
struct U3CMinAwaitWithCancellationAsyncU3Ed__11_1_t87BAE1F5754DF87CD354C8D64FA9AFCAA4A72FCA;
struct U3CMinAwaitWithCancellationAsyncU3Ed__15_1_t671839B639CE41E851CEA13C3E4BF0266B468F90;
struct U3CMinAwaitWithCancellationAsyncU3Ed__19_1_tFD68B66ACCC41046F7697071B6978A6140527418;
struct U3CMinAwaitWithCancellationAsyncU3Ed__23_1_t56364C68BFED293EA7A45B37CD7056C742942F89;
struct U3CMinAwaitWithCancellationAsyncU3Ed__27_1_tA45E1E004A2DB3D5167CEE8595F6FC1BEB82C361;
struct U3CMinAwaitWithCancellationAsyncU3Ed__31_1_t1EE73BF3740F1CDA20ACB71BFF7968ABDF9CB05B;
struct U3CMinAwaitWithCancellationAsyncU3Ed__35_1_tDA26EBC4AC4C6FCEC8955255F2D13374C1B67B9F;
struct U3CMinAwaitWithCancellationAsyncU3Ed__39_1_tCC06919BA4B305801CB9B222385A3E035B22D81C;
struct U3CMinAwaitWithCancellationAsyncU3Ed__3_2_t5C25FEB674967FD9889E050F607D9DBBC7246C37;
struct U3CMinAwaitWithCancellationAsyncU3Ed__43_1_t388FF276C28AACAF91B54EE3DFF3016D0690C0CF;
struct U3CMinAwaitWithCancellationAsyncU3Ed__7_1_tD013D28F83ADDE9E45AEE1903E28D2EFEF7602FC;
struct U3CMoveNextAsyncU3Ed__7_t5C3858D5A215C27F7ACD70F743712EFAC46E1002;
struct U3CMoveNextAsyncU3Ed__7_t018B4EF6E63587BA5822F2E50A302D4708BEE18B;
struct U3CMoveNextAsyncU3Ed__9_tD4F96CC8D5992FC80B36C4997D089E2FA5FAA70E;
struct U3CReadAsyncCoreU3Ed__5_tFC66DFEB527BFA020AB057E4D877130EC75A2E86;
struct U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC;
struct U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C;
struct U3CRunAsyncU3Ed__3_t5B839BFC3E2D84F2867CFCAA02A67D7204365F1E;
struct U3CRunOnThreadPoolU3Ed__89_1_t72765B5962939E5FAB63A136AD9E79A6F460B2DC;
struct U3CRunOnThreadPoolU3Ed__90_1_t7EB4F2D15E84FD61047D95029483D1972E37A047;
struct U3CRunOnThreadPoolU3Ed__91_1_tAC3FE628E6F8E52CCEAB24EDE183A13E38D45773;
struct U3CRunOnThreadPoolU3Ed__92_1_t810304869652B42464337C42611A3B2DB62200E6;
struct U3CRunOtherU3Ed__17_tE1B9B0A63DB144D31786A5E60E0B430D8749B376;
struct U3CRunOtherU3Ed__18_tC86AC8668EBD41238487481F68E22E133D175F56;
struct U3CRunSecondAfterDisposeAsyncU3Ed__16_t3146FA9FF7D2FE2BCA6486ADD678414836C13CD2;
struct U3CRunTaskU3Ed__5_t14546FE6CF6894D3C16B9049DCDF0B8852EB7CB3;
struct U3CRunTaskU3Ed__8_tE3D845B2DFF239CCADC854E9A886AE33DE48C95C;
struct U3CRunWriterTaskU3Ed__12_tE67DCC848FDD6B0799DC7FA69399C28609DE3304;
struct U3CSelectIteratorU3Ed__5_2_tD4CDC97B158D0A35AADD31C1B82919CD898D43B0;
struct U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460;
struct U3CSelectManyIteratorU3Ed__17_2_tCDBBC5EAD5E67D0D44121301E93C64CC26FAD80B;
struct U3CSequenceEqualAsyncU3Ed__0_1_t6108633E1395D5F8E783095E39EF2D2626A3317F;
struct U3CSingleAsyncU3Ed__0_1_tA863E9727314DFE999020711B01726B6C7E936DB;
struct Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
struct AsyncWriter_tAAD5428EF2D4A2E4733447D24C2CFB537E46FB47;
struct AttachExternalCancellationSource_1_tBA53ECE7155BEAEB22C2CD681385691B130DFFA7;
struct ChannelReader_1_t2ECD38FFB796290865D3F1EAC478976ECBD61318;
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB;
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
struct Func_1_tBAE452E06E04175D6A1F37BAA4412688F5DBD769;
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431;
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
struct Func_2_t9F45EF9F857977243C345F24571962D2521DB4A1;
struct Func_2_t5AB862F6CD2613B5462A35DFA7DC7A5E066A7F46;
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
struct Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9;
struct Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61;
struct Func_2_t041ABB3F33302FF5B428FF832CE110343F4DA4C6;
struct Func_2_tEBD22D2F4376CEDF9152BDE05B6E363699F0C7E1;
struct Func_2_t9F80A31065CD628F063DA0D192A111706F695666;
struct Func_2_t6561E0DBB0FBFCB8DBFA46F392A86C31706164F5;
struct Func_3_t37826F5888A91532CCB495C7E4CE99AAFC25E5C2;
struct Func_3_t428A771ED20C241CDDC6BDF17284D499B16CBD70;
struct Func_3_tD24255148664E4908FBCB566B787F36A4988A2BB;
struct Func_3_tA0DEFAEF785E5E0D32E2CABA4CBDB7F9D34C2B8D;
struct Func_3_t4111B7EAAEBCF4004223B4E554711FE862E5C3B2;
struct Func_3_t5604379C942DED2B342DEED029BC1AB35C5A06A1;
struct Func_3_tE135AFB66CDB73C25CDE9CDD97913EE0CF6337D7;
struct Func_3_tB356387A25DA85D9F4DDAAEEFD39A96B3F81FA95;
struct Func_3_t4B0BED2CC5C1B3C74670633A89F91C13C1A0F1E4;
struct Func_3_t76BD268388DCE8B514D513440272B79CC88C6413;
struct Func_3_t79F461272893123C05C047A343D70B9B775827E4;
struct Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E;
struct Func_3_t2413D1285C5A0990717706292249644F402CA43E;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IObserver_1_t094BE2515872266E98A772AEA02B413105F16A8B;
struct IStateMachineRunnerPromise_1_t8D57C4F4548F3BCD478D68C0B1214D4BF62AA68D;
struct IStateMachineRunnerPromise_1_t51E154A16BAD95B7D398B5F0702C3E66265C53DA;
struct IStateMachineRunnerPromise_1_tBE2C23E7E2B62C56C552514DE41331D016E88894;
struct IStateMachineRunnerPromise_1_t2CCBC9102ABF89E60F08B479B9A9F8E564FDCE5B;
struct IStateMachineRunnerPromise_1_t1AB0B5E2CA50004E9184B2F5382B9C646CD88F94;
struct IStateMachineRunnerPromise_1_tE89ECD2876CAE5961DE51F0E207D9EE40476C855;
struct IStateMachineRunnerPromise_1_t9061D15A609C242C57AE7E2186438B3A765049A0;
struct IStateMachineRunnerPromise_1_t60C36DF27100A1AAC871929239A758A920192D30;
struct IStateMachineRunnerPromise_1_t4D71EE585F49FBECBCB54253A802F3C93921778B;
struct IStateMachineRunnerPromise_1_tFE8A013B1056925F687501E7EA6E1D49D1DE4BE2;
struct IStateMachineRunnerPromise_1_t13A438173E94750804DBD5134EB865935FADCFD8;
struct IStateMachineRunnerPromise_1_t33359314377828B79D5AB55278350F65F2237DD9;
struct IUniTaskAsyncEnumerable_1_tB465D2725680B21CF3074178AECADD1D24C24A74;
struct IUniTaskAsyncEnumerator_1_t256C7409E6B13FF3224A57D2DD1A4D52A2C40092;
struct IUniTaskSource_1_t485459C6F6CB25D26E56105B8D0749F0FAD63B61;
struct IUniTaskSource_1_tCE4346B1A4E6A33744233A2262F33E59C6306CA1;
struct IUniTaskSource_1_tED8322E8A8E850EEDF72FF9B9F242963B2ECE7FE;
struct IUniTaskSource_1_tE3D8C7FB2D80191B4F79AF51153AD33F56C16C37;
struct IUniTaskSource_1_t5F2BFA96825F2DFE4BA08A68BC159258E438D103;
struct IUniTaskSource_1_tD2881AEFFB4C46DFAB665B8E6A2D8B0957ECBACC;
struct IUniTaskSource_1_tB6B218F9BB467453A6CBAEE053820D3B3E8F891C;
struct IUniTaskSource_1_t43ECD5543FAA73E407F28F30300FAA39B7D954B0;
struct IUniTaskSource_1_t7B60863D376A1004EF4553185A8DC483A70F720C;
struct IUniTaskSource_1_t8F97352CA996D0781DB009E630AB2143DE1614D3;
struct IUniTaskSource_1_tE897B7736A4F7A6923CE32E4D43E3506188EE795;
struct IUniTaskSource_1_tD745CD56EC6E5CB710B56755B2E0F56C83FD8F2F;
struct IUniTaskSource_1_tA27C284FF17E3AAB5B5D07A7E4DE207B56F764AB;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
struct SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035;
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9;
struct ToCoroutineEnumerator_1_tF7712B7CF6F5EBE1FCA4B0CF74B0C4076BC1A40C;
struct _Concat_t0A2CAD4BD9B714051180DBE5CD57CBFFDD185E4A;
struct _Create_t4C4D84FCFA35408470CAC9E2371DE395A34192C7;
struct _Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC;
struct _SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC;
struct _TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE;
struct _ToUniTaskAsyncEnumerableTask_t96E01945EE26D2019409887F85016296E285563B;
struct _ToUniTaskAsyncEnumerableUniTask_tB862AC47790A98CF42A70910BC9237C8764CF9E5;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct ChannelClosedException_tC3080D80CFCAF35852566A33108F4533DB025F0C;
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148;
struct IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
struct String_t;
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* ChannelClosedException_tC3080D80CFCAF35852566A33108F4533DB025F0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralE451574BD6072D966A96174174834C5304D10BDC;
IL2CPP_EXTERN_C String_t* _stringLiteralF26C76B1728491A2D7039EBFC35CFDE0D352C43A;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m668B0B683F2B4B7005D076DE9400F32B1702673B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_mE8C5BA18D2449D6BD546630CE70DE315F5F91FCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_RuntimeMethod_var;
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
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var;
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

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CSelectIteratorU3Ed__5_2_tD4CDC97B158D0A35AADD31C1B82919CD898D43B0 : public RuntimeObject {};
struct U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	RuntimeObject* ___U3CU3E2__current_1;
	int32_t ___U3CU3El__initialThreadId_2;
	RuntimeObject* ___source_3;
	RuntimeObject* ___U3CU3E3__source_4;
	Func_2_t9F45EF9F857977243C345F24571962D2521DB4A1* ___selector_5;
	Func_2_t9F45EF9F857977243C345F24571962D2521DB4A1* ___U3CU3E3__selector_6;
	RuntimeObject* ___U3CU3E7__wrap1_7;
	RuntimeObject* ___U3CU3E7__wrap2_8;
};
struct U3CSelectManyIteratorU3Ed__17_2_tCDBBC5EAD5E67D0D44121301E93C64CC26FAD80B : public RuntimeObject {};
struct ChannelReader_1_t2ECD38FFB796290865D3F1EAC478976ECBD61318  : public RuntimeObject
{
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB  : public RuntimeObject
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
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	int32_t ___m_taskId_1;
	Delegate_t* ___m_action_2;
	RuntimeObject* ___m_stateObject_3;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	int32_t ___m_stateFlags_6;
	RuntimeObject* ___m_continuationObject_7;
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
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
struct AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3 
{
	RuntimeObject* ___runnerPromise_0;
	Exception_t* ___ex_1;
	float ___result_2;
	RuntimeObject* ___debuggingId_3;
};
typedef Il2CppFullySharedGenericStruct AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52;
struct Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___items_0;
	int32_t ___count_1;
};
struct Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___items_0;
	int32_t ___count_1;
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
struct SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 
{
	SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035* ____source_0;
	int32_t ____index_1;
};
struct TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___m_task_0;
};
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};
struct UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2 
{
	bool ___result_0;
	RuntimeObject* ___error_1;
	int16_t ___version_2;
	bool ___hasUnhandledError_3;
	int32_t ___completedCount_4;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation_5;
	RuntimeObject* ___continuationState_6;
};
typedef Il2CppFullySharedGenericStruct UniTaskCompletionSourceCore_1_t146409427AB3F018819917FFA1FDC70FDB5C0BBF;
struct UniTask_1_tF1161044B03B89C690A1FB77CF673B0EDEE8B5BD 
{
	RuntimeObject* ___source_0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___result_1;
	int16_t ___token_2;
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
typedef Il2CppFullySharedGenericStruct UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483;
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
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value_0;
};
struct SwitchToThreadPoolAwaitable_t5608C9A301A9B88DA3F77CB7E2AB2082321CB053 
{
	union
	{
		struct
		{
		};
		uint8_t SwitchToThreadPoolAwaitable_t5608C9A301A9B88DA3F77CB7E2AB2082321CB053__padding[1];
	};
};
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 
{
	RuntimeObject* ___source_0;
	int16_t ___token_1;
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
struct YieldAwaitable_t8A3F912BCBF6C4BB5599E92BA0159168B4E14B3A 
{
	int32_t ___timing_0;
};
struct Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9 
{
	union
	{
		struct
		{
		};
		uint8_t Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9__padding[1];
	};
};
struct Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220 
{
	int32_t ___timing_0;
};
struct U3CMoveNextAsyncU3Ed__7_t5C3858D5A215C27F7ACD70F743712EFAC46E1002 : public RuntimeObject {};
struct U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	RuntimeObject* ___U3CU3E2__current_1;
	int32_t ___U3CU3El__initialThreadId_2;
	RuntimeObject* ___source_3;
	RuntimeObject* ___U3CU3E3__source_4;
	Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59 ___U3CbufferU3E5__2_5;
	int32_t ___U3CiU3E5__3_6;
};
struct U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C : public RuntimeObject {};
struct U3CRunOnThreadPoolU3Ed__89_1_t72765B5962939E5FAB63A136AD9E79A6F460B2DC : public RuntimeObject {};
struct U3CRunOnThreadPoolU3Ed__91_1_tAC3FE628E6F8E52CCEAB24EDE183A13E38D45773 : public RuntimeObject {};
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
struct Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C 
{
	UniTask_1_tF1161044B03B89C690A1FB77CF673B0EDEE8B5BD ___task_0;
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
typedef Il2CppFullySharedGenericStruct Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C;
struct Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB 
{
	bool ___hasValue_0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value_1;
};
struct ToCoroutineEnumerator_1_tF7712B7CF6F5EBE1FCA4B0CF74B0C4076BC1A40C : public RuntimeObject {};
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
struct _ToUniTaskAsyncEnumerableTask_t96E01945EE26D2019409887F85016296E285563B : public RuntimeObject {};
struct _ToUniTaskAsyncEnumerableUniTask_tB862AC47790A98CF42A70910BC9237C8764CF9E5 : public RuntimeObject {};
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_pinvoke
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_com
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
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
struct MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5  : public RuntimeObject
{
	UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2 ___completionSource_0;
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
struct U3CMinAwaitAsyncU3Ed__6_1_t0723AEB6AF5877867C68F89565108EE947DA35FB  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_t6561E0DBB0FBFCB8DBFA46F392A86C31706164F5* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int32_t ___U3CvalueU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	bool ___U3CU3Es__6_10;
	int32_t ___U3CxU3E5__7_11;
	int32_t ___U3CU3Es__8_12;
	bool ___U3CU3Es__9_13;
	Awaiter_t8953594D03299DE782894F4A865CED79F2504266 ___U3CU3Eu__1_14;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_15;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_16;
};
struct U3CMinAwaitWithCancellationAsyncU3Ed__11_1_t87BAE1F5754DF87CD354C8D64FA9AFCAA4A72FCA  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_t76BD268388DCE8B514D513440272B79CC88C6413* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int64_t ___U3CvalueU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	int64_t ___U3CU3Es__5_9;
	bool ___U3CU3Es__6_10;
	int64_t ___U3CxU3E5__7_11;
	int64_t ___U3CU3Es__8_12;
	bool ___U3CU3Es__9_13;
	Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E ___U3CU3Eu__1_14;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_15;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_16;
};
struct U3CMinAwaitWithCancellationAsyncU3Ed__15_1_t671839B639CE41E851CEA13C3E4BF0266B468F90  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_t79F461272893123C05C047A343D70B9B775827E4* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	float ___U3CvalueU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	float ___U3CU3Es__5_9;
	bool ___U3CU3Es__6_10;
	float ___U3CxU3E5__7_11;
	float ___U3CU3Es__8_12;
	bool ___U3CU3Es__9_13;
	Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D ___U3CU3Eu__1_14;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_15;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_16;
};
struct U3CMinAwaitWithCancellationAsyncU3Ed__19_1_tFD68B66ACCC41046F7697071B6978A6140527418  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_tB356387A25DA85D9F4DDAAEEFD39A96B3F81FA95* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	double ___U3CvalueU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	double ___U3CU3Es__5_9;
	bool ___U3CU3Es__6_10;
	double ___U3CxU3E5__7_11;
	double ___U3CU3Es__8_12;
	bool ___U3CU3Es__9_13;
	Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 ___U3CU3Eu__1_14;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_15;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_16;
};
struct U3CMinAwaitWithCancellationAsyncU3Ed__3_2_t5C25FEB674967FD9889E050F607D9DBBC7246C37 : public RuntimeObject {};
struct U3CMinAwaitWithCancellationAsyncU3Ed__7_1_tD013D28F83ADDE9E45AEE1903E28D2EFEF7602FC  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_t4B0BED2CC5C1B3C74670633A89F91C13C1A0F1E4* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	int32_t ___U3CvalueU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	int32_t ___U3CU3Es__5_9;
	bool ___U3CU3Es__6_10;
	int32_t ___U3CxU3E5__7_11;
	int32_t ___U3CU3Es__8_12;
	bool ___U3CU3Es__9_13;
	Awaiter_t8953594D03299DE782894F4A865CED79F2504266 ___U3CU3Eu__1_14;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_15;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_16;
};
struct U3CMoveNextAsyncU3Ed__7_t018B4EF6E63587BA5822F2E50A302D4708BEE18B : public RuntimeObject {};
struct U3CMoveNextAsyncU3Ed__9_tD4F96CC8D5992FC80B36C4997D089E2FA5FAA70E  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 ___U3CU3Et__builder_1;
	_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC* ___U3CU3E4__this_2;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___U3CU3Es__1_3;
	Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C ___U3CU3Eu__1_4;
};
struct U3CReadAsyncCoreU3Ed__5_tFC66DFEB527BFA020AB057E4D877130EC75A2E86 : public RuntimeObject {};
struct U3CRunAsyncU3Ed__3_t5B839BFC3E2D84F2867CFCAA02A67D7204365F1E  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder_1;
	RuntimeObject* ___src_2;
	RuntimeObject* ___observer_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	RuntimeObject* ___U3CeU3E5__1_5;
	RuntimeObject* ___U3CU3Es__2_6;
	int32_t ___U3CU3Es__3_7;
	bool ___U3ChasNextU3E5__4_8;
	bool ___U3CU3Es__5_9;
	Exception_t* ___U3CexU3E5__6_10;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_11;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_12;
};
struct U3CRunOnThreadPoolU3Ed__90_1_t7EB4F2D15E84FD61047D95029483D1972E37A047 : public RuntimeObject {};
struct U3CRunOnThreadPoolU3Ed__92_1_t810304869652B42464337C42611A3B2DB62200E6 : public RuntimeObject {};
struct U3CRunOtherU3Ed__17_tE1B9B0A63DB144D31786A5E60E0B430D8749B376  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder_1;
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___other_2;
	_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE* ___U3CU3E4__this_3;
	Exception_t* ___U3CexU3E5__1_4;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_5;
};
struct U3CRunOtherU3Ed__18_tC86AC8668EBD41238487481F68E22E133D175F56  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder_1;
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___other_2;
	_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC* ___U3CU3E4__this_3;
	Exception_t* ___U3CexU3E5__1_4;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_5;
};
struct U3CRunSecondAfterDisposeAsyncU3Ed__16_t3146FA9FF7D2FE2BCA6486ADD678414836C13CD2  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder_1;
	_Concat_t0A2CAD4BD9B714051180DBE5CD57CBFFDD185E4A* ___U3CU3E4__this_2;
	Exception_t* ___U3CexU3E5__1_3;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_4;
};
struct U3CRunTaskU3Ed__5_t14546FE6CF6894D3C16B9049DCDF0B8852EB7CB3 : public RuntimeObject {};
struct U3CRunTaskU3Ed__8_tE3D845B2DFF239CCADC854E9A886AE33DE48C95C : public RuntimeObject {};
struct U3CRunWriterTaskU3Ed__12_tE67DCC848FDD6B0799DC7FA69399C28609DE3304  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder_1;
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_2;
	_Create_t4C4D84FCFA35408470CAC9E2371DE395A34192C7* ___U3CU3E4__this_3;
	Exception_t* ___U3CexU3E5__1_4;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_5;
};
struct U3CSequenceEqualAsyncU3Ed__0_1_t6108633E1395D5F8E783095E39EF2D2626A3317F  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3 ___U3CU3Et__builder_1;
	RuntimeObject* ___first_2;
	RuntimeObject* ___second_3;
	RuntimeObject* ___comparer_4;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_5;
	RuntimeObject* ___U3Ce1U3E5__1_6;
	RuntimeObject* ___U3CU3Es__2_7;
	int32_t ___U3CU3Es__3_8;
	bool ___U3CU3Es__4_9;
	RuntimeObject* ___U3Ce2U3E5__5_10;
	RuntimeObject* ___U3CU3Es__6_11;
	int32_t ___U3CU3Es__7_12;
	bool ___U3CU3Es__8_13;
	bool ___U3CU3Es__9_14;
	bool ___U3CU3Es__10_15;
	bool ___U3CU3Es__11_16;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_17;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_18;
};
struct U3CSingleAsyncU3Ed__0_1_tA863E9727314DFE999020711B01726B6C7E936DB : public RuntimeObject {};
struct AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285 
{
	RuntimeObject* ___runnerPromise_0;
	Exception_t* ___ex_1;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___result_2;
	RuntimeObject* ___debuggingId_3;
};
struct AttachExternalCancellationSource_1_tBA53ECE7155BEAEB22C2CD681385691B130DFFA7 : public RuntimeObject {};
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
struct _Concat_t0A2CAD4BD9B714051180DBE5CD57CBFFDD185E4A : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _Create_t4C4D84FCFA35408470CAC9E2371DE395A34192C7 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
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
struct U3CMinAwaitAsyncU3Ed__34_1_t68A8606EE27F3962E5D68168CF31BC0D359DB041  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_t9F80A31065CD628F063DA0D192A111706F695666* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CvalueU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CU3Es__5_9;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CU3Es__6_10;
	bool ___U3CU3Es__7_11;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CxU3E5__8_12;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CU3Es__9_13;
	bool ___U3CU3Es__10_14;
	Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 ___U3CU3Eu__1_15;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_16;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_17;
};
struct U3CMinAwaitAsyncU3Ed__38_1_t0ABAF5F704BB15DC51A1D769D504B631F649F927  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_tEBD22D2F4376CEDF9152BDE05B6E363699F0C7E1* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CvalueU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CU3Es__5_9;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CU3Es__6_10;
	bool ___U3CU3Es__7_11;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CxU3E5__8_12;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CU3Es__9_13;
	bool ___U3CU3Es__10_14;
	Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 ___U3CU3Eu__1_15;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_16;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_17;
};
struct U3CMinAwaitWithCancellationAsyncU3Ed__23_1_t56364C68BFED293EA7A45B37CD7056C742942F89  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_tE135AFB66CDB73C25CDE9CDD97913EE0CF6337D7* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CvalueU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CU3Es__5_9;
	bool ___U3CU3Es__6_10;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CxU3E5__7_11;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CU3Es__8_12;
	bool ___U3CU3Es__9_13;
	Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 ___U3CU3Eu__1_14;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_15;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_16;
};
struct U3CMinAwaitWithCancellationAsyncU3Ed__27_1_tA45E1E004A2DB3D5167CEE8595F6FC1BEB82C361  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_tA0DEFAEF785E5E0D32E2CABA4CBDB7F9D34C2B8D* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CvalueU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CU3Es__5_9;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CU3Es__6_10;
	bool ___U3CU3Es__7_11;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CxU3E5__8_12;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3CU3Es__9_13;
	bool ___U3CU3Es__10_14;
	Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 ___U3CU3Eu__1_15;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_16;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_17;
};
struct U3CMinAwaitWithCancellationAsyncU3Ed__31_1_t1EE73BF3740F1CDA20ACB71BFF7968ABDF9CB05B  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_t4111B7EAAEBCF4004223B4E554711FE862E5C3B2* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CvalueU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CU3Es__5_9;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CU3Es__6_10;
	bool ___U3CU3Es__7_11;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CxU3E5__8_12;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___U3CU3Es__9_13;
	bool ___U3CU3Es__10_14;
	Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB ___U3CU3Eu__1_15;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_16;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_17;
};
struct U3CMinAwaitWithCancellationAsyncU3Ed__35_1_tDA26EBC4AC4C6FCEC8955255F2D13374C1B67B9F  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_t5604379C942DED2B342DEED029BC1AB35C5A06A1* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CvalueU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CU3Es__5_9;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CU3Es__6_10;
	bool ___U3CU3Es__7_11;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CxU3E5__8_12;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___U3CU3Es__9_13;
	bool ___U3CU3Es__10_14;
	Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 ___U3CU3Eu__1_15;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_16;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_17;
};
struct U3CMinAwaitWithCancellationAsyncU3Ed__39_1_tCC06919BA4B305801CB9B222385A3E035B22D81C  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_tD24255148664E4908FBCB566B787F36A4988A2BB* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CvalueU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CU3Es__5_9;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CU3Es__6_10;
	bool ___U3CU3Es__7_11;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CxU3E5__8_12;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___U3CU3Es__9_13;
	bool ___U3CU3Es__10_14;
	Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 ___U3CU3Eu__1_15;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_16;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_17;
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
struct Func_1_tBAE452E06E04175D6A1F37BAA4412688F5DBD769  : public MulticastDelegate_t
{
};
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431  : public MulticastDelegate_t
{
};
struct Func_2_t9F45EF9F857977243C345F24571962D2521DB4A1  : public MulticastDelegate_t
{
};
struct Func_2_t5AB862F6CD2613B5462A35DFA7DC7A5E066A7F46  : public MulticastDelegate_t
{
};
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};
struct Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9  : public MulticastDelegate_t
{
};
struct Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61  : public MulticastDelegate_t
{
};
struct Func_2_t041ABB3F33302FF5B428FF832CE110343F4DA4C6  : public MulticastDelegate_t
{
};
struct Func_2_tEBD22D2F4376CEDF9152BDE05B6E363699F0C7E1  : public MulticastDelegate_t
{
};
struct Func_2_t9F80A31065CD628F063DA0D192A111706F695666  : public MulticastDelegate_t
{
};
struct Func_2_t6561E0DBB0FBFCB8DBFA46F392A86C31706164F5  : public MulticastDelegate_t
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
struct Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E  : public MulticastDelegate_t
{
};
struct Func_3_t2413D1285C5A0990717706292249644F402CA43E  : public MulticastDelegate_t
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
struct U3CMinAwaitAsyncU3Ed__42_1_tC25E8DC6D95DDD60994DF050EE60BEAF598A5CD4  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_t041ABB3F33302FF5B428FF832CE110343F4DA4C6* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CvalueU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CU3Es__5_9;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CU3Es__6_10;
	bool ___U3CU3Es__7_11;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CxU3E5__8_12;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CU3Es__9_13;
	bool ___U3CU3Es__10_14;
	Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 ___U3CU3Eu__1_15;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_16;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_17;
};
struct U3CMinAwaitWithCancellationAsyncU3Ed__43_1_t388FF276C28AACAF91B54EE3DFF3016D0690C0CF  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_t428A771ED20C241CDDC6BDF17284D499B16CBD70* ___selector_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CvalueU3E5__1_5;
	RuntimeObject* ___U3CeU3E5__2_6;
	RuntimeObject* ___U3CU3Es__3_7;
	int32_t ___U3CU3Es__4_8;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CU3Es__5_9;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CU3Es__6_10;
	bool ___U3CU3Es__7_11;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CxU3E5__8_12;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CU3Es__9_13;
	bool ___U3CU3Es__10_14;
	Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 ___U3CU3Eu__1_15;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_16;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__3_17;
};
struct ChannelClosedException_tC3080D80CFCAF35852566A33108F4533DB025F0C  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB_StaticFields
{
	Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* ___defaultComparer_0;
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
struct Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9_StaticFields
{
	WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___switchToCallback_0;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock_0;
};
struct AttachExternalCancellationSource_1_tBA53ECE7155BEAEB22C2CD681385691B130DFFA7_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___cancellationCallbackDelegate_0;
};
struct _Concat_t0A2CAD4BD9B714051180DBE5CD57CBFFDD185E4A_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___MoveNextCoreDelegate_1;
};
struct _SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___CancelDelegate1_1;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___MoveNextCoreDelegate_2;
};
struct _TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___CancelDelegate1_1;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___MoveNextCoreDelegate_2;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_gshared_inline (UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_gshared_inline (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_gshared_inline (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_gshared_inline (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_gshared_inline (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* __this, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_gshared_inline (UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_gshared_inline (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_gshared_inline (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_gshared_inline (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_gshared_inline (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_gshared_inline (UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_gshared_inline (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_gshared_inline (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_gshared_inline (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_gshared_inline (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_gshared_inline (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_gshared_inline (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* __this, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t8953594D03299DE782894F4A865CED79F2504266 UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_gshared_inline (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_gshared_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_gshared_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_gshared_inline (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_gshared_inline (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* __this, int32_t ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_gshared_inline (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_gshared_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_gshared_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_gshared_inline (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_gshared_inline (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* __this, int64_t ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_gshared_inline (UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_gshared_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_gshared_inline (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_gshared_inline (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_gshared_inline (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* __this, float ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_gshared_inline (UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_gshared_inline (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_gshared_inline (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_gshared_inline (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_gshared_inline (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* __this, double ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_gshared_inline (UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_gshared_inline (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_gshared_inline (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_gshared_inline (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_gshared_inline (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_gshared_inline (UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_gshared_inline (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_gshared_inline (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_mE8C5BA18D2449D6BD546630CE70DE315F5F91FCE_gshared_inline (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_gshared_inline (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_gshared_inline (UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_gshared_inline (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_gshared_inline (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m668B0B683F2B4B7005D076DE9400F32B1702673B_gshared_inline (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_gshared_inline (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* __this, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___0_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_gshared_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, bool ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_m072DE84AEC969582EB5760D4835747F9DC0C02AF_gshared (Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReverseIteratorU3Ed__79_1__ctor_m685BB5646EEC473221EEEEB5198F7F021741E8FE_gshared (U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReverseIteratorU3Ed__79_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m11F12AD959FE78FE9411817870AE1DF7BE612689_gshared (U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_m55137EEF7AF9E0883A438776A066DA5520FFDE49_gshared (Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_gshared (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, bool ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_gshared (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, Exception_t* ___0_error, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectManyIteratorU3Ed__17_2_U3CU3Em__Finally1_mDD56A26381C1903838E7979064E0C853B51985E2_gshared (U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectManyIteratorU3Ed__17_2_U3CU3Em__Finally2_m2684EF307EE94963840DE7E15C376CF4A78726DB_gshared (U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectManyIteratorU3Ed__17_2_System_IDisposable_Dispose_m84833338745BD5FCCC685381F7B750A8B7761242_gshared (U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectManyIteratorU3Ed__17_2__ctor_m97C1241630456070A85E9F50F33A4425F251826B_gshared (U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSelectManyIteratorU3Ed__17_2_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_mBE4D4722EA426B3413FA95791FE4F856CEDB2122_gshared (U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mB257E1F06754BE00907B9F223E1CED109BE0A9E9_gshared_inline (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* __this, UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m5810EA6A8A912CF428FDABFDD39E978F898ABCF6_gshared_inline (UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m9D5EF23B6F3F4362E6DA714FE205E179615A6485_gshared_inline (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* __this, UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m364E955D88F0ED41DD3142E30E5C1FC3992A4320_gshared_inline (UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m411324A17AA6E44DD7F24A60FF2A75F2E7F27F53_gshared_inline (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* __this, UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m0DC9F6711B39ED08865F0CF67538D05129880C94_gshared_inline (UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m2D382159CB5D690EEEDB435E6183DBDBD9560CA3_gshared_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m688D534E5DE535F713C9D2C84744BB51F95416F5_gshared_inline (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m2F2F413B4B8E320AC83D464DE19E5B81D8616185_gshared_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m621A3ED628D31F42C69A04584E93A8A02E381117_gshared_inline (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* __this, const RuntimeMethod* method) ;
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

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
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
inline bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline)(__this, method);
}
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
inline float Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803 (Exception_t* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330 (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
inline void AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_inline (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_inline (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* __this, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_gshared_inline)(__this, ___0_result, method);
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
inline bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline)(__this, method);
}
inline double Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  double (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_gshared_inline)(__this, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_inline (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_inline (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* __this, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_gshared_inline)(__this, ___0_result, method);
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
inline bool Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*, const RuntimeMethod*))Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_gshared_inline)(__this, method);
}
inline Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method)
{
	return ((  Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F (*) (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decimal_op_GreaterThan_m549F09BF0C53D8611E550CA9CCB53543D6DAF717 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_d1, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___1_d2, const RuntimeMethod* method) ;
inline void AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_inline (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_inline (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* __this, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_gshared_inline)(__this, ___0_result, method);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline (const RuntimeMethod* method) ;
inline void AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_inline (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_inline (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* __this, int32_t ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, int32_t, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_gshared_inline)(__this, ___0_result, method);
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
inline void AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_inline (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_inline (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* __this, int64_t ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, int64_t, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_gshared_inline)(__this, ___0_result, method);
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
inline void AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_inline (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_inline (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* __this, float ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, float, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_gshared_inline)(__this, ___0_result, method);
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
inline void AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_inline (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_inline (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* __this, double ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, double, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_gshared_inline)(__this, ___0_result, method);
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
inline void AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_inline (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_inline (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_gshared_inline)(__this, ___0_result, method);
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
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
inline int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline)(__this, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetException_mE8C5BA18D2449D6BD546630CE70DE315F5F91FCE_inline (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_mE8C5BA18D2449D6BD546630CE70DE315F5F91FCE_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_inline (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_gshared_inline)(__this, ___0_result, method);
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
inline bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline)(__this, method);
}
inline int64_t Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_gshared_inline)(__this, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetException_m668B0B683F2B4B7005D076DE9400F32B1702673B_inline (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m668B0B683F2B4B7005D076DE9400F32B1702673B_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_inline (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* __this, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*, Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_gshared_inline)(__this, ___0_result, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
inline void AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_gshared_inline)(__this, ___0_exception, method);
}
inline void AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_inline (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* __this, bool ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, bool, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_gshared_inline)(__this, ___0_result, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelClosedException__ctor_m96AAB202638FADBEE698B834F10976A0690C7D94 (ChannelClosedException_tC3080D80CFCAF35852566A33108F4533DB025F0C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
inline void Buffer_1__ctor_m072DE84AEC969582EB5760D4835747F9DC0C02AF (Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59* __this, RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59*, RuntimeObject*, const RuntimeMethod*))Buffer_1__ctor_m072DE84AEC969582EB5760D4835747F9DC0C02AF_gshared)(__this, ___0_source, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
inline void U3CReverseIteratorU3Ed__79_1__ctor_m685BB5646EEC473221EEEEB5198F7F021741E8FE (U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC*, int32_t, const RuntimeMethod*))U3CReverseIteratorU3Ed__79_1__ctor_m685BB5646EEC473221EEEEB5198F7F021741E8FE_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline RuntimeObject* U3CReverseIteratorU3Ed__79_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m11F12AD959FE78FE9411817870AE1DF7BE612689 (U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC*, const RuntimeMethod*))U3CReverseIteratorU3Ed__79_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m11F12AD959FE78FE9411817870AE1DF7BE612689_gshared)(__this, method);
}
inline void Buffer_1__ctor_m55137EEF7AF9E0883A438776A066DA5520FFDE49 (Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697* __this, RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697*, RuntimeObject*, const RuntimeMethod*))Buffer_1__ctor_m55137EEF7AF9E0883A438776A066DA5520FFDE49_gshared)(__this, ___0_source, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SwitchToThreadPoolAwaitable_t5608C9A301A9B88DA3F77CB7E2AB2082321CB053 UniTask_SwitchToThreadPool_m4A79CBAD5A44C5037CD0A366CA801875F5206010 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9 SwitchToThreadPoolAwaitable_GetAwaiter_m8720CC348C2B3A1A6CF1317042436D3F8307BD29 (SwitchToThreadPoolAwaitable_t5608C9A301A9B88DA3F77CB7E2AB2082321CB053* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_mC1677DC7707E92D236DF2BA1144FFABF6E45D92E (Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Awaiter_GetResult_mF089C80E7D6C1B3FFA735B7F5B28098339127021 (Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaitable_t8A3F912BCBF6C4BB5599E92BA0159168B4E14B3A UniTask_Yield_m3362988BC281D8FBE6DE9D42C3123214920954DE (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220 YieldAwaitable_GetAwaiter_m56B2A4754DC798098A8ABD5DE2E6780BCEB64C7C (YieldAwaitable_t8A3F912BCBF6C4BB5599E92BA0159168B4E14B3A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m380AD66439FAC48688A6348C575A8122F672D61A (Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Awaiter_GetResult_m65B26AEE969C14E1A7010BCDF845982D6EE1A0AB (Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220* __this, const RuntimeMethod* method) ;
inline bool UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037 (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, bool ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*, bool, const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_gshared)(__this, ___0_result, method);
}
inline bool UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6 (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, Exception_t* ___0_error, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*, Exception_t*, const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_gshared)(__this, ___0_error, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1 (CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389* __this, const RuntimeMethod* method) ;
inline void Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* __this, Exception_t* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*, Exception_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
inline void U3CSelectManyIteratorU3Ed__17_2_U3CU3Em__Finally1_mDD56A26381C1903838E7979064E0C853B51985E2 (U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460*, const RuntimeMethod*))U3CSelectManyIteratorU3Ed__17_2_U3CU3Em__Finally1_mDD56A26381C1903838E7979064E0C853B51985E2_gshared)(__this, method);
}
inline void U3CSelectManyIteratorU3Ed__17_2_U3CU3Em__Finally2_m2684EF307EE94963840DE7E15C376CF4A78726DB (U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460*, const RuntimeMethod*))U3CSelectManyIteratorU3Ed__17_2_U3CU3Em__Finally2_m2684EF307EE94963840DE7E15C376CF4A78726DB_gshared)(__this, method);
}
inline void U3CSelectManyIteratorU3Ed__17_2_System_IDisposable_Dispose_m84833338745BD5FCCC685381F7B750A8B7761242 (U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460*, const RuntimeMethod*))U3CSelectManyIteratorU3Ed__17_2_System_IDisposable_Dispose_m84833338745BD5FCCC685381F7B750A8B7761242_gshared)(__this, method);
}
inline RuntimeObject* Func_2_Invoke_m6DD952B505787ACA6066464C5B6BF31ECB4C6372_inline (Func_2_t9F45EF9F857977243C345F24571962D2521DB4A1* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_t9F45EF9F857977243C345F24571962D2521DB4A1*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline)(__this, ___0_arg, method);
}
inline void U3CSelectManyIteratorU3Ed__17_2__ctor_m97C1241630456070A85E9F50F33A4425F251826B (U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460*, int32_t, const RuntimeMethod*))U3CSelectManyIteratorU3Ed__17_2__ctor_m97C1241630456070A85E9F50F33A4425F251826B_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline RuntimeObject* U3CSelectManyIteratorU3Ed__17_2_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_mBE4D4722EA426B3413FA95791FE4F856CEDB2122 (U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460*, const RuntimeMethod*))U3CSelectManyIteratorU3Ed__17_2_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_mBE4D4722EA426B3413FA95791FE4F856CEDB2122_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Error_MoreThanOneElement_mD66FED8AE9CF26384AFAA60BCFF0216F9490ECEE_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___0_status, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopHelper_AddContinuation_m5B8F03E45A820D91B17CFA56AA93E7444BEC17E0 (int32_t ___0_timing, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_continuation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3 (Exception_t* ___0_ex, const RuntimeMethod* method) ;
inline void Awaiter__ctor_mB257E1F06754BE00907B9F223E1CED109BE0A9E9_inline (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* __this, UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*, UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46*, const RuntimeMethod*))Awaiter__ctor_mB257E1F06754BE00907B9F223E1CED109BE0A9E9_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_m5810EA6A8A912CF428FDABFDD39E978F898ABCF6_inline (UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46*, const RuntimeMethod*))UniTask_1_get_Status_m5810EA6A8A912CF428FDABFDD39E978F898ABCF6_gshared_inline)(__this, method);
}
inline void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, const RuntimeMethod*))Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, const RuntimeMethod*))UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline)(__this, method);
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
inline void Awaiter__ctor_m2D382159CB5D690EEEDB435E6183DBDBD9560CA3_inline (Awaiter_t8953594D03299DE782894F4A865CED79F2504266* __this, UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t8953594D03299DE782894F4A865CED79F2504266*, UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48*, const RuntimeMethod*))Awaiter__ctor_m2D382159CB5D690EEEDB435E6183DBDBD9560CA3_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_m688D534E5DE535F713C9D2C84744BB51F95416F5_inline (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48*, const RuntimeMethod*))UniTask_1_get_Status_m688D534E5DE535F713C9D2C84744BB51F95416F5_gshared_inline)(__this, method);
}
inline void Awaiter__ctor_m2F2F413B4B8E320AC83D464DE19E5B81D8616185_inline (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* __this, UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E*, UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72*, const RuntimeMethod*))Awaiter__ctor_m2F2F413B4B8E320AC83D464DE19E5B81D8616185_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_m621A3ED628D31F42C69A04584E93A8A02E381117_inline (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72*, const RuntimeMethod*))UniTask_1_get_Status_m621A3ED628D31F42C69A04584E93A8A02E381117_gshared_inline)(__this, method);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__34_1__ctor_mD8B4F4A89BD92F364CFDE1E52E4F6D685C0DA38D_gshared (U3CMinAwaitAsyncU3Ed__34_1_t68A8606EE27F3962E5D68168CF31BC0D359DB041* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__34_1_MoveNext_mA28F0961BB0D212E4DDB7852D5D6C3BF299BFBFF_gshared (U3CMinAwaitAsyncU3Ed__34_1_t68A8606EE27F3962E5D68168CF31BC0D359DB041* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t5D719ED09E5EF8E04CFDB202C6FAAE0ECF7B0479 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t5D719ED09E5EF8E04CFDB202C6FAAE0ECF7B0479);
	const Il2CppFullySharedGenericAny L_42 = L_10;
	int32_t V_0 = 0;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitAsyncU3Ed__34_1_t68A8606EE27F3962E5D68168CF31BC0D359DB041* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_15;
	memset((&V_15), 0, sizeof(V_15));
	RuntimeObject* V_16 = NULL;
	bool V_17 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_18;
	memset((&V_18), 0, sizeof(V_18));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_19;
	memset((&V_19), 0, sizeof(V_19));
	Exception_t* V_20 = NULL;
	int32_t V_21 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
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
			goto IL_03af_1;
		}

IL_001a_1:
		{
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_3 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CvalueU3E5__1_5);
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
				switch (L_7)
				{
					case 0:
					{
						goto IL_0065_2;
					}
					case 1:
					{
						goto IL_0067_2;
					}
					case 2:
					{
						goto IL_006c_2;
					}
					case 3:
					{
						goto IL_0071_2;
					}
				}
			}
			{
				goto IL_0076_2;
			}

IL_0065_2:
			{
				goto IL_00cd_2;
			}

IL_0067_2:
			{
				goto IL_0171_2;
			}

IL_006c_2:
			{
				goto IL_0214_2;
			}

IL_0071_2:
			{
				goto IL_0305_2;
			}

IL_0076_2:
			{
				goto IL_0129_2;
			}

IL_007c_2:
			{
				Func_2_t9F80A31065CD628F063DA0D192A111706F695666* L_8 = (Func_2_t9F80A31065CD628F063DA0D192A111706F695666*)__this->___selector_3;
				RuntimeObject* L_9 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46 L_11;
				L_11 = InvokerFuncInvoker1< UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				V_3 = L_11;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_12;
				L_12 = UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_inline((&V_3), UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_RuntimeMethod_var);
				V_2 = L_12;
				bool L_13;
				L_13 = Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_inline((&V_2), Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_00e9_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state_0 = L_14;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_15 = V_2;
				__this->___U3CU3Eu__1_15 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_15))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_16 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*, U3CMinAwaitAsyncU3Ed__34_1_t68A8606EE27F3962E5D68168CF31BC0D359DB041**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_16, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0470;
			}

IL_00cd_2:
			{
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_17 = (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91)__this->___U3CU3Eu__1_15;
				V_2 = L_17;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* L_18 = (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*)(&__this->___U3CU3Eu__1_15);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state_0 = L_19;
			}

IL_00e9_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_20;
				L_20 = Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_inline((&V_2), Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_RuntimeMethod_var);
				__this->___U3CU3Es__6_10 = L_20;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_21 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75)__this->___U3CU3Es__6_10;
				__this->___U3CvalueU3E5__1_5 = L_21;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_22 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CU3Es__6_10);
				il2cpp_codegen_initobj(L_22, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_23 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CvalueU3E5__1_5);
				bool L_24;
				L_24 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline(L_23, Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				V_5 = (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
				bool L_25 = V_5;
				if (!L_25)
				{
					goto IL_0124_2;
				}
			}
			{
				goto IL_0129_2;
			}

IL_0124_2:
			{
				goto IL_01bb_2;
			}

IL_0129_2:
			{
				RuntimeObject* L_26 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
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
					goto IL_018e_2;
				}
			}
			{
				int32_t L_30 = 1;
				V_0 = L_30;
				__this->___U3CU3E1__state_0 = L_30;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = V_7;
				__this->___U3CU3Eu__2_16 = L_31;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_16))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_32 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitAsyncU3Ed__34_1_t68A8606EE27F3962E5D68168CF31BC0D359DB041**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_32, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0470;
			}

IL_0171_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_16;
				V_7 = L_33;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_16);
				il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->___U3CU3E1__state_0 = L_35;
			}

IL_018e_2:
			{
				bool L_36;
				L_36 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_36;
				bool L_37 = (bool)__this->___U3CU3Es__7_11;
				V_6 = L_37;
				bool L_38 = V_6;
				if (L_38)
				{
					goto IL_007c_2;
				}
			}
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_39 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CU3Es__5_9);
				il2cpp_codegen_initobj(L_39, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
				goto IL_0341_2;
			}

IL_01bb_2:
			{
				goto IL_02bd_2;
			}

IL_01c1_2:
			{
				Func_2_t9F80A31065CD628F063DA0D192A111706F695666* L_40 = (Func_2_t9F80A31065CD628F063DA0D192A111706F695666*)__this->___selector_3;
				RuntimeObject* L_41 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_41);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_41, (Il2CppFullySharedGenericAny*)L_42);
				NullCheck(L_40);
				UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46 L_43;
				L_43 = InvokerFuncInvoker1< UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_40, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_42: *(void**)L_42));
				V_3 = L_43;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_44;
				L_44 = UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_inline((&V_3), UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_RuntimeMethod_var);
				V_9 = L_44;
				bool L_45;
				L_45 = Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_inline((&V_9), Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_RuntimeMethod_var);
				if (L_45)
				{
					goto IL_0231_2;
				}
			}
			{
				int32_t L_46 = 2;
				V_0 = L_46;
				__this->___U3CU3E1__state_0 = L_46;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_47 = V_9;
				__this->___U3CU3Eu__1_15 = L_47;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_15))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_48 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*, U3CMinAwaitAsyncU3Ed__34_1_t68A8606EE27F3962E5D68168CF31BC0D359DB041**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_48, (&V_9), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0470;
			}

IL_0214_2:
			{
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_49 = (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91)__this->___U3CU3Eu__1_15;
				V_9 = L_49;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* L_50 = (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*)(&__this->___U3CU3Eu__1_15);
				il2cpp_codegen_initobj(L_50, sizeof(Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91));
				int32_t L_51 = (-1);
				V_0 = L_51;
				__this->___U3CU3E1__state_0 = L_51;
			}

IL_0231_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_52;
				L_52 = Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_inline((&V_9), Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_RuntimeMethod_var);
				__this->___U3CU3Es__9_13 = L_52;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_53 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75)__this->___U3CU3Es__9_13;
				__this->___U3CxU3E5__8_12 = L_53;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_54 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CU3Es__9_13);
				il2cpp_codegen_initobj(L_54, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_55 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CxU3E5__8_12);
				bool L_56;
				L_56 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline(L_55, Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				V_10 = (bool)((((int32_t)L_56) == ((int32_t)0))? 1 : 0);
				bool L_57 = V_10;
				if (!L_57)
				{
					goto IL_026c_2;
				}
			}
			{
				goto IL_02bd_2;
			}

IL_026c_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_58 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75)__this->___U3CvalueU3E5__1_5;
				V_12 = L_58;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_59 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75)__this->___U3CxU3E5__8_12;
				V_13 = L_59;
				float L_60;
				L_60 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline((&V_12), Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
				float L_61;
				L_61 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline((&V_13), Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
				bool L_62;
				L_62 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&V_12), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				bool L_63;
				L_63 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&V_13), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				V_11 = (bool)((int32_t)(((((float)L_60) > ((float)L_61))? 1 : 0)&((int32_t)((int32_t)L_62&(int32_t)L_63))));
				bool L_64 = V_11;
				if (!L_64)
				{
					goto IL_02b0_2;
				}
			}
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_65 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75)__this->___U3CxU3E5__8_12;
				__this->___U3CvalueU3E5__1_5 = L_65;
			}

IL_02b0_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_66 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CxU3E5__8_12);
				il2cpp_codegen_initobj(L_66, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
			}

IL_02bd_2:
			{
				RuntimeObject* L_67 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_67);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_68;
				L_68 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_67);
				V_8 = L_68;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_69;
				L_69 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_15 = L_69;
				bool L_70;
				L_70 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_15), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_70)
				{
					goto IL_0322_2;
				}
			}
			{
				int32_t L_71 = 3;
				V_0 = L_71;
				__this->___U3CU3E1__state_0 = L_71;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_72 = V_15;
				__this->___U3CU3Eu__2_16 = L_72;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_16))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_73 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitAsyncU3Ed__34_1_t68A8606EE27F3962E5D68168CF31BC0D359DB041**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_73, (&V_15), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0470;
			}

IL_0305_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_74 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_16;
				V_15 = L_74;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_75 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_16);
				il2cpp_codegen_initobj(L_75, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_76 = (-1);
				V_0 = L_76;
				__this->___U3CU3E1__state_0 = L_76;
			}

IL_0322_2:
			{
				bool L_77;
				L_77 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_15), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__10_14 = L_77;
				bool L_78 = (bool)__this->___U3CU3Es__10_14;
				V_14 = L_78;
				bool L_79 = V_14;
				if (L_79)
				{
					goto IL_01c1_2;
				}
			}
			{
				goto IL_0356_1;
			}

IL_0341_2:
			{
				__this->___U3CU3Es__4_8 = 1;
				goto IL_0356_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_034a_1;
			}
			throw e;
		}

CATCH_034a_1:
		{
			V_16 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_80 = V_16;
			__this->___U3CU3Es__3_7 = L_80;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_80);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0356_1;
		}

IL_0356_1:
		{
			RuntimeObject* L_81 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_17 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_81) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_82 = V_17;
			if (!L_82)
			{
				goto IL_03d5_1;
			}
		}
		{
			RuntimeObject* L_83 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_83);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_84;
			L_84 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_83);
			V_19 = L_84;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_85;
			L_85 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_19), NULL);
			V_18 = L_85;
			bool L_86;
			L_86 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_18), NULL);
			if (L_86)
			{
				goto IL_03cc_1;
			}
		}
		{
			int32_t L_87 = 4;
			V_0 = L_87;
			__this->___U3CU3E1__state_0 = L_87;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_88 = V_18;
			__this->___U3CU3Eu__3_17 = L_88;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_17))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_89 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitAsyncU3Ed__34_1_t68A8606EE27F3962E5D68168CF31BC0D359DB041**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_89, (&V_18), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0470;
		}

IL_03af_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_90 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_17;
			V_18 = L_90;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_91 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_17);
			il2cpp_codegen_initobj(L_91, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_92 = (-1);
			V_0 = L_92;
			__this->___U3CU3E1__state_0 = L_92;
		}

IL_03cc_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_18), NULL);
		}

IL_03d5_1:
		{
			RuntimeObject* L_93 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_16 = L_93;
			RuntimeObject* L_94 = V_16;
			if (!L_94)
			{
				goto IL_03ff_1;
			}
		}
		{
			RuntimeObject* L_95 = V_16;
			V_20 = ((Exception_t*)IsInstClass((RuntimeObject*)L_95, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_96 = V_20;
			if (L_96)
			{
				goto IL_03f2_1;
			}
		}
		{
			RuntimeObject* L_97 = V_16;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_97, method);
		}

IL_03f2_1:
		{
			Exception_t* L_98 = V_20;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_99;
			L_99 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_98, NULL);
			NullCheck(L_99);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_99, NULL);
		}

IL_03ff_1:
		{
			int32_t L_100 = (int32_t)__this->___U3CU3Es__4_8;
			V_21 = L_100;
			int32_t L_101 = V_21;
			if ((((int32_t)L_101) == ((int32_t)1)))
			{
				goto IL_040e_1;
			}
		}
		{
			goto IL_0417_1;
		}

IL_040e_1:
		{
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_102 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75)__this->___U3CU3Es__5_9;
			V_1 = L_102;
			goto IL_0454;
		}

IL_0417_1:
		{
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_103 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CU3Es__5_9);
			il2cpp_codegen_initobj(L_103, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_104 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75)__this->___U3CvalueU3E5__1_5;
			V_1 = L_104;
			goto IL_0454;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0433;
		}
		throw e;
	}

CATCH_0433:
	{
		V_20 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_105 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_106 = V_20;
		AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_inline(L_105, L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0470;
	}

IL_0454:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_107 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_108 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_inline(L_107, L_108, AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_RuntimeMethod_var);
	}

IL_0470:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__34_1_SetStateMachine_m9C2E48DB26ECDC7277C29C364A43DE2164C392F2_gshared (U3CMinAwaitAsyncU3Ed__34_1_t68A8606EE27F3962E5D68168CF31BC0D359DB041* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__38_1__ctor_m4A0EBAE03B1C15E66751D56E9E0D72D57FF8BB36_gshared (U3CMinAwaitAsyncU3Ed__38_1_t0ABAF5F704BB15DC51A1D769D504B631F649F927* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__38_1_MoveNext_m7F3EE18C5766B320961DF822F26E95822096E114_gshared (U3CMinAwaitAsyncU3Ed__38_1_t0ABAF5F704BB15DC51A1D769D504B631F649F927* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tBDDA13F848B5CFEF2436CD48420D092062B397B4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tBDDA13F848B5CFEF2436CD48420D092062B397B4);
	const Il2CppFullySharedGenericAny L_42 = L_10;
	int32_t V_0 = 0;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitAsyncU3Ed__38_1_t0ABAF5F704BB15DC51A1D769D504B631F649F927* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_15;
	memset((&V_15), 0, sizeof(V_15));
	RuntimeObject* V_16 = NULL;
	bool V_17 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_18;
	memset((&V_18), 0, sizeof(V_18));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_19;
	memset((&V_19), 0, sizeof(V_19));
	Exception_t* V_20 = NULL;
	int32_t V_21 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
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
			goto IL_03af_1;
		}

IL_001a_1:
		{
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_3 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CvalueU3E5__1_5);
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
				switch (L_7)
				{
					case 0:
					{
						goto IL_0065_2;
					}
					case 1:
					{
						goto IL_0067_2;
					}
					case 2:
					{
						goto IL_006c_2;
					}
					case 3:
					{
						goto IL_0071_2;
					}
				}
			}
			{
				goto IL_0076_2;
			}

IL_0065_2:
			{
				goto IL_00cd_2;
			}

IL_0067_2:
			{
				goto IL_0171_2;
			}

IL_006c_2:
			{
				goto IL_0214_2;
			}

IL_0071_2:
			{
				goto IL_0305_2;
			}

IL_0076_2:
			{
				goto IL_0129_2;
			}

IL_007c_2:
			{
				Func_2_tEBD22D2F4376CEDF9152BDE05B6E363699F0C7E1* L_8 = (Func_2_tEBD22D2F4376CEDF9152BDE05B6E363699F0C7E1*)__this->___selector_3;
				RuntimeObject* L_9 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E L_11;
				L_11 = InvokerFuncInvoker1< UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				V_3 = L_11;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_12;
				L_12 = UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_inline((&V_3), UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_RuntimeMethod_var);
				V_2 = L_12;
				bool L_13;
				L_13 = Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_inline((&V_2), Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_00e9_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state_0 = L_14;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_15 = V_2;
				__this->___U3CU3Eu__1_15 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_15))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_16 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0*, U3CMinAwaitAsyncU3Ed__38_1_t0ABAF5F704BB15DC51A1D769D504B631F649F927**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_16, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0470;
			}

IL_00cd_2:
			{
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_17 = (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0)__this->___U3CU3Eu__1_15;
				V_2 = L_17;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* L_18 = (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0*)(&__this->___U3CU3Eu__1_15);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state_0 = L_19;
			}

IL_00e9_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_20;
				L_20 = Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_inline((&V_2), Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_RuntimeMethod_var);
				__this->___U3CU3Es__6_10 = L_20;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_21 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165)__this->___U3CU3Es__6_10;
				__this->___U3CvalueU3E5__1_5 = L_21;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_22 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CU3Es__6_10);
				il2cpp_codegen_initobj(L_22, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_23 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CvalueU3E5__1_5);
				bool L_24;
				L_24 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline(L_23, Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				V_5 = (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
				bool L_25 = V_5;
				if (!L_25)
				{
					goto IL_0124_2;
				}
			}
			{
				goto IL_0129_2;
			}

IL_0124_2:
			{
				goto IL_01bb_2;
			}

IL_0129_2:
			{
				RuntimeObject* L_26 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
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
					goto IL_018e_2;
				}
			}
			{
				int32_t L_30 = 1;
				V_0 = L_30;
				__this->___U3CU3E1__state_0 = L_30;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = V_7;
				__this->___U3CU3Eu__2_16 = L_31;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_16))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_32 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitAsyncU3Ed__38_1_t0ABAF5F704BB15DC51A1D769D504B631F649F927**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_32, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0470;
			}

IL_0171_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_16;
				V_7 = L_33;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_16);
				il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->___U3CU3E1__state_0 = L_35;
			}

IL_018e_2:
			{
				bool L_36;
				L_36 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_36;
				bool L_37 = (bool)__this->___U3CU3Es__7_11;
				V_6 = L_37;
				bool L_38 = V_6;
				if (L_38)
				{
					goto IL_007c_2;
				}
			}
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_39 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CU3Es__5_9);
				il2cpp_codegen_initobj(L_39, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
				goto IL_0341_2;
			}

IL_01bb_2:
			{
				goto IL_02bd_2;
			}

IL_01c1_2:
			{
				Func_2_tEBD22D2F4376CEDF9152BDE05B6E363699F0C7E1* L_40 = (Func_2_tEBD22D2F4376CEDF9152BDE05B6E363699F0C7E1*)__this->___selector_3;
				RuntimeObject* L_41 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_41);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_41, (Il2CppFullySharedGenericAny*)L_42);
				NullCheck(L_40);
				UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E L_43;
				L_43 = InvokerFuncInvoker1< UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_40, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_42: *(void**)L_42));
				V_3 = L_43;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_44;
				L_44 = UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_inline((&V_3), UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_RuntimeMethod_var);
				V_9 = L_44;
				bool L_45;
				L_45 = Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_inline((&V_9), Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_RuntimeMethod_var);
				if (L_45)
				{
					goto IL_0231_2;
				}
			}
			{
				int32_t L_46 = 2;
				V_0 = L_46;
				__this->___U3CU3E1__state_0 = L_46;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_47 = V_9;
				__this->___U3CU3Eu__1_15 = L_47;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_15))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_48 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0*, U3CMinAwaitAsyncU3Ed__38_1_t0ABAF5F704BB15DC51A1D769D504B631F649F927**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_48, (&V_9), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0470;
			}

IL_0214_2:
			{
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_49 = (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0)__this->___U3CU3Eu__1_15;
				V_9 = L_49;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* L_50 = (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0*)(&__this->___U3CU3Eu__1_15);
				il2cpp_codegen_initobj(L_50, sizeof(Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0));
				int32_t L_51 = (-1);
				V_0 = L_51;
				__this->___U3CU3E1__state_0 = L_51;
			}

IL_0231_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_52;
				L_52 = Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_inline((&V_9), Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_RuntimeMethod_var);
				__this->___U3CU3Es__9_13 = L_52;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_53 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165)__this->___U3CU3Es__9_13;
				__this->___U3CxU3E5__8_12 = L_53;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_54 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CU3Es__9_13);
				il2cpp_codegen_initobj(L_54, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_55 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CxU3E5__8_12);
				bool L_56;
				L_56 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline(L_55, Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				V_10 = (bool)((((int32_t)L_56) == ((int32_t)0))? 1 : 0);
				bool L_57 = V_10;
				if (!L_57)
				{
					goto IL_026c_2;
				}
			}
			{
				goto IL_02bd_2;
			}

IL_026c_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_58 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165)__this->___U3CvalueU3E5__1_5;
				V_12 = L_58;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_59 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165)__this->___U3CxU3E5__8_12;
				V_13 = L_59;
				double L_60;
				L_60 = Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline((&V_12), Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
				double L_61;
				L_61 = Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline((&V_13), Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
				bool L_62;
				L_62 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&V_12), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				bool L_63;
				L_63 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&V_13), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				V_11 = (bool)((int32_t)(((((double)L_60) > ((double)L_61))? 1 : 0)&((int32_t)((int32_t)L_62&(int32_t)L_63))));
				bool L_64 = V_11;
				if (!L_64)
				{
					goto IL_02b0_2;
				}
			}
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_65 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165)__this->___U3CxU3E5__8_12;
				__this->___U3CvalueU3E5__1_5 = L_65;
			}

IL_02b0_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_66 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CxU3E5__8_12);
				il2cpp_codegen_initobj(L_66, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
			}

IL_02bd_2:
			{
				RuntimeObject* L_67 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_67);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_68;
				L_68 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_67);
				V_8 = L_68;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_69;
				L_69 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_15 = L_69;
				bool L_70;
				L_70 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_15), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_70)
				{
					goto IL_0322_2;
				}
			}
			{
				int32_t L_71 = 3;
				V_0 = L_71;
				__this->___U3CU3E1__state_0 = L_71;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_72 = V_15;
				__this->___U3CU3Eu__2_16 = L_72;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_16))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_73 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitAsyncU3Ed__38_1_t0ABAF5F704BB15DC51A1D769D504B631F649F927**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_73, (&V_15), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0470;
			}

IL_0305_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_74 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_16;
				V_15 = L_74;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_75 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_16);
				il2cpp_codegen_initobj(L_75, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_76 = (-1);
				V_0 = L_76;
				__this->___U3CU3E1__state_0 = L_76;
			}

IL_0322_2:
			{
				bool L_77;
				L_77 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_15), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__10_14 = L_77;
				bool L_78 = (bool)__this->___U3CU3Es__10_14;
				V_14 = L_78;
				bool L_79 = V_14;
				if (L_79)
				{
					goto IL_01c1_2;
				}
			}
			{
				goto IL_0356_1;
			}

IL_0341_2:
			{
				__this->___U3CU3Es__4_8 = 1;
				goto IL_0356_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_034a_1;
			}
			throw e;
		}

CATCH_034a_1:
		{
			V_16 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_80 = V_16;
			__this->___U3CU3Es__3_7 = L_80;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_80);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0356_1;
		}

IL_0356_1:
		{
			RuntimeObject* L_81 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_17 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_81) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_82 = V_17;
			if (!L_82)
			{
				goto IL_03d5_1;
			}
		}
		{
			RuntimeObject* L_83 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_83);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_84;
			L_84 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_83);
			V_19 = L_84;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_85;
			L_85 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_19), NULL);
			V_18 = L_85;
			bool L_86;
			L_86 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_18), NULL);
			if (L_86)
			{
				goto IL_03cc_1;
			}
		}
		{
			int32_t L_87 = 4;
			V_0 = L_87;
			__this->___U3CU3E1__state_0 = L_87;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_88 = V_18;
			__this->___U3CU3Eu__3_17 = L_88;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_17))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_89 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitAsyncU3Ed__38_1_t0ABAF5F704BB15DC51A1D769D504B631F649F927**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_89, (&V_18), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0470;
		}

IL_03af_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_90 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_17;
			V_18 = L_90;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_91 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_17);
			il2cpp_codegen_initobj(L_91, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_92 = (-1);
			V_0 = L_92;
			__this->___U3CU3E1__state_0 = L_92;
		}

IL_03cc_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_18), NULL);
		}

IL_03d5_1:
		{
			RuntimeObject* L_93 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_16 = L_93;
			RuntimeObject* L_94 = V_16;
			if (!L_94)
			{
				goto IL_03ff_1;
			}
		}
		{
			RuntimeObject* L_95 = V_16;
			V_20 = ((Exception_t*)IsInstClass((RuntimeObject*)L_95, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_96 = V_20;
			if (L_96)
			{
				goto IL_03f2_1;
			}
		}
		{
			RuntimeObject* L_97 = V_16;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_97, method);
		}

IL_03f2_1:
		{
			Exception_t* L_98 = V_20;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_99;
			L_99 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_98, NULL);
			NullCheck(L_99);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_99, NULL);
		}

IL_03ff_1:
		{
			int32_t L_100 = (int32_t)__this->___U3CU3Es__4_8;
			V_21 = L_100;
			int32_t L_101 = V_21;
			if ((((int32_t)L_101) == ((int32_t)1)))
			{
				goto IL_040e_1;
			}
		}
		{
			goto IL_0417_1;
		}

IL_040e_1:
		{
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_102 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165)__this->___U3CU3Es__5_9;
			V_1 = L_102;
			goto IL_0454;
		}

IL_0417_1:
		{
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_103 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CU3Es__5_9);
			il2cpp_codegen_initobj(L_103, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_104 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165)__this->___U3CvalueU3E5__1_5;
			V_1 = L_104;
			goto IL_0454;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0433;
		}
		throw e;
	}

CATCH_0433:
	{
		V_20 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_105 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_106 = V_20;
		AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_inline(L_105, L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0470;
	}

IL_0454:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_107 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_108 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_inline(L_107, L_108, AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
	}

IL_0470:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__38_1_SetStateMachine_m61E486FAED5FA5E9BD4408956012BD42B388C6B1_gshared (U3CMinAwaitAsyncU3Ed__38_1_t0ABAF5F704BB15DC51A1D769D504B631F649F927* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__42_1__ctor_mDD7FACE6DB5E9F263ABF5A0158F290ECCC2C2976_gshared (U3CMinAwaitAsyncU3Ed__42_1_tC25E8DC6D95DDD60994DF050EE60BEAF598A5CD4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__42_1_MoveNext_m3516D4CA9101F66FA70A3BDC75BCE578D3B601A4_gshared (U3CMinAwaitAsyncU3Ed__42_1_tC25E8DC6D95DDD60994DF050EE60BEAF598A5CD4* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tCB2012D315D9A3AD39738A32DF04C656F8DA21EF = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tCB2012D315D9A3AD39738A32DF04C656F8DA21EF);
	const Il2CppFullySharedGenericAny L_42 = L_10;
	int32_t V_0 = 0;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitAsyncU3Ed__42_1_tC25E8DC6D95DDD60994DF050EE60BEAF598A5CD4* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_12;
	memset((&V_12), 0, sizeof(V_12));
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_15;
	memset((&V_15), 0, sizeof(V_15));
	RuntimeObject* V_16 = NULL;
	bool V_17 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_18;
	memset((&V_18), 0, sizeof(V_18));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_19;
	memset((&V_19), 0, sizeof(V_19));
	Exception_t* V_20 = NULL;
	int32_t V_21 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
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
			goto IL_03b2_1;
		}

IL_001a_1:
		{
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_3 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CvalueU3E5__1_5);
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
				switch (L_7)
				{
					case 0:
					{
						goto IL_0065_2;
					}
					case 1:
					{
						goto IL_0067_2;
					}
					case 2:
					{
						goto IL_006c_2;
					}
					case 3:
					{
						goto IL_0071_2;
					}
				}
			}
			{
				goto IL_0076_2;
			}

IL_0065_2:
			{
				goto IL_00cd_2;
			}

IL_0067_2:
			{
				goto IL_0171_2;
			}

IL_006c_2:
			{
				goto IL_0214_2;
			}

IL_0071_2:
			{
				goto IL_0308_2;
			}

IL_0076_2:
			{
				goto IL_0129_2;
			}

IL_007c_2:
			{
				Func_2_t041ABB3F33302FF5B428FF832CE110343F4DA4C6* L_8 = (Func_2_t041ABB3F33302FF5B428FF832CE110343F4DA4C6*)__this->___selector_3;
				RuntimeObject* L_9 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F L_11;
				L_11 = InvokerFuncInvoker1< UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				V_3 = L_11;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_12;
				L_12 = UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_inline((&V_3), UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_RuntimeMethod_var);
				V_2 = L_12;
				bool L_13;
				L_13 = Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_inline((&V_2), Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_00e9_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state_0 = L_14;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_15 = V_2;
				__this->___U3CU3Eu__1_15 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_15))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_16 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51*, U3CMinAwaitAsyncU3Ed__42_1_tC25E8DC6D95DDD60994DF050EE60BEAF598A5CD4**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_16, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0473;
			}

IL_00cd_2:
			{
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_17 = (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51)__this->___U3CU3Eu__1_15;
				V_2 = L_17;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* L_18 = (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51*)(&__this->___U3CU3Eu__1_15);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state_0 = L_19;
			}

IL_00e9_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_20;
				L_20 = Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_inline((&V_2), Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_RuntimeMethod_var);
				__this->___U3CU3Es__6_10 = L_20;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_21 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB)__this->___U3CU3Es__6_10;
				__this->___U3CvalueU3E5__1_5 = L_21;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_22 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CU3Es__6_10);
				il2cpp_codegen_initobj(L_22, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_23 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CvalueU3E5__1_5);
				bool L_24;
				L_24 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline(L_23, Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				V_5 = (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
				bool L_25 = V_5;
				if (!L_25)
				{
					goto IL_0124_2;
				}
			}
			{
				goto IL_0129_2;
			}

IL_0124_2:
			{
				goto IL_01bb_2;
			}

IL_0129_2:
			{
				RuntimeObject* L_26 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
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
					goto IL_018e_2;
				}
			}
			{
				int32_t L_30 = 1;
				V_0 = L_30;
				__this->___U3CU3E1__state_0 = L_30;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = V_7;
				__this->___U3CU3Eu__2_16 = L_31;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_16))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_32 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitAsyncU3Ed__42_1_tC25E8DC6D95DDD60994DF050EE60BEAF598A5CD4**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_32, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0473;
			}

IL_0171_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_16;
				V_7 = L_33;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_16);
				il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->___U3CU3E1__state_0 = L_35;
			}

IL_018e_2:
			{
				bool L_36;
				L_36 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_36;
				bool L_37 = (bool)__this->___U3CU3Es__7_11;
				V_6 = L_37;
				bool L_38 = V_6;
				if (L_38)
				{
					goto IL_007c_2;
				}
			}
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_39 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CU3Es__5_9);
				il2cpp_codegen_initobj(L_39, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
				goto IL_0344_2;
			}

IL_01bb_2:
			{
				goto IL_02c0_2;
			}

IL_01c1_2:
			{
				Func_2_t041ABB3F33302FF5B428FF832CE110343F4DA4C6* L_40 = (Func_2_t041ABB3F33302FF5B428FF832CE110343F4DA4C6*)__this->___selector_3;
				RuntimeObject* L_41 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_41);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_41, (Il2CppFullySharedGenericAny*)L_42);
				NullCheck(L_40);
				UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F L_43;
				L_43 = InvokerFuncInvoker1< UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_40, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_42: *(void**)L_42));
				V_3 = L_43;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_44;
				L_44 = UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_inline((&V_3), UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_RuntimeMethod_var);
				V_9 = L_44;
				bool L_45;
				L_45 = Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_inline((&V_9), Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_RuntimeMethod_var);
				if (L_45)
				{
					goto IL_0231_2;
				}
			}
			{
				int32_t L_46 = 2;
				V_0 = L_46;
				__this->___U3CU3E1__state_0 = L_46;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_47 = V_9;
				__this->___U3CU3Eu__1_15 = L_47;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_15))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_48 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51*, U3CMinAwaitAsyncU3Ed__42_1_tC25E8DC6D95DDD60994DF050EE60BEAF598A5CD4**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_48, (&V_9), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0473;
			}

IL_0214_2:
			{
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_49 = (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51)__this->___U3CU3Eu__1_15;
				V_9 = L_49;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* L_50 = (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51*)(&__this->___U3CU3Eu__1_15);
				il2cpp_codegen_initobj(L_50, sizeof(Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51));
				int32_t L_51 = (-1);
				V_0 = L_51;
				__this->___U3CU3E1__state_0 = L_51;
			}

IL_0231_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_52;
				L_52 = Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_inline((&V_9), Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_RuntimeMethod_var);
				__this->___U3CU3Es__9_13 = L_52;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_53 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB)__this->___U3CU3Es__9_13;
				__this->___U3CxU3E5__8_12 = L_53;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_54 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CU3Es__9_13);
				il2cpp_codegen_initobj(L_54, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_55 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CxU3E5__8_12);
				bool L_56;
				L_56 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline(L_55, Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				V_10 = (bool)((((int32_t)L_56) == ((int32_t)0))? 1 : 0);
				bool L_57 = V_10;
				if (!L_57)
				{
					goto IL_026c_2;
				}
			}
			{
				goto IL_02c0_2;
			}

IL_026c_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_58 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB)__this->___U3CvalueU3E5__1_5;
				V_12 = L_58;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_59 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB)__this->___U3CxU3E5__8_12;
				V_13 = L_59;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_60;
				L_60 = Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline((&V_12), Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_61;
				L_61 = Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline((&V_13), Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				bool L_62;
				L_62 = Decimal_op_GreaterThan_m549F09BF0C53D8611E550CA9CCB53543D6DAF717(L_60, L_61, NULL);
				bool L_63;
				L_63 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline((&V_12), Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				bool L_64;
				L_64 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline((&V_13), Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				V_11 = (bool)((int32_t)((int32_t)L_62&((int32_t)((int32_t)L_63&(int32_t)L_64))));
				bool L_65 = V_11;
				if (!L_65)
				{
					goto IL_02b3_2;
				}
			}
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_66 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB)__this->___U3CxU3E5__8_12;
				__this->___U3CvalueU3E5__1_5 = L_66;
			}

IL_02b3_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_67 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CxU3E5__8_12);
				il2cpp_codegen_initobj(L_67, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
			}

IL_02c0_2:
			{
				RuntimeObject* L_68 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_68);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_69;
				L_69 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_68);
				V_8 = L_69;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_70;
				L_70 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_15 = L_70;
				bool L_71;
				L_71 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_15), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_71)
				{
					goto IL_0325_2;
				}
			}
			{
				int32_t L_72 = 3;
				V_0 = L_72;
				__this->___U3CU3E1__state_0 = L_72;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_73 = V_15;
				__this->___U3CU3Eu__2_16 = L_73;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_16))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_74 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitAsyncU3Ed__42_1_tC25E8DC6D95DDD60994DF050EE60BEAF598A5CD4**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_74, (&V_15), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0473;
			}

IL_0308_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_75 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_16;
				V_15 = L_75;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_76 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_16);
				il2cpp_codegen_initobj(L_76, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_77 = (-1);
				V_0 = L_77;
				__this->___U3CU3E1__state_0 = L_77;
			}

IL_0325_2:
			{
				bool L_78;
				L_78 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_15), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__10_14 = L_78;
				bool L_79 = (bool)__this->___U3CU3Es__10_14;
				V_14 = L_79;
				bool L_80 = V_14;
				if (L_80)
				{
					goto IL_01c1_2;
				}
			}
			{
				goto IL_0359_1;
			}

IL_0344_2:
			{
				__this->___U3CU3Es__4_8 = 1;
				goto IL_0359_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_034d_1;
			}
			throw e;
		}

CATCH_034d_1:
		{
			V_16 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_81 = V_16;
			__this->___U3CU3Es__3_7 = L_81;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_81);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0359_1;
		}

IL_0359_1:
		{
			RuntimeObject* L_82 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_17 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_82) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_83 = V_17;
			if (!L_83)
			{
				goto IL_03d8_1;
			}
		}
		{
			RuntimeObject* L_84 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_84);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_85;
			L_85 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_84);
			V_19 = L_85;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_86;
			L_86 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_19), NULL);
			V_18 = L_86;
			bool L_87;
			L_87 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_18), NULL);
			if (L_87)
			{
				goto IL_03cf_1;
			}
		}
		{
			int32_t L_88 = 4;
			V_0 = L_88;
			__this->___U3CU3E1__state_0 = L_88;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_89 = V_18;
			__this->___U3CU3Eu__3_17 = L_89;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_17))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_90 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitAsyncU3Ed__42_1_tC25E8DC6D95DDD60994DF050EE60BEAF598A5CD4**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_90, (&V_18), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0473;
		}

IL_03b2_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_91 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_17;
			V_18 = L_91;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_92 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_17);
			il2cpp_codegen_initobj(L_92, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_93 = (-1);
			V_0 = L_93;
			__this->___U3CU3E1__state_0 = L_93;
		}

IL_03cf_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_18), NULL);
		}

IL_03d8_1:
		{
			RuntimeObject* L_94 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_16 = L_94;
			RuntimeObject* L_95 = V_16;
			if (!L_95)
			{
				goto IL_0402_1;
			}
		}
		{
			RuntimeObject* L_96 = V_16;
			V_20 = ((Exception_t*)IsInstClass((RuntimeObject*)L_96, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_97 = V_20;
			if (L_97)
			{
				goto IL_03f5_1;
			}
		}
		{
			RuntimeObject* L_98 = V_16;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_98, method);
		}

IL_03f5_1:
		{
			Exception_t* L_99 = V_20;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_100;
			L_100 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_99, NULL);
			NullCheck(L_100);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_100, NULL);
		}

IL_0402_1:
		{
			int32_t L_101 = (int32_t)__this->___U3CU3Es__4_8;
			V_21 = L_101;
			int32_t L_102 = V_21;
			if ((((int32_t)L_102) == ((int32_t)1)))
			{
				goto IL_0411_1;
			}
		}
		{
			goto IL_041a_1;
		}

IL_0411_1:
		{
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_103 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB)__this->___U3CU3Es__5_9;
			V_1 = L_103;
			goto IL_0457;
		}

IL_041a_1:
		{
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_104 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CU3Es__5_9);
			il2cpp_codegen_initobj(L_104, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_105 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB)__this->___U3CvalueU3E5__1_5;
			V_1 = L_105;
			goto IL_0457;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0436;
		}
		throw e;
	}

CATCH_0436:
	{
		V_20 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_106 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_107 = V_20;
		AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_inline(L_106, L_107, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0473;
	}

IL_0457:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_108 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_109 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_inline(L_108, L_109, AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_RuntimeMethod_var);
	}

IL_0473:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__42_1_SetStateMachine_mA07619B423D2F631BDBBCE626CACD792F741A952_gshared (U3CMinAwaitAsyncU3Ed__42_1_tC25E8DC6D95DDD60994DF050EE60BEAF598A5CD4* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__6_1__ctor_mEA871A695A4AB6B61760B2D2676ADD19272059C4_gshared (U3CMinAwaitAsyncU3Ed__6_1_t0723AEB6AF5877867C68F89565108EE947DA35FB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__6_1_MoveNext_m673DF017AB269756192F35C3DB040EF70875AC90_gshared (U3CMinAwaitAsyncU3Ed__6_1_t0723AEB6AF5877867C68F89565108EE947DA35FB* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t2CC8030BD92FCF44E3A4C8AF6F292427F6524731 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_t2CC8030BD92FCF44E3A4C8AF6F292427F6524731);
	const Il2CppFullySharedGenericAny L_37 = L_9;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Awaiter_t8953594D03299DE782894F4A865CED79F2504266 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitAsyncU3Ed__6_1_t0723AEB6AF5877867C68F89565108EE947DA35FB* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Awaiter_t8953594D03299DE782894F4A865CED79F2504266 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_11;
	memset((&V_11), 0, sizeof(V_11));
	RuntimeObject* V_12 = NULL;
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Exception_t* V_16 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
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
			goto IL_0324_1;
		}

IL_001a_1:
		{
			__this->___U3CvalueU3E5__1_5 = 0;
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
				switch (L_6)
				{
					case 0:
					{
						goto IL_0060_2;
					}
					case 1:
					{
						goto IL_0062_2;
					}
					case 2:
					{
						goto IL_0067_2;
					}
					case 3:
					{
						goto IL_006c_2;
					}
				}
			}
			{
				goto IL_0071_2;
			}

IL_0060_2:
			{
				goto IL_00c8_2;
			}

IL_0062_2:
			{
				goto IL_014a_2;
			}

IL_0067_2:
			{
				goto IL_01e2_2;
			}

IL_006c_2:
			{
				goto IL_0283_2;
			}

IL_0071_2:
			{
				goto IL_0102_2;
			}

IL_0077_2:
			{
				Func_2_t6561E0DBB0FBFCB8DBFA46F392A86C31706164F5* L_7 = (Func_2_t6561E0DBB0FBFCB8DBFA46F392A86C31706164F5*)__this->___selector_3;
				RuntimeObject* L_8 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				NullCheck(L_7);
				UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 L_10;
				L_10 = InvokerFuncInvoker1< UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_9: *(void**)L_9));
				V_3 = L_10;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_11;
				L_11 = UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_inline((&V_3), UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_RuntimeMethod_var);
				V_2 = L_11;
				bool L_12;
				L_12 = Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_inline((&V_2), Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_00e4_2;
				}
			}
			{
				int32_t L_13 = 0;
				V_0 = L_13;
				__this->___U3CU3E1__state_0 = L_13;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_14 = V_2;
				__this->___U3CU3Eu__1_14 = L_14;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_15 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_t8953594D03299DE782894F4A865CED79F2504266*, U3CMinAwaitAsyncU3Ed__6_1_t0723AEB6AF5877867C68F89565108EE947DA35FB**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_15, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_03c8;
			}

IL_00c8_2:
			{
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_16 = (Awaiter_t8953594D03299DE782894F4A865CED79F2504266)__this->___U3CU3Eu__1_14;
				V_2 = L_16;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266* L_17 = (Awaiter_t8953594D03299DE782894F4A865CED79F2504266*)(&__this->___U3CU3Eu__1_14);
				il2cpp_codegen_initobj(L_17, sizeof(Awaiter_t8953594D03299DE782894F4A865CED79F2504266));
				int32_t L_18 = (-1);
				V_0 = L_18;
				__this->___U3CU3E1__state_0 = L_18;
			}

IL_00e4_2:
			{
				int32_t L_19;
				L_19 = Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_inline((&V_2), Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_RuntimeMethod_var);
				__this->___U3CU3Es__5_9 = L_19;
				int32_t L_20 = (int32_t)__this->___U3CU3Es__5_9;
				__this->___U3CvalueU3E5__1_5 = L_20;
				goto IL_0189_2;
			}

IL_0102_2:
			{
				RuntimeObject* L_21 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_21);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_22;
				L_22 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_21);
				V_7 = L_22;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_23;
				L_23 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_6 = L_23;
				bool L_24;
				L_24 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_6), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_0167_2;
				}
			}
			{
				int32_t L_25 = 1;
				V_0 = L_25;
				__this->___U3CU3E1__state_0 = L_25;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_26 = V_6;
				__this->___U3CU3Eu__2_15 = L_26;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_15))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_27 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitAsyncU3Ed__6_1_t0723AEB6AF5877867C68F89565108EE947DA35FB**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_27, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_03c8;
			}

IL_014a_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_15;
				V_6 = L_28;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_29 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_15);
				il2cpp_codegen_initobj(L_29, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_30 = (-1);
				V_0 = L_30;
				__this->___U3CU3E1__state_0 = L_30;
			}

IL_0167_2:
			{
				bool L_31;
				L_31 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6_10 = L_31;
				bool L_32 = (bool)__this->___U3CU3Es__6_10;
				V_5 = L_32;
				bool L_33 = V_5;
				if (L_33)
				{
					goto IL_0077_2;
				}
			}
			{
				Exception_t* L_34;
				L_34 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, method);
			}

IL_0189_2:
			{
				goto IL_023b_2;
			}

IL_018f_2:
			{
				Func_2_t6561E0DBB0FBFCB8DBFA46F392A86C31706164F5* L_35 = (Func_2_t6561E0DBB0FBFCB8DBFA46F392A86C31706164F5*)__this->___selector_3;
				RuntimeObject* L_36 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_36);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_36, (Il2CppFullySharedGenericAny*)L_37);
				NullCheck(L_35);
				UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 L_38;
				L_38 = InvokerFuncInvoker1< UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_37: *(void**)L_37));
				V_3 = L_38;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_39;
				L_39 = UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_inline((&V_3), UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_RuntimeMethod_var);
				V_8 = L_39;
				bool L_40;
				L_40 = Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_inline((&V_8), Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_RuntimeMethod_var);
				if (L_40)
				{
					goto IL_01ff_2;
				}
			}
			{
				int32_t L_41 = 2;
				V_0 = L_41;
				__this->___U3CU3E1__state_0 = L_41;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_42 = V_8;
				__this->___U3CU3Eu__1_14 = L_42;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_43 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_t8953594D03299DE782894F4A865CED79F2504266*, U3CMinAwaitAsyncU3Ed__6_1_t0723AEB6AF5877867C68F89565108EE947DA35FB**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_43, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_03c8;
			}

IL_01e2_2:
			{
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_44 = (Awaiter_t8953594D03299DE782894F4A865CED79F2504266)__this->___U3CU3Eu__1_14;
				V_8 = L_44;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266* L_45 = (Awaiter_t8953594D03299DE782894F4A865CED79F2504266*)(&__this->___U3CU3Eu__1_14);
				il2cpp_codegen_initobj(L_45, sizeof(Awaiter_t8953594D03299DE782894F4A865CED79F2504266));
				int32_t L_46 = (-1);
				V_0 = L_46;
				__this->___U3CU3E1__state_0 = L_46;
			}

IL_01ff_2:
			{
				int32_t L_47;
				L_47 = Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_inline((&V_8), Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_47;
				int32_t L_48 = (int32_t)__this->___U3CU3Es__8_12;
				__this->___U3CxU3E5__7_11 = L_48;
				int32_t L_49 = (int32_t)__this->___U3CvalueU3E5__1_5;
				int32_t L_50 = (int32_t)__this->___U3CxU3E5__7_11;
				V_9 = (bool)((((int32_t)L_49) > ((int32_t)L_50))? 1 : 0);
				bool L_51 = V_9;
				if (!L_51)
				{
					goto IL_023a_2;
				}
			}
			{
				int32_t L_52 = (int32_t)__this->___U3CxU3E5__7_11;
				__this->___U3CvalueU3E5__1_5 = L_52;
			}

IL_023a_2:
			{
			}

IL_023b_2:
			{
				RuntimeObject* L_53 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_53);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_54;
				L_54 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_53);
				V_7 = L_54;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_55;
				L_55 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_11 = L_55;
				bool L_56;
				L_56 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_11), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_56)
				{
					goto IL_02a0_2;
				}
			}
			{
				int32_t L_57 = 3;
				V_0 = L_57;
				__this->___U3CU3E1__state_0 = L_57;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_58 = V_11;
				__this->___U3CU3Eu__2_15 = L_58;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_15))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_59 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitAsyncU3Ed__6_1_t0723AEB6AF5877867C68F89565108EE947DA35FB**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_59, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_03c8;
			}

IL_0283_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_60 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_15;
				V_11 = L_60;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_61 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_15);
				il2cpp_codegen_initobj(L_61, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_62 = (-1);
				V_0 = L_62;
				__this->___U3CU3E1__state_0 = L_62;
			}

IL_02a0_2:
			{
				bool L_63;
				L_63 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_11), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__9_13 = L_63;
				bool L_64 = (bool)__this->___U3CU3Es__9_13;
				V_10 = L_64;
				bool L_65 = V_10;
				if (L_65)
				{
					goto IL_018f_2;
				}
			}
			{
				goto IL_02cb_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_02bf_1;
			}
			throw e;
		}

CATCH_02bf_1:
		{
			V_12 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_66 = V_12;
			__this->___U3CU3Es__3_7 = L_66;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_66);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_02cb_1;
		}

IL_02cb_1:
		{
			RuntimeObject* L_67 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_67) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_68 = V_13;
			if (!L_68)
			{
				goto IL_034a_1;
			}
		}
		{
			RuntimeObject* L_69 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_69);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_70;
			L_70 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_69);
			V_15 = L_70;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_71;
			L_71 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_15), NULL);
			V_14 = L_71;
			bool L_72;
			L_72 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_72)
			{
				goto IL_0341_1;
			}
		}
		{
			int32_t L_73 = 4;
			V_0 = L_73;
			__this->___U3CU3E1__state_0 = L_73;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_74 = V_14;
			__this->___U3CU3Eu__3_16 = L_74;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_16))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_75 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitAsyncU3Ed__6_1_t0723AEB6AF5877867C68F89565108EE947DA35FB**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_75, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_03c8;
		}

IL_0324_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_76 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_16;
			V_14 = L_76;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_77 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_16);
			il2cpp_codegen_initobj(L_77, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_78 = (-1);
			V_0 = L_78;
			__this->___U3CU3E1__state_0 = L_78;
		}

IL_0341_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_034a_1:
		{
			RuntimeObject* L_79 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_12 = L_79;
			RuntimeObject* L_80 = V_12;
			if (!L_80)
			{
				goto IL_0374_1;
			}
		}
		{
			RuntimeObject* L_81 = V_12;
			V_16 = ((Exception_t*)IsInstClass((RuntimeObject*)L_81, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_82 = V_16;
			if (L_82)
			{
				goto IL_0367_1;
			}
		}
		{
			RuntimeObject* L_83 = V_12;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_83, method);
		}

IL_0367_1:
		{
			Exception_t* L_84 = V_16;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_85;
			L_85 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_84, NULL);
			NullCheck(L_85);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_85, NULL);
		}

IL_0374_1:
		{
			int32_t L_86 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			int32_t L_87 = (int32_t)__this->___U3CvalueU3E5__1_5;
			V_1 = L_87;
			goto IL_03ac;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_038b;
		}
		throw e;
	}

CATCH_038b:
	{
		V_16 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_88 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_89 = V_16;
		AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_inline(L_88, L_89, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_03c8;
	}

IL_03ac:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_90 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder_1);
		int32_t L_91 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_inline(L_90, L_91, AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_RuntimeMethod_var);
	}

IL_03c8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitAsyncU3Ed__6_1_SetStateMachine_m271CD6BA0801D9750F0046E9EE099883E90CC552_gshared (U3CMinAwaitAsyncU3Ed__6_1_t0723AEB6AF5877867C68F89565108EE947DA35FB* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__11_1__ctor_mD0CF6CE7B7418B022856D6F56EB29B047D8C57E3_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__11_1_t87BAE1F5754DF87CD354C8D64FA9AFCAA4A72FCA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__11_1_MoveNext_mC9359B1FDAA4DD2CF91A1395D058D4B8820B1D18_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__11_1_t87BAE1F5754DF87CD354C8D64FA9AFCAA4A72FCA* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_tD819B10659A36AE3B52AB04F1F8D7C9A4C5B05AD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_tD819B10659A36AE3B52AB04F1F8D7C9A4C5B05AD);
	const Il2CppFullySharedGenericAny L_38 = L_9;
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitWithCancellationAsyncU3Ed__11_1_t87BAE1F5754DF87CD354C8D64FA9AFCAA4A72FCA* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_11;
	memset((&V_11), 0, sizeof(V_11));
	RuntimeObject* V_12 = NULL;
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Exception_t* V_16 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
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
			goto IL_0331_1;
		}

IL_001a_1:
		{
			__this->___U3CvalueU3E5__1_5 = ((int64_t)0);
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
				switch (L_6)
				{
					case 0:
					{
						goto IL_0061_2;
					}
					case 1:
					{
						goto IL_0063_2;
					}
					case 2:
					{
						goto IL_0068_2;
					}
					case 3:
					{
						goto IL_006d_2;
					}
				}
			}
			{
				goto IL_0072_2;
			}

IL_0061_2:
			{
				goto IL_00cf_2;
			}

IL_0063_2:
			{
				goto IL_0151_2;
			}

IL_0068_2:
			{
				goto IL_01ef_2;
			}

IL_006d_2:
			{
				goto IL_0290_2;
			}

IL_0072_2:
			{
				goto IL_0109_2;
			}

IL_0078_2:
			{
				Func_3_t76BD268388DCE8B514D513440272B79CC88C6413* L_7 = (Func_3_t76BD268388DCE8B514D513440272B79CC88C6413*)__this->___selector_3;
				RuntimeObject* L_8 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_10 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_7);
				UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72 L_11;
				L_11 = InvokerFuncInvoker2< UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_9: *(void**)L_9), L_10);
				V_3 = L_11;
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_12;
				L_12 = UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_inline((&V_3), UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_RuntimeMethod_var);
				V_2 = L_12;
				bool L_13;
				L_13 = Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_inline((&V_2), Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_00eb_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state_0 = L_14;
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_15 = V_2;
				__this->___U3CU3Eu__1_14 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_16 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E*, U3CMinAwaitWithCancellationAsyncU3Ed__11_1_t87BAE1F5754DF87CD354C8D64FA9AFCAA4A72FCA**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_16, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_03d5;
			}

IL_00cf_2:
			{
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_17 = (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E)__this->___U3CU3Eu__1_14;
				V_2 = L_17;
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* L_18 = (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E*)(&__this->___U3CU3Eu__1_14);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state_0 = L_19;
			}

IL_00eb_2:
			{
				int64_t L_20;
				L_20 = Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_inline((&V_2), Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_RuntimeMethod_var);
				__this->___U3CU3Es__5_9 = L_20;
				int64_t L_21 = (int64_t)__this->___U3CU3Es__5_9;
				__this->___U3CvalueU3E5__1_5 = L_21;
				goto IL_0190_2;
			}

IL_0109_2:
			{
				RuntimeObject* L_22 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_22);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_23;
				L_23 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_22);
				V_7 = L_23;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_24;
				L_24 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_6 = L_24;
				bool L_25;
				L_25 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_6), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_25)
				{
					goto IL_016e_2;
				}
			}
			{
				int32_t L_26 = 1;
				V_0 = L_26;
				__this->___U3CU3E1__state_0 = L_26;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_27 = V_6;
				__this->___U3CU3Eu__2_15 = L_27;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_15))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_28 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__11_1_t87BAE1F5754DF87CD354C8D64FA9AFCAA4A72FCA**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_28, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_03d5;
			}

IL_0151_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_15;
				V_6 = L_29;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_30 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_15);
				il2cpp_codegen_initobj(L_30, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_31 = (-1);
				V_0 = L_31;
				__this->___U3CU3E1__state_0 = L_31;
			}

IL_016e_2:
			{
				bool L_32;
				L_32 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6_10 = L_32;
				bool L_33 = (bool)__this->___U3CU3Es__6_10;
				V_5 = L_33;
				bool L_34 = V_5;
				if (L_34)
				{
					goto IL_0078_2;
				}
			}
			{
				Exception_t* L_35;
				L_35 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, method);
			}

IL_0190_2:
			{
				goto IL_0248_2;
			}

IL_0196_2:
			{
				Func_3_t76BD268388DCE8B514D513440272B79CC88C6413* L_36 = (Func_3_t76BD268388DCE8B514D513440272B79CC88C6413*)__this->___selector_3;
				RuntimeObject* L_37 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_37);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_37, (Il2CppFullySharedGenericAny*)L_38);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_39 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_36);
				UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72 L_40;
				L_40 = InvokerFuncInvoker2< UniTask_1_tB7F6E76EE4A7F880D1169687FBCF7C85E3F1ED72, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_38: *(void**)L_38), L_39);
				V_3 = L_40;
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_41;
				L_41 = UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_inline((&V_3), UniTask_1_GetAwaiter_m610A766CD8038A109B21E2F02CF093096F9226D7_RuntimeMethod_var);
				V_8 = L_41;
				bool L_42;
				L_42 = Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_inline((&V_8), Awaiter_get_IsCompleted_mCFE009603778E0BD45941A0C4BFD6C5437934777_RuntimeMethod_var);
				if (L_42)
				{
					goto IL_020c_2;
				}
			}
			{
				int32_t L_43 = 2;
				V_0 = L_43;
				__this->___U3CU3E1__state_0 = L_43;
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_44 = V_8;
				__this->___U3CU3Eu__1_14 = L_44;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_45 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E*, U3CMinAwaitWithCancellationAsyncU3Ed__11_1_t87BAE1F5754DF87CD354C8D64FA9AFCAA4A72FCA**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_45, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_03d5;
			}

IL_01ef_2:
			{
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E L_46 = (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E)__this->___U3CU3Eu__1_14;
				V_8 = L_46;
				Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E* L_47 = (Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E*)(&__this->___U3CU3Eu__1_14);
				il2cpp_codegen_initobj(L_47, sizeof(Awaiter_t7AE9CC84360E7F09FFB9D68779935EE4FE333A0E));
				int32_t L_48 = (-1);
				V_0 = L_48;
				__this->___U3CU3E1__state_0 = L_48;
			}

IL_020c_2:
			{
				int64_t L_49;
				L_49 = Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_inline((&V_8), Awaiter_GetResult_m4B63F7992C6A60270E7A65D3BA029B02E8492A15_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_49;
				int64_t L_50 = (int64_t)__this->___U3CU3Es__8_12;
				__this->___U3CxU3E5__7_11 = L_50;
				int64_t L_51 = (int64_t)__this->___U3CvalueU3E5__1_5;
				int64_t L_52 = (int64_t)__this->___U3CxU3E5__7_11;
				V_9 = (bool)((((int64_t)L_51) > ((int64_t)L_52))? 1 : 0);
				bool L_53 = V_9;
				if (!L_53)
				{
					goto IL_0247_2;
				}
			}
			{
				int64_t L_54 = (int64_t)__this->___U3CxU3E5__7_11;
				__this->___U3CvalueU3E5__1_5 = L_54;
			}

IL_0247_2:
			{
			}

IL_0248_2:
			{
				RuntimeObject* L_55 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_55);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_56;
				L_56 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_55);
				V_7 = L_56;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_57;
				L_57 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_11 = L_57;
				bool L_58;
				L_58 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_11), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_58)
				{
					goto IL_02ad_2;
				}
			}
			{
				int32_t L_59 = 3;
				V_0 = L_59;
				__this->___U3CU3E1__state_0 = L_59;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_60 = V_11;
				__this->___U3CU3Eu__2_15 = L_60;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_15))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_61 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__11_1_t87BAE1F5754DF87CD354C8D64FA9AFCAA4A72FCA**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_61, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_03d5;
			}

IL_0290_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_62 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_15;
				V_11 = L_62;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_63 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_15);
				il2cpp_codegen_initobj(L_63, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_64 = (-1);
				V_0 = L_64;
				__this->___U3CU3E1__state_0 = L_64;
			}

IL_02ad_2:
			{
				bool L_65;
				L_65 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_11), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__9_13 = L_65;
				bool L_66 = (bool)__this->___U3CU3Es__9_13;
				V_10 = L_66;
				bool L_67 = V_10;
				if (L_67)
				{
					goto IL_0196_2;
				}
			}
			{
				goto IL_02d8_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_02cc_1;
			}
			throw e;
		}

CATCH_02cc_1:
		{
			V_12 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_68 = V_12;
			__this->___U3CU3Es__3_7 = L_68;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_68);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_02d8_1;
		}

IL_02d8_1:
		{
			RuntimeObject* L_69 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_69) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_70 = V_13;
			if (!L_70)
			{
				goto IL_0357_1;
			}
		}
		{
			RuntimeObject* L_71 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_71);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_72;
			L_72 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_71);
			V_15 = L_72;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_73;
			L_73 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_15), NULL);
			V_14 = L_73;
			bool L_74;
			L_74 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_74)
			{
				goto IL_034e_1;
			}
		}
		{
			int32_t L_75 = 4;
			V_0 = L_75;
			__this->___U3CU3E1__state_0 = L_75;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_76 = V_14;
			__this->___U3CU3Eu__3_16 = L_76;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_16))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_77 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitWithCancellationAsyncU3Ed__11_1_t87BAE1F5754DF87CD354C8D64FA9AFCAA4A72FCA**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_77, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_03d5;
		}

IL_0331_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_78 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_16;
			V_14 = L_78;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_79 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_16);
			il2cpp_codegen_initobj(L_79, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_80 = (-1);
			V_0 = L_80;
			__this->___U3CU3E1__state_0 = L_80;
		}

IL_034e_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_0357_1:
		{
			RuntimeObject* L_81 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_12 = L_81;
			RuntimeObject* L_82 = V_12;
			if (!L_82)
			{
				goto IL_0381_1;
			}
		}
		{
			RuntimeObject* L_83 = V_12;
			V_16 = ((Exception_t*)IsInstClass((RuntimeObject*)L_83, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_84 = V_16;
			if (L_84)
			{
				goto IL_0374_1;
			}
		}
		{
			RuntimeObject* L_85 = V_12;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_85, method);
		}

IL_0374_1:
		{
			Exception_t* L_86 = V_16;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_87;
			L_87 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_86, NULL);
			NullCheck(L_87);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_87, NULL);
		}

IL_0381_1:
		{
			int32_t L_88 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			int64_t L_89 = (int64_t)__this->___U3CvalueU3E5__1_5;
			V_1 = L_89;
			goto IL_03b9;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0398;
		}
		throw e;
	}

CATCH_0398:
	{
		V_16 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_90 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_91 = V_16;
		AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_inline(L_90, L_91, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mAEE718F60708F1A917C5379F94447C8090707CE7_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_03d5;
	}

IL_03b9:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6* L_92 = (AsyncUniTaskMethodBuilder_1_t768D00903F09FF620B7F659032AF26700B9335F6*)(&__this->___U3CU3Et__builder_1);
		int64_t L_93 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_inline(L_92, L_93, AsyncUniTaskMethodBuilder_1_SetResult_m5C9DEACCC0FF9CE010CC71180A9EF9F1CFA79754_RuntimeMethod_var);
	}

IL_03d5:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__11_1_SetStateMachine_m39DCF56852486FBCFA105FD81CF41D224AC013CA_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__11_1_t87BAE1F5754DF87CD354C8D64FA9AFCAA4A72FCA* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__15_1__ctor_m6B6F453A8F6B03C626A69E02B8DB536FCCC2C335_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__15_1_t671839B639CE41E851CEA13C3E4BF0266B468F90* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__15_1_MoveNext_mD89EFD4D7BCA20B2B85AFF454D7E41EBE67357C0_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__15_1_t671839B639CE41E851CEA13C3E4BF0266B468F90* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t46B26A47D68CDE9A969EE8CFF33319C708C5F110 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_t46B26A47D68CDE9A969EE8CFF33319C708C5F110);
	const Il2CppFullySharedGenericAny L_38 = L_9;
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitWithCancellationAsyncU3Ed__15_1_t671839B639CE41E851CEA13C3E4BF0266B468F90* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_11;
	memset((&V_11), 0, sizeof(V_11));
	RuntimeObject* V_12 = NULL;
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Exception_t* V_16 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
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
			goto IL_0334_1;
		}

IL_001a_1:
		{
			__this->___U3CvalueU3E5__1_5 = (0.0f);
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
				switch (L_6)
				{
					case 0:
					{
						goto IL_0064_2;
					}
					case 1:
					{
						goto IL_0066_2;
					}
					case 2:
					{
						goto IL_006b_2;
					}
					case 3:
					{
						goto IL_0070_2;
					}
				}
			}
			{
				goto IL_0075_2;
			}

IL_0064_2:
			{
				goto IL_00d2_2;
			}

IL_0066_2:
			{
				goto IL_0154_2;
			}

IL_006b_2:
			{
				goto IL_01f2_2;
			}

IL_0070_2:
			{
				goto IL_0293_2;
			}

IL_0075_2:
			{
				goto IL_010c_2;
			}

IL_007b_2:
			{
				Func_3_t79F461272893123C05C047A343D70B9B775827E4* L_7 = (Func_3_t79F461272893123C05C047A343D70B9B775827E4*)__this->___selector_3;
				RuntimeObject* L_8 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_10 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_7);
				UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1 L_11;
				L_11 = InvokerFuncInvoker2< UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_9: *(void**)L_9), L_10);
				V_3 = L_11;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_12;
				L_12 = UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_inline((&V_3), UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_RuntimeMethod_var);
				V_2 = L_12;
				bool L_13;
				L_13 = Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_inline((&V_2), Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_00ee_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state_0 = L_14;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_15 = V_2;
				__this->___U3CU3Eu__1_14 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_16 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*, U3CMinAwaitWithCancellationAsyncU3Ed__15_1_t671839B639CE41E851CEA13C3E4BF0266B468F90**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_16, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_03d8;
			}

IL_00d2_2:
			{
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_17 = (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D)__this->___U3CU3Eu__1_14;
				V_2 = L_17;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* L_18 = (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*)(&__this->___U3CU3Eu__1_14);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state_0 = L_19;
			}

IL_00ee_2:
			{
				float L_20;
				L_20 = Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_inline((&V_2), Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_RuntimeMethod_var);
				__this->___U3CU3Es__5_9 = L_20;
				float L_21 = (float)__this->___U3CU3Es__5_9;
				__this->___U3CvalueU3E5__1_5 = L_21;
				goto IL_0193_2;
			}

IL_010c_2:
			{
				RuntimeObject* L_22 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_22);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_23;
				L_23 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_22);
				V_7 = L_23;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_24;
				L_24 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_6 = L_24;
				bool L_25;
				L_25 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_6), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_25)
				{
					goto IL_0171_2;
				}
			}
			{
				int32_t L_26 = 1;
				V_0 = L_26;
				__this->___U3CU3E1__state_0 = L_26;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_27 = V_6;
				__this->___U3CU3Eu__2_15 = L_27;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_15))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_28 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__15_1_t671839B639CE41E851CEA13C3E4BF0266B468F90**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_28, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_03d8;
			}

IL_0154_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_15;
				V_6 = L_29;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_30 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_15);
				il2cpp_codegen_initobj(L_30, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_31 = (-1);
				V_0 = L_31;
				__this->___U3CU3E1__state_0 = L_31;
			}

IL_0171_2:
			{
				bool L_32;
				L_32 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6_10 = L_32;
				bool L_33 = (bool)__this->___U3CU3Es__6_10;
				V_5 = L_33;
				bool L_34 = V_5;
				if (L_34)
				{
					goto IL_007b_2;
				}
			}
			{
				Exception_t* L_35;
				L_35 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, method);
			}

IL_0193_2:
			{
				goto IL_024b_2;
			}

IL_0199_2:
			{
				Func_3_t79F461272893123C05C047A343D70B9B775827E4* L_36 = (Func_3_t79F461272893123C05C047A343D70B9B775827E4*)__this->___selector_3;
				RuntimeObject* L_37 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_37);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_37, (Il2CppFullySharedGenericAny*)L_38);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_39 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_36);
				UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1 L_40;
				L_40 = InvokerFuncInvoker2< UniTask_1_t253475AF24C1D3A50EE5AE5A34F3F91CFDDBC9D1, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_38: *(void**)L_38), L_39);
				V_3 = L_40;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_41;
				L_41 = UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_inline((&V_3), UniTask_1_GetAwaiter_m0FA74FCF2B009B33CB5E5A6DCC5A0295824BF7A4_RuntimeMethod_var);
				V_8 = L_41;
				bool L_42;
				L_42 = Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_inline((&V_8), Awaiter_get_IsCompleted_mB1E315FF91CAE08E5D73DD0AFD86A1A6F497C3EA_RuntimeMethod_var);
				if (L_42)
				{
					goto IL_020f_2;
				}
			}
			{
				int32_t L_43 = 2;
				V_0 = L_43;
				__this->___U3CU3E1__state_0 = L_43;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_44 = V_8;
				__this->___U3CU3Eu__1_14 = L_44;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_45 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*, U3CMinAwaitWithCancellationAsyncU3Ed__15_1_t671839B639CE41E851CEA13C3E4BF0266B468F90**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_45, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_03d8;
			}

IL_01f2_2:
			{
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D L_46 = (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D)__this->___U3CU3Eu__1_14;
				V_8 = L_46;
				Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D* L_47 = (Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D*)(&__this->___U3CU3Eu__1_14);
				il2cpp_codegen_initobj(L_47, sizeof(Awaiter_t36D4ABD87C4BA6649C72A23C3795D4470E3B8E6D));
				int32_t L_48 = (-1);
				V_0 = L_48;
				__this->___U3CU3E1__state_0 = L_48;
			}

IL_020f_2:
			{
				float L_49;
				L_49 = Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_inline((&V_8), Awaiter_GetResult_m29A4F81BCF5941DE82D2F4D03716984DF112DD10_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_49;
				float L_50 = (float)__this->___U3CU3Es__8_12;
				__this->___U3CxU3E5__7_11 = L_50;
				float L_51 = (float)__this->___U3CvalueU3E5__1_5;
				float L_52 = (float)__this->___U3CxU3E5__7_11;
				V_9 = (bool)((((float)L_51) > ((float)L_52))? 1 : 0);
				bool L_53 = V_9;
				if (!L_53)
				{
					goto IL_024a_2;
				}
			}
			{
				float L_54 = (float)__this->___U3CxU3E5__7_11;
				__this->___U3CvalueU3E5__1_5 = L_54;
			}

IL_024a_2:
			{
			}

IL_024b_2:
			{
				RuntimeObject* L_55 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_55);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_56;
				L_56 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_55);
				V_7 = L_56;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_57;
				L_57 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_11 = L_57;
				bool L_58;
				L_58 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_11), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_58)
				{
					goto IL_02b0_2;
				}
			}
			{
				int32_t L_59 = 3;
				V_0 = L_59;
				__this->___U3CU3E1__state_0 = L_59;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_60 = V_11;
				__this->___U3CU3Eu__2_15 = L_60;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_15))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_61 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__15_1_t671839B639CE41E851CEA13C3E4BF0266B468F90**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_61, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_03d8;
			}

IL_0293_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_62 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_15;
				V_11 = L_62;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_63 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_15);
				il2cpp_codegen_initobj(L_63, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_64 = (-1);
				V_0 = L_64;
				__this->___U3CU3E1__state_0 = L_64;
			}

IL_02b0_2:
			{
				bool L_65;
				L_65 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_11), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__9_13 = L_65;
				bool L_66 = (bool)__this->___U3CU3Es__9_13;
				V_10 = L_66;
				bool L_67 = V_10;
				if (L_67)
				{
					goto IL_0199_2;
				}
			}
			{
				goto IL_02db_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_02cf_1;
			}
			throw e;
		}

CATCH_02cf_1:
		{
			V_12 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_68 = V_12;
			__this->___U3CU3Es__3_7 = L_68;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_68);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_02db_1;
		}

IL_02db_1:
		{
			RuntimeObject* L_69 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_69) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_70 = V_13;
			if (!L_70)
			{
				goto IL_035a_1;
			}
		}
		{
			RuntimeObject* L_71 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_71);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_72;
			L_72 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_71);
			V_15 = L_72;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_73;
			L_73 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_15), NULL);
			V_14 = L_73;
			bool L_74;
			L_74 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_74)
			{
				goto IL_0351_1;
			}
		}
		{
			int32_t L_75 = 4;
			V_0 = L_75;
			__this->___U3CU3E1__state_0 = L_75;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_76 = V_14;
			__this->___U3CU3Eu__3_16 = L_76;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_16))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_77 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitWithCancellationAsyncU3Ed__15_1_t671839B639CE41E851CEA13C3E4BF0266B468F90**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_77, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_03d8;
		}

IL_0334_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_78 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_16;
			V_14 = L_78;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_79 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_16);
			il2cpp_codegen_initobj(L_79, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_80 = (-1);
			V_0 = L_80;
			__this->___U3CU3E1__state_0 = L_80;
		}

IL_0351_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_035a_1:
		{
			RuntimeObject* L_81 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_12 = L_81;
			RuntimeObject* L_82 = V_12;
			if (!L_82)
			{
				goto IL_0384_1;
			}
		}
		{
			RuntimeObject* L_83 = V_12;
			V_16 = ((Exception_t*)IsInstClass((RuntimeObject*)L_83, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_84 = V_16;
			if (L_84)
			{
				goto IL_0377_1;
			}
		}
		{
			RuntimeObject* L_85 = V_12;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_85, method);
		}

IL_0377_1:
		{
			Exception_t* L_86 = V_16;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_87;
			L_87 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_86, NULL);
			NullCheck(L_87);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_87, NULL);
		}

IL_0384_1:
		{
			int32_t L_88 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			float L_89 = (float)__this->___U3CvalueU3E5__1_5;
			V_1 = L_89;
			goto IL_03bc;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_039b;
		}
		throw e;
	}

CATCH_039b:
	{
		V_16 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_90 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_91 = V_16;
		AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_inline(L_90, L_91, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m94AB7AC8A17817E4C566499FEEE575025BC67B57_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_03d8;
	}

IL_03bc:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3* L_92 = (AsyncUniTaskMethodBuilder_1_t7EEE6D75C1ED80F41B5ADC599405D52CBAEEC0C3*)(&__this->___U3CU3Et__builder_1);
		float L_93 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_inline(L_92, L_93, AsyncUniTaskMethodBuilder_1_SetResult_mD07D0B39B3FC3D5EB3BBE6A3DC483E7E4003317D_RuntimeMethod_var);
	}

IL_03d8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__15_1_SetStateMachine_mA4449F5F7BFF90AC3B89A3C820748129FEB9599E_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__15_1_t671839B639CE41E851CEA13C3E4BF0266B468F90* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__19_1__ctor_m5B53D90137E2B16C039A7781B7BA78055240CE36_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__19_1_tFD68B66ACCC41046F7697071B6978A6140527418* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__19_1_MoveNext_m1494317CB9A896C623CD87B04FADC4AA311CEB54_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__19_1_tFD68B66ACCC41046F7697071B6978A6140527418* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_tC84693F67A896985C7F7F0870B8B2ABA31CC30E0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_tC84693F67A896985C7F7F0870B8B2ABA31CC30E0);
	const Il2CppFullySharedGenericAny L_38 = L_9;
	int32_t V_0 = 0;
	double V_1 = 0.0;
	Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitWithCancellationAsyncU3Ed__19_1_tFD68B66ACCC41046F7697071B6978A6140527418* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_11;
	memset((&V_11), 0, sizeof(V_11));
	RuntimeObject* V_12 = NULL;
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Exception_t* V_16 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
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
			goto IL_0338_1;
		}

IL_001a_1:
		{
			__this->___U3CvalueU3E5__1_5 = (0.0);
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
				switch (L_6)
				{
					case 0:
					{
						goto IL_0068_2;
					}
					case 1:
					{
						goto IL_006a_2;
					}
					case 2:
					{
						goto IL_006f_2;
					}
					case 3:
					{
						goto IL_0074_2;
					}
				}
			}
			{
				goto IL_0079_2;
			}

IL_0068_2:
			{
				goto IL_00d6_2;
			}

IL_006a_2:
			{
				goto IL_0158_2;
			}

IL_006f_2:
			{
				goto IL_01f6_2;
			}

IL_0074_2:
			{
				goto IL_0297_2;
			}

IL_0079_2:
			{
				goto IL_0110_2;
			}

IL_007f_2:
			{
				Func_3_tB356387A25DA85D9F4DDAAEEFD39A96B3F81FA95* L_7 = (Func_3_tB356387A25DA85D9F4DDAAEEFD39A96B3F81FA95*)__this->___selector_3;
				RuntimeObject* L_8 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_10 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_7);
				UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C L_11;
				L_11 = InvokerFuncInvoker2< UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_9: *(void**)L_9), L_10);
				V_3 = L_11;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_12;
				L_12 = UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_inline((&V_3), UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_RuntimeMethod_var);
				V_2 = L_12;
				bool L_13;
				L_13 = Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_inline((&V_2), Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_00f2_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state_0 = L_14;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_15 = V_2;
				__this->___U3CU3Eu__1_14 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_16 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88*, U3CMinAwaitWithCancellationAsyncU3Ed__19_1_tFD68B66ACCC41046F7697071B6978A6140527418**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_16, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_03dc;
			}

IL_00d6_2:
			{
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_17 = (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88)__this->___U3CU3Eu__1_14;
				V_2 = L_17;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* L_18 = (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88*)(&__this->___U3CU3Eu__1_14);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state_0 = L_19;
			}

IL_00f2_2:
			{
				double L_20;
				L_20 = Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_inline((&V_2), Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_RuntimeMethod_var);
				__this->___U3CU3Es__5_9 = L_20;
				double L_21 = (double)__this->___U3CU3Es__5_9;
				__this->___U3CvalueU3E5__1_5 = L_21;
				goto IL_0197_2;
			}

IL_0110_2:
			{
				RuntimeObject* L_22 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_22);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_23;
				L_23 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_22);
				V_7 = L_23;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_24;
				L_24 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_6 = L_24;
				bool L_25;
				L_25 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_6), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_25)
				{
					goto IL_0175_2;
				}
			}
			{
				int32_t L_26 = 1;
				V_0 = L_26;
				__this->___U3CU3E1__state_0 = L_26;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_27 = V_6;
				__this->___U3CU3Eu__2_15 = L_27;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_15))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_28 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__19_1_tFD68B66ACCC41046F7697071B6978A6140527418**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_28, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_03dc;
			}

IL_0158_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_15;
				V_6 = L_29;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_30 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_15);
				il2cpp_codegen_initobj(L_30, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_31 = (-1);
				V_0 = L_31;
				__this->___U3CU3E1__state_0 = L_31;
			}

IL_0175_2:
			{
				bool L_32;
				L_32 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6_10 = L_32;
				bool L_33 = (bool)__this->___U3CU3Es__6_10;
				V_5 = L_33;
				bool L_34 = V_5;
				if (L_34)
				{
					goto IL_007f_2;
				}
			}
			{
				Exception_t* L_35;
				L_35 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, method);
			}

IL_0197_2:
			{
				goto IL_024f_2;
			}

IL_019d_2:
			{
				Func_3_tB356387A25DA85D9F4DDAAEEFD39A96B3F81FA95* L_36 = (Func_3_tB356387A25DA85D9F4DDAAEEFD39A96B3F81FA95*)__this->___selector_3;
				RuntimeObject* L_37 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_37);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_37, (Il2CppFullySharedGenericAny*)L_38);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_39 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_36);
				UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C L_40;
				L_40 = InvokerFuncInvoker2< UniTask_1_t61C65ABBC508EC94E285B733D3217B6205532E3C, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_38: *(void**)L_38), L_39);
				V_3 = L_40;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_41;
				L_41 = UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_inline((&V_3), UniTask_1_GetAwaiter_m68E768B22932F4C553E8F96F1DEDC7361DC02133_RuntimeMethod_var);
				V_8 = L_41;
				bool L_42;
				L_42 = Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_inline((&V_8), Awaiter_get_IsCompleted_mFC4A614AA0B1C8D41A05840FAA981FAF10FC99C8_RuntimeMethod_var);
				if (L_42)
				{
					goto IL_0213_2;
				}
			}
			{
				int32_t L_43 = 2;
				V_0 = L_43;
				__this->___U3CU3E1__state_0 = L_43;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_44 = V_8;
				__this->___U3CU3Eu__1_14 = L_44;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_45 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88*, U3CMinAwaitWithCancellationAsyncU3Ed__19_1_tFD68B66ACCC41046F7697071B6978A6140527418**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_45, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_03dc;
			}

IL_01f6_2:
			{
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88 L_46 = (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88)__this->___U3CU3Eu__1_14;
				V_8 = L_46;
				Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88* L_47 = (Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88*)(&__this->___U3CU3Eu__1_14);
				il2cpp_codegen_initobj(L_47, sizeof(Awaiter_tB09E6480B270F18C61A6C80D0F16776750568E88));
				int32_t L_48 = (-1);
				V_0 = L_48;
				__this->___U3CU3E1__state_0 = L_48;
			}

IL_0213_2:
			{
				double L_49;
				L_49 = Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_inline((&V_8), Awaiter_GetResult_mB34321D771B82DBC43A663E654BDEEBF43A60C27_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_49;
				double L_50 = (double)__this->___U3CU3Es__8_12;
				__this->___U3CxU3E5__7_11 = L_50;
				double L_51 = (double)__this->___U3CvalueU3E5__1_5;
				double L_52 = (double)__this->___U3CxU3E5__7_11;
				V_9 = (bool)((((double)L_51) > ((double)L_52))? 1 : 0);
				bool L_53 = V_9;
				if (!L_53)
				{
					goto IL_024e_2;
				}
			}
			{
				double L_54 = (double)__this->___U3CxU3E5__7_11;
				__this->___U3CvalueU3E5__1_5 = L_54;
			}

IL_024e_2:
			{
			}

IL_024f_2:
			{
				RuntimeObject* L_55 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_55);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_56;
				L_56 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_55);
				V_7 = L_56;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_57;
				L_57 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_11 = L_57;
				bool L_58;
				L_58 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_11), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_58)
				{
					goto IL_02b4_2;
				}
			}
			{
				int32_t L_59 = 3;
				V_0 = L_59;
				__this->___U3CU3E1__state_0 = L_59;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_60 = V_11;
				__this->___U3CU3Eu__2_15 = L_60;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_15))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_61 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__19_1_tFD68B66ACCC41046F7697071B6978A6140527418**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_61, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_03dc;
			}

IL_0297_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_62 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_15;
				V_11 = L_62;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_63 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_15);
				il2cpp_codegen_initobj(L_63, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_64 = (-1);
				V_0 = L_64;
				__this->___U3CU3E1__state_0 = L_64;
			}

IL_02b4_2:
			{
				bool L_65;
				L_65 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_11), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__9_13 = L_65;
				bool L_66 = (bool)__this->___U3CU3Es__9_13;
				V_10 = L_66;
				bool L_67 = V_10;
				if (L_67)
				{
					goto IL_019d_2;
				}
			}
			{
				goto IL_02df_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_02d3_1;
			}
			throw e;
		}

CATCH_02d3_1:
		{
			V_12 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_68 = V_12;
			__this->___U3CU3Es__3_7 = L_68;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_68);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_02df_1;
		}

IL_02df_1:
		{
			RuntimeObject* L_69 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_69) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_70 = V_13;
			if (!L_70)
			{
				goto IL_035e_1;
			}
		}
		{
			RuntimeObject* L_71 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_71);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_72;
			L_72 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_71);
			V_15 = L_72;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_73;
			L_73 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_15), NULL);
			V_14 = L_73;
			bool L_74;
			L_74 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_74)
			{
				goto IL_0355_1;
			}
		}
		{
			int32_t L_75 = 4;
			V_0 = L_75;
			__this->___U3CU3E1__state_0 = L_75;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_76 = V_14;
			__this->___U3CU3Eu__3_16 = L_76;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_16))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_77 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitWithCancellationAsyncU3Ed__19_1_tFD68B66ACCC41046F7697071B6978A6140527418**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_77, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_03dc;
		}

IL_0338_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_78 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_16;
			V_14 = L_78;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_79 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_16);
			il2cpp_codegen_initobj(L_79, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_80 = (-1);
			V_0 = L_80;
			__this->___U3CU3E1__state_0 = L_80;
		}

IL_0355_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_035e_1:
		{
			RuntimeObject* L_81 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_12 = L_81;
			RuntimeObject* L_82 = V_12;
			if (!L_82)
			{
				goto IL_0388_1;
			}
		}
		{
			RuntimeObject* L_83 = V_12;
			V_16 = ((Exception_t*)IsInstClass((RuntimeObject*)L_83, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_84 = V_16;
			if (L_84)
			{
				goto IL_037b_1;
			}
		}
		{
			RuntimeObject* L_85 = V_12;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_85, method);
		}

IL_037b_1:
		{
			Exception_t* L_86 = V_16;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_87;
			L_87 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_86, NULL);
			NullCheck(L_87);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_87, NULL);
		}

IL_0388_1:
		{
			int32_t L_88 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			double L_89 = (double)__this->___U3CvalueU3E5__1_5;
			V_1 = L_89;
			goto IL_03c0;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_039f;
		}
		throw e;
	}

CATCH_039f:
	{
		V_16 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_90 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_91 = V_16;
		AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_inline(L_90, L_91, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m905AE4E4BFF291738E6C5DF1698CAE268E94D46E_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_03dc;
	}

IL_03c0:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408* L_92 = (AsyncUniTaskMethodBuilder_1_tFE1AA684BDA8A78E3033BF84403D680867BD4408*)(&__this->___U3CU3Et__builder_1);
		double L_93 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_inline(L_92, L_93, AsyncUniTaskMethodBuilder_1_SetResult_m70F484039ACCF712F65106CF2C30578DBC70D3D0_RuntimeMethod_var);
	}

IL_03dc:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__19_1_SetStateMachine_mA5A083BC5EE440A070B9F3066D46715FFAAA6755_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__19_1_tFD68B66ACCC41046F7697071B6978A6140527418* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__23_1__ctor_m21DF0E6526668941EB798D72EB9EB0A62460D049_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__23_1_t56364C68BFED293EA7A45B37CD7056C742942F89* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__23_1_MoveNext_m3460B4B908F1F85F8F7DA1F321A76939BD91289C_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__23_1_t56364C68BFED293EA7A45B37CD7056C742942F89* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_tD0D04062FAB00B8103221019885B52BF69955AEB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tD0D04062FAB00B8103221019885B52BF69955AEB);
	const Il2CppFullySharedGenericAny L_39 = L_10;
	int32_t V_0 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitWithCancellationAsyncU3Ed__23_1_t56364C68BFED293EA7A45B37CD7056C742942F89* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_11;
	memset((&V_11), 0, sizeof(V_11));
	RuntimeObject* V_12 = NULL;
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Exception_t* V_16 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
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
			goto IL_0338_1;
		}

IL_001a_1:
		{
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* L_3 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)(&__this->___U3CvalueU3E5__1_5);
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
				switch (L_7)
				{
					case 0:
					{
						goto IL_0065_2;
					}
					case 1:
					{
						goto IL_0067_2;
					}
					case 2:
					{
						goto IL_006c_2;
					}
					case 3:
					{
						goto IL_0071_2;
					}
				}
			}
			{
				goto IL_0076_2;
			}

IL_0065_2:
			{
				goto IL_00d3_2;
			}

IL_0067_2:
			{
				goto IL_0155_2;
			}

IL_006c_2:
			{
				goto IL_01f3_2;
			}

IL_0071_2:
			{
				goto IL_0297_2;
			}

IL_0076_2:
			{
				goto IL_010d_2;
			}

IL_007c_2:
			{
				Func_3_tE135AFB66CDB73C25CDE9CDD97913EE0CF6337D7* L_8 = (Func_3_tE135AFB66CDB73C25CDE9CDD97913EE0CF6337D7*)__this->___selector_3;
				RuntimeObject* L_9 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_8);
				UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3 L_12;
				L_12 = InvokerFuncInvoker2< UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10), L_11);
				V_3 = L_12;
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_13;
				L_13 = UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_inline((&V_3), UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_inline((&V_2), Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00ef_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state_0 = L_15;
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_16 = V_2;
				__this->___U3CU3Eu__1_14 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_17 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8*, U3CMinAwaitWithCancellationAsyncU3Ed__23_1_t56364C68BFED293EA7A45B37CD7056C742942F89**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_03dc;
			}

IL_00d3_2:
			{
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_18 = (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8)__this->___U3CU3Eu__1_14;
				V_2 = L_18;
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* L_19 = (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8*)(&__this->___U3CU3Eu__1_14);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state_0 = L_20;
			}

IL_00ef_2:
			{
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_21;
				L_21 = Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_inline((&V_2), Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_RuntimeMethod_var);
				__this->___U3CU3Es__5_9 = L_21;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_22 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)__this->___U3CU3Es__5_9;
				__this->___U3CvalueU3E5__1_5 = L_22;
				goto IL_0194_2;
			}

IL_010d_2:
			{
				RuntimeObject* L_23 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_23);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_24;
				L_24 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_23);
				V_7 = L_24;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_25;
				L_25 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_6 = L_25;
				bool L_26;
				L_26 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_6), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_26)
				{
					goto IL_0172_2;
				}
			}
			{
				int32_t L_27 = 1;
				V_0 = L_27;
				__this->___U3CU3E1__state_0 = L_27;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28 = V_6;
				__this->___U3CU3Eu__2_15 = L_28;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_15))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_29 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__23_1_t56364C68BFED293EA7A45B37CD7056C742942F89**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_29, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_03dc;
			}

IL_0155_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_30 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_15;
				V_6 = L_30;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_31 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_15);
				il2cpp_codegen_initobj(L_31, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_32 = (-1);
				V_0 = L_32;
				__this->___U3CU3E1__state_0 = L_32;
			}

IL_0172_2:
			{
				bool L_33;
				L_33 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6_10 = L_33;
				bool L_34 = (bool)__this->___U3CU3Es__6_10;
				V_5 = L_34;
				bool L_35 = V_5;
				if (L_35)
				{
					goto IL_007c_2;
				}
			}
			{
				Exception_t* L_36;
				L_36 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, method);
			}

IL_0194_2:
			{
				goto IL_024f_2;
			}

IL_019a_2:
			{
				Func_3_tE135AFB66CDB73C25CDE9CDD97913EE0CF6337D7* L_37 = (Func_3_tE135AFB66CDB73C25CDE9CDD97913EE0CF6337D7*)__this->___selector_3;
				RuntimeObject* L_38 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_38);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_38, (Il2CppFullySharedGenericAny*)L_39);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_40 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_37);
				UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3 L_41;
				L_41 = InvokerFuncInvoker2< UniTask_1_t3B12BE0796717AAC72F43FBE1174EED0EC0097C3, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_37, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_39: *(void**)L_39), L_40);
				V_3 = L_41;
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_42;
				L_42 = UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_inline((&V_3), UniTask_1_GetAwaiter_mE4F348E45E23B27DC05E89090C2C334B99FECBD4_RuntimeMethod_var);
				V_8 = L_42;
				bool L_43;
				L_43 = Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_inline((&V_8), Awaiter_get_IsCompleted_mDD8356C2BFB8EBB175763FE2D92A4B0BEBDAEE94_RuntimeMethod_var);
				if (L_43)
				{
					goto IL_0210_2;
				}
			}
			{
				int32_t L_44 = 2;
				V_0 = L_44;
				__this->___U3CU3E1__state_0 = L_44;
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_45 = V_8;
				__this->___U3CU3Eu__1_14 = L_45;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_46 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8*, U3CMinAwaitWithCancellationAsyncU3Ed__23_1_t56364C68BFED293EA7A45B37CD7056C742942F89**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_46, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_03dc;
			}

IL_01f3_2:
			{
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8 L_47 = (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8)__this->___U3CU3Eu__1_14;
				V_8 = L_47;
				Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8* L_48 = (Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8*)(&__this->___U3CU3Eu__1_14);
				il2cpp_codegen_initobj(L_48, sizeof(Awaiter_t952BF86C033A0C3E820B98E546125A9B5D0F94B8));
				int32_t L_49 = (-1);
				V_0 = L_49;
				__this->___U3CU3E1__state_0 = L_49;
			}

IL_0210_2:
			{
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_50;
				L_50 = Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_inline((&V_8), Awaiter_GetResult_mCF3C6ADBB06CAA59BDE760F66F67985E2B383177_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_50;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_51 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)__this->___U3CU3Es__8_12;
				__this->___U3CxU3E5__7_11 = L_51;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_52 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)__this->___U3CvalueU3E5__1_5;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_53 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)__this->___U3CxU3E5__7_11;
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				bool L_54;
				L_54 = Decimal_op_GreaterThan_m549F09BF0C53D8611E550CA9CCB53543D6DAF717(L_52, L_53, NULL);
				V_9 = L_54;
				bool L_55 = V_9;
				if (!L_55)
				{
					goto IL_024e_2;
				}
			}
			{
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_56 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)__this->___U3CxU3E5__7_11;
				__this->___U3CvalueU3E5__1_5 = L_56;
			}

IL_024e_2:
			{
			}

IL_024f_2:
			{
				RuntimeObject* L_57 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_57);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_58;
				L_58 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_57);
				V_7 = L_58;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_59;
				L_59 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_11 = L_59;
				bool L_60;
				L_60 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_11), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_60)
				{
					goto IL_02b4_2;
				}
			}
			{
				int32_t L_61 = 3;
				V_0 = L_61;
				__this->___U3CU3E1__state_0 = L_61;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_62 = V_11;
				__this->___U3CU3Eu__2_15 = L_62;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_15))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_63 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__23_1_t56364C68BFED293EA7A45B37CD7056C742942F89**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_63, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_03dc;
			}

IL_0297_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_64 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_15;
				V_11 = L_64;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_65 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_15);
				il2cpp_codegen_initobj(L_65, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_66 = (-1);
				V_0 = L_66;
				__this->___U3CU3E1__state_0 = L_66;
			}

IL_02b4_2:
			{
				bool L_67;
				L_67 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_11), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__9_13 = L_67;
				bool L_68 = (bool)__this->___U3CU3Es__9_13;
				V_10 = L_68;
				bool L_69 = V_10;
				if (L_69)
				{
					goto IL_019a_2;
				}
			}
			{
				goto IL_02df_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_02d3_1;
			}
			throw e;
		}

CATCH_02d3_1:
		{
			V_12 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_70 = V_12;
			__this->___U3CU3Es__3_7 = L_70;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_70);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_02df_1;
		}

IL_02df_1:
		{
			RuntimeObject* L_71 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_71) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_72 = V_13;
			if (!L_72)
			{
				goto IL_035e_1;
			}
		}
		{
			RuntimeObject* L_73 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_73);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_74;
			L_74 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_73);
			V_15 = L_74;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_75;
			L_75 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_15), NULL);
			V_14 = L_75;
			bool L_76;
			L_76 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_76)
			{
				goto IL_0355_1;
			}
		}
		{
			int32_t L_77 = 4;
			V_0 = L_77;
			__this->___U3CU3E1__state_0 = L_77;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_78 = V_14;
			__this->___U3CU3Eu__3_16 = L_78;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_16))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_79 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitWithCancellationAsyncU3Ed__23_1_t56364C68BFED293EA7A45B37CD7056C742942F89**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_79, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_03dc;
		}

IL_0338_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_80 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_16;
			V_14 = L_80;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_81 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_16);
			il2cpp_codegen_initobj(L_81, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_82 = (-1);
			V_0 = L_82;
			__this->___U3CU3E1__state_0 = L_82;
		}

IL_0355_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_035e_1:
		{
			RuntimeObject* L_83 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_12 = L_83;
			RuntimeObject* L_84 = V_12;
			if (!L_84)
			{
				goto IL_0388_1;
			}
		}
		{
			RuntimeObject* L_85 = V_12;
			V_16 = ((Exception_t*)IsInstClass((RuntimeObject*)L_85, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_86 = V_16;
			if (L_86)
			{
				goto IL_037b_1;
			}
		}
		{
			RuntimeObject* L_87 = V_12;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_87, method);
		}

IL_037b_1:
		{
			Exception_t* L_88 = V_16;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_89;
			L_89 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_88, NULL);
			NullCheck(L_89);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_89, NULL);
		}

IL_0388_1:
		{
			int32_t L_90 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_91 = (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)__this->___U3CvalueU3E5__1_5;
			V_1 = L_91;
			goto IL_03c0;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_039f;
		}
		throw e;
	}

CATCH_039f:
	{
		V_16 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_92 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_93 = V_16;
		AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_inline(L_92, L_93, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mDEDB35F7D00E8FCF941BCF3106765F652512BBC1_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_03dc;
	}

IL_03c0:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166* L_94 = (AsyncUniTaskMethodBuilder_1_t2C2ECD748B3301D4F33660F05F22CC5A6B1CD166*)(&__this->___U3CU3Et__builder_1);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_95 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_inline(L_94, L_95, AsyncUniTaskMethodBuilder_1_SetResult_mEDCBAD9700796862620B49E5C1B65738ED5500F8_RuntimeMethod_var);
	}

IL_03dc:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__23_1_SetStateMachine_m0CDC2F5247FDF64CDAB6511DAFFE4539EB8C4713_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__23_1_t56364C68BFED293EA7A45B37CD7056C742942F89* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__27_1__ctor_m2D3FD1783B190B0499F0F3A45A0B0056DA5B0335_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__27_1_tA45E1E004A2DB3D5167CEE8595F6FC1BEB82C361* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__27_1_MoveNext_m6CEF4B3B1D2DC1DDF2B5CC7BF19F51D38A7F418C_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__27_1_tA45E1E004A2DB3D5167CEE8595F6FC1BEB82C361* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t6136090ADB939205A5C676DDD4CFC430A4F569BE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t6136090ADB939205A5C676DDD4CFC430A4F569BE);
	const Il2CppFullySharedGenericAny L_43 = L_10;
	int32_t V_0 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitWithCancellationAsyncU3Ed__27_1_tA45E1E004A2DB3D5167CEE8595F6FC1BEB82C361* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_15;
	memset((&V_15), 0, sizeof(V_15));
	RuntimeObject* V_16 = NULL;
	bool V_17 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_18;
	memset((&V_18), 0, sizeof(V_18));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_19;
	memset((&V_19), 0, sizeof(V_19));
	Exception_t* V_20 = NULL;
	int32_t V_21 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
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
			goto IL_03bb_1;
		}

IL_001a_1:
		{
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_3 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CvalueU3E5__1_5);
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
				switch (L_7)
				{
					case 0:
					{
						goto IL_0065_2;
					}
					case 1:
					{
						goto IL_0067_2;
					}
					case 2:
					{
						goto IL_006c_2;
					}
					case 3:
					{
						goto IL_0071_2;
					}
				}
			}
			{
				goto IL_0076_2;
			}

IL_0065_2:
			{
				goto IL_00d3_2;
			}

IL_0067_2:
			{
				goto IL_0177_2;
			}

IL_006c_2:
			{
				goto IL_0220_2;
			}

IL_0071_2:
			{
				goto IL_0311_2;
			}

IL_0076_2:
			{
				goto IL_012f_2;
			}

IL_007c_2:
			{
				Func_3_tA0DEFAEF785E5E0D32E2CABA4CBDB7F9D34C2B8D* L_8 = (Func_3_tA0DEFAEF785E5E0D32E2CABA4CBDB7F9D34C2B8D*)__this->___selector_3;
				RuntimeObject* L_9 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_8);
				UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05 L_12;
				L_12 = InvokerFuncInvoker2< UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10), L_11);
				V_3 = L_12;
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_13;
				L_13 = UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_inline((&V_3), UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_inline((&V_2), Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00ef_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state_0 = L_15;
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_16 = V_2;
				__this->___U3CU3Eu__1_15 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_15))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_17 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*, Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9*, U3CMinAwaitWithCancellationAsyncU3Ed__27_1_tA45E1E004A2DB3D5167CEE8595F6FC1BEB82C361**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_047c;
			}

IL_00d3_2:
			{
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_18 = (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9)__this->___U3CU3Eu__1_15;
				V_2 = L_18;
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* L_19 = (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9*)(&__this->___U3CU3Eu__1_15);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state_0 = L_20;
			}

IL_00ef_2:
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_21;
				L_21 = Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_inline((&V_2), Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_RuntimeMethod_var);
				__this->___U3CU3Es__6_10 = L_21;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_22 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28)__this->___U3CU3Es__6_10;
				__this->___U3CvalueU3E5__1_5 = L_22;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_23 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CU3Es__6_10);
				il2cpp_codegen_initobj(L_23, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_24 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CvalueU3E5__1_5);
				bool L_25;
				L_25 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_24, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				V_5 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
				bool L_26 = V_5;
				if (!L_26)
				{
					goto IL_012a_2;
				}
			}
			{
				goto IL_012f_2;
			}

IL_012a_2:
			{
				goto IL_01c1_2;
			}

IL_012f_2:
			{
				RuntimeObject* L_27 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
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
					goto IL_0194_2;
				}
			}
			{
				int32_t L_31 = 1;
				V_0 = L_31;
				__this->___U3CU3E1__state_0 = L_31;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_32 = V_7;
				__this->___U3CU3Eu__2_16 = L_32;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_16))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_33 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__27_1_tA45E1E004A2DB3D5167CEE8595F6FC1BEB82C361**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_33, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_047c;
			}

IL_0177_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_16;
				V_7 = L_34;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_35 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_16);
				il2cpp_codegen_initobj(L_35, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_36 = (-1);
				V_0 = L_36;
				__this->___U3CU3E1__state_0 = L_36;
			}

IL_0194_2:
			{
				bool L_37;
				L_37 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_37;
				bool L_38 = (bool)__this->___U3CU3Es__7_11;
				V_6 = L_38;
				bool L_39 = V_6;
				if (L_39)
				{
					goto IL_007c_2;
				}
			}
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_40 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CU3Es__5_9);
				il2cpp_codegen_initobj(L_40, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				goto IL_034d_2;
			}

IL_01c1_2:
			{
				goto IL_02c9_2;
			}

IL_01c7_2:
			{
				Func_3_tA0DEFAEF785E5E0D32E2CABA4CBDB7F9D34C2B8D* L_41 = (Func_3_tA0DEFAEF785E5E0D32E2CABA4CBDB7F9D34C2B8D*)__this->___selector_3;
				RuntimeObject* L_42 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_42);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_42, (Il2CppFullySharedGenericAny*)L_43);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_44 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_41);
				UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05 L_45;
				L_45 = InvokerFuncInvoker2< UniTask_1_t001C0589DE83E7328261E2F1FDB8AA807A877B05, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_43: *(void**)L_43), L_44);
				V_3 = L_45;
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_46;
				L_46 = UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_inline((&V_3), UniTask_1_GetAwaiter_mCE73CF43973E383B32E8D0DAA79C48E97BDE47E9_RuntimeMethod_var);
				V_9 = L_46;
				bool L_47;
				L_47 = Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_inline((&V_9), Awaiter_get_IsCompleted_m459ECC60B9F9BCF686D181AB2E552AF171C1234D_RuntimeMethod_var);
				if (L_47)
				{
					goto IL_023d_2;
				}
			}
			{
				int32_t L_48 = 2;
				V_0 = L_48;
				__this->___U3CU3E1__state_0 = L_48;
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_49 = V_9;
				__this->___U3CU3Eu__1_15 = L_49;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_15))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_50 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*, Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9*, U3CMinAwaitWithCancellationAsyncU3Ed__27_1_tA45E1E004A2DB3D5167CEE8595F6FC1BEB82C361**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_50, (&V_9), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_047c;
			}

IL_0220_2:
			{
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9 L_51 = (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9)__this->___U3CU3Eu__1_15;
				V_9 = L_51;
				Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9* L_52 = (Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9*)(&__this->___U3CU3Eu__1_15);
				il2cpp_codegen_initobj(L_52, sizeof(Awaiter_t42B72163A9D9CCB0DCE8BEA08256F1F42B4757C9));
				int32_t L_53 = (-1);
				V_0 = L_53;
				__this->___U3CU3E1__state_0 = L_53;
			}

IL_023d_2:
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_54;
				L_54 = Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_inline((&V_9), Awaiter_GetResult_mED92979121D94AD38BFA65D031CB0FAF9DAC3573_RuntimeMethod_var);
				__this->___U3CU3Es__9_13 = L_54;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_55 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28)__this->___U3CU3Es__9_13;
				__this->___U3CxU3E5__8_12 = L_55;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_56 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CU3Es__9_13);
				il2cpp_codegen_initobj(L_56, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_57 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CxU3E5__8_12);
				bool L_58;
				L_58 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_57, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				V_10 = (bool)((((int32_t)L_58) == ((int32_t)0))? 1 : 0);
				bool L_59 = V_10;
				if (!L_59)
				{
					goto IL_0278_2;
				}
			}
			{
				goto IL_02c9_2;
			}

IL_0278_2:
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_60 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28)__this->___U3CvalueU3E5__1_5;
				V_12 = L_60;
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_61 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28)__this->___U3CxU3E5__8_12;
				V_13 = L_61;
				int32_t L_62;
				L_62 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_12), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
				int32_t L_63;
				L_63 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_13), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
				bool L_64;
				L_64 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_12), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				bool L_65;
				L_65 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_13), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
				V_11 = (bool)((int32_t)(((((int32_t)L_62) > ((int32_t)L_63))? 1 : 0)&((int32_t)((int32_t)L_64&(int32_t)L_65))));
				bool L_66 = V_11;
				if (!L_66)
				{
					goto IL_02bc_2;
				}
			}
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_67 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28)__this->___U3CxU3E5__8_12;
				__this->___U3CvalueU3E5__1_5 = L_67;
			}

IL_02bc_2:
			{
				Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_68 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CxU3E5__8_12);
				il2cpp_codegen_initobj(L_68, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
			}

IL_02c9_2:
			{
				RuntimeObject* L_69 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_69);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_70;
				L_70 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_69);
				V_8 = L_70;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_71;
				L_71 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_15 = L_71;
				bool L_72;
				L_72 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_15), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_72)
				{
					goto IL_032e_2;
				}
			}
			{
				int32_t L_73 = 3;
				V_0 = L_73;
				__this->___U3CU3E1__state_0 = L_73;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_74 = V_15;
				__this->___U3CU3Eu__2_16 = L_74;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_16))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_75 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__27_1_tA45E1E004A2DB3D5167CEE8595F6FC1BEB82C361**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_75, (&V_15), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_047c;
			}

IL_0311_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_76 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_16;
				V_15 = L_76;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_77 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_16);
				il2cpp_codegen_initobj(L_77, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_78 = (-1);
				V_0 = L_78;
				__this->___U3CU3E1__state_0 = L_78;
			}

IL_032e_2:
			{
				bool L_79;
				L_79 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_15), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__10_14 = L_79;
				bool L_80 = (bool)__this->___U3CU3Es__10_14;
				V_14 = L_80;
				bool L_81 = V_14;
				if (L_81)
				{
					goto IL_01c7_2;
				}
			}
			{
				goto IL_0362_1;
			}

IL_034d_2:
			{
				__this->___U3CU3Es__4_8 = 1;
				goto IL_0362_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0356_1;
			}
			throw e;
		}

CATCH_0356_1:
		{
			V_16 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_82 = V_16;
			__this->___U3CU3Es__3_7 = L_82;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_82);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0362_1;
		}

IL_0362_1:
		{
			RuntimeObject* L_83 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_17 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_83) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_84 = V_17;
			if (!L_84)
			{
				goto IL_03e1_1;
			}
		}
		{
			RuntimeObject* L_85 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_85);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_86;
			L_86 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_85);
			V_19 = L_86;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_87;
			L_87 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_19), NULL);
			V_18 = L_87;
			bool L_88;
			L_88 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_18), NULL);
			if (L_88)
			{
				goto IL_03d8_1;
			}
		}
		{
			int32_t L_89 = 4;
			V_0 = L_89;
			__this->___U3CU3E1__state_0 = L_89;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_90 = V_18;
			__this->___U3CU3Eu__3_17 = L_90;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_17))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_91 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitWithCancellationAsyncU3Ed__27_1_tA45E1E004A2DB3D5167CEE8595F6FC1BEB82C361**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_91, (&V_18), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_047c;
		}

IL_03bb_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_92 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_17;
			V_18 = L_92;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_93 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_17);
			il2cpp_codegen_initobj(L_93, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_94 = (-1);
			V_0 = L_94;
			__this->___U3CU3E1__state_0 = L_94;
		}

IL_03d8_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_18), NULL);
		}

IL_03e1_1:
		{
			RuntimeObject* L_95 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_16 = L_95;
			RuntimeObject* L_96 = V_16;
			if (!L_96)
			{
				goto IL_040b_1;
			}
		}
		{
			RuntimeObject* L_97 = V_16;
			V_20 = ((Exception_t*)IsInstClass((RuntimeObject*)L_97, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_98 = V_20;
			if (L_98)
			{
				goto IL_03fe_1;
			}
		}
		{
			RuntimeObject* L_99 = V_16;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_99, method);
		}

IL_03fe_1:
		{
			Exception_t* L_100 = V_20;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_101;
			L_101 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_100, NULL);
			NullCheck(L_101);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_101, NULL);
		}

IL_040b_1:
		{
			int32_t L_102 = (int32_t)__this->___U3CU3Es__4_8;
			V_21 = L_102;
			int32_t L_103 = V_21;
			if ((((int32_t)L_103) == ((int32_t)1)))
			{
				goto IL_041a_1;
			}
		}
		{
			goto IL_0423_1;
		}

IL_041a_1:
		{
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_104 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28)__this->___U3CU3Es__5_9;
			V_1 = L_104;
			goto IL_0460;
		}

IL_0423_1:
		{
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_105 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___U3CU3Es__5_9);
			il2cpp_codegen_initobj(L_105, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_106 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28)__this->___U3CvalueU3E5__1_5;
			V_1 = L_106;
			goto IL_0460;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_043f;
		}
		throw e;
	}

CATCH_043f:
	{
		V_20 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_107 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_108 = V_20;
		AsyncUniTaskMethodBuilder_1_SetException_mE8C5BA18D2449D6BD546630CE70DE315F5F91FCE_inline(L_107, L_108, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mE8C5BA18D2449D6BD546630CE70DE315F5F91FCE_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_047c;
	}

IL_0460:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B* L_109 = (AsyncUniTaskMethodBuilder_1_t4D808E42ADFC2762C7E19FF74D1A404E388BE66B*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_110 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_inline(L_109, L_110, AsyncUniTaskMethodBuilder_1_SetResult_m5E0E26E389BF8D15A8935BC741FAADEFF1617158_RuntimeMethod_var);
	}

IL_047c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__27_1_SetStateMachine_m7725E3B9B6941A673914B2485EAAD5F0ADF7EF2D_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__27_1_tA45E1E004A2DB3D5167CEE8595F6FC1BEB82C361* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__31_1__ctor_m588937A29D7A758F34A6490EE61463D1B2310702_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__31_1_t1EE73BF3740F1CDA20ACB71BFF7968ABDF9CB05B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__31_1_MoveNext_m927E3CDB3E3081D74C0CE8885A306AA45156B218_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__31_1_t1EE73BF3740F1CDA20ACB71BFF7968ABDF9CB05B* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t40FE473D71FA7D3DFFFE890BF16D07676E158CEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t40FE473D71FA7D3DFFFE890BF16D07676E158CEC);
	const Il2CppFullySharedGenericAny L_43 = L_10;
	int32_t V_0 = 0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitWithCancellationAsyncU3Ed__31_1_t1EE73BF3740F1CDA20ACB71BFF7968ABDF9CB05B* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_15;
	memset((&V_15), 0, sizeof(V_15));
	RuntimeObject* V_16 = NULL;
	bool V_17 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_18;
	memset((&V_18), 0, sizeof(V_18));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_19;
	memset((&V_19), 0, sizeof(V_19));
	Exception_t* V_20 = NULL;
	int32_t V_21 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
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
			goto IL_03bb_1;
		}

IL_001a_1:
		{
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_3 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CvalueU3E5__1_5);
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
				switch (L_7)
				{
					case 0:
					{
						goto IL_0065_2;
					}
					case 1:
					{
						goto IL_0067_2;
					}
					case 2:
					{
						goto IL_006c_2;
					}
					case 3:
					{
						goto IL_0071_2;
					}
				}
			}
			{
				goto IL_0076_2;
			}

IL_0065_2:
			{
				goto IL_00d3_2;
			}

IL_0067_2:
			{
				goto IL_0177_2;
			}

IL_006c_2:
			{
				goto IL_0220_2;
			}

IL_0071_2:
			{
				goto IL_0311_2;
			}

IL_0076_2:
			{
				goto IL_012f_2;
			}

IL_007c_2:
			{
				Func_3_t4111B7EAAEBCF4004223B4E554711FE862E5C3B2* L_8 = (Func_3_t4111B7EAAEBCF4004223B4E554711FE862E5C3B2*)__this->___selector_3;
				RuntimeObject* L_9 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_8);
				UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C L_12;
				L_12 = InvokerFuncInvoker2< UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10), L_11);
				V_3 = L_12;
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_13;
				L_13 = UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_inline((&V_3), UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_inline((&V_2), Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00ef_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state_0 = L_15;
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_16 = V_2;
				__this->___U3CU3Eu__1_15 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_15))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_17 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*, Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB*, U3CMinAwaitWithCancellationAsyncU3Ed__31_1_t1EE73BF3740F1CDA20ACB71BFF7968ABDF9CB05B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_047c;
			}

IL_00d3_2:
			{
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_18 = (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB)__this->___U3CU3Eu__1_15;
				V_2 = L_18;
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* L_19 = (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB*)(&__this->___U3CU3Eu__1_15);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state_0 = L_20;
			}

IL_00ef_2:
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_21;
				L_21 = Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_inline((&V_2), Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_RuntimeMethod_var);
				__this->___U3CU3Es__6_10 = L_21;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_22 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17)__this->___U3CU3Es__6_10;
				__this->___U3CvalueU3E5__1_5 = L_22;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_23 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CU3Es__6_10);
				il2cpp_codegen_initobj(L_23, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_24 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CvalueU3E5__1_5);
				bool L_25;
				L_25 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline(L_24, Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
				V_5 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
				bool L_26 = V_5;
				if (!L_26)
				{
					goto IL_012a_2;
				}
			}
			{
				goto IL_012f_2;
			}

IL_012a_2:
			{
				goto IL_01c1_2;
			}

IL_012f_2:
			{
				RuntimeObject* L_27 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
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
					goto IL_0194_2;
				}
			}
			{
				int32_t L_31 = 1;
				V_0 = L_31;
				__this->___U3CU3E1__state_0 = L_31;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_32 = V_7;
				__this->___U3CU3Eu__2_16 = L_32;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_16))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_33 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__31_1_t1EE73BF3740F1CDA20ACB71BFF7968ABDF9CB05B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_33, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_047c;
			}

IL_0177_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_16;
				V_7 = L_34;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_35 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_16);
				il2cpp_codegen_initobj(L_35, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_36 = (-1);
				V_0 = L_36;
				__this->___U3CU3E1__state_0 = L_36;
			}

IL_0194_2:
			{
				bool L_37;
				L_37 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_37;
				bool L_38 = (bool)__this->___U3CU3Es__7_11;
				V_6 = L_38;
				bool L_39 = V_6;
				if (L_39)
				{
					goto IL_007c_2;
				}
			}
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_40 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CU3Es__5_9);
				il2cpp_codegen_initobj(L_40, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
				goto IL_034d_2;
			}

IL_01c1_2:
			{
				goto IL_02c9_2;
			}

IL_01c7_2:
			{
				Func_3_t4111B7EAAEBCF4004223B4E554711FE862E5C3B2* L_41 = (Func_3_t4111B7EAAEBCF4004223B4E554711FE862E5C3B2*)__this->___selector_3;
				RuntimeObject* L_42 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_42);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_42, (Il2CppFullySharedGenericAny*)L_43);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_44 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_41);
				UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C L_45;
				L_45 = InvokerFuncInvoker2< UniTask_1_tA91B816E87E7F86A052B1A7136DA1DEEF522238C, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_43: *(void**)L_43), L_44);
				V_3 = L_45;
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_46;
				L_46 = UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_inline((&V_3), UniTask_1_GetAwaiter_m560B5EF488BEB3FC57FB32927D86D5E422EB3692_RuntimeMethod_var);
				V_9 = L_46;
				bool L_47;
				L_47 = Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_inline((&V_9), Awaiter_get_IsCompleted_m0BD1E639604FC2764BBA69D6FFF099788ECB3ABF_RuntimeMethod_var);
				if (L_47)
				{
					goto IL_023d_2;
				}
			}
			{
				int32_t L_48 = 2;
				V_0 = L_48;
				__this->___U3CU3E1__state_0 = L_48;
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_49 = V_9;
				__this->___U3CU3Eu__1_15 = L_49;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_15))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_50 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*, Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB*, U3CMinAwaitWithCancellationAsyncU3Ed__31_1_t1EE73BF3740F1CDA20ACB71BFF7968ABDF9CB05B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_50, (&V_9), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_047c;
			}

IL_0220_2:
			{
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB L_51 = (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB)__this->___U3CU3Eu__1_15;
				V_9 = L_51;
				Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB* L_52 = (Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB*)(&__this->___U3CU3Eu__1_15);
				il2cpp_codegen_initobj(L_52, sizeof(Awaiter_t1BF66D1C44DA33E73655BC41FD3B89B76538F4EB));
				int32_t L_53 = (-1);
				V_0 = L_53;
				__this->___U3CU3E1__state_0 = L_53;
			}

IL_023d_2:
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_54;
				L_54 = Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_inline((&V_9), Awaiter_GetResult_mCEF20BC1CC17B9542C7A3BEF2DEEF2896198D712_RuntimeMethod_var);
				__this->___U3CU3Es__9_13 = L_54;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_55 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17)__this->___U3CU3Es__9_13;
				__this->___U3CxU3E5__8_12 = L_55;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_56 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CU3Es__9_13);
				il2cpp_codegen_initobj(L_56, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_57 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CxU3E5__8_12);
				bool L_58;
				L_58 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline(L_57, Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
				V_10 = (bool)((((int32_t)L_58) == ((int32_t)0))? 1 : 0);
				bool L_59 = V_10;
				if (!L_59)
				{
					goto IL_0278_2;
				}
			}
			{
				goto IL_02c9_2;
			}

IL_0278_2:
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_60 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17)__this->___U3CvalueU3E5__1_5;
				V_12 = L_60;
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_61 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17)__this->___U3CxU3E5__8_12;
				V_13 = L_61;
				int64_t L_62;
				L_62 = Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_inline((&V_12), Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
				int64_t L_63;
				L_63 = Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_inline((&V_13), Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
				bool L_64;
				L_64 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&V_12), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
				bool L_65;
				L_65 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&V_13), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
				V_11 = (bool)((int32_t)(((((int64_t)L_62) > ((int64_t)L_63))? 1 : 0)&((int32_t)((int32_t)L_64&(int32_t)L_65))));
				bool L_66 = V_11;
				if (!L_66)
				{
					goto IL_02bc_2;
				}
			}
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_67 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17)__this->___U3CxU3E5__8_12;
				__this->___U3CvalueU3E5__1_5 = L_67;
			}

IL_02bc_2:
			{
				Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_68 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CxU3E5__8_12);
				il2cpp_codegen_initobj(L_68, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
			}

IL_02c9_2:
			{
				RuntimeObject* L_69 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_69);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_70;
				L_70 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_69);
				V_8 = L_70;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_71;
				L_71 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_15 = L_71;
				bool L_72;
				L_72 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_15), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_72)
				{
					goto IL_032e_2;
				}
			}
			{
				int32_t L_73 = 3;
				V_0 = L_73;
				__this->___U3CU3E1__state_0 = L_73;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_74 = V_15;
				__this->___U3CU3Eu__2_16 = L_74;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_16))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_75 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__31_1_t1EE73BF3740F1CDA20ACB71BFF7968ABDF9CB05B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_75, (&V_15), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_047c;
			}

IL_0311_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_76 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_16;
				V_15 = L_76;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_77 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_16);
				il2cpp_codegen_initobj(L_77, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_78 = (-1);
				V_0 = L_78;
				__this->___U3CU3E1__state_0 = L_78;
			}

IL_032e_2:
			{
				bool L_79;
				L_79 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_15), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__10_14 = L_79;
				bool L_80 = (bool)__this->___U3CU3Es__10_14;
				V_14 = L_80;
				bool L_81 = V_14;
				if (L_81)
				{
					goto IL_01c7_2;
				}
			}
			{
				goto IL_0362_1;
			}

IL_034d_2:
			{
				__this->___U3CU3Es__4_8 = 1;
				goto IL_0362_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0356_1;
			}
			throw e;
		}

CATCH_0356_1:
		{
			V_16 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_82 = V_16;
			__this->___U3CU3Es__3_7 = L_82;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_82);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0362_1;
		}

IL_0362_1:
		{
			RuntimeObject* L_83 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_17 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_83) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_84 = V_17;
			if (!L_84)
			{
				goto IL_03e1_1;
			}
		}
		{
			RuntimeObject* L_85 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_85);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_86;
			L_86 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_85);
			V_19 = L_86;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_87;
			L_87 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_19), NULL);
			V_18 = L_87;
			bool L_88;
			L_88 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_18), NULL);
			if (L_88)
			{
				goto IL_03d8_1;
			}
		}
		{
			int32_t L_89 = 4;
			V_0 = L_89;
			__this->___U3CU3E1__state_0 = L_89;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_90 = V_18;
			__this->___U3CU3Eu__3_17 = L_90;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_17))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_91 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitWithCancellationAsyncU3Ed__31_1_t1EE73BF3740F1CDA20ACB71BFF7968ABDF9CB05B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_91, (&V_18), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_047c;
		}

IL_03bb_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_92 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_17;
			V_18 = L_92;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_93 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_17);
			il2cpp_codegen_initobj(L_93, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_94 = (-1);
			V_0 = L_94;
			__this->___U3CU3E1__state_0 = L_94;
		}

IL_03d8_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_18), NULL);
		}

IL_03e1_1:
		{
			RuntimeObject* L_95 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_16 = L_95;
			RuntimeObject* L_96 = V_16;
			if (!L_96)
			{
				goto IL_040b_1;
			}
		}
		{
			RuntimeObject* L_97 = V_16;
			V_20 = ((Exception_t*)IsInstClass((RuntimeObject*)L_97, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_98 = V_20;
			if (L_98)
			{
				goto IL_03fe_1;
			}
		}
		{
			RuntimeObject* L_99 = V_16;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_99, method);
		}

IL_03fe_1:
		{
			Exception_t* L_100 = V_20;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_101;
			L_101 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_100, NULL);
			NullCheck(L_101);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_101, NULL);
		}

IL_040b_1:
		{
			int32_t L_102 = (int32_t)__this->___U3CU3Es__4_8;
			V_21 = L_102;
			int32_t L_103 = V_21;
			if ((((int32_t)L_103) == ((int32_t)1)))
			{
				goto IL_041a_1;
			}
		}
		{
			goto IL_0423_1;
		}

IL_041a_1:
		{
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_104 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17)__this->___U3CU3Es__5_9;
			V_1 = L_104;
			goto IL_0460;
		}

IL_0423_1:
		{
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_105 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___U3CU3Es__5_9);
			il2cpp_codegen_initobj(L_105, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
			Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_106 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17)__this->___U3CvalueU3E5__1_5;
			V_1 = L_106;
			goto IL_0460;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_043f;
		}
		throw e;
	}

CATCH_043f:
	{
		V_20 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_107 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_108 = V_20;
		AsyncUniTaskMethodBuilder_1_SetException_m668B0B683F2B4B7005D076DE9400F32B1702673B_inline(L_107, L_108, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m668B0B683F2B4B7005D076DE9400F32B1702673B_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_047c;
	}

IL_0460:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED* L_109 = (AsyncUniTaskMethodBuilder_1_tBBF28B7A7734D68AC88DA97865083238B6B3ADED*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_110 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_inline(L_109, L_110, AsyncUniTaskMethodBuilder_1_SetResult_m79D800118F9BCD740C939B134E630A8AB93AA606_RuntimeMethod_var);
	}

IL_047c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__31_1_SetStateMachine_mD5EDA055A8159EE42672FE03BF0B7BD662B91F84_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__31_1_t1EE73BF3740F1CDA20ACB71BFF7968ABDF9CB05B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__35_1__ctor_m0BE4A470A014DCA5E8C9287CC990AC064CC9D11B_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__35_1_tDA26EBC4AC4C6FCEC8955255F2D13374C1B67B9F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__35_1_MoveNext_mC5B2F5E7EC60BA8E9AED03AC23D100D4561F2AE6_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__35_1_tDA26EBC4AC4C6FCEC8955255F2D13374C1B67B9F* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t49127EBD4DEB782B6A4C477C2382B9B7F172A854 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t49127EBD4DEB782B6A4C477C2382B9B7F172A854);
	const Il2CppFullySharedGenericAny L_43 = L_10;
	int32_t V_0 = 0;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitWithCancellationAsyncU3Ed__35_1_tDA26EBC4AC4C6FCEC8955255F2D13374C1B67B9F* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_15;
	memset((&V_15), 0, sizeof(V_15));
	RuntimeObject* V_16 = NULL;
	bool V_17 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_18;
	memset((&V_18), 0, sizeof(V_18));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_19;
	memset((&V_19), 0, sizeof(V_19));
	Exception_t* V_20 = NULL;
	int32_t V_21 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
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
			goto IL_03bb_1;
		}

IL_001a_1:
		{
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_3 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CvalueU3E5__1_5);
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
				switch (L_7)
				{
					case 0:
					{
						goto IL_0065_2;
					}
					case 1:
					{
						goto IL_0067_2;
					}
					case 2:
					{
						goto IL_006c_2;
					}
					case 3:
					{
						goto IL_0071_2;
					}
				}
			}
			{
				goto IL_0076_2;
			}

IL_0065_2:
			{
				goto IL_00d3_2;
			}

IL_0067_2:
			{
				goto IL_0177_2;
			}

IL_006c_2:
			{
				goto IL_0220_2;
			}

IL_0071_2:
			{
				goto IL_0311_2;
			}

IL_0076_2:
			{
				goto IL_012f_2;
			}

IL_007c_2:
			{
				Func_3_t5604379C942DED2B342DEED029BC1AB35C5A06A1* L_8 = (Func_3_t5604379C942DED2B342DEED029BC1AB35C5A06A1*)__this->___selector_3;
				RuntimeObject* L_9 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_8);
				UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46 L_12;
				L_12 = InvokerFuncInvoker2< UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10), L_11);
				V_3 = L_12;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_13;
				L_13 = UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_inline((&V_3), UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_inline((&V_2), Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00ef_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state_0 = L_15;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_16 = V_2;
				__this->___U3CU3Eu__1_15 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_15))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_17 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*, U3CMinAwaitWithCancellationAsyncU3Ed__35_1_tDA26EBC4AC4C6FCEC8955255F2D13374C1B67B9F**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_047c;
			}

IL_00d3_2:
			{
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_18 = (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91)__this->___U3CU3Eu__1_15;
				V_2 = L_18;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* L_19 = (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*)(&__this->___U3CU3Eu__1_15);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state_0 = L_20;
			}

IL_00ef_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_21;
				L_21 = Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_inline((&V_2), Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_RuntimeMethod_var);
				__this->___U3CU3Es__6_10 = L_21;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_22 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75)__this->___U3CU3Es__6_10;
				__this->___U3CvalueU3E5__1_5 = L_22;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_23 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CU3Es__6_10);
				il2cpp_codegen_initobj(L_23, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_24 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CvalueU3E5__1_5);
				bool L_25;
				L_25 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline(L_24, Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				V_5 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
				bool L_26 = V_5;
				if (!L_26)
				{
					goto IL_012a_2;
				}
			}
			{
				goto IL_012f_2;
			}

IL_012a_2:
			{
				goto IL_01c1_2;
			}

IL_012f_2:
			{
				RuntimeObject* L_27 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
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
					goto IL_0194_2;
				}
			}
			{
				int32_t L_31 = 1;
				V_0 = L_31;
				__this->___U3CU3E1__state_0 = L_31;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_32 = V_7;
				__this->___U3CU3Eu__2_16 = L_32;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_16))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_33 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__35_1_tDA26EBC4AC4C6FCEC8955255F2D13374C1B67B9F**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_33, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_047c;
			}

IL_0177_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_16;
				V_7 = L_34;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_35 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_16);
				il2cpp_codegen_initobj(L_35, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_36 = (-1);
				V_0 = L_36;
				__this->___U3CU3E1__state_0 = L_36;
			}

IL_0194_2:
			{
				bool L_37;
				L_37 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_37;
				bool L_38 = (bool)__this->___U3CU3Es__7_11;
				V_6 = L_38;
				bool L_39 = V_6;
				if (L_39)
				{
					goto IL_007c_2;
				}
			}
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_40 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CU3Es__5_9);
				il2cpp_codegen_initobj(L_40, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
				goto IL_034d_2;
			}

IL_01c1_2:
			{
				goto IL_02c9_2;
			}

IL_01c7_2:
			{
				Func_3_t5604379C942DED2B342DEED029BC1AB35C5A06A1* L_41 = (Func_3_t5604379C942DED2B342DEED029BC1AB35C5A06A1*)__this->___selector_3;
				RuntimeObject* L_42 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_42);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_42, (Il2CppFullySharedGenericAny*)L_43);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_44 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_41);
				UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46 L_45;
				L_45 = InvokerFuncInvoker2< UniTask_1_tECEA48D82E70A2777C4E1A0823B9284DD19C7D46, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_43: *(void**)L_43), L_44);
				V_3 = L_45;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_46;
				L_46 = UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_inline((&V_3), UniTask_1_GetAwaiter_mB0D6212F31D68D17321E6A334F6876104052F7AC_RuntimeMethod_var);
				V_9 = L_46;
				bool L_47;
				L_47 = Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_inline((&V_9), Awaiter_get_IsCompleted_mCF66B373DA39054D2F28D50B574A41083691ADA4_RuntimeMethod_var);
				if (L_47)
				{
					goto IL_023d_2;
				}
			}
			{
				int32_t L_48 = 2;
				V_0 = L_48;
				__this->___U3CU3E1__state_0 = L_48;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_49 = V_9;
				__this->___U3CU3Eu__1_15 = L_49;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_15))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_50 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*, U3CMinAwaitWithCancellationAsyncU3Ed__35_1_tDA26EBC4AC4C6FCEC8955255F2D13374C1B67B9F**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_50, (&V_9), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_047c;
			}

IL_0220_2:
			{
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91 L_51 = (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91)__this->___U3CU3Eu__1_15;
				V_9 = L_51;
				Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91* L_52 = (Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91*)(&__this->___U3CU3Eu__1_15);
				il2cpp_codegen_initobj(L_52, sizeof(Awaiter_t11079E0CB6EFCD42919B99E16C18C20885E88F91));
				int32_t L_53 = (-1);
				V_0 = L_53;
				__this->___U3CU3E1__state_0 = L_53;
			}

IL_023d_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_54;
				L_54 = Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_inline((&V_9), Awaiter_GetResult_m91B7270347C6E56D6754263AE91A9219CF1702EC_RuntimeMethod_var);
				__this->___U3CU3Es__9_13 = L_54;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_55 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75)__this->___U3CU3Es__9_13;
				__this->___U3CxU3E5__8_12 = L_55;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_56 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CU3Es__9_13);
				il2cpp_codegen_initobj(L_56, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_57 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CxU3E5__8_12);
				bool L_58;
				L_58 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline(L_57, Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				V_10 = (bool)((((int32_t)L_58) == ((int32_t)0))? 1 : 0);
				bool L_59 = V_10;
				if (!L_59)
				{
					goto IL_0278_2;
				}
			}
			{
				goto IL_02c9_2;
			}

IL_0278_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_60 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75)__this->___U3CvalueU3E5__1_5;
				V_12 = L_60;
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_61 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75)__this->___U3CxU3E5__8_12;
				V_13 = L_61;
				float L_62;
				L_62 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline((&V_12), Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
				float L_63;
				L_63 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline((&V_13), Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
				bool L_64;
				L_64 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&V_12), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				bool L_65;
				L_65 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&V_13), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
				V_11 = (bool)((int32_t)(((((float)L_62) > ((float)L_63))? 1 : 0)&((int32_t)((int32_t)L_64&(int32_t)L_65))));
				bool L_66 = V_11;
				if (!L_66)
				{
					goto IL_02bc_2;
				}
			}
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_67 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75)__this->___U3CxU3E5__8_12;
				__this->___U3CvalueU3E5__1_5 = L_67;
			}

IL_02bc_2:
			{
				Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_68 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CxU3E5__8_12);
				il2cpp_codegen_initobj(L_68, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
			}

IL_02c9_2:
			{
				RuntimeObject* L_69 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_69);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_70;
				L_70 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_69);
				V_8 = L_70;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_71;
				L_71 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_15 = L_71;
				bool L_72;
				L_72 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_15), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_72)
				{
					goto IL_032e_2;
				}
			}
			{
				int32_t L_73 = 3;
				V_0 = L_73;
				__this->___U3CU3E1__state_0 = L_73;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_74 = V_15;
				__this->___U3CU3Eu__2_16 = L_74;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_16))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_75 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__35_1_tDA26EBC4AC4C6FCEC8955255F2D13374C1B67B9F**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_75, (&V_15), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_047c;
			}

IL_0311_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_76 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_16;
				V_15 = L_76;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_77 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_16);
				il2cpp_codegen_initobj(L_77, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_78 = (-1);
				V_0 = L_78;
				__this->___U3CU3E1__state_0 = L_78;
			}

IL_032e_2:
			{
				bool L_79;
				L_79 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_15), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__10_14 = L_79;
				bool L_80 = (bool)__this->___U3CU3Es__10_14;
				V_14 = L_80;
				bool L_81 = V_14;
				if (L_81)
				{
					goto IL_01c7_2;
				}
			}
			{
				goto IL_0362_1;
			}

IL_034d_2:
			{
				__this->___U3CU3Es__4_8 = 1;
				goto IL_0362_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0356_1;
			}
			throw e;
		}

CATCH_0356_1:
		{
			V_16 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_82 = V_16;
			__this->___U3CU3Es__3_7 = L_82;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_82);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0362_1;
		}

IL_0362_1:
		{
			RuntimeObject* L_83 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_17 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_83) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_84 = V_17;
			if (!L_84)
			{
				goto IL_03e1_1;
			}
		}
		{
			RuntimeObject* L_85 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_85);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_86;
			L_86 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_85);
			V_19 = L_86;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_87;
			L_87 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_19), NULL);
			V_18 = L_87;
			bool L_88;
			L_88 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_18), NULL);
			if (L_88)
			{
				goto IL_03d8_1;
			}
		}
		{
			int32_t L_89 = 4;
			V_0 = L_89;
			__this->___U3CU3E1__state_0 = L_89;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_90 = V_18;
			__this->___U3CU3Eu__3_17 = L_90;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_17))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_91 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitWithCancellationAsyncU3Ed__35_1_tDA26EBC4AC4C6FCEC8955255F2D13374C1B67B9F**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_91, (&V_18), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_047c;
		}

IL_03bb_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_92 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_17;
			V_18 = L_92;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_93 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_17);
			il2cpp_codegen_initobj(L_93, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_94 = (-1);
			V_0 = L_94;
			__this->___U3CU3E1__state_0 = L_94;
		}

IL_03d8_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_18), NULL);
		}

IL_03e1_1:
		{
			RuntimeObject* L_95 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_16 = L_95;
			RuntimeObject* L_96 = V_16;
			if (!L_96)
			{
				goto IL_040b_1;
			}
		}
		{
			RuntimeObject* L_97 = V_16;
			V_20 = ((Exception_t*)IsInstClass((RuntimeObject*)L_97, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_98 = V_20;
			if (L_98)
			{
				goto IL_03fe_1;
			}
		}
		{
			RuntimeObject* L_99 = V_16;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_99, method);
		}

IL_03fe_1:
		{
			Exception_t* L_100 = V_20;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_101;
			L_101 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_100, NULL);
			NullCheck(L_101);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_101, NULL);
		}

IL_040b_1:
		{
			int32_t L_102 = (int32_t)__this->___U3CU3Es__4_8;
			V_21 = L_102;
			int32_t L_103 = V_21;
			if ((((int32_t)L_103) == ((int32_t)1)))
			{
				goto IL_041a_1;
			}
		}
		{
			goto IL_0423_1;
		}

IL_041a_1:
		{
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_104 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75)__this->___U3CU3Es__5_9;
			V_1 = L_104;
			goto IL_0460;
		}

IL_0423_1:
		{
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_105 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___U3CU3Es__5_9);
			il2cpp_codegen_initobj(L_105, sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
			Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_106 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75)__this->___U3CvalueU3E5__1_5;
			V_1 = L_106;
			goto IL_0460;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_043f;
		}
		throw e;
	}

CATCH_043f:
	{
		V_20 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_107 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_108 = V_20;
		AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_inline(L_107, L_108, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m6EAFFD27E4AD087C1ACAF6ED06D1DA007DE16485_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_047c;
	}

IL_0460:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88* L_109 = (AsyncUniTaskMethodBuilder_1_tD94C21A01CFB7F3661F2A59C6E1AB81222321C88*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_110 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_inline(L_109, L_110, AsyncUniTaskMethodBuilder_1_SetResult_m50EB385980B2A95EEF73CA877BCC094EE12C9763_RuntimeMethod_var);
	}

IL_047c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__35_1_SetStateMachine_mDB757158B0D10C9CC9E09F482A55B377A1879F3A_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__35_1_tDA26EBC4AC4C6FCEC8955255F2D13374C1B67B9F* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__39_1__ctor_m1982E7260318500BC3CD8D3214B4A679EA0CC3BB_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__39_1_tCC06919BA4B305801CB9B222385A3E035B22D81C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__39_1_MoveNext_mD19F86B9A04953D70B7D5D501BF66011EB16BF00_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__39_1_tCC06919BA4B305801CB9B222385A3E035B22D81C* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tF0EE76F69176BD0EF1614AC3595BD917CD4D4D6F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tF0EE76F69176BD0EF1614AC3595BD917CD4D4D6F);
	const Il2CppFullySharedGenericAny L_43 = L_10;
	int32_t V_0 = 0;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitWithCancellationAsyncU3Ed__39_1_tCC06919BA4B305801CB9B222385A3E035B22D81C* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_15;
	memset((&V_15), 0, sizeof(V_15));
	RuntimeObject* V_16 = NULL;
	bool V_17 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_18;
	memset((&V_18), 0, sizeof(V_18));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_19;
	memset((&V_19), 0, sizeof(V_19));
	Exception_t* V_20 = NULL;
	int32_t V_21 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
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
			goto IL_03bb_1;
		}

IL_001a_1:
		{
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_3 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CvalueU3E5__1_5);
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
				switch (L_7)
				{
					case 0:
					{
						goto IL_0065_2;
					}
					case 1:
					{
						goto IL_0067_2;
					}
					case 2:
					{
						goto IL_006c_2;
					}
					case 3:
					{
						goto IL_0071_2;
					}
				}
			}
			{
				goto IL_0076_2;
			}

IL_0065_2:
			{
				goto IL_00d3_2;
			}

IL_0067_2:
			{
				goto IL_0177_2;
			}

IL_006c_2:
			{
				goto IL_0220_2;
			}

IL_0071_2:
			{
				goto IL_0311_2;
			}

IL_0076_2:
			{
				goto IL_012f_2;
			}

IL_007c_2:
			{
				Func_3_tD24255148664E4908FBCB566B787F36A4988A2BB* L_8 = (Func_3_tD24255148664E4908FBCB566B787F36A4988A2BB*)__this->___selector_3;
				RuntimeObject* L_9 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_8);
				UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E L_12;
				L_12 = InvokerFuncInvoker2< UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10), L_11);
				V_3 = L_12;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_13;
				L_13 = UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_inline((&V_3), UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_inline((&V_2), Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00ef_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state_0 = L_15;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_16 = V_2;
				__this->___U3CU3Eu__1_15 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_15))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_17 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0*, U3CMinAwaitWithCancellationAsyncU3Ed__39_1_tCC06919BA4B305801CB9B222385A3E035B22D81C**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_047c;
			}

IL_00d3_2:
			{
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_18 = (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0)__this->___U3CU3Eu__1_15;
				V_2 = L_18;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* L_19 = (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0*)(&__this->___U3CU3Eu__1_15);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state_0 = L_20;
			}

IL_00ef_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_21;
				L_21 = Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_inline((&V_2), Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_RuntimeMethod_var);
				__this->___U3CU3Es__6_10 = L_21;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_22 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165)__this->___U3CU3Es__6_10;
				__this->___U3CvalueU3E5__1_5 = L_22;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_23 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CU3Es__6_10);
				il2cpp_codegen_initobj(L_23, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_24 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CvalueU3E5__1_5);
				bool L_25;
				L_25 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline(L_24, Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				V_5 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
				bool L_26 = V_5;
				if (!L_26)
				{
					goto IL_012a_2;
				}
			}
			{
				goto IL_012f_2;
			}

IL_012a_2:
			{
				goto IL_01c1_2;
			}

IL_012f_2:
			{
				RuntimeObject* L_27 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
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
					goto IL_0194_2;
				}
			}
			{
				int32_t L_31 = 1;
				V_0 = L_31;
				__this->___U3CU3E1__state_0 = L_31;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_32 = V_7;
				__this->___U3CU3Eu__2_16 = L_32;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_16))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_33 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__39_1_tCC06919BA4B305801CB9B222385A3E035B22D81C**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_33, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_047c;
			}

IL_0177_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_16;
				V_7 = L_34;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_35 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_16);
				il2cpp_codegen_initobj(L_35, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_36 = (-1);
				V_0 = L_36;
				__this->___U3CU3E1__state_0 = L_36;
			}

IL_0194_2:
			{
				bool L_37;
				L_37 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_37;
				bool L_38 = (bool)__this->___U3CU3Es__7_11;
				V_6 = L_38;
				bool L_39 = V_6;
				if (L_39)
				{
					goto IL_007c_2;
				}
			}
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_40 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CU3Es__5_9);
				il2cpp_codegen_initobj(L_40, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
				goto IL_034d_2;
			}

IL_01c1_2:
			{
				goto IL_02c9_2;
			}

IL_01c7_2:
			{
				Func_3_tD24255148664E4908FBCB566B787F36A4988A2BB* L_41 = (Func_3_tD24255148664E4908FBCB566B787F36A4988A2BB*)__this->___selector_3;
				RuntimeObject* L_42 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_42);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_42, (Il2CppFullySharedGenericAny*)L_43);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_44 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_41);
				UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E L_45;
				L_45 = InvokerFuncInvoker2< UniTask_1_tBB54829E69BB6421F0E76BE1E33979C306EC904E, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_43: *(void**)L_43), L_44);
				V_3 = L_45;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_46;
				L_46 = UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_inline((&V_3), UniTask_1_GetAwaiter_m0FEBC0A499C9B8571C4F471A82B599FB0A24BBD0_RuntimeMethod_var);
				V_9 = L_46;
				bool L_47;
				L_47 = Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_inline((&V_9), Awaiter_get_IsCompleted_mB92F301A2A22A09669C94D070EF067885E4C1DB7_RuntimeMethod_var);
				if (L_47)
				{
					goto IL_023d_2;
				}
			}
			{
				int32_t L_48 = 2;
				V_0 = L_48;
				__this->___U3CU3E1__state_0 = L_48;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_49 = V_9;
				__this->___U3CU3Eu__1_15 = L_49;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_15))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_50 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0*, U3CMinAwaitWithCancellationAsyncU3Ed__39_1_tCC06919BA4B305801CB9B222385A3E035B22D81C**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_50, (&V_9), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_047c;
			}

IL_0220_2:
			{
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0 L_51 = (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0)__this->___U3CU3Eu__1_15;
				V_9 = L_51;
				Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0* L_52 = (Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0*)(&__this->___U3CU3Eu__1_15);
				il2cpp_codegen_initobj(L_52, sizeof(Awaiter_t6C9FAD6C622C31D2184EFB267BE885A1212CF9A0));
				int32_t L_53 = (-1);
				V_0 = L_53;
				__this->___U3CU3E1__state_0 = L_53;
			}

IL_023d_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_54;
				L_54 = Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_inline((&V_9), Awaiter_GetResult_m28436F0F6ABD35ECC2B59F0D33D56FD1FE0AD9A0_RuntimeMethod_var);
				__this->___U3CU3Es__9_13 = L_54;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_55 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165)__this->___U3CU3Es__9_13;
				__this->___U3CxU3E5__8_12 = L_55;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_56 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CU3Es__9_13);
				il2cpp_codegen_initobj(L_56, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_57 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CxU3E5__8_12);
				bool L_58;
				L_58 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline(L_57, Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				V_10 = (bool)((((int32_t)L_58) == ((int32_t)0))? 1 : 0);
				bool L_59 = V_10;
				if (!L_59)
				{
					goto IL_0278_2;
				}
			}
			{
				goto IL_02c9_2;
			}

IL_0278_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_60 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165)__this->___U3CvalueU3E5__1_5;
				V_12 = L_60;
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_61 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165)__this->___U3CxU3E5__8_12;
				V_13 = L_61;
				double L_62;
				L_62 = Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline((&V_12), Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
				double L_63;
				L_63 = Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_inline((&V_13), Nullable_1_GetValueOrDefault_m71CA753202BD77725CD20AE98F8FC452C306AD2A_RuntimeMethod_var);
				bool L_64;
				L_64 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&V_12), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				bool L_65;
				L_65 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&V_13), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
				V_11 = (bool)((int32_t)(((((double)L_62) > ((double)L_63))? 1 : 0)&((int32_t)((int32_t)L_64&(int32_t)L_65))));
				bool L_66 = V_11;
				if (!L_66)
				{
					goto IL_02bc_2;
				}
			}
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_67 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165)__this->___U3CxU3E5__8_12;
				__this->___U3CvalueU3E5__1_5 = L_67;
			}

IL_02bc_2:
			{
				Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_68 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CxU3E5__8_12);
				il2cpp_codegen_initobj(L_68, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
			}

IL_02c9_2:
			{
				RuntimeObject* L_69 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_69);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_70;
				L_70 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_69);
				V_8 = L_70;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_71;
				L_71 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_15 = L_71;
				bool L_72;
				L_72 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_15), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_72)
				{
					goto IL_032e_2;
				}
			}
			{
				int32_t L_73 = 3;
				V_0 = L_73;
				__this->___U3CU3E1__state_0 = L_73;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_74 = V_15;
				__this->___U3CU3Eu__2_16 = L_74;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_16))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_75 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__39_1_tCC06919BA4B305801CB9B222385A3E035B22D81C**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_75, (&V_15), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_047c;
			}

IL_0311_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_76 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_16;
				V_15 = L_76;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_77 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_16);
				il2cpp_codegen_initobj(L_77, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_78 = (-1);
				V_0 = L_78;
				__this->___U3CU3E1__state_0 = L_78;
			}

IL_032e_2:
			{
				bool L_79;
				L_79 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_15), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__10_14 = L_79;
				bool L_80 = (bool)__this->___U3CU3Es__10_14;
				V_14 = L_80;
				bool L_81 = V_14;
				if (L_81)
				{
					goto IL_01c7_2;
				}
			}
			{
				goto IL_0362_1;
			}

IL_034d_2:
			{
				__this->___U3CU3Es__4_8 = 1;
				goto IL_0362_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0356_1;
			}
			throw e;
		}

CATCH_0356_1:
		{
			V_16 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_82 = V_16;
			__this->___U3CU3Es__3_7 = L_82;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_82);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0362_1;
		}

IL_0362_1:
		{
			RuntimeObject* L_83 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_17 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_83) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_84 = V_17;
			if (!L_84)
			{
				goto IL_03e1_1;
			}
		}
		{
			RuntimeObject* L_85 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_85);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_86;
			L_86 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_85);
			V_19 = L_86;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_87;
			L_87 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_19), NULL);
			V_18 = L_87;
			bool L_88;
			L_88 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_18), NULL);
			if (L_88)
			{
				goto IL_03d8_1;
			}
		}
		{
			int32_t L_89 = 4;
			V_0 = L_89;
			__this->___U3CU3E1__state_0 = L_89;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_90 = V_18;
			__this->___U3CU3Eu__3_17 = L_90;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_17))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_91 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitWithCancellationAsyncU3Ed__39_1_tCC06919BA4B305801CB9B222385A3E035B22D81C**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_91, (&V_18), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_047c;
		}

IL_03bb_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_92 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_17;
			V_18 = L_92;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_93 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_17);
			il2cpp_codegen_initobj(L_93, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_94 = (-1);
			V_0 = L_94;
			__this->___U3CU3E1__state_0 = L_94;
		}

IL_03d8_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_18), NULL);
		}

IL_03e1_1:
		{
			RuntimeObject* L_95 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_16 = L_95;
			RuntimeObject* L_96 = V_16;
			if (!L_96)
			{
				goto IL_040b_1;
			}
		}
		{
			RuntimeObject* L_97 = V_16;
			V_20 = ((Exception_t*)IsInstClass((RuntimeObject*)L_97, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_98 = V_20;
			if (L_98)
			{
				goto IL_03fe_1;
			}
		}
		{
			RuntimeObject* L_99 = V_16;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_99, method);
		}

IL_03fe_1:
		{
			Exception_t* L_100 = V_20;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_101;
			L_101 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_100, NULL);
			NullCheck(L_101);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_101, NULL);
		}

IL_040b_1:
		{
			int32_t L_102 = (int32_t)__this->___U3CU3Es__4_8;
			V_21 = L_102;
			int32_t L_103 = V_21;
			if ((((int32_t)L_103) == ((int32_t)1)))
			{
				goto IL_041a_1;
			}
		}
		{
			goto IL_0423_1;
		}

IL_041a_1:
		{
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_104 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165)__this->___U3CU3Es__5_9;
			V_1 = L_104;
			goto IL_0460;
		}

IL_0423_1:
		{
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* L_105 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*)(&__this->___U3CU3Es__5_9);
			il2cpp_codegen_initobj(L_105, sizeof(Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165));
			Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_106 = (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165)__this->___U3CvalueU3E5__1_5;
			V_1 = L_106;
			goto IL_0460;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_043f;
		}
		throw e;
	}

CATCH_043f:
	{
		V_20 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_107 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_108 = V_20;
		AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_inline(L_107, L_108, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mF78E71A2131D3BC5A190D15FC86B19C8EBBB15AB_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_047c;
	}

IL_0460:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438* L_109 = (AsyncUniTaskMethodBuilder_1_tF0522C53E7D702D47A95DC77DCE97223AECFA438*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_110 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_inline(L_109, L_110, AsyncUniTaskMethodBuilder_1_SetResult_m953C4588BAF4319183C4C40BA5440021912FB431_RuntimeMethod_var);
	}

IL_047c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__39_1_SetStateMachine_mACBC1321E2F157A1EF2C1B4470C0875CCF3F2E6B_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__39_1_tCC06919BA4B305801CB9B222385A3E035B22D81C* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__3_2__ctor_mC147F24AF2D81E83F322218C47C84F6A01944163_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__3_2_t5C25FEB674967FD9889E050F607D9DBBC7246C37* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__3_2_MoveNext_m75A619333F8C13EE8FA464C8B93CBF3668142D50_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__3_2_t5C25FEB674967FD9889E050F607D9DBBC7246C37* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1));
	const uint32_t SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const uint32_t SizeOf_UniTask_1_tDEB736AD713D0478C6934989DAB2BEE934E1C784 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const uint32_t SizeOf_TSource_t0B368FBFA2E02C9B28A3A57F83AAC6BBBCB106D2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t0B368FBFA2E02C9B28A3A57F83AAC6BBBCB106D2);
	const Il2CppFullySharedGenericAny L_35 = L_10;
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
	const Il2CppFullySharedGenericAny L_32 = L_19;
	const Il2CppFullySharedGenericAny L_44 = L_19;
	const Il2CppFullySharedGenericAny L_51 = L_19;
	const Il2CppFullySharedGenericAny L_83 = L_19;
	const Il2CppFullySharedGenericAny L_84 = L_19;
	const Il2CppFullySharedGenericAny L_86 = L_19;
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
	const Il2CppFullySharedGenericAny L_45 = L_20;
	const Il2CppFullySharedGenericAny L_47 = alloca(SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
	const Il2CppFullySharedGenericAny L_48 = alloca(SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_13 = alloca(SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_16 = L_13;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_17 = L_13;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_38 = L_13;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_41 = L_13;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_42 = L_13;
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_12 = alloca(SizeOf_UniTask_1_tDEB736AD713D0478C6934989DAB2BEE934E1C784);
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_37 = L_12;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
	memset(V_1, 0, SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_2 = alloca(SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
	memset(V_2, 0, SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
	UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 V_3 = alloca(SizeOf_UniTask_1_tDEB736AD713D0478C6934989DAB2BEE934E1C784);
	memset(V_3, 0, SizeOf_UniTask_1_tDEB736AD713D0478C6934989DAB2BEE934E1C784);
	U3CMinAwaitWithCancellationAsyncU3Ed__3_2_t5C25FEB674967FD9889E050F607D9DBBC7246C37* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_8 = alloca(SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
	memset(V_8, 0, SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
	bool V_9 = false;
	bool V_10 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_11;
	memset((&V_11), 0, sizeof(V_11));
	RuntimeObject* V_12 = NULL;
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Exception_t* V_16 = NULL;
	int32_t V_17 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
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
			goto IL_0384_1;
		}

IL_001a_1:
		{
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
			Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_3;
			L_3 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(il2cpp_rgctx_method(method->klass->rgctx_data, 2));
			il2cpp_codegen_write_instance_field_data<Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_3);
			RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_4, L_5);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_6);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), NULL);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), 0);
		}

IL_0057_1:
		{
		}
		try
		{
			{
				int32_t L_7 = V_0;
				switch (L_7)
				{
					case 0:
					{
						goto IL_0070_2;
					}
					case 1:
					{
						goto IL_0072_2;
					}
					case 2:
					{
						goto IL_0077_2;
					}
					case 3:
					{
						goto IL_007c_2;
					}
				}
			}
			{
				goto IL_0081_2;
			}

IL_0070_2:
			{
				goto IL_00de_2;
			}

IL_0072_2:
			{
				goto IL_016c_2;
			}

IL_0077_2:
			{
				goto IL_0215_2;
			}

IL_007c_2:
			{
				goto IL_02da_2;
			}

IL_0081_2:
			{
				goto IL_0124_2;
			}

IL_0087_2:
			{
				Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E* L_8 = *(Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				RuntimeObject* L_9 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_9, (Il2CppFullySharedGenericAny*)L_10);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
				NullCheck(L_8);
				InvokerActionInvoker3< Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10)) ? L_10: *(void**)L_10), L_11, (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_12);
				il2cpp_codegen_memcpy(V_3, L_12, SizeOf_UniTask_1_tDEB736AD713D0478C6934989DAB2BEE934E1C784);
				InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)V_3, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_13);
				il2cpp_codegen_memcpy(V_2, L_13, SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
				bool L_14;
				L_14 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				if (L_14)
				{
					goto IL_00fa_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_15);
				il2cpp_codegen_memcpy(L_16, V_2, SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16), L_16, SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
				V_4 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CMinAwaitWithCancellationAsyncU3Ed__3_2_t5C25FEB674967FD9889E050F607D9DBBC7246C37**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 17));
				goto IL_046b;
			}

IL_00de_2:
			{
				il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16)), SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
				il2cpp_codegen_memcpy(V_2, L_17, SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
				il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16)))), SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
				int32_t L_18 = (-1);
				V_0 = L_18;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_18);
			}

IL_00fa_2:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_2, (Il2CppFullySharedGenericAny*)L_19);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_19, SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
				il2cpp_codegen_memcpy(L_20, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)), SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_20, SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)))), SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
				goto IL_01b6_2;
			}

IL_0124_2:
			{
				RuntimeObject* L_21 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck(L_21);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_22;
				L_22 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_21);
				V_7 = L_22;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_23;
				L_23 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_6 = L_23;
				bool L_24;
				L_24 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_6), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_0189_2;
				}
			}
			{
				int32_t L_25 = 1;
				V_0 = L_25;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_25);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_26 = V_6;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17), L_26);
				V_4 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__3_2_t5C25FEB674967FD9889E050F607D9DBBC7246C37**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				goto IL_046b;
			}

IL_016c_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_27 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17));
				V_6 = L_27;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_28 = (-1);
				V_0 = L_28;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_28);
			}

IL_0189_2:
			{
				bool L_29;
				L_29 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_29);
				bool L_30 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12));
				V_5 = L_30;
				bool L_31 = V_5;
				if (L_31)
				{
					goto IL_0087_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_32, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)), SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_32, SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
				goto IL_0316_2;
			}

IL_01b6_2:
			{
				goto IL_0292_2;
			}

IL_01bc_2:
			{
				Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E* L_33 = *(Func_3_t4E62819F20A9E6512B2F247923E7008BCAFC9B5E**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				RuntimeObject* L_34 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck(L_34);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_34, (Il2CppFullySharedGenericAny*)L_35);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_36 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
				NullCheck(L_33);
				InvokerActionInvoker3< Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_33, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10)) ? L_35: *(void**)L_35), L_36, (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_37);
				il2cpp_codegen_memcpy(V_3, L_37, SizeOf_UniTask_1_tDEB736AD713D0478C6934989DAB2BEE934E1C784);
				InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)V_3, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_38);
				il2cpp_codegen_memcpy(V_8, L_38, SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
				bool L_39;
				L_39 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_8, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				if (L_39)
				{
					goto IL_0232_2;
				}
			}
			{
				int32_t L_40 = 2;
				V_0 = L_40;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_40);
				il2cpp_codegen_memcpy(L_41, V_8, SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16), L_41, SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
				V_4 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CMinAwaitWithCancellationAsyncU3Ed__3_2_t5C25FEB674967FD9889E050F607D9DBBC7246C37**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_8, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 17));
				goto IL_046b;
			}

IL_0215_2:
			{
				il2cpp_codegen_memcpy(L_42, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16)), SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
				il2cpp_codegen_memcpy(V_8, L_42, SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
				il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16)))), SizeOf_Awaiter_t75F23FB82976A80FB0120A07A522EFD858868D90);
				int32_t L_43 = (-1);
				V_0 = L_43;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_43);
			}

IL_0232_2:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_8, (Il2CppFullySharedGenericAny*)L_44);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), L_44, SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
				il2cpp_codegen_memcpy(L_45, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)), SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_45, SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)))), SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
				Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_46 = *(Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				il2cpp_codegen_memcpy(L_47, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)), SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
				il2cpp_codegen_memcpy(L_48, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)), SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
				NullCheck(L_46);
				int32_t L_49;
				L_49 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_46, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_47: *(void**)L_47), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_48: *(void**)L_48));
				V_9 = (bool)((((int32_t)L_49) > ((int32_t)0))? 1 : 0);
				bool L_50 = V_9;
				if (!L_50)
				{
					goto IL_0285_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_51, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)), SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_51, SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
			}

IL_0285_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))), SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
			}

IL_0292_2:
			{
				RuntimeObject* L_52 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck(L_52);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_53;
				L_53 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_52);
				V_7 = L_53;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_54;
				L_54 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_11 = L_54;
				bool L_55;
				L_55 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_11), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_55)
				{
					goto IL_02f7_2;
				}
			}
			{
				int32_t L_56 = 3;
				V_0 = L_56;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_56);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_57 = V_11;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17), L_57);
				V_4 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__3_2_t5C25FEB674967FD9889E050F607D9DBBC7246C37**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
				goto IL_046b;
			}

IL_02da_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_58 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17));
				V_11 = L_58;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),17)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_59 = (-1);
				V_0 = L_59;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_59);
			}

IL_02f7_2:
			{
				bool L_60;
				L_60 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_11), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15), L_60);
				bool L_61 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15));
				V_10 = L_61;
				bool L_62 = V_10;
				if (L_62)
				{
					goto IL_01bc_2;
				}
			}
			{
				goto IL_032b_1;
			}

IL_0316_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), 1);
				goto IL_032b_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_031f_1;
			}
			throw e;
		}

CATCH_031f_1:
		{
			V_12 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_63 = V_12;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_63);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_032b_1;
		}

IL_032b_1:
		{
			RuntimeObject* L_64 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_64) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_65 = V_13;
			if (!L_65)
			{
				goto IL_03aa_1;
			}
		}
		{
			RuntimeObject* L_66 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			NullCheck((RuntimeObject*)L_66);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_67;
			L_67 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_66);
			V_15 = L_67;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_68;
			L_68 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_15), NULL);
			V_14 = L_68;
			bool L_69;
			L_69 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_69)
			{
				goto IL_03a1_1;
			}
		}
		{
			int32_t L_70 = 4;
			V_0 = L_70;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_70);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_71 = V_14;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),18), L_71);
			V_4 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitWithCancellationAsyncU3Ed__3_2_t5C25FEB674967FD9889E050F607D9DBBC7246C37**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 24));
			goto IL_046b;
		}

IL_0384_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_72 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),18));
			V_14 = L_72;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),18)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_73 = (-1);
			V_0 = L_73;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_73);
		}

IL_03a1_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_03aa_1:
		{
			RuntimeObject* L_74 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_12 = L_74;
			RuntimeObject* L_75 = V_12;
			if (!L_75)
			{
				goto IL_03d4_1;
			}
		}
		{
			RuntimeObject* L_76 = V_12;
			V_16 = ((Exception_t*)IsInstClass((RuntimeObject*)L_76, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_77 = V_16;
			if (L_77)
			{
				goto IL_03c7_1;
			}
		}
		{
			RuntimeObject* L_78 = V_12;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_78, method);
		}

IL_03c7_1:
		{
			Exception_t* L_79 = V_16;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_80;
			L_80 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_79, NULL);
			NullCheck(L_80);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_80, NULL);
		}

IL_03d4_1:
		{
			int32_t L_81 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
			V_17 = L_81;
			int32_t L_82 = V_17;
			if ((((int32_t)L_82) == ((int32_t)1)))
			{
				goto IL_03e3_1;
			}
		}
		{
			goto IL_03ec_1;
		}

IL_03e3_1:
		{
			il2cpp_codegen_memcpy(L_83, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
			il2cpp_codegen_memcpy(V_1, L_83, SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
			goto IL_043c;
		}

IL_03ec_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))), SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
			il2cpp_codegen_memcpy(L_84, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)), SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
			il2cpp_codegen_memcpy(V_1, L_84, SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
			goto IL_043c;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0408;
		}
		throw e;
	}

CATCH_0408:
	{
		V_16 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
		il2cpp_codegen_write_instance_field_data<Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB*)NULL);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (RuntimeObject*)NULL);
		Exception_t* L_85 = V_16;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_85, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_046b;
	}

IL_043c:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
		il2cpp_codegen_write_instance_field_data<Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB*)NULL);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_86, V_1, SizeOf_TResult_tE01FF114616C4EFFC4B983528893593C77DE509F);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)), il2cpp_rgctx_method(method->klass->rgctx_data, 26), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1)) ? L_86: *(void**)L_86));
	}

IL_046b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__3_2_SetStateMachine_mC2D00F2FFC1FEB720931834EA6A5A0C7FD8452DC_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__3_2_t5C25FEB674967FD9889E050F607D9DBBC7246C37* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__43_1__ctor_m7FFEBB991CDBC37379FBC53CE8D0840104A83108_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__43_1_t388FF276C28AACAF91B54EE3DFF3016D0690C0CF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__43_1_MoveNext_mD298F257851881A25C4FCB8716702B243926AB26_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__43_1_t388FF276C28AACAF91B54EE3DFF3016D0690C0CF* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t29A422289A1A206529648DAA7A48462081B46B77 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t29A422289A1A206529648DAA7A48462081B46B77);
	const Il2CppFullySharedGenericAny L_43 = L_10;
	int32_t V_0 = 0;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_1;
	memset((&V_1), 0, sizeof(V_1));
	Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitWithCancellationAsyncU3Ed__43_1_t388FF276C28AACAF91B54EE3DFF3016D0690C0CF* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_12;
	memset((&V_12), 0, sizeof(V_12));
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_15;
	memset((&V_15), 0, sizeof(V_15));
	RuntimeObject* V_16 = NULL;
	bool V_17 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_18;
	memset((&V_18), 0, sizeof(V_18));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_19;
	memset((&V_19), 0, sizeof(V_19));
	Exception_t* V_20 = NULL;
	int32_t V_21 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
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
			goto IL_03be_1;
		}

IL_001a_1:
		{
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_3 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CvalueU3E5__1_5);
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
				switch (L_7)
				{
					case 0:
					{
						goto IL_0065_2;
					}
					case 1:
					{
						goto IL_0067_2;
					}
					case 2:
					{
						goto IL_006c_2;
					}
					case 3:
					{
						goto IL_0071_2;
					}
				}
			}
			{
				goto IL_0076_2;
			}

IL_0065_2:
			{
				goto IL_00d3_2;
			}

IL_0067_2:
			{
				goto IL_0177_2;
			}

IL_006c_2:
			{
				goto IL_0220_2;
			}

IL_0071_2:
			{
				goto IL_0314_2;
			}

IL_0076_2:
			{
				goto IL_012f_2;
			}

IL_007c_2:
			{
				Func_3_t428A771ED20C241CDDC6BDF17284D499B16CBD70* L_8 = (Func_3_t428A771ED20C241CDDC6BDF17284D499B16CBD70*)__this->___selector_3;
				RuntimeObject* L_9 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_8);
				UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F L_12;
				L_12 = InvokerFuncInvoker2< UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10), L_11);
				V_3 = L_12;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_13;
				L_13 = UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_inline((&V_3), UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_RuntimeMethod_var);
				V_2 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_inline((&V_2), Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00ef_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state_0 = L_15;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_16 = V_2;
				__this->___U3CU3Eu__1_15 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_15))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_17 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51*, U3CMinAwaitWithCancellationAsyncU3Ed__43_1_t388FF276C28AACAF91B54EE3DFF3016D0690C0CF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_047f;
			}

IL_00d3_2:
			{
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_18 = (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51)__this->___U3CU3Eu__1_15;
				V_2 = L_18;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* L_19 = (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51*)(&__this->___U3CU3Eu__1_15);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state_0 = L_20;
			}

IL_00ef_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_21;
				L_21 = Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_inline((&V_2), Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_RuntimeMethod_var);
				__this->___U3CU3Es__6_10 = L_21;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_22 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB)__this->___U3CU3Es__6_10;
				__this->___U3CvalueU3E5__1_5 = L_22;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_23 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CU3Es__6_10);
				il2cpp_codegen_initobj(L_23, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_24 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CvalueU3E5__1_5);
				bool L_25;
				L_25 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline(L_24, Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				V_5 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
				bool L_26 = V_5;
				if (!L_26)
				{
					goto IL_012a_2;
				}
			}
			{
				goto IL_012f_2;
			}

IL_012a_2:
			{
				goto IL_01c1_2;
			}

IL_012f_2:
			{
				RuntimeObject* L_27 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
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
					goto IL_0194_2;
				}
			}
			{
				int32_t L_31 = 1;
				V_0 = L_31;
				__this->___U3CU3E1__state_0 = L_31;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_32 = V_7;
				__this->___U3CU3Eu__2_16 = L_32;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_16))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_33 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__43_1_t388FF276C28AACAF91B54EE3DFF3016D0690C0CF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_33, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_047f;
			}

IL_0177_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_34 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_16;
				V_7 = L_34;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_35 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_16);
				il2cpp_codegen_initobj(L_35, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_36 = (-1);
				V_0 = L_36;
				__this->___U3CU3E1__state_0 = L_36;
			}

IL_0194_2:
			{
				bool L_37;
				L_37 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__7_11 = L_37;
				bool L_38 = (bool)__this->___U3CU3Es__7_11;
				V_6 = L_38;
				bool L_39 = V_6;
				if (L_39)
				{
					goto IL_007c_2;
				}
			}
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_40 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CU3Es__5_9);
				il2cpp_codegen_initobj(L_40, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
				goto IL_0350_2;
			}

IL_01c1_2:
			{
				goto IL_02cc_2;
			}

IL_01c7_2:
			{
				Func_3_t428A771ED20C241CDDC6BDF17284D499B16CBD70* L_41 = (Func_3_t428A771ED20C241CDDC6BDF17284D499B16CBD70*)__this->___selector_3;
				RuntimeObject* L_42 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_42);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_42, (Il2CppFullySharedGenericAny*)L_43);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_44 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_41);
				UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F L_45;
				L_45 = InvokerFuncInvoker2< UniTask_1_t151FAA0D763C44AEABC1EAF7A1AE6FEBFE90688F, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_43: *(void**)L_43), L_44);
				V_3 = L_45;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_46;
				L_46 = UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_inline((&V_3), UniTask_1_GetAwaiter_m4E1A98E8F6E647EB81A44954BB45E507BFB20783_RuntimeMethod_var);
				V_9 = L_46;
				bool L_47;
				L_47 = Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_inline((&V_9), Awaiter_get_IsCompleted_m3EB5D195138C2EA5A3DDDE973AB965BE6E6D561D_RuntimeMethod_var);
				if (L_47)
				{
					goto IL_023d_2;
				}
			}
			{
				int32_t L_48 = 2;
				V_0 = L_48;
				__this->___U3CU3E1__state_0 = L_48;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_49 = V_9;
				__this->___U3CU3Eu__1_15 = L_49;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_15))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_50 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51*, U3CMinAwaitWithCancellationAsyncU3Ed__43_1_t388FF276C28AACAF91B54EE3DFF3016D0690C0CF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_50, (&V_9), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_047f;
			}

IL_0220_2:
			{
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51 L_51 = (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51)__this->___U3CU3Eu__1_15;
				V_9 = L_51;
				Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51* L_52 = (Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51*)(&__this->___U3CU3Eu__1_15);
				il2cpp_codegen_initobj(L_52, sizeof(Awaiter_t6F4BCE09257F798C86681E98C24C3871847AAB51));
				int32_t L_53 = (-1);
				V_0 = L_53;
				__this->___U3CU3E1__state_0 = L_53;
			}

IL_023d_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_54;
				L_54 = Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_inline((&V_9), Awaiter_GetResult_m4E70D2834983CD46712F3043171C0D7E6923A0F0_RuntimeMethod_var);
				__this->___U3CU3Es__9_13 = L_54;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_55 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB)__this->___U3CU3Es__9_13;
				__this->___U3CxU3E5__8_12 = L_55;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_56 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CU3Es__9_13);
				il2cpp_codegen_initobj(L_56, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_57 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CxU3E5__8_12);
				bool L_58;
				L_58 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline(L_57, Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				V_10 = (bool)((((int32_t)L_58) == ((int32_t)0))? 1 : 0);
				bool L_59 = V_10;
				if (!L_59)
				{
					goto IL_0278_2;
				}
			}
			{
				goto IL_02cc_2;
			}

IL_0278_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_60 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB)__this->___U3CvalueU3E5__1_5;
				V_12 = L_60;
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_61 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB)__this->___U3CxU3E5__8_12;
				V_13 = L_61;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_62;
				L_62 = Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline((&V_12), Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_63;
				L_63 = Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline((&V_13), Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				bool L_64;
				L_64 = Decimal_op_GreaterThan_m549F09BF0C53D8611E550CA9CCB53543D6DAF717(L_62, L_63, NULL);
				bool L_65;
				L_65 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline((&V_12), Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				bool L_66;
				L_66 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline((&V_13), Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				V_11 = (bool)((int32_t)((int32_t)L_64&((int32_t)((int32_t)L_65&(int32_t)L_66))));
				bool L_67 = V_11;
				if (!L_67)
				{
					goto IL_02bf_2;
				}
			}
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_68 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB)__this->___U3CxU3E5__8_12;
				__this->___U3CvalueU3E5__1_5 = L_68;
			}

IL_02bf_2:
			{
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_69 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CxU3E5__8_12);
				il2cpp_codegen_initobj(L_69, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
			}

IL_02cc_2:
			{
				RuntimeObject* L_70 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_70);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_71;
				L_71 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_70);
				V_8 = L_71;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_72;
				L_72 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_8), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_15 = L_72;
				bool L_73;
				L_73 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_15), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_73)
				{
					goto IL_0331_2;
				}
			}
			{
				int32_t L_74 = 3;
				V_0 = L_74;
				__this->___U3CU3E1__state_0 = L_74;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_75 = V_15;
				__this->___U3CU3Eu__2_16 = L_75;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_16))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_76 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__43_1_t388FF276C28AACAF91B54EE3DFF3016D0690C0CF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_76, (&V_15), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_047f;
			}

IL_0314_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_77 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_16;
				V_15 = L_77;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_78 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_16);
				il2cpp_codegen_initobj(L_78, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_79 = (-1);
				V_0 = L_79;
				__this->___U3CU3E1__state_0 = L_79;
			}

IL_0331_2:
			{
				bool L_80;
				L_80 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_15), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__10_14 = L_80;
				bool L_81 = (bool)__this->___U3CU3Es__10_14;
				V_14 = L_81;
				bool L_82 = V_14;
				if (L_82)
				{
					goto IL_01c7_2;
				}
			}
			{
				goto IL_0365_1;
			}

IL_0350_2:
			{
				__this->___U3CU3Es__4_8 = 1;
				goto IL_0365_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0359_1;
			}
			throw e;
		}

CATCH_0359_1:
		{
			V_16 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_83 = V_16;
			__this->___U3CU3Es__3_7 = L_83;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_83);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0365_1;
		}

IL_0365_1:
		{
			RuntimeObject* L_84 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_17 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_84) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_85 = V_17;
			if (!L_85)
			{
				goto IL_03e4_1;
			}
		}
		{
			RuntimeObject* L_86 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_86);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_87;
			L_87 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_86);
			V_19 = L_87;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_88;
			L_88 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_19), NULL);
			V_18 = L_88;
			bool L_89;
			L_89 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_18), NULL);
			if (L_89)
			{
				goto IL_03db_1;
			}
		}
		{
			int32_t L_90 = 4;
			V_0 = L_90;
			__this->___U3CU3E1__state_0 = L_90;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_91 = V_18;
			__this->___U3CU3Eu__3_17 = L_91;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_17))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_92 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitWithCancellationAsyncU3Ed__43_1_t388FF276C28AACAF91B54EE3DFF3016D0690C0CF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_92, (&V_18), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_047f;
		}

IL_03be_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_93 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_17;
			V_18 = L_93;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_94 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_17);
			il2cpp_codegen_initobj(L_94, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_95 = (-1);
			V_0 = L_95;
			__this->___U3CU3E1__state_0 = L_95;
		}

IL_03db_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_18), NULL);
		}

IL_03e4_1:
		{
			RuntimeObject* L_96 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_16 = L_96;
			RuntimeObject* L_97 = V_16;
			if (!L_97)
			{
				goto IL_040e_1;
			}
		}
		{
			RuntimeObject* L_98 = V_16;
			V_20 = ((Exception_t*)IsInstClass((RuntimeObject*)L_98, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_99 = V_20;
			if (L_99)
			{
				goto IL_0401_1;
			}
		}
		{
			RuntimeObject* L_100 = V_16;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_100, method);
		}

IL_0401_1:
		{
			Exception_t* L_101 = V_20;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_102;
			L_102 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_101, NULL);
			NullCheck(L_102);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_102, NULL);
		}

IL_040e_1:
		{
			int32_t L_103 = (int32_t)__this->___U3CU3Es__4_8;
			V_21 = L_103;
			int32_t L_104 = V_21;
			if ((((int32_t)L_104) == ((int32_t)1)))
			{
				goto IL_041d_1;
			}
		}
		{
			goto IL_0426_1;
		}

IL_041d_1:
		{
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_105 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB)__this->___U3CU3Es__5_9;
			V_1 = L_105;
			goto IL_0463;
		}

IL_0426_1:
		{
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_106 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CU3Es__5_9);
			il2cpp_codegen_initobj(L_106, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_107 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB)__this->___U3CvalueU3E5__1_5;
			V_1 = L_107;
			goto IL_0463;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0442;
		}
		throw e;
	}

CATCH_0442:
	{
		V_20 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_108 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_109 = V_20;
		AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_inline(L_108, L_109, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_047f;
	}

IL_0463:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_110 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_111 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_inline(L_110, L_111, AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_RuntimeMethod_var);
	}

IL_047f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__43_1_SetStateMachine_m8BF6AE5E859F6ADACBBA3965DEFDA42EDE9DEFF1_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__43_1_t388FF276C28AACAF91B54EE3DFF3016D0690C0CF* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__7_1__ctor_mFDC900DCED34D0F482FEADEC51D1FFA02FF0BAAB_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__7_1_tD013D28F83ADDE9E45AEE1903E28D2EFEF7602FC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__7_1_MoveNext_m00C3153FAC0324FD3AE8D36F8CAD5F43C360CE03_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__7_1_tD013D28F83ADDE9E45AEE1903E28D2EFEF7602FC* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t30177FCA5261AB4655280352C011F16B71F333BC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_t30177FCA5261AB4655280352C011F16B71F333BC);
	const Il2CppFullySharedGenericAny L_38 = L_9;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Awaiter_t8953594D03299DE782894F4A865CED79F2504266 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMinAwaitWithCancellationAsyncU3Ed__7_1_tD013D28F83ADDE9E45AEE1903E28D2EFEF7602FC* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Awaiter_t8953594D03299DE782894F4A865CED79F2504266 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_11;
	memset((&V_11), 0, sizeof(V_11));
	RuntimeObject* V_12 = NULL;
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Exception_t* V_16 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
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
			goto IL_0330_1;
		}

IL_001a_1:
		{
			__this->___U3CvalueU3E5__1_5 = 0;
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
				switch (L_6)
				{
					case 0:
					{
						goto IL_0060_2;
					}
					case 1:
					{
						goto IL_0062_2;
					}
					case 2:
					{
						goto IL_0067_2;
					}
					case 3:
					{
						goto IL_006c_2;
					}
				}
			}
			{
				goto IL_0071_2;
			}

IL_0060_2:
			{
				goto IL_00ce_2;
			}

IL_0062_2:
			{
				goto IL_0150_2;
			}

IL_0067_2:
			{
				goto IL_01ee_2;
			}

IL_006c_2:
			{
				goto IL_028f_2;
			}

IL_0071_2:
			{
				goto IL_0108_2;
			}

IL_0077_2:
			{
				Func_3_t4B0BED2CC5C1B3C74670633A89F91C13C1A0F1E4* L_7 = (Func_3_t4B0BED2CC5C1B3C74670633A89F91C13C1A0F1E4*)__this->___selector_3;
				RuntimeObject* L_8 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_10 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_7);
				UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 L_11;
				L_11 = InvokerFuncInvoker2< UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_9: *(void**)L_9), L_10);
				V_3 = L_11;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_12;
				L_12 = UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_inline((&V_3), UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_RuntimeMethod_var);
				V_2 = L_12;
				bool L_13;
				L_13 = Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_inline((&V_2), Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_00ea_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state_0 = L_14;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_15 = V_2;
				__this->___U3CU3Eu__1_14 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_16 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_t8953594D03299DE782894F4A865CED79F2504266*, U3CMinAwaitWithCancellationAsyncU3Ed__7_1_tD013D28F83ADDE9E45AEE1903E28D2EFEF7602FC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_16, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_03d4;
			}

IL_00ce_2:
			{
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_17 = (Awaiter_t8953594D03299DE782894F4A865CED79F2504266)__this->___U3CU3Eu__1_14;
				V_2 = L_17;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266* L_18 = (Awaiter_t8953594D03299DE782894F4A865CED79F2504266*)(&__this->___U3CU3Eu__1_14);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_t8953594D03299DE782894F4A865CED79F2504266));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state_0 = L_19;
			}

IL_00ea_2:
			{
				int32_t L_20;
				L_20 = Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_inline((&V_2), Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_RuntimeMethod_var);
				__this->___U3CU3Es__5_9 = L_20;
				int32_t L_21 = (int32_t)__this->___U3CU3Es__5_9;
				__this->___U3CvalueU3E5__1_5 = L_21;
				goto IL_018f_2;
			}

IL_0108_2:
			{
				RuntimeObject* L_22 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_22);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_23;
				L_23 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_22);
				V_7 = L_23;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_24;
				L_24 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_6 = L_24;
				bool L_25;
				L_25 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_6), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_25)
				{
					goto IL_016d_2;
				}
			}
			{
				int32_t L_26 = 1;
				V_0 = L_26;
				__this->___U3CU3E1__state_0 = L_26;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_27 = V_6;
				__this->___U3CU3Eu__2_15 = L_27;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_15))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_28 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__7_1_tD013D28F83ADDE9E45AEE1903E28D2EFEF7602FC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_28, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_03d4;
			}

IL_0150_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_15;
				V_6 = L_29;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_30 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_15);
				il2cpp_codegen_initobj(L_30, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_31 = (-1);
				V_0 = L_31;
				__this->___U3CU3E1__state_0 = L_31;
			}

IL_016d_2:
			{
				bool L_32;
				L_32 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__6_10 = L_32;
				bool L_33 = (bool)__this->___U3CU3Es__6_10;
				V_5 = L_33;
				bool L_34 = V_5;
				if (L_34)
				{
					goto IL_0077_2;
				}
			}
			{
				Exception_t* L_35;
				L_35 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, method);
			}

IL_018f_2:
			{
				goto IL_0247_2;
			}

IL_0195_2:
			{
				Func_3_t4B0BED2CC5C1B3C74670633A89F91C13C1A0F1E4* L_36 = (Func_3_t4B0BED2CC5C1B3C74670633A89F91C13C1A0F1E4*)__this->___selector_3;
				RuntimeObject* L_37 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_37);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_37, (Il2CppFullySharedGenericAny*)L_38);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_39 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_36);
				UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 L_40;
				L_40 = InvokerFuncInvoker2< UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_38: *(void**)L_38), L_39);
				V_3 = L_40;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_41;
				L_41 = UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_inline((&V_3), UniTask_1_GetAwaiter_mEE979D9FE8359EC38EF5665C3093F479F9B1E0DD_RuntimeMethod_var);
				V_8 = L_41;
				bool L_42;
				L_42 = Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_inline((&V_8), Awaiter_get_IsCompleted_mA36ECED79131AE62F7B4AF0FB34EC8C99823DDA8_RuntimeMethod_var);
				if (L_42)
				{
					goto IL_020b_2;
				}
			}
			{
				int32_t L_43 = 2;
				V_0 = L_43;
				__this->___U3CU3E1__state_0 = L_43;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_44 = V_8;
				__this->___U3CU3Eu__1_14 = L_44;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_14))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_45 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_t8953594D03299DE782894F4A865CED79F2504266*, U3CMinAwaitWithCancellationAsyncU3Ed__7_1_tD013D28F83ADDE9E45AEE1903E28D2EFEF7602FC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_45, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_03d4;
			}

IL_01ee_2:
			{
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266 L_46 = (Awaiter_t8953594D03299DE782894F4A865CED79F2504266)__this->___U3CU3Eu__1_14;
				V_8 = L_46;
				Awaiter_t8953594D03299DE782894F4A865CED79F2504266* L_47 = (Awaiter_t8953594D03299DE782894F4A865CED79F2504266*)(&__this->___U3CU3Eu__1_14);
				il2cpp_codegen_initobj(L_47, sizeof(Awaiter_t8953594D03299DE782894F4A865CED79F2504266));
				int32_t L_48 = (-1);
				V_0 = L_48;
				__this->___U3CU3E1__state_0 = L_48;
			}

IL_020b_2:
			{
				int32_t L_49;
				L_49 = Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_inline((&V_8), Awaiter_GetResult_mB06ADA0EEC04BC2DDB64E9BBD7910EEFDB8EBB0A_RuntimeMethod_var);
				__this->___U3CU3Es__8_12 = L_49;
				int32_t L_50 = (int32_t)__this->___U3CU3Es__8_12;
				__this->___U3CxU3E5__7_11 = L_50;
				int32_t L_51 = (int32_t)__this->___U3CvalueU3E5__1_5;
				int32_t L_52 = (int32_t)__this->___U3CxU3E5__7_11;
				V_9 = (bool)((((int32_t)L_51) > ((int32_t)L_52))? 1 : 0);
				bool L_53 = V_9;
				if (!L_53)
				{
					goto IL_0246_2;
				}
			}
			{
				int32_t L_54 = (int32_t)__this->___U3CxU3E5__7_11;
				__this->___U3CvalueU3E5__1_5 = L_54;
			}

IL_0246_2:
			{
			}

IL_0247_2:
			{
				RuntimeObject* L_55 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
				NullCheck(L_55);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_56;
				L_56 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_55);
				V_7 = L_56;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_57;
				L_57 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_7), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_11 = L_57;
				bool L_58;
				L_58 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_11), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_58)
				{
					goto IL_02ac_2;
				}
			}
			{
				int32_t L_59 = 3;
				V_0 = L_59;
				__this->___U3CU3E1__state_0 = L_59;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_60 = V_11;
				__this->___U3CU3Eu__2_15 = L_60;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_15))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_61 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CMinAwaitWithCancellationAsyncU3Ed__7_1_tD013D28F83ADDE9E45AEE1903E28D2EFEF7602FC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_61, (&V_11), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_03d4;
			}

IL_028f_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_62 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_15;
				V_11 = L_62;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_63 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_15);
				il2cpp_codegen_initobj(L_63, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_64 = (-1);
				V_0 = L_64;
				__this->___U3CU3E1__state_0 = L_64;
			}

IL_02ac_2:
			{
				bool L_65;
				L_65 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_11), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__9_13 = L_65;
				bool L_66 = (bool)__this->___U3CU3Es__9_13;
				V_10 = L_66;
				bool L_67 = V_10;
				if (L_67)
				{
					goto IL_0195_2;
				}
			}
			{
				goto IL_02d7_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_02cb_1;
			}
			throw e;
		}

CATCH_02cb_1:
		{
			V_12 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_68 = V_12;
			__this->___U3CU3Es__3_7 = L_68;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)L_68);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_02d7_1;
		}

IL_02d7_1:
		{
			RuntimeObject* L_69 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_69) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_70 = V_13;
			if (!L_70)
			{
				goto IL_0356_1;
			}
		}
		{
			RuntimeObject* L_71 = (RuntimeObject*)__this->___U3CeU3E5__2_6;
			NullCheck((RuntimeObject*)L_71);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_72;
			L_72 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_71);
			V_15 = L_72;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_73;
			L_73 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_15), NULL);
			V_14 = L_73;
			bool L_74;
			L_74 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_74)
			{
				goto IL_034d_1;
			}
		}
		{
			int32_t L_75 = 4;
			V_0 = L_75;
			__this->___U3CU3E1__state_0 = L_75;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_76 = V_14;
			__this->___U3CU3Eu__3_16 = L_76;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__3_16))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_77 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CMinAwaitWithCancellationAsyncU3Ed__7_1_tD013D28F83ADDE9E45AEE1903E28D2EFEF7602FC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_77, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_03d4;
		}

IL_0330_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_78 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__3_16;
			V_14 = L_78;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_79 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__3_16);
			il2cpp_codegen_initobj(L_79, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_80 = (-1);
			V_0 = L_80;
			__this->___U3CU3E1__state_0 = L_80;
		}

IL_034d_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_0356_1:
		{
			RuntimeObject* L_81 = (RuntimeObject*)__this->___U3CU3Es__3_7;
			V_12 = L_81;
			RuntimeObject* L_82 = V_12;
			if (!L_82)
			{
				goto IL_0380_1;
			}
		}
		{
			RuntimeObject* L_83 = V_12;
			V_16 = ((Exception_t*)IsInstClass((RuntimeObject*)L_83, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_84 = V_16;
			if (L_84)
			{
				goto IL_0373_1;
			}
		}
		{
			RuntimeObject* L_85 = V_12;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_85, method);
		}

IL_0373_1:
		{
			Exception_t* L_86 = V_16;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_87;
			L_87 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_86, NULL);
			NullCheck(L_87);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_87, NULL);
		}

IL_0380_1:
		{
			int32_t L_88 = (int32_t)__this->___U3CU3Es__4_8;
			__this->___U3CU3Es__3_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_7), (void*)NULL);
			int32_t L_89 = (int32_t)__this->___U3CvalueU3E5__1_5;
			V_1 = L_89;
			goto IL_03b8;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0397;
		}
		throw e;
	}

CATCH_0397:
	{
		V_16 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_90 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_91 = V_16;
		AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_inline(L_90, L_91, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_mBB869723995352D19831A41E4F4BA5CC61048106_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_03d4;
	}

IL_03b8:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__2_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E* L_92 = (AsyncUniTaskMethodBuilder_1_tB792B48DBA3EFCB31F73498F0D753F7A2999DC5E*)(&__this->___U3CU3Et__builder_1);
		int32_t L_93 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_inline(L_92, L_93, AsyncUniTaskMethodBuilder_1_SetResult_m891B1EBA488DEF32E0AC442EE80143B0F51D133F_RuntimeMethod_var);
	}

IL_03d4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMinAwaitWithCancellationAsyncU3Ed__7_1_SetStateMachine_m20FBDB6D4128525E00FD2207A5B4BE45781E2CCB_gshared (U3CMinAwaitWithCancellationAsyncU3Ed__7_1_tD013D28F83ADDE9E45AEE1903E28D2EFEF7602FC* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveNextAsyncU3Ed__7__ctor_m294EC88949D437A93DA925822F5313DFBADFE871_gshared (U3CMoveNextAsyncU3Ed__7_t5C3858D5A215C27F7ACD70F743712EFAC46E1002* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveNextAsyncU3Ed__7_MoveNext_mD305E84389F5A0E5BBDB5CA663D7262B75CEF244_gshared (U3CMoveNextAsyncU3Ed__7_t5C3858D5A215C27F7ACD70F743712EFAC46E1002* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t4C0B519678B913AD1F0B3DB721B18FA114695044 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T_t4C0B519678B913AD1F0B3DB721B18FA114695044);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T_t4C0B519678B913AD1F0B3DB721B18FA114695044);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CMoveNextAsyncU3Ed__7_t5C3858D5A215C27F7ACD70F743712EFAC46E1002* V_4 = NULL;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
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
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_0082_1;
		}

IL_000e_1:
		{
			_ToUniTaskAsyncEnumerableTask_t96E01945EE26D2019409887F85016296E285563B* L_2 = *(_ToUniTaskAsyncEnumerableTask_t96E01945EE26D2019409887F85016296E285563B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1)))), NULL);
			_ToUniTaskAsyncEnumerableTask_t96E01945EE26D2019409887F85016296E285563B* L_3 = *(_ToUniTaskAsyncEnumerableTask_t96E01945EE26D2019409887F85016296E285563B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			bool L_4 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3));
			V_2 = L_4;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_0037_1;
			}
		}
		{
			V_1 = (bool)0;
			goto IL_00e6;
		}

IL_0037_1:
		{
			_ToUniTaskAsyncEnumerableTask_t96E01945EE26D2019409887F85016296E285563B* L_6 = *(_ToUniTaskAsyncEnumerableTask_t96E01945EE26D2019409887F85016296E285563B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			NullCheck(L_6);
			il2cpp_codegen_write_instance_field_data<bool>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3), (bool)1);
			_ToUniTaskAsyncEnumerableTask_t96E01945EE26D2019409887F85016296E285563B* L_7 = *(_ToUniTaskAsyncEnumerableTask_t96E01945EE26D2019409887F85016296E285563B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_8 = *(Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9**)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0));
			NullCheck(L_8);
			TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 L_9;
			L_9 = ((  TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 (*) (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			V_3 = L_9;
			bool L_10;
			L_10 = ((  bool (*) (TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
			if (L_10)
			{
				goto IL_009e_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_11);
			TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 L_12 = V_3;
			il2cpp_codegen_write_instance_field_data<TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_12);
			V_4 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*, U3CMoveNextAsyncU3Ed__7_t5C3858D5A215C27F7ACD70F743712EFAC46E1002**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((((AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_3), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
			goto IL_00fb;
		}

IL_0082_1:
		{
			TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 L_13 = *(TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			V_3 = L_13;
			il2cpp_codegen_initobj((((TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)))), sizeof(TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8));
			int32_t L_14 = (-1);
			V_0 = L_14;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_14);
		}

IL_009e_1:
		{
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), (&V_3), (Il2CppFullySharedGenericAny*)L_15);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_15, SizeOf_T_t4C0B519678B913AD1F0B3DB721B18FA114695044);
			_ToUniTaskAsyncEnumerableTask_t96E01945EE26D2019409887F85016296E285563B* L_16 = *(_ToUniTaskAsyncEnumerableTask_t96E01945EE26D2019409887F85016296E285563B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)), SizeOf_T_t4C0B519678B913AD1F0B3DB721B18FA114695044);
			NullCheck(L_16);
			il2cpp_codegen_write_instance_field_data(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2), L_17, SizeOf_T_t4C0B519678B913AD1F0B3DB721B18FA114695044);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)))), SizeOf_T_t4C0B519678B913AD1F0B3DB721B18FA114695044);
			V_1 = (bool)1;
			goto IL_00e6;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00cc;
		}
		throw e;
	}

CATCH_00cc:
	{
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		Exception_t* L_18 = V_5;
		AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_inline((((AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00fb;
	}

IL_00e6:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		bool L_19 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_inline((((AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_19, AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
	}

IL_00fb:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveNextAsyncU3Ed__7_SetStateMachine_m0D96CCF0D3B78DFBB0A96D89AE4FBBD7DB545E33_gshared (U3CMoveNextAsyncU3Ed__7_t5C3858D5A215C27F7ACD70F743712EFAC46E1002* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveNextAsyncU3Ed__7__ctor_mF0FF4251796DC8403CA1CFBF61F5214E9ECA2D47_gshared (U3CMoveNextAsyncU3Ed__7_t018B4EF6E63587BA5822F2E50A302D4708BEE18B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveNextAsyncU3Ed__7_MoveNext_mF633DEA17FE4C81C628A9CB18C421B5C52F78E0B_gshared (U3CMoveNextAsyncU3Ed__7_t018B4EF6E63587BA5822F2E50A302D4708BEE18B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_Awaiter_tEE50C5BAF6AC468FF565AEF70B6927760483678D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const uint32_t SizeOf_T_tAB0391C39BAD0952FDF4CD0D33611826FE1A202A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T_tAB0391C39BAD0952FDF4CD0D33611826FE1A202A);
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T_tAB0391C39BAD0952FDF4CD0D33611826FE1A202A);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_8 = alloca(SizeOf_Awaiter_tEE50C5BAF6AC468FF565AEF70B6927760483678D);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_11 = L_8;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_12 = L_8;
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_3 = alloca(SizeOf_Awaiter_tEE50C5BAF6AC468FF565AEF70B6927760483678D);
	memset(V_3, 0, SizeOf_Awaiter_tEE50C5BAF6AC468FF565AEF70B6927760483678D);
	U3CMoveNextAsyncU3Ed__7_t018B4EF6E63587BA5822F2E50A302D4708BEE18B* V_4 = NULL;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
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
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_0082_1;
		}

IL_000e_1:
		{
			_ToUniTaskAsyncEnumerableUniTask_tB862AC47790A98CF42A70910BC9237C8764CF9E5* L_2 = *(_ToUniTaskAsyncEnumerableUniTask_tB862AC47790A98CF42A70910BC9237C8764CF9E5**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1)))), NULL);
			_ToUniTaskAsyncEnumerableUniTask_tB862AC47790A98CF42A70910BC9237C8764CF9E5* L_3 = *(_ToUniTaskAsyncEnumerableUniTask_tB862AC47790A98CF42A70910BC9237C8764CF9E5**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			bool L_4 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3));
			V_2 = L_4;
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_0037_1;
			}
		}
		{
			V_1 = (bool)0;
			goto IL_00e6;
		}

IL_0037_1:
		{
			_ToUniTaskAsyncEnumerableUniTask_tB862AC47790A98CF42A70910BC9237C8764CF9E5* L_6 = *(_ToUniTaskAsyncEnumerableUniTask_tB862AC47790A98CF42A70910BC9237C8764CF9E5**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			NullCheck(L_6);
			il2cpp_codegen_write_instance_field_data<bool>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3), (bool)1);
			_ToUniTaskAsyncEnumerableUniTask_tB862AC47790A98CF42A70910BC9237C8764CF9E5* L_7 = *(_ToUniTaskAsyncEnumerableUniTask_tB862AC47790A98CF42A70910BC9237C8764CF9E5**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)), il2cpp_rgctx_method(method->klass->rgctx_data, 3), (((UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_8);
			il2cpp_codegen_memcpy(V_3, L_8, SizeOf_Awaiter_tEE50C5BAF6AC468FF565AEF70B6927760483678D);
			bool L_9;
			L_9 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
			if (L_9)
			{
				goto IL_009e_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_10);
			il2cpp_codegen_memcpy(L_11, V_3, SizeOf_Awaiter_tEE50C5BAF6AC468FF565AEF70B6927760483678D);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_11, SizeOf_Awaiter_tEE50C5BAF6AC468FF565AEF70B6927760483678D);
			V_4 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CMoveNextAsyncU3Ed__7_t018B4EF6E63587BA5822F2E50A302D4708BEE18B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((((AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_3, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
			goto IL_00fb;
		}

IL_0082_1:
		{
			il2cpp_codegen_memcpy(L_12, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)), SizeOf_Awaiter_tEE50C5BAF6AC468FF565AEF70B6927760483678D);
			il2cpp_codegen_memcpy(V_3, L_12, SizeOf_Awaiter_tEE50C5BAF6AC468FF565AEF70B6927760483678D);
			il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)))), SizeOf_Awaiter_tEE50C5BAF6AC468FF565AEF70B6927760483678D);
			int32_t L_13 = (-1);
			V_0 = L_13;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_13);
		}

IL_009e_1:
		{
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_3, (Il2CppFullySharedGenericAny*)L_14);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_14, SizeOf_T_tAB0391C39BAD0952FDF4CD0D33611826FE1A202A);
			_ToUniTaskAsyncEnumerableUniTask_tB862AC47790A98CF42A70910BC9237C8764CF9E5* L_15 = *(_ToUniTaskAsyncEnumerableUniTask_tB862AC47790A98CF42A70910BC9237C8764CF9E5**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)), SizeOf_T_tAB0391C39BAD0952FDF4CD0D33611826FE1A202A);
			NullCheck(L_15);
			il2cpp_codegen_write_instance_field_data(L_15, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2), L_16, SizeOf_T_tAB0391C39BAD0952FDF4CD0D33611826FE1A202A);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)))), SizeOf_T_tAB0391C39BAD0952FDF4CD0D33611826FE1A202A);
			V_1 = (bool)1;
			goto IL_00e6;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00cc;
		}
		throw e;
	}

CATCH_00cc:
	{
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		Exception_t* L_17 = V_5;
		AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_inline((((AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00fb;
	}

IL_00e6:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		bool L_18 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_inline((((AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_18, AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
	}

IL_00fb:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveNextAsyncU3Ed__7_SetStateMachine_mCAD37CA3CA5BAA3C53FB2FE7E661B295493BAFCA_gshared (U3CMoveNextAsyncU3Ed__7_t018B4EF6E63587BA5822F2E50A302D4708BEE18B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveNextAsyncU3Ed__9__ctor_m47E90AE212E79248A92A86BA877ACC9B2ACABDBF_gshared (U3CMoveNextAsyncU3Ed__9_tD4F96CC8D5992FC80B36C4997D089E2FA5FAA70E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveNextAsyncU3Ed__9_MoveNext_m55A2520E95B10480DE53C9572AA29187C580E4DA_gshared (U3CMoveNextAsyncU3Ed__9_tD4F96CC8D5992FC80B36C4997D089E2FA5FAA70E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t7EB2ECB1DE05FD0EB0D1B4458032474E8363BA85 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const Il2CppFullySharedGenericAny L_34 = alloca(SizeOf_TSource_t7EB2ECB1DE05FD0EB0D1B4458032474E8363BA85);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tF1161044B03B89C690A1FB77CF673B0EDEE8B5BD V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CMoveNextAsyncU3Ed__9_tD4F96CC8D5992FC80B36C4997D089E2FA5FAA70E* V_5 = NULL;
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
			goto IL_008c_1;
		}

IL_000e_1:
		{
			_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC* L_2 = (_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC*)__this->___U3CU3E4__this_2;
			CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1)))), NULL);
			_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC* L_3 = (_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC*)__this->___U3CU3E4__this_2;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2));
			V_2 = (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_00e8_1;
			}
		}
		{
			_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC* L_6 = (_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0));
			_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC* L_8 = (_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC*)__this->___U3CU3E4__this_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_9 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),1));
			UniTask_1_tF1161044B03B89C690A1FB77CF673B0EDEE8B5BD L_10;
			L_10 = ((  UniTask_1_tF1161044B03B89C690A1FB77CF673B0EDEE8B5BD (*) (RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_7, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
			V_4 = L_10;
			Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C L_11;
			L_11 = InvokerFuncInvoker0< Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), (&V_4));
			V_3 = L_11;
			bool L_12;
			L_12 = ((  bool (*) (Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))((&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			if (L_12)
			{
				goto IL_00a8_1;
			}
		}
		{
			int32_t L_13 = 0;
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
			Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C L_14 = V_3;
			__this->___U3CU3Eu__1_4 = L_14;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_4))->___task_0))->___source_0), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_4))->___task_0))->___result_1), (void*)NULL);
			#endif
			V_5 = __this;
			AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_15 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C*, U3CMoveNextAsyncU3Ed__9_tD4F96CC8D5992FC80B36C4997D089E2FA5FAA70E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_15, (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			goto IL_0177;
		}

IL_008c_1:
		{
			Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C L_16 = (Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C)__this->___U3CU3Eu__1_4;
			V_3 = L_16;
			Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C* L_17 = (Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C*)(&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_17, sizeof(Awaiter_t607B67575AA9A3F792D20DE50A0E0B0EA685C53C));
			int32_t L_18 = (-1);
			V_0 = L_18;
			__this->___U3CU3E1__state_0 = L_18;
		}

IL_00a8_1:
		{
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19;
			L_19 = InvokerFuncInvoker0< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), (&V_3));
			__this->___U3CU3Es__1_3 = L_19;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1_3), (void*)L_19);
			_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC* L_20 = (_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC*)__this->___U3CU3E4__this_2;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->___U3CU3Es__1_3;
			NullCheck(L_20);
			il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2), L_21);
			__this->___U3CU3Es__1_3 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1_3), (void*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL);
			_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC* L_22 = (_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC*)__this->___U3CU3E4__this_2;
			_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC* L_23 = (_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC*)__this->___U3CU3E4__this_2;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_24 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(L_23, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2));
			NullCheck(L_24);
			NullCheck(L_22);
			il2cpp_codegen_write_instance_field_data<int32_t>(L_22, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3), ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_24)->max_length)), 1)));
		}

IL_00e8_1:
		{
			_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC* L_25 = (_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC*)__this->___U3CU3E4__this_2;
			int32_t L_26 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_25, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3));
			V_6 = (bool)((((int32_t)((((int32_t)L_26) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_27 = V_6;
			if (!L_27)
			{
				goto IL_0143_1;
			}
		}
		{
			_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC* L_28 = (_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC*)__this->___U3CU3E4__this_2;
			_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC* L_29 = (_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC*)__this->___U3CU3E4__this_2;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_30 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(L_29, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),2));
			_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC* L_31 = (_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC*)__this->___U3CU3E4__this_2;
			int32_t L_32 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_31, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3));
			NullCheck(L_30);
			int32_t L_33 = L_32;
			il2cpp_codegen_memcpy(L_34, (L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)), SizeOf_TSource_t7EB2ECB1DE05FD0EB0D1B4458032474E8363BA85);
			NullCheck(L_28);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), L_28, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? L_34: *(void**)L_34));
			_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC* L_35 = (_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC*)__this->___U3CU3E4__this_2;
			_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC* L_36 = (_Reverse_tAB625315D2E511F9A5671AD6E6E4B477308220CC*)__this->___U3CU3E4__this_2;
			int32_t L_37 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_36, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3));
			NullCheck(L_35);
			il2cpp_codegen_write_instance_field_data<int32_t>(L_35, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),3), ((int32_t)il2cpp_codegen_subtract(L_37, 1)));
			V_1 = (bool)1;
			goto IL_0162;
		}

IL_0143_1:
		{
			V_1 = (bool)0;
			goto IL_0162;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0148;
		}
		throw e;
	}

CATCH_0148:
	{
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_38 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_39 = V_7;
		AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_inline(L_38, L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0177;
	}

IL_0162:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_40 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder_1);
		bool L_41 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_inline(L_40, L_41, AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
	}

IL_0177:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveNextAsyncU3Ed__9_SetStateMachine_mA467E3079A88F0E5D61260DF936B2BB7725D53BA_gshared (U3CMoveNextAsyncU3Ed__9_tD4F96CC8D5992FC80B36C4997D089E2FA5FAA70E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAsyncCoreU3Ed__5__ctor_m78CB6574171611B334F3B4EA4F441968969BF15E_gshared (U3CReadAsyncCoreU3Ed__5_tFC66DFEB527BFA020AB057E4D877130EC75A2E86* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAsyncCoreU3Ed__5_MoveNext_m883B404EBEAA78A149CA7AA98EA2E7CFE1950F25_gshared (U3CReadAsyncCoreU3Ed__5_tFC66DFEB527BFA020AB057E4D877130EC75A2E86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t0B182A9D005B13C01362153EC02CA729F416A55D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T_t0B182A9D005B13C01362153EC02CA729F416A55D);
	const Il2CppFullySharedGenericAny L_20 = L_17;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t0B182A9D005B13C01362153EC02CA729F416A55D);
	memset(V_1, 0, SizeOf_T_t0B182A9D005B13C01362153EC02CA729F416A55D);
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CReadAsyncCoreU3Ed__5_tFC66DFEB527BFA020AB057E4D877130EC75A2E86* V_5 = NULL;
	bool V_6 = false;
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
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
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_005b_1;
		}

IL_000e_1:
		{
			ChannelReader_1_t2ECD38FFB796290865D3F1EAC478976ECBD61318* L_2 = *(ChannelReader_1_t2ECD38FFB796290865D3F1EAC478976ECBD61318**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			NullCheck(L_2);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_4;
			L_4 = VirtualFuncInvoker1< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(5, L_2, L_3);
			V_4 = L_4;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_5;
			L_5 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			V_3 = L_5;
			bool L_6;
			L_6 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0077_1;
			}
		}
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_7);
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_8 = V_3;
			il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_8);
			V_5 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CReadAsyncCoreU3Ed__5_tFC66DFEB527BFA020AB057E4D877130EC75A2E86**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
			goto IL_00f2;
		}

IL_005b_1:
		{
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_9 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_3 = L_9;
			il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
			int32_t L_10 = (-1);
			V_0 = L_10;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_10);
		}

IL_0077_1:
		{
			bool L_11;
			L_11 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
			il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_11);
			bool L_12 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			V_2 = L_12;
			bool L_13 = V_2;
			if (!L_13)
			{
				goto IL_00bd_1;
			}
		}
		{
			ChannelReader_1_t2ECD38FFB796290865D3F1EAC478976ECBD61318* L_14 = *(ChannelReader_1_t2ECD38FFB796290865D3F1EAC478976ECBD61318**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
			NullCheck(L_14);
			bool L_15;
			L_15 = VirtualFuncInvoker1< bool, Il2CppFullySharedGenericAny* >::Invoke(4, L_14, (((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))));
			V_6 = L_15;
			bool L_16 = V_6;
			if (!L_16)
			{
				goto IL_00b0_1;
			}
		}
		{
			il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)), SizeOf_T_t0B182A9D005B13C01362153EC02CA729F416A55D);
			il2cpp_codegen_memcpy(V_1, L_17, SizeOf_T_t0B182A9D005B13C01362153EC02CA729F416A55D);
			goto IL_00dd;
		}

IL_00b0_1:
		{
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), SizeOf_T_t0B182A9D005B13C01362153EC02CA729F416A55D);
		}

IL_00bd_1:
		{
			ChannelClosedException_tC3080D80CFCAF35852566A33108F4533DB025F0C* L_18 = (ChannelClosedException_tC3080D80CFCAF35852566A33108F4533DB025F0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChannelClosedException_tC3080D80CFCAF35852566A33108F4533DB025F0C_il2cpp_TypeInfo_var)));
			ChannelClosedException__ctor_m96AAB202638FADBEE698B834F10976A0690C7D94(L_18, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, method);
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c3;
		}
		throw e;
	}

CATCH_00c3:
	{
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		Exception_t* L_19 = V_7;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f2;
	}

IL_00dd:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_memcpy(L_20, V_1, SizeOf_T_t0B182A9D005B13C01362153EC02CA729F416A55D);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_20: *(void**)L_20));
	}

IL_00f2:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAsyncCoreU3Ed__5_SetStateMachine_m4D7D301E0291B7435DBF133EA0AEAC47F7E5993E_gshared (U3CReadAsyncCoreU3Ed__5_tFC66DFEB527BFA020AB057E4D877130EC75A2E86* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReverseIteratorU3Ed__79_1__ctor_m685BB5646EEC473221EEEEB5198F7F021741E8FE_gshared (U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReverseIteratorU3Ed__79_1_System_IDisposable_Dispose_m95DB0EDD0B03E8F220004B8F3888E117A6D28F02_gshared (U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReverseIteratorU3Ed__79_1_MoveNext_m12DED18709B627A74D8F47B8A812FCF9A876E985_gshared (U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0062;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_3 = (RuntimeObject*)__this->___source_3;
		Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Buffer_1__ctor_m072DE84AEC969582EB5760D4835747F9DC0C02AF((&L_4), L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___U3CbufferU3E5__2_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CbufferU3E5__2_5))->___items_0), (void*)NULL);
		Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59* L_5 = (Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59*)(&__this->___U3CbufferU3E5__2_5);
		int32_t L_6 = (int32_t)L_5->___count_1;
		__this->___U3CiU3E5__3_6 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		goto IL_0079;
	}

IL_003d:
	{
		Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59* L_7 = (Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59*)(&__this->___U3CbufferU3E5__2_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_7->___items_0;
		int32_t L_9 = (int32_t)__this->___U3CiU3E5__3_6;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		__this->___U3CU3E2__current_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0062:
	{
		__this->___U3CU3E1__state_0 = (-1);
		int32_t L_12 = (int32_t)__this->___U3CiU3E5__3_6;
		V_1 = L_12;
		int32_t L_13 = V_1;
		__this->___U3CiU3E5__3_6 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_0079:
	{
		int32_t L_14 = (int32_t)__this->___U3CiU3E5__3_6;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReverseIteratorU3Ed__79_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m75696348EEFA01E44E736C4D672C4781F9112C97_gshared (U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CU3E2__current_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReverseIteratorU3Ed__79_1_System_Collections_IEnumerator_Reset_m392917A398D3B9A7504623C7A64DA5FF2DD27776_gshared (U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReverseIteratorU3Ed__79_1_System_Collections_IEnumerator_get_Current_m084D571AA48B30598569C39DD567560AF28B4299_gshared (U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CU3E2__current_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReverseIteratorU3Ed__79_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m11F12AD959FE78FE9411817870AE1DF7BE612689_gshared (U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC* __this, const RuntimeMethod* method) 
{
	U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC* V_0 = NULL;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC* L_3 = (U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		U3CReverseIteratorU3Ed__79_1__ctor_m685BB5646EEC473221EEEEB5198F7F021741E8FE(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_0 = L_3;
	}

IL_0029:
	{
		U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC* L_4 = V_0;
		RuntimeObject* L_5 = (RuntimeObject*)__this->___U3CU3E3__source_4;
		NullCheck(L_4);
		L_4->___source_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___source_3), (void*)L_5);
		U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC* L_6 = V_0;
		return (RuntimeObject*)L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReverseIteratorU3Ed__79_1_System_Collections_IEnumerable_GetEnumerator_m55D0E38CA8974898032F1AEC136A1295F2A2861B_gshared (U3CReverseIteratorU3Ed__79_1_tBCE9918AB7AFE61A7308121FC4FE7132FF9D4FEC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CReverseIteratorU3Ed__79_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m11F12AD959FE78FE9411817870AE1DF7BE612689(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReverseIteratorU3Ed__79_1__ctor_m639C26764B0F8A95FC823E188D4E677BBCBAEBBF_gshared (U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReverseIteratorU3Ed__79_1_System_IDisposable_Dispose_m616CC450AE3CCB0E19EF5EF0322BA28D7B10FF27_gshared (U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReverseIteratorU3Ed__79_1_MoveNext_mA94377EE3E1EFF886C524A69811E833DD52BBDE0_gshared (U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t01203F084DA9F3831FB1E3C86D77E984536413DC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_t01203F084DA9F3831FB1E3C86D77E984536413DC);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0062;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Buffer_1__ctor_m55137EEF7AF9E0883A438776A066DA5520FFDE49((&L_4), L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		il2cpp_codegen_write_instance_field_data<Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_4);
		int32_t L_5 = (int32_t)(((Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5))))->___count_1;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), ((int32_t)il2cpp_codegen_subtract(L_5, 1)));
		goto IL_0079;
	}

IL_003d:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(((Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5))))->___items_0;
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_TSource_t01203F084DA9F3831FB1E3C86D77E984536413DC);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_9, SizeOf_TSource_t01203F084DA9F3831FB1E3C86D77E984536413DC);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
		return (bool)1;
	}

IL_0062:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		V_1 = L_10;
		int32_t L_11 = V_1;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), ((int32_t)il2cpp_codegen_subtract(L_11, 1)));
	}

IL_0079:
	{
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReverseIteratorU3Ed__79_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_mFC1C69581F882D10F5FAFE8DB286372B18384513_gshared (U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t01203F084DA9F3831FB1E3C86D77E984536413DC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t01203F084DA9F3831FB1E3C86D77E984536413DC);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TSource_t01203F084DA9F3831FB1E3C86D77E984536413DC);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_t01203F084DA9F3831FB1E3C86D77E984536413DC);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReverseIteratorU3Ed__79_1_System_Collections_IEnumerator_Reset_m9DA8206FDC9C981753CFF6DF031942FDD99BDB8E_gshared (U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReverseIteratorU3Ed__79_1_System_Collections_IEnumerator_get_Current_m3BE7F74CDD48F448DAA3A03216887A4B9BAA78F3_gshared (U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t01203F084DA9F3831FB1E3C86D77E984536413DC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t01203F084DA9F3831FB1E3C86D77E984536413DC);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TSource_t01203F084DA9F3831FB1E3C86D77E984536413DC);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReverseIteratorU3Ed__79_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_mFD5E16F72AA153BCCD35C7D655AC956B1CDDED04_gshared (U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C* __this, const RuntimeMethod* method) 
{
	U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C* V_0 = NULL;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C* L_3 = (U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_0 = L_3;
	}

IL_0029:
	{
		U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C* L_4 = V_0;
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck(L_4);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_5);
		U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C* L_6 = V_0;
		return (RuntimeObject*)L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReverseIteratorU3Ed__79_1_System_Collections_IEnumerable_GetEnumerator_m0E458C7FA95A7FBFF906D13D55ED5AE46E8E8406_gshared (U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (U3CReverseIteratorU3Ed__79_1_t654E1731541179CF0738EB017E50AF14F2F8561C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunAsyncU3Ed__3__ctor_mBD2013DDEE13E8E56E89012DB30FE8A34BC6277E_gshared (U3CRunAsyncU3Ed__3_t5B839BFC3E2D84F2867CFCAA02A67D7204365F1E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunAsyncU3Ed__3_MoveNext_mE10245378113BA0867CD6850FA59B6BD0A62E1F6_gshared (U3CRunAsyncU3Ed__3_t5B839BFC3E2D84F2867CFCAA02A67D7204365F1E* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_T_t0E8B183DC603CE05238EBD1E3B59B97877762274 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_T_t0E8B183DC603CE05238EBD1E3B59B97877762274);
	int32_t V_0 = 0;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CRunAsyncU3Ed__3_t5B839BFC3E2D84F2867CFCAA02A67D7204365F1E* V_3 = NULL;
	Exception_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_11;
	memset((&V_11), 0, sizeof(V_11));
	int32_t V_12 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 3> __active_exceptions;
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
			goto IL_01bf_1;
		}

IL_0019_1:
		{
			RuntimeObject* L_3 = (RuntimeObject*)__this->___src_2;
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
				goto IL_0049_2;
			}

IL_0047_2:
			{
			}

IL_0048_2:
			{
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
						goto IL_004f_3;
					}
				}
				{
					goto IL_0051_3;
				}

IL_004f_3:
				{
					goto IL_0096_3;
				}

IL_0051_3:
				{
					RuntimeObject* L_8 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
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
						goto IL_00b2_3;
					}
				}
				{
					int32_t L_12 = 0;
					V_0 = L_12;
					__this->___U3CU3E1__state_0 = L_12;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_13 = V_1;
					__this->___U3CU3Eu__1_11 = L_13;
					Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_11))->___task_0))->___source_0), (void*)NULL);
					V_3 = __this;
					AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_14 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
					((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CRunAsyncU3Ed__3_t5B839BFC3E2D84F2867CFCAA02A67D7204365F1E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_14, (&V_1), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
					goto IL_0265;
				}

IL_0096_3:
				{
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_15 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_11;
					V_1 = L_15;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_16 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_11);
					il2cpp_codegen_initobj(L_16, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
					int32_t L_17 = (-1);
					V_0 = L_17;
					__this->___U3CU3E1__state_0 = L_17;
				}

IL_00b2_3:
				{
					bool L_18;
					L_18 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_1), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
					__this->___U3CU3Es__5_9 = L_18;
					bool L_19 = (bool)__this->___U3CU3Es__5_9;
					__this->___U3ChasNextU3E5__4_8 = L_19;
					goto IL_0101_2;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00ce_2;
				}
				throw e;
			}

CATCH_00ce_2:
			{
				{
					V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					Exception_t* L_20 = V_4;
					__this->___U3CexU3E5__6_10 = L_20;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__6_10), (void*)L_20);
					CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_21 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&__this->___cancellationToken_4);
					bool L_22;
					L_22 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_21, NULL);
					V_5 = L_22;
					bool L_23 = V_5;
					if (!L_23)
					{
						goto IL_00ed_2;
					}
				}
				{
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0152_2;
				}

IL_00ed_2:
				{
					RuntimeObject* L_24 = (RuntimeObject*)__this->___observer_3;
					Exception_t* L_25 = (Exception_t*)__this->___U3CexU3E5__6_10;
					NullCheck(L_24);
					InterfaceActionInvoker1< Exception_t* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_24, L_25);
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0152_2;
				}
			}

IL_0101_2:
			{
				bool L_26 = (bool)__this->___U3ChasNextU3E5__4_8;
				V_6 = L_26;
				bool L_27 = V_6;
				if (!L_27)
				{
					goto IL_0128_2;
				}
			}
			{
				RuntimeObject* L_28 = (RuntimeObject*)__this->___observer_3;
				RuntimeObject* L_29 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
				NullCheck(L_29);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_29, (Il2CppFullySharedGenericAny*)L_30);
				NullCheck(L_28);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_28, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10)) ? L_30: *(void**)L_30));
				goto IL_0137_2;
			}

IL_0128_2:
			{
				RuntimeObject* L_31 = (RuntimeObject*)__this->___observer_3;
				NullCheck(L_31);
				InterfaceActionInvoker0::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_31);
				goto IL_0152_2;
			}

IL_0137_2:
			{
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_32 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&__this->___cancellationToken_4);
				bool L_33;
				L_33 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_32, NULL);
				V_7 = (bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
				bool L_34 = V_7;
				if (L_34)
				{
					goto IL_0048_2;
				}
			}
			{
				goto IL_0167_1;
			}

IL_0152_2:
			{
				__this->___U3CU3Es__3_7 = 1;
				goto IL_0167_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_015b_1;
			}
			throw e;
		}

CATCH_015b_1:
		{
			V_8 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_35 = V_8;
			__this->___U3CU3Es__2_6 = L_35;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_6), (void*)L_35);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0167_1;
		}

IL_0167_1:
		{
			RuntimeObject* L_36 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_36) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_37 = V_9;
			if (!L_37)
			{
				goto IL_01e5_1;
			}
		}
		{
			RuntimeObject* L_38 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
			NullCheck((RuntimeObject*)L_38);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_39;
			L_39 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_38);
			V_11 = L_39;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_40;
			L_40 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_11), NULL);
			V_10 = L_40;
			bool L_41;
			L_41 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_41)
			{
				goto IL_01dc_1;
			}
		}
		{
			int32_t L_42 = 1;
			V_0 = L_42;
			__this->___U3CU3E1__state_0 = L_42;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_43 = V_10;
			__this->___U3CU3Eu__2_12 = L_43;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_12))->___task_0))->___source_0), (void*)NULL);
			V_3 = __this;
			AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_44 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CRunAsyncU3Ed__3_t5B839BFC3E2D84F2867CFCAA02A67D7204365F1E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_44, (&V_10), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
			goto IL_0265;
		}

IL_01bf_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_45 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_12;
			V_10 = L_45;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_46 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_12);
			il2cpp_codegen_initobj(L_46, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_47 = (-1);
			V_0 = L_47;
			__this->___U3CU3E1__state_0 = L_47;
		}

IL_01dc_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_01e5_1:
		{
			RuntimeObject* L_48 = (RuntimeObject*)__this->___U3CU3Es__2_6;
			V_8 = L_48;
			RuntimeObject* L_49 = V_8;
			if (!L_49)
			{
				goto IL_020f_1;
			}
		}
		{
			RuntimeObject* L_50 = V_8;
			V_4 = ((Exception_t*)IsInstClass((RuntimeObject*)L_50, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_51 = V_4;
			if (L_51)
			{
				goto IL_0202_1;
			}
		}
		{
			RuntimeObject* L_52 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_52, method);
		}

IL_0202_1:
		{
			Exception_t* L_53 = V_4;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_54;
			L_54 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_53, NULL);
			NullCheck(L_54);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_54, NULL);
		}

IL_020f_1:
		{
			int32_t L_55 = (int32_t)__this->___U3CU3Es__3_7;
			V_12 = L_55;
			int32_t L_56 = V_12;
			if ((((int32_t)L_56) == ((int32_t)1)))
			{
				goto IL_021e_1;
			}
		}
		{
			goto IL_0220_1;
		}

IL_021e_1:
		{
			goto IL_024a;
		}

IL_0220_1:
		{
			__this->___U3CU3Es__2_6 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_6), (void*)NULL);
			goto IL_024a;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0229;
		}
		throw e;
	}

CATCH_0229:
	{
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_5), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_57 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_58 = V_4;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(L_57, L_58, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0265;
	}

IL_024a:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_5), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_59 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(L_59, NULL);
	}

IL_0265:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunAsyncU3Ed__3_SetStateMachine_m47ACAE03DCA0ACC138AA99449504BE418353EE10_gshared (U3CRunAsyncU3Ed__3_t5B839BFC3E2D84F2867CFCAA02A67D7204365F1E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunOnThreadPoolU3Ed__89_1__ctor_m07FD9783D596A3183BD13618ACF096B92A9A7A98_gshared (U3CRunOnThreadPoolU3Ed__89_1_t72765B5962939E5FAB63A136AD9E79A6F460B2DC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunOnThreadPoolU3Ed__89_1_MoveNext_m3C7E3E6FDC7CEE17B7EC24B26EE7588981D8C6CF_gshared (U3CRunOnThreadPoolU3Ed__89_1_t72765B5962939E5FAB63A136AD9E79A6F460B2DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t5947B7381A4FEE15D8D595ECFE9CAFB92B9DB01D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T_t5947B7381A4FEE15D8D595ECFE9CAFB92B9DB01D);
	const Il2CppFullySharedGenericAny L_31 = L_13;
	const Il2CppFullySharedGenericAny L_33 = L_13;
	const Il2CppFullySharedGenericAny L_35 = L_13;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t5947B7381A4FEE15D8D595ECFE9CAFB92B9DB01D);
	memset(V_1, 0, SizeOf_T_t5947B7381A4FEE15D8D595ECFE9CAFB92B9DB01D);
	Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	SwitchToThreadPoolAwaitable_t5608C9A301A9B88DA3F77CB7E2AB2082321CB053 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CRunOnThreadPoolU3Ed__89_1_t72765B5962939E5FAB63A136AD9E79A6F460B2DC* V_4 = NULL;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220 V_7;
	memset((&V_7), 0, sizeof(V_7));
	YieldAwaitable_t8A3F912BCBF6C4BB5599E92BA0159168B4E14B3A V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t* V_9 = NULL;
	int32_t V_10 = 0;
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
			goto IL_0065_1;
		}

IL_0014_1:
		{
			goto IL_011f_1;
		}

IL_0019_1:
		{
			CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)))), NULL);
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			SwitchToThreadPoolAwaitable_t5608C9A301A9B88DA3F77CB7E2AB2082321CB053 L_3;
			L_3 = UniTask_SwitchToThreadPool_m4A79CBAD5A44C5037CD0A366CA801875F5206010(NULL);
			V_3 = L_3;
			Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9 L_4;
			L_4 = SwitchToThreadPoolAwaitable_GetAwaiter_m8720CC348C2B3A1A6CF1317042436D3F8307BD29((&V_3), NULL);
			V_2 = L_4;
			bool L_5;
			L_5 = Awaiter_get_IsCompleted_mC1677DC7707E92D236DF2BA1144FFABF6E45D92E((&V_2), NULL);
			if (L_5)
			{
				goto IL_0081_1;
			}
		}
		{
			int32_t L_6 = 0;
			V_0 = L_6;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_6);
			Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9 L_7 = V_2;
			il2cpp_codegen_write_instance_field_data<Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_7);
			V_4 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9*, U3CRunOnThreadPoolU3Ed__89_1_t72765B5962939E5FAB63A136AD9E79A6F460B2DC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 2));
			goto IL_01e8;
		}

IL_0065_1:
		{
			Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9 L_8 = *(Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_2 = L_8;
			il2cpp_codegen_initobj((((Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8)))), sizeof(Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9));
			int32_t L_9 = (-1);
			V_0 = L_9;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_9);
		}

IL_0081_1:
		{
			Awaiter_GetResult_mF089C80E7D6C1B3FFA735B7F5B28098339127021((&V_2), NULL);
			CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)))), NULL);
			bool L_10 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
			V_5 = L_10;
			bool L_11 = V_5;
			if (!L_11)
			{
				goto IL_01a8_1;
			}
		}
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), NULL);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), 0);
		}
		try
		{
			{
				Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_12 = *(Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
				NullCheck(L_12);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_12, (Il2CppFullySharedGenericAny*)L_13);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_13, SizeOf_T_t5947B7381A4FEE15D8D595ECFE9CAFB92B9DB01D);
				goto IL_00c7_2;
			}

IL_00c7_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), 1);
				goto IL_00dc_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00d0_1;
			}
			throw e;
		}

CATCH_00d0_1:
		{
			V_6 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_14 = V_6;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_14);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00dc_1;
		}

IL_00dc_1:
		{
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			YieldAwaitable_t8A3F912BCBF6C4BB5599E92BA0159168B4E14B3A L_15;
			L_15 = UniTask_Yield_m3362988BC281D8FBE6DE9D42C3123214920954DE(NULL);
			V_8 = L_15;
			Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220 L_16;
			L_16 = YieldAwaitable_GetAwaiter_m56B2A4754DC798098A8ABD5DE2E6780BCEB64C7C((&V_8), NULL);
			V_7 = L_16;
			bool L_17;
			L_17 = Awaiter_get_IsCompleted_m380AD66439FAC48688A6348C575A8122F672D61A((&V_7), NULL);
			if (L_17)
			{
				goto IL_013c_1;
			}
		}
		{
			int32_t L_18 = 1;
			V_0 = L_18;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_18);
			Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220 L_19 = V_7;
			il2cpp_codegen_write_instance_field_data<Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_19);
			V_4 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220*, U3CRunOnThreadPoolU3Ed__89_1_t72765B5962939E5FAB63A136AD9E79A6F460B2DC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
			goto IL_01e8;
		}

IL_011f_1:
		{
			Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220 L_20 = *(Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
			V_7 = L_20;
			il2cpp_codegen_initobj((((Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), sizeof(Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220));
			int32_t L_21 = (-1);
			V_0 = L_21;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_21);
		}

IL_013c_1:
		{
			Awaiter_GetResult_m65B26AEE969C14E1A7010BCDF845982D6EE1A0AB((&V_7), NULL);
			CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)))), NULL);
			RuntimeObject* L_22 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
			V_6 = L_22;
			RuntimeObject* L_23 = V_6;
			if (!L_23)
			{
				goto IL_017a_1;
			}
		}
		{
			RuntimeObject* L_24 = V_6;
			V_9 = ((Exception_t*)IsInstClass((RuntimeObject*)L_24, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_25 = V_9;
			if (L_25)
			{
				goto IL_016d_1;
			}
		}
		{
			RuntimeObject* L_26 = V_6;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, method);
		}

IL_016d_1:
		{
			Exception_t* L_27 = V_9;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_28;
			L_28 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_27, NULL);
			NullCheck(L_28);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_28, NULL);
		}

IL_017a_1:
		{
			int32_t L_29 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_10 = L_29;
			int32_t L_30 = V_10;
			if ((((int32_t)L_30) == ((int32_t)1)))
			{
				goto IL_0189_1;
			}
		}
		{
			goto IL_0192_1;
		}

IL_0189_1:
		{
			il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)), SizeOf_T_t5947B7381A4FEE15D8D595ECFE9CAFB92B9DB01D);
			il2cpp_codegen_memcpy(V_1, L_31, SizeOf_T_t5947B7381A4FEE15D8D595ECFE9CAFB92B9DB01D);
			goto IL_01d3;
		}

IL_0192_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), SizeOf_T_t5947B7381A4FEE15D8D595ECFE9CAFB92B9DB01D);
			goto IL_01b7_1;
		}

IL_01a8_1:
		{
			Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_32 = *(Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			NullCheck(L_32);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_32, (Il2CppFullySharedGenericAny*)L_33);
			il2cpp_codegen_memcpy(V_1, L_33, SizeOf_T_t5947B7381A4FEE15D8D595ECFE9CAFB92B9DB01D);
			goto IL_01d3;
		}

IL_01b7_1:
		{
			goto IL_01d3;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01b9;
		}
		throw e;
	}

CATCH_01b9:
	{
		V_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		Exception_t* L_34 = V_9;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01e8;
	}

IL_01d3:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_memcpy(L_35, V_1, SizeOf_T_t5947B7381A4FEE15D8D595ECFE9CAFB92B9DB01D);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_35: *(void**)L_35));
	}

IL_01e8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunOnThreadPoolU3Ed__89_1_SetStateMachine_m62A329409221E2AF91E751475E76E45D1C088C8F_gshared (U3CRunOnThreadPoolU3Ed__89_1_t72765B5962939E5FAB63A136AD9E79A6F460B2DC* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunOnThreadPoolU3Ed__90_1__ctor_m240F936DF4749A090CADA2C4565BDBB08132F712_gshared (U3CRunOnThreadPoolU3Ed__90_1_t7EB4F2D15E84FD61047D95029483D1972E37A047* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunOnThreadPoolU3Ed__90_1_MoveNext_mB93CFF792DDC71E21D13843EA1A12338CE84C96D_gshared (U3CRunOnThreadPoolU3Ed__90_1_t7EB4F2D15E84FD61047D95029483D1972E37A047* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tC7715090D37241DFB4FCE25E2341F9C0FE638FDC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const uint32_t SizeOf_Awaiter_t6B7615AFC14F71240EAF8754BE673CEED172B4F0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const uint32_t SizeOf_UniTask_1_t0383D14AA0635FED241D036C6E09E5F6F495C1A6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T_tC7715090D37241DFB4FCE25E2341F9C0FE638FDC);
	const Il2CppFullySharedGenericAny L_39 = L_20;
	const Il2CppFullySharedGenericAny L_48 = L_20;
	const Il2CppFullySharedGenericAny L_52 = L_20;
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T_tC7715090D37241DFB4FCE25E2341F9C0FE638FDC);
	const Il2CppFullySharedGenericAny L_49 = L_21;
	const Il2CppFullySharedGenericAny L_50 = alloca(SizeOf_T_tC7715090D37241DFB4FCE25E2341F9C0FE638FDC);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_14 = alloca(SizeOf_Awaiter_t6B7615AFC14F71240EAF8754BE673CEED172B4F0);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_17 = L_14;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_18 = L_14;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_42 = L_14;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_45 = L_14;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_46 = L_14;
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_13 = alloca(SizeOf_UniTask_1_t0383D14AA0635FED241D036C6E09E5F6F495C1A6);
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_41 = L_13;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_tC7715090D37241DFB4FCE25E2341F9C0FE638FDC);
	memset(V_1, 0, SizeOf_T_tC7715090D37241DFB4FCE25E2341F9C0FE638FDC);
	Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	SwitchToThreadPoolAwaitable_t5608C9A301A9B88DA3F77CB7E2AB2082321CB053 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CRunOnThreadPoolU3Ed__90_1_t7EB4F2D15E84FD61047D95029483D1972E37A047* V_4 = NULL;
	bool V_5 = false;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_6 = alloca(SizeOf_Awaiter_t6B7615AFC14F71240EAF8754BE673CEED172B4F0);
	memset(V_6, 0, SizeOf_Awaiter_t6B7615AFC14F71240EAF8754BE673CEED172B4F0);
	UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 V_7 = alloca(SizeOf_UniTask_1_t0383D14AA0635FED241D036C6E09E5F6F495C1A6);
	memset(V_7, 0, SizeOf_UniTask_1_t0383D14AA0635FED241D036C6E09E5F6F495C1A6);
	RuntimeObject* V_8 = NULL;
	Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220 V_9;
	memset((&V_9), 0, sizeof(V_9));
	YieldAwaitable_t8A3F912BCBF6C4BB5599E92BA0159168B4E14B3A V_10;
	memset((&V_10), 0, sizeof(V_10));
	Exception_t* V_11 = NULL;
	int32_t V_12 = 0;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_13 = alloca(SizeOf_Awaiter_t6B7615AFC14F71240EAF8754BE673CEED172B4F0);
	memset(V_13, 0, SizeOf_Awaiter_t6B7615AFC14F71240EAF8754BE673CEED172B4F0);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_001f_1;
				}
				case 1:
				{
					goto IL_0021_1;
				}
				case 2:
				{
					goto IL_0026_1;
				}
				case 3:
				{
					goto IL_002b_1;
				}
			}
		}
		{
			goto IL_0030_1;
		}

IL_001f_1:
		{
			goto IL_007c_1;
		}

IL_0021_1:
		{
			goto IL_00ca_1;
		}

IL_0026_1:
		{
			goto IL_01b8_1;
		}

IL_002b_1:
		{
			goto IL_0290_1;
		}

IL_0030_1:
		{
			CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)))), NULL);
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			SwitchToThreadPoolAwaitable_t5608C9A301A9B88DA3F77CB7E2AB2082321CB053 L_2;
			L_2 = UniTask_SwitchToThreadPool_m4A79CBAD5A44C5037CD0A366CA801875F5206010(NULL);
			V_3 = L_2;
			Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9 L_3;
			L_3 = SwitchToThreadPoolAwaitable_GetAwaiter_m8720CC348C2B3A1A6CF1317042436D3F8307BD29((&V_3), NULL);
			V_2 = L_3;
			bool L_4;
			L_4 = Awaiter_get_IsCompleted_mC1677DC7707E92D236DF2BA1144FFABF6E45D92E((&V_2), NULL);
			if (L_4)
			{
				goto IL_0098_1;
			}
		}
		{
			int32_t L_5 = 0;
			V_0 = L_5;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_5);
			Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9 L_6 = V_2;
			il2cpp_codegen_write_instance_field_data<Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_6);
			V_4 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9*, U3CRunOnThreadPoolU3Ed__90_1_t7EB4F2D15E84FD61047D95029483D1972E37A047**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 2));
			goto IL_0318;
		}

IL_007c_1:
		{
			Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9 L_7 = *(Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
			V_2 = L_7;
			il2cpp_codegen_initobj((((Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)))), sizeof(Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9));
			int32_t L_8 = (-1);
			V_0 = L_8;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_8);
		}

IL_0098_1:
		{
			Awaiter_GetResult_mF089C80E7D6C1B3FFA735B7F5B28098339127021((&V_2), NULL);
			CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)))), NULL);
			bool L_9 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
			V_5 = L_9;
			bool L_10 = V_5;
			if (!L_10)
			{
				goto IL_0247_1;
			}
		}
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), NULL);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), 0);
		}

IL_00ca_1:
		{
		}
		try
		{
			{
				int32_t L_11 = V_0;
				if ((((int32_t)L_11) == ((int32_t)1)))
				{
					goto IL_00d1_2;
				}
			}
			{
				goto IL_00d3_2;
			}

IL_00d1_2:
			{
				goto IL_011c_2;
			}

IL_00d3_2:
			{
				Func_1_tBAE452E06E04175D6A1F37BAA4412688F5DBD769* L_12 = *(Func_1_tBAE452E06E04175D6A1F37BAA4412688F5DBD769**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
				NullCheck(L_12);
				InvokerActionInvoker1< UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_12, (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_13);
				il2cpp_codegen_memcpy(V_7, L_13, SizeOf_UniTask_1_t0383D14AA0635FED241D036C6E09E5F6F495C1A6);
				InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)V_7, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_14);
				il2cpp_codegen_memcpy(V_6, L_14, SizeOf_Awaiter_t6B7615AFC14F71240EAF8754BE673CEED172B4F0);
				bool L_15;
				L_15 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_6, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				if (L_15)
				{
					goto IL_0139_2;
				}
			}
			{
				int32_t L_16 = 1;
				V_0 = L_16;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_16);
				il2cpp_codegen_memcpy(L_17, V_6, SizeOf_Awaiter_t6B7615AFC14F71240EAF8754BE673CEED172B4F0);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_17, SizeOf_Awaiter_t6B7615AFC14F71240EAF8754BE673CEED172B4F0);
				V_4 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CRunOnThreadPoolU3Ed__90_1_t7EB4F2D15E84FD61047D95029483D1972E37A047**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_6, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				goto IL_0318;
			}

IL_011c_2:
			{
				il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_Awaiter_t6B7615AFC14F71240EAF8754BE673CEED172B4F0);
				il2cpp_codegen_memcpy(V_6, L_18, SizeOf_Awaiter_t6B7615AFC14F71240EAF8754BE673CEED172B4F0);
				il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)))), SizeOf_Awaiter_t6B7615AFC14F71240EAF8754BE673CEED172B4F0);
				int32_t L_19 = (-1);
				V_0 = L_19;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_19);
			}

IL_0139_2:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_6, (Il2CppFullySharedGenericAny*)L_20);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_20, SizeOf_T_tC7715090D37241DFB4FCE25E2341F9C0FE638FDC);
				il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8)), SizeOf_T_tC7715090D37241DFB4FCE25E2341F9C0FE638FDC);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_21, SizeOf_T_tC7715090D37241DFB4FCE25E2341F9C0FE638FDC);
				goto IL_0154_2;
			}

IL_0154_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), 1);
				goto IL_0169_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_015d_1;
			}
			throw e;
		}

CATCH_015d_1:
		{
			V_8 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_22 = V_8;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_22);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0169_1;
		}

IL_0169_1:
		{
			CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)))), NULL);
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			YieldAwaitable_t8A3F912BCBF6C4BB5599E92BA0159168B4E14B3A L_23;
			L_23 = UniTask_Yield_m3362988BC281D8FBE6DE9D42C3123214920954DE(NULL);
			V_10 = L_23;
			Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220 L_24;
			L_24 = YieldAwaitable_GetAwaiter_m56B2A4754DC798098A8ABD5DE2E6780BCEB64C7C((&V_10), NULL);
			V_9 = L_24;
			bool L_25;
			L_25 = Awaiter_get_IsCompleted_m380AD66439FAC48688A6348C575A8122F672D61A((&V_9), NULL);
			if (L_25)
			{
				goto IL_01d5_1;
			}
		}
		{
			int32_t L_26 = 2;
			V_0 = L_26;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_26);
			Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220 L_27 = V_9;
			il2cpp_codegen_write_instance_field_data<Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_27);
			V_4 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220*, U3CRunOnThreadPoolU3Ed__90_1_t7EB4F2D15E84FD61047D95029483D1972E37A047**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_9), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
			goto IL_0318;
		}

IL_01b8_1:
		{
			Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220 L_28 = *(Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
			V_9 = L_28;
			il2cpp_codegen_initobj((((Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))), sizeof(Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220));
			int32_t L_29 = (-1);
			V_0 = L_29;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_29);
		}

IL_01d5_1:
		{
			Awaiter_GetResult_m65B26AEE969C14E1A7010BCDF845982D6EE1A0AB((&V_9), NULL);
			CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)))), NULL);
			RuntimeObject* L_30 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
			V_8 = L_30;
			RuntimeObject* L_31 = V_8;
			if (!L_31)
			{
				goto IL_0213_1;
			}
		}
		{
			RuntimeObject* L_32 = V_8;
			V_11 = ((Exception_t*)IsInstClass((RuntimeObject*)L_32, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_33 = V_11;
			if (L_33)
			{
				goto IL_0206_1;
			}
		}
		{
			RuntimeObject* L_34 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, method);
		}

IL_0206_1:
		{
			Exception_t* L_35 = V_11;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_36;
			L_36 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_35, NULL);
			NullCheck(L_36);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_36, NULL);
		}

IL_0213_1:
		{
			int32_t L_37 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_12 = L_37;
			int32_t L_38 = V_12;
			if ((((int32_t)L_38) == ((int32_t)1)))
			{
				goto IL_0222_1;
			}
		}
		{
			goto IL_022e_1;
		}

IL_0222_1:
		{
			il2cpp_codegen_memcpy(L_39, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)), SizeOf_T_tC7715090D37241DFB4FCE25E2341F9C0FE638FDC);
			il2cpp_codegen_memcpy(V_1, L_39, SizeOf_T_tC7715090D37241DFB4FCE25E2341F9C0FE638FDC);
			goto IL_0303;
		}

IL_022e_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), SizeOf_T_tC7715090D37241DFB4FCE25E2341F9C0FE638FDC);
			goto IL_02e7_1;
		}

IL_0247_1:
		{
			Func_1_tBAE452E06E04175D6A1F37BAA4412688F5DBD769* L_40 = *(Func_1_tBAE452E06E04175D6A1F37BAA4412688F5DBD769**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			NullCheck(L_40);
			InvokerActionInvoker1< UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_40, (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_41);
			il2cpp_codegen_memcpy(V_7, L_41, SizeOf_UniTask_1_t0383D14AA0635FED241D036C6E09E5F6F495C1A6);
			InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)V_7, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_42);
			il2cpp_codegen_memcpy(V_13, L_42, SizeOf_Awaiter_t6B7615AFC14F71240EAF8754BE673CEED172B4F0);
			bool L_43;
			L_43 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_13, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			if (L_43)
			{
				goto IL_02ad_1;
			}
		}
		{
			int32_t L_44 = 3;
			V_0 = L_44;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_44);
			il2cpp_codegen_memcpy(L_45, V_13, SizeOf_Awaiter_t6B7615AFC14F71240EAF8754BE673CEED172B4F0);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_45, SizeOf_Awaiter_t6B7615AFC14F71240EAF8754BE673CEED172B4F0);
			V_4 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CRunOnThreadPoolU3Ed__90_1_t7EB4F2D15E84FD61047D95029483D1972E37A047**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_13, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
			goto IL_0318;
		}

IL_0290_1:
		{
			il2cpp_codegen_memcpy(L_46, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_Awaiter_t6B7615AFC14F71240EAF8754BE673CEED172B4F0);
			il2cpp_codegen_memcpy(V_13, L_46, SizeOf_Awaiter_t6B7615AFC14F71240EAF8754BE673CEED172B4F0);
			il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)))), SizeOf_Awaiter_t6B7615AFC14F71240EAF8754BE673CEED172B4F0);
			int32_t L_47 = (-1);
			V_0 = L_47;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_47);
		}

IL_02ad_1:
		{
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_13, (Il2CppFullySharedGenericAny*)L_48);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_48, SizeOf_T_tC7715090D37241DFB4FCE25E2341F9C0FE638FDC);
			il2cpp_codegen_memcpy(L_49, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_T_tC7715090D37241DFB4FCE25E2341F9C0FE638FDC);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_49, SizeOf_T_tC7715090D37241DFB4FCE25E2341F9C0FE638FDC);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))), SizeOf_T_tC7715090D37241DFB4FCE25E2341F9C0FE638FDC);
			CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)))), NULL);
			il2cpp_codegen_memcpy(L_50, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_T_tC7715090D37241DFB4FCE25E2341F9C0FE638FDC);
			il2cpp_codegen_memcpy(V_1, L_50, SizeOf_T_tC7715090D37241DFB4FCE25E2341F9C0FE638FDC);
			goto IL_0303;
		}

IL_02e7_1:
		{
			goto IL_0303;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02e9;
		}
		throw e;
	}

CATCH_02e9:
	{
		V_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		Exception_t* L_51 = V_11;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_51, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0318;
	}

IL_0303:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_memcpy(L_52, V_1, SizeOf_T_tC7715090D37241DFB4FCE25E2341F9C0FE638FDC);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? L_52: *(void**)L_52));
	}

IL_0318:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunOnThreadPoolU3Ed__90_1_SetStateMachine_mBB6AA5662E0F5C2A490E2EAF50A83F9C500C4378_gshared (U3CRunOnThreadPoolU3Ed__90_1_t7EB4F2D15E84FD61047D95029483D1972E37A047* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunOnThreadPoolU3Ed__91_1__ctor_m14A688ACE12B4261E3A7ACC77BD3A3254AD4E329_gshared (U3CRunOnThreadPoolU3Ed__91_1_tAC3FE628E6F8E52CCEAB24EDE183A13E38D45773* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunOnThreadPoolU3Ed__91_1_MoveNext_m6DB107F69E27298E9D99AAA771837C7C46965194_gshared (U3CRunOnThreadPoolU3Ed__91_1_tAC3FE628E6F8E52CCEAB24EDE183A13E38D45773* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t05847508F88911F6FC1A85CA800A2A097DEDC4A0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T_t05847508F88911F6FC1A85CA800A2A097DEDC4A0);
	const Il2CppFullySharedGenericAny L_32 = L_14;
	const Il2CppFullySharedGenericAny L_35 = L_14;
	const Il2CppFullySharedGenericAny L_37 = L_14;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t05847508F88911F6FC1A85CA800A2A097DEDC4A0);
	memset(V_1, 0, SizeOf_T_t05847508F88911F6FC1A85CA800A2A097DEDC4A0);
	Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	SwitchToThreadPoolAwaitable_t5608C9A301A9B88DA3F77CB7E2AB2082321CB053 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CRunOnThreadPoolU3Ed__91_1_tAC3FE628E6F8E52CCEAB24EDE183A13E38D45773* V_4 = NULL;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220 V_7;
	memset((&V_7), 0, sizeof(V_7));
	YieldAwaitable_t8A3F912BCBF6C4BB5599E92BA0159168B4E14B3A V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t* V_9 = NULL;
	int32_t V_10 = 0;
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
			goto IL_0065_1;
		}

IL_0014_1:
		{
			goto IL_0125_1;
		}

IL_0019_1:
		{
			CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), NULL);
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			SwitchToThreadPoolAwaitable_t5608C9A301A9B88DA3F77CB7E2AB2082321CB053 L_3;
			L_3 = UniTask_SwitchToThreadPool_m4A79CBAD5A44C5037CD0A366CA801875F5206010(NULL);
			V_3 = L_3;
			Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9 L_4;
			L_4 = SwitchToThreadPoolAwaitable_GetAwaiter_m8720CC348C2B3A1A6CF1317042436D3F8307BD29((&V_3), NULL);
			V_2 = L_4;
			bool L_5;
			L_5 = Awaiter_get_IsCompleted_mC1677DC7707E92D236DF2BA1144FFABF6E45D92E((&V_2), NULL);
			if (L_5)
			{
				goto IL_0081_1;
			}
		}
		{
			int32_t L_6 = 0;
			V_0 = L_6;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_6);
			Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9 L_7 = V_2;
			il2cpp_codegen_write_instance_field_data<Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_7);
			V_4 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9*, U3CRunOnThreadPoolU3Ed__91_1_tAC3FE628E6F8E52CCEAB24EDE183A13E38D45773**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 2));
			goto IL_01f4;
		}

IL_0065_1:
		{
			Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9 L_8 = *(Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
			V_2 = L_8;
			il2cpp_codegen_initobj((((Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), sizeof(Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9));
			int32_t L_9 = (-1);
			V_0 = L_9;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_9);
		}

IL_0081_1:
		{
			Awaiter_GetResult_mF089C80E7D6C1B3FFA735B7F5B28098339127021((&V_2), NULL);
			CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), NULL);
			bool L_10 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			V_5 = L_10;
			bool L_11 = V_5;
			if (!L_11)
			{
				goto IL_01ae_1;
			}
		}
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), NULL);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), 0);
		}
		try
		{
			{
				Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9* L_12 = *(Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
				RuntimeObject* L_13 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				NullCheck(L_12);
				InvokerActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_12, L_13, (Il2CppFullySharedGenericAny*)L_14);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_14, SizeOf_T_t05847508F88911F6FC1A85CA800A2A097DEDC4A0);
				goto IL_00cd_2;
			}

IL_00cd_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), 1);
				goto IL_00e2_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00d6_1;
			}
			throw e;
		}

CATCH_00d6_1:
		{
			V_6 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_15 = V_6;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_15);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00e2_1;
		}

IL_00e2_1:
		{
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			YieldAwaitable_t8A3F912BCBF6C4BB5599E92BA0159168B4E14B3A L_16;
			L_16 = UniTask_Yield_m3362988BC281D8FBE6DE9D42C3123214920954DE(NULL);
			V_8 = L_16;
			Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220 L_17;
			L_17 = YieldAwaitable_GetAwaiter_m56B2A4754DC798098A8ABD5DE2E6780BCEB64C7C((&V_8), NULL);
			V_7 = L_17;
			bool L_18;
			L_18 = Awaiter_get_IsCompleted_m380AD66439FAC48688A6348C575A8122F672D61A((&V_7), NULL);
			if (L_18)
			{
				goto IL_0142_1;
			}
		}
		{
			int32_t L_19 = 1;
			V_0 = L_19;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_19);
			Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220 L_20 = V_7;
			il2cpp_codegen_write_instance_field_data<Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_20);
			V_4 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220*, U3CRunOnThreadPoolU3Ed__91_1_tAC3FE628E6F8E52CCEAB24EDE183A13E38D45773**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
			goto IL_01f4;
		}

IL_0125_1:
		{
			Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220 L_21 = *(Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
			V_7 = L_21;
			il2cpp_codegen_initobj((((Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))), sizeof(Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220));
			int32_t L_22 = (-1);
			V_0 = L_22;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_22);
		}

IL_0142_1:
		{
			Awaiter_GetResult_m65B26AEE969C14E1A7010BCDF845982D6EE1A0AB((&V_7), NULL);
			CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), NULL);
			RuntimeObject* L_23 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_6 = L_23;
			RuntimeObject* L_24 = V_6;
			if (!L_24)
			{
				goto IL_0180_1;
			}
		}
		{
			RuntimeObject* L_25 = V_6;
			V_9 = ((Exception_t*)IsInstClass((RuntimeObject*)L_25, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_26 = V_9;
			if (L_26)
			{
				goto IL_0173_1;
			}
		}
		{
			RuntimeObject* L_27 = V_6;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, method);
		}

IL_0173_1:
		{
			Exception_t* L_28 = V_9;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_29;
			L_29 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_28, NULL);
			NullCheck(L_29);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_29, NULL);
		}

IL_0180_1:
		{
			int32_t L_30 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_10 = L_30;
			int32_t L_31 = V_10;
			if ((((int32_t)L_31) == ((int32_t)1)))
			{
				goto IL_018f_1;
			}
		}
		{
			goto IL_0198_1;
		}

IL_018f_1:
		{
			il2cpp_codegen_memcpy(L_32, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8)), SizeOf_T_t05847508F88911F6FC1A85CA800A2A097DEDC4A0);
			il2cpp_codegen_memcpy(V_1, L_32, SizeOf_T_t05847508F88911F6FC1A85CA800A2A097DEDC4A0);
			goto IL_01df;
		}

IL_0198_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8)))), SizeOf_T_t05847508F88911F6FC1A85CA800A2A097DEDC4A0);
			goto IL_01c3_1;
		}

IL_01ae_1:
		{
			Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9* L_33 = *(Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			RuntimeObject* L_34 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
			NullCheck(L_33);
			InvokerActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_33, L_34, (Il2CppFullySharedGenericAny*)L_35);
			il2cpp_codegen_memcpy(V_1, L_35, SizeOf_T_t05847508F88911F6FC1A85CA800A2A097DEDC4A0);
			goto IL_01df;
		}

IL_01c3_1:
		{
			goto IL_01df;
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
		V_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		Exception_t* L_36 = V_9;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01f4;
	}

IL_01df:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_memcpy(L_37, V_1, SizeOf_T_t05847508F88911F6FC1A85CA800A2A097DEDC4A0);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_37: *(void**)L_37));
	}

IL_01f4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunOnThreadPoolU3Ed__91_1_SetStateMachine_mD3E13AA7A7963631940D2A786EC6A21176432424_gshared (U3CRunOnThreadPoolU3Ed__91_1_tAC3FE628E6F8E52CCEAB24EDE183A13E38D45773* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunOnThreadPoolU3Ed__92_1__ctor_m4C3DC3B80295278A6580681B5AA2B4147F561CC8_gshared (U3CRunOnThreadPoolU3Ed__92_1_t810304869652B42464337C42611A3B2DB62200E6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunOnThreadPoolU3Ed__92_1_MoveNext_m541D29063429E3A9007BFE5C29C8302051E4C292_gshared (U3CRunOnThreadPoolU3Ed__92_1_t810304869652B42464337C42611A3B2DB62200E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tBA8AB83CA1C00CE968D73AB2420945E2B656B466 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13));
	const uint32_t SizeOf_Awaiter_t2E1DE9735A16506B75B963F577A3CF9FC6C8507C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const uint32_t SizeOf_UniTask_1_t4909F0D3010008FAB05360640A70F4E218E8B896 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T_tBA8AB83CA1C00CE968D73AB2420945E2B656B466);
	const Il2CppFullySharedGenericAny L_40 = L_21;
	const Il2CppFullySharedGenericAny L_50 = L_21;
	const Il2CppFullySharedGenericAny L_54 = L_21;
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T_tBA8AB83CA1C00CE968D73AB2420945E2B656B466);
	const Il2CppFullySharedGenericAny L_51 = L_22;
	const Il2CppFullySharedGenericAny L_52 = alloca(SizeOf_T_tBA8AB83CA1C00CE968D73AB2420945E2B656B466);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_15 = alloca(SizeOf_Awaiter_t2E1DE9735A16506B75B963F577A3CF9FC6C8507C);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_18 = L_15;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_19 = L_15;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_44 = L_15;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_47 = L_15;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_48 = L_15;
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_14 = alloca(SizeOf_UniTask_1_t4909F0D3010008FAB05360640A70F4E218E8B896);
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_43 = L_14;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_tBA8AB83CA1C00CE968D73AB2420945E2B656B466);
	memset(V_1, 0, SizeOf_T_tBA8AB83CA1C00CE968D73AB2420945E2B656B466);
	Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	SwitchToThreadPoolAwaitable_t5608C9A301A9B88DA3F77CB7E2AB2082321CB053 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CRunOnThreadPoolU3Ed__92_1_t810304869652B42464337C42611A3B2DB62200E6* V_4 = NULL;
	bool V_5 = false;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_6 = alloca(SizeOf_Awaiter_t2E1DE9735A16506B75B963F577A3CF9FC6C8507C);
	memset(V_6, 0, SizeOf_Awaiter_t2E1DE9735A16506B75B963F577A3CF9FC6C8507C);
	UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 V_7 = alloca(SizeOf_UniTask_1_t4909F0D3010008FAB05360640A70F4E218E8B896);
	memset(V_7, 0, SizeOf_UniTask_1_t4909F0D3010008FAB05360640A70F4E218E8B896);
	RuntimeObject* V_8 = NULL;
	Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220 V_9;
	memset((&V_9), 0, sizeof(V_9));
	YieldAwaitable_t8A3F912BCBF6C4BB5599E92BA0159168B4E14B3A V_10;
	memset((&V_10), 0, sizeof(V_10));
	Exception_t* V_11 = NULL;
	int32_t V_12 = 0;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_13 = alloca(SizeOf_Awaiter_t2E1DE9735A16506B75B963F577A3CF9FC6C8507C);
	memset(V_13, 0, SizeOf_Awaiter_t2E1DE9735A16506B75B963F577A3CF9FC6C8507C);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_001f_1;
				}
				case 1:
				{
					goto IL_0021_1;
				}
				case 2:
				{
					goto IL_0026_1;
				}
				case 3:
				{
					goto IL_002b_1;
				}
			}
		}
		{
			goto IL_0030_1;
		}

IL_001f_1:
		{
			goto IL_007c_1;
		}

IL_0021_1:
		{
			goto IL_00ca_1;
		}

IL_0026_1:
		{
			goto IL_01be_1;
		}

IL_002b_1:
		{
			goto IL_029c_1;
		}

IL_0030_1:
		{
			CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), NULL);
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			SwitchToThreadPoolAwaitable_t5608C9A301A9B88DA3F77CB7E2AB2082321CB053 L_2;
			L_2 = UniTask_SwitchToThreadPool_m4A79CBAD5A44C5037CD0A366CA801875F5206010(NULL);
			V_3 = L_2;
			Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9 L_3;
			L_3 = SwitchToThreadPoolAwaitable_GetAwaiter_m8720CC348C2B3A1A6CF1317042436D3F8307BD29((&V_3), NULL);
			V_2 = L_3;
			bool L_4;
			L_4 = Awaiter_get_IsCompleted_mC1677DC7707E92D236DF2BA1144FFABF6E45D92E((&V_2), NULL);
			if (L_4)
			{
				goto IL_0098_1;
			}
		}
		{
			int32_t L_5 = 0;
			V_0 = L_5;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_5);
			Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9 L_6 = V_2;
			il2cpp_codegen_write_instance_field_data<Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_6);
			V_4 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9*, U3CRunOnThreadPoolU3Ed__92_1_t810304869652B42464337C42611A3B2DB62200E6**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 2));
			goto IL_0324;
		}

IL_007c_1:
		{
			Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9 L_7 = *(Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12));
			V_2 = L_7;
			il2cpp_codegen_initobj((((Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)))), sizeof(Awaiter_t7CBE53F73E5BFF2DA17D963AB12D91B876024ED9));
			int32_t L_8 = (-1);
			V_0 = L_8;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_8);
		}

IL_0098_1:
		{
			Awaiter_GetResult_mF089C80E7D6C1B3FFA735B7F5B28098339127021((&V_2), NULL);
			CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), NULL);
			bool L_9 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
			V_5 = L_9;
			bool L_10 = V_5;
			if (!L_10)
			{
				goto IL_024d_1;
			}
		}
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), NULL);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), 0);
		}

IL_00ca_1:
		{
		}
		try
		{
			{
				int32_t L_11 = V_0;
				if ((((int32_t)L_11) == ((int32_t)1)))
				{
					goto IL_00d1_2;
				}
			}
			{
				goto IL_00d3_2;
			}

IL_00d1_2:
			{
				goto IL_0122_2;
			}

IL_00d3_2:
			{
				Func_2_t5AB862F6CD2613B5462A35DFA7DC7A5E066A7F46* L_12 = *(Func_2_t5AB862F6CD2613B5462A35DFA7DC7A5E066A7F46**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
				RuntimeObject* L_13 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				NullCheck(L_12);
				InvokerActionInvoker2< RuntimeObject*, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_12, L_13, (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_14);
				il2cpp_codegen_memcpy(V_7, L_14, SizeOf_UniTask_1_t4909F0D3010008FAB05360640A70F4E218E8B896);
				InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)V_7, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_15);
				il2cpp_codegen_memcpy(V_6, L_15, SizeOf_Awaiter_t2E1DE9735A16506B75B963F577A3CF9FC6C8507C);
				bool L_16;
				L_16 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_6, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				if (L_16)
				{
					goto IL_013f_2;
				}
			}
			{
				int32_t L_17 = 1;
				V_0 = L_17;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_17);
				il2cpp_codegen_memcpy(L_18, V_6, SizeOf_Awaiter_t2E1DE9735A16506B75B963F577A3CF9FC6C8507C);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_18, SizeOf_Awaiter_t2E1DE9735A16506B75B963F577A3CF9FC6C8507C);
				V_4 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CRunOnThreadPoolU3Ed__92_1_t810304869652B42464337C42611A3B2DB62200E6**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_6, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				goto IL_0324;
			}

IL_0122_2:
			{
				il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)), SizeOf_Awaiter_t2E1DE9735A16506B75B963F577A3CF9FC6C8507C);
				il2cpp_codegen_memcpy(V_6, L_19, SizeOf_Awaiter_t2E1DE9735A16506B75B963F577A3CF9FC6C8507C);
				il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))), SizeOf_Awaiter_t2E1DE9735A16506B75B963F577A3CF9FC6C8507C);
				int32_t L_20 = (-1);
				V_0 = L_20;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_20);
			}

IL_013f_2:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_6, (Il2CppFullySharedGenericAny*)L_21);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_21, SizeOf_T_tBA8AB83CA1C00CE968D73AB2420945E2B656B466);
				il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_T_tBA8AB83CA1C00CE968D73AB2420945E2B656B466);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_22, SizeOf_T_tBA8AB83CA1C00CE968D73AB2420945E2B656B466);
				goto IL_015a_2;
			}

IL_015a_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), 1);
				goto IL_016f_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0163_1;
			}
			throw e;
		}

CATCH_0163_1:
		{
			V_8 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_23 = V_8;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_23);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_016f_1;
		}

IL_016f_1:
		{
			CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), NULL);
			il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
			YieldAwaitable_t8A3F912BCBF6C4BB5599E92BA0159168B4E14B3A L_24;
			L_24 = UniTask_Yield_m3362988BC281D8FBE6DE9D42C3123214920954DE(NULL);
			V_10 = L_24;
			Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220 L_25;
			L_25 = YieldAwaitable_GetAwaiter_m56B2A4754DC798098A8ABD5DE2E6780BCEB64C7C((&V_10), NULL);
			V_9 = L_25;
			bool L_26;
			L_26 = Awaiter_get_IsCompleted_m380AD66439FAC48688A6348C575A8122F672D61A((&V_9), NULL);
			if (L_26)
			{
				goto IL_01db_1;
			}
		}
		{
			int32_t L_27 = 2;
			V_0 = L_27;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_27);
			Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220 L_28 = V_9;
			il2cpp_codegen_write_instance_field_data<Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), L_28);
			V_4 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220*, U3CRunOnThreadPoolU3Ed__92_1_t810304869652B42464337C42611A3B2DB62200E6**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_9), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 14));
			goto IL_0324;
		}

IL_01be_1:
		{
			Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220 L_29 = *(Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
			V_9 = L_29;
			il2cpp_codegen_initobj((((Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)))), sizeof(Awaiter_t8B500B68E8763F6139A8470A24AB065434A17220));
			int32_t L_30 = (-1);
			V_0 = L_30;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_30);
		}

IL_01db_1:
		{
			Awaiter_GetResult_m65B26AEE969C14E1A7010BCDF845982D6EE1A0AB((&V_9), NULL);
			CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), NULL);
			RuntimeObject* L_31 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_8 = L_31;
			RuntimeObject* L_32 = V_8;
			if (!L_32)
			{
				goto IL_0219_1;
			}
		}
		{
			RuntimeObject* L_33 = V_8;
			V_11 = ((Exception_t*)IsInstClass((RuntimeObject*)L_33, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_34 = V_11;
			if (L_34)
			{
				goto IL_020c_1;
			}
		}
		{
			RuntimeObject* L_35 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, method);
		}

IL_020c_1:
		{
			Exception_t* L_36 = V_11;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_37;
			L_37 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_36, NULL);
			NullCheck(L_37);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_37, NULL);
		}

IL_0219_1:
		{
			int32_t L_38 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_12 = L_38;
			int32_t L_39 = V_12;
			if ((((int32_t)L_39) == ((int32_t)1)))
			{
				goto IL_0228_1;
			}
		}
		{
			goto IL_0234_1;
		}

IL_0228_1:
		{
			il2cpp_codegen_memcpy(L_40, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8)), SizeOf_T_tBA8AB83CA1C00CE968D73AB2420945E2B656B466);
			il2cpp_codegen_memcpy(V_1, L_40, SizeOf_T_tBA8AB83CA1C00CE968D73AB2420945E2B656B466);
			goto IL_030f;
		}

IL_0234_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8)))), SizeOf_T_tBA8AB83CA1C00CE968D73AB2420945E2B656B466);
			goto IL_02f3_1;
		}

IL_024d_1:
		{
			Func_2_t5AB862F6CD2613B5462A35DFA7DC7A5E066A7F46* L_41 = *(Func_2_t5AB862F6CD2613B5462A35DFA7DC7A5E066A7F46**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			RuntimeObject* L_42 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
			NullCheck(L_41);
			InvokerActionInvoker2< RuntimeObject*, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_41, L_42, (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_43);
			il2cpp_codegen_memcpy(V_7, L_43, SizeOf_UniTask_1_t4909F0D3010008FAB05360640A70F4E218E8B896);
			InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)V_7, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_44);
			il2cpp_codegen_memcpy(V_13, L_44, SizeOf_Awaiter_t2E1DE9735A16506B75B963F577A3CF9FC6C8507C);
			bool L_45;
			L_45 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_13, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			if (L_45)
			{
				goto IL_02b9_1;
			}
		}
		{
			int32_t L_46 = 3;
			V_0 = L_46;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_46);
			il2cpp_codegen_memcpy(L_47, V_13, SizeOf_Awaiter_t2E1DE9735A16506B75B963F577A3CF9FC6C8507C);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_47, SizeOf_Awaiter_t2E1DE9735A16506B75B963F577A3CF9FC6C8507C);
			V_4 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CRunOnThreadPoolU3Ed__92_1_t810304869652B42464337C42611A3B2DB62200E6**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_13, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
			goto IL_0324;
		}

IL_029c_1:
		{
			il2cpp_codegen_memcpy(L_48, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)), SizeOf_Awaiter_t2E1DE9735A16506B75B963F577A3CF9FC6C8507C);
			il2cpp_codegen_memcpy(V_13, L_48, SizeOf_Awaiter_t2E1DE9735A16506B75B963F577A3CF9FC6C8507C);
			il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))), SizeOf_Awaiter_t2E1DE9735A16506B75B963F577A3CF9FC6C8507C);
			int32_t L_49 = (-1);
			V_0 = L_49;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_49);
		}

IL_02b9_1:
		{
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_13, (Il2CppFullySharedGenericAny*)L_50);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_50, SizeOf_T_tBA8AB83CA1C00CE968D73AB2420945E2B656B466);
			il2cpp_codegen_memcpy(L_51, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)), SizeOf_T_tBA8AB83CA1C00CE968D73AB2420945E2B656B466);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_51, SizeOf_T_tBA8AB83CA1C00CE968D73AB2420945E2B656B466);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)))), SizeOf_T_tBA8AB83CA1C00CE968D73AB2420945E2B656B466);
			CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), NULL);
			il2cpp_codegen_memcpy(L_52, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_T_tBA8AB83CA1C00CE968D73AB2420945E2B656B466);
			il2cpp_codegen_memcpy(V_1, L_52, SizeOf_T_tBA8AB83CA1C00CE968D73AB2420945E2B656B466);
			goto IL_030f;
		}

IL_02f3_1:
		{
			goto IL_030f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02f5;
		}
		throw e;
	}

CATCH_02f5:
	{
		V_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		Exception_t* L_53 = V_11;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_53, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0324;
	}

IL_030f:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_memcpy(L_54, V_1, SizeOf_T_tBA8AB83CA1C00CE968D73AB2420945E2B656B466);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 13)) ? L_54: *(void**)L_54));
	}

IL_0324:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunOnThreadPoolU3Ed__92_1_SetStateMachine_mB44BC5BAEE260A5F2DC387E4707A2614A0B17DFD_gshared (U3CRunOnThreadPoolU3Ed__92_1_t810304869652B42464337C42611A3B2DB62200E6* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunOtherU3Ed__17__ctor_m55FFA4BF53035BEB9454CD267BF93070D2133D89_gshared (U3CRunOtherU3Ed__17_tE1B9B0A63DB144D31786A5E60E0B430D8749B376* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunOtherU3Ed__17_MoveNext_mCA1163D7147552902566E57BB7DD99F13D3BF882_gshared (U3CRunOtherU3Ed__17_tE1B9B0A63DB144D31786A5E60E0B430D8749B376* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CRunOtherU3Ed__17_tE1B9B0A63DB144D31786A5E60E0B430D8749B376* V_2 = NULL;
	Exception_t* V_3 = NULL;
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
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_000f_1;
		}

IL_000e_1:
		{
		}

IL_000f_1:
		{
		}
		try
		{
			{
				int32_t L_2 = V_0;
				if (!L_2)
				{
					goto IL_0015_2;
				}
			}
			{
				goto IL_0017_2;
			}

IL_0015_2:
			{
				goto IL_0054_2;
			}

IL_0017_2:
			{
				UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_3 = (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270*)(&__this->___other_2);
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_4;
				L_4 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline(L_3, NULL);
				V_1 = L_4;
				bool L_5;
				L_5 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_1), NULL);
				if (L_5)
				{
					goto IL_0070_2;
				}
			}
			{
				int32_t L_6 = 0;
				V_0 = L_6;
				__this->___U3CU3E1__state_0 = L_6;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_7 = V_1;
				__this->___U3CU3Eu__1_5 = L_7;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_5))->___task_0))->___source_0), (void*)NULL);
				V_2 = __this;
				AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_8 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CRunOtherU3Ed__17_tE1B9B0A63DB144D31786A5E60E0B430D8749B376**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_8, (&V_1), (&V_2), il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				goto IL_00fb;
			}

IL_0054_2:
			{
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_9 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_5;
				V_1 = L_9;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_10 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_5);
				il2cpp_codegen_initobj(L_10, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
				int32_t L_11 = (-1);
				V_0 = L_11;
				__this->___U3CU3E1__state_0 = L_11;
			}

IL_0070_2:
			{
				Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_1), NULL);
				_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE* L_12 = (_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE*)__this->___U3CU3E4__this_3;
				NullCheck(L_12);
				il2cpp_codegen_write_instance_field_data<bool>(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),5), (bool)1);
				_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE* L_13 = (_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE*)__this->___U3CU3E4__this_3;
				NullCheck(L_13);
				UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_14 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_13)->___completionSource_0);
				bool L_15;
				L_15 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_14, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
				goto IL_00cd_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0099_1;
			}
			throw e;
		}

CATCH_0099_1:
		{
			V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			Exception_t* L_16 = V_3;
			__this->___U3CexU3E5__1_4 = L_16;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__1_4), (void*)L_16);
			_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE* L_17 = (_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE*)__this->___U3CU3E4__this_3;
			Exception_t* L_18 = (Exception_t*)__this->___U3CexU3E5__1_4;
			NullCheck(L_17);
			il2cpp_codegen_write_instance_field_data<Exception_t*>(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),6), L_18);
			_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE* L_19 = (_TakeUntil_t9EEFBDE892A8A6840950A514E7EEECC7109F65EE*)__this->___U3CU3E4__this_3;
			NullCheck(L_19);
			UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_20 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_19)->___completionSource_0);
			Exception_t* L_21 = (Exception_t*)__this->___U3CexU3E5__1_4;
			bool L_22;
			L_22 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_20, L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00cd_1;
		}

IL_00cd_1:
		{
			goto IL_00e7;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00cf;
		}
		throw e;
	}

CATCH_00cf:
	{
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_23 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_24 = V_3;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(L_23, L_24, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00fb;
	}

IL_00e7:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_25 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(L_25, NULL);
	}

IL_00fb:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunOtherU3Ed__17_SetStateMachine_mF00F8C6813FD0F2FD0DD0A59FD4FD17F809ECCD5_gshared (U3CRunOtherU3Ed__17_tE1B9B0A63DB144D31786A5E60E0B430D8749B376* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunOtherU3Ed__18__ctor_m4E4403A31D3B4A2D5F2CB6737AAA01738DF455D0_gshared (U3CRunOtherU3Ed__18_tC86AC8668EBD41238487481F68E22E133D175F56* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunOtherU3Ed__18_MoveNext_m04077835BD779B40722471A5013A9D461B191DC3_gshared (U3CRunOtherU3Ed__18_tC86AC8668EBD41238487481F68E22E133D175F56* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CRunOtherU3Ed__18_tC86AC8668EBD41238487481F68E22E133D175F56* V_2 = NULL;
	Exception_t* V_3 = NULL;
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
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_000f_1;
		}

IL_000e_1:
		{
		}

IL_000f_1:
		{
		}
		try
		{
			{
				int32_t L_2 = V_0;
				if (!L_2)
				{
					goto IL_0015_2;
				}
			}
			{
				goto IL_0017_2;
			}

IL_0015_2:
			{
				goto IL_0054_2;
			}

IL_0017_2:
			{
				UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_3 = (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270*)(&__this->___other_2);
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_4;
				L_4 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline(L_3, NULL);
				V_1 = L_4;
				bool L_5;
				L_5 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_1), NULL);
				if (L_5)
				{
					goto IL_0070_2;
				}
			}
			{
				int32_t L_6 = 0;
				V_0 = L_6;
				__this->___U3CU3E1__state_0 = L_6;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_7 = V_1;
				__this->___U3CU3Eu__1_5 = L_7;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_5))->___task_0))->___source_0), (void*)NULL);
				V_2 = __this;
				AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_8 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CRunOtherU3Ed__18_tC86AC8668EBD41238487481F68E22E133D175F56**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_8, (&V_1), (&V_2), il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				goto IL_00f5;
			}

IL_0054_2:
			{
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_9 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_5;
				V_1 = L_9;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_10 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_5);
				il2cpp_codegen_initobj(L_10, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
				int32_t L_11 = (-1);
				V_0 = L_11;
				__this->___U3CU3E1__state_0 = L_11;
			}

IL_0070_2:
			{
				Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_1), NULL);
				_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC* L_12 = (_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC*)__this->___U3CU3E4__this_3;
				NullCheck(L_12);
				il2cpp_codegen_write_instance_field_data<bool>(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),4), (bool)1);
				_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC* L_13 = (_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC*)__this->___U3CU3E4__this_3;
				NullCheck(L_13);
				((  void (*) (_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
				goto IL_00c7_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0093_1;
			}
			throw e;
		}

CATCH_0093_1:
		{
			V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			Exception_t* L_14 = V_3;
			__this->___U3CexU3E5__1_4 = L_14;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__1_4), (void*)L_14);
			_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC* L_15 = (_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC*)__this->___U3CU3E4__this_3;
			Exception_t* L_16 = (Exception_t*)__this->___U3CexU3E5__1_4;
			NullCheck(L_15);
			il2cpp_codegen_write_instance_field_data<Exception_t*>(L_15, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),9), L_16);
			_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC* L_17 = (_SkipUntil_tB553D6D5AEB4BE4AD6AB6B848E222E75715CC1EC*)__this->___U3CU3E4__this_3;
			NullCheck(L_17);
			UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_18 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_17)->___completionSource_0);
			Exception_t* L_19 = (Exception_t*)__this->___U3CexU3E5__1_4;
			bool L_20;
			L_20 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_18, L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00c7_1;
		}

IL_00c7_1:
		{
			goto IL_00e1;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c9;
		}
		throw e;
	}

CATCH_00c9:
	{
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_21 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_22 = V_3;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(L_21, L_22, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f5;
	}

IL_00e1:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_23 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(L_23, NULL);
	}

IL_00f5:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunOtherU3Ed__18_SetStateMachine_m89A218B15F6B8EBBAC4F8323CDDAFBD0345F5E68_gshared (U3CRunOtherU3Ed__18_tC86AC8668EBD41238487481F68E22E133D175F56* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunSecondAfterDisposeAsyncU3Ed__16__ctor_m98E6169097763FD1D6D070FDDF95B18706C15337_gshared (U3CRunSecondAfterDisposeAsyncU3Ed__16_t3146FA9FF7D2FE2BCA6486ADD678414836C13CD2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunSecondAfterDisposeAsyncU3Ed__16_MoveNext_mE12F4BC373C627E3697A733AA31B4C7CA761FF97_gshared (U3CRunSecondAfterDisposeAsyncU3Ed__16_t3146FA9FF7D2FE2BCA6486ADD678414836C13CD2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CRunSecondAfterDisposeAsyncU3Ed__16_t3146FA9FF7D2FE2BCA6486ADD678414836C13CD2* V_3 = NULL;
	Exception_t* V_4 = NULL;
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
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_000f_1;
		}

IL_000e_1:
		{
		}

IL_000f_1:
		{
		}
		try
		{
			{
				int32_t L_2 = V_0;
				if (!L_2)
				{
					goto IL_0015_2;
				}
			}
			{
				goto IL_0017_2;
			}

IL_0015_2:
			{
				goto IL_0061_2;
			}

IL_0017_2:
			{
				_Concat_t0A2CAD4BD9B714051180DBE5CD57CBFFDD185E4A* L_3 = (_Concat_t0A2CAD4BD9B714051180DBE5CD57CBFFDD185E4A*)__this->___U3CU3E4__this_2;
				RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),5));
				NullCheck((RuntimeObject*)L_4);
				UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_5;
				L_5 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				V_2 = L_5;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_6;
				L_6 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_2), NULL);
				V_1 = L_6;
				bool L_7;
				L_7 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_1), NULL);
				if (L_7)
				{
					goto IL_007d_2;
				}
			}
			{
				int32_t L_8 = 0;
				V_0 = L_8;
				__this->___U3CU3E1__state_0 = L_8;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_9 = V_1;
				__this->___U3CU3Eu__1_4 = L_9;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_4))->___task_0))->___source_0), (void*)NULL);
				V_3 = __this;
				AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_10 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CRunSecondAfterDisposeAsyncU3Ed__16_t3146FA9FF7D2FE2BCA6486ADD678414836C13CD2**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_10, (&V_1), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
				goto IL_0112;
			}

IL_0061_2:
			{
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_4;
				V_1 = L_11;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_12 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_4);
				il2cpp_codegen_initobj(L_12, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
				int32_t L_13 = (-1);
				V_0 = L_13;
				__this->___U3CU3E1__state_0 = L_13;
			}

IL_007d_2:
			{
				Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_1), NULL);
				_Concat_t0A2CAD4BD9B714051180DBE5CD57CBFFDD185E4A* L_14 = (_Concat_t0A2CAD4BD9B714051180DBE5CD57CBFFDD185E4A*)__this->___U3CU3E4__this_2;
				NullCheck(L_14);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_14, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),5), (RuntimeObject*)NULL);
				_Concat_t0A2CAD4BD9B714051180DBE5CD57CBFFDD185E4A* L_15 = (_Concat_t0A2CAD4BD9B714051180DBE5CD57CBFFDD185E4A*)__this->___U3CU3E4__this_2;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(L_15, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),6)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				_Concat_t0A2CAD4BD9B714051180DBE5CD57CBFFDD185E4A* L_16 = (_Concat_t0A2CAD4BD9B714051180DBE5CD57CBFFDD185E4A*)__this->___U3CU3E4__this_2;
				NullCheck(L_16);
				il2cpp_codegen_write_instance_field_data<int32_t>(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),4), (int32_t)1);
				goto IL_00d6_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00b1_1;
			}
			throw e;
		}

CATCH_00b1_1:
		{
			V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			Exception_t* L_17 = V_4;
			__this->___U3CexU3E5__1_3 = L_17;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__1_3), (void*)L_17);
			_Concat_t0A2CAD4BD9B714051180DBE5CD57CBFFDD185E4A* L_18 = (_Concat_t0A2CAD4BD9B714051180DBE5CD57CBFFDD185E4A*)__this->___U3CU3E4__this_2;
			NullCheck(L_18);
			UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_19 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_18)->___completionSource_0);
			Exception_t* L_20 = (Exception_t*)__this->___U3CexU3E5__1_3;
			bool L_21;
			L_21 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_19, L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00d6_1;
		}

IL_00d6_1:
		{
			_Concat_t0A2CAD4BD9B714051180DBE5CD57CBFFDD185E4A* L_22 = (_Concat_t0A2CAD4BD9B714051180DBE5CD57CBFFDD185E4A*)__this->___U3CU3E4__this_2;
			NullCheck(L_22);
			((  void (*) (_Concat_t0A2CAD4BD9B714051180DBE5CD57CBFFDD185E4A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
			goto IL_00fe;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e4;
		}
		throw e;
	}

CATCH_00e4:
	{
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_23 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_24 = V_4;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(L_23, L_24, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0112;
	}

IL_00fe:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_25 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(L_25, NULL);
	}

IL_0112:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunSecondAfterDisposeAsyncU3Ed__16_SetStateMachine_m7B3A3CE100A0E827852A1A76FFA8A3F6EADD5CD7_gshared (U3CRunSecondAfterDisposeAsyncU3Ed__16_t3146FA9FF7D2FE2BCA6486ADD678414836C13CD2* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunTaskU3Ed__5__ctor_m6890697C8749C12B203BEAB604787F5B913F1276_gshared (U3CRunTaskU3Ed__5_t14546FE6CF6894D3C16B9049DCDF0B8852EB7CB3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunTaskU3Ed__5_MoveNext_m85CC2DD20FA615698DED49CF1AAB72C4A8FF359E_gshared (U3CRunTaskU3Ed__5_t14546FE6CF6894D3C16B9049DCDF0B8852EB7CB3* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Awaiter_t6764CBAF20AA0E2C4CBB44CB7544262C9CE73E1F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const uint32_t SizeOf_T_t8E6CE67BE5320BE793E71FDF248C84AE5E9319C8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t8E6CE67BE5320BE793E71FDF248C84AE5E9319C8);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T_t8E6CE67BE5320BE793E71FDF248C84AE5E9319C8);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_5 = alloca(SizeOf_Awaiter_t6764CBAF20AA0E2C4CBB44CB7544262C9CE73E1F);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_8 = L_5;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_9 = L_5;
	int32_t V_0 = 0;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_1 = alloca(SizeOf_Awaiter_t6764CBAF20AA0E2C4CBB44CB7544262C9CE73E1F);
	memset(V_1, 0, SizeOf_Awaiter_t6764CBAF20AA0E2C4CBB44CB7544262C9CE73E1F);
	U3CRunTaskU3Ed__5_t14546FE6CF6894D3C16B9049DCDF0B8852EB7CB3* V_2 = NULL;
	Exception_t* V_3 = NULL;
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
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_000f_1;
		}

IL_000e_1:
		{
		}

IL_000f_1:
		{
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_00c8_1:
				{
					{
						int32_t L_2 = V_0;
						if ((((int32_t)L_2) >= ((int32_t)0)))
						{
							goto IL_00df_1;
						}
					}
					{
						AttachExternalCancellationSource_1_tBA53ECE7155BEAEB22C2CD681385691B130DFFA7* L_3 = *(AttachExternalCancellationSource_1_tBA53ECE7155BEAEB22C2CD681385691B130DFFA7**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
						CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1((((CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)il2cpp_codegen_get_instance_field_data_pointer(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),2)))), NULL);
					}

IL_00df_1:
					{
						return;
					}
				}
			});
			try
			{
				try
				{
					{
						int32_t L_4 = V_0;
						if (!L_4)
						{
							goto IL_0015_3;
						}
					}
					{
						goto IL_0017_3;
					}

IL_0015_3:
					{
						goto IL_0054_3;
					}

IL_0017_3:
					{
						InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), (((UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_5);
						il2cpp_codegen_memcpy(V_1, L_5, SizeOf_Awaiter_t6764CBAF20AA0E2C4CBB44CB7544262C9CE73E1F);
						bool L_6;
						L_6 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
						if (L_6)
						{
							goto IL_0070_3;
						}
					}
					{
						int32_t L_7 = 0;
						V_0 = L_7;
						il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_7);
						il2cpp_codegen_memcpy(L_8, V_1, SizeOf_Awaiter_t6764CBAF20AA0E2C4CBB44CB7544262C9CE73E1F);
						il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_8, SizeOf_Awaiter_t6764CBAF20AA0E2C4CBB44CB7544262C9CE73E1F);
						V_2 = __this;
						((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CRunTaskU3Ed__5_t14546FE6CF6894D3C16B9049DCDF0B8852EB7CB3**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1, (&V_2), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
						goto IL_010e;
					}

IL_0054_3:
					{
						il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)), SizeOf_Awaiter_t6764CBAF20AA0E2C4CBB44CB7544262C9CE73E1F);
						il2cpp_codegen_memcpy(V_1, L_9, SizeOf_Awaiter_t6764CBAF20AA0E2C4CBB44CB7544262C9CE73E1F);
						il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)))), SizeOf_Awaiter_t6764CBAF20AA0E2C4CBB44CB7544262C9CE73E1F);
						int32_t L_10 = (-1);
						V_0 = L_10;
						il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_10);
					}

IL_0070_3:
					{
						InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1, (Il2CppFullySharedGenericAny*)L_11);
						il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_11, SizeOf_T_t8E6CE67BE5320BE793E71FDF248C84AE5E9319C8);
						AttachExternalCancellationSource_1_tBA53ECE7155BEAEB22C2CD681385691B130DFFA7* L_12 = *(AttachExternalCancellationSource_1_tBA53ECE7155BEAEB22C2CD681385691B130DFFA7**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
						il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)), SizeOf_T_t8E6CE67BE5320BE793E71FDF248C84AE5E9319C8);
						bool L_14;
						L_14 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), (((UniTaskCompletionSourceCore_1_t146409427AB3F018819917FFA1FDC70FDB5C0BBF*)il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),3)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_13: *(void**)L_13));
						il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)))), SizeOf_T_t8E6CE67BE5320BE793E71FDF248C84AE5E9319C8);
						goto IL_00c6_2;
					}
				}
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_00a3_2;
					}
					throw e;
				}

CATCH_00a3_2:
				{
					V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					Exception_t* L_15 = V_3;
					il2cpp_codegen_write_instance_field_data<Exception_t*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_15);
					AttachExternalCancellationSource_1_tBA53ECE7155BEAEB22C2CD681385691B130DFFA7* L_16 = *(AttachExternalCancellationSource_1_tBA53ECE7155BEAEB22C2CD681385691B130DFFA7**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
					Exception_t* L_17 = *(Exception_t**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
					bool L_18;
					L_18 = ((  bool (*) (UniTaskCompletionSourceCore_1_t146409427AB3F018819917FFA1FDC70FDB5C0BBF*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((((UniTaskCompletionSourceCore_1_t146409427AB3F018819917FFA1FDC70FDB5C0BBF*)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),3)))), L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_00c6_2;
				}

IL_00c6_2:
				{
					goto IL_00e0_1;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_00e0_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e2;
		}
		throw e;
	}

CATCH_00e2:
	{
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		Exception_t* L_19 = V_3;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_19, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_010e;
	}

IL_00fa:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), NULL);
	}

IL_010e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunTaskU3Ed__5_SetStateMachine_m7134AB559799A9AEAC57BE66732EA90D8A95181F_gshared (U3CRunTaskU3Ed__5_t14546FE6CF6894D3C16B9049DCDF0B8852EB7CB3* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunTaskU3Ed__8__ctor_m86E9556E2E41275C3C54F3AC8CD9B1CBF619F572_gshared (U3CRunTaskU3Ed__8_tE3D845B2DFF239CCADC854E9A886AE33DE48C95C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunTaskU3Ed__8_MoveNext_m8C5396D90DC198E47A51FA1BB3A2792601A42EBA_gshared (U3CRunTaskU3Ed__8_tE3D845B2DFF239CCADC854E9A886AE33DE48C95C* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Awaiter_tC21AB7A23081FAA3C59943DBB98A5B124CD914BA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const uint32_t SizeOf_T_tD4C13B7CE9E9CF493FDD090AF18A4E3087B8CD30 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_tD4C13B7CE9E9CF493FDD090AF18A4E3087B8CD30);
	const Il2CppFullySharedGenericAny L_21 = L_11;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T_tD4C13B7CE9E9CF493FDD090AF18A4E3087B8CD30);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T_tD4C13B7CE9E9CF493FDD090AF18A4E3087B8CD30);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_5 = alloca(SizeOf_Awaiter_tC21AB7A23081FAA3C59943DBB98A5B124CD914BA);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_8 = L_5;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_9 = L_5;
	int32_t V_0 = 0;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_1 = alloca(SizeOf_Awaiter_tC21AB7A23081FAA3C59943DBB98A5B124CD914BA);
	memset(V_1, 0, SizeOf_Awaiter_tC21AB7A23081FAA3C59943DBB98A5B124CD914BA);
	U3CRunTaskU3Ed__8_tE3D845B2DFF239CCADC854E9A886AE33DE48C95C* V_2 = NULL;
	bool V_3 = false;
	Exception_t* V_4 = NULL;
	bool V_5 = false;
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
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_000f_1;
		}

IL_000e_1:
		{
		}

IL_000f_1:
		{
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_013c_1:
				{
					{
						int32_t L_2 = V_0;
						if ((((int32_t)L_2) >= ((int32_t)0)))
						{
							goto IL_014e_1;
						}
					}
					{
						ToCoroutineEnumerator_1_tF7712B7CF6F5EBE1FCA4B0CF74B0C4076BC1A40C* L_3 = *(ToCoroutineEnumerator_1_tF7712B7CF6F5EBE1FCA4B0CF74B0C4076BC1A40C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
						NullCheck(L_3);
						il2cpp_codegen_write_instance_field_data<bool>(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),0), (bool)1);
					}

IL_014e_1:
					{
						return;
					}
				}
			});
			try
			{
				try
				{
					{
						int32_t L_4 = V_0;
						if (!L_4)
						{
							goto IL_0015_3;
						}
					}
					{
						goto IL_0017_3;
					}

IL_0015_3:
					{
						goto IL_0054_3;
					}

IL_0017_3:
					{
						InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), (((UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_5);
						il2cpp_codegen_memcpy(V_1, L_5, SizeOf_Awaiter_tC21AB7A23081FAA3C59943DBB98A5B124CD914BA);
						bool L_6;
						L_6 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
						if (L_6)
						{
							goto IL_0070_3;
						}
					}
					{
						int32_t L_7 = 0;
						V_0 = L_7;
						il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_7);
						il2cpp_codegen_memcpy(L_8, V_1, SizeOf_Awaiter_tC21AB7A23081FAA3C59943DBB98A5B124CD914BA);
						il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_8, SizeOf_Awaiter_tC21AB7A23081FAA3C59943DBB98A5B124CD914BA);
						V_2 = __this;
						((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CRunTaskU3Ed__8_tE3D845B2DFF239CCADC854E9A886AE33DE48C95C**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1, (&V_2), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
						goto IL_017f;
					}

IL_0054_3:
					{
						il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)), SizeOf_Awaiter_tC21AB7A23081FAA3C59943DBB98A5B124CD914BA);
						il2cpp_codegen_memcpy(V_1, L_9, SizeOf_Awaiter_tC21AB7A23081FAA3C59943DBB98A5B124CD914BA);
						il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), SizeOf_Awaiter_tC21AB7A23081FAA3C59943DBB98A5B124CD914BA);
						int32_t L_10 = (-1);
						V_0 = L_10;
						il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_10);
					}

IL_0070_3:
					{
						InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1, (Il2CppFullySharedGenericAny*)L_11);
						il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_11, SizeOf_T_tD4C13B7CE9E9CF493FDD090AF18A4E3087B8CD30);
						il2cpp_codegen_memcpy(L_12, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)), SizeOf_T_tD4C13B7CE9E9CF493FDD090AF18A4E3087B8CD30);
						il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_12, SizeOf_T_tD4C13B7CE9E9CF493FDD090AF18A4E3087B8CD30);
						il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), SizeOf_T_tD4C13B7CE9E9CF493FDD090AF18A4E3087B8CD30);
						ToCoroutineEnumerator_1_tF7712B7CF6F5EBE1FCA4B0CF74B0C4076BC1A40C* L_13 = *(ToCoroutineEnumerator_1_tF7712B7CF6F5EBE1FCA4B0CF74B0C4076BC1A40C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
						il2cpp_codegen_memcpy(L_14, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)), SizeOf_T_tD4C13B7CE9E9CF493FDD090AF18A4E3087B8CD30);
						RuntimeObject* L_15 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), L_14);
						NullCheck(L_13);
						il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_13, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),5), L_15);
						ToCoroutineEnumerator_1_tF7712B7CF6F5EBE1FCA4B0CF74B0C4076BC1A40C* L_16 = *(ToCoroutineEnumerator_1_tF7712B7CF6F5EBE1FCA4B0CF74B0C4076BC1A40C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
						Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_17 = *(Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),1));
						V_3 = (bool)((!(((RuntimeObject*)(Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
						bool L_18 = V_3;
						if (!L_18)
						{
							goto IL_00d6_3;
						}
					}
					{
						ToCoroutineEnumerator_1_tF7712B7CF6F5EBE1FCA4B0CF74B0C4076BC1A40C* L_19 = *(ToCoroutineEnumerator_1_tF7712B7CF6F5EBE1FCA4B0CF74B0C4076BC1A40C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
						Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_20 = *(Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),1));
						il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)), SizeOf_T_tD4C13B7CE9E9CF493FDD090AF18A4E3087B8CD30);
						NullCheck(L_20);
						InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_21: *(void**)L_21));
					}

IL_00d6_3:
					{
						il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)))), SizeOf_T_tD4C13B7CE9E9CF493FDD090AF18A4E3087B8CD30);
						goto IL_013a_2;
					}
				}
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_00e5_2;
					}
					throw e;
				}

CATCH_00e5_2:
				{
					{
						V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
						Exception_t* L_22 = V_4;
						il2cpp_codegen_write_instance_field_data<Exception_t*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_22);
						ToCoroutineEnumerator_1_tF7712B7CF6F5EBE1FCA4B0CF74B0C4076BC1A40C* L_23 = *(ToCoroutineEnumerator_1_tF7712B7CF6F5EBE1FCA4B0CF74B0C4076BC1A40C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
						Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_24 = *(Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04**)il2cpp_codegen_get_instance_field_data_pointer(L_23, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),2));
						V_5 = (bool)((!(((RuntimeObject*)(Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*)L_24) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
						bool L_25 = V_5;
						if (!L_25)
						{
							goto IL_011f_2;
						}
					}
					{
						ToCoroutineEnumerator_1_tF7712B7CF6F5EBE1FCA4B0CF74B0C4076BC1A40C* L_26 = *(ToCoroutineEnumerator_1_tF7712B7CF6F5EBE1FCA4B0CF74B0C4076BC1A40C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
						Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_27 = *(Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04**)il2cpp_codegen_get_instance_field_data_pointer(L_26, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),2));
						Exception_t* L_28 = *(Exception_t**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
						NullCheck(L_27);
						Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(L_27, L_28, NULL);
						goto IL_0137_2;
					}

IL_011f_2:
					{
						ToCoroutineEnumerator_1_tF7712B7CF6F5EBE1FCA4B0CF74B0C4076BC1A40C* L_29 = *(ToCoroutineEnumerator_1_tF7712B7CF6F5EBE1FCA4B0CF74B0C4076BC1A40C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
						Exception_t* L_30 = *(Exception_t**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
						ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_31;
						L_31 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_30, NULL);
						NullCheck(L_29);
						il2cpp_codegen_write_instance_field_data<ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*>(L_29, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),6), L_31);
					}

IL_0137_2:
					{
						IL2CPP_POP_ACTIVE_EXCEPTION();
						goto IL_013a_2;
					}
				}

IL_013a_2:
				{
					goto IL_014f_1;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_014f_1:
		{
			goto IL_016b;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0151;
		}
		throw e;
	}

CATCH_0151:
	{
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		Exception_t* L_32 = V_4;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_32, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_017f;
	}

IL_016b:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), NULL);
	}

IL_017f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunTaskU3Ed__8_SetStateMachine_m327B206821E00BFF7155CBF3856441A369BE94E9_gshared (U3CRunTaskU3Ed__8_tE3D845B2DFF239CCADC854E9A886AE33DE48C95C* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunWriterTaskU3Ed__12__ctor_m9B6C603F20AC379643DA19F831AE3B48EEE35751_gshared (U3CRunWriterTaskU3Ed__12_tE67DCC848FDD6B0799DC7FA69399C28609DE3304* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunWriterTaskU3Ed__12_MoveNext_mE200A87800FE25EF2A2E0BEF4184217A5C545D99_gshared (U3CRunWriterTaskU3Ed__12_tE67DCC848FDD6B0799DC7FA69399C28609DE3304* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CRunWriterTaskU3Ed__12_tE67DCC848FDD6B0799DC7FA69399C28609DE3304* V_2 = NULL;
	Exception_t* V_3 = NULL;
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
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_000f_1;
		}

IL_000e_1:
		{
		}

IL_000f_1:
		{
		}
		try
		{
			{
				int32_t L_2 = V_0;
				if (!L_2)
				{
					goto IL_0015_2;
				}
			}
			{
				goto IL_0017_2;
			}

IL_0015_2:
			{
				goto IL_0054_2;
			}

IL_0017_2:
			{
				UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_3 = (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270*)(&__this->___task_2);
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_4;
				L_4 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline(L_3, NULL);
				V_1 = L_4;
				bool L_5;
				L_5 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_1), NULL);
				if (L_5)
				{
					goto IL_0070_2;
				}
			}
			{
				int32_t L_6 = 0;
				V_0 = L_6;
				__this->___U3CU3E1__state_0 = L_6;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_7 = V_1;
				__this->___U3CU3Eu__1_5 = L_7;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_5))->___task_0))->___source_0), (void*)NULL);
				V_2 = __this;
				AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_8 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CRunWriterTaskU3Ed__12_tE67DCC848FDD6B0799DC7FA69399C28609DE3304**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_8, (&V_1), (&V_2), il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				goto IL_0103;
			}

IL_0054_2:
			{
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_9 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_5;
				V_1 = L_9;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_10 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_5);
				il2cpp_codegen_initobj(L_10, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
				int32_t L_11 = (-1);
				V_0 = L_11;
				__this->___U3CU3E1__state_0 = L_11;
			}

IL_0070_2:
			{
				Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_1), NULL);
				goto IL_00af_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_007a_1;
			}
			throw e;
		}

CATCH_007a_1:
		{
			V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			Exception_t* L_12 = V_3;
			__this->___U3CexU3E5__1_4 = L_12;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CexU3E5__1_4), (void*)L_12);
			_Create_t4C4D84FCFA35408470CAC9E2371DE395A34192C7* L_13 = (_Create_t4C4D84FCFA35408470CAC9E2371DE395A34192C7*)__this->___U3CU3E4__this_3;
			VolatileWrite((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_13, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2)))), ((int32_t)-2));
			_Create_t4C4D84FCFA35408470CAC9E2371DE395A34192C7* L_14 = (_Create_t4C4D84FCFA35408470CAC9E2371DE395A34192C7*)__this->___U3CU3E4__this_3;
			NullCheck(L_14);
			UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_15 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_14)->___completionSource_0);
			Exception_t* L_16 = (Exception_t*)__this->___U3CexU3E5__1_4;
			bool L_17;
			L_17 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_15, L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00ef;
		}

IL_00af_1:
		{
			_Create_t4C4D84FCFA35408470CAC9E2371DE395A34192C7* L_18 = (_Create_t4C4D84FCFA35408470CAC9E2371DE395A34192C7*)__this->___U3CU3E4__this_3;
			VolatileWrite((((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_18, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2)))), ((int32_t)-2));
			_Create_t4C4D84FCFA35408470CAC9E2371DE395A34192C7* L_19 = (_Create_t4C4D84FCFA35408470CAC9E2371DE395A34192C7*)__this->___U3CU3E4__this_3;
			NullCheck(L_19);
			UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_20 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_19)->___completionSource_0);
			bool L_21;
			L_21 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_20, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
			goto IL_00ef;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d7;
		}
		throw e;
	}

CATCH_00d7:
	{
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_22 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_23 = V_3;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(L_22, L_23, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0103;
	}

IL_00ef:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_24 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&__this->___U3CU3Et__builder_1);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(L_24, NULL);
	}

IL_0103:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunWriterTaskU3Ed__12_SetStateMachine_mBBC53FE9E2F4F5D1F082AEA221BE5B0498E0EE68_gshared (U3CRunWriterTaskU3Ed__12_tE67DCC848FDD6B0799DC7FA69399C28609DE3304* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectIteratorU3Ed__5_2__ctor_m0949A0EEB635F1AE3A8B5ACA1FBC85172EEC4367_gshared (U3CSelectIteratorU3Ed__5_2_tD4CDC97B158D0A35AADD31C1B82919CD898D43B0* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectIteratorU3Ed__5_2_System_IDisposable_Dispose_m396EA9BF2CAA3F14B5ABD8696AAADA8D68B1DBAD_gshared (U3CSelectIteratorU3Ed__5_2_tD4CDC97B158D0A35AADD31C1B82919CD898D43B0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{
				((  void (*) (U3CSelectIteratorU3Ed__5_2_tD4CDC97B158D0A35AADD31C1B82919CD898D43B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				return;
			}
		});
		try
		{
			goto IL_001a;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSelectIteratorU3Ed__5_2_MoveNext_m68CBE630E4A4430318F09415A8F217E3C13B8662_gshared (U3CSelectIteratorU3Ed__5_2_tD4CDC97B158D0A35AADD31C1B82919CD898D43B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tFDE369569D6FCC2EE12A04AE3FBD852F7F67C3C8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const uint32_t SizeOf_TResult_t71F6FAB18049B13B73F1EB00C7C2ADD361C140C0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TSource_tFDE369569D6FCC2EE12A04AE3FBD852F7F67C3C8);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tFDE369569D6FCC2EE12A04AE3FBD852F7F67C3C8);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TResult_t71F6FAB18049B13B73F1EB00C7C2ADD361C140C0);
	bool V_0 = false;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TSource_tFDE369569D6FCC2EE12A04AE3FBD852F7F67C3C8);
	memset(V_2, 0, SizeOf_TSource_tFDE369569D6FCC2EE12A04AE3FBD852F7F67C3C8);
	int32_t V_3 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00a3:
			{
				((  void (*) (U3CSelectIteratorU3Ed__5_2_tD4CDC97B158D0A35AADD31C1B82919CD898D43B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				return;
			}
		});
		try
		{
			{
				int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0015_1;
				}
			}
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_007d_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00aa;
			}

IL_0015_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (-1));
				RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				NullCheck(L_3);
				RuntimeObject* L_4;
				L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_4);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
				goto IL_0085_1;
			}

IL_003e_1:
			{
				RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
				NullCheck(L_5);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_5, (Il2CppFullySharedGenericAny*)L_6);
				il2cpp_codegen_memcpy(V_2, L_6, SizeOf_TSource_tFDE369569D6FCC2EE12A04AE3FBD852F7F67C3C8);
				int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				V_3 = L_7;
				int32_t L_8 = V_3;
				if (((int64_t)L_8 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_8 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), ((int32_t)il2cpp_codegen_add(L_8, 1)));
				Func_3_t2413D1285C5A0990717706292249644F402CA43E* L_9 = *(Func_3_t2413D1285C5A0990717706292249644F402CA43E**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				il2cpp_codegen_memcpy(L_10, V_2, SizeOf_TSource_tFDE369569D6FCC2EE12A04AE3FBD852F7F67C3C8);
				int32_t L_11 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck(L_9);
				InvokerActionInvoker3< Il2CppFullySharedGenericAny, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10), L_11, (Il2CppFullySharedGenericAny*)L_12);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_12, SizeOf_TResult_t71F6FAB18049B13B73F1EB00C7C2ADD361C140C0);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
				V_0 = (bool)1;
				goto IL_00aa;
			}

IL_007d_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
			}

IL_0085_1:
			{
				RuntimeObject* L_13 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
				NullCheck((RuntimeObject*)L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
				if (L_14)
				{
					goto IL_003e_1;
				}
			}
			{
				((  void (*) (U3CSelectIteratorU3Ed__5_2_tD4CDC97B158D0A35AADD31C1B82919CD898D43B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), (RuntimeObject*)NULL);
				V_0 = (bool)0;
				goto IL_00aa;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00aa:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectIteratorU3Ed__5_2_U3CU3Em__Finally1_m9E8CB76A05A71856D20379D3BD752F884FA22DFB_gshared (U3CSelectIteratorU3Ed__5_2_tD4CDC97B158D0A35AADD31C1B82919CD898D43B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectIteratorU3Ed__5_2_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_mB69292494BD9FE67DA221E84B64410FCE8CF4872_gshared (U3CSelectIteratorU3Ed__5_2_tD4CDC97B158D0A35AADD31C1B82919CD898D43B0* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_t71F6FAB18049B13B73F1EB00C7C2ADD361C140C0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_t71F6FAB18049B13B73F1EB00C7C2ADD361C140C0);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TResult_t71F6FAB18049B13B73F1EB00C7C2ADD361C140C0);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TResult_t71F6FAB18049B13B73F1EB00C7C2ADD361C140C0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectIteratorU3Ed__5_2_System_Collections_IEnumerator_Reset_mB31C0A43D8222D4A902EFE4B2B1354EC4C4A9F4A_gshared (U3CSelectIteratorU3Ed__5_2_tD4CDC97B158D0A35AADD31C1B82919CD898D43B0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSelectIteratorU3Ed__5_2_System_Collections_IEnumerator_get_Current_m1EB5CC98583DF46CC093645C4336E59C5F3C3329_gshared (U3CSelectIteratorU3Ed__5_2_tD4CDC97B158D0A35AADD31C1B82919CD898D43B0* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_t71F6FAB18049B13B73F1EB00C7C2ADD361C140C0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_t71F6FAB18049B13B73F1EB00C7C2ADD361C140C0);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TResult_t71F6FAB18049B13B73F1EB00C7C2ADD361C140C0);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSelectIteratorU3Ed__5_2_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m3DABDEE0D57E4209AC1CA54292C048B054974E94_gshared (U3CSelectIteratorU3Ed__5_2_tD4CDC97B158D0A35AADD31C1B82919CD898D43B0* __this, const RuntimeMethod* method) 
{
	U3CSelectIteratorU3Ed__5_2_tD4CDC97B158D0A35AADD31C1B82919CD898D43B0* V_0 = NULL;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CSelectIteratorU3Ed__5_2_tD4CDC97B158D0A35AADD31C1B82919CD898D43B0* L_3 = (U3CSelectIteratorU3Ed__5_2_tD4CDC97B158D0A35AADD31C1B82919CD898D43B0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (U3CSelectIteratorU3Ed__5_2_tD4CDC97B158D0A35AADD31C1B82919CD898D43B0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		V_0 = L_3;
	}

IL_0029:
	{
		U3CSelectIteratorU3Ed__5_2_tD4CDC97B158D0A35AADD31C1B82919CD898D43B0* L_4 = V_0;
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck(L_4);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_5);
		U3CSelectIteratorU3Ed__5_2_tD4CDC97B158D0A35AADD31C1B82919CD898D43B0* L_6 = V_0;
		Func_3_t2413D1285C5A0990717706292249644F402CA43E* L_7 = *(Func_3_t2413D1285C5A0990717706292249644F402CA43E**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_6);
		il2cpp_codegen_write_instance_field_data<Func_3_t2413D1285C5A0990717706292249644F402CA43E*>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_7);
		U3CSelectIteratorU3Ed__5_2_tD4CDC97B158D0A35AADD31C1B82919CD898D43B0* L_8 = V_0;
		return (RuntimeObject*)L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSelectIteratorU3Ed__5_2_System_Collections_IEnumerable_GetEnumerator_m6BFFD692114ECB8FF914AF697C425F2B05278AD6_gshared (U3CSelectIteratorU3Ed__5_2_tD4CDC97B158D0A35AADD31C1B82919CD898D43B0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (U3CSelectIteratorU3Ed__5_2_tD4CDC97B158D0A35AADD31C1B82919CD898D43B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		return (RuntimeObject*)L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectManyIteratorU3Ed__17_2__ctor_m97C1241630456070A85E9F50F33A4425F251826B_gshared (U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectManyIteratorU3Ed__17_2_System_IDisposable_Dispose_m84833338745BD5FCCC685381F7B750A8B7761242_gshared (U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)-4)))) > ((uint32_t)1))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}

IL_0012:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0028:
			{
				U3CSelectManyIteratorU3Ed__17_2_U3CU3Em__Finally1_mDD56A26381C1903838E7979064E0C853B51985E2(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
				return;
			}
		});
		try
		{
			{
				int32_t L_3 = V_0;
				if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
				{
					goto IL_001e_1;
				}
			}
			{
				int32_t L_4 = V_0;
				if ((((int32_t)L_4) == ((int32_t)1)))
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_002f;
			}

IL_001e_1:
			{
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0021_1:
					{
						U3CSelectManyIteratorU3Ed__17_2_U3CU3Em__Finally2_m2684EF307EE94963840DE7E15C376CF4A78726DB(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
						return;
					}
				});
				try
				{
					goto IL_002f;
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSelectManyIteratorU3Ed__17_2_MoveNext_m018F6D9E2D612A347E3D7DBA7915F76BCD13E984_gshared (U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00c2:
			{
				U3CSelectManyIteratorU3Ed__17_2_System_IDisposable_Dispose_m84833338745BD5FCCC685381F7B750A8B7761242(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				return;
			}
		});
		try
		{
			{
				int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0015_1;
				}
			}
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0082_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00c9;
			}

IL_0015_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				RuntimeObject* L_3 = (RuntimeObject*)__this->___source_3;
				NullCheck(L_3);
				RuntimeObject* L_4;
				L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_3);
				__this->___U3CU3E7__wrap1_7 = L_4;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_7), (void*)L_4);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_00a4_1;
			}

IL_0037_1:
			{
				RuntimeObject* L_5 = (RuntimeObject*)__this->___U3CU3E7__wrap1_7;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
				V_2 = L_6;
				Func_2_t9F45EF9F857977243C345F24571962D2521DB4A1* L_7 = (Func_2_t9F45EF9F857977243C345F24571962D2521DB4A1*)__this->___selector_5;
				RuntimeObject* L_8 = V_2;
				NullCheck(L_7);
				RuntimeObject* L_9;
				L_9 = Func_2_Invoke_m6DD952B505787ACA6066464C5B6BF31ECB4C6372_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				NullCheck(L_9);
				RuntimeObject* L_10;
				L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 10), L_9);
				__this->___U3CU3E7__wrap2_8 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2_8), (void*)L_10);
				__this->___U3CU3E1__state_0 = ((int32_t)-4);
				goto IL_008a_1;
			}

IL_0064_1:
			{
				RuntimeObject* L_11 = (RuntimeObject*)__this->___U3CU3E7__wrap2_8;
				NullCheck(L_11);
				RuntimeObject* L_12;
				L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_11);
				V_3 = L_12;
				RuntimeObject* L_13 = V_3;
				__this->___U3CU3E2__current_1 = L_13;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_13);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_00c9;
			}

IL_0082_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-4);
			}

IL_008a_1:
			{
				RuntimeObject* L_14 = (RuntimeObject*)__this->___U3CU3E7__wrap2_8;
				NullCheck((RuntimeObject*)L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
				if (L_15)
				{
					goto IL_0064_1;
				}
			}
			{
				U3CSelectManyIteratorU3Ed__17_2_U3CU3Em__Finally2_m2684EF307EE94963840DE7E15C376CF4A78726DB(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				__this->___U3CU3E7__wrap2_8 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2_8), (void*)(RuntimeObject*)NULL);
			}

IL_00a4_1:
			{
				RuntimeObject* L_16 = (RuntimeObject*)__this->___U3CU3E7__wrap1_7;
				NullCheck((RuntimeObject*)L_16);
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
				if (L_17)
				{
					goto IL_0037_1;
				}
			}
			{
				U3CSelectManyIteratorU3Ed__17_2_U3CU3Em__Finally1_mDD56A26381C1903838E7979064E0C853B51985E2(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
				__this->___U3CU3E7__wrap1_7 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_7), (void*)(RuntimeObject*)NULL);
				V_0 = (bool)0;
				goto IL_00c9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c9:
	{
		bool L_18 = V_0;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectManyIteratorU3Ed__17_2_U3CU3Em__Finally1_mDD56A26381C1903838E7979064E0C853B51985E2_gshared (U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CU3E7__wrap1_7;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___U3CU3E7__wrap1_7;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectManyIteratorU3Ed__17_2_U3CU3Em__Finally2_m2684EF307EE94963840DE7E15C376CF4A78726DB_gshared (U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-3);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CU3E7__wrap2_8;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___U3CU3E7__wrap2_8;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_001b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSelectManyIteratorU3Ed__17_2_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m0DBFEE5BC1BCD1317C7FB0AEDF9A96DE08F7ACA6_gshared (U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CU3E2__current_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectManyIteratorU3Ed__17_2_System_Collections_IEnumerator_Reset_mD3EF3FCFF487E193CEF556B21EC6226E896B599F_gshared (U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSelectManyIteratorU3Ed__17_2_System_Collections_IEnumerator_get_Current_m4EE907E5DB82A5CCCC1171DAB631CCFD6C0FA353_gshared (U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CU3E2__current_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSelectManyIteratorU3Ed__17_2_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_mBE4D4722EA426B3413FA95791FE4F856CEDB2122_gshared (U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460* __this, const RuntimeMethod* method) 
{
	U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460* V_0 = NULL;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460* L_3 = (U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		U3CSelectManyIteratorU3Ed__17_2__ctor_m97C1241630456070A85E9F50F33A4425F251826B(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_0 = L_3;
	}

IL_0029:
	{
		U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460* L_4 = V_0;
		RuntimeObject* L_5 = (RuntimeObject*)__this->___U3CU3E3__source_4;
		NullCheck(L_4);
		L_4->___source_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___source_3), (void*)L_5);
		U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460* L_6 = V_0;
		Func_2_t9F45EF9F857977243C345F24571962D2521DB4A1* L_7 = (Func_2_t9F45EF9F857977243C345F24571962D2521DB4A1*)__this->___U3CU3E3__selector_6;
		NullCheck(L_6);
		L_6->___selector_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___selector_5), (void*)L_7);
		U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460* L_8 = V_0;
		return (RuntimeObject*)L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSelectManyIteratorU3Ed__17_2_System_Collections_IEnumerable_GetEnumerator_mEA08F19AF53C85300D9268CC24AED4C1C25DDF5A_gshared (U3CSelectManyIteratorU3Ed__17_2_tB25EF93E4FE145DB1CE3B81C7854EAD9C5C38460* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CSelectManyIteratorU3Ed__17_2_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_mBE4D4722EA426B3413FA95791FE4F856CEDB2122(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return (RuntimeObject*)L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectManyIteratorU3Ed__17_2__ctor_m33A699F2BE5BB6C4ABAD64F6F47DC5CA4F508CB5_gshared (U3CSelectManyIteratorU3Ed__17_2_tCDBBC5EAD5E67D0D44121301E93C64CC26FAD80B* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2), L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectManyIteratorU3Ed__17_2_System_IDisposable_Dispose_mEFC3680E94E7BA858C5CDAC93DF4467E3CF1BF9D_gshared (U3CSelectManyIteratorU3Ed__17_2_tCDBBC5EAD5E67D0D44121301E93C64CC26FAD80B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)-4)))) > ((uint32_t)1))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}

IL_0012:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0028:
			{
				((  void (*) (U3CSelectManyIteratorU3Ed__17_2_tCDBBC5EAD5E67D0D44121301E93C64CC26FAD80B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
				return;
			}
		});
		try
		{
			{
				int32_t L_3 = V_0;
				if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
				{
					goto IL_001e_1;
				}
			}
			{
				int32_t L_4 = V_0;
				if ((((int32_t)L_4) == ((int32_t)1)))
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_002f;
			}

IL_001e_1:
			{
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0021_1:
					{
						((  void (*) (U3CSelectManyIteratorU3Ed__17_2_tCDBBC5EAD5E67D0D44121301E93C64CC26FAD80B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
						return;
					}
				});
				try
				{
					goto IL_002f;
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSelectManyIteratorU3Ed__17_2_MoveNext_m1A10ECF44EE24F8CDB39BB03AC9D40A758615294_gshared (U3CSelectManyIteratorU3Ed__17_2_tCDBBC5EAD5E67D0D44121301E93C64CC26FAD80B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t3F064E5187A6CA444A7E3B0D5F0194170838E107 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const uint32_t SizeOf_TResult_t35BDCF3171C0EE725B7DC1042A0653542D1C8B80 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TSource_t3F064E5187A6CA444A7E3B0D5F0194170838E107);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TSource_t3F064E5187A6CA444A7E3B0D5F0194170838E107);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TResult_t35BDCF3171C0EE725B7DC1042A0653542D1C8B80);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TResult_t35BDCF3171C0EE725B7DC1042A0653542D1C8B80);
	bool V_0 = false;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TSource_t3F064E5187A6CA444A7E3B0D5F0194170838E107);
	memset(V_2, 0, SizeOf_TSource_t3F064E5187A6CA444A7E3B0D5F0194170838E107);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_TResult_t35BDCF3171C0EE725B7DC1042A0653542D1C8B80);
	memset(V_3, 0, SizeOf_TResult_t35BDCF3171C0EE725B7DC1042A0653542D1C8B80);
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00c2:
			{
				((  void (*) (U3CSelectManyIteratorU3Ed__17_2_tCDBBC5EAD5E67D0D44121301E93C64CC26FAD80B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
				return;
			}
		});
		try
		{
			{
				int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0015_1;
				}
			}
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0082_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00c9;
			}

IL_0015_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
				RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				NullCheck(L_3);
				RuntimeObject* L_4;
				L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_3);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_4);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
				goto IL_00a4_1;
			}

IL_0037_1:
			{
				RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck(L_5);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5, (Il2CppFullySharedGenericAny*)L_6);
				il2cpp_codegen_memcpy(V_2, L_6, SizeOf_TSource_t3F064E5187A6CA444A7E3B0D5F0194170838E107);
				Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61* L_7 = *(Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				il2cpp_codegen_memcpy(L_8, V_2, SizeOf_TSource_t3F064E5187A6CA444A7E3B0D5F0194170838E107);
				NullCheck(L_7);
				RuntimeObject* L_9;
				L_9 = InvokerFuncInvoker1< RuntimeObject*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_8: *(void**)L_8));
				NullCheck(L_9);
				RuntimeObject* L_10;
				L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 10), L_9);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_10);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-4));
				goto IL_008a_1;
			}

IL_0064_1:
			{
				RuntimeObject* L_11 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
				NullCheck(L_11);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_11, (Il2CppFullySharedGenericAny*)L_12);
				il2cpp_codegen_memcpy(V_3, L_12, SizeOf_TResult_t35BDCF3171C0EE725B7DC1042A0653542D1C8B80);
				il2cpp_codegen_memcpy(L_13, V_3, SizeOf_TResult_t35BDCF3171C0EE725B7DC1042A0653542D1C8B80);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_13, SizeOf_TResult_t35BDCF3171C0EE725B7DC1042A0653542D1C8B80);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
				V_0 = (bool)1;
				goto IL_00c9;
			}

IL_0082_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-4));
			}

IL_008a_1:
			{
				RuntimeObject* L_14 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
				NullCheck((RuntimeObject*)L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
				if (L_15)
				{
					goto IL_0064_1;
				}
			}
			{
				((  void (*) (U3CSelectManyIteratorU3Ed__17_2_tCDBBC5EAD5E67D0D44121301E93C64CC26FAD80B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), (RuntimeObject*)NULL);
			}

IL_00a4_1:
			{
				RuntimeObject* L_16 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck((RuntimeObject*)L_16);
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
				if (L_17)
				{
					goto IL_0037_1;
				}
			}
			{
				((  void (*) (U3CSelectManyIteratorU3Ed__17_2_tCDBBC5EAD5E67D0D44121301E93C64CC26FAD80B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (RuntimeObject*)NULL);
				V_0 = (bool)0;
				goto IL_00c9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c9:
	{
		bool L_18 = V_0;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectManyIteratorU3Ed__17_2_U3CU3Em__Finally1_m49016F51A43C29344B40F9C2857DC19A9285671D_gshared (U3CSelectManyIteratorU3Ed__17_2_tCDBBC5EAD5E67D0D44121301E93C64CC26FAD80B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectManyIteratorU3Ed__17_2_U3CU3Em__Finally2_mFAFB523010870B3E2083F988314856593FFB8EEF_gshared (U3CSelectManyIteratorU3Ed__17_2_tCDBBC5EAD5E67D0D44121301E93C64CC26FAD80B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_001b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectManyIteratorU3Ed__17_2_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m8DB6DF94D04FD359FC667F2280BA9C1CBC6AC2B5_gshared (U3CSelectManyIteratorU3Ed__17_2_tCDBBC5EAD5E67D0D44121301E93C64CC26FAD80B* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_t35BDCF3171C0EE725B7DC1042A0653542D1C8B80 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_t35BDCF3171C0EE725B7DC1042A0653542D1C8B80);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TResult_t35BDCF3171C0EE725B7DC1042A0653542D1C8B80);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TResult_t35BDCF3171C0EE725B7DC1042A0653542D1C8B80);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectManyIteratorU3Ed__17_2_System_Collections_IEnumerator_Reset_m27E729F30573E6BE2872DF3D3FD0BECBFA1E66BE_gshared (U3CSelectManyIteratorU3Ed__17_2_tCDBBC5EAD5E67D0D44121301E93C64CC26FAD80B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSelectManyIteratorU3Ed__17_2_System_Collections_IEnumerator_get_Current_m4F76CAE1F64A27D1A2D667EFC7577F678713C1C2_gshared (U3CSelectManyIteratorU3Ed__17_2_tCDBBC5EAD5E67D0D44121301E93C64CC26FAD80B* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TResult_t35BDCF3171C0EE725B7DC1042A0653542D1C8B80 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_t35BDCF3171C0EE725B7DC1042A0653542D1C8B80);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TResult_t35BDCF3171C0EE725B7DC1042A0653542D1C8B80);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 14), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSelectManyIteratorU3Ed__17_2_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_mA004C3604665DB47007257A2F3345BBB73857FBF_gshared (U3CSelectManyIteratorU3Ed__17_2_tCDBBC5EAD5E67D0D44121301E93C64CC26FAD80B* __this, const RuntimeMethod* method) 
{
	U3CSelectManyIteratorU3Ed__17_2_tCDBBC5EAD5E67D0D44121301E93C64CC26FAD80B* V_0 = NULL;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CSelectManyIteratorU3Ed__17_2_tCDBBC5EAD5E67D0D44121301E93C64CC26FAD80B* L_3 = (U3CSelectManyIteratorU3Ed__17_2_tCDBBC5EAD5E67D0D44121301E93C64CC26FAD80B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (U3CSelectManyIteratorU3Ed__17_2_tCDBBC5EAD5E67D0D44121301E93C64CC26FAD80B*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_0 = L_3;
	}

IL_0029:
	{
		U3CSelectManyIteratorU3Ed__17_2_tCDBBC5EAD5E67D0D44121301E93C64CC26FAD80B* L_4 = V_0;
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck(L_4);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_5);
		U3CSelectManyIteratorU3Ed__17_2_tCDBBC5EAD5E67D0D44121301E93C64CC26FAD80B* L_6 = V_0;
		Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61* L_7 = *(Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_6);
		il2cpp_codegen_write_instance_field_data<Func_2_tF410043014FD16C2F22223C6C5575F1A96738C61*>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_7);
		U3CSelectManyIteratorU3Ed__17_2_tCDBBC5EAD5E67D0D44121301E93C64CC26FAD80B* L_8 = V_0;
		return (RuntimeObject*)L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSelectManyIteratorU3Ed__17_2_System_Collections_IEnumerable_GetEnumerator_m05204B1240D8C64B64520F3B8D9ACABB45E0815E_gshared (U3CSelectManyIteratorU3Ed__17_2_tCDBBC5EAD5E67D0D44121301E93C64CC26FAD80B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (U3CSelectManyIteratorU3Ed__17_2_tCDBBC5EAD5E67D0D44121301E93C64CC26FAD80B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return (RuntimeObject*)L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSequenceEqualAsyncU3Ed__0_1__ctor_mB32A30E4FD1A45587905C2540620DA50F2B5154D_gshared (U3CSequenceEqualAsyncU3Ed__0_1_t6108633E1395D5F8E783095E39EF2D2626A3317F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSequenceEqualAsyncU3Ed__0_1_MoveNext_m0197832DF5F73B55DD9D4C0F82BE121D68AC35C5_gshared (U3CSequenceEqualAsyncU3Ed__0_1_t6108633E1395D5F8E783095E39EF2D2626A3317F* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t07AEE14A2F07EED0378F422508E904CE669ACD07 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_40 = alloca(SizeOf_TSource_t07AEE14A2F07EED0378F422508E904CE669ACD07);
	const Il2CppFullySharedGenericAny L_42 = alloca(SizeOf_TSource_t07AEE14A2F07EED0378F422508E904CE669ACD07);
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CSequenceEqualAsyncU3Ed__0_1_t6108633E1395D5F8E783095E39EF2D2626A3317F* V_5 = NULL;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	RuntimeObject* V_12 = NULL;
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Exception_t* V_16 = NULL;
	int32_t V_17 = 0;
	bool V_18 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_19;
	memset((&V_19), 0, sizeof(V_19));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 3> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)3))))
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
			if ((((int32_t)L_2) == ((int32_t)4)))
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
			goto IL_03da_1;
		}

IL_001a_1:
		{
			RuntimeObject* L_3 = (RuntimeObject*)__this->___first_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_5;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			__this->___U3Ce1U3E5__1_6 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Ce1U3E5__1_6), (void*)L_5);
			__this->___U3CU3Es__2_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_7), (void*)NULL);
			__this->___U3CU3Es__3_8 = 0;
		}

IL_0040_1:
		{
		}
		try
		{
			{
				int32_t L_6 = V_0;
				if ((!(((uint32_t)L_6) > ((uint32_t)2))))
				{
					goto IL_004d_2;
				}
			}
			{
				goto IL_0047_2;
			}

IL_0047_2:
			{
				int32_t L_7 = V_0;
				if ((((int32_t)L_7) == ((int32_t)3)))
				{
					goto IL_004f_2;
				}
			}
			{
				goto IL_0054_2;
			}

IL_004d_2:
			{
				goto IL_007a_2;
			}

IL_004f_2:
			{
				goto IL_02ee_2;
			}

IL_0054_2:
			{
				RuntimeObject* L_8 = (RuntimeObject*)__this->___second_3;
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_9 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_5;
				NullCheck(L_8);
				RuntimeObject* L_10;
				L_10 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_8, L_9);
				__this->___U3Ce2U3E5__5_10 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Ce2U3E5__5_10), (void*)L_10);
				__this->___U3CU3Es__6_11 = NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__6_11), (void*)NULL);
				__this->___U3CU3Es__7_12 = 0;
			}

IL_007a_2:
			{
			}
			try
			{
				{
					int32_t L_11 = V_0;
					switch (L_11)
					{
						case 0:
						{
							goto IL_008f_3;
						}
						case 1:
						{
							goto IL_0091_3;
						}
						case 2:
						{
							goto IL_0096_3;
						}
					}
				}
				{
					goto IL_009b_3;
				}

IL_008f_3:
				{
					goto IL_00e8_3;
				}

IL_0091_3:
				{
					goto IL_0167_3;
				}

IL_0096_3:
				{
					goto IL_022e_3;
				}

IL_009b_3:
				{
					goto IL_0278_3;
				}

IL_00a1_3:
				{
					RuntimeObject* L_12 = (RuntimeObject*)__this->___U3Ce1U3E5__1_6;
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
						goto IL_0104_3;
					}
				}
				{
					int32_t L_16 = 0;
					V_0 = L_16;
					__this->___U3CU3E1__state_0 = L_16;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17 = V_3;
					__this->___U3CU3Eu__1_17 = L_17;
					Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_17))->___task_0))->___source_0), (void*)NULL);
					V_5 = __this;
					AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_18 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder_1);
					((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSequenceEqualAsyncU3Ed__0_1_t6108633E1395D5F8E783095E39EF2D2626A3317F**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_18, (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
					goto IL_048f;
				}

IL_00e8_3:
				{
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_17;
					V_3 = L_19;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_20 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_17);
					il2cpp_codegen_initobj(L_20, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
					int32_t L_21 = (-1);
					V_0 = L_21;
					__this->___U3CU3E1__state_0 = L_21;
				}

IL_0104_3:
				{
					bool L_22;
					L_22 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
					__this->___U3CU3Es__9_14 = L_22;
					bool L_23 = (bool)__this->___U3CU3Es__9_14;
					V_2 = L_23;
					bool L_24 = V_2;
					if (!L_24)
					{
						goto IL_01e5_3;
					}
				}
				{
					RuntimeObject* L_25 = (RuntimeObject*)__this->___U3Ce2U3E5__5_10;
					NullCheck(L_25);
					UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_26;
					L_26 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_25);
					V_4 = L_26;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_27;
					L_27 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
					V_7 = L_27;
					bool L_28;
					L_28 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
					if (L_28)
					{
						goto IL_0184_3;
					}
				}
				{
					int32_t L_29 = 1;
					V_0 = L_29;
					__this->___U3CU3E1__state_0 = L_29;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_30 = V_7;
					__this->___U3CU3Eu__1_17 = L_30;
					Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_17))->___task_0))->___source_0), (void*)NULL);
					V_5 = __this;
					AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_31 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder_1);
					((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSequenceEqualAsyncU3Ed__0_1_t6108633E1395D5F8E783095E39EF2D2626A3317F**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_31, (&V_7), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
					goto IL_048f;
				}

IL_0167_3:
				{
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_32 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_17;
					V_7 = L_32;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_33 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_17);
					il2cpp_codegen_initobj(L_33, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
					int32_t L_34 = (-1);
					V_0 = L_34;
					__this->___U3CU3E1__state_0 = L_34;
				}

IL_0184_3:
				{
					bool L_35;
					L_35 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
					__this->___U3CU3Es__10_15 = L_35;
					bool L_36 = (bool)__this->___U3CU3Es__10_15;
					V_6 = L_36;
					bool L_37 = V_6;
					if (!L_37)
					{
						goto IL_01d8_3;
					}
				}
				{
					RuntimeObject* L_38 = (RuntimeObject*)__this->___comparer_4;
					RuntimeObject* L_39 = (RuntimeObject*)__this->___U3Ce1U3E5__1_6;
					NullCheck(L_39);
					InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_39, (Il2CppFullySharedGenericAny*)L_40);
					RuntimeObject* L_41 = (RuntimeObject*)__this->___U3Ce2U3E5__5_10;
					NullCheck(L_41);
					InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_41, (Il2CppFullySharedGenericAny*)L_42);
					NullCheck(L_38);
					bool L_43;
					L_43 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_38, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_40: *(void**)L_40), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_42: *(void**)L_42));
					V_8 = L_43;
					bool L_44 = V_8;
					if (!L_44)
					{
						goto IL_01cb_3;
					}
				}
				{
					goto IL_0278_3;
				}

IL_01cb_3:
				{
					__this->___U3CU3Es__8_13 = (bool)0;
					goto IL_0280_3;
				}

IL_01d8_3:
				{
					__this->___U3CU3Es__8_13 = (bool)0;
					goto IL_0280_3;
				}

IL_01e5_3:
				{
					RuntimeObject* L_45 = (RuntimeObject*)__this->___U3Ce2U3E5__5_10;
					NullCheck(L_45);
					UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_46;
					L_46 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_45);
					V_4 = L_46;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_47;
					L_47 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
					V_10 = L_47;
					bool L_48;
					L_48 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_10), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
					if (L_48)
					{
						goto IL_024b_3;
					}
				}
				{
					int32_t L_49 = 2;
					V_0 = L_49;
					__this->___U3CU3E1__state_0 = L_49;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_50 = V_10;
					__this->___U3CU3Eu__1_17 = L_50;
					Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_17))->___task_0))->___source_0), (void*)NULL);
					V_5 = __this;
					AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_51 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder_1);
					((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSequenceEqualAsyncU3Ed__0_1_t6108633E1395D5F8E783095E39EF2D2626A3317F**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_51, (&V_10), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
					goto IL_048f;
				}

IL_022e_3:
				{
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_52 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_17;
					V_10 = L_52;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_53 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_17);
					il2cpp_codegen_initobj(L_53, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
					int32_t L_54 = (-1);
					V_0 = L_54;
					__this->___U3CU3E1__state_0 = L_54;
				}

IL_024b_3:
				{
					bool L_55;
					L_55 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_10), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
					__this->___U3CU3Es__11_16 = L_55;
					bool L_56 = (bool)__this->___U3CU3Es__11_16;
					V_9 = L_56;
					bool L_57 = V_9;
					if (!L_57)
					{
						goto IL_026e_3;
					}
				}
				{
					__this->___U3CU3Es__8_13 = (bool)0;
					goto IL_0280_3;
				}

IL_026e_3:
				{
					__this->___U3CU3Es__8_13 = (bool)1;
					goto IL_0280_3;
				}

IL_0278_3:
				{
					V_11 = (bool)1;
					goto IL_00a1_3;
				}

IL_0280_3:
				{
					__this->___U3CU3Es__7_12 = 1;
					goto IL_0295_2;
				}
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0289_2;
				}
				throw e;
			}

CATCH_0289_2:
			{
				V_12 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
				RuntimeObject* L_58 = V_12;
				__this->___U3CU3Es__6_11 = L_58;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__6_11), (void*)L_58);
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0295_2;
			}

IL_0295_2:
			{
				RuntimeObject* L_59 = (RuntimeObject*)__this->___U3Ce2U3E5__5_10;
				V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_60 = V_13;
				if (!L_60)
				{
					goto IL_0314_2;
				}
			}
			{
				RuntimeObject* L_61 = (RuntimeObject*)__this->___U3Ce2U3E5__5_10;
				NullCheck((RuntimeObject*)L_61);
				UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_62;
				L_62 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_61);
				V_15 = L_62;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_63;
				L_63 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_15), NULL);
				V_14 = L_63;
				bool L_64;
				L_64 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
				if (L_64)
				{
					goto IL_030b_2;
				}
			}
			{
				int32_t L_65 = 3;
				V_0 = L_65;
				__this->___U3CU3E1__state_0 = L_65;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_66 = V_14;
				__this->___U3CU3Eu__2_18 = L_66;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_18))->___task_0))->___source_0), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_67 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSequenceEqualAsyncU3Ed__0_1_t6108633E1395D5F8E783095E39EF2D2626A3317F**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_67, (&V_14), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_048f;
			}

IL_02ee_2:
			{
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_68 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_18;
				V_14 = L_68;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_69 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_18);
				il2cpp_codegen_initobj(L_69, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
				int32_t L_70 = (-1);
				V_0 = L_70;
				__this->___U3CU3E1__state_0 = L_70;
			}

IL_030b_2:
			{
				Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
			}

IL_0314_2:
			{
				RuntimeObject* L_71 = (RuntimeObject*)__this->___U3CU3Es__6_11;
				V_12 = L_71;
				RuntimeObject* L_72 = V_12;
				if (!L_72)
				{
					goto IL_033e_2;
				}
			}
			{
				RuntimeObject* L_73 = V_12;
				V_16 = ((Exception_t*)IsInstClass((RuntimeObject*)L_73, Exception_t_il2cpp_TypeInfo_var));
				Exception_t* L_74 = V_16;
				if (L_74)
				{
					goto IL_0331_2;
				}
			}
			{
				RuntimeObject* L_75 = V_12;
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_75, method);
			}

IL_0331_2:
			{
				Exception_t* L_76 = V_16;
				ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_77;
				L_77 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_76, NULL);
				NullCheck(L_77);
				ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_77, NULL);
			}

IL_033e_2:
			{
				int32_t L_78 = (int32_t)__this->___U3CU3Es__7_12;
				V_17 = L_78;
				int32_t L_79 = V_17;
				if ((((int32_t)L_79) == ((int32_t)1)))
				{
					goto IL_034d_2;
				}
			}
			{
				goto IL_035b_2;
			}

IL_034d_2:
			{
				bool L_80 = (bool)__this->___U3CU3Es__8_13;
				__this->___U3CU3Es__4_9 = L_80;
				goto IL_036c_2;
			}

IL_035b_2:
			{
				__this->___U3CU3Es__6_11 = NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__6_11), (void*)NULL);
				__this->___U3Ce2U3E5__5_10 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Ce2U3E5__5_10), (void*)(RuntimeObject*)NULL);
				goto IL_0381_1;
			}

IL_036c_2:
			{
				__this->___U3CU3Es__3_8 = 1;
				goto IL_0381_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0375_1;
			}
			throw e;
		}

CATCH_0375_1:
		{
			V_12 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_81 = V_12;
			__this->___U3CU3Es__2_7 = L_81;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_7), (void*)L_81);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0381_1;
		}

IL_0381_1:
		{
			RuntimeObject* L_82 = (RuntimeObject*)__this->___U3Ce1U3E5__1_6;
			V_18 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_82) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_83 = V_18;
			if (!L_83)
			{
				goto IL_0400_1;
			}
		}
		{
			RuntimeObject* L_84 = (RuntimeObject*)__this->___U3Ce1U3E5__1_6;
			NullCheck((RuntimeObject*)L_84);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_85;
			L_85 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_84);
			V_15 = L_85;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_86;
			L_86 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_15), NULL);
			V_19 = L_86;
			bool L_87;
			L_87 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_19), NULL);
			if (L_87)
			{
				goto IL_03f7_1;
			}
		}
		{
			int32_t L_88 = 4;
			V_0 = L_88;
			__this->___U3CU3E1__state_0 = L_88;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_89 = V_19;
			__this->___U3CU3Eu__2_18 = L_89;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_18))->___task_0))->___source_0), (void*)NULL);
			V_5 = __this;
			AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_90 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSequenceEqualAsyncU3Ed__0_1_t6108633E1395D5F8E783095E39EF2D2626A3317F**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_90, (&V_19), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_048f;
		}

IL_03da_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_91 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_18;
			V_19 = L_91;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_92 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_18);
			il2cpp_codegen_initobj(L_92, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_93 = (-1);
			V_0 = L_93;
			__this->___U3CU3E1__state_0 = L_93;
		}

IL_03f7_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_19), NULL);
		}

IL_0400_1:
		{
			RuntimeObject* L_94 = (RuntimeObject*)__this->___U3CU3Es__2_7;
			V_12 = L_94;
			RuntimeObject* L_95 = V_12;
			if (!L_95)
			{
				goto IL_042a_1;
			}
		}
		{
			RuntimeObject* L_96 = V_12;
			V_16 = ((Exception_t*)IsInstClass((RuntimeObject*)L_96, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_97 = V_16;
			if (L_97)
			{
				goto IL_041d_1;
			}
		}
		{
			RuntimeObject* L_98 = V_12;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_98, method);
		}

IL_041d_1:
		{
			Exception_t* L_99 = V_16;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_100;
			L_100 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_99, NULL);
			NullCheck(L_100);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_100, NULL);
		}

IL_042a_1:
		{
			int32_t L_101 = (int32_t)__this->___U3CU3Es__3_8;
			V_17 = L_101;
			int32_t L_102 = V_17;
			if ((((int32_t)L_102) == ((int32_t)1)))
			{
				goto IL_0439_1;
			}
		}
		{
			goto IL_0442_1;
		}

IL_0439_1:
		{
			bool L_103 = (bool)__this->___U3CU3Es__4_9;
			V_1 = L_103;
			goto IL_0473;
		}

IL_0442_1:
		{
			__this->___U3CU3Es__2_7 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_7), (void*)NULL);
			__this->___U3Ce1U3E5__1_6 = (RuntimeObject*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Ce1U3E5__1_6), (void*)(RuntimeObject*)NULL);
			goto IL_0473;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0452;
		}
		throw e;
	}

CATCH_0452:
	{
		V_16 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3Ce1U3E5__1_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Ce1U3E5__1_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_104 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_105 = V_16;
		AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_inline(L_104, L_105, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m9B780203C388F9657690B0767C88D713186BD791_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_048f;
	}

IL_0473:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3Ce1U3E5__1_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3Ce1U3E5__1_6), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3* L_106 = (AsyncUniTaskMethodBuilder_1_t0F87A93BB5B744AC073AB9A872C19ED0DFD6ACB3*)(&__this->___U3CU3Et__builder_1);
		bool L_107 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_inline(L_106, L_107, AsyncUniTaskMethodBuilder_1_SetResult_mFE59415FE3482B683EBA2BBC687BC4402409026C_RuntimeMethod_var);
	}

IL_048f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSequenceEqualAsyncU3Ed__0_1_SetStateMachine_mBC86A979FEB7068E6FD4E865F22DFEFCF6A5C4AA_gshared (U3CSequenceEqualAsyncU3Ed__0_1_t6108633E1395D5F8E783095E39EF2D2626A3317F* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSingleAsyncU3Ed__0_1__ctor_m6B40F42D2E04724E920AFFF0345C38BC641ED363_gshared (U3CSingleAsyncU3Ed__0_1_tA863E9727314DFE999020711B01726B6C7E936DB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSingleAsyncU3Ed__0_1_MoveNext_m3EC23525D10D5C70AB062FB430BA3F0A46410708_gshared (U3CSingleAsyncU3Ed__0_1_tA863E9727314DFE999020711B01726B6C7E936DB* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t08292AFEAE8DC69F70A995626A0FA496F313AF47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TSource_t08292AFEAE8DC69F70A995626A0FA496F313AF47);
	const Il2CppFullySharedGenericAny L_32 = L_20;
	const Il2CppFullySharedGenericAny L_57 = L_20;
	const Il2CppFullySharedGenericAny L_59 = L_20;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t08292AFEAE8DC69F70A995626A0FA496F313AF47);
	memset(V_1, 0, SizeOf_TSource_t08292AFEAE8DC69F70A995626A0FA496F313AF47);
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CSingleAsyncU3Ed__0_1_tA863E9727314DFE999020711B01726B6C7E936DB* V_5 = NULL;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
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
			goto IL_0209_1;
		}

IL_001a_1:
		{
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3, L_4);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_5);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), NULL);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), 0);
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
				goto IL_009a_2;
			}

IL_004e_2:
			{
				goto IL_012a_2;
			}

IL_0053_2:
			{
				RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				NullCheck(L_8);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_9;
				L_9 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8);
				V_4 = L_9;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_10;
				L_10 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_3 = L_10;
				bool L_11;
				L_11 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_00b6_2;
				}
			}
			{
				int32_t L_12 = 0;
				V_0 = L_12;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_12);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_13 = V_3;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_13);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSingleAsyncU3Ed__0_1_tA863E9727314DFE999020711B01726B6C7E936DB**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				goto IL_02ca;
			}

IL_009a_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_14 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12));
				V_3 = L_14;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_15 = (-1);
				V_0 = L_15;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_15);
			}

IL_00b6_2:
			{
				bool L_16;
				L_16 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_16);
				bool L_17 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
				V_2 = L_17;
				bool L_18 = V_2;
				if (!L_18)
				{
					goto IL_0178_2;
				}
			}
			{
				RuntimeObject* L_19 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				NullCheck(L_19);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_19, (Il2CppFullySharedGenericAny*)L_20);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_20, SizeOf_TSource_t08292AFEAE8DC69F70A995626A0FA496F313AF47);
				RuntimeObject* L_21 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				NullCheck(L_21);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_22;
				L_22 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_21);
				V_4 = L_22;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_23;
				L_23 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_7 = L_23;
				bool L_24;
				L_24 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_7), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_0147_2;
				}
			}
			{
				int32_t L_25 = 1;
				V_0 = L_25;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_25);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_26 = V_7;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_26);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CSingleAsyncU3Ed__0_1_tA863E9727314DFE999020711B01726B6C7E936DB**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_7), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				goto IL_02ca;
			}

IL_012a_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_27 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12));
				V_7 = L_27;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_28 = (-1);
				V_0 = L_28;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_28);
			}

IL_0147_2:
			{
				bool L_29;
				L_29 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_29);
				bool L_30 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
				V_6 = (bool)((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
				bool L_31 = V_6;
				if (!L_31)
				{
					goto IL_0172_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_32, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TSource_t08292AFEAE8DC69F70A995626A0FA496F313AF47);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_32, SizeOf_TSource_t08292AFEAE8DC69F70A995626A0FA496F313AF47);
				goto IL_019b_2;
			}

IL_0172_2:
			{
				Exception_t* L_33;
				L_33 = Error_MoreThanOneElement_mD66FED8AE9CF26384AFAA60BCFF0216F9490ECEE_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, method);
			}

IL_0178_2:
			{
				bool L_34 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
				V_8 = L_34;
				bool L_35 = V_8;
				if (!L_35)
				{
					goto IL_0194_2;
				}
			}
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8)))), SizeOf_TSource_t08292AFEAE8DC69F70A995626A0FA496F313AF47);
				goto IL_019b_2;
			}

IL_0194_2:
			{
				Exception_t* L_36;
				L_36 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, method);
			}

IL_019b_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), 1);
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
			RuntimeObject* L_37 = V_9;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_37);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01b0_1;
		}

IL_01b0_1:
		{
			RuntimeObject* L_38 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_38) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_39 = V_10;
			if (!L_39)
			{
				goto IL_022f_1;
			}
		}
		{
			RuntimeObject* L_40 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
			NullCheck((RuntimeObject*)L_40);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_41;
			L_41 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_40);
			V_12 = L_41;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_42;
			L_42 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_42;
			bool L_43;
			L_43 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_43)
			{
				goto IL_0226_1;
			}
		}
		{
			int32_t L_44 = 2;
			V_0 = L_44;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_44);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_45 = V_11;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_45);
			V_5 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CSingleAsyncU3Ed__0_1_tA863E9727314DFE999020711B01726B6C7E936DB**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_11), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
			goto IL_02ca;
		}

IL_0209_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_46 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
			V_11 = L_46;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_47 = (-1);
			V_0 = L_47;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_47);
		}

IL_0226_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_022f_1:
		{
			RuntimeObject* L_48 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_9 = L_48;
			RuntimeObject* L_49 = V_9;
			if (!L_49)
			{
				goto IL_0259_1;
			}
		}
		{
			RuntimeObject* L_50 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_50, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_51 = V_13;
			if (L_51)
			{
				goto IL_024c_1;
			}
		}
		{
			RuntimeObject* L_52 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_52, method);
		}

IL_024c_1:
		{
			Exception_t* L_53 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_54;
			L_54 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_53, NULL);
			NullCheck(L_54);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_54, NULL);
		}

IL_0259_1:
		{
			int32_t L_55 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_14 = L_55;
			int32_t L_56 = V_14;
			if ((((int32_t)L_56) == ((int32_t)1)))
			{
				goto IL_0268_1;
			}
		}
		{
			goto IL_0271_1;
		}

IL_0268_1:
		{
			il2cpp_codegen_memcpy(L_57, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8)), SizeOf_TSource_t08292AFEAE8DC69F70A995626A0FA496F313AF47);
			il2cpp_codegen_memcpy(V_1, L_57, SizeOf_TSource_t08292AFEAE8DC69F70A995626A0FA496F313AF47);
			goto IL_02ae;
		}

IL_0271_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8)))), SizeOf_TSource_t08292AFEAE8DC69F70A995626A0FA496F313AF47);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (RuntimeObject*)NULL);
			goto IL_02ae;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_028d;
		}
		throw e;
	}

CATCH_028d:
	{
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (RuntimeObject*)NULL);
		Exception_t* L_58 = V_13;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_58, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02ca;
	}

IL_02ae:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_59, V_1, SizeOf_TSource_t08292AFEAE8DC69F70A995626A0FA496F313AF47);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_59: *(void**)L_59));
	}

IL_02ca:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSingleAsyncU3Ed__0_1_SetStateMachine_mB96D90F24C4ECA2C8CD96BCDA452B0C2396A744A_gshared (U3CSingleAsyncU3Ed__0_1_tA863E9727314DFE999020711B01726B6C7E936DB* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_gshared_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
