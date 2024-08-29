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
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
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
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49;
struct U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20;
struct U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9;
struct U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF;
struct U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456;
struct U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7;
struct U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D;
struct U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3;
struct U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07;
struct U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F;
struct U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED;
struct U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392;
struct U3CElementAtAsyncU3Ed__0_1_t828967E53B1F0CA7BDCEF9D605C46215C4EC3044;
struct U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE;
struct U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12;
struct U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E;
struct U3CFirstAsyncU3Ed__0_1_t8FEFBA058854F78C0D1DDC66BF35661E1FF7B142;
struct U3CFirstAsyncU3Ed__1_1_tDD5E86442F853ED2127AA888C9B23F5CF897E394;
struct U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03;
struct U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC;
struct U3CForEachAsyncU3Ed__0_1_t9582606A1F1A2D59AA951BBAAAC83A1CC5679B2E;
struct U3CForEachAsyncU3Ed__1_1_t10C921BC3C792263B1FFEF9A54C79CD1EE8F4FD4;
struct U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B;
struct U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A;
struct U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9;
struct U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0;
struct U3CForgetCoreWithCatchU3Ed__21_1_tC1CCDBDBC539D1E312103E6683A61535E5D194E5;
struct U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274;
struct U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74;
struct U3CGetEnumeratorU3Ed__1_t428C31FE719799CD61A887870EE46ED9488AAFAC;
struct U3CGetEnumeratorU3Ed__1_t35287071076620851350DEE5A7358F21C466DA90;
struct U3CGetEnumeratorU3Ed__1_t3DA927506BB3A75FB0C275BE0E1E951C2FA72436;
struct U3CGetEnumeratorU3Ed__1_t86CE4D514C7EA04C708491BC8E9D7FCB75DB8A9F;
struct U3CGetEnumeratorU3Ed__1_t6D4BC5B68087352E56482B91E7BADA70BEB38CD2;
struct U3CGetEnumeratorU3Ed__1_t0C0E1C4A0A69A2FDEE7A295C343DBFCB38E1E136;
struct U3CGetEnumeratorU3Ed__35_tFBB72033DD97EBEE1D1AB495DD3A0C1827242215;
struct U3CGetEnumeratorU3Ed__35_t5851A752199A6195E7EB427BC50C5FFCAB8D4E6E;
struct U3CGetItemIdsU3Ed__9_tF93733F63FD5F03443983B07568D05E67F0A16BB;
struct U3CGetItemIdsU3Ed__9_t1C187ED9EE7F68E40E20D3F5EAB3CCA02DE6AEA6;
struct U3CLastAsyncU3Ed__0_1_t38AFC35C81A53570FC7FA05BED4F1D9156275B70;
struct U3CLastAsyncU3Ed__1_1_t0FD9210854E67C87AE6374B78E7F411EE5178410;
struct U3CLastAwaitAsyncU3Ed__2_1_tC239805AACCC4C0F81C94B1270D7382B72745616;
struct U3CLastAwaitWithCancellationAsyncU3Ed__3_1_tE16CA9A4999761FA673AE43AC096DABBF15267E4;
struct Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
struct Action_2_t983A40F124DCF06E5CEB4DE585CE7204D7F7E25C;
struct AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773;
struct ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF;
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812;
struct ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4;
struct ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56;
struct Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3;
struct Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F;
struct Dictionary_2_tEBE1E11ABD22357FDFD12EF5F2F7CDC6378162C0;
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
struct EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65;
struct EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5;
struct EnumerableSorter_1_t33B4B1FE8E6E19EEFB45A8EC216B39E6DDF2FDDD;
struct EnumerableSorter_1_t4439350BEBB5B5B9E8D43BBDBB271F1DC472270B;
struct EnumerableSorter_1_t9DF0BF2FF3A689EB41C9CE2B42D3A91F5776B3AD;
struct Func_10_tCFA5EB7EA19CD65C3B9C38C693E22F5FFFB1B1AE;
struct Func_11_t17F432ABEC8F07E0EDFA2596226EAEB308D7AF64;
struct Func_12_t59995ACB05F018B0467B398929AA0C7CC6690FCD;
struct Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C;
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
struct Func_2_tB9800595B3251D2492E40667A6C05061784D48FB;
struct Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814;
struct Func_3_tEBFC185F508D6150079151B2395F5DE7B54CC752;
struct Func_3_t132FDF1783142B71AC1D1F8BB2FF80D9FAC32BFC;
struct Func_4_t06A967E03EDC626BCFB4875FDF8A19728ADC72BC;
struct Func_4_t572D62CCA845BDAD9BC3ABCD839C1AE78144D079;
struct Func_5_tB069B44093DF1EBDA5245A604B7AD60C4B638397;
struct Func_6_tF0A0CA0D64145FD856F53441697B240796CBF320;
struct Func_7_tE5BE67F6F06DB3CA05521637000BD00C4D993F80;
struct Func_8_t605F8719FA2521B5FF48B1D8047E17F3F082B32E;
struct Func_9_tCA208DB676270504B9EA383199B74083CECB6375;
struct IEnumerable_1_t70509FAB3FBDF209BDC822D56129B578CFF05F35;
struct IEnumerable_1_tAC7D005B012CF8B1D2C962451C23F66FEE9DB464;
struct IEnumerable_1_tF87C02535F5ADDDE139D4D2EE4BD06652C1791A4;
struct IEnumerable_1_tBA4259158757D7E9A55293191376A3C4C288D5DC;
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct IEnumerable_1_tEC612AE46C64B901EC8843E9C1B95C7484E2D334;
struct IEnumerable_1_tFBE064108F6FBA7C779E1916D7E9CEFD842D8C17;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t1AD61F05040EBF9E4599CCD6F47C9DD6FD4B731D;
struct IEnumerator_1_tBAD8EC79D6250D511AA1D4936CCF2B659FA05168;
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IList_1_t3C981BB2E5E26A467A42AF86513CF54136025701;
struct IList_1_t1F79F22F068EBEEE2FC8D080E405FD5F950258E3;
struct IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1;
struct IObserver_1_t094BE2515872266E98A772AEA02B413105F16A8B;
struct IStateMachineRunnerPromise_1_t33359314377828B79D5AB55278350F65F2237DD9;
struct IUniTaskAsyncEnumerable_1_tB465D2725680B21CF3074178AECADD1D24C24A74;
struct IUniTaskAsyncEnumerator_1_t256C7409E6B13FF3224A57D2DD1A4D52A2C40092;
struct IUniTaskSource_1_tB6B218F9BB467453A6CBAEE053820D3B3E8F891C;
struct IUniTaskSource_1_tA27C284FF17E3AAB5B5D07A7E4DE207B56F764AB;
struct Node_t821211F0535E80E80FDC8FFB600F681E98286BF0;
struct Node_tC5111E77A2002D0AD173457666915D4D0BD59865;
struct OrderedEnumerable_1_t2F9F5060B969113C249D3BC84B7DA3D9C9DCD84B;
struct OrderedEnumerable_1_t8EEABC87399C51697FF13CC459FC26CA5A5857DA;
struct OrderedEnumerable_1_tFFE2D41E419F999B45E7C9636190F547FE16EA00;
struct OrderedEnumerable_1_tA6269C578EE7D3423C79F32258D574795AEF1151;
struct OrderedEnumerable_1_t635FACC705EB8D479616971CD818376DC3A5AF51;
struct OrderedEnumerable_1_t9FC254A996960AAA55B70FA7417B36D16C123B28;
struct Segment_tBE464478C92438E20009981FD7F953F796D7F3B2;
struct Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912;
struct Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF;
struct Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921;
struct Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D;
struct Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098;
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
struct Tables_t14D3B197594232ACFA76B87EB205EB3661F6EAA6;
struct Tables_tD895B223685217918C345ED5D52074F7E29E5F95;
struct TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96;
struct TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E;
struct _CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354;
struct _CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746;
struct _CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E;
struct _CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1;
struct _CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13;
struct _CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55;
struct _CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E;
struct _CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D;
struct _CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD;
struct IEnumerator_1U5BU5D_tABFB842A3C97DCF253D43C9513DA44AC1911FF7A;
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct NodeU5BU5D_t2D9C2B502AE419E91BEF20D4861A838720732B76;
struct NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A;
struct SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301;
struct SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F;
struct SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B;
struct SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427;
struct SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444;
struct ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911;
struct MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148;
struct IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B;
struct IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteralF26C76B1728491A2D7039EBFC35CFDE0D352C43A;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Clear_m46116312544FC207DACC2B68B9C50516A891CC31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m6480166B79018CBA0363B56AB006AD4DFA645B01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m6BA4979D77CE3B4C596D189FBED859EB9B7014B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_mD0C34F3CD9C04683C922947B2AD9222B6266A0F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct NodeU5BU5D_t2D9C2B502AE419E91BEF20D4861A838720732B76;
struct NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A;
struct SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B;
struct SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444;
struct ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962;
struct GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911;
struct MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	int32_t ___U3CU3E2__current_1;
	int32_t ___U3CU3El__initialThreadId_2;
	RuntimeObject* ___comparer_3;
	RuntimeObject* ___U3CU3E3__comparer_4;
	RuntimeObject* ___source_5;
	RuntimeObject* ___U3CU3E3__source_6;
	Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* ___U3CsetU3E5__2_7;
	RuntimeObject* ___U3CU3E7__wrap2_8;
};
struct U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	RuntimeObject* ___U3CU3E2__current_1;
	int32_t ___U3CU3El__initialThreadId_2;
	RuntimeObject* ___comparer_3;
	RuntimeObject* ___U3CU3E3__comparer_4;
	RuntimeObject* ___source_5;
	RuntimeObject* ___U3CU3E3__source_6;
	Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* ___U3CsetU3E5__2_7;
	RuntimeObject* ___U3CU3E7__wrap2_8;
};
struct U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392 : public RuntimeObject {};
struct U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	RuntimeObject* ___U3CU3E2__current_1;
	Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* ___head_2;
	Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* ___tail_3;
	int32_t ___tailTail_4;
	int32_t ___headHead_5;
	ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* ___U3CU3E4__this_6;
	int32_t ___U3CheadTailU3E5__2_7;
	int32_t ___U3CiU3E5__3_8;
	Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* ___U3CsU3E5__4_9;
	int32_t ___U3CiU3E5__5_10;
};
struct U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12 : public RuntimeObject {};
struct U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	int32_t ___U3CU3E2__current_1;
	int32_t ___U3CU3El__initialThreadId_2;
	RuntimeObject* ___rootIds_3;
	RuntimeObject* ___U3CU3E3__rootIds_4;
	TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* ___U3CU3E4__this_5;
	RuntimeObject* ___U3CcurrentIteratorU3E5__1_6;
	bool ___U3ChasNextU3E5__2_7;
	int32_t ___U3CcurrentItemIdU3E5__3_8;
};
struct U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	int32_t ___U3CU3E2__current_1;
	int32_t ___U3CU3El__initialThreadId_2;
	RuntimeObject* ___rootIds_3;
	RuntimeObject* ___U3CU3E3__rootIds_4;
	TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* ___U3CU3E4__this_5;
	RuntimeObject* ___U3CcurrentIteratorU3E5__1_6;
	bool ___U3ChasNextU3E5__2_7;
	int32_t ___U3CcurrentItemIdU3E5__3_8;
};
struct AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773 : public RuntimeObject {};
struct ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF  : public RuntimeObject
{
	Tables_t14D3B197594232ACFA76B87EB205EB3661F6EAA6* ____tables_0;
	RuntimeObject* ____comparer_1;
	bool ____growLockArray_2;
	int32_t ____budget_3;
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ____serializationArray_4;
	int32_t ____serializationConcurrencyLevel_5;
	int32_t ____serializationCapacity_6;
};
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812  : public RuntimeObject
{
	Tables_tD895B223685217918C345ED5D52074F7E29E5F95* ____tables_0;
	RuntimeObject* ____comparer_1;
	bool ____growLockArray_2;
	int32_t ____budget_3;
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ____serializationArray_4;
	int32_t ____serializationConcurrencyLevel_5;
	int32_t ____serializationCapacity_6;
};
struct ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4  : public RuntimeObject
{
	RuntimeObject* ____crossSegmentLock_0;
	Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* ____tail_1;
	Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* ____head_2;
};
struct ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56  : public RuntimeObject
{
	RuntimeObject* ____crossSegmentLock_0;
	Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* ____tail_1;
	Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* ____head_2;
};
struct EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65  : public RuntimeObject
{
};
struct EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5  : public RuntimeObject
{
};
struct EnumerableSorter_1_t33B4B1FE8E6E19EEFB45A8EC216B39E6DDF2FDDD  : public RuntimeObject
{
};
struct EnumerableSorter_1_t4439350BEBB5B5B9E8D43BBDBB271F1DC472270B  : public RuntimeObject
{
};
struct EnumerableSorter_1_t9DF0BF2FF3A689EB41C9CE2B42D3A91F5776B3AD  : public RuntimeObject
{
};
struct EnumerableSorter_1_t748424BBEB090E58B6D364ADABD271AC18B4C251  : public RuntimeObject
{
};
struct Node_t821211F0535E80E80FDC8FFB600F681E98286BF0  : public RuntimeObject
{
	RuntimeObject* ____key_0;
	RuntimeObject* ____value_1;
	Node_t821211F0535E80E80FDC8FFB600F681E98286BF0* ____next_2;
	int32_t ____hashcode_3;
};
struct Node_tC5111E77A2002D0AD173457666915D4D0BD59865 : public RuntimeObject {};
struct OrderedEnumerable_1_t2F9F5060B969113C249D3BC84B7DA3D9C9DCD84B  : public RuntimeObject
{
	RuntimeObject* ___source_0;
};
struct OrderedEnumerable_1_t8EEABC87399C51697FF13CC459FC26CA5A5857DA  : public RuntimeObject
{
	RuntimeObject* ___source_0;
};
struct OrderedEnumerable_1_tFFE2D41E419F999B45E7C9636190F547FE16EA00  : public RuntimeObject
{
	RuntimeObject* ___source_0;
};
struct OrderedEnumerable_1_tA6269C578EE7D3423C79F32258D574795AEF1151  : public RuntimeObject
{
	RuntimeObject* ___source_0;
};
struct OrderedEnumerable_1_t635FACC705EB8D479616971CD818376DC3A5AF51  : public RuntimeObject
{
	RuntimeObject* ___source_0;
};
struct OrderedEnumerable_1_t9FC254A996960AAA55B70FA7417B36D16C123B28  : public RuntimeObject
{
	RuntimeObject* ___source_0;
};
struct Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___buckets_0;
	SlotU5BU5D_tB71D35C12A91C058A20499E93B4CE990F48FD301* ___slots_1;
	int32_t ___count_2;
	int32_t ___freeList_3;
	RuntimeObject* ___comparer_4;
};
struct Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___buckets_0;
	SlotU5BU5D_tDFA127B491A86C278F29B78F2D76CBA3E1DB9B5F* ___slots_1;
	int32_t ___count_2;
	int32_t ___freeList_3;
	RuntimeObject* ___comparer_4;
};
struct Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___buckets_0;
	SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* ___slots_1;
	int32_t ___count_2;
	int32_t ___freeList_3;
	RuntimeObject* ___comparer_4;
};
struct Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098  : public RuntimeObject
{
	IEnumerator_1U5BU5D_tABFB842A3C97DCF253D43C9513DA44AC1911FF7A* ____array_0;
	int32_t ____size_1;
	int32_t ____version_2;
	RuntimeObject* ____syncRoot_3;
};
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	int32_t ____size_1;
	int32_t ____version_2;
	RuntimeObject* ____syncRoot_3;
};
struct Tables_t14D3B197594232ACFA76B87EB205EB3661F6EAA6  : public RuntimeObject
{
	NodeU5BU5D_t2D9C2B502AE419E91BEF20D4861A838720732B76* ____buckets_0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____locks_1;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____countPerLock_2;
};
struct Tables_tD895B223685217918C345ED5D52074F7E29E5F95  : public RuntimeObject
{
	NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* ____buckets_0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____locks_1;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____countPerLock_2;
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
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
typedef Il2CppFullySharedGenericStruct AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52;
struct Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD 
{
	ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* ___items_0;
	int32_t ___count_1;
};
struct Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10 
{
	GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___items_0;
	int32_t ___count_1;
};
struct Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14 
{
	MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* ___items_0;
	int32_t ___count_1;
};
struct Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD 
{
	MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* ___items_0;
	int32_t ___count_1;
};
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
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	RuntimeObject* ___key_0;
	RuntimeObject* ___value_1;
};
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177 
{
	RuntimeObject* ___Item_0;
	int32_t ___SequenceNumber_1;
};
typedef Il2CppFullySharedGenericStruct Slot_t15722483BF8D3D9AE95C0F301EAB5E41F7E1E2B9;
struct TreeData_1_t52F9997F4F3827B6D2DDD108B0B5F8007C1054DE 
{
	RuntimeObject* ___m_RootItemIds_0;
	Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* ___m_Tree_1;
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_ParentIds_2;
	Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* ___m_ChildrenIds_3;
};
struct TreeData_1_tA6CE8DFD2D1FAE745298DC264034D9D608994998 
{
	RuntimeObject* ___m_RootItemIds_0;
	Dictionary_2_tEBE1E11ABD22357FDFD12EF5F2F7CDC6378162C0* ___m_Tree_1;
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_ParentIds_2;
	Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* ___m_ChildrenIds_3;
};
struct TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 
{
	int32_t ___U3CidU3Ek__BackingField_0;
	RuntimeObject* ___m_Data_1;
	RuntimeObject* ___m_Children_2;
};
typedef Il2CppFullySharedGenericStruct TreeViewItemData_1_t3E2C741B77BE0CA5BE82E36F13DE84F4E7AE117C;
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
struct UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 
{
	RuntimeObject* ___source_0;
	bool ___result_1;
	int16_t ___token_2;
};
typedef Il2CppFullySharedGenericStruct UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483;
struct ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A 
{
	RuntimeObject* ___Item1_0;
	RuntimeObject* ___Item2_1;
};
struct AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 
{
	RuntimeObject* ___runnerPromise_0;
	Exception_t* ___ex_1;
	RuntimeObject* ___debuggingId_2;
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
struct GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 
{
	float ___m_XCoordinate_0;
	float ___m_YCoordinate_1;
};
struct GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E 
{
	float ___m_XPlacement_0;
	float ___m_YPlacement_1;
	float ___m_XAdvance_2;
	float ___m_YAdvance_3;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value_0;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value_0;
};
struct IntPtr_t 
{
	void* ___m_value_0;
};
struct MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 
{
	float ___m_XPositionAdjustment_0;
	float ___m_YPositionAdjustment_1;
};
struct PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					char ___Head_0_OffsetPadding[128];
					int32_t ___Head_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Head_0_OffsetPadding_forAlignmentOnly[128];
					int32_t ___Head_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___Tail_1_OffsetPadding[256];
					int32_t ___Tail_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Tail_1_OffsetPadding_forAlignmentOnly[256];
					int32_t ___Tail_1_forAlignmentOnly;
				};
			};
		};
		uint8_t PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8__padding[384];
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
struct U3CGetEnumeratorU3Ed__1_t428C31FE719799CD61A887870EE46ED9488AAFAC  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___U3CU3E2__current_1;
	OrderedEnumerable_1_t2F9F5060B969113C249D3BC84B7DA3D9C9DCD84B* ___U3CU3E4__this_2;
	Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD ___U3CbufferU3E5__2_3;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__3_4;
	int32_t ___U3CiU3E5__4_5;
};
struct U3CGetEnumeratorU3Ed__1_t6D4BC5B68087352E56482B91E7BADA70BEB38CD2  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	RuntimeObject* ___U3CU3E2__current_1;
	OrderedEnumerable_1_t635FACC705EB8D479616971CD818376DC3A5AF51* ___U3CU3E4__this_2;
	Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59 ___U3CbufferU3E5__2_3;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__3_4;
	int32_t ___U3CiU3E5__4_5;
};
struct U3CGetEnumeratorU3Ed__1_t0C0E1C4A0A69A2FDEE7A295C343DBFCB38E1E136 : public RuntimeObject {};
struct U3CGetEnumeratorU3Ed__35_tFBB72033DD97EBEE1D1AB495DD3A0C1827242215  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___U3CU3E2__current_1;
	ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* ___U3CU3E4__this_2;
	NodeU5BU5D_t2D9C2B502AE419E91BEF20D4861A838720732B76* ___U3CbucketsU3E5__2_3;
	int32_t ___U3CiU3E5__3_4;
	Node_t821211F0535E80E80FDC8FFB600F681E98286BF0* ___U3CcurrentU3E5__4_5;
};
struct U3CGetEnumeratorU3Ed__35_t5851A752199A6195E7EB427BC50C5FFCAB8D4E6E : public RuntimeObject {};
struct U3CGetItemIdsU3Ed__9_tF93733F63FD5F03443983B07568D05E67F0A16BB  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	int32_t ___U3CU3E2__current_1;
	int32_t ___U3CU3El__initialThreadId_2;
	RuntimeObject* ___items_3;
	RuntimeObject* ___U3CU3E3__items_4;
	RuntimeObject* ___U3CU3Es__1_5;
	TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___U3CitemU3E5__2_6;
};
struct U3CGetItemIdsU3Ed__9_t1C187ED9EE7F68E40E20D3F5EAB3CCA02DE6AEA6 : public RuntimeObject {};
struct Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 
{
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 ___task_0;
};
typedef Il2CppFullySharedGenericStruct Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C;
struct Segment_tBE464478C92438E20009981FD7F953F796D7F3B2  : public RuntimeObject
{
	SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B* ____slots_0;
	int32_t ____slotsMask_1;
	PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8 ____headAndTail_2;
	bool ____preservedForObservation_3;
	bool ____frozenForEnqueues_4;
	Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* ____nextSegment_5;
};
struct Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912  : public RuntimeObject
{
	SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* ____slots_0;
	int32_t ____slotsMask_1;
	PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8 ____headAndTail_2;
	bool ____preservedForObservation_3;
	bool ____frozenForEnqueues_4;
	Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* ____nextSegment_5;
};
struct TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96  : public RuntimeObject
{
	TreeData_1_t52F9997F4F3827B6D2DDD108B0B5F8007C1054DE ___m_TreeData_0;
	Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* ___m_IteratorStack_1;
};
struct TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E  : public RuntimeObject
{
	TreeData_1_tA6CE8DFD2D1FAE745298DC264034D9D608994998 ___m_TreeData_0;
	Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* ___m_IteratorStack_1;
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
struct GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 
{
	uint32_t ___m_GlyphIndex_0;
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E ___m_GlyphValueRecord_1;
};
struct MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 
{
	uint32_t ___m_BaseGlyphID_0;
	GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 ___m_BaseGlyphAnchorPoint_1;
	uint32_t ___m_MarkGlyphID_2;
	MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 ___m_MarkPositionAdjustment_3;
};
struct MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C 
{
	uint32_t ___m_BaseMarkGlyphID_0;
	GlyphAnchorPoint_t581FDCAD5A1D0F3B129968FAEF20C113AAB0BC08 ___m_BaseMarkGlyphAnchorPoint_1;
	uint32_t ___m_CombiningMarkGlyphID_2;
	MarkPositionAdjustment_t2523798D56F14A93A080D9D1298498325A51F436 ___m_CombiningMarkPositionAdjustment_3;
};
struct MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5  : public RuntimeObject
{
	UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2 ___completionSource_0;
};
struct SwitchToMainThreadAwaitable_t30D0968092E3CD2E8BAE2DEF136FC76A3695E9F8 
{
	int32_t ___playerLoopTiming_0;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_1;
};
struct SwitchToMainThreadAwaitable_t30D0968092E3CD2E8BAE2DEF136FC76A3695E9F8_marshaled_pinvoke
{
	int32_t ___playerLoopTiming_0;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke ___cancellationToken_1;
};
struct SwitchToMainThreadAwaitable_t30D0968092E3CD2E8BAE2DEF136FC76A3695E9F8_marshaled_com
{
	int32_t ___playerLoopTiming_0;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com ___cancellationToken_1;
};
struct Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F 
{
	int32_t ___playerLoopTiming_0;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_1;
};
struct Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F_marshaled_pinvoke
{
	int32_t ___playerLoopTiming_0;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke ___cancellationToken_1;
};
struct Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F_marshaled_com
{
	int32_t ___playerLoopTiming_0;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com ___cancellationToken_1;
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
struct U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	_CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354* ___U3CU3E4__this_2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_3;
};
struct U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746* ___U3CU3E4__this_2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_3;
};
struct U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* ___U3CU3E4__this_2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_3;
};
struct U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* ___U3CU3E4__this_2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_3;
};
struct U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* ___U3CU3E4__this_2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_3;
};
struct U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* ___U3CU3E4__this_2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_3;
};
struct U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* ___U3CU3E4__this_2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_3;
};
struct U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* ___U3CU3E4__this_2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_3;
};
struct U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* ___U3CU3E4__this_2;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_3;
};
struct U3CElementAtAsyncU3Ed__0_1_t828967E53B1F0CA7BDCEF9D605C46215C4EC3044 : public RuntimeObject {};
struct U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E : public RuntimeObject {};
struct U3CFirstAsyncU3Ed__0_1_t8FEFBA058854F78C0D1DDC66BF35661E1FF7B142 : public RuntimeObject {};
struct U3CFirstAsyncU3Ed__1_1_tDD5E86442F853ED2127AA888C9B23F5CF897E394 : public RuntimeObject {};
struct U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03 : public RuntimeObject {};
struct U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC : public RuntimeObject {};
struct U3CForEachAsyncU3Ed__0_1_t9582606A1F1A2D59AA951BBAAAC83A1CC5679B2E  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___action_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	RuntimeObject* ___U3CeU3E5__1_5;
	RuntimeObject* ___U3CU3Es__2_6;
	int32_t ___U3CU3Es__3_7;
	bool ___U3CU3Es__4_8;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_9;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_10;
};
struct U3CForEachAsyncU3Ed__1_1_t10C921BC3C792263B1FFEF9A54C79CD1EE8F4FD4  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Action_2_t983A40F124DCF06E5CEB4DE585CE7204D7F7E25C* ___action_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	RuntimeObject* ___U3CeU3E5__1_5;
	RuntimeObject* ___U3CU3Es__2_6;
	int32_t ___U3CU3Es__3_7;
	int32_t ___U3CindexU3E5__4_8;
	bool ___U3CU3Es__5_9;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_10;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_11;
};
struct U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_2_tB9800595B3251D2492E40667A6C05061784D48FB* ___action_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	RuntimeObject* ___U3CeU3E5__1_5;
	RuntimeObject* ___U3CU3Es__2_6;
	int32_t ___U3CU3Es__3_7;
	bool ___U3CU3Es__4_8;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_9;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_10;
};
struct U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_t132FDF1783142B71AC1D1F8BB2FF80D9FAC32BFC* ___action_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	RuntimeObject* ___U3CeU3E5__1_5;
	RuntimeObject* ___U3CU3Es__2_6;
	int32_t ___U3CU3Es__3_7;
	int32_t ___U3CindexU3E5__4_8;
	bool ___U3CU3Es__5_9;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_10;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_11;
};
struct U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_3_tEBFC185F508D6150079151B2395F5DE7B54CC752* ___action_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	RuntimeObject* ___U3CeU3E5__1_5;
	RuntimeObject* ___U3CU3Es__2_6;
	int32_t ___U3CU3Es__3_7;
	bool ___U3CU3Es__4_8;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_9;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_10;
};
struct U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	RuntimeObject* ___source_2;
	Func_4_t06A967E03EDC626BCFB4875FDF8A19728ADC72BC* ___action_3;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	RuntimeObject* ___U3CeU3E5__1_5;
	RuntimeObject* ___U3CU3Es__2_6;
	int32_t ___U3CU3Es__3_7;
	int32_t ___U3CindexU3E5__4_8;
	bool ___U3CU3Es__5_9;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_10;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__2_11;
};
struct U3CForgetCoreWithCatchU3Ed__21_1_tC1CCDBDBC539D1E312103E6683A61535E5D194E5 : public RuntimeObject {};
struct U3CGetEnumeratorU3Ed__1_t3DA927506BB3A75FB0C275BE0E1E951C2FA72436  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 ___U3CU3E2__current_1;
	OrderedEnumerable_1_tFFE2D41E419F999B45E7C9636190F547FE16EA00* ___U3CU3E4__this_2;
	Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14 ___U3CbufferU3E5__2_3;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__3_4;
	int32_t ___U3CiU3E5__4_5;
};
struct U3CGetEnumeratorU3Ed__1_t86CE4D514C7EA04C708491BC8E9D7FCB75DB8A9F  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C ___U3CU3E2__current_1;
	OrderedEnumerable_1_tA6269C578EE7D3423C79F32258D574795AEF1151* ___U3CU3E4__this_2;
	Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD ___U3CbufferU3E5__2_3;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__3_4;
	int32_t ___U3CiU3E5__4_5;
};
struct U3CLastAsyncU3Ed__0_1_t38AFC35C81A53570FC7FA05BED4F1D9156275B70 : public RuntimeObject {};
struct U3CLastAsyncU3Ed__1_1_t0FD9210854E67C87AE6374B78E7F411EE5178410 : public RuntimeObject {};
struct U3CLastAwaitAsyncU3Ed__2_1_tC239805AACCC4C0F81C94B1270D7382B72745616 : public RuntimeObject {};
struct U3CLastAwaitWithCancellationAsyncU3Ed__3_1_tE16CA9A4999761FA673AE43AC096DABBF15267E4 : public RuntimeObject {};
struct _CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct _CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};
struct GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E 
{
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_FirstAdjustmentRecord_0;
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_SecondAdjustmentRecord_1;
	int32_t ___m_FeatureLookupFlags_2;
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
struct U3CGetEnumeratorU3Ed__1_t35287071076620851350DEE5A7358F21C466DA90  : public RuntimeObject
{
	int32_t ___U3CU3E1__state_0;
	GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___U3CU3E2__current_1;
	OrderedEnumerable_1_t8EEABC87399C51697FF13CC459FC26CA5A5857DA* ___U3CU3E4__this_2;
	Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10 ___U3CbufferU3E5__2_3;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CmapU3E5__3_4;
	int32_t ___U3CiU3E5__4_5;
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
struct Action_2_t983A40F124DCF06E5CEB4DE585CE7204D7F7E25C  : public MulticastDelegate_t
{
};
struct Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C  : public MulticastDelegate_t
{
};
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};
struct Func_2_tB9800595B3251D2492E40667A6C05061784D48FB  : public MulticastDelegate_t
{
};
struct Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814  : public MulticastDelegate_t
{
};
struct Func_3_tEBFC185F508D6150079151B2395F5DE7B54CC752  : public MulticastDelegate_t
{
};
struct Func_3_t132FDF1783142B71AC1D1F8BB2FF80D9FAC32BFC  : public MulticastDelegate_t
{
};
struct Func_4_t06A967E03EDC626BCFB4875FDF8A19728ADC72BC  : public MulticastDelegate_t
{
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName_18;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue_19;
};
struct ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF_StaticFields
{
	bool ___s_isValueWriteAtomic_7;
};
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812_StaticFields
{
	bool ___s_isValueWriteAtomic_7;
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
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_StaticFields
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CanceledUniTask_2;
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CompletedTask_3;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock_0;
};
struct _CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate_1;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate_2;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate_3;
};
struct _CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate_1;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate_2;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate_3;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed4Delegate_4;
};
struct _CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate_1;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate_2;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate_3;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed4Delegate_4;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed5Delegate_5;
};
struct _CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate_1;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate_2;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate_3;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed4Delegate_4;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed5Delegate_5;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed6Delegate_6;
};
struct _CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate_1;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate_2;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate_3;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed4Delegate_4;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed5Delegate_5;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed6Delegate_6;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed7Delegate_7;
};
struct _CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate_1;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate_2;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate_3;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed4Delegate_4;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed5Delegate_5;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed6Delegate_6;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed7Delegate_7;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed8Delegate_8;
};
struct _CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate_1;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate_2;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate_3;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed4Delegate_4;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed5Delegate_5;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed6Delegate_6;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed7Delegate_7;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed8Delegate_8;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed9Delegate_9;
};
struct _CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate_1;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate_2;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate_3;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed4Delegate_4;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed5Delegate_5;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed6Delegate_6;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed7Delegate_7;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed8Delegate_8;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed9Delegate_9;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed10Delegate_10;
};
struct _CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed1Delegate_1;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed2Delegate_2;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed3Delegate_3;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed4Delegate_4;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed5Delegate_5;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed6Delegate_6;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed7Delegate_7;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed8Delegate_8;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed9Delegate_9;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed10Delegate_10;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Completed11Delegate_11;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177 m_Items[1];

	inline Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item_0), (void*)NULL);
	}
	inline Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_t36E7BD2C949C62077BDCD89A5CA092508944F177 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item_0), (void*)NULL);
	}
};
struct SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444  : public RuntimeArray
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
struct ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962  : public RuntimeArray
{
	ALIGN_FIELD (8) ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A m_Items[1];

	inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item2_1), (void*)NULL);
		#endif
	}
	inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item2_1), (void*)NULL);
		#endif
	}
};
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
struct GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7  : public RuntimeArray
{
	ALIGN_FIELD (8) GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E m_Items[1];

	inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E value)
	{
		m_Items[index] = value;
	}
};
struct MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911  : public RuntimeArray
{
	ALIGN_FIELD (8) MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 m_Items[1];

	inline MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 value)
	{
		m_Items[index] = value;
	}
};
struct MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061  : public RuntimeArray
{
	ALIGN_FIELD (8) MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C m_Items[1];

	inline MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C value)
	{
		m_Items[index] = value;
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
struct NodeU5BU5D_t2D9C2B502AE419E91BEF20D4861A838720732B76  : public RuntimeArray
{
	ALIGN_FIELD (8) Node_t821211F0535E80E80FDC8FFB600F681E98286BF0* m_Items[1];

	inline Node_t821211F0535E80E80FDC8FFB600F681E98286BF0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Node_t821211F0535E80E80FDC8FFB600F681E98286BF0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Node_t821211F0535E80E80FDC8FFB600F681E98286BF0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Node_t821211F0535E80E80FDC8FFB600F681E98286BF0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Node_t821211F0535E80E80FDC8FFB600F681E98286BF0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Node_t821211F0535E80E80FDC8FFB600F681E98286BF0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A  : public RuntimeArray
{
	ALIGN_FIELD (8) Node_tC5111E77A2002D0AD173457666915D4D0BD59865* m_Items[1];

	inline Node_tC5111E77A2002D0AD173457666915D4D0BD59865* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Node_tC5111E77A2002D0AD173457666915D4D0BD59865** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Node_tC5111E77A2002D0AD173457666915D4D0BD59865* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Node_tC5111E77A2002D0AD173457666915D4D0BD59865* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Node_tC5111E77A2002D0AD173457666915D4D0BD59865** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Node_tC5111E77A2002D0AD173457666915D4D0BD59865* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mBE6FC6D3BFB3183D106C6DE3A94F3D52D38C5CED_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_mB5D43C4A18D1C039180B81EB91FD0156BB04A99F_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Set_1__ctor_mB7F0167922AAC91B3E4FCF3843619F460CFF987E_gshared (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Set_1_Add_m04B0E9DF64E76BF3ED1C5ECFDC36BFA3555A0287_gshared (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1__ctor_m708FAF31FDC19E6FDE5E944A9128A9AEF1F161F2_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_mD2812ADD8FA30AB5E393A694274076C91F11D02E_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mCFD862B8E1AE48B3A2B7C3D64EFE43012DADE748_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_m8392F600C3472440C079089D02C19C85711BAE38_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Set_1__ctor_mC96DA58C0B3189E9298064337C1F05A5803C1727_gshared (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Set_1_Add_m8646609CFE62CC764D05B694DC78391745C077F4_gshared (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1__ctor_m86F87231C35710F52679F2D970FEDC4F70710B0A_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m7B0039E6CC03FB4B20E61AEE0C9527FAE46C4377_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Segment_get_FreezeOffset_m402D47C4B47FF6B763734B006DA71BA5DBC42582_gshared (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentQueue_1_GetItemWhenAvailable_m8CD12D6BE7E6FAE430B1FDF9DC5673FA0542C7F9_gshared (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* __this, Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* ___0_segment, int32_t ___1_i, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mD550E89582979ECB0D6E6D68F0237FC14708BE85_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TreeData_1_get_rootItemIds_m8307EE3034C4CEC53C0EB7AD488E0126B2E03C53_gshared_inline (TreeData_1_t52F9997F4F3827B6D2DDD108B0B5F8007C1054DE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TreeDataController_1_HasChildren_m2978AF4CB8A5BDDE630F44B9DE471D892C4340BC_gshared (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeDataController_1_GetChildrenIds_m0C39B4E828DE3829426145460DC781C94E340B93_gshared (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllItemIdsU3Ed__13__ctor_m6E4F3CA3E51DDBC0A7879D3F837163EE98151AA6_gshared (U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllItemIdsU3Ed__13_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mA0F5E231A5B6A2DFCEB87B054B8F7B467439EF3F_gshared (U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_mE9AE2968725B445ABEBD61A3A7C93B5C2204928E_gshared (Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableSorter_1_Sort_m893109DECEB392FD9D2D63B17FFF04EA3B8A6BEE_gshared (EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65* __this, ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* ___0_elements, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_mCA3CAB859EF638AEA56347DA74B5CABAAB17F76D_gshared (Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableSorter_1_Sort_m76A2E3BB759F0B9F80B75384E4FB17875CA4829D_gshared (EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5* __this, GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___0_elements, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_m086C12C5694E0D6EFB7A2B3FE005444773F1BC8B_gshared (Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableSorter_1_Sort_m587E268B44E37C43725852E9B98275323B905602_gshared (EnumerableSorter_1_t33B4B1FE8E6E19EEFB45A8EC216B39E6DDF2FDDD* __this, MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* ___0_elements, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_m9178E0FB078F890A98854B06AF9C08C14061F4AC_gshared (Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableSorter_1_Sort_m0B1E1BD2E50D9C85A518873DD8F2D3109DDB872C_gshared (EnumerableSorter_1_t4439350BEBB5B5B9E8D43BBDBB271F1DC472270B* __this, MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* ___0_elements, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_m072DE84AEC969582EB5760D4835747F9DC0C02AF_gshared (Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableSorter_1_Sort_m8685D15BDC4342DFFAE8D12488D213864CFDC321_gshared (EnumerableSorter_1_t9DF0BF2FF3A689EB41C9CE2B42D3A91F5776B3AD* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_elements, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_1__ctor_m55137EEF7AF9E0883A438776A066DA5520FFDE49_gshared (Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetItemIdsU3Ed__9_U3CU3Em__Finally1_m7FEEF83D042C9F55915DED87C24CBCCB49CDCB39_gshared (U3CGetItemIdsU3Ed__9_tF93733F63FD5F03443983B07568D05E67F0A16BB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetItemIdsU3Ed__9_System_IDisposable_Dispose_mC1561B8D7EA9514ED8CF37CB3E04EB39212D5093_gshared (U3CGetItemIdsU3Ed__9_tF93733F63FD5F03443983B07568D05E67F0A16BB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TreeViewItemData_1_get_id_mCA0344199EDCD8BB5C795EDCC3DD0B104A9F3A8C_gshared_inline (TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetItemIdsU3Ed__9__ctor_m356BEE7B297159631EE058B1F99E3FAF5C0729BB_gshared (U3CGetItemIdsU3Ed__9_tF93733F63FD5F03443983B07568D05E67F0A16BB* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetItemIdsU3Ed__9_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_m9361AD9B704EEB73EC817CC998C86B5D94FE4A89_gshared (U3CGetItemIdsU3Ed__9_tF93733F63FD5F03443983B07568D05E67F0A16BB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
inline void U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mBE6FC6D3BFB3183D106C6DE3A94F3D52D38C5CED (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F*, const RuntimeMethod*))U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mBE6FC6D3BFB3183D106C6DE3A94F3D52D38C5CED_gshared)(__this, method);
}
inline void U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_mB5D43C4A18D1C039180B81EB91FD0156BB04A99F (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F*, const RuntimeMethod*))U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_mB5D43C4A18D1C039180B81EB91FD0156BB04A99F_gshared)(__this, method);
}
inline void Set_1__ctor_mB7F0167922AAC91B3E4FCF3843619F460CFF987E (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF*, RuntimeObject*, const RuntimeMethod*))Set_1__ctor_mB7F0167922AAC91B3E4FCF3843619F460CFF987E_gshared)(__this, ___0_comparer, method);
}
inline bool Set_1_Add_m04B0E9DF64E76BF3ED1C5ECFDC36BFA3555A0287 (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF*, int32_t, const RuntimeMethod*))Set_1_Add_m04B0E9DF64E76BF3ED1C5ECFDC36BFA3555A0287_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
inline void U3CDistinctIteratorU3Ed__68_1__ctor_m708FAF31FDC19E6FDE5E944A9128A9AEF1F161F2 (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F*, int32_t, const RuntimeMethod*))U3CDistinctIteratorU3Ed__68_1__ctor_m708FAF31FDC19E6FDE5E944A9128A9AEF1F161F2_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_mD2812ADD8FA30AB5E393A694274076C91F11D02E (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F*, const RuntimeMethod*))U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_mD2812ADD8FA30AB5E393A694274076C91F11D02E_gshared)(__this, method);
}
inline void U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mCFD862B8E1AE48B3A2B7C3D64EFE43012DADE748 (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED*, const RuntimeMethod*))U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mCFD862B8E1AE48B3A2B7C3D64EFE43012DADE748_gshared)(__this, method);
}
inline void U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_m8392F600C3472440C079089D02C19C85711BAE38 (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED*, const RuntimeMethod*))U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_m8392F600C3472440C079089D02C19C85711BAE38_gshared)(__this, method);
}
inline void Set_1__ctor_mC96DA58C0B3189E9298064337C1F05A5803C1727 (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921*, RuntimeObject*, const RuntimeMethod*))Set_1__ctor_mC96DA58C0B3189E9298064337C1F05A5803C1727_gshared)(__this, ___0_comparer, method);
}
inline bool Set_1_Add_m8646609CFE62CC764D05B694DC78391745C077F4 (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* __this, RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921*, RuntimeObject*, const RuntimeMethod*))Set_1_Add_m8646609CFE62CC764D05B694DC78391745C077F4_gshared)(__this, ___0_value, method);
}
inline void U3CDistinctIteratorU3Ed__68_1__ctor_m86F87231C35710F52679F2D970FEDC4F70710B0A (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED*, int32_t, const RuntimeMethod*))U3CDistinctIteratorU3Ed__68_1__ctor_m86F87231C35710F52679F2D970FEDC4F70710B0A_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m7B0039E6CC03FB4B20E61AEE0C9527FAE46C4377 (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED*, const RuntimeMethod*))U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m7B0039E6CC03FB4B20E61AEE0C9527FAE46C4377_gshared)(__this, method);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Error_ArgumentOutOfRange_mB12CA2A5A28BE69DF8EFD9AB4FBD5DDD4C27AD13_inline (String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803 (Exception_t* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330 (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
inline int32_t Segment_get_FreezeOffset_m402D47C4B47FF6B763734B006DA71BA5DBC42582 (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*, const RuntimeMethod*))Segment_get_FreezeOffset_m402D47C4B47FF6B763734B006DA71BA5DBC42582_gshared)(__this, method);
}
inline RuntimeObject* ConcurrentQueue_1_GetItemWhenAvailable_m8CD12D6BE7E6FAE430B1FDF9DC5673FA0542C7F9 (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* __this, Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* ___0_segment, int32_t ___1_i, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4*, Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*, int32_t, const RuntimeMethod*))ConcurrentQueue_1_GetItemWhenAvailable_m8CD12D6BE7E6FAE430B1FDF9DC5673FA0542C7F9_gshared)(__this, ___0_segment, ___1_i, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SwitchToMainThreadAwaitable_t30D0968092E3CD2E8BAE2DEF136FC76A3695E9F8 UniTask_SwitchToMainThread_mBC162C95F0ED605F8E5416A60CCA153E0993CBF1 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F SwitchToMainThreadAwaitable_GetAwaiter_m66A0F6F462885727A38028656D11B51CEA32BD29 (SwitchToMainThreadAwaitable_t30D0968092E3CD2E8BAE2DEF136FC76A3695E9F8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m8B4E3723A3CC1B1E8359E40C0766081C55A5BC37 (Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Awaiter_GetResult_m8383C6B4850150162ECAA6464603B95FD2231CB2 (Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F* __this, const RuntimeMethod* method) ;
inline void Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* __this, Exception_t* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*, Exception_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3 (Exception_t* ___0_ex, const RuntimeMethod* method) ;
inline void Stack_1_Clear_m46116312544FC207DACC2B68B9C50516A891CC31 (Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098*, const RuntimeMethod*))Stack_1_Clear_mD550E89582979ECB0D6E6D68F0237FC14708BE85_gshared)(__this, method);
}
inline RuntimeObject* TreeData_1_get_rootItemIds_m8307EE3034C4CEC53C0EB7AD488E0126B2E03C53_inline (TreeData_1_t52F9997F4F3827B6D2DDD108B0B5F8007C1054DE* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TreeData_1_t52F9997F4F3827B6D2DDD108B0B5F8007C1054DE*, const RuntimeMethod*))TreeData_1_get_rootItemIds_m8307EE3034C4CEC53C0EB7AD488E0126B2E03C53_gshared_inline)(__this, method);
}
inline int32_t Stack_1_get_Count_mD0C34F3CD9C04683C922947B2AD9222B6266A0F2_inline (Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098*, const RuntimeMethod*))Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline)(__this, method);
}
inline RuntimeObject* Stack_1_Pop_m6480166B79018CBA0363B56AB006AD4DFA645B01 (Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
inline bool TreeDataController_1_HasChildren_m2978AF4CB8A5BDDE630F44B9DE471D892C4340BC (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, const RuntimeMethod* method)
{
	return ((  bool (*) (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*, int32_t, const RuntimeMethod*))TreeDataController_1_HasChildren_m2978AF4CB8A5BDDE630F44B9DE471D892C4340BC_gshared)(__this, ___0_id, method);
}
inline void Stack_1_Push_m6BA4979D77CE3B4C596D189FBED859EB9B7014B0 (Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098*, RuntimeObject*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___0_item, method);
}
inline RuntimeObject* TreeDataController_1_GetChildrenIds_m0C39B4E828DE3829426145460DC781C94E340B93 (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*, int32_t, const RuntimeMethod*))TreeDataController_1_GetChildrenIds_m0C39B4E828DE3829426145460DC781C94E340B93_gshared)(__this, ___0_id, method);
}
inline void U3CGetAllItemIdsU3Ed__13__ctor_m6E4F3CA3E51DDBC0A7879D3F837163EE98151AA6 (U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274*, int32_t, const RuntimeMethod*))U3CGetAllItemIdsU3Ed__13__ctor_m6E4F3CA3E51DDBC0A7879D3F837163EE98151AA6_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline RuntimeObject* U3CGetAllItemIdsU3Ed__13_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mA0F5E231A5B6A2DFCEB87B054B8F7B467439EF3F (U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274*, const RuntimeMethod*))U3CGetAllItemIdsU3Ed__13_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mA0F5E231A5B6A2DFCEB87B054B8F7B467439EF3F_gshared)(__this, method);
}
inline void Buffer_1__ctor_mE9AE2968725B445ABEBD61A3A7C93B5C2204928E (Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD* __this, RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD*, RuntimeObject*, const RuntimeMethod*))Buffer_1__ctor_mE9AE2968725B445ABEBD61A3A7C93B5C2204928E_gshared)(__this, ___0_source, method);
}
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableSorter_1_Sort_m893109DECEB392FD9D2D63B17FFF04EA3B8A6BEE (EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65* __this, ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* ___0_elements, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65*, ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962*, int32_t, const RuntimeMethod*))EnumerableSorter_1_Sort_m893109DECEB392FD9D2D63B17FFF04EA3B8A6BEE_gshared)(__this, ___0_elements, ___1_count, method);
}
inline void Buffer_1__ctor_mCA3CAB859EF638AEA56347DA74B5CABAAB17F76D (Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10* __this, RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10*, RuntimeObject*, const RuntimeMethod*))Buffer_1__ctor_mCA3CAB859EF638AEA56347DA74B5CABAAB17F76D_gshared)(__this, ___0_source, method);
}
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableSorter_1_Sort_m76A2E3BB759F0B9F80B75384E4FB17875CA4829D (EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5* __this, GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___0_elements, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5*, GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7*, int32_t, const RuntimeMethod*))EnumerableSorter_1_Sort_m76A2E3BB759F0B9F80B75384E4FB17875CA4829D_gshared)(__this, ___0_elements, ___1_count, method);
}
inline void Buffer_1__ctor_m086C12C5694E0D6EFB7A2B3FE005444773F1BC8B (Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14* __this, RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14*, RuntimeObject*, const RuntimeMethod*))Buffer_1__ctor_m086C12C5694E0D6EFB7A2B3FE005444773F1BC8B_gshared)(__this, ___0_source, method);
}
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableSorter_1_Sort_m587E268B44E37C43725852E9B98275323B905602 (EnumerableSorter_1_t33B4B1FE8E6E19EEFB45A8EC216B39E6DDF2FDDD* __this, MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* ___0_elements, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (EnumerableSorter_1_t33B4B1FE8E6E19EEFB45A8EC216B39E6DDF2FDDD*, MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911*, int32_t, const RuntimeMethod*))EnumerableSorter_1_Sort_m587E268B44E37C43725852E9B98275323B905602_gshared)(__this, ___0_elements, ___1_count, method);
}
inline void Buffer_1__ctor_m9178E0FB078F890A98854B06AF9C08C14061F4AC (Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD* __this, RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD*, RuntimeObject*, const RuntimeMethod*))Buffer_1__ctor_m9178E0FB078F890A98854B06AF9C08C14061F4AC_gshared)(__this, ___0_source, method);
}
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableSorter_1_Sort_m0B1E1BD2E50D9C85A518873DD8F2D3109DDB872C (EnumerableSorter_1_t4439350BEBB5B5B9E8D43BBDBB271F1DC472270B* __this, MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* ___0_elements, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (EnumerableSorter_1_t4439350BEBB5B5B9E8D43BBDBB271F1DC472270B*, MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061*, int32_t, const RuntimeMethod*))EnumerableSorter_1_Sort_m0B1E1BD2E50D9C85A518873DD8F2D3109DDB872C_gshared)(__this, ___0_elements, ___1_count, method);
}
inline void Buffer_1__ctor_m072DE84AEC969582EB5760D4835747F9DC0C02AF (Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59* __this, RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59*, RuntimeObject*, const RuntimeMethod*))Buffer_1__ctor_m072DE84AEC969582EB5760D4835747F9DC0C02AF_gshared)(__this, ___0_source, method);
}
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EnumerableSorter_1_Sort_m8685D15BDC4342DFFAE8D12488D213864CFDC321 (EnumerableSorter_1_t9DF0BF2FF3A689EB41C9CE2B42D3A91F5776B3AD* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_elements, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (EnumerableSorter_1_t9DF0BF2FF3A689EB41C9CE2B42D3A91F5776B3AD*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, const RuntimeMethod*))EnumerableSorter_1_Sort_m8685D15BDC4342DFFAE8D12488D213864CFDC321_gshared)(__this, ___0_elements, ___1_count, method);
}
inline void Buffer_1__ctor_m55137EEF7AF9E0883A438776A066DA5520FFDE49 (Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697* __this, RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697*, RuntimeObject*, const RuntimeMethod*))Buffer_1__ctor_m55137EEF7AF9E0883A438776A066DA5520FFDE49_gshared)(__this, ___0_source, method);
}
inline void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950 (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared)(__this, ___0_key, ___1_value, method);
}
inline void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, ___0_key, ___1_value, method);
}
inline void U3CGetItemIdsU3Ed__9_U3CU3Em__Finally1_m7FEEF83D042C9F55915DED87C24CBCCB49CDCB39 (U3CGetItemIdsU3Ed__9_tF93733F63FD5F03443983B07568D05E67F0A16BB* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CGetItemIdsU3Ed__9_tF93733F63FD5F03443983B07568D05E67F0A16BB*, const RuntimeMethod*))U3CGetItemIdsU3Ed__9_U3CU3Em__Finally1_m7FEEF83D042C9F55915DED87C24CBCCB49CDCB39_gshared)(__this, method);
}
inline void U3CGetItemIdsU3Ed__9_System_IDisposable_Dispose_mC1561B8D7EA9514ED8CF37CB3E04EB39212D5093 (U3CGetItemIdsU3Ed__9_tF93733F63FD5F03443983B07568D05E67F0A16BB* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CGetItemIdsU3Ed__9_tF93733F63FD5F03443983B07568D05E67F0A16BB*, const RuntimeMethod*))U3CGetItemIdsU3Ed__9_System_IDisposable_Dispose_mC1561B8D7EA9514ED8CF37CB3E04EB39212D5093_gshared)(__this, method);
}
inline int32_t TreeViewItemData_1_get_id_mCA0344199EDCD8BB5C795EDCC3DD0B104A9F3A8C_inline (TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4*, const RuntimeMethod*))TreeViewItemData_1_get_id_mCA0344199EDCD8BB5C795EDCC3DD0B104A9F3A8C_gshared_inline)(__this, method);
}
inline void U3CGetItemIdsU3Ed__9__ctor_m356BEE7B297159631EE058B1F99E3FAF5C0729BB (U3CGetItemIdsU3Ed__9_tF93733F63FD5F03443983B07568D05E67F0A16BB* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CGetItemIdsU3Ed__9_tF93733F63FD5F03443983B07568D05E67F0A16BB*, int32_t, const RuntimeMethod*))U3CGetItemIdsU3Ed__9__ctor_m356BEE7B297159631EE058B1F99E3FAF5C0729BB_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline RuntimeObject* U3CGetItemIdsU3Ed__9_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_m9361AD9B704EEB73EC817CC998C86B5D94FE4A89 (U3CGetItemIdsU3Ed__9_tF93733F63FD5F03443983B07568D05E67F0A16BB* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (U3CGetItemIdsU3Ed__9_tF93733F63FD5F03443983B07568D05E67F0A16BB*, const RuntimeMethod*))U3CGetItemIdsU3Ed__9_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_m9361AD9B704EEB73EC817CC998C86B5D94FE4A89_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* ___0_task, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___0_status, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopHelper_AddContinuation_m5B8F03E45A820D91B17CFA56AA93E7444BEC17E0 (int32_t ___0_timing, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_continuation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, const RuntimeMethod*))Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline)(__this, ___0_task, method);
}
inline int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, const RuntimeMethod*))UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__35__ctor_m6C5E2499AEFB1FF77BB71C25FB7A4AC3782C246D_gshared (U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__35_MoveNext_m92E741126041C22F5D4DAAF1E6AAC2F0D9394F17_gshared (U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t* V_9 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
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
					goto IL_001b_1;
				}
				case 1:
				{
					goto IL_001d_1;
				}
				case 2:
				{
					goto IL_0022_1;
				}
			}
		}
		{
			goto IL_0027_1;
		}

IL_001b_1:
		{
			goto IL_0085_1;
		}

IL_001d_1:
		{
			goto IL_010b_1;
		}

IL_0022_1:
		{
			goto IL_018f_1;
		}

IL_0027_1:
		{
			_CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354* L_2 = (_CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9));
			V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_00aa_1;
			}
		}
		{
			_CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354* L_5 = (_CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),9));
			NullCheck((RuntimeObject*)L_6);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
			L_7 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			V_3 = L_7;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_9)
			{
				goto IL_00a1_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state_0 = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_2;
			__this->___U3CU3Eu__1_3 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_12 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_12, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_01e5;
		}

IL_0085_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_2 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state_0 = L_15;
		}

IL_00a1_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00aa_1:
		{
			_CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354* L_16 = (_CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),14));
			V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_18 = V_5;
			if (!L_18)
			{
				goto IL_0131_1;
			}
		}
		{
			_CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354* L_19 = (_CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_20 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),14));
			NullCheck((RuntimeObject*)L_20);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_21;
			L_21 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
			V_3 = L_21;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_22;
			L_22 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_6 = L_22;
			bool L_23;
			L_23 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_23)
			{
				goto IL_0128_1;
			}
		}
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->___U3CU3E1__state_0 = L_24;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_25 = V_6;
			__this->___U3CU3Eu__1_3 = L_25;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_26, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_01e5;
		}

IL_010b_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_27 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_6 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_28 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state_0 = L_29;
		}

IL_0128_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
		}

IL_0131_1:
		{
			_CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354* L_30 = (_CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_31 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),19));
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_31) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_32 = V_7;
			if (!L_32)
			{
				goto IL_01b5_1;
			}
		}
		{
			_CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354* L_33 = (_CombineLatest_t87C2FE8E3C0AD886205B59F28B650AD8BA160354*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_34 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_33, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),19));
			NullCheck((RuntimeObject*)L_34);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_35;
			L_35 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
			V_3 = L_35;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36;
			L_36 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_8 = L_36;
			bool L_37;
			L_37 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_37)
			{
				goto IL_01ac_1;
			}
		}
		{
			int32_t L_38 = 2;
			V_0 = L_38;
			__this->___U3CU3E1__state_0 = L_38;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = V_8;
			__this->___U3CU3Eu__1_3 = L_39;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_40 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_40, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_01e5;
		}

IL_018f_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_8 = L_41;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_42 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_42, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_43 = (-1);
			V_0 = L_43;
			__this->___U3CU3E1__state_0 = L_43;
		}

IL_01ac_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_01b5_1:
		{
			goto IL_01d1;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01b7;
		}
		throw e;
	}

CATCH_01b7:
	{
		V_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_44 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_45 = V_9;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_44, L_45, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01e5;
	}

IL_01d1:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_46 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_46, NULL);
	}

IL_01e5:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__35_SetStateMachine_mEE6697DE80AA4AA95B31E6DCBCE511A77FE9789C_gshared (U3CDisposeAsyncU3Ed__35_t7213626E6322D3418A0C77E40B45F74AD357EC49* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__43__ctor_mD8F2F451ACA63AC450D3BAEF2664C61F9E00D160_gshared (U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__43_MoveNext_m79E18DB64BBD84C44BCE21CB5E931EEC42C7F018_gshared (U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Exception_t* V_11 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
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
			goto IL_008e_1;
		}

IL_0021_1:
		{
			goto IL_0114_1;
		}

IL_0026_1:
		{
			goto IL_019b_1;
		}

IL_002b_1:
		{
			goto IL_021f_1;
		}

IL_0030_1:
		{
			_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746* L_2 = (_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),11));
			V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_00b3_1;
			}
		}
		{
			_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746* L_5 = (_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),11));
			NullCheck((RuntimeObject*)L_6);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
			L_7 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			V_3 = L_7;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_9)
			{
				goto IL_00aa_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state_0 = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_2;
			__this->___U3CU3Eu__1_3 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_12 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_12, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0275;
		}

IL_008e_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_2 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state_0 = L_15;
		}

IL_00aa_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00b3_1:
		{
			_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746* L_16 = (_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),16));
			V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_18 = V_5;
			if (!L_18)
			{
				goto IL_013a_1;
			}
		}
		{
			_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746* L_19 = (_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_20 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),16));
			NullCheck((RuntimeObject*)L_20);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_21;
			L_21 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
			V_3 = L_21;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_22;
			L_22 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_6 = L_22;
			bool L_23;
			L_23 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_23)
			{
				goto IL_0131_1;
			}
		}
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->___U3CU3E1__state_0 = L_24;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_25 = V_6;
			__this->___U3CU3Eu__1_3 = L_25;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_26, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0275;
		}

IL_0114_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_27 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_6 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_28 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state_0 = L_29;
		}

IL_0131_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
		}

IL_013a_1:
		{
			_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746* L_30 = (_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_31 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),21));
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_31) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_32 = V_7;
			if (!L_32)
			{
				goto IL_01c1_1;
			}
		}
		{
			_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746* L_33 = (_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_34 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_33, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),21));
			NullCheck((RuntimeObject*)L_34);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_35;
			L_35 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
			V_3 = L_35;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36;
			L_36 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_8 = L_36;
			bool L_37;
			L_37 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_37)
			{
				goto IL_01b8_1;
			}
		}
		{
			int32_t L_38 = 2;
			V_0 = L_38;
			__this->___U3CU3E1__state_0 = L_38;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = V_8;
			__this->___U3CU3Eu__1_3 = L_39;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_40 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_40, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0275;
		}

IL_019b_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_8 = L_41;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_42 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_42, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_43 = (-1);
			V_0 = L_43;
			__this->___U3CU3E1__state_0 = L_43;
		}

IL_01b8_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_01c1_1:
		{
			_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746* L_44 = (_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_45 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),26));
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_45) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_46 = V_9;
			if (!L_46)
			{
				goto IL_0245_1;
			}
		}
		{
			_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746* L_47 = (_CombineLatest_t04A1AF136A849045199E04CE046C1DF64ADDE746*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_48 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_47, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),26));
			NullCheck((RuntimeObject*)L_48);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_49;
			L_49 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_48);
			V_3 = L_49;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50;
			L_50 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_10 = L_50;
			bool L_51;
			L_51 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_51)
			{
				goto IL_023c_1;
			}
		}
		{
			int32_t L_52 = 3;
			V_0 = L_52;
			__this->___U3CU3E1__state_0 = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_53 = V_10;
			__this->___U3CU3Eu__1_3 = L_53;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_54 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_54, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0275;
		}

IL_021f_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_55 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_10 = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_56 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_56, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_57 = (-1);
			V_0 = L_57;
			__this->___U3CU3E1__state_0 = L_57;
		}

IL_023c_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_0245_1:
		{
			goto IL_0261;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0247;
		}
		throw e;
	}

CATCH_0247:
	{
		V_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_58 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_59 = V_11;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_58, L_59, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0275;
	}

IL_0261:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_60 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_60, NULL);
	}

IL_0275:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__43_SetStateMachine_mB6DE621EBDACB0E99BF082D1DD72A2F1B7965852_gshared (U3CDisposeAsyncU3Ed__43_tDE9035ED6129F4B0FB80930F2DF4B0369C6AAC20* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__51__ctor_mC7188B04673057444B62F7B98E0F4EB3334F581C_gshared (U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__51_MoveNext_m6747B58A7222104C4DE48291A234CE200C094187_gshared (U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
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
					goto IL_0023_1;
				}
				case 1:
				{
					goto IL_0025_1;
				}
				case 2:
				{
					goto IL_002a_1;
				}
				case 3:
				{
					goto IL_002f_1;
				}
				case 4:
				{
					goto IL_0034_1;
				}
			}
		}
		{
			goto IL_0039_1;
		}

IL_0023_1:
		{
			goto IL_0097_1;
		}

IL_0025_1:
		{
			goto IL_011d_1;
		}

IL_002a_1:
		{
			goto IL_01a4_1;
		}

IL_002f_1:
		{
			goto IL_022b_1;
		}

IL_0034_1:
		{
			goto IL_02af_1;
		}

IL_0039_1:
		{
			_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* L_2 = (_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),13));
			V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_00bc_1;
			}
		}
		{
			_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* L_5 = (_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),13));
			NullCheck((RuntimeObject*)L_6);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
			L_7 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			V_3 = L_7;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_9)
			{
				goto IL_00b3_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state_0 = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_2;
			__this->___U3CU3Eu__1_3 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_12 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_12, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0305;
		}

IL_0097_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_2 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state_0 = L_15;
		}

IL_00b3_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00bc_1:
		{
			_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* L_16 = (_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),18));
			V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_18 = V_5;
			if (!L_18)
			{
				goto IL_0143_1;
			}
		}
		{
			_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* L_19 = (_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_20 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),18));
			NullCheck((RuntimeObject*)L_20);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_21;
			L_21 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
			V_3 = L_21;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_22;
			L_22 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_6 = L_22;
			bool L_23;
			L_23 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_23)
			{
				goto IL_013a_1;
			}
		}
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->___U3CU3E1__state_0 = L_24;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_25 = V_6;
			__this->___U3CU3Eu__1_3 = L_25;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_26, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0305;
		}

IL_011d_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_27 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_6 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_28 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state_0 = L_29;
		}

IL_013a_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
		}

IL_0143_1:
		{
			_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* L_30 = (_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_31 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),23));
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_31) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_32 = V_7;
			if (!L_32)
			{
				goto IL_01ca_1;
			}
		}
		{
			_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* L_33 = (_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_34 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_33, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),23));
			NullCheck((RuntimeObject*)L_34);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_35;
			L_35 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
			V_3 = L_35;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36;
			L_36 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_8 = L_36;
			bool L_37;
			L_37 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_37)
			{
				goto IL_01c1_1;
			}
		}
		{
			int32_t L_38 = 2;
			V_0 = L_38;
			__this->___U3CU3E1__state_0 = L_38;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = V_8;
			__this->___U3CU3Eu__1_3 = L_39;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_40 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_40, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0305;
		}

IL_01a4_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_8 = L_41;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_42 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_42, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_43 = (-1);
			V_0 = L_43;
			__this->___U3CU3E1__state_0 = L_43;
		}

IL_01c1_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_01ca_1:
		{
			_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* L_44 = (_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_45 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),28));
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_45) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_46 = V_9;
			if (!L_46)
			{
				goto IL_0251_1;
			}
		}
		{
			_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* L_47 = (_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_48 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_47, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),28));
			NullCheck((RuntimeObject*)L_48);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_49;
			L_49 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_48);
			V_3 = L_49;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50;
			L_50 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_10 = L_50;
			bool L_51;
			L_51 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_51)
			{
				goto IL_0248_1;
			}
		}
		{
			int32_t L_52 = 3;
			V_0 = L_52;
			__this->___U3CU3E1__state_0 = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_53 = V_10;
			__this->___U3CU3Eu__1_3 = L_53;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_54 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_54, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0305;
		}

IL_022b_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_55 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_10 = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_56 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_56, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_57 = (-1);
			V_0 = L_57;
			__this->___U3CU3E1__state_0 = L_57;
		}

IL_0248_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_0251_1:
		{
			_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* L_58 = (_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_59 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_58, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),33));
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_60 = V_11;
			if (!L_60)
			{
				goto IL_02d5_1;
			}
		}
		{
			_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E* L_61 = (_CombineLatest_tC400E38E7DE7F2457E345619BE80FE1DEFB4F61E*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_62 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_61, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),33));
			NullCheck((RuntimeObject*)L_62);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_63;
			L_63 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_62);
			V_3 = L_63;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_64;
			L_64 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_12 = L_64;
			bool L_65;
			L_65 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_65)
			{
				goto IL_02cc_1;
			}
		}
		{
			int32_t L_66 = 4;
			V_0 = L_66;
			__this->___U3CU3E1__state_0 = L_66;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_67 = V_12;
			__this->___U3CU3Eu__1_3 = L_67;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_68 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_68, (&V_12), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0305;
		}

IL_02af_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_69 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_12 = L_69;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_70 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_70, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_71 = (-1);
			V_0 = L_71;
			__this->___U3CU3E1__state_0 = L_71;
		}

IL_02cc_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_02d5_1:
		{
			goto IL_02f1;
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
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_72 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_73 = V_13;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_72, L_73, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0305;
	}

IL_02f1:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_74 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_74, NULL);
	}

IL_0305:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__51_SetStateMachine_mB79230474B032B0D2214B68CA20D6DCEA9CC311F_gshared (U3CDisposeAsyncU3Ed__51_t6624FA5BD1928B7E8326AF88CE2E5EDED5BE7EC9* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__59__ctor_mC4423DD814E88B67F82EBA64A9310D85773AA8E5_gshared (U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__59_MoveNext_m852D658098E0579F717289D951C48C3E1F1B9DDF_gshared (U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Exception_t* V_15 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
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
					goto IL_0027_1;
				}
				case 1:
				{
					goto IL_0029_1;
				}
				case 2:
				{
					goto IL_002e_1;
				}
				case 3:
				{
					goto IL_0033_1;
				}
				case 4:
				{
					goto IL_0038_1;
				}
				case 5:
				{
					goto IL_003d_1;
				}
			}
		}
		{
			goto IL_0042_1;
		}

IL_0027_1:
		{
			goto IL_00a0_1;
		}

IL_0029_1:
		{
			goto IL_0126_1;
		}

IL_002e_1:
		{
			goto IL_01ad_1;
		}

IL_0033_1:
		{
			goto IL_0234_1;
		}

IL_0038_1:
		{
			goto IL_02bb_1;
		}

IL_003d_1:
		{
			goto IL_033f_1;
		}

IL_0042_1:
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_2 = (_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),15));
			V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_00c5_1;
			}
		}
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_5 = (_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),15));
			NullCheck((RuntimeObject*)L_6);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
			L_7 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			V_3 = L_7;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_9)
			{
				goto IL_00bc_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state_0 = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_2;
			__this->___U3CU3Eu__1_3 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_12 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_12, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0395;
		}

IL_00a0_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_2 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state_0 = L_15;
		}

IL_00bc_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00c5_1:
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_16 = (_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),20));
			V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_18 = V_5;
			if (!L_18)
			{
				goto IL_014c_1;
			}
		}
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_19 = (_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_20 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),20));
			NullCheck((RuntimeObject*)L_20);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_21;
			L_21 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
			V_3 = L_21;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_22;
			L_22 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_6 = L_22;
			bool L_23;
			L_23 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_23)
			{
				goto IL_0143_1;
			}
		}
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->___U3CU3E1__state_0 = L_24;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_25 = V_6;
			__this->___U3CU3Eu__1_3 = L_25;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_26, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0395;
		}

IL_0126_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_27 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_6 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_28 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state_0 = L_29;
		}

IL_0143_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
		}

IL_014c_1:
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_30 = (_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_31 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),25));
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_31) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_32 = V_7;
			if (!L_32)
			{
				goto IL_01d3_1;
			}
		}
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_33 = (_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_34 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_33, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),25));
			NullCheck((RuntimeObject*)L_34);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_35;
			L_35 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
			V_3 = L_35;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36;
			L_36 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_8 = L_36;
			bool L_37;
			L_37 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_37)
			{
				goto IL_01ca_1;
			}
		}
		{
			int32_t L_38 = 2;
			V_0 = L_38;
			__this->___U3CU3E1__state_0 = L_38;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = V_8;
			__this->___U3CU3Eu__1_3 = L_39;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_40 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_40, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0395;
		}

IL_01ad_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_8 = L_41;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_42 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_42, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_43 = (-1);
			V_0 = L_43;
			__this->___U3CU3E1__state_0 = L_43;
		}

IL_01ca_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_01d3_1:
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_44 = (_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_45 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),30));
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_45) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_46 = V_9;
			if (!L_46)
			{
				goto IL_025a_1;
			}
		}
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_47 = (_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_48 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_47, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),30));
			NullCheck((RuntimeObject*)L_48);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_49;
			L_49 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_48);
			V_3 = L_49;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50;
			L_50 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_10 = L_50;
			bool L_51;
			L_51 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_51)
			{
				goto IL_0251_1;
			}
		}
		{
			int32_t L_52 = 3;
			V_0 = L_52;
			__this->___U3CU3E1__state_0 = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_53 = V_10;
			__this->___U3CU3Eu__1_3 = L_53;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_54 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_54, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0395;
		}

IL_0234_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_55 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_10 = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_56 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_56, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_57 = (-1);
			V_0 = L_57;
			__this->___U3CU3E1__state_0 = L_57;
		}

IL_0251_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_025a_1:
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_58 = (_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_59 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_58, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),35));
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_60 = V_11;
			if (!L_60)
			{
				goto IL_02e1_1;
			}
		}
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_61 = (_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_62 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_61, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),35));
			NullCheck((RuntimeObject*)L_62);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_63;
			L_63 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_62);
			V_3 = L_63;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_64;
			L_64 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_12 = L_64;
			bool L_65;
			L_65 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_65)
			{
				goto IL_02d8_1;
			}
		}
		{
			int32_t L_66 = 4;
			V_0 = L_66;
			__this->___U3CU3E1__state_0 = L_66;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_67 = V_12;
			__this->___U3CU3Eu__1_3 = L_67;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_68 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_68, (&V_12), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0395;
		}

IL_02bb_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_69 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_12 = L_69;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_70 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_70, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_71 = (-1);
			V_0 = L_71;
			__this->___U3CU3E1__state_0 = L_71;
		}

IL_02d8_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_02e1_1:
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_72 = (_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_73 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_72, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),40));
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_73) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_74 = V_13;
			if (!L_74)
			{
				goto IL_0365_1;
			}
		}
		{
			_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1* L_75 = (_CombineLatest_t47917F32D5F8704FAB1057BEDC9A7C6509E9B1F1*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_76 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_75, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),40));
			NullCheck((RuntimeObject*)L_76);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_77;
			L_77 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_76);
			V_3 = L_77;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_78;
			L_78 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_14 = L_78;
			bool L_79;
			L_79 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_79)
			{
				goto IL_035c_1;
			}
		}
		{
			int32_t L_80 = 5;
			V_0 = L_80;
			__this->___U3CU3E1__state_0 = L_80;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_81 = V_14;
			__this->___U3CU3Eu__1_3 = L_81;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_82 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_82, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0395;
		}

IL_033f_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_83 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_14 = L_83;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_84 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_84, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_85 = (-1);
			V_0 = L_85;
			__this->___U3CU3E1__state_0 = L_85;
		}

IL_035c_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_0365_1:
		{
			goto IL_0381;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0367;
		}
		throw e;
	}

CATCH_0367:
	{
		V_15 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_86 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_87 = V_15;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_86, L_87, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0395;
	}

IL_0381:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_88 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_88, NULL);
	}

IL_0395:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__59_SetStateMachine_mDC9395DD1141C0FBD68B4FD2C82DC867667B1057_gshared (U3CDisposeAsyncU3Ed__59_tF3C1D63AE829FBA357A91009160CAFC2088D47AF* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__67__ctor_mDC2C1D8DD47D04617301DD587D99BB4E572ACE2A_gshared (U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__67_MoveNext_mB9947FCCE314F8D414996F3AB194F69E97BDD81F_gshared (U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	bool V_15 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Exception_t* V_17 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
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
					goto IL_002b_1;
				}
				case 1:
				{
					goto IL_002d_1;
				}
				case 2:
				{
					goto IL_0032_1;
				}
				case 3:
				{
					goto IL_0037_1;
				}
				case 4:
				{
					goto IL_003c_1;
				}
				case 5:
				{
					goto IL_0041_1;
				}
				case 6:
				{
					goto IL_0046_1;
				}
			}
		}
		{
			goto IL_004b_1;
		}

IL_002b_1:
		{
			goto IL_00a9_1;
		}

IL_002d_1:
		{
			goto IL_012f_1;
		}

IL_0032_1:
		{
			goto IL_01b6_1;
		}

IL_0037_1:
		{
			goto IL_023d_1;
		}

IL_003c_1:
		{
			goto IL_02c4_1;
		}

IL_0041_1:
		{
			goto IL_034b_1;
		}

IL_0046_1:
		{
			goto IL_03cf_1;
		}

IL_004b_1:
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_2 = (_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),17));
			V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_00ce_1;
			}
		}
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_5 = (_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),17));
			NullCheck((RuntimeObject*)L_6);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
			L_7 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			V_3 = L_7;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_9)
			{
				goto IL_00c5_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state_0 = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_2;
			__this->___U3CU3Eu__1_3 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_12 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_12, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0425;
		}

IL_00a9_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_2 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state_0 = L_15;
		}

IL_00c5_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00ce_1:
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_16 = (_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),22));
			V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_18 = V_5;
			if (!L_18)
			{
				goto IL_0155_1;
			}
		}
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_19 = (_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_20 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),22));
			NullCheck((RuntimeObject*)L_20);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_21;
			L_21 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
			V_3 = L_21;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_22;
			L_22 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_6 = L_22;
			bool L_23;
			L_23 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_23)
			{
				goto IL_014c_1;
			}
		}
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->___U3CU3E1__state_0 = L_24;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_25 = V_6;
			__this->___U3CU3Eu__1_3 = L_25;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_26, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0425;
		}

IL_012f_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_27 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_6 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_28 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state_0 = L_29;
		}

IL_014c_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
		}

IL_0155_1:
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_30 = (_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_31 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),27));
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_31) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_32 = V_7;
			if (!L_32)
			{
				goto IL_01dc_1;
			}
		}
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_33 = (_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_34 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_33, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),27));
			NullCheck((RuntimeObject*)L_34);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_35;
			L_35 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
			V_3 = L_35;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36;
			L_36 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_8 = L_36;
			bool L_37;
			L_37 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_37)
			{
				goto IL_01d3_1;
			}
		}
		{
			int32_t L_38 = 2;
			V_0 = L_38;
			__this->___U3CU3E1__state_0 = L_38;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = V_8;
			__this->___U3CU3Eu__1_3 = L_39;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_40 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_40, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0425;
		}

IL_01b6_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_8 = L_41;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_42 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_42, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_43 = (-1);
			V_0 = L_43;
			__this->___U3CU3E1__state_0 = L_43;
		}

IL_01d3_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_01dc_1:
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_44 = (_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_45 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),32));
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_45) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_46 = V_9;
			if (!L_46)
			{
				goto IL_0263_1;
			}
		}
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_47 = (_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_48 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_47, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),32));
			NullCheck((RuntimeObject*)L_48);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_49;
			L_49 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_48);
			V_3 = L_49;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50;
			L_50 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_10 = L_50;
			bool L_51;
			L_51 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_51)
			{
				goto IL_025a_1;
			}
		}
		{
			int32_t L_52 = 3;
			V_0 = L_52;
			__this->___U3CU3E1__state_0 = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_53 = V_10;
			__this->___U3CU3Eu__1_3 = L_53;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_54 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_54, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0425;
		}

IL_023d_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_55 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_10 = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_56 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_56, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_57 = (-1);
			V_0 = L_57;
			__this->___U3CU3E1__state_0 = L_57;
		}

IL_025a_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_0263_1:
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_58 = (_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_59 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_58, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),37));
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_60 = V_11;
			if (!L_60)
			{
				goto IL_02ea_1;
			}
		}
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_61 = (_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_62 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_61, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),37));
			NullCheck((RuntimeObject*)L_62);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_63;
			L_63 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_62);
			V_3 = L_63;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_64;
			L_64 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_12 = L_64;
			bool L_65;
			L_65 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_65)
			{
				goto IL_02e1_1;
			}
		}
		{
			int32_t L_66 = 4;
			V_0 = L_66;
			__this->___U3CU3E1__state_0 = L_66;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_67 = V_12;
			__this->___U3CU3Eu__1_3 = L_67;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_68 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_68, (&V_12), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0425;
		}

IL_02c4_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_69 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_12 = L_69;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_70 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_70, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_71 = (-1);
			V_0 = L_71;
			__this->___U3CU3E1__state_0 = L_71;
		}

IL_02e1_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_02ea_1:
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_72 = (_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_73 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_72, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),42));
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_73) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_74 = V_13;
			if (!L_74)
			{
				goto IL_0371_1;
			}
		}
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_75 = (_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_76 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_75, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),42));
			NullCheck((RuntimeObject*)L_76);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_77;
			L_77 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_76);
			V_3 = L_77;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_78;
			L_78 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_14 = L_78;
			bool L_79;
			L_79 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_79)
			{
				goto IL_0368_1;
			}
		}
		{
			int32_t L_80 = 5;
			V_0 = L_80;
			__this->___U3CU3E1__state_0 = L_80;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_81 = V_14;
			__this->___U3CU3Eu__1_3 = L_81;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_82 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_82, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0425;
		}

IL_034b_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_83 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_14 = L_83;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_84 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_84, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_85 = (-1);
			V_0 = L_85;
			__this->___U3CU3E1__state_0 = L_85;
		}

IL_0368_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_0371_1:
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_86 = (_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_87 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_86, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),47));
			V_15 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_87) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_88 = V_15;
			if (!L_88)
			{
				goto IL_03f5_1;
			}
		}
		{
			_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13* L_89 = (_CombineLatest_t6D7251A753FC5AAF31E3CC5D8C9EFD7D7B425D13*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_90 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_89, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),47));
			NullCheck((RuntimeObject*)L_90);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_91;
			L_91 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_90);
			V_3 = L_91;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_92;
			L_92 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_16 = L_92;
			bool L_93;
			L_93 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_16), NULL);
			if (L_93)
			{
				goto IL_03ec_1;
			}
		}
		{
			int32_t L_94 = 6;
			V_0 = L_94;
			__this->___U3CU3E1__state_0 = L_94;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_95 = V_16;
			__this->___U3CU3Eu__1_3 = L_95;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_96 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_96, (&V_16), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0425;
		}

IL_03cf_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_97 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_16 = L_97;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_98 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_98, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_99 = (-1);
			V_0 = L_99;
			__this->___U3CU3E1__state_0 = L_99;
		}

IL_03ec_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_16), NULL);
		}

IL_03f5_1:
		{
			goto IL_0411;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_03f7;
		}
		throw e;
	}

CATCH_03f7:
	{
		V_17 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_100 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_101 = V_17;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_100, L_101, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0425;
	}

IL_0411:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_102 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_102, NULL);
	}

IL_0425:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__67_SetStateMachine_mB0E1FB565A6DFC136435068EBD90FC135F5C3C93_gshared (U3CDisposeAsyncU3Ed__67_t35699C37ADF39BE515350CAF62FCB7B4692CA456* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__75__ctor_m9AA30765C7E6A7E1D5B44541C56F62CB9DEBE594_gshared (U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__75_MoveNext_m71F6284CC2A780676AD535B5EA4FCE4D2DA1DA8E_gshared (U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	bool V_15 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_18;
	memset((&V_18), 0, sizeof(V_18));
	Exception_t* V_19 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
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
					goto IL_002f_1;
				}
				case 1:
				{
					goto IL_0034_1;
				}
				case 2:
				{
					goto IL_0039_1;
				}
				case 3:
				{
					goto IL_003e_1;
				}
				case 4:
				{
					goto IL_0043_1;
				}
				case 5:
				{
					goto IL_0048_1;
				}
				case 6:
				{
					goto IL_004d_1;
				}
				case 7:
				{
					goto IL_0052_1;
				}
			}
		}
		{
			goto IL_0057_1;
		}

IL_002f_1:
		{
			goto IL_00b5_1;
		}

IL_0034_1:
		{
			goto IL_013b_1;
		}

IL_0039_1:
		{
			goto IL_01c2_1;
		}

IL_003e_1:
		{
			goto IL_0249_1;
		}

IL_0043_1:
		{
			goto IL_02d0_1;
		}

IL_0048_1:
		{
			goto IL_0357_1;
		}

IL_004d_1:
		{
			goto IL_03de_1;
		}

IL_0052_1:
		{
			goto IL_0462_1;
		}

IL_0057_1:
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_2 = (_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),19));
			V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_00da_1;
			}
		}
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_5 = (_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),19));
			NullCheck((RuntimeObject*)L_6);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
			L_7 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			V_3 = L_7;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_9)
			{
				goto IL_00d1_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state_0 = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_2;
			__this->___U3CU3Eu__1_3 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_12 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_12, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_04b8;
		}

IL_00b5_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_2 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state_0 = L_15;
		}

IL_00d1_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00da_1:
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_16 = (_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),24));
			V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_18 = V_5;
			if (!L_18)
			{
				goto IL_0161_1;
			}
		}
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_19 = (_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_20 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),24));
			NullCheck((RuntimeObject*)L_20);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_21;
			L_21 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
			V_3 = L_21;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_22;
			L_22 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_6 = L_22;
			bool L_23;
			L_23 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_23)
			{
				goto IL_0158_1;
			}
		}
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->___U3CU3E1__state_0 = L_24;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_25 = V_6;
			__this->___U3CU3Eu__1_3 = L_25;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_26, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_04b8;
		}

IL_013b_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_27 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_6 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_28 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state_0 = L_29;
		}

IL_0158_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
		}

IL_0161_1:
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_30 = (_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_31 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),29));
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_31) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_32 = V_7;
			if (!L_32)
			{
				goto IL_01e8_1;
			}
		}
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_33 = (_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_34 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_33, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),29));
			NullCheck((RuntimeObject*)L_34);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_35;
			L_35 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
			V_3 = L_35;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36;
			L_36 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_8 = L_36;
			bool L_37;
			L_37 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_37)
			{
				goto IL_01df_1;
			}
		}
		{
			int32_t L_38 = 2;
			V_0 = L_38;
			__this->___U3CU3E1__state_0 = L_38;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = V_8;
			__this->___U3CU3Eu__1_3 = L_39;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_40 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_40, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_04b8;
		}

IL_01c2_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_8 = L_41;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_42 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_42, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_43 = (-1);
			V_0 = L_43;
			__this->___U3CU3E1__state_0 = L_43;
		}

IL_01df_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_01e8_1:
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_44 = (_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_45 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),34));
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_45) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_46 = V_9;
			if (!L_46)
			{
				goto IL_026f_1;
			}
		}
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_47 = (_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_48 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_47, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),34));
			NullCheck((RuntimeObject*)L_48);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_49;
			L_49 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_48);
			V_3 = L_49;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50;
			L_50 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_10 = L_50;
			bool L_51;
			L_51 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_51)
			{
				goto IL_0266_1;
			}
		}
		{
			int32_t L_52 = 3;
			V_0 = L_52;
			__this->___U3CU3E1__state_0 = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_53 = V_10;
			__this->___U3CU3Eu__1_3 = L_53;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_54 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_54, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_04b8;
		}

IL_0249_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_55 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_10 = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_56 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_56, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_57 = (-1);
			V_0 = L_57;
			__this->___U3CU3E1__state_0 = L_57;
		}

IL_0266_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_026f_1:
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_58 = (_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_59 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_58, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),39));
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_60 = V_11;
			if (!L_60)
			{
				goto IL_02f6_1;
			}
		}
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_61 = (_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_62 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_61, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),39));
			NullCheck((RuntimeObject*)L_62);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_63;
			L_63 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_62);
			V_3 = L_63;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_64;
			L_64 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_12 = L_64;
			bool L_65;
			L_65 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_65)
			{
				goto IL_02ed_1;
			}
		}
		{
			int32_t L_66 = 4;
			V_0 = L_66;
			__this->___U3CU3E1__state_0 = L_66;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_67 = V_12;
			__this->___U3CU3Eu__1_3 = L_67;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_68 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_68, (&V_12), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_04b8;
		}

IL_02d0_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_69 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_12 = L_69;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_70 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_70, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_71 = (-1);
			V_0 = L_71;
			__this->___U3CU3E1__state_0 = L_71;
		}

IL_02ed_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_02f6_1:
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_72 = (_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_73 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_72, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),44));
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_73) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_74 = V_13;
			if (!L_74)
			{
				goto IL_037d_1;
			}
		}
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_75 = (_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_76 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_75, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),44));
			NullCheck((RuntimeObject*)L_76);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_77;
			L_77 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_76);
			V_3 = L_77;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_78;
			L_78 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_14 = L_78;
			bool L_79;
			L_79 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_79)
			{
				goto IL_0374_1;
			}
		}
		{
			int32_t L_80 = 5;
			V_0 = L_80;
			__this->___U3CU3E1__state_0 = L_80;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_81 = V_14;
			__this->___U3CU3Eu__1_3 = L_81;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_82 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_82, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_04b8;
		}

IL_0357_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_83 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_14 = L_83;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_84 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_84, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_85 = (-1);
			V_0 = L_85;
			__this->___U3CU3E1__state_0 = L_85;
		}

IL_0374_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_037d_1:
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_86 = (_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_87 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_86, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),49));
			V_15 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_87) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_88 = V_15;
			if (!L_88)
			{
				goto IL_0404_1;
			}
		}
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_89 = (_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_90 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_89, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),49));
			NullCheck((RuntimeObject*)L_90);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_91;
			L_91 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_90);
			V_3 = L_91;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_92;
			L_92 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_16 = L_92;
			bool L_93;
			L_93 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_16), NULL);
			if (L_93)
			{
				goto IL_03fb_1;
			}
		}
		{
			int32_t L_94 = 6;
			V_0 = L_94;
			__this->___U3CU3E1__state_0 = L_94;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_95 = V_16;
			__this->___U3CU3Eu__1_3 = L_95;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_96 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_96, (&V_16), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_04b8;
		}

IL_03de_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_97 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_16 = L_97;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_98 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_98, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_99 = (-1);
			V_0 = L_99;
			__this->___U3CU3E1__state_0 = L_99;
		}

IL_03fb_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_16), NULL);
		}

IL_0404_1:
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_100 = (_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_101 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_100, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),54));
			V_17 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_101) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_102 = V_17;
			if (!L_102)
			{
				goto IL_0488_1;
			}
		}
		{
			_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55* L_103 = (_CombineLatest_t4EB743B9E99DE2FB6EBBCE3DDF659D66638E4E55*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_104 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_103, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),54));
			NullCheck((RuntimeObject*)L_104);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_105;
			L_105 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_104);
			V_3 = L_105;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_106;
			L_106 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_18 = L_106;
			bool L_107;
			L_107 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_18), NULL);
			if (L_107)
			{
				goto IL_047f_1;
			}
		}
		{
			int32_t L_108 = 7;
			V_0 = L_108;
			__this->___U3CU3E1__state_0 = L_108;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_109 = V_18;
			__this->___U3CU3Eu__1_3 = L_109;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_110 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_110, (&V_18), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_04b8;
		}

IL_0462_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_111 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_18 = L_111;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_112 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_112, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_113 = (-1);
			V_0 = L_113;
			__this->___U3CU3E1__state_0 = L_113;
		}

IL_047f_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_18), NULL);
		}

IL_0488_1:
		{
			goto IL_04a4;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_048a;
		}
		throw e;
	}

CATCH_048a:
	{
		V_19 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_114 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_115 = V_19;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_114, L_115, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_04b8;
	}

IL_04a4:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_116 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_116, NULL);
	}

IL_04b8:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__75_SetStateMachine_m246B27D91AD4F21882A434948582961383E62C60_gshared (U3CDisposeAsyncU3Ed__75_tDE01BA1F2A79D2B2BF3A6F0B725790BBCF6A9AA7* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__83__ctor_m5124CBB4E5140DD1314AAA4136C137F41F552A5F_gshared (U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__83_MoveNext_m5B64682110385671F077C12F78F384A9DC747417_gshared (U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	bool V_15 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_18;
	memset((&V_18), 0, sizeof(V_18));
	bool V_19 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_20;
	memset((&V_20), 0, sizeof(V_20));
	Exception_t* V_21 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
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
					goto IL_0033_1;
				}
				case 1:
				{
					goto IL_0038_1;
				}
				case 2:
				{
					goto IL_003d_1;
				}
				case 3:
				{
					goto IL_0042_1;
				}
				case 4:
				{
					goto IL_0047_1;
				}
				case 5:
				{
					goto IL_004c_1;
				}
				case 6:
				{
					goto IL_0051_1;
				}
				case 7:
				{
					goto IL_0056_1;
				}
				case 8:
				{
					goto IL_005b_1;
				}
			}
		}
		{
			goto IL_0060_1;
		}

IL_0033_1:
		{
			goto IL_00be_1;
		}

IL_0038_1:
		{
			goto IL_0144_1;
		}

IL_003d_1:
		{
			goto IL_01cb_1;
		}

IL_0042_1:
		{
			goto IL_0252_1;
		}

IL_0047_1:
		{
			goto IL_02d9_1;
		}

IL_004c_1:
		{
			goto IL_0360_1;
		}

IL_0051_1:
		{
			goto IL_03e7_1;
		}

IL_0056_1:
		{
			goto IL_046e_1;
		}

IL_005b_1:
		{
			goto IL_04f2_1;
		}

IL_0060_1:
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_2 = (_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),21));
			V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_00e3_1;
			}
		}
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_5 = (_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),21));
			NullCheck((RuntimeObject*)L_6);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
			L_7 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			V_3 = L_7;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_9)
			{
				goto IL_00da_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state_0 = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_2;
			__this->___U3CU3Eu__1_3 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_12 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_12, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0548;
		}

IL_00be_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_2 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state_0 = L_15;
		}

IL_00da_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00e3_1:
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_16 = (_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),26));
			V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_18 = V_5;
			if (!L_18)
			{
				goto IL_016a_1;
			}
		}
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_19 = (_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_20 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),26));
			NullCheck((RuntimeObject*)L_20);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_21;
			L_21 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
			V_3 = L_21;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_22;
			L_22 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_6 = L_22;
			bool L_23;
			L_23 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_23)
			{
				goto IL_0161_1;
			}
		}
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->___U3CU3E1__state_0 = L_24;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_25 = V_6;
			__this->___U3CU3Eu__1_3 = L_25;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_26, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0548;
		}

IL_0144_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_27 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_6 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_28 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state_0 = L_29;
		}

IL_0161_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
		}

IL_016a_1:
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_30 = (_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_31 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),31));
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_31) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_32 = V_7;
			if (!L_32)
			{
				goto IL_01f1_1;
			}
		}
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_33 = (_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_34 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_33, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),31));
			NullCheck((RuntimeObject*)L_34);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_35;
			L_35 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
			V_3 = L_35;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36;
			L_36 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_8 = L_36;
			bool L_37;
			L_37 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_37)
			{
				goto IL_01e8_1;
			}
		}
		{
			int32_t L_38 = 2;
			V_0 = L_38;
			__this->___U3CU3E1__state_0 = L_38;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = V_8;
			__this->___U3CU3Eu__1_3 = L_39;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_40 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_40, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0548;
		}

IL_01cb_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_8 = L_41;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_42 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_42, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_43 = (-1);
			V_0 = L_43;
			__this->___U3CU3E1__state_0 = L_43;
		}

IL_01e8_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_01f1_1:
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_44 = (_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_45 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),36));
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_45) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_46 = V_9;
			if (!L_46)
			{
				goto IL_0278_1;
			}
		}
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_47 = (_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_48 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_47, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),36));
			NullCheck((RuntimeObject*)L_48);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_49;
			L_49 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_48);
			V_3 = L_49;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50;
			L_50 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_10 = L_50;
			bool L_51;
			L_51 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_51)
			{
				goto IL_026f_1;
			}
		}
		{
			int32_t L_52 = 3;
			V_0 = L_52;
			__this->___U3CU3E1__state_0 = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_53 = V_10;
			__this->___U3CU3Eu__1_3 = L_53;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_54 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_54, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0548;
		}

IL_0252_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_55 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_10 = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_56 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_56, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_57 = (-1);
			V_0 = L_57;
			__this->___U3CU3E1__state_0 = L_57;
		}

IL_026f_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_0278_1:
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_58 = (_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_59 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_58, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),41));
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_60 = V_11;
			if (!L_60)
			{
				goto IL_02ff_1;
			}
		}
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_61 = (_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_62 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_61, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),41));
			NullCheck((RuntimeObject*)L_62);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_63;
			L_63 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_62);
			V_3 = L_63;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_64;
			L_64 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_12 = L_64;
			bool L_65;
			L_65 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_65)
			{
				goto IL_02f6_1;
			}
		}
		{
			int32_t L_66 = 4;
			V_0 = L_66;
			__this->___U3CU3E1__state_0 = L_66;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_67 = V_12;
			__this->___U3CU3Eu__1_3 = L_67;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_68 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_68, (&V_12), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0548;
		}

IL_02d9_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_69 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_12 = L_69;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_70 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_70, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_71 = (-1);
			V_0 = L_71;
			__this->___U3CU3E1__state_0 = L_71;
		}

IL_02f6_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_02ff_1:
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_72 = (_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_73 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_72, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),46));
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_73) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_74 = V_13;
			if (!L_74)
			{
				goto IL_0386_1;
			}
		}
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_75 = (_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_76 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_75, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),46));
			NullCheck((RuntimeObject*)L_76);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_77;
			L_77 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_76);
			V_3 = L_77;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_78;
			L_78 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_14 = L_78;
			bool L_79;
			L_79 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_79)
			{
				goto IL_037d_1;
			}
		}
		{
			int32_t L_80 = 5;
			V_0 = L_80;
			__this->___U3CU3E1__state_0 = L_80;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_81 = V_14;
			__this->___U3CU3Eu__1_3 = L_81;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_82 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_82, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0548;
		}

IL_0360_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_83 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_14 = L_83;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_84 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_84, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_85 = (-1);
			V_0 = L_85;
			__this->___U3CU3E1__state_0 = L_85;
		}

IL_037d_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_0386_1:
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_86 = (_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_87 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_86, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),51));
			V_15 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_87) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_88 = V_15;
			if (!L_88)
			{
				goto IL_040d_1;
			}
		}
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_89 = (_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_90 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_89, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),51));
			NullCheck((RuntimeObject*)L_90);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_91;
			L_91 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_90);
			V_3 = L_91;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_92;
			L_92 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_16 = L_92;
			bool L_93;
			L_93 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_16), NULL);
			if (L_93)
			{
				goto IL_0404_1;
			}
		}
		{
			int32_t L_94 = 6;
			V_0 = L_94;
			__this->___U3CU3E1__state_0 = L_94;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_95 = V_16;
			__this->___U3CU3Eu__1_3 = L_95;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_96 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_96, (&V_16), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0548;
		}

IL_03e7_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_97 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_16 = L_97;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_98 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_98, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_99 = (-1);
			V_0 = L_99;
			__this->___U3CU3E1__state_0 = L_99;
		}

IL_0404_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_16), NULL);
		}

IL_040d_1:
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_100 = (_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_101 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_100, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),56));
			V_17 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_101) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_102 = V_17;
			if (!L_102)
			{
				goto IL_0494_1;
			}
		}
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_103 = (_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_104 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_103, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),56));
			NullCheck((RuntimeObject*)L_104);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_105;
			L_105 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_104);
			V_3 = L_105;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_106;
			L_106 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_18 = L_106;
			bool L_107;
			L_107 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_18), NULL);
			if (L_107)
			{
				goto IL_048b_1;
			}
		}
		{
			int32_t L_108 = 7;
			V_0 = L_108;
			__this->___U3CU3E1__state_0 = L_108;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_109 = V_18;
			__this->___U3CU3Eu__1_3 = L_109;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_110 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_110, (&V_18), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0548;
		}

IL_046e_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_111 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_18 = L_111;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_112 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_112, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_113 = (-1);
			V_0 = L_113;
			__this->___U3CU3E1__state_0 = L_113;
		}

IL_048b_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_18), NULL);
		}

IL_0494_1:
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_114 = (_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_115 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_114, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),61));
			V_19 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_115) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_116 = V_19;
			if (!L_116)
			{
				goto IL_0518_1;
			}
		}
		{
			_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E* L_117 = (_CombineLatest_tAB36EFF9EEEF45032F382AABE1833413482C6C0E*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_118 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_117, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),61));
			NullCheck((RuntimeObject*)L_118);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_119;
			L_119 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_118);
			V_3 = L_119;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_120;
			L_120 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_20 = L_120;
			bool L_121;
			L_121 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_20), NULL);
			if (L_121)
			{
				goto IL_050f_1;
			}
		}
		{
			int32_t L_122 = 8;
			V_0 = L_122;
			__this->___U3CU3E1__state_0 = L_122;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_123 = V_20;
			__this->___U3CU3Eu__1_3 = L_123;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_124 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_124, (&V_20), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_0548;
		}

IL_04f2_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_125 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_20 = L_125;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_126 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_126, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_127 = (-1);
			V_0 = L_127;
			__this->___U3CU3E1__state_0 = L_127;
		}

IL_050f_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_20), NULL);
		}

IL_0518_1:
		{
			goto IL_0534;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_051a;
		}
		throw e;
	}

CATCH_051a:
	{
		V_21 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_128 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_129 = V_21;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_128, L_129, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0548;
	}

IL_0534:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_130 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_130, NULL);
	}

IL_0548:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__83_SetStateMachine_m69221B80D068EA6C4129F6AFF6DDCEE2525FAE7E_gshared (U3CDisposeAsyncU3Ed__83_tC8CAD96716DAA3998967DA9A1121C55436DF2B3D* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__91__ctor_mCD1D521AEDCC71F3A76DCDDD3FACD29E656E232F_gshared (U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__91_MoveNext_m6E24865B6DDEE6F25D7FB6EC3E0978177A776239_gshared (U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	bool V_15 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_18;
	memset((&V_18), 0, sizeof(V_18));
	bool V_19 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_22;
	memset((&V_22), 0, sizeof(V_22));
	Exception_t* V_23 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
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
					goto IL_0037_1;
				}
				case 1:
				{
					goto IL_003c_1;
				}
				case 2:
				{
					goto IL_0041_1;
				}
				case 3:
				{
					goto IL_0046_1;
				}
				case 4:
				{
					goto IL_004b_1;
				}
				case 5:
				{
					goto IL_0050_1;
				}
				case 6:
				{
					goto IL_0055_1;
				}
				case 7:
				{
					goto IL_005a_1;
				}
				case 8:
				{
					goto IL_005f_1;
				}
				case 9:
				{
					goto IL_0064_1;
				}
			}
		}
		{
			goto IL_0069_1;
		}

IL_0037_1:
		{
			goto IL_00c7_1;
		}

IL_003c_1:
		{
			goto IL_014d_1;
		}

IL_0041_1:
		{
			goto IL_01d4_1;
		}

IL_0046_1:
		{
			goto IL_025b_1;
		}

IL_004b_1:
		{
			goto IL_02e2_1;
		}

IL_0050_1:
		{
			goto IL_0369_1;
		}

IL_0055_1:
		{
			goto IL_03f0_1;
		}

IL_005a_1:
		{
			goto IL_0477_1;
		}

IL_005f_1:
		{
			goto IL_04fe_1;
		}

IL_0064_1:
		{
			goto IL_0583_1;
		}

IL_0069_1:
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_2 = (_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),23));
			V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_00ec_1;
			}
		}
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_5 = (_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),23));
			NullCheck((RuntimeObject*)L_6);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
			L_7 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			V_3 = L_7;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_9)
			{
				goto IL_00e3_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state_0 = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_2;
			__this->___U3CU3Eu__1_3 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_12 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_12, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_05d9;
		}

IL_00c7_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_2 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state_0 = L_15;
		}

IL_00e3_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00ec_1:
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_16 = (_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),28));
			V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_18 = V_5;
			if (!L_18)
			{
				goto IL_0173_1;
			}
		}
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_19 = (_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_20 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),28));
			NullCheck((RuntimeObject*)L_20);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_21;
			L_21 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
			V_3 = L_21;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_22;
			L_22 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_6 = L_22;
			bool L_23;
			L_23 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_23)
			{
				goto IL_016a_1;
			}
		}
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->___U3CU3E1__state_0 = L_24;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_25 = V_6;
			__this->___U3CU3Eu__1_3 = L_25;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_26, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_05d9;
		}

IL_014d_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_27 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_6 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_28 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state_0 = L_29;
		}

IL_016a_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
		}

IL_0173_1:
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_30 = (_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_31 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),33));
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_31) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_32 = V_7;
			if (!L_32)
			{
				goto IL_01fa_1;
			}
		}
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_33 = (_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_34 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_33, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),33));
			NullCheck((RuntimeObject*)L_34);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_35;
			L_35 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
			V_3 = L_35;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36;
			L_36 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_8 = L_36;
			bool L_37;
			L_37 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_37)
			{
				goto IL_01f1_1;
			}
		}
		{
			int32_t L_38 = 2;
			V_0 = L_38;
			__this->___U3CU3E1__state_0 = L_38;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = V_8;
			__this->___U3CU3Eu__1_3 = L_39;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_40 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_40, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_05d9;
		}

IL_01d4_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_8 = L_41;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_42 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_42, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_43 = (-1);
			V_0 = L_43;
			__this->___U3CU3E1__state_0 = L_43;
		}

IL_01f1_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_01fa_1:
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_44 = (_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_45 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),38));
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_45) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_46 = V_9;
			if (!L_46)
			{
				goto IL_0281_1;
			}
		}
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_47 = (_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_48 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_47, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),38));
			NullCheck((RuntimeObject*)L_48);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_49;
			L_49 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_48);
			V_3 = L_49;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50;
			L_50 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_10 = L_50;
			bool L_51;
			L_51 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_51)
			{
				goto IL_0278_1;
			}
		}
		{
			int32_t L_52 = 3;
			V_0 = L_52;
			__this->___U3CU3E1__state_0 = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_53 = V_10;
			__this->___U3CU3Eu__1_3 = L_53;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_54 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_54, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_05d9;
		}

IL_025b_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_55 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_10 = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_56 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_56, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_57 = (-1);
			V_0 = L_57;
			__this->___U3CU3E1__state_0 = L_57;
		}

IL_0278_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_0281_1:
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_58 = (_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_59 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_58, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),43));
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_60 = V_11;
			if (!L_60)
			{
				goto IL_0308_1;
			}
		}
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_61 = (_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_62 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_61, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),43));
			NullCheck((RuntimeObject*)L_62);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_63;
			L_63 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_62);
			V_3 = L_63;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_64;
			L_64 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_12 = L_64;
			bool L_65;
			L_65 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_65)
			{
				goto IL_02ff_1;
			}
		}
		{
			int32_t L_66 = 4;
			V_0 = L_66;
			__this->___U3CU3E1__state_0 = L_66;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_67 = V_12;
			__this->___U3CU3Eu__1_3 = L_67;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_68 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_68, (&V_12), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_05d9;
		}

IL_02e2_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_69 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_12 = L_69;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_70 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_70, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_71 = (-1);
			V_0 = L_71;
			__this->___U3CU3E1__state_0 = L_71;
		}

IL_02ff_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_0308_1:
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_72 = (_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_73 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_72, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),48));
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_73) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_74 = V_13;
			if (!L_74)
			{
				goto IL_038f_1;
			}
		}
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_75 = (_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_76 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_75, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),48));
			NullCheck((RuntimeObject*)L_76);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_77;
			L_77 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_76);
			V_3 = L_77;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_78;
			L_78 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_14 = L_78;
			bool L_79;
			L_79 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_79)
			{
				goto IL_0386_1;
			}
		}
		{
			int32_t L_80 = 5;
			V_0 = L_80;
			__this->___U3CU3E1__state_0 = L_80;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_81 = V_14;
			__this->___U3CU3Eu__1_3 = L_81;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_82 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_82, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_05d9;
		}

IL_0369_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_83 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_14 = L_83;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_84 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_84, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_85 = (-1);
			V_0 = L_85;
			__this->___U3CU3E1__state_0 = L_85;
		}

IL_0386_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_038f_1:
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_86 = (_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_87 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_86, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),53));
			V_15 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_87) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_88 = V_15;
			if (!L_88)
			{
				goto IL_0416_1;
			}
		}
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_89 = (_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_90 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_89, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),53));
			NullCheck((RuntimeObject*)L_90);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_91;
			L_91 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_90);
			V_3 = L_91;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_92;
			L_92 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_16 = L_92;
			bool L_93;
			L_93 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_16), NULL);
			if (L_93)
			{
				goto IL_040d_1;
			}
		}
		{
			int32_t L_94 = 6;
			V_0 = L_94;
			__this->___U3CU3E1__state_0 = L_94;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_95 = V_16;
			__this->___U3CU3Eu__1_3 = L_95;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_96 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_96, (&V_16), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_05d9;
		}

IL_03f0_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_97 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_16 = L_97;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_98 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_98, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_99 = (-1);
			V_0 = L_99;
			__this->___U3CU3E1__state_0 = L_99;
		}

IL_040d_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_16), NULL);
		}

IL_0416_1:
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_100 = (_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_101 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_100, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),58));
			V_17 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_101) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_102 = V_17;
			if (!L_102)
			{
				goto IL_049d_1;
			}
		}
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_103 = (_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_104 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_103, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),58));
			NullCheck((RuntimeObject*)L_104);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_105;
			L_105 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_104);
			V_3 = L_105;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_106;
			L_106 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_18 = L_106;
			bool L_107;
			L_107 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_18), NULL);
			if (L_107)
			{
				goto IL_0494_1;
			}
		}
		{
			int32_t L_108 = 7;
			V_0 = L_108;
			__this->___U3CU3E1__state_0 = L_108;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_109 = V_18;
			__this->___U3CU3Eu__1_3 = L_109;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_110 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_110, (&V_18), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_05d9;
		}

IL_0477_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_111 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_18 = L_111;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_112 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_112, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_113 = (-1);
			V_0 = L_113;
			__this->___U3CU3E1__state_0 = L_113;
		}

IL_0494_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_18), NULL);
		}

IL_049d_1:
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_114 = (_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_115 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_114, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),63));
			V_19 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_115) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_116 = V_19;
			if (!L_116)
			{
				goto IL_0524_1;
			}
		}
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_117 = (_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_118 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_117, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),63));
			NullCheck((RuntimeObject*)L_118);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_119;
			L_119 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_118);
			V_3 = L_119;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_120;
			L_120 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_20 = L_120;
			bool L_121;
			L_121 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_20), NULL);
			if (L_121)
			{
				goto IL_051b_1;
			}
		}
		{
			int32_t L_122 = 8;
			V_0 = L_122;
			__this->___U3CU3E1__state_0 = L_122;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_123 = V_20;
			__this->___U3CU3Eu__1_3 = L_123;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_124 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_124, (&V_20), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_05d9;
		}

IL_04fe_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_125 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_20 = L_125;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_126 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_126, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_127 = (-1);
			V_0 = L_127;
			__this->___U3CU3E1__state_0 = L_127;
		}

IL_051b_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_20), NULL);
		}

IL_0524_1:
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_128 = (_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_129 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_128, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),68));
			V_21 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_129) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_130 = V_21;
			if (!L_130)
			{
				goto IL_05a9_1;
			}
		}
		{
			_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D* L_131 = (_CombineLatest_tC666D8AA6C6EE781B265AC7C08F7296AA936B01D*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_132 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_131, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),68));
			NullCheck((RuntimeObject*)L_132);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_133;
			L_133 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_132);
			V_3 = L_133;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_134;
			L_134 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_22 = L_134;
			bool L_135;
			L_135 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_22), NULL);
			if (L_135)
			{
				goto IL_05a0_1;
			}
		}
		{
			int32_t L_136 = ((int32_t)9);
			V_0 = L_136;
			__this->___U3CU3E1__state_0 = L_136;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_137 = V_22;
			__this->___U3CU3Eu__1_3 = L_137;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_138 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_138, (&V_22), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_05d9;
		}

IL_0583_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_139 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_22 = L_139;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_140 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_140, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_141 = (-1);
			V_0 = L_141;
			__this->___U3CU3E1__state_0 = L_141;
		}

IL_05a0_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_22), NULL);
		}

IL_05a9_1:
		{
			goto IL_05c5;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_05ab;
		}
		throw e;
	}

CATCH_05ab:
	{
		V_23 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_142 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_143 = V_23;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_142, L_143, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_05d9;
	}

IL_05c5:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_144 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_144, NULL);
	}

IL_05d9:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__91_SetStateMachine_mF01C12850C3AAE88CA4D46591C69C50F297E2F1A_gshared (U3CDisposeAsyncU3Ed__91_t8C864E056A504FF8F902AA6338857E8D942CEDF3* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__99__ctor_mDDE17D8D7C999DD8877DD3D12BA1B73C99BA43AF_gshared (U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__99_MoveNext_mAAD6C965218E1A6E9B8792FD998EFF562FCAF460_gshared (U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_14;
	memset((&V_14), 0, sizeof(V_14));
	bool V_15 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_18;
	memset((&V_18), 0, sizeof(V_18));
	bool V_19 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_24;
	memset((&V_24), 0, sizeof(V_24));
	Exception_t* V_25 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
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
					goto IL_003b_1;
				}
				case 1:
				{
					goto IL_0040_1;
				}
				case 2:
				{
					goto IL_0045_1;
				}
				case 3:
				{
					goto IL_004a_1;
				}
				case 4:
				{
					goto IL_004f_1;
				}
				case 5:
				{
					goto IL_0054_1;
				}
				case 6:
				{
					goto IL_0059_1;
				}
				case 7:
				{
					goto IL_005e_1;
				}
				case 8:
				{
					goto IL_0063_1;
				}
				case 9:
				{
					goto IL_0068_1;
				}
				case 10:
				{
					goto IL_006d_1;
				}
			}
		}
		{
			goto IL_0072_1;
		}

IL_003b_1:
		{
			goto IL_00d0_1;
		}

IL_0040_1:
		{
			goto IL_0156_1;
		}

IL_0045_1:
		{
			goto IL_01dd_1;
		}

IL_004a_1:
		{
			goto IL_0264_1;
		}

IL_004f_1:
		{
			goto IL_02eb_1;
		}

IL_0054_1:
		{
			goto IL_0372_1;
		}

IL_0059_1:
		{
			goto IL_03f9_1;
		}

IL_005e_1:
		{
			goto IL_0480_1;
		}

IL_0063_1:
		{
			goto IL_0507_1;
		}

IL_0068_1:
		{
			goto IL_058f_1;
		}

IL_006d_1:
		{
			goto IL_0614_1;
		}

IL_0072_1:
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_2 = (_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),25));
			V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_00f5_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_5 = (_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_6 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),25));
			NullCheck((RuntimeObject*)L_6);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_7;
			L_7 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
			V_3 = L_7;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_8;
			L_8 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_2 = L_8;
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_2), NULL);
			if (L_9)
			{
				goto IL_00ec_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state_0 = L_10;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_11 = V_2;
			__this->___U3CU3Eu__1_3 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_12 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_12, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_066a;
		}

IL_00d0_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_2 = L_13;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_14 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_14, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state_0 = L_15;
		}

IL_00ec_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_2), NULL);
		}

IL_00f5_1:
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_16 = (_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_17 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),30));
			V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_17) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_18 = V_5;
			if (!L_18)
			{
				goto IL_017c_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_19 = (_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_20 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),30));
			NullCheck((RuntimeObject*)L_20);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_21;
			L_21 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
			V_3 = L_21;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_22;
			L_22 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_6 = L_22;
			bool L_23;
			L_23 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_6), NULL);
			if (L_23)
			{
				goto IL_0173_1;
			}
		}
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->___U3CU3E1__state_0 = L_24;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_25 = V_6;
			__this->___U3CU3Eu__1_3 = L_25;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_26, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_066a;
		}

IL_0156_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_27 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_6 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_28 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state_0 = L_29;
		}

IL_0173_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_6), NULL);
		}

IL_017c_1:
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_30 = (_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_31 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),35));
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_31) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_32 = V_7;
			if (!L_32)
			{
				goto IL_0203_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_33 = (_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_34 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_33, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),35));
			NullCheck((RuntimeObject*)L_34);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_35;
			L_35 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
			V_3 = L_35;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36;
			L_36 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_8 = L_36;
			bool L_37;
			L_37 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_37)
			{
				goto IL_01fa_1;
			}
		}
		{
			int32_t L_38 = 2;
			V_0 = L_38;
			__this->___U3CU3E1__state_0 = L_38;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39 = V_8;
			__this->___U3CU3Eu__1_3 = L_39;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_40 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_40, (&V_8), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_066a;
		}

IL_01dd_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_8 = L_41;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_42 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_42, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_43 = (-1);
			V_0 = L_43;
			__this->___U3CU3E1__state_0 = L_43;
		}

IL_01fa_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_0203_1:
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_44 = (_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_45 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),40));
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_45) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_46 = V_9;
			if (!L_46)
			{
				goto IL_028a_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_47 = (_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_48 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_47, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),40));
			NullCheck((RuntimeObject*)L_48);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_49;
			L_49 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_48);
			V_3 = L_49;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50;
			L_50 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_10 = L_50;
			bool L_51;
			L_51 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_51)
			{
				goto IL_0281_1;
			}
		}
		{
			int32_t L_52 = 3;
			V_0 = L_52;
			__this->___U3CU3E1__state_0 = L_52;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_53 = V_10;
			__this->___U3CU3Eu__1_3 = L_53;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_54 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_54, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_066a;
		}

IL_0264_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_55 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_10 = L_55;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_56 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_56, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_57 = (-1);
			V_0 = L_57;
			__this->___U3CU3E1__state_0 = L_57;
		}

IL_0281_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_028a_1:
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_58 = (_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_59 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_58, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),45));
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_59) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_60 = V_11;
			if (!L_60)
			{
				goto IL_0311_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_61 = (_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_62 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_61, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),45));
			NullCheck((RuntimeObject*)L_62);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_63;
			L_63 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_62);
			V_3 = L_63;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_64;
			L_64 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_12 = L_64;
			bool L_65;
			L_65 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_65)
			{
				goto IL_0308_1;
			}
		}
		{
			int32_t L_66 = 4;
			V_0 = L_66;
			__this->___U3CU3E1__state_0 = L_66;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_67 = V_12;
			__this->___U3CU3Eu__1_3 = L_67;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_68 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_68, (&V_12), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_066a;
		}

IL_02eb_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_69 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_12 = L_69;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_70 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_70, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_71 = (-1);
			V_0 = L_71;
			__this->___U3CU3E1__state_0 = L_71;
		}

IL_0308_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_0311_1:
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_72 = (_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_73 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_72, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),50));
			V_13 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_73) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_74 = V_13;
			if (!L_74)
			{
				goto IL_0398_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_75 = (_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_76 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_75, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),50));
			NullCheck((RuntimeObject*)L_76);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_77;
			L_77 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_76);
			V_3 = L_77;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_78;
			L_78 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_14 = L_78;
			bool L_79;
			L_79 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_14), NULL);
			if (L_79)
			{
				goto IL_038f_1;
			}
		}
		{
			int32_t L_80 = 5;
			V_0 = L_80;
			__this->___U3CU3E1__state_0 = L_80;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_81 = V_14;
			__this->___U3CU3Eu__1_3 = L_81;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_82 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_82, (&V_14), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_066a;
		}

IL_0372_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_83 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_14 = L_83;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_84 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_84, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_85 = (-1);
			V_0 = L_85;
			__this->___U3CU3E1__state_0 = L_85;
		}

IL_038f_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_14), NULL);
		}

IL_0398_1:
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_86 = (_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_87 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_86, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),55));
			V_15 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_87) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_88 = V_15;
			if (!L_88)
			{
				goto IL_041f_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_89 = (_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_90 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_89, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),55));
			NullCheck((RuntimeObject*)L_90);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_91;
			L_91 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_90);
			V_3 = L_91;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_92;
			L_92 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_16 = L_92;
			bool L_93;
			L_93 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_16), NULL);
			if (L_93)
			{
				goto IL_0416_1;
			}
		}
		{
			int32_t L_94 = 6;
			V_0 = L_94;
			__this->___U3CU3E1__state_0 = L_94;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_95 = V_16;
			__this->___U3CU3Eu__1_3 = L_95;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_96 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_96, (&V_16), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_066a;
		}

IL_03f9_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_97 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_16 = L_97;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_98 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_98, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_99 = (-1);
			V_0 = L_99;
			__this->___U3CU3E1__state_0 = L_99;
		}

IL_0416_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_16), NULL);
		}

IL_041f_1:
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_100 = (_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_101 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_100, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),60));
			V_17 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_101) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_102 = V_17;
			if (!L_102)
			{
				goto IL_04a6_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_103 = (_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_104 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_103, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),60));
			NullCheck((RuntimeObject*)L_104);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_105;
			L_105 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_104);
			V_3 = L_105;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_106;
			L_106 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_18 = L_106;
			bool L_107;
			L_107 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_18), NULL);
			if (L_107)
			{
				goto IL_049d_1;
			}
		}
		{
			int32_t L_108 = 7;
			V_0 = L_108;
			__this->___U3CU3E1__state_0 = L_108;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_109 = V_18;
			__this->___U3CU3Eu__1_3 = L_109;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_110 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_110, (&V_18), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_066a;
		}

IL_0480_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_111 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_18 = L_111;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_112 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_112, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_113 = (-1);
			V_0 = L_113;
			__this->___U3CU3E1__state_0 = L_113;
		}

IL_049d_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_18), NULL);
		}

IL_04a6_1:
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_114 = (_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_115 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_114, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),65));
			V_19 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_115) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_116 = V_19;
			if (!L_116)
			{
				goto IL_052d_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_117 = (_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_118 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_117, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),65));
			NullCheck((RuntimeObject*)L_118);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_119;
			L_119 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_118);
			V_3 = L_119;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_120;
			L_120 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_20 = L_120;
			bool L_121;
			L_121 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_20), NULL);
			if (L_121)
			{
				goto IL_0524_1;
			}
		}
		{
			int32_t L_122 = 8;
			V_0 = L_122;
			__this->___U3CU3E1__state_0 = L_122;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_123 = V_20;
			__this->___U3CU3Eu__1_3 = L_123;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_124 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_124, (&V_20), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_066a;
		}

IL_0507_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_125 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_20 = L_125;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_126 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_126, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_127 = (-1);
			V_0 = L_127;
			__this->___U3CU3E1__state_0 = L_127;
		}

IL_0524_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_20), NULL);
		}

IL_052d_1:
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_128 = (_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_129 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_128, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),70));
			V_21 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_129) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_130 = V_21;
			if (!L_130)
			{
				goto IL_05b5_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_131 = (_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_132 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_131, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),70));
			NullCheck((RuntimeObject*)L_132);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_133;
			L_133 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_132);
			V_3 = L_133;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_134;
			L_134 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_22 = L_134;
			bool L_135;
			L_135 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_22), NULL);
			if (L_135)
			{
				goto IL_05ac_1;
			}
		}
		{
			int32_t L_136 = ((int32_t)9);
			V_0 = L_136;
			__this->___U3CU3E1__state_0 = L_136;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_137 = V_22;
			__this->___U3CU3Eu__1_3 = L_137;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_138 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_138, (&V_22), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_066a;
		}

IL_058f_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_139 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_22 = L_139;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_140 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_140, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_141 = (-1);
			V_0 = L_141;
			__this->___U3CU3E1__state_0 = L_141;
		}

IL_05ac_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_22), NULL);
		}

IL_05b5_1:
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_142 = (_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_143 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_142, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),75));
			V_23 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_143) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_144 = V_23;
			if (!L_144)
			{
				goto IL_063a_1;
			}
		}
		{
			_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD* L_145 = (_CombineLatest_tAD71013D448C0E3E1BDD1EFC9E410364965CEDCD*)__this->___U3CU3E4__this_2;
			RuntimeObject* L_146 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_145, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),75));
			NullCheck((RuntimeObject*)L_146);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_147;
			L_147 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_146);
			V_3 = L_147;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_148;
			L_148 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_24 = L_148;
			bool L_149;
			L_149 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_24), NULL);
			if (L_149)
			{
				goto IL_0631_1;
			}
		}
		{
			int32_t L_150 = ((int32_t)10);
			V_0 = L_150;
			__this->___U3CU3E1__state_0 = L_150;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_151 = V_24;
			__this->___U3CU3Eu__1_3 = L_151;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_3))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_152 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_152, (&V_24), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
			goto IL_066a;
		}

IL_0614_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_153 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_3;
			V_24 = L_153;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_154 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_154, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_155 = (-1);
			V_0 = L_155;
			__this->___U3CU3E1__state_0 = L_155;
		}

IL_0631_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_24), NULL);
		}

IL_063a_1:
		{
			goto IL_0656;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_063c;
		}
		throw e;
	}

CATCH_063c:
	{
		V_25 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_156 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_157 = V_25;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_156, L_157, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_066a;
	}

IL_0656:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_158 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_158, NULL);
	}

IL_066a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__99_SetStateMachine_mA022DED331E002C198D4A75B3449CB92F42C74F1_gshared (U3CDisposeAsyncU3Ed__99_tA461FA97323FF9418008CFD42ED585ABD37EEB07* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1__ctor_m708FAF31FDC19E6FDE5E944A9128A9AEF1F161F2_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_mB5D43C4A18D1C039180B81EB91FD0156BB04A99F_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
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
				U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mBE6FC6D3BFB3183D106C6DE3A94F3D52D38C5CED(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDistinctIteratorU3Ed__68_1_MoveNext_m71018DB904767E3714DDBFDC0FABA18EE46DCBC9_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_009a:
			{
				U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_mB5D43C4A18D1C039180B81EB91FD0156BB04A99F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
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
					goto IL_0074_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00a1;
			}

IL_0015_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				RuntimeObject* L_3 = (RuntimeObject*)__this->___comparer_3;
				Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* L_4 = (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
				Set_1__ctor_mB7F0167922AAC91B3E4FCF3843619F460CFF987E(L_4, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
				__this->___U3CsetU3E5__2_7 = L_4;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsetU3E5__2_7), (void*)L_4);
				RuntimeObject* L_5 = (RuntimeObject*)__this->___source_5;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
				__this->___U3CU3E7__wrap2_8 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2_8), (void*)L_6);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_007c_1;
			}

IL_0048_1:
			{
				RuntimeObject* L_7 = (RuntimeObject*)__this->___U3CU3E7__wrap2_8;
				NullCheck(L_7);
				int32_t L_8;
				L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_7);
				V_2 = L_8;
				Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF* L_9 = (Set_1_tB46E3A6F4E7DA00E45D2B9188BA0F635164039AF*)__this->___U3CsetU3E5__2_7;
				int32_t L_10 = V_2;
				NullCheck(L_9);
				bool L_11;
				L_11 = Set_1_Add_m04B0E9DF64E76BF3ED1C5ECFDC36BFA3555A0287(L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				if (!L_11)
				{
					goto IL_007c_1;
				}
			}
			{
				int32_t L_12 = V_2;
				__this->___U3CU3E2__current_1 = L_12;
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_00a1;
			}

IL_0074_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_007c_1:
			{
				RuntimeObject* L_13 = (RuntimeObject*)__this->___U3CU3E7__wrap2_8;
				NullCheck((RuntimeObject*)L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
				if (L_14)
				{
					goto IL_0048_1;
				}
			}
			{
				U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mBE6FC6D3BFB3183D106C6DE3A94F3D52D38C5CED(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				__this->___U3CU3E7__wrap2_8 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2_8), (void*)(RuntimeObject*)NULL);
				V_0 = (bool)0;
				goto IL_00a1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a1:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mBE6FC6D3BFB3183D106C6DE3A94F3D52D38C5CED_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CU3E7__wrap2_8;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___U3CU3E7__wrap2_8;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m5DD7A29942ED3250E0CF69B661DC15557287A56B_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E2__current_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_System_Collections_IEnumerator_Reset_mE9BA5D2810F8D9F857C8326A32B722D1AD74C115_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_IEnumerator_get_Current_m8E114F6E6FB648D34A8F14ACEBAA0A916BDCAD7E_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E2__current_1;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_mD2812ADD8FA30AB5E393A694274076C91F11D02E_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) 
{
	U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* V_0 = NULL;
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
		U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* L_3 = (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		U3CDistinctIteratorU3Ed__68_1__ctor_m708FAF31FDC19E6FDE5E944A9128A9AEF1F161F2(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
	}

IL_0029:
	{
		U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* L_4 = V_0;
		RuntimeObject* L_5 = (RuntimeObject*)__this->___U3CU3E3__source_6;
		NullCheck(L_4);
		L_4->___source_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___source_5), (void*)L_5);
		U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* L_6 = V_0;
		RuntimeObject* L_7 = (RuntimeObject*)__this->___U3CU3E3__comparer_4;
		NullCheck(L_6);
		L_6->___comparer_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___comparer_3), (void*)L_7);
		U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* L_8 = V_0;
		return (RuntimeObject*)L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_IEnumerable_GetEnumerator_m2EDBA71EEF5F9AB8F5D74D95545A81F245DADA01_gshared (U3CDistinctIteratorU3Ed__68_1_t163E35DC025A257B1AB8152275DADF9D0C92AB9F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_mD2812ADD8FA30AB5E393A694274076C91F11D02E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1__ctor_m86F87231C35710F52679F2D970FEDC4F70710B0A_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_m8392F600C3472440C079089D02C19C85711BAE38_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
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
				U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mCFD862B8E1AE48B3A2B7C3D64EFE43012DADE748(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDistinctIteratorU3Ed__68_1_MoveNext_mFC5166BA9B542CE7604CF321AD2D1815FA542014_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) 
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
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_009a:
			{
				U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_m8392F600C3472440C079089D02C19C85711BAE38(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
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
					goto IL_0074_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00a1;
			}

IL_0015_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				RuntimeObject* L_3 = (RuntimeObject*)__this->___comparer_3;
				Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* L_4 = (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
				Set_1__ctor_mC96DA58C0B3189E9298064337C1F05A5803C1727(L_4, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
				__this->___U3CsetU3E5__2_7 = L_4;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsetU3E5__2_7), (void*)L_4);
				RuntimeObject* L_5 = (RuntimeObject*)__this->___source_5;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
				__this->___U3CU3E7__wrap2_8 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2_8), (void*)L_6);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_007c_1;
			}

IL_0048_1:
			{
				RuntimeObject* L_7 = (RuntimeObject*)__this->___U3CU3E7__wrap2_8;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_7);
				V_2 = L_8;
				Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921* L_9 = (Set_1_tE5019340A154F7D644402ECAE970AA5ACDAE7921*)__this->___U3CsetU3E5__2_7;
				RuntimeObject* L_10 = V_2;
				NullCheck(L_9);
				bool L_11;
				L_11 = Set_1_Add_m8646609CFE62CC764D05B694DC78391745C077F4(L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				if (!L_11)
				{
					goto IL_007c_1;
				}
			}
			{
				RuntimeObject* L_12 = V_2;
				__this->___U3CU3E2__current_1 = L_12;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_12);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_00a1;
			}

IL_0074_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_007c_1:
			{
				RuntimeObject* L_13 = (RuntimeObject*)__this->___U3CU3E7__wrap2_8;
				NullCheck((RuntimeObject*)L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
				if (L_14)
				{
					goto IL_0048_1;
				}
			}
			{
				U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mCFD862B8E1AE48B3A2B7C3D64EFE43012DADE748(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				__this->___U3CU3E7__wrap2_8 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2_8), (void*)(RuntimeObject*)NULL);
				V_0 = (bool)0;
				goto IL_00a1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a1:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_mCFD862B8E1AE48B3A2B7C3D64EFE43012DADE748_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CU3E7__wrap2_8;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___U3CU3E7__wrap2_8;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m3BFCE33D1A0FBE4E6C2CA2B5E6C5A9AAB7C75F48_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CU3E2__current_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_System_Collections_IEnumerator_Reset_m77617FBFE6426263EAC2102317FD15B7F240BA6F_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_IEnumerator_get_Current_mCEBDDAB868A1A3C17A9493A0E5A37F0B2F334F14_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CU3E2__current_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m7B0039E6CC03FB4B20E61AEE0C9527FAE46C4377_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) 
{
	U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* V_0 = NULL;
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
		U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* L_3 = (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		U3CDistinctIteratorU3Ed__68_1__ctor_m86F87231C35710F52679F2D970FEDC4F70710B0A(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
	}

IL_0029:
	{
		U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* L_4 = V_0;
		RuntimeObject* L_5 = (RuntimeObject*)__this->___U3CU3E3__source_6;
		NullCheck(L_4);
		L_4->___source_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___source_5), (void*)L_5);
		U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* L_6 = V_0;
		RuntimeObject* L_7 = (RuntimeObject*)__this->___U3CU3E3__comparer_4;
		NullCheck(L_6);
		L_6->___comparer_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___comparer_3), (void*)L_7);
		U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* L_8 = V_0;
		return (RuntimeObject*)L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_IEnumerable_GetEnumerator_mC95300C41D98D3718D870CCE3DBE94F81C68D8A9_gshared (U3CDistinctIteratorU3Ed__68_1_tE9924A60C1D3B7B37B6B2EBFA23FF32F38DDC7ED* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m7B0039E6CC03FB4B20E61AEE0C9527FAE46C4377(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1__ctor_m368FD54689A4B23022D54E56433A64F47D8BDE65_gshared (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_System_IDisposable_Dispose_mB922A1DC8578B57729E78C9CD83A184147743656_gshared (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* __this, const RuntimeMethod* method) 
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
				((  void (*) (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDistinctIteratorU3Ed__68_1_MoveNext_m8DAF2B7D90B558C2BDBBE8E2F2BF0058D054CD6D_gshared (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
	const Il2CppFullySharedGenericAny L_12 = L_8;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
	bool V_0 = false;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
	memset(V_2, 0, SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_009a:
			{
				((  void (*) (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
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
					goto IL_0074_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00a1;
			}

IL_0015_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
				RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* L_4 = (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
				((  void (*) (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_4, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
				il2cpp_codegen_write_instance_field_data<Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_4);
				RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_6);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
				goto IL_007c_1;
			}

IL_0048_1:
			{
				RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
				NullCheck(L_7);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_7, (Il2CppFullySharedGenericAny*)L_8);
				il2cpp_codegen_memcpy(V_2, L_8, SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
				Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* L_9 = *(Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				il2cpp_codegen_memcpy(L_10, V_2, SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
				NullCheck(L_9);
				bool L_11;
				L_11 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_10: *(void**)L_10));
				if (!L_11)
				{
					goto IL_007c_1;
				}
			}
			{
				il2cpp_codegen_memcpy(L_12, V_2, SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_12, SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
				V_0 = (bool)1;
				goto IL_00a1;
			}

IL_0074_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
			}

IL_007c_1:
			{
				RuntimeObject* L_13 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
				NullCheck((RuntimeObject*)L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
				if (L_14)
				{
					goto IL_0048_1;
				}
			}
			{
				((  void (*) (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), (RuntimeObject*)NULL);
				V_0 = (bool)0;
				goto IL_00a1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a1:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_U3CU3Em__Finally1_m3A1915C2D0E1F2A53DCCC453913870C5987B3622_gshared (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumeratorU3CTSourceU3E_get_Current_m4F2FD638E67166E5D6467B8C6F3D8C0F236B8945_gshared (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDistinctIteratorU3Ed__68_1_System_Collections_IEnumerator_Reset_mA5510FD78835228D46F445739E3B48F864F15CB2_gshared (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_IEnumerator_get_Current_m7AD240D5FF03DFA83B0112F97CC62CF8527123FA_gshared (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TSource_t3FF79E3F222559BCCBA35ED008F0F85B66E62A00);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m853907FC376AB6563EFE8D67DBE362224708D80F_gshared (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* __this, const RuntimeMethod* method) 
{
	U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* V_0 = NULL;
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
		U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* L_3 = (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
	}

IL_0029:
	{
		U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* L_4 = V_0;
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		NullCheck(L_4);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_5);
		U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* L_6 = V_0;
		RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck(L_6);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_7);
		U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* L_8 = V_0;
		return (RuntimeObject*)L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDistinctIteratorU3Ed__68_1_System_Collections_IEnumerable_GetEnumerator_m7B14B90057F6FF2EF898076D378CA123AE70559C_gshared (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (U3CDistinctIteratorU3Ed__68_1_tC6ED0835DAAE461DB0A25147641D6DB128BC8392*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CElementAtAsyncU3Ed__0_1__ctor_mEE48BFC8B654923D2537DBFBBC7607D6A2982F55_gshared (U3CElementAtAsyncU3Ed__0_1_t828967E53B1F0CA7BDCEF9D605C46215C4EC3044* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CElementAtAsyncU3Ed__0_1_MoveNext_mF3A132B42132382A29A4A773B67D6A0A04C881C8_gshared (U3CElementAtAsyncU3Ed__0_1_t828967E53B1F0CA7BDCEF9D605C46215C4EC3044* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_tC99DD9D6ED21E46999BB135D89FD8A305F36B94C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TSource_tC99DD9D6ED21E46999BB135D89FD8A305F36B94C);
	const Il2CppFullySharedGenericAny L_48 = L_13;
	const Il2CppFullySharedGenericAny L_50 = L_13;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tC99DD9D6ED21E46999BB135D89FD8A305F36B94C);
	memset(V_1, 0, SizeOf_TSource_tC99DD9D6ED21E46999BB135D89FD8A305F36B94C);
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_6;
	memset((&V_6), 0, sizeof(V_6));
	U3CElementAtAsyncU3Ed__0_1_t828967E53B1F0CA7BDCEF9D605C46215C4EC3044* V_7 = NULL;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_11;
	memset((&V_11), 0, sizeof(V_11));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
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
			goto IL_01a0_1;
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
				goto IL_00d2_2;
			}

IL_004a_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), 0);
				goto IL_008a_2;
			}

IL_0054_2:
			{
				int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
				V_3 = L_7;
				int32_t L_8 = V_3;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), ((int32_t)il2cpp_codegen_add(L_8, 1)));
				int32_t L_9 = V_3;
				int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				V_2 = (bool)((((int32_t)L_9) == ((int32_t)L_10))? 1 : 0);
				bool L_11 = V_2;
				if (!L_11)
				{
					goto IL_0089_2;
				}
			}
			{
				RuntimeObject* L_12 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_12);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_12, (Il2CppFullySharedGenericAny*)L_13);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_13, SizeOf_TSource_tC99DD9D6ED21E46999BB135D89FD8A305F36B94C);
				goto IL_0132_2;
			}

IL_0089_2:
			{
			}

IL_008a_2:
			{
				RuntimeObject* L_14 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_14);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_15;
				L_15 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_14);
				V_6 = L_15;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_16;
				L_16 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_6), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_5 = L_16;
				bool L_17;
				L_17 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_5), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_00ef_2;
				}
			}
			{
				int32_t L_18 = 0;
				V_0 = L_18;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_18);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19 = V_5;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_19);
				V_7 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CElementAtAsyncU3Ed__0_1_t828967E53B1F0CA7BDCEF9D605C46215C4EC3044**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_5), (&V_7), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_025f;
			}

IL_00d2_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_20 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12));
				V_5 = L_20;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_21 = (-1);
				V_0 = L_21;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_21);
			}

IL_00ef_2:
			{
				bool L_22;
				L_22 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_5), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_22);
				bool L_23 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
				V_4 = L_23;
				bool L_24 = V_4;
				if (L_24)
				{
					goto IL_0054_2;
				}
			}
			{
				bool L_25 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				V_8 = L_25;
				bool L_26 = V_8;
				if (!L_26)
				{
					goto IL_0126_2;
				}
			}
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_TSource_tC99DD9D6ED21E46999BB135D89FD8A305F36B94C);
				goto IL_0132_2;
			}

IL_0126_2:
			{
				Exception_t* L_27;
				L_27 = Error_ArgumentOutOfRange_mB12CA2A5A28BE69DF8EFD9AB4FBD5DDD4C27AD13_inline(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, method);
			}

IL_0132_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 1);
				goto IL_0147_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_013b_1;
			}
			throw e;
		}

CATCH_013b_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_28 = V_9;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_28);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0147_1;
		}

IL_0147_1:
		{
			RuntimeObject* L_29 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_29) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_30 = V_10;
			if (!L_30)
			{
				goto IL_01c6_1;
			}
		}
		{
			RuntimeObject* L_31 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			NullCheck((RuntimeObject*)L_31);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_32;
			L_32 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_31);
			V_12 = L_32;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_33;
			L_33 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_12), NULL);
			V_11 = L_33;
			bool L_34;
			L_34 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_11), NULL);
			if (L_34)
			{
				goto IL_01bd_1;
			}
		}
		{
			int32_t L_35 = 1;
			V_0 = L_35;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_35);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36 = V_11;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_36);
			V_7 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CElementAtAsyncU3Ed__0_1_t828967E53B1F0CA7BDCEF9D605C46215C4EC3044**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_11), (&V_7), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
			goto IL_025f;
		}

IL_01a0_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_37 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
			V_11 = L_37;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_38 = (-1);
			V_0 = L_38;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_38);
		}

IL_01bd_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_01c6_1:
		{
			RuntimeObject* L_39 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_9 = L_39;
			RuntimeObject* L_40 = V_9;
			if (!L_40)
			{
				goto IL_01f0_1;
			}
		}
		{
			RuntimeObject* L_41 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_41, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_42 = V_13;
			if (L_42)
			{
				goto IL_01e3_1;
			}
		}
		{
			RuntimeObject* L_43 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, method);
		}

IL_01e3_1:
		{
			Exception_t* L_44 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_45;
			L_45 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_44, NULL);
			NullCheck(L_45);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_45, NULL);
		}

IL_01f0_1:
		{
			int32_t L_46 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_3 = L_46;
			int32_t L_47 = V_3;
			if ((((int32_t)L_47) == ((int32_t)1)))
			{
				goto IL_01fd_1;
			}
		}
		{
			goto IL_0206_1;
		}

IL_01fd_1:
		{
			il2cpp_codegen_memcpy(L_48, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TSource_tC99DD9D6ED21E46999BB135D89FD8A305F36B94C);
			il2cpp_codegen_memcpy(V_1, L_48, SizeOf_TSource_tC99DD9D6ED21E46999BB135D89FD8A305F36B94C);
			goto IL_0243;
		}

IL_0206_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_TSource_tC99DD9D6ED21E46999BB135D89FD8A305F36B94C);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
			goto IL_0243;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0222;
		}
		throw e;
	}

CATCH_0222:
	{
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		Exception_t* L_49 = V_13;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_49, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_025f;
	}

IL_0243:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_50, V_1, SizeOf_TSource_tC99DD9D6ED21E46999BB135D89FD8A305F36B94C);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_50: *(void**)L_50));
	}

IL_025f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CElementAtAsyncU3Ed__0_1_SetStateMachine_m772AA47359A2DE747F4370474D80A73ECA45E2BF_gshared (U3CElementAtAsyncU3Ed__0_1_t828967E53B1F0CA7BDCEF9D605C46215C4EC3044* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28__ctor_m12DD4367CAA863C7406D2DC6FD650C53ADA44B29_gshared (U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28_System_IDisposable_Dispose_m7F3C235DED9F5C67BFED8EE8DAC4D498087E1128_gshared (U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateU3Ed__28_MoveNext_m24EF17AF62C347EE7811C8DBA7617B3A352BE4D6_gshared (U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* V_1 = NULL;
	int32_t V_2 = 0;
	U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE* G_B4_0 = NULL;
	U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE* G_B5_1 = NULL;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
		ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* L_1 = (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4*)__this->___U3CU3E4__this_6;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_00f0;
			}
			case 2:
			{
				goto IL_0149;
			}
			case 3:
			{
				goto IL_019f;
			}
			case 4:
			{
				goto IL_0237;
			}
			case 5:
			{
				goto IL_02c7;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_3 = (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)__this->___head_2;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_4 = (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)__this->___tail_3;
		if ((((RuntimeObject*)(Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)L_3) == ((RuntimeObject*)(Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)L_4)))
		{
			G_B4_0 = __this;
			goto IL_005b;
		}
		G_B3_0 = __this;
	}
	{
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_5 = (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)__this->___head_2;
		NullCheck(L_5);
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_6 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&L_5->____headAndTail_2);
		int32_t* L_7 = (int32_t*)(&L_6->___Tail_1);
		int32_t L_8;
		L_8 = VolatileRead(L_7);
		G_B5_0 = L_8;
		G_B5_1 = G_B3_0;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_9 = (int32_t)__this->___tailTail_4;
		G_B5_0 = L_9;
		G_B5_1 = G_B4_0;
	}

IL_0061:
	{
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_10 = (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)__this->___head_2;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Segment_get_FreezeOffset_m402D47C4B47FF6B763734B006DA71BA5DBC42582(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck(G_B5_1);
		G_B5_1->___U3CheadTailU3E5__2_7 = ((int32_t)il2cpp_codegen_subtract(G_B5_0, L_11));
		int32_t L_12 = (int32_t)__this->___headHead_5;
		int32_t L_13 = (int32_t)__this->___U3CheadTailU3E5__2_7;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_01c4;
		}
	}
	{
		int32_t L_14 = (int32_t)__this->___headHead_5;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_15 = (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)__this->___head_2;
		NullCheck(L_15);
		int32_t L_16 = (int32_t)L_15->____slotsMask_1;
		__this->___headHead_5 = ((int32_t)(L_14&L_16));
		int32_t L_17 = (int32_t)__this->___U3CheadTailU3E5__2_7;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_18 = (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)__this->___head_2;
		NullCheck(L_18);
		int32_t L_19 = (int32_t)L_18->____slotsMask_1;
		__this->___U3CheadTailU3E5__2_7 = ((int32_t)(L_17&L_19));
		int32_t L_20 = (int32_t)__this->___headHead_5;
		int32_t L_21 = (int32_t)__this->___U3CheadTailU3E5__2_7;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_22 = (int32_t)__this->___headHead_5;
		__this->___U3CiU3E5__3_8 = L_22;
		goto IL_0107;
	}

IL_00cf:
	{
		ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* L_23 = V_1;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_24 = (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)__this->___head_2;
		int32_t L_25 = (int32_t)__this->___U3CiU3E5__3_8;
		NullCheck(L_23);
		RuntimeObject* L_26;
		L_26 = ConcurrentQueue_1_GetItemWhenAvailable_m8CD12D6BE7E6FAE430B1FDF9DC5673FA0542C7F9(L_23, L_24, L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current_1 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_26);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00f0:
	{
		__this->___U3CU3E1__state_0 = (-1);
		int32_t L_27 = (int32_t)__this->___U3CiU3E5__3_8;
		V_2 = L_27;
		int32_t L_28 = V_2;
		__this->___U3CiU3E5__3_8 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0107:
	{
		int32_t L_29 = (int32_t)__this->___U3CiU3E5__3_8;
		int32_t L_30 = (int32_t)__this->___U3CheadTailU3E5__2_7;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_00cf;
		}
	}
	{
		goto IL_01c4;
	}

IL_011a:
	{
		int32_t L_31 = (int32_t)__this->___headHead_5;
		__this->___U3CiU3E5__3_8 = L_31;
		goto IL_0160;
	}

IL_0128:
	{
		ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* L_32 = V_1;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_33 = (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)__this->___head_2;
		int32_t L_34 = (int32_t)__this->___U3CiU3E5__3_8;
		NullCheck(L_32);
		RuntimeObject* L_35;
		L_35 = ConcurrentQueue_1_GetItemWhenAvailable_m8CD12D6BE7E6FAE430B1FDF9DC5673FA0542C7F9(L_32, L_33, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current_1 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_35);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0149:
	{
		__this->___U3CU3E1__state_0 = (-1);
		int32_t L_36 = (int32_t)__this->___U3CiU3E5__3_8;
		V_2 = L_36;
		int32_t L_37 = V_2;
		__this->___U3CiU3E5__3_8 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_0160:
	{
		int32_t L_38 = (int32_t)__this->___U3CiU3E5__3_8;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_39 = (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)__this->___head_2;
		NullCheck(L_39);
		SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B* L_40 = (SlotU5BU5D_t50AA161D0E0CA4901F88A99B082CD5FA953B023B*)L_39->____slots_0;
		NullCheck(L_40);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0128;
		}
	}
	{
		__this->___U3CiU3E5__3_8 = 0;
		goto IL_01b6;
	}

IL_017e:
	{
		ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* L_41 = V_1;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_42 = (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)__this->___head_2;
		int32_t L_43 = (int32_t)__this->___U3CiU3E5__3_8;
		NullCheck(L_41);
		RuntimeObject* L_44;
		L_44 = ConcurrentQueue_1_GetItemWhenAvailable_m8CD12D6BE7E6FAE430B1FDF9DC5673FA0542C7F9(L_41, L_42, L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current_1 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_44);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_019f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		int32_t L_45 = (int32_t)__this->___U3CiU3E5__3_8;
		V_2 = L_45;
		int32_t L_46 = V_2;
		__this->___U3CiU3E5__3_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_01b6:
	{
		int32_t L_47 = (int32_t)__this->___U3CiU3E5__3_8;
		int32_t L_48 = (int32_t)__this->___U3CheadTailU3E5__2_7;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_017e;
		}
	}

IL_01c4:
	{
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_49 = (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)__this->___head_2;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_50 = (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)__this->___tail_3;
		if ((((RuntimeObject*)(Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)L_49) == ((RuntimeObject*)(Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)L_50)))
		{
			goto IL_02ec;
		}
	}
	{
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_51 = (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)__this->___head_2;
		NullCheck(L_51);
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_52 = (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)L_51->____nextSegment_5;
		__this->___U3CsU3E5__4_9 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsU3E5__4_9), (void*)L_52);
		goto IL_026d;
	}

IL_01eb:
	{
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_53 = (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)__this->___U3CsU3E5__4_9;
		NullCheck(L_53);
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_54 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&L_53->____headAndTail_2);
		int32_t L_55 = (int32_t)L_54->___Tail_1;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_56 = (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)__this->___U3CsU3E5__4_9;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = Segment_get_FreezeOffset_m402D47C4B47FF6B763734B006DA71BA5DBC42582(L_56, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___U3CiU3E5__3_8 = ((int32_t)il2cpp_codegen_subtract(L_55, L_57));
		__this->___U3CiU3E5__5_10 = 0;
		goto IL_024e;
	}

IL_0216:
	{
		ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* L_58 = V_1;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_59 = (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)__this->___U3CsU3E5__4_9;
		int32_t L_60 = (int32_t)__this->___U3CiU3E5__5_10;
		NullCheck(L_58);
		RuntimeObject* L_61;
		L_61 = ConcurrentQueue_1_GetItemWhenAvailable_m8CD12D6BE7E6FAE430B1FDF9DC5673FA0542C7F9(L_58, L_59, L_60, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current_1 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_61);
		__this->___U3CU3E1__state_0 = 4;
		return (bool)1;
	}

IL_0237:
	{
		__this->___U3CU3E1__state_0 = (-1);
		int32_t L_62 = (int32_t)__this->___U3CiU3E5__5_10;
		V_2 = L_62;
		int32_t L_63 = V_2;
		__this->___U3CiU3E5__5_10 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_024e:
	{
		int32_t L_64 = (int32_t)__this->___U3CiU3E5__5_10;
		int32_t L_65 = (int32_t)__this->___U3CiU3E5__3_8;
		if ((((int32_t)L_64) < ((int32_t)L_65)))
		{
			goto IL_0216;
		}
	}
	{
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_66 = (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)__this->___U3CsU3E5__4_9;
		NullCheck(L_66);
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_67 = (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)L_66->____nextSegment_5;
		__this->___U3CsU3E5__4_9 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsU3E5__4_9), (void*)L_67);
	}

IL_026d:
	{
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_68 = (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)__this->___U3CsU3E5__4_9;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_69 = (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)__this->___tail_3;
		if ((!(((RuntimeObject*)(Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)L_68) == ((RuntimeObject*)(Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)L_69))))
		{
			goto IL_01eb;
		}
	}
	{
		__this->___U3CsU3E5__4_9 = (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsU3E5__4_9), (void*)(Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)NULL);
		int32_t L_70 = (int32_t)__this->___tailTail_4;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_71 = (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)__this->___tail_3;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = Segment_get_FreezeOffset_m402D47C4B47FF6B763734B006DA71BA5DBC42582(L_71, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___tailTail_4 = ((int32_t)il2cpp_codegen_subtract(L_70, L_72));
		__this->___U3CiU3E5__3_8 = 0;
		goto IL_02de;
	}

IL_02a6:
	{
		ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* L_73 = V_1;
		Segment_tBE464478C92438E20009981FD7F953F796D7F3B2* L_74 = (Segment_tBE464478C92438E20009981FD7F953F796D7F3B2*)__this->___tail_3;
		int32_t L_75 = (int32_t)__this->___U3CiU3E5__3_8;
		NullCheck(L_73);
		RuntimeObject* L_76;
		L_76 = ConcurrentQueue_1_GetItemWhenAvailable_m8CD12D6BE7E6FAE430B1FDF9DC5673FA0542C7F9(L_73, L_74, L_75, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CU3E2__current_1 = L_76;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_76);
		__this->___U3CU3E1__state_0 = 5;
		return (bool)1;
	}

IL_02c7:
	{
		__this->___U3CU3E1__state_0 = (-1);
		int32_t L_77 = (int32_t)__this->___U3CiU3E5__3_8;
		V_2 = L_77;
		int32_t L_78 = V_2;
		__this->___U3CiU3E5__3_8 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_02de:
	{
		int32_t L_79 = (int32_t)__this->___U3CiU3E5__3_8;
		int32_t L_80 = (int32_t)__this->___tailTail_4;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_02a6;
		}
	}

IL_02ec:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__28_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m84BECA6DF0B1FA053625DDD4C7F14FB7520459A4_gshared (U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CU3E2__current_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28_System_Collections_IEnumerator_Reset_m68AE1F12C3C1172ED67AD685F2336A6310D34A32_gshared (U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__28_System_Collections_IEnumerator_get_Current_mCED4D7E00A51D4748A517FECEE680910607F64A8_gshared (U3CEnumerateU3Ed__28_t0208D88B19E67F3B47A3ACACCAF0810D4DA5D4AE* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28__ctor_m90C63EAD01B9D30ACBA9EFE4F8B4A494ED163BBE_gshared (U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28_System_IDisposable_Dispose_mB208AC15CAF92C72AA0E6CFE0D30F692F28C89DC_gshared (U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateU3Ed__28_MoveNext_m2D1C05F0DFABA87FCCD19464553AA9D0341D6677_gshared (U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
	const Il2CppFullySharedGenericAny L_35 = L_26;
	const Il2CppFullySharedGenericAny L_44 = L_26;
	const Il2CppFullySharedGenericAny L_61 = L_26;
	const Il2CppFullySharedGenericAny L_76 = L_26;
	int32_t V_0 = 0;
	ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56* V_1 = NULL;
	int32_t V_2 = 0;
	U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12* G_B4_0 = NULL;
	U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12* G_B5_1 = NULL;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
		ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56* L_1 = *(ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_00f0;
			}
			case 2:
			{
				goto IL_0149;
			}
			case 3:
			{
				goto IL_019f;
			}
			case 4:
			{
				goto IL_0237;
			}
			case 5:
			{
				goto IL_02c7;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002e:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_3 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_4 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		if ((((RuntimeObject*)(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*)L_3) == ((RuntimeObject*)(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*)L_4)))
		{
			G_B4_0 = ((U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12*)__this);
			goto IL_005b;
		}
		G_B3_0 = ((U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12*)__this);
	}
	{
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_5 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_5);
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_6 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&L_5->____headAndTail_2);
		int32_t* L_7 = (int32_t*)(&L_6->___Tail_1);
		int32_t L_8;
		L_8 = VolatileRead(L_7);
		G_B5_0 = L_8;
		G_B5_1 = ((U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12*)G_B3_0);
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_9 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		G_B5_0 = L_9;
		G_B5_1 = ((U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12*)G_B4_0);
	}

IL_0061:
	{
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_10 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_10);
		int32_t L_11;
		L_11 = ((  int32_t (*) (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck(G_B5_1);
		il2cpp_codegen_write_instance_field_data<int32_t>(G_B5_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), ((int32_t)il2cpp_codegen_subtract(G_B5_0, L_11)));
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_13 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_01c4;
		}
	}
	{
		int32_t L_14 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_15 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_15);
		int32_t L_16 = (int32_t)L_15->____slotsMask_1;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), ((int32_t)(L_14&L_16)));
		int32_t L_17 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_18 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_18);
		int32_t L_19 = (int32_t)L_18->____slotsMask_1;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), ((int32_t)(L_17&L_19)));
		int32_t L_20 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_21 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_22 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_22);
		goto IL_0107;
	}

IL_00cf:
	{
		ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56* L_23 = V_1;
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_24 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		int32_t L_25 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		NullCheck(L_23);
		InvokerActionInvoker3< Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_23, L_24, L_25, (Il2CppFullySharedGenericAny*)L_26);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_26, SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
		return (bool)1;
	}

IL_00f0:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		int32_t L_27 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		V_2 = L_27;
		int32_t L_28 = V_2;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), ((int32_t)il2cpp_codegen_add(L_28, 1)));
	}

IL_0107:
	{
		int32_t L_29 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		int32_t L_30 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_00cf;
		}
	}
	{
		goto IL_01c4;
	}

IL_011a:
	{
		int32_t L_31 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_31);
		goto IL_0160;
	}

IL_0128:
	{
		ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56* L_32 = V_1;
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_33 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		int32_t L_34 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		NullCheck(L_32);
		InvokerActionInvoker3< Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_32, L_33, L_34, (Il2CppFullySharedGenericAny*)L_35);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_35, SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 2);
		return (bool)1;
	}

IL_0149:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		int32_t L_36 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		V_2 = L_36;
		int32_t L_37 = V_2;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), ((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_0160:
	{
		int32_t L_38 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_39 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_39);
		SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444* L_40 = (SlotU5BU5D_t15A614E28C19F61C3F029DFAA2127DA15F293444*)L_39->____slots_0;
		NullCheck(L_40);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0128;
		}
	}
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 0);
		goto IL_01b6;
	}

IL_017e:
	{
		ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56* L_41 = V_1;
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_42 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		int32_t L_43 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		NullCheck(L_41);
		InvokerActionInvoker3< Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_41, L_42, L_43, (Il2CppFullySharedGenericAny*)L_44);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_44, SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 3);
		return (bool)1;
	}

IL_019f:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		int32_t L_45 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		V_2 = L_45;
		int32_t L_46 = V_2;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), ((int32_t)il2cpp_codegen_add(L_46, 1)));
	}

IL_01b6:
	{
		int32_t L_47 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		int32_t L_48 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_017e;
		}
	}

IL_01c4:
	{
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_49 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_50 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		if ((((RuntimeObject*)(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*)L_49) == ((RuntimeObject*)(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*)L_50)))
		{
			goto IL_02ec;
		}
	}
	{
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_51 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		NullCheck(L_51);
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_52 = (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*)L_51->____nextSegment_5;
		il2cpp_codegen_write_instance_field_data<Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_52);
		goto IL_026d;
	}

IL_01eb:
	{
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_53 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		NullCheck(L_53);
		PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8* L_54 = (PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8*)(&L_53->____headAndTail_2);
		int32_t L_55 = (int32_t)L_54->___Tail_1;
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_56 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		NullCheck(L_56);
		int32_t L_57;
		L_57 = ((  int32_t (*) (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_56, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), ((int32_t)il2cpp_codegen_subtract(L_55, L_57)));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), 0);
		goto IL_024e;
	}

IL_0216:
	{
		ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56* L_58 = V_1;
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_59 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		int32_t L_60 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
		NullCheck(L_58);
		InvokerActionInvoker3< Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_58, L_59, L_60, (Il2CppFullySharedGenericAny*)L_61);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_61, SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 4);
		return (bool)1;
	}

IL_0237:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		int32_t L_62 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
		V_2 = L_62;
		int32_t L_63 = V_2;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), ((int32_t)il2cpp_codegen_add(L_63, 1)));
	}

IL_024e:
	{
		int32_t L_64 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
		int32_t L_65 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		if ((((int32_t)L_64) < ((int32_t)L_65)))
		{
			goto IL_0216;
		}
	}
	{
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_66 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		NullCheck(L_66);
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_67 = (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*)L_66->____nextSegment_5;
		il2cpp_codegen_write_instance_field_data<Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_67);
	}

IL_026d:
	{
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_68 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_69 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		if ((!(((RuntimeObject*)(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*)L_68) == ((RuntimeObject*)(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*)L_69))))
		{
			goto IL_01eb;
		}
	}
	{
		il2cpp_codegen_write_instance_field_data<Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*)NULL);
		int32_t L_70 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_71 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		NullCheck(L_71);
		int32_t L_72;
		L_72 = ((  int32_t (*) (Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_71, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), ((int32_t)il2cpp_codegen_subtract(L_70, L_72)));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 0);
		goto IL_02de;
	}

IL_02a6:
	{
		ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56* L_73 = V_1;
		Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912* L_74 = *(Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		int32_t L_75 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		NullCheck(L_73);
		InvokerActionInvoker3< Segment_tA2C5A02AEE913CF94D2449FE0757EA3445935912*, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_73, L_74, L_75, (Il2CppFullySharedGenericAny*)L_76);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_76, SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 5);
		return (bool)1;
	}

IL_02c7:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		int32_t L_77 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		V_2 = L_77;
		int32_t L_78 = V_2;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), ((int32_t)il2cpp_codegen_add(L_78, 1)));
	}

IL_02de:
	{
		int32_t L_79 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
		int32_t L_80 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_02a6;
		}
	}

IL_02ec:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m321E3E9E233E620C618C2ED08276C1B266EAA0F3_gshared (U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__28_System_Collections_IEnumerator_Reset_m2322CF1E526EE56112B1E47D4993E3F38B1E6C72_gshared (U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__28_System_Collections_IEnumerator_get_Current_m29969B60AE4D04B38591795F77E8666BB8D6613A_gshared (U3CEnumerateU3Ed__28_tD7440BDC11153BC444DCE333B0950B1C7B9E9C12* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_T_t32BAFFC2677553C45671C5ADDF6FF8487F3ED4E2);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5), L_0);
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireU3Ed__3_1__ctor_m75ED698F212A9759FB198F5329BECE087125227B_gshared (U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireU3Ed__3_1_MoveNext_m6719FED98EB8735D4CA65DF67DC2D92CE5A0534C_gshared (U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Awaiter_tC37849E9D98CF99D3C15447094E67C3063E2D07F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const uint32_t SizeOf_T_tE148242C2B31EEB009974A2D4D9A4AB5F95B20C5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_tE148242C2B31EEB009974A2D4D9A4AB5F95B20C5);
	const Il2CppFullySharedGenericAny L_15 = L_9;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_tE148242C2B31EEB009974A2D4D9A4AB5F95B20C5);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_3 = alloca(SizeOf_Awaiter_tC37849E9D98CF99D3C15447094E67C3063E2D07F);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_6 = L_3;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_7 = L_3;
	int32_t V_0 = 0;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_1 = alloca(SizeOf_Awaiter_tC37849E9D98CF99D3C15447094E67C3063E2D07F);
	memset(V_1, 0, SizeOf_Awaiter_tC37849E9D98CF99D3C15447094E67C3063E2D07F);
	U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E* V_2 = NULL;
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
				InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), (((UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_3);
				il2cpp_codegen_memcpy(V_1, L_3, SizeOf_Awaiter_tC37849E9D98CF99D3C15447094E67C3063E2D07F);
				bool L_4;
				L_4 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
				if (L_4)
				{
					goto IL_0070_2;
				}
			}
			{
				int32_t L_5 = 0;
				V_0 = L_5;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_5);
				il2cpp_codegen_memcpy(L_6, V_1, SizeOf_Awaiter_tC37849E9D98CF99D3C15447094E67C3063E2D07F);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_6, SizeOf_Awaiter_tC37849E9D98CF99D3C15447094E67C3063E2D07F);
				V_2 = __this;
				((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1, (&V_2), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
				goto IL_0119;
			}

IL_0054_2:
			{
				il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)), SizeOf_Awaiter_tC37849E9D98CF99D3C15447094E67C3063E2D07F);
				il2cpp_codegen_memcpy(V_1, L_7, SizeOf_Awaiter_tC37849E9D98CF99D3C15447094E67C3063E2D07F);
				il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7)))), SizeOf_Awaiter_tC37849E9D98CF99D3C15447094E67C3063E2D07F);
				int32_t L_8 = (-1);
				V_0 = L_8;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_8);
			}

IL_0070_2:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1, (Il2CppFullySharedGenericAny*)L_9);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_9, SizeOf_T_tE148242C2B31EEB009974A2D4D9A4AB5F95B20C5);
				il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)), SizeOf_T_tE148242C2B31EEB009974A2D4D9A4AB5F95B20C5);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_10, SizeOf_T_tE148242C2B31EEB009974A2D4D9A4AB5F95B20C5);
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5)))), SizeOf_T_tE148242C2B31EEB009974A2D4D9A4AB5F95B20C5);
				goto IL_00b5_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0098_1;
			}
			throw e;
		}

CATCH_0098_1:
		{
			V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			Exception_t* L_11 = V_3;
			il2cpp_codegen_write_instance_field_data<Exception_t*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_11);
			AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773* L_12 = *(AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			Exception_t* L_13 = *(Exception_t**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			NullCheck(L_12);
			((  void (*) (AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_12, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00f9;
		}

IL_00b5_1:
		{
			AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773* L_14 = *(AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			il2cpp_codegen_memcpy(L_15, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)), SizeOf_T_tE148242C2B31EEB009974A2D4D9A4AB5F95B20C5);
			NullCheck(L_14);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_15: *(void**)L_15));
			AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773* L_16 = *(AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
			NullCheck(L_16);
			((  void (*) (AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
			goto IL_00f9;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)))), SizeOf_T_tE148242C2B31EEB009974A2D4D9A4AB5F95B20C5);
		Exception_t* L_17 = V_3;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_17, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0119;
	}

IL_00f9:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4)))), SizeOf_T_tE148242C2B31EEB009974A2D4D9A4AB5F95B20C5);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), NULL);
	}

IL_0119:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireU3Ed__3_1_SetStateMachine_m2CBEEECCFA1E1A28787CAB7FA7ADAA080EB9DE6C_gshared (U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAsyncU3Ed__0_1__ctor_m009D40DA01088A7F7030B160D52FF7BEF548DA07_gshared (U3CFirstAsyncU3Ed__0_1_t8FEFBA058854F78C0D1DDC66BF35661E1FF7B142* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAsyncU3Ed__0_1_MoveNext_m006D5CE3EE55C1CC5D54847F42FC9B1721CD23D4_gshared (U3CFirstAsyncU3Ed__0_1_t8FEFBA058854F78C0D1DDC66BF35661E1FF7B142* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t7A71E2418CCC1033FE6D93351A565292D483E203 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_TSource_t7A71E2418CCC1033FE6D93351A565292D483E203);
	const Il2CppFullySharedGenericAny L_43 = L_19;
	const Il2CppFullySharedGenericAny L_45 = L_19;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t7A71E2418CCC1033FE6D93351A565292D483E203);
	memset(V_1, 0, SizeOf_TSource_t7A71E2418CCC1033FE6D93351A565292D483E203);
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CFirstAsyncU3Ed__0_1_t8FEFBA058854F78C0D1DDC66BF35661E1FF7B142* V_5 = NULL;
	bool V_6 = false;
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
			goto IL_0166_1;
		}

IL_0019_1:
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
				RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
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
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_11);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_12 = V_3;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_12);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CFirstAsyncU3Ed__0_1_t8FEFBA058854F78C0D1DDC66BF35661E1FF7B142**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				goto IL_0227;
			}

IL_008e_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_13 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
				V_3 = L_13;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_14 = (-1);
				V_0 = L_14;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_14);
			}

IL_00aa_2:
			{
				bool L_15;
				L_15 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_15);
				bool L_16 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9));
				V_2 = L_16;
				bool L_17 = V_2;
				if (!L_17)
				{
					goto IL_00d5_2;
				}
			}
			{
				RuntimeObject* L_18 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				NullCheck(L_18);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_18, (Il2CppFullySharedGenericAny*)L_19);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_19, SizeOf_TSource_t7A71E2418CCC1033FE6D93351A565292D483E203);
				goto IL_00f8_2;
			}

IL_00d5_2:
			{
				bool L_20 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
				V_6 = L_20;
				bool L_21 = V_6;
				if (!L_21)
				{
					goto IL_00f1_2;
				}
			}
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8)))), SizeOf_TSource_t7A71E2418CCC1033FE6D93351A565292D483E203);
				goto IL_00f8_2;
			}

IL_00f1_2:
			{
				Exception_t* L_22;
				L_22 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
			}

IL_00f8_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), 1);
				goto IL_010d_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0101_1;
			}
			throw e;
		}

CATCH_0101_1:
		{
			V_7 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_23 = V_7;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_23);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_010d_1;
		}

IL_010d_1:
		{
			RuntimeObject* L_24 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
			V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_24) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_25 = V_8;
			if (!L_25)
			{
				goto IL_018c_1;
			}
		}
		{
			RuntimeObject* L_26 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
			NullCheck((RuntimeObject*)L_26);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_27;
			L_27 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_26);
			V_10 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_28;
			L_28 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_10), NULL);
			V_9 = L_28;
			bool L_29;
			L_29 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_9), NULL);
			if (L_29)
			{
				goto IL_0183_1;
			}
		}
		{
			int32_t L_30 = 1;
			V_0 = L_30;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_30);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_31 = V_9;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_31);
			V_5 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CFirstAsyncU3Ed__0_1_t8FEFBA058854F78C0D1DDC66BF35661E1FF7B142**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_9), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
			goto IL_0227;
		}

IL_0166_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_32 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
			V_9 = L_32;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_33 = (-1);
			V_0 = L_33;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_33);
		}

IL_0183_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_9), NULL);
		}

IL_018c_1:
		{
			RuntimeObject* L_34 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_7 = L_34;
			RuntimeObject* L_35 = V_7;
			if (!L_35)
			{
				goto IL_01b6_1;
			}
		}
		{
			RuntimeObject* L_36 = V_7;
			V_11 = ((Exception_t*)IsInstClass((RuntimeObject*)L_36, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_37 = V_11;
			if (L_37)
			{
				goto IL_01a9_1;
			}
		}
		{
			RuntimeObject* L_38 = V_7;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_38, method);
		}

IL_01a9_1:
		{
			Exception_t* L_39 = V_11;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_40;
			L_40 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_39, NULL);
			NullCheck(L_40);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_40, NULL);
		}

IL_01b6_1:
		{
			int32_t L_41 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_12 = L_41;
			int32_t L_42 = V_12;
			if ((((int32_t)L_42) == ((int32_t)1)))
			{
				goto IL_01c5_1;
			}
		}
		{
			goto IL_01ce_1;
		}

IL_01c5_1:
		{
			il2cpp_codegen_memcpy(L_43, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8)), SizeOf_TSource_t7A71E2418CCC1033FE6D93351A565292D483E203);
			il2cpp_codegen_memcpy(V_1, L_43, SizeOf_TSource_t7A71E2418CCC1033FE6D93351A565292D483E203);
			goto IL_020b;
		}

IL_01ce_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8)))), SizeOf_TSource_t7A71E2418CCC1033FE6D93351A565292D483E203);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (RuntimeObject*)NULL);
			goto IL_020b;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01ea;
		}
		throw e;
	}

CATCH_01ea:
	{
		V_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (RuntimeObject*)NULL);
		Exception_t* L_44 = V_11;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_44, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0227;
	}

IL_020b:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_45, V_1, SizeOf_TSource_t7A71E2418CCC1033FE6D93351A565292D483E203);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_45: *(void**)L_45));
	}

IL_0227:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAsyncU3Ed__0_1_SetStateMachine_m50C58E315DE6AA980A260D2BE94E777E605C859D_gshared (U3CFirstAsyncU3Ed__0_1_t8FEFBA058854F78C0D1DDC66BF35661E1FF7B142* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAsyncU3Ed__1_1__ctor_mA01D72E913E5E4344C5166E14E36431C6A1CB5F8_gshared (U3CFirstAsyncU3Ed__1_1_tDD5E86442F853ED2127AA888C9B23F5CF897E394* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAsyncU3Ed__1_1_MoveNext_mCFF0B2EDAE27FB9979A2ACB6B2C406045FEF6D5C_gshared (U3CFirstAsyncU3Ed__1_1_tDD5E86442F853ED2127AA888C9B23F5CF897E394* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
	const Il2CppFullySharedGenericAny L_13 = L_8;
	const Il2CppFullySharedGenericAny L_48 = L_8;
	const Il2CppFullySharedGenericAny L_50 = L_8;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
	memset(V_1, 0, SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
	bool V_2 = false;
	bool V_3 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CFirstAsyncU3Ed__1_1_tDD5E86442F853ED2127AA888C9B23F5CF897E394* V_6 = NULL;
	bool V_7 = false;
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
			goto IL_01a2_1;
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
				goto IL_00db_2;
			}

IL_004a_2:
			{
				goto IL_0093_2;
			}

IL_004d_2:
			{
				RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_7);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_7, (Il2CppFullySharedGenericAny*)L_8);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_8, SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
				Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_9 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
				NullCheck(L_9);
				bool L_11;
				L_11 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_10: *(void**)L_10));
				V_2 = L_11;
				bool L_12 = V_2;
				if (!L_12)
				{
					goto IL_0086_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_13, SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
				goto IL_0134_2;
			}

IL_0086_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))), SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
			}

IL_0093_2:
			{
				RuntimeObject* L_14 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
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
					goto IL_00f8_2;
				}
			}
			{
				int32_t L_18 = 0;
				V_0 = L_18;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_18);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19 = V_4;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_19);
				V_6 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CFirstAsyncU3Ed__1_1_tDD5E86442F853ED2127AA888C9B23F5CF897E394**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_4), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				goto IL_0263;
			}

IL_00db_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_20 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12));
				V_4 = L_20;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_21 = (-1);
				V_0 = L_21;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_21);
			}

IL_00f8_2:
			{
				bool L_22;
				L_22 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_4), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_22);
				bool L_23 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
				V_3 = L_23;
				bool L_24 = V_3;
				if (L_24)
				{
					goto IL_004d_2;
				}
			}
			{
				bool L_25 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				V_7 = L_25;
				bool L_26 = V_7;
				if (!L_26)
				{
					goto IL_012d_2;
				}
			}
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
				goto IL_0134_2;
			}

IL_012d_2:
			{
				Exception_t* L_27;
				L_27 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, method);
			}

IL_0134_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 1);
				goto IL_0149_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_013d_1;
			}
			throw e;
		}

CATCH_013d_1:
		{
			V_8 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_28 = V_8;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_28);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0149_1;
		}

IL_0149_1:
		{
			RuntimeObject* L_29 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_29) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_30 = V_9;
			if (!L_30)
			{
				goto IL_01c8_1;
			}
		}
		{
			RuntimeObject* L_31 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			NullCheck((RuntimeObject*)L_31);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_32;
			L_32 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_31);
			V_11 = L_32;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_33;
			L_33 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_11), NULL);
			V_10 = L_33;
			bool L_34;
			L_34 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_34)
			{
				goto IL_01bf_1;
			}
		}
		{
			int32_t L_35 = 1;
			V_0 = L_35;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_35);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36 = V_10;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_36);
			V_6 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CFirstAsyncU3Ed__1_1_tDD5E86442F853ED2127AA888C9B23F5CF897E394**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_10), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0263;
		}

IL_01a2_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_37 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
			V_10 = L_37;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_38 = (-1);
			V_0 = L_38;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_38);
		}

IL_01bf_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_01c8_1:
		{
			RuntimeObject* L_39 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_8 = L_39;
			RuntimeObject* L_40 = V_8;
			if (!L_40)
			{
				goto IL_01f2_1;
			}
		}
		{
			RuntimeObject* L_41 = V_8;
			V_12 = ((Exception_t*)IsInstClass((RuntimeObject*)L_41, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_42 = V_12;
			if (L_42)
			{
				goto IL_01e5_1;
			}
		}
		{
			RuntimeObject* L_43 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, method);
		}

IL_01e5_1:
		{
			Exception_t* L_44 = V_12;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_45;
			L_45 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_44, NULL);
			NullCheck(L_45);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_45, NULL);
		}

IL_01f2_1:
		{
			int32_t L_46 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_13 = L_46;
			int32_t L_47 = V_13;
			if ((((int32_t)L_47) == ((int32_t)1)))
			{
				goto IL_0201_1;
			}
		}
		{
			goto IL_020a_1;
		}

IL_0201_1:
		{
			il2cpp_codegen_memcpy(L_48, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
			il2cpp_codegen_memcpy(V_1, L_48, SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
			goto IL_0247;
		}

IL_020a_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
			goto IL_0247;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0226;
		}
		throw e;
	}

CATCH_0226:
	{
		V_12 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		Exception_t* L_49 = V_12;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_49, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0263;
	}

IL_0247:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_50, V_1, SizeOf_TSource_tAC5BFF90EB46DC04A8E6AC9E129D698C8EA5612B);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_50: *(void**)L_50));
	}

IL_0263:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAsyncU3Ed__1_1_SetStateMachine_m4C2963307707B9AAA2856175B345D82FB84922A4_gshared (U3CFirstAsyncU3Ed__1_1_tDD5E86442F853ED2127AA888C9B23F5CF897E394* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAwaitAsyncU3Ed__2_1__ctor_mE2F37CC531EED7708427833FFC31AF2520637555_gshared (U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAwaitAsyncU3Ed__2_1_MoveNext_mF39D876B332E77B13C356528D7ADC31B2425F9EC_gshared (U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
	const Il2CppFullySharedGenericAny L_22 = L_9;
	const Il2CppFullySharedGenericAny L_57 = L_9;
	const Il2CppFullySharedGenericAny L_59 = L_9;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
	memset(V_1, 0, SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03* V_5 = NULL;
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
			goto IL_021a_1;
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
				goto IL_00b7_2;
			}

IL_004e_2:
			{
				goto IL_0151_2;
			}

IL_0053_2:
			{
				goto IL_0109_2;
			}

IL_0059_2:
			{
				RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_9, SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
				Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C* L_10 = *(Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
				NullCheck(L_10);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_12;
				L_12 = InvokerFuncInvoker1< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_11: *(void**)L_11));
				V_4 = L_12;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_13;
				L_13 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_4), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_3 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_3), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_00d3_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_15);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_16 = V_3;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_16);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_02db;
			}

IL_00b7_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
				V_3 = L_17;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_18 = (-1);
				V_0 = L_18;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_18);
			}

IL_00d3_2:
			{
				bool L_19;
				L_19 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_19);
				bool L_20 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
				V_2 = L_20;
				bool L_21 = V_2;
				if (!L_21)
				{
					goto IL_00fc_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_22, SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
				goto IL_01ac_2;
			}

IL_00fc_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))), SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
			}

IL_0109_2:
			{
				RuntimeObject* L_23 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
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
					goto IL_016e_2;
				}
			}
			{
				int32_t L_27 = 1;
				V_0 = L_27;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_27);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28 = V_7;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_28);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_7), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_02db;
			}

IL_0151_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
				V_7 = L_29;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_30 = (-1);
				V_0 = L_30;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_30);
			}

IL_016e_2:
			{
				bool L_31;
				L_31 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_31);
				bool L_32 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12));
				V_6 = L_32;
				bool L_33 = V_6;
				if (L_33)
				{
					goto IL_0059_2;
				}
			}
			{
				bool L_34 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				V_8 = L_34;
				bool L_35 = V_8;
				if (!L_35)
				{
					goto IL_01a5_2;
				}
			}
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
				goto IL_01ac_2;
			}

IL_01a5_2:
			{
				Exception_t* L_36;
				L_36 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, method);
			}

IL_01ac_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 1);
				goto IL_01c1_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01b5_1;
			}
			throw e;
		}

CATCH_01b5_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_37 = V_9;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_37);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01c1_1;
		}

IL_01c1_1:
		{
			RuntimeObject* L_38 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_38) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_39 = V_10;
			if (!L_39)
			{
				goto IL_0240_1;
			}
		}
		{
			RuntimeObject* L_40 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
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
				goto IL_0237_1;
			}
		}
		{
			int32_t L_44 = 2;
			V_0 = L_44;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_44);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_45 = V_11;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), L_45);
			V_5 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_11), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_02db;
		}

IL_021a_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_46 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
			V_11 = L_46;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_47 = (-1);
			V_0 = L_47;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_47);
		}

IL_0237_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_0240_1:
		{
			RuntimeObject* L_48 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_9 = L_48;
			RuntimeObject* L_49 = V_9;
			if (!L_49)
			{
				goto IL_026a_1;
			}
		}
		{
			RuntimeObject* L_50 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_50, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_51 = V_13;
			if (L_51)
			{
				goto IL_025d_1;
			}
		}
		{
			RuntimeObject* L_52 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_52, method);
		}

IL_025d_1:
		{
			Exception_t* L_53 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_54;
			L_54 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_53, NULL);
			NullCheck(L_54);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_54, NULL);
		}

IL_026a_1:
		{
			int32_t L_55 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_14 = L_55;
			int32_t L_56 = V_14;
			if ((((int32_t)L_56) == ((int32_t)1)))
			{
				goto IL_0279_1;
			}
		}
		{
			goto IL_0282_1;
		}

IL_0279_1:
		{
			il2cpp_codegen_memcpy(L_57, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
			il2cpp_codegen_memcpy(V_1, L_57, SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
			goto IL_02bf;
		}

IL_0282_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
			goto IL_02bf;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_029e;
		}
		throw e;
	}

CATCH_029e:
	{
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		Exception_t* L_58 = V_13;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_58, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02db;
	}

IL_02bf:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_59, V_1, SizeOf_TSource_t73BC079A7B457590EC366A2BF894276EAD0C6BBE);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_59: *(void**)L_59));
	}

IL_02db:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAwaitAsyncU3Ed__2_1_SetStateMachine_m3719BF86E2A45D69F38681458DAFC2FAF32380CB_gshared (U3CFirstAwaitAsyncU3Ed__2_1_t0335CFF4BC1145B5DD127FA1D13432DEA6A0CE03* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAwaitWithCancellationAsyncU3Ed__3_1__ctor_mA869972B6D9C397C040C800AC3CFE67FDB2D99BC_gshared (U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_MoveNext_mC9F9C7B3F3FA1D703FEF99A643098753C384EED2_gshared (U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
	const Il2CppFullySharedGenericAny L_23 = L_9;
	const Il2CppFullySharedGenericAny L_58 = L_9;
	const Il2CppFullySharedGenericAny L_60 = L_9;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
	memset(V_1, 0, SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC* V_5 = NULL;
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
			goto IL_0220_1;
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
				goto IL_00bd_2;
			}

IL_004e_2:
			{
				goto IL_0157_2;
			}

IL_0053_2:
			{
				goto IL_010f_2;
			}

IL_0059_2:
			{
				RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_9, SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
				Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814* L_10 = *(Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
				NullCheck(L_10);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_13;
				L_13 = InvokerFuncInvoker2< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_11: *(void**)L_11), L_12);
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
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_16);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17 = V_3;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_17);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_02e1;
			}

IL_00bd_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_18 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
				V_3 = L_18;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_19 = (-1);
				V_0 = L_19;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_19);
			}

IL_00d9_2:
			{
				bool L_20;
				L_20 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_20);
				bool L_21 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
				V_2 = L_21;
				bool L_22 = V_2;
				if (!L_22)
				{
					goto IL_0102_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_23, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_23, SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
				goto IL_01b2_2;
			}

IL_0102_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))), SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
			}

IL_010f_2:
			{
				RuntimeObject* L_24 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
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
					goto IL_0174_2;
				}
			}
			{
				int32_t L_28 = 1;
				V_0 = L_28;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_28);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29 = V_7;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_29);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_7), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_02e1;
			}

IL_0157_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_30 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
				V_7 = L_30;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_31 = (-1);
				V_0 = L_31;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_31);
			}

IL_0174_2:
			{
				bool L_32;
				L_32 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_32);
				bool L_33 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12));
				V_6 = L_33;
				bool L_34 = V_6;
				if (L_34)
				{
					goto IL_0059_2;
				}
			}
			{
				bool L_35 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				V_8 = L_35;
				bool L_36 = V_8;
				if (!L_36)
				{
					goto IL_01ab_2;
				}
			}
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
				goto IL_01b2_2;
			}

IL_01ab_2:
			{
				Exception_t* L_37;
				L_37 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, method);
			}

IL_01b2_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 1);
				goto IL_01c7_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01bb_1;
			}
			throw e;
		}

CATCH_01bb_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_38 = V_9;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_38);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01c7_1;
		}

IL_01c7_1:
		{
			RuntimeObject* L_39 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_39) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_40 = V_10;
			if (!L_40)
			{
				goto IL_0246_1;
			}
		}
		{
			RuntimeObject* L_41 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
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
				goto IL_023d_1;
			}
		}
		{
			int32_t L_45 = 2;
			V_0 = L_45;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_45);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_46 = V_11;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), L_46);
			V_5 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_11), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_02e1;
		}

IL_0220_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
			V_11 = L_47;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_48 = (-1);
			V_0 = L_48;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_48);
		}

IL_023d_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_0246_1:
		{
			RuntimeObject* L_49 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_9 = L_49;
			RuntimeObject* L_50 = V_9;
			if (!L_50)
			{
				goto IL_0270_1;
			}
		}
		{
			RuntimeObject* L_51 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_51, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_52 = V_13;
			if (L_52)
			{
				goto IL_0263_1;
			}
		}
		{
			RuntimeObject* L_53 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_53, method);
		}

IL_0263_1:
		{
			Exception_t* L_54 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_55;
			L_55 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_54, NULL);
			NullCheck(L_55);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_55, NULL);
		}

IL_0270_1:
		{
			int32_t L_56 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_14 = L_56;
			int32_t L_57 = V_14;
			if ((((int32_t)L_57) == ((int32_t)1)))
			{
				goto IL_027f_1;
			}
		}
		{
			goto IL_0288_1;
		}

IL_027f_1:
		{
			il2cpp_codegen_memcpy(L_58, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
			il2cpp_codegen_memcpy(V_1, L_58, SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
			goto IL_02c5;
		}

IL_0288_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
			goto IL_02c5;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02a4;
		}
		throw e;
	}

CATCH_02a4:
	{
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		Exception_t* L_59 = V_13;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_59, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02e1;
	}

IL_02c5:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_60, V_1, SizeOf_TSource_t770E09C4235F55EC2ED20C1FF7B27906DF2F827F);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5)) ? L_60: *(void**)L_60));
	}

IL_02e1:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_SetStateMachine_m16FFEE10989F2110AEA021F639FF419D2617FAAA_gshared (U3CFirstAwaitWithCancellationAsyncU3Ed__3_1_tF176CAA5FE54CFE4E1BABD507A0631D3E6AC89DC* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAsyncU3Ed__0_1__ctor_m4C28CAF52CA5B3953851A2DA9F2ED4FBBA929887_gshared (U3CForEachAsyncU3Ed__0_1_t9582606A1F1A2D59AA951BBAAAC83A1CC5679B2E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAsyncU3Ed__0_1_MoveNext_m4F052A83E4B4A41B35BEE828958E3A7A4E290D56_gshared (U3CForEachAsyncU3Ed__0_1_t9582606A1F1A2D59AA951BBAAAC83A1CC5679B2E* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t234717223261E6827FBAB92FA5CC538705A41F3A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_t234717223261E6827FBAB92FA5CC538705A41F3A);
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CForEachAsyncU3Ed__0_1_t9582606A1F1A2D59AA951BBAAAC83A1CC5679B2E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	bool V_6 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t* V_9 = NULL;
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
			goto IL_0146_1;
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
				goto IL_00a8_2;
			}

IL_0047_2:
			{
				goto IL_0063_2;
			}

IL_004a_2:
			{
				Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_7 = (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this->___action_3;
				RuntimeObject* L_8 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				NullCheck(L_7);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_9: *(void**)L_9));
			}

IL_0063_2:
			{
				RuntimeObject* L_10 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
				NullCheck(L_10);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_11;
				L_11 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10);
				V_3 = L_11;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_12;
				L_12 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_3), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_2 = L_12;
				bool L_13;
				L_13 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_2), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_00c4_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state_0 = L_14;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_15 = V_2;
				__this->___U3CU3Eu__1_9 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_9))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_16 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CForEachAsyncU3Ed__0_1_t9582606A1F1A2D59AA951BBAAAC83A1CC5679B2E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_16, (&V_2), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_01e2;
			}

IL_00a8_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_9;
				V_2 = L_17;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_18 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_9);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state_0 = L_19;
			}

IL_00c4_2:
			{
				bool L_20;
				L_20 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_2), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__4_8 = L_20;
				bool L_21 = (bool)__this->___U3CU3Es__4_8;
				V_1 = L_21;
				bool L_22 = V_1;
				if (L_22)
				{
					goto IL_004a_2;
				}
			}
			{
				goto IL_00ed_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00e1_1;
			}
			throw e;
		}

CATCH_00e1_1:
		{
			V_5 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_23 = V_5;
			__this->___U3CU3Es__2_6 = L_23;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_6), (void*)L_23);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00ed_1;
		}

IL_00ed_1:
		{
			RuntimeObject* L_24 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
			V_6 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_24) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_25 = V_6;
			if (!L_25)
			{
				goto IL_016c_1;
			}
		}
		{
			RuntimeObject* L_26 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
			NullCheck((RuntimeObject*)L_26);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_27;
			L_27 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_26);
			V_8 = L_27;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_28;
			L_28 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_8), NULL);
			V_7 = L_28;
			bool L_29;
			L_29 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_7), NULL);
			if (L_29)
			{
				goto IL_0163_1;
			}
		}
		{
			int32_t L_30 = 1;
			V_0 = L_30;
			__this->___U3CU3E1__state_0 = L_30;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_31 = V_7;
			__this->___U3CU3Eu__2_10 = L_31;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_10))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_32 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CForEachAsyncU3Ed__0_1_t9582606A1F1A2D59AA951BBAAAC83A1CC5679B2E**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_32, (&V_7), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_01e2;
		}

IL_0146_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_33 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_10;
			V_7 = L_33;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_34 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_10);
			il2cpp_codegen_initobj(L_34, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_35 = (-1);
			V_0 = L_35;
			__this->___U3CU3E1__state_0 = L_35;
		}

IL_0163_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_7), NULL);
		}

IL_016c_1:
		{
			RuntimeObject* L_36 = (RuntimeObject*)__this->___U3CU3Es__2_6;
			V_5 = L_36;
			RuntimeObject* L_37 = V_5;
			if (!L_37)
			{
				goto IL_0196_1;
			}
		}
		{
			RuntimeObject* L_38 = V_5;
			V_9 = ((Exception_t*)IsInstClass((RuntimeObject*)L_38, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_39 = V_9;
			if (L_39)
			{
				goto IL_0189_1;
			}
		}
		{
			RuntimeObject* L_40 = V_5;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, method);
		}

IL_0189_1:
		{
			Exception_t* L_41 = V_9;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_42;
			L_42 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_41, NULL);
			NullCheck(L_42);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_42, NULL);
		}

IL_0196_1:
		{
			int32_t L_43 = (int32_t)__this->___U3CU3Es__3_7;
			__this->___U3CU3Es__2_6 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_6), (void*)NULL);
			goto IL_01c7;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01a6;
		}
		throw e;
	}

CATCH_01a6:
	{
		V_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_5), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_44 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_45 = V_9;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_44, L_45, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01e2;
	}

IL_01c7:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_5), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_46 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_46, NULL);
	}

IL_01e2:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAsyncU3Ed__0_1_SetStateMachine_m3FF806591B241DDE83FBBED156DF06FFA9993717_gshared (U3CForEachAsyncU3Ed__0_1_t9582606A1F1A2D59AA951BBAAAC83A1CC5679B2E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAsyncU3Ed__1_1__ctor_m723F2F8D9736565EFF1BF38D8C4A2245A1A15C9A_gshared (U3CForEachAsyncU3Ed__1_1_t10C921BC3C792263B1FFEF9A54C79CD1EE8F4FD4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAsyncU3Ed__1_1_MoveNext_m7E8D05B5E6D8E93C27236422226ADCC0A52E6075_gshared (U3CForEachAsyncU3Ed__1_1_t10C921BC3C792263B1FFEF9A54C79CD1EE8F4FD4* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_tC851374995ABCEBCC7D418F2FC6D05B524D4B6EA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_tC851374995ABCEBCC7D418F2FC6D05B524D4B6EA);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CForEachAsyncU3Ed__1_1_t10C921BC3C792263B1FFEF9A54C79CD1EE8F4FD4* V_5 = NULL;
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
			goto IL_003f_1;
		}

IL_0014_1:
		{
			goto IL_015f_1;
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
				goto IL_00c1_2;
			}

IL_0047_2:
			{
				__this->___U3CindexU3E5__4_8 = 0;
				goto IL_007b_2;
			}

IL_0051_2:
			{
				Action_2_t983A40F124DCF06E5CEB4DE585CE7204D7F7E25C* L_7 = (Action_2_t983A40F124DCF06E5CEB4DE585CE7204D7F7E25C*)__this->___action_3;
				RuntimeObject* L_8 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				int32_t L_10 = (int32_t)__this->___U3CindexU3E5__4_8;
				V_1 = L_10;
				int32_t L_11 = V_1;
				if (((int64_t)L_11 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_11 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CindexU3E5__4_8 = ((int32_t)il2cpp_codegen_add(L_11, 1));
				int32_t L_12 = V_1;
				NullCheck(L_7);
				InvokerActionInvoker2< Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_9: *(void**)L_9), L_12);
			}

IL_007b_2:
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
					goto IL_00dd_2;
				}
			}
			{
				int32_t L_17 = 0;
				V_0 = L_17;
				__this->___U3CU3E1__state_0 = L_17;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_18 = V_3;
				__this->___U3CU3Eu__1_10 = L_18;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_10))->___task_0))->___source_0), (void*)NULL);
				V_5 = __this;
				AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_19 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CForEachAsyncU3Ed__1_1_t10C921BC3C792263B1FFEF9A54C79CD1EE8F4FD4**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_19, (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_01fb;
			}

IL_00c1_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_20 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__1_10;
				V_3 = L_20;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_21 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_10);
				il2cpp_codegen_initobj(L_21, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_22 = (-1);
				V_0 = L_22;
				__this->___U3CU3E1__state_0 = L_22;
			}

IL_00dd_2:
			{
				bool L_23;
				L_23 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5_9 = L_23;
				bool L_24 = (bool)__this->___U3CU3Es__5_9;
				V_2 = L_24;
				bool L_25 = V_2;
				if (L_25)
				{
					goto IL_0051_2;
				}
			}
			{
				goto IL_0106_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00fa_1;
			}
			throw e;
		}

CATCH_00fa_1:
		{
			V_6 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_26 = V_6;
			__this->___U3CU3Es__2_6 = L_26;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_6), (void*)L_26);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0106_1;
		}

IL_0106_1:
		{
			RuntimeObject* L_27 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
			V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_27) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_28 = V_7;
			if (!L_28)
			{
				goto IL_0185_1;
			}
		}
		{
			RuntimeObject* L_29 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
			NullCheck((RuntimeObject*)L_29);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_30;
			L_30 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
			V_9 = L_30;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_31;
			L_31 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_9), NULL);
			V_8 = L_31;
			bool L_32;
			L_32 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_32)
			{
				goto IL_017c_1;
			}
		}
		{
			int32_t L_33 = 1;
			V_0 = L_33;
			__this->___U3CU3E1__state_0 = L_33;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_34 = V_8;
			__this->___U3CU3Eu__2_11 = L_34;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_11))->___task_0))->___source_0), (void*)NULL);
			V_5 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_35 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CForEachAsyncU3Ed__1_1_t10C921BC3C792263B1FFEF9A54C79CD1EE8F4FD4**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_35, (&V_8), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
			goto IL_01fb;
		}

IL_015f_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__2_11;
			V_8 = L_36;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_37 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_11);
			il2cpp_codegen_initobj(L_37, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_38 = (-1);
			V_0 = L_38;
			__this->___U3CU3E1__state_0 = L_38;
		}

IL_017c_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_0185_1:
		{
			RuntimeObject* L_39 = (RuntimeObject*)__this->___U3CU3Es__2_6;
			V_6 = L_39;
			RuntimeObject* L_40 = V_6;
			if (!L_40)
			{
				goto IL_01af_1;
			}
		}
		{
			RuntimeObject* L_41 = V_6;
			V_10 = ((Exception_t*)IsInstClass((RuntimeObject*)L_41, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_42 = V_10;
			if (L_42)
			{
				goto IL_01a2_1;
			}
		}
		{
			RuntimeObject* L_43 = V_6;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, method);
		}

IL_01a2_1:
		{
			Exception_t* L_44 = V_10;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_45;
			L_45 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_44, NULL);
			NullCheck(L_45);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_45, NULL);
		}

IL_01af_1:
		{
			int32_t L_46 = (int32_t)__this->___U3CU3Es__3_7;
			__this->___U3CU3Es__2_6 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_6), (void*)NULL);
			goto IL_01e0;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01bf;
		}
		throw e;
	}

CATCH_01bf:
	{
		V_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_5), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_47 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_48 = V_10;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_47, L_48, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01fb;
	}

IL_01e0:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_5), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_49 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_49, NULL);
	}

IL_01fb:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAsyncU3Ed__1_1_SetStateMachine_mE9AB1183647B36CF22D576F5D7F6A7A619700F50_gshared (U3CForEachAsyncU3Ed__1_1_t10C921BC3C792263B1FFEF9A54C79CD1EE8F4FD4* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitAsyncU3Ed__2_1__ctor_m15851E5BF7B6D84F4F5309DAC9E0C19D25D34112_gshared (U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitAsyncU3Ed__2_1_MoveNext_mDAF92706194A6D06465D32775EE65629CBD1BDB5_gshared (U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_tAE86725C28F4FF13E2996CFCF50CD81B341B6904 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tAE86725C28F4FF13E2996CFCF50CD81B341B6904);
	int32_t V_0 = 0;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B* V_3 = NULL;
	bool V_4 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	bool V_8 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_9;
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
			goto IL_01b1_1;
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
				goto IL_00a6_2;
			}

IL_004e_2:
			{
				goto IL_0112_2;
			}

IL_0053_2:
			{
				goto IL_00cb_2;
			}

IL_0056_2:
			{
				Func_2_tB9800595B3251D2492E40667A6C05061784D48FB* L_8 = (Func_2_tB9800595B3251D2492E40667A6C05061784D48FB*)__this->___action_3;
				RuntimeObject* L_9 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				NullCheck(L_8);
				UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_11;
				L_11 = InvokerFuncInvoker1< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10));
				V_2 = L_11;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_12;
				L_12 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_2), NULL);
				V_1 = L_12;
				bool L_13;
				L_13 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_1), NULL);
				if (L_13)
				{
					goto IL_00c2_2;
				}
			}
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->___U3CU3E1__state_0 = L_14;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_15 = V_1;
				__this->___U3CU3Eu__1_9 = L_15;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_9))->___task_0))->___source_0), (void*)NULL);
				V_3 = __this;
				AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_16 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_16, (&V_1), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_024d;
			}

IL_00a6_2:
			{
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_17 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_9;
				V_1 = L_17;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_18 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_9);
				il2cpp_codegen_initobj(L_18, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->___U3CU3E1__state_0 = L_19;
			}

IL_00c2_2:
			{
				Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_1), NULL);
			}

IL_00cb_2:
			{
				RuntimeObject* L_20 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
				NullCheck(L_20);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_21;
				L_21 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_20);
				V_6 = L_21;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_22;
				L_22 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_6), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_5 = L_22;
				bool L_23;
				L_23 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_5), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_012f_2;
				}
			}
			{
				int32_t L_24 = 1;
				V_0 = L_24;
				__this->___U3CU3E1__state_0 = L_24;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_25 = V_5;
				__this->___U3CU3Eu__2_10 = L_25;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_10))->___task_0))->___source_0), (void*)NULL);
				V_3 = __this;
				AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_26 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_26, (&V_5), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_024d;
			}

IL_0112_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_27 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_10;
				V_5 = L_27;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_28 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_10);
				il2cpp_codegen_initobj(L_28, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_29 = (-1);
				V_0 = L_29;
				__this->___U3CU3E1__state_0 = L_29;
			}

IL_012f_2:
			{
				bool L_30;
				L_30 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_5), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__4_8 = L_30;
				bool L_31 = (bool)__this->___U3CU3Es__4_8;
				V_4 = L_31;
				bool L_32 = V_4;
				if (L_32)
				{
					goto IL_0056_2;
				}
			}
			{
				goto IL_015a_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_014e_1;
			}
			throw e;
		}

CATCH_014e_1:
		{
			V_7 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_33 = V_7;
			__this->___U3CU3Es__2_6 = L_33;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_6), (void*)L_33);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_015a_1;
		}

IL_015a_1:
		{
			RuntimeObject* L_34 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
			V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_34) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_35 = V_8;
			if (!L_35)
			{
				goto IL_01d7_1;
			}
		}
		{
			RuntimeObject* L_36 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
			NullCheck((RuntimeObject*)L_36);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_37;
			L_37 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
			V_2 = L_37;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_38;
			L_38 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_2), NULL);
			V_9 = L_38;
			bool L_39;
			L_39 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_9), NULL);
			if (L_39)
			{
				goto IL_01ce_1;
			}
		}
		{
			int32_t L_40 = 2;
			V_0 = L_40;
			__this->___U3CU3E1__state_0 = L_40;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41 = V_9;
			__this->___U3CU3Eu__1_9 = L_41;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_9))->___task_0))->___source_0), (void*)NULL);
			V_3 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_42 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_42, (&V_9), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			goto IL_024d;
		}

IL_01b1_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_43 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_9;
			V_9 = L_43;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_44 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_9);
			il2cpp_codegen_initobj(L_44, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_45 = (-1);
			V_0 = L_45;
			__this->___U3CU3E1__state_0 = L_45;
		}

IL_01ce_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_9), NULL);
		}

IL_01d7_1:
		{
			RuntimeObject* L_46 = (RuntimeObject*)__this->___U3CU3Es__2_6;
			V_7 = L_46;
			RuntimeObject* L_47 = V_7;
			if (!L_47)
			{
				goto IL_0201_1;
			}
		}
		{
			RuntimeObject* L_48 = V_7;
			V_10 = ((Exception_t*)IsInstClass((RuntimeObject*)L_48, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_49 = V_10;
			if (L_49)
			{
				goto IL_01f4_1;
			}
		}
		{
			RuntimeObject* L_50 = V_7;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_50, method);
		}

IL_01f4_1:
		{
			Exception_t* L_51 = V_10;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_52;
			L_52 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_51, NULL);
			NullCheck(L_52);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_52, NULL);
		}

IL_0201_1:
		{
			int32_t L_53 = (int32_t)__this->___U3CU3Es__3_7;
			__this->___U3CU3Es__2_6 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_6), (void*)NULL);
			goto IL_0232;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0211;
		}
		throw e;
	}

CATCH_0211:
	{
		V_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_5), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_54 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_55 = V_10;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_54, L_55, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_024d;
	}

IL_0232:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_5), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_56 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_56, NULL);
	}

IL_024d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitAsyncU3Ed__2_1_SetStateMachine_m81EE029F263E3D1F306E3AA845BD666F381ABCF0_gshared (U3CForEachAwaitAsyncU3Ed__2_1_t504B931A70EC737437DAD27DD1DEA64C25146E8B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitAsyncU3Ed__3_1__ctor_m6D5037F470F97994CF8043CE64A38D005F484F48_gshared (U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitAsyncU3Ed__3_1_MoveNext_m23E092D8579185BD69ABC39F82704B4264233F66_gshared (U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t085062A704A7812483DCB5FBC66E0BD9FAB7F21F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t085062A704A7812483DCB5FBC66E0BD9FAB7F21F);
	int32_t V_0 = 0;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
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
			goto IL_01cf_1;
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
				goto IL_00c2_2;
			}

IL_004e_2:
			{
				goto IL_012f_2;
			}

IL_0053_2:
			{
				__this->___U3CindexU3E5__4_8 = 0;
				goto IL_00e7_2;
			}

IL_0060_2:
			{
				Func_3_t132FDF1783142B71AC1D1F8BB2FF80D9FAC32BFC* L_8 = (Func_3_t132FDF1783142B71AC1D1F8BB2FF80D9FAC32BFC*)__this->___action_3;
				RuntimeObject* L_9 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				int32_t L_11 = (int32_t)__this->___U3CindexU3E5__4_8;
				V_2 = L_11;
				int32_t L_12 = V_2;
				if (((int64_t)L_12 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_12 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CindexU3E5__4_8 = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				NullCheck(L_8);
				UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_14;
				L_14 = InvokerFuncInvoker2< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10), L_13);
				V_3 = L_14;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_15;
				L_15 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
				V_1 = L_15;
				bool L_16;
				L_16 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_1), NULL);
				if (L_16)
				{
					goto IL_00de_2;
				}
			}
			{
				int32_t L_17 = 0;
				V_0 = L_17;
				__this->___U3CU3E1__state_0 = L_17;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_18 = V_1;
				__this->___U3CU3Eu__1_10 = L_18;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_10))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_19 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_19, (&V_1), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_026b;
			}

IL_00c2_2:
			{
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_20 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_10;
				V_1 = L_20;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_21 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_10);
				il2cpp_codegen_initobj(L_21, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
				int32_t L_22 = (-1);
				V_0 = L_22;
				__this->___U3CU3E1__state_0 = L_22;
			}

IL_00de_2:
			{
				Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_1), NULL);
			}

IL_00e7_2:
			{
				RuntimeObject* L_23 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
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
					goto IL_014c_2;
				}
			}
			{
				int32_t L_27 = 1;
				V_0 = L_27;
				__this->___U3CU3E1__state_0 = L_27;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28 = V_6;
				__this->___U3CU3Eu__2_11 = L_28;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_11))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_29 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_29, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_026b;
			}

IL_012f_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_30 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_11;
				V_6 = L_30;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_31 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_11);
				il2cpp_codegen_initobj(L_31, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_32 = (-1);
				V_0 = L_32;
				__this->___U3CU3E1__state_0 = L_32;
			}

IL_014c_2:
			{
				bool L_33;
				L_33 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5_9 = L_33;
				bool L_34 = (bool)__this->___U3CU3Es__5_9;
				V_5 = L_34;
				bool L_35 = V_5;
				if (L_35)
				{
					goto IL_0060_2;
				}
			}
			{
				goto IL_0177_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_016b_1;
			}
			throw e;
		}

CATCH_016b_1:
		{
			V_8 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_36 = V_8;
			__this->___U3CU3Es__2_6 = L_36;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_6), (void*)L_36);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0177_1;
		}

IL_0177_1:
		{
			RuntimeObject* L_37 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_37) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_38 = V_9;
			if (!L_38)
			{
				goto IL_01f5_1;
			}
		}
		{
			RuntimeObject* L_39 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
			NullCheck((RuntimeObject*)L_39);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_40;
			L_40 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_39);
			V_3 = L_40;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41;
			L_41 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_10 = L_41;
			bool L_42;
			L_42 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_42)
			{
				goto IL_01ec_1;
			}
		}
		{
			int32_t L_43 = 2;
			V_0 = L_43;
			__this->___U3CU3E1__state_0 = L_43;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_44 = V_10;
			__this->___U3CU3Eu__1_10 = L_44;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_10))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_45 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_45, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			goto IL_026b;
		}

IL_01cf_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_46 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_10;
			V_10 = L_46;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_47 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_10);
			il2cpp_codegen_initobj(L_47, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_48 = (-1);
			V_0 = L_48;
			__this->___U3CU3E1__state_0 = L_48;
		}

IL_01ec_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_01f5_1:
		{
			RuntimeObject* L_49 = (RuntimeObject*)__this->___U3CU3Es__2_6;
			V_8 = L_49;
			RuntimeObject* L_50 = V_8;
			if (!L_50)
			{
				goto IL_021f_1;
			}
		}
		{
			RuntimeObject* L_51 = V_8;
			V_11 = ((Exception_t*)IsInstClass((RuntimeObject*)L_51, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_52 = V_11;
			if (L_52)
			{
				goto IL_0212_1;
			}
		}
		{
			RuntimeObject* L_53 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_53, method);
		}

IL_0212_1:
		{
			Exception_t* L_54 = V_11;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_55;
			L_55 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_54, NULL);
			NullCheck(L_55);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_55, NULL);
		}

IL_021f_1:
		{
			int32_t L_56 = (int32_t)__this->___U3CU3Es__3_7;
			__this->___U3CU3Es__2_6 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_6), (void*)NULL);
			goto IL_0250;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_022f;
		}
		throw e;
	}

CATCH_022f:
	{
		V_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_5), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_57 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_58 = V_11;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_57, L_58, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_026b;
	}

IL_0250:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_5), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_59 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_59, NULL);
	}

IL_026b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitAsyncU3Ed__3_1_SetStateMachine_m7375D396638472AF48EDC604B97572E53E155B96_gshared (U3CForEachAwaitAsyncU3Ed__3_1_t8871DBC78D8823939DE765EB161709598260AC6A* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitWithCancellationAsyncU3Ed__4_1__ctor_mE00B001B4EF4318A49491061CFE62AE1D62D48E7_gshared (U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_MoveNext_m7FAF7731DF32ECB0B8537E5EA3E8B790E79588A7_gshared (U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t3316D7AB28E0550982C1DC4ACAC4FE6B62711280 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t3316D7AB28E0550982C1DC4ACAC4FE6B62711280);
	int32_t V_0 = 0;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9* V_3 = NULL;
	bool V_4 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	bool V_8 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_9;
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
			goto IL_01b7_1;
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
				goto IL_00ac_2;
			}

IL_004e_2:
			{
				goto IL_0118_2;
			}

IL_0053_2:
			{
				goto IL_00d1_2;
			}

IL_0056_2:
			{
				Func_3_tEBFC185F508D6150079151B2395F5DE7B54CC752* L_8 = (Func_3_tEBFC185F508D6150079151B2395F5DE7B54CC752*)__this->___action_3;
				RuntimeObject* L_9 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_8);
				UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_12;
				L_12 = InvokerFuncInvoker2< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10), L_11);
				V_2 = L_12;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_13;
				L_13 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_2), NULL);
				V_1 = L_13;
				bool L_14;
				L_14 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_1), NULL);
				if (L_14)
				{
					goto IL_00c8_2;
				}
			}
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->___U3CU3E1__state_0 = L_15;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_16 = V_1;
				__this->___U3CU3Eu__1_9 = L_16;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_9))->___task_0))->___source_0), (void*)NULL);
				V_3 = __this;
				AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_17 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_17, (&V_1), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0253;
			}

IL_00ac_2:
			{
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_18 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_9;
				V_1 = L_18;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_19 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_9);
				il2cpp_codegen_initobj(L_19, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->___U3CU3E1__state_0 = L_20;
			}

IL_00c8_2:
			{
				Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_1), NULL);
			}

IL_00d1_2:
			{
				RuntimeObject* L_21 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
				NullCheck(L_21);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_22;
				L_22 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_21);
				V_6 = L_22;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_23;
				L_23 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_6), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_5 = L_23;
				bool L_24;
				L_24 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_5), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_0135_2;
				}
			}
			{
				int32_t L_25 = 1;
				V_0 = L_25;
				__this->___U3CU3E1__state_0 = L_25;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_26 = V_5;
				__this->___U3CU3Eu__2_10 = L_26;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_10))->___task_0))->___source_0), (void*)NULL);
				V_3 = __this;
				AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_27 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_27, (&V_5), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0253;
			}

IL_0118_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_10;
				V_5 = L_28;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_29 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_10);
				il2cpp_codegen_initobj(L_29, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_30 = (-1);
				V_0 = L_30;
				__this->___U3CU3E1__state_0 = L_30;
			}

IL_0135_2:
			{
				bool L_31;
				L_31 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_5), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__4_8 = L_31;
				bool L_32 = (bool)__this->___U3CU3Es__4_8;
				V_4 = L_32;
				bool L_33 = V_4;
				if (L_33)
				{
					goto IL_0056_2;
				}
			}
			{
				goto IL_0160_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0154_1;
			}
			throw e;
		}

CATCH_0154_1:
		{
			V_7 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_34 = V_7;
			__this->___U3CU3Es__2_6 = L_34;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_6), (void*)L_34);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0160_1;
		}

IL_0160_1:
		{
			RuntimeObject* L_35 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
			V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_35) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_36 = V_8;
			if (!L_36)
			{
				goto IL_01dd_1;
			}
		}
		{
			RuntimeObject* L_37 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
			NullCheck((RuntimeObject*)L_37);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_38;
			L_38 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_37);
			V_2 = L_38;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_39;
			L_39 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_2), NULL);
			V_9 = L_39;
			bool L_40;
			L_40 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_9), NULL);
			if (L_40)
			{
				goto IL_01d4_1;
			}
		}
		{
			int32_t L_41 = 2;
			V_0 = L_41;
			__this->___U3CU3E1__state_0 = L_41;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_42 = V_9;
			__this->___U3CU3Eu__1_9 = L_42;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_9))->___task_0))->___source_0), (void*)NULL);
			V_3 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_43 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_43, (&V_9), (&V_3), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			goto IL_0253;
		}

IL_01b7_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_44 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_9;
			V_9 = L_44;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_45 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_9);
			il2cpp_codegen_initobj(L_45, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_46 = (-1);
			V_0 = L_46;
			__this->___U3CU3E1__state_0 = L_46;
		}

IL_01d4_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_9), NULL);
		}

IL_01dd_1:
		{
			RuntimeObject* L_47 = (RuntimeObject*)__this->___U3CU3Es__2_6;
			V_7 = L_47;
			RuntimeObject* L_48 = V_7;
			if (!L_48)
			{
				goto IL_0207_1;
			}
		}
		{
			RuntimeObject* L_49 = V_7;
			V_10 = ((Exception_t*)IsInstClass((RuntimeObject*)L_49, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_50 = V_10;
			if (L_50)
			{
				goto IL_01fa_1;
			}
		}
		{
			RuntimeObject* L_51 = V_7;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_51, method);
		}

IL_01fa_1:
		{
			Exception_t* L_52 = V_10;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_53;
			L_53 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_52, NULL);
			NullCheck(L_53);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_53, NULL);
		}

IL_0207_1:
		{
			int32_t L_54 = (int32_t)__this->___U3CU3Es__3_7;
			__this->___U3CU3Es__2_6 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_6), (void*)NULL);
			goto IL_0238;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0217;
		}
		throw e;
	}

CATCH_0217:
	{
		V_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_5), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_55 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_56 = V_10;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_55, L_56, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0253;
	}

IL_0238:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_5), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_57 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_57, NULL);
	}

IL_0253:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_SetStateMachine_m322B18177F5E49B94A4753BEC9658B83DF745807_gshared (U3CForEachAwaitWithCancellationAsyncU3Ed__4_1_t314B32851737E85A376C96788B004A73C45C8ED9* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitWithCancellationAsyncU3Ed__5_1__ctor_m355B9DF4CFD7C1E387DB313040C2B53B9550964A_gshared (U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_MoveNext_mFBEC46E4D70CC9B8369872B43E6C5DC473E2856E_gshared (U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_tC5B0B70A7062FD8EC9E6FBE947AE22EEE3BF6346 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_tC5B0B70A7062FD8EC9E6FBE947AE22EEE3BF6346);
	int32_t V_0 = 0;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0* V_4 = NULL;
	bool V_5 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_10;
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
			goto IL_01d5_1;
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
				goto IL_00c8_2;
			}

IL_004e_2:
			{
				goto IL_0135_2;
			}

IL_0053_2:
			{
				__this->___U3CindexU3E5__4_8 = 0;
				goto IL_00ed_2;
			}

IL_0060_2:
			{
				Func_4_t06A967E03EDC626BCFB4875FDF8A19728ADC72BC* L_8 = (Func_4_t06A967E03EDC626BCFB4875FDF8A19728ADC72BC*)__this->___action_3;
				RuntimeObject* L_9 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (Il2CppFullySharedGenericAny*)L_10);
				int32_t L_11 = (int32_t)__this->___U3CindexU3E5__4_8;
				V_2 = L_11;
				int32_t L_12 = V_2;
				if (((int64_t)L_12 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_12 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
				__this->___U3CindexU3E5__4_8 = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_14 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
				NullCheck(L_8);
				UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_15;
				L_15 = InvokerFuncInvoker3< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270, Il2CppFullySharedGenericAny, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10), L_13, L_14);
				V_3 = L_15;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_16;
				L_16 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
				V_1 = L_16;
				bool L_17;
				L_17 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_1), NULL);
				if (L_17)
				{
					goto IL_00e4_2;
				}
			}
			{
				int32_t L_18 = 0;
				V_0 = L_18;
				__this->___U3CU3E1__state_0 = L_18;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_19 = V_1;
				__this->___U3CU3Eu__1_10 = L_19;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_10))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_20 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_20, (&V_1), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				goto IL_0271;
			}

IL_00c8_2:
			{
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_21 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_10;
				V_1 = L_21;
				Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_22 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_10);
				il2cpp_codegen_initobj(L_22, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
				int32_t L_23 = (-1);
				V_0 = L_23;
				__this->___U3CU3E1__state_0 = L_23;
			}

IL_00e4_2:
			{
				Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_1), NULL);
			}

IL_00ed_2:
			{
				RuntimeObject* L_24 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
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
					goto IL_0152_2;
				}
			}
			{
				int32_t L_28 = 1;
				V_0 = L_28;
				__this->___U3CU3E1__state_0 = L_28;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29 = V_6;
				__this->___U3CU3Eu__2_11 = L_29;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_11))->___task_0))->___source_0), (void*)NULL);
				V_4 = __this;
				AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_30 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
				((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_30, (&V_6), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				goto IL_0271;
			}

IL_0135_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_31 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15)__this->___U3CU3Eu__2_11;
				V_6 = L_31;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_32 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__2_11);
				il2cpp_codegen_initobj(L_32, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_33 = (-1);
				V_0 = L_33;
				__this->___U3CU3E1__state_0 = L_33;
			}

IL_0152_2:
			{
				bool L_34;
				L_34 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_6), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				__this->___U3CU3Es__5_9 = L_34;
				bool L_35 = (bool)__this->___U3CU3Es__5_9;
				V_5 = L_35;
				bool L_36 = V_5;
				if (L_36)
				{
					goto IL_0060_2;
				}
			}
			{
				goto IL_017d_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0171_1;
			}
			throw e;
		}

CATCH_0171_1:
		{
			V_8 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_37 = V_8;
			__this->___U3CU3Es__2_6 = L_37;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_6), (void*)L_37);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_017d_1;
		}

IL_017d_1:
		{
			RuntimeObject* L_38 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_38) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_39 = V_9;
			if (!L_39)
			{
				goto IL_01fb_1;
			}
		}
		{
			RuntimeObject* L_40 = (RuntimeObject*)__this->___U3CeU3E5__1_5;
			NullCheck((RuntimeObject*)L_40);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_41;
			L_41 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_40);
			V_3 = L_41;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_42;
			L_42 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_3), NULL);
			V_10 = L_42;
			bool L_43;
			L_43 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_10), NULL);
			if (L_43)
			{
				goto IL_01f2_1;
			}
		}
		{
			int32_t L_44 = 2;
			V_0 = L_44;
			__this->___U3CU3E1__state_0 = L_44;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_45 = V_10;
			__this->___U3CU3Eu__1_10 = L_45;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_10))->___task_0))->___source_0), (void*)NULL);
			V_4 = __this;
			AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_46 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
			((  void (*) (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_46, (&V_10), (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
			goto IL_0271;
		}

IL_01d5_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956)__this->___U3CU3Eu__1_10;
			V_10 = L_47;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_48 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__1_10);
			il2cpp_codegen_initobj(L_48, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_49 = (-1);
			V_0 = L_49;
			__this->___U3CU3E1__state_0 = L_49;
		}

IL_01f2_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_10), NULL);
		}

IL_01fb_1:
		{
			RuntimeObject* L_50 = (RuntimeObject*)__this->___U3CU3Es__2_6;
			V_8 = L_50;
			RuntimeObject* L_51 = V_8;
			if (!L_51)
			{
				goto IL_0225_1;
			}
		}
		{
			RuntimeObject* L_52 = V_8;
			V_11 = ((Exception_t*)IsInstClass((RuntimeObject*)L_52, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_53 = V_11;
			if (L_53)
			{
				goto IL_0218_1;
			}
		}
		{
			RuntimeObject* L_54 = V_8;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_54, method);
		}

IL_0218_1:
		{
			Exception_t* L_55 = V_11;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_56;
			L_56 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_55, NULL);
			NullCheck(L_56);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_56, NULL);
		}

IL_0225_1:
		{
			int32_t L_57 = (int32_t)__this->___U3CU3Es__3_7;
			__this->___U3CU3Es__2_6 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_6), (void*)NULL);
			goto IL_0256;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0235;
		}
		throw e;
	}

CATCH_0235:
	{
		V_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_5), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_58 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_59 = V_11;
		AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline(L_58, L_59, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0271;
	}

IL_0256:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__1_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__1_5), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_60 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&__this->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline(L_60, NULL);
	}

IL_0271:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_SetStateMachine_m75B19D2A925824D1C6E91A617B18EA5DC3DFFFDE_gshared (U3CForEachAwaitWithCancellationAsyncU3Ed__5_1_tF271ADEE88B008144D6D5CA57732E98C4D95A0E0* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForgetCoreWithCatchU3Ed__21_1__ctor_mA53C69F3127D1E565469A4716882DD8B93E596B4_gshared (U3CForgetCoreWithCatchU3Ed__21_1_tC1CCDBDBC539D1E312103E6683A61535E5D194E5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForgetCoreWithCatchU3Ed__21_1_MoveNext_m9F14B88003F048396A218D1A650176D34CB0A0C3_gshared (U3CForgetCoreWithCatchU3Ed__21_1_tC1CCDBDBC539D1E312103E6683A61535E5D194E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_Awaiter_t51C2812C5DF11E890C6CC573112245991DB21D7E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const uint32_t SizeOf_T_t144F040A80D5B37B4FE0CB25BB2D7DC714430919 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t144F040A80D5B37B4FE0CB25BB2D7DC714430919);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_4 = alloca(SizeOf_Awaiter_t51C2812C5DF11E890C6CC573112245991DB21D7E);
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_7 = L_4;
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_8 = L_4;
	int32_t V_0 = 0;
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_1 = alloca(SizeOf_Awaiter_t51C2812C5DF11E890C6CC573112245991DB21D7E);
	memset(V_1, 0, SizeOf_Awaiter_t51C2812C5DF11E890C6CC573112245991DB21D7E);
	U3CForgetCoreWithCatchU3Ed__21_1_tC1CCDBDBC539D1E312103E6683A61535E5D194E5* V_2 = NULL;
	Exception_t* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F V_6;
	memset((&V_6), 0, sizeof(V_6));
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_7;
	memset((&V_7), 0, sizeof(V_7));
	SwitchToMainThreadAwaitable_t30D0968092E3CD2E8BAE2DEF136FC76A3695E9F8 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t* V_9 = NULL;
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
			goto IL_0021_1;
		}

IL_0014_1:
		{
			goto IL_00c2_1;
		}

IL_0019_1:
		{
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), 0);
		}

IL_0021_1:
		{
		}
		try
		{
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_0027_2;
				}
			}
			{
				goto IL_0029_2;
			}

IL_0027_2:
			{
				goto IL_0066_2;
			}

IL_0029_2:
			{
				InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), (((UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_4);
				il2cpp_codegen_memcpy(V_1, L_4, SizeOf_Awaiter_t51C2812C5DF11E890C6CC573112245991DB21D7E);
				bool L_5;
				L_5 = ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
				if (L_5)
				{
					goto IL_0082_2;
				}
			}
			{
				int32_t L_6 = 0;
				V_0 = L_6;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_6);
				il2cpp_codegen_memcpy(L_7, V_1, SizeOf_Awaiter_t51C2812C5DF11E890C6CC573112245991DB21D7E);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_7, SizeOf_Awaiter_t51C2812C5DF11E890C6CC573112245991DB21D7E);
				V_2 = __this;
				((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, U3CForgetCoreWithCatchU3Ed__21_1_tC1CCDBDBC539D1E312103E6683A61535E5D194E5**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1, (&V_2), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
				goto IL_01ba;
			}

IL_0066_2:
			{
				il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_Awaiter_t51C2812C5DF11E890C6CC573112245991DB21D7E);
				il2cpp_codegen_memcpy(V_1, L_8, SizeOf_Awaiter_t51C2812C5DF11E890C6CC573112245991DB21D7E);
				il2cpp_codegen_initobj((((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_Awaiter_t51C2812C5DF11E890C6CC573112245991DB21D7E);
				int32_t L_9 = (-1);
				V_0 = L_9;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_9);
			}

IL_0082_2:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_1, (Il2CppFullySharedGenericAny*)L_10);
				goto IL_009e_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_008d_1;
			}
			throw e;
		}

CATCH_008d_1:
		{
			V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			Exception_t* L_11 = V_3;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (RuntimeObject*)L_11);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), 1);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_009e_1;
		}

IL_009e_1:
		{
			int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_4 = L_12;
			int32_t L_13 = V_4;
			if ((((int32_t)L_13) == ((int32_t)1)))
			{
				goto IL_00b0_1;
			}
		}
		{
			goto IL_0183_1;
		}

IL_00b0_1:
		{
			RuntimeObject* L_14 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
			il2cpp_codegen_write_instance_field_data<Exception_t*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), ((Exception_t*)CastclassClass((RuntimeObject*)L_14, Exception_t_il2cpp_TypeInfo_var)));
		}

IL_00c2_1:
		{
		}
		try
		{
			{
				int32_t L_15 = V_0;
				if ((((int32_t)L_15) == ((int32_t)1)))
				{
					goto IL_00c9_2;
				}
			}
			{
				goto IL_00cb_2;
			}

IL_00c9_2:
			{
				goto IL_0124_2;
			}

IL_00cb_2:
			{
				bool L_16 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
				V_5 = L_16;
				bool L_17 = V_5;
				if (!L_17)
				{
					goto IL_014a_2;
				}
			}
			{
				il2cpp_codegen_initobj((&V_7), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_18 = V_7;
				il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
				SwitchToMainThreadAwaitable_t30D0968092E3CD2E8BAE2DEF136FC76A3695E9F8 L_19;
				L_19 = UniTask_SwitchToMainThread_mBC162C95F0ED605F8E5416A60CCA153E0993CBF1(L_18, NULL);
				V_8 = L_19;
				Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F L_20;
				L_20 = SwitchToMainThreadAwaitable_GetAwaiter_m66A0F6F462885727A38028656D11B51CEA32BD29((&V_8), NULL);
				V_6 = L_20;
				bool L_21;
				L_21 = Awaiter_get_IsCompleted_m8B4E3723A3CC1B1E8359E40C0766081C55A5BC37((&V_6), NULL);
				if (L_21)
				{
					goto IL_0141_2;
				}
			}
			{
				int32_t L_22 = 1;
				V_0 = L_22;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_22);
				Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F L_23 = V_6;
				il2cpp_codegen_write_instance_field_data<Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_23);
				V_2 = __this;
				((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F*, U3CForgetCoreWithCatchU3Ed__21_1_tC1CCDBDBC539D1E312103E6683A61535E5D194E5**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_6), (&V_2), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				goto IL_01ba;
			}

IL_0124_2:
			{
				Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F L_24 = *(Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
				V_6 = L_24;
				il2cpp_codegen_initobj((((Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))), sizeof(Awaiter_t52A3C448B419858C4C6755B60E6565AF33894F5F));
				int32_t L_25 = (-1);
				V_0 = L_25;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_25);
			}

IL_0141_2:
			{
				Awaiter_GetResult_m8383C6B4850150162ECAA6464603B95FD2231CB2((&V_6), NULL);
			}

IL_014a_2:
			{
				Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_26 = *(Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				Exception_t* L_27 = *(Exception_t**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
				NullCheck(L_26);
				Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(L_26, L_27, NULL);
				goto IL_0179_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_015f_1;
			}
			throw e;
		}

CATCH_015f_1:
		{
			V_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			Exception_t* L_28 = V_9;
			il2cpp_codegen_write_instance_field_data<Exception_t*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_28);
			Exception_t* L_29 = *(Exception_t**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var)));
			UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3(L_29, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0179_1;
		}

IL_0179_1:
		{
			il2cpp_codegen_write_instance_field_data<Exception_t*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), (Exception_t*)NULL);
			goto IL_0183_1;
		}

IL_0183_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), NULL);
			goto IL_01a6;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_018c;
		}
		throw e;
	}

CATCH_018c:
	{
		V_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		Exception_t* L_30 = V_9;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_30, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01ba;
	}

IL_01a6:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), NULL);
	}

IL_01ba:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CForgetCoreWithCatchU3Ed__21_1_SetStateMachine_mDF6FF9690FC9EAEAEADF0E55BF8E07AC45713250_gshared (U3CForgetCoreWithCatchU3Ed__21_1_tC1CCDBDBC539D1E312103E6683A61535E5D194E5* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllItemIdsU3Ed__13__ctor_m6E4F3CA3E51DDBC0A7879D3F837163EE98151AA6_gshared (U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllItemIdsU3Ed__13_System_IDisposable_Dispose_m19FAC68D63A4344E1CB5F13B968A17F266809EF1_gshared (U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetAllItemIdsU3Ed__13_MoveNext_mFF4B690A39107AAF29E12A990389058A719CFDDB_gshared (U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_m46116312544FC207DACC2B68B9C50516A891CC31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m6480166B79018CBA0363B56AB006AD4DFA645B01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m6BA4979D77CE3B4C596D189FBED859EB9B7014B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_mD0C34F3CD9C04683C922947B2AD9222B6266A0F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
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
		goto IL_0105;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_3 = (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*)__this->___U3CU3E4__this_5;
		NullCheck(L_3);
		Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* L_4 = (Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098*)L_3->___m_IteratorStack_1;
		NullCheck(L_4);
		Stack_1_Clear_m46116312544FC207DACC2B68B9C50516A891CC31(L_4, Stack_1_Clear_m46116312544FC207DACC2B68B9C50516A891CC31_RuntimeMethod_var);
		RuntimeObject* L_5 = (RuntimeObject*)__this->___rootIds_3;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0072;
		}
	}
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_7 = (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*)__this->___U3CU3E4__this_5;
		NullCheck(L_7);
		TreeData_1_t52F9997F4F3827B6D2DDD108B0B5F8007C1054DE* L_8 = (TreeData_1_t52F9997F4F3827B6D2DDD108B0B5F8007C1054DE*)(&L_7->___m_TreeData_0);
		RuntimeObject* L_9;
		L_9 = TreeData_1_get_rootItemIds_m8307EE3034C4CEC53C0EB7AD488E0126B2E03C53_inline(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_9) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_005b;
		}
	}
	{
		return (bool)0;
	}

IL_005b:
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_11 = (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*)__this->___U3CU3E4__this_5;
		NullCheck(L_11);
		TreeData_1_t52F9997F4F3827B6D2DDD108B0B5F8007C1054DE* L_12 = (TreeData_1_t52F9997F4F3827B6D2DDD108B0B5F8007C1054DE*)(&L_11->___m_TreeData_0);
		RuntimeObject* L_13;
		L_13 = TreeData_1_get_rootItemIds_m8307EE3034C4CEC53C0EB7AD488E0126B2E03C53_inline(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___rootIds_3 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rootIds_3), (void*)L_13);
	}

IL_0072:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->___rootIds_3;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var, L_14);
		__this->___U3CcurrentIteratorU3E5__1_6 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentIteratorU3E5__1_6), (void*)L_15);
		goto IL_0159;
	}

IL_0088:
	{
		RuntimeObject* L_16 = (RuntimeObject*)__this->___U3CcurrentIteratorU3E5__1_6;
		NullCheck((RuntimeObject*)L_16);
		bool L_17;
		L_17 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
		__this->___U3ChasNextU3E5__2_7 = L_17;
		bool L_18 = (bool)__this->___U3ChasNextU3E5__2_7;
		V_3 = (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_00df;
		}
	}
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_20 = (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*)__this->___U3CU3E4__this_5;
		NullCheck(L_20);
		Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* L_21 = (Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098*)L_20->___m_IteratorStack_1;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = Stack_1_get_Count_mD0C34F3CD9C04683C922947B2AD9222B6266A0F2_inline(L_21, Stack_1_get_Count_mD0C34F3CD9C04683C922947B2AD9222B6266A0F2_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_22) > ((int32_t)0))? 1 : 0);
		bool L_23 = V_4;
		if (!L_23)
		{
			goto IL_00da;
		}
	}
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_24 = (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*)__this->___U3CU3E4__this_5;
		NullCheck(L_24);
		Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* L_25 = (Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098*)L_24->___m_IteratorStack_1;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = Stack_1_Pop_m6480166B79018CBA0363B56AB006AD4DFA645B01(L_25, Stack_1_Pop_m6480166B79018CBA0363B56AB006AD4DFA645B01_RuntimeMethod_var);
		__this->___U3CcurrentIteratorU3E5__1_6 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentIteratorU3E5__1_6), (void*)L_26);
		goto IL_0159;
	}

IL_00da:
	{
		goto IL_0161;
	}

IL_00df:
	{
		RuntimeObject* L_27 = (RuntimeObject*)__this->___U3CcurrentIteratorU3E5__1_6;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var, L_27);
		__this->___U3CcurrentItemIdU3E5__3_8 = L_28;
		int32_t L_29 = (int32_t)__this->___U3CcurrentItemIdU3E5__3_8;
		__this->___U3CU3E2__current_1 = L_29;
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0105:
	{
		__this->___U3CU3E1__state_0 = (-1);
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_30 = (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*)__this->___U3CU3E4__this_5;
		int32_t L_31 = (int32_t)__this->___U3CcurrentItemIdU3E5__3_8;
		NullCheck(L_30);
		bool L_32;
		L_32 = TreeDataController_1_HasChildren_m2978AF4CB8A5BDDE630F44B9DE471D892C4340BC(L_30, L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_5 = L_32;
		bool L_33 = V_5;
		if (!L_33)
		{
			goto IL_0158;
		}
	}
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_34 = (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*)__this->___U3CU3E4__this_5;
		NullCheck(L_34);
		Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* L_35 = (Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098*)L_34->___m_IteratorStack_1;
		RuntimeObject* L_36 = (RuntimeObject*)__this->___U3CcurrentIteratorU3E5__1_6;
		NullCheck(L_35);
		Stack_1_Push_m6BA4979D77CE3B4C596D189FBED859EB9B7014B0(L_35, L_36, Stack_1_Push_m6BA4979D77CE3B4C596D189FBED859EB9B7014B0_RuntimeMethod_var);
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_37 = (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*)__this->___U3CU3E4__this_5;
		int32_t L_38 = (int32_t)__this->___U3CcurrentItemIdU3E5__3_8;
		NullCheck(L_37);
		RuntimeObject* L_39;
		L_39 = TreeDataController_1_GetChildrenIds_m0C39B4E828DE3829426145460DC781C94E340B93(L_37, L_38, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		NullCheck(L_39);
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var, L_39);
		__this->___U3CcurrentIteratorU3E5__1_6 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentIteratorU3E5__1_6), (void*)L_40);
	}

IL_0158:
	{
	}

IL_0159:
	{
		V_6 = (bool)1;
		goto IL_0088;
	}

IL_0161:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CGetAllItemIdsU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_Int32U3E_get_Current_m44551F503EB8198D58BFD1179399D552C7FEAD58_gshared (U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E2__current_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllItemIdsU3Ed__13_System_Collections_IEnumerator_Reset_m5CC80672B5B797944FA4C9DEE9E0420470B19928_gshared (U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllItemIdsU3Ed__13_System_Collections_IEnumerator_get_Current_m36B7C86D5A34AC50A70FE6306D2A495C966BE302_gshared (U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E2__current_1;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllItemIdsU3Ed__13_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mA0F5E231A5B6A2DFCEB87B054B8F7B467439EF3F_gshared (U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* __this, const RuntimeMethod* method) 
{
	U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* V_0 = NULL;
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
		goto IL_0035;
	}

IL_0022:
	{
		U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* L_3 = (U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		U3CGetAllItemIdsU3Ed__13__ctor_m6E4F3CA3E51DDBC0A7879D3F837163EE98151AA6(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_0 = L_3;
		U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* L_4 = V_0;
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_5 = (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*)__this->___U3CU3E4__this_5;
		NullCheck(L_4);
		L_4->___U3CU3E4__this_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_5), (void*)L_5);
	}

IL_0035:
	{
		U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* L_6 = V_0;
		RuntimeObject* L_7 = (RuntimeObject*)__this->___U3CU3E3__rootIds_4;
		NullCheck(L_6);
		L_6->___rootIds_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___rootIds_3), (void*)L_7);
		U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* L_8 = V_0;
		return (RuntimeObject*)L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllItemIdsU3Ed__13_System_Collections_IEnumerable_GetEnumerator_m6E3506454FD617CCD2DE2E24CA2BAFC8B714FBC9_gshared (U3CGetAllItemIdsU3Ed__13_t5B63CB9C46BF52025C14829E6858317A05DEF274* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetAllItemIdsU3Ed__13_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mA0F5E231A5B6A2DFCEB87B054B8F7B467439EF3F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllItemIdsU3Ed__13__ctor_mFD9C0FD7EF125A822C929FD08DF108792C3E1CAC_gshared (U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllItemIdsU3Ed__13_System_IDisposable_Dispose_mF29D8D0D67EAD9BD61544483AE36087E294BE05E_gshared (U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetAllItemIdsU3Ed__13_MoveNext_mBCD7342086A89DE740876D942266D4DDF7C6FF8D_gshared (U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_m46116312544FC207DACC2B68B9C50516A891CC31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m6480166B79018CBA0363B56AB006AD4DFA645B01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m6BA4979D77CE3B4C596D189FBED859EB9B7014B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_mD0C34F3CD9C04683C922947B2AD9222B6266A0F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
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
		goto IL_0105;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_3 = (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*)__this->___U3CU3E4__this_5;
		NullCheck(L_3);
		Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* L_4 = (Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098*)L_3->___m_IteratorStack_1;
		NullCheck(L_4);
		Stack_1_Clear_m46116312544FC207DACC2B68B9C50516A891CC31(L_4, Stack_1_Clear_m46116312544FC207DACC2B68B9C50516A891CC31_RuntimeMethod_var);
		RuntimeObject* L_5 = (RuntimeObject*)__this->___rootIds_3;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0072;
		}
	}
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_7 = (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*)__this->___U3CU3E4__this_5;
		NullCheck(L_7);
		TreeData_1_tA6CE8DFD2D1FAE745298DC264034D9D608994998* L_8 = (TreeData_1_tA6CE8DFD2D1FAE745298DC264034D9D608994998*)(&L_7->___m_TreeData_0);
		RuntimeObject* L_9;
		L_9 = ((  RuntimeObject* (*) (TreeData_1_tA6CE8DFD2D1FAE745298DC264034D9D608994998*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_9) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_005b;
		}
	}
	{
		return (bool)0;
	}

IL_005b:
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_11 = (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*)__this->___U3CU3E4__this_5;
		NullCheck(L_11);
		TreeData_1_tA6CE8DFD2D1FAE745298DC264034D9D608994998* L_12 = (TreeData_1_tA6CE8DFD2D1FAE745298DC264034D9D608994998*)(&L_11->___m_TreeData_0);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (TreeData_1_tA6CE8DFD2D1FAE745298DC264034D9D608994998*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___rootIds_3 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rootIds_3), (void*)L_13);
	}

IL_0072:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->___rootIds_3;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var, L_14);
		__this->___U3CcurrentIteratorU3E5__1_6 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentIteratorU3E5__1_6), (void*)L_15);
		goto IL_0159;
	}

IL_0088:
	{
		RuntimeObject* L_16 = (RuntimeObject*)__this->___U3CcurrentIteratorU3E5__1_6;
		NullCheck((RuntimeObject*)L_16);
		bool L_17;
		L_17 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
		__this->___U3ChasNextU3E5__2_7 = L_17;
		bool L_18 = (bool)__this->___U3ChasNextU3E5__2_7;
		V_3 = (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_00df;
		}
	}
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_20 = (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*)__this->___U3CU3E4__this_5;
		NullCheck(L_20);
		Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* L_21 = (Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098*)L_20->___m_IteratorStack_1;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = Stack_1_get_Count_mD0C34F3CD9C04683C922947B2AD9222B6266A0F2_inline(L_21, Stack_1_get_Count_mD0C34F3CD9C04683C922947B2AD9222B6266A0F2_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_22) > ((int32_t)0))? 1 : 0);
		bool L_23 = V_4;
		if (!L_23)
		{
			goto IL_00da;
		}
	}
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_24 = (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*)__this->___U3CU3E4__this_5;
		NullCheck(L_24);
		Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* L_25 = (Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098*)L_24->___m_IteratorStack_1;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = Stack_1_Pop_m6480166B79018CBA0363B56AB006AD4DFA645B01(L_25, Stack_1_Pop_m6480166B79018CBA0363B56AB006AD4DFA645B01_RuntimeMethod_var);
		__this->___U3CcurrentIteratorU3E5__1_6 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentIteratorU3E5__1_6), (void*)L_26);
		goto IL_0159;
	}

IL_00da:
	{
		goto IL_0161;
	}

IL_00df:
	{
		RuntimeObject* L_27 = (RuntimeObject*)__this->___U3CcurrentIteratorU3E5__1_6;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var, L_27);
		__this->___U3CcurrentItemIdU3E5__3_8 = L_28;
		int32_t L_29 = (int32_t)__this->___U3CcurrentItemIdU3E5__3_8;
		__this->___U3CU3E2__current_1 = L_29;
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0105:
	{
		__this->___U3CU3E1__state_0 = (-1);
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_30 = (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*)__this->___U3CU3E4__this_5;
		int32_t L_31 = (int32_t)__this->___U3CcurrentItemIdU3E5__3_8;
		NullCheck(L_30);
		bool L_32;
		L_32 = ((  bool (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_30, L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_5 = L_32;
		bool L_33 = V_5;
		if (!L_33)
		{
			goto IL_0158;
		}
	}
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_34 = (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*)__this->___U3CU3E4__this_5;
		NullCheck(L_34);
		Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* L_35 = (Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098*)L_34->___m_IteratorStack_1;
		RuntimeObject* L_36 = (RuntimeObject*)__this->___U3CcurrentIteratorU3E5__1_6;
		NullCheck(L_35);
		Stack_1_Push_m6BA4979D77CE3B4C596D189FBED859EB9B7014B0(L_35, L_36, Stack_1_Push_m6BA4979D77CE3B4C596D189FBED859EB9B7014B0_RuntimeMethod_var);
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_37 = (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*)__this->___U3CU3E4__this_5;
		int32_t L_38 = (int32_t)__this->___U3CcurrentItemIdU3E5__3_8;
		NullCheck(L_37);
		RuntimeObject* L_39;
		L_39 = ((  RuntimeObject* (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_37, L_38, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		NullCheck(L_39);
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var, L_39);
		__this->___U3CcurrentIteratorU3E5__1_6 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentIteratorU3E5__1_6), (void*)L_40);
	}

IL_0158:
	{
	}

IL_0159:
	{
		V_6 = (bool)1;
		goto IL_0088;
	}

IL_0161:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CGetAllItemIdsU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_Int32U3E_get_Current_m995C6C08435B39D1FE47339CB5C63AAEC601D993_gshared (U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E2__current_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllItemIdsU3Ed__13_System_Collections_IEnumerator_Reset_mE000ABEA52DA7642950B8397F4D3FFCCF88641D7_gshared (U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllItemIdsU3Ed__13_System_Collections_IEnumerator_get_Current_m03C460CEE166D98A2D5C56202959B65954F7059B_gshared (U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E2__current_1;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllItemIdsU3Ed__13_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_m312BEFBE90C8DA79B81A5AEE509047BBE1D0F511_gshared (U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74* __this, const RuntimeMethod* method) 
{
	U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74* V_0 = NULL;
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
		goto IL_0035;
	}

IL_0022:
	{
		U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74* L_3 = (U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_0 = L_3;
		U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74* L_4 = V_0;
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_5 = (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*)__this->___U3CU3E4__this_5;
		NullCheck(L_4);
		L_4->___U3CU3E4__this_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_5), (void*)L_5);
	}

IL_0035:
	{
		U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74* L_6 = V_0;
		RuntimeObject* L_7 = (RuntimeObject*)__this->___U3CU3E3__rootIds_4;
		NullCheck(L_6);
		L_6->___rootIds_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___rootIds_3), (void*)L_7);
		U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74* L_8 = V_0;
		return (RuntimeObject*)L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllItemIdsU3Ed__13_System_Collections_IEnumerable_GetEnumerator_mBC31B365C013AFB7DC39BEC432F0CB13A48C9FB4_gshared (U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (U3CGetAllItemIdsU3Ed__13_t1EAB864B8C9BCC5F00E0694F9240338B0BBEAA74*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1__ctor_mD15CB6FC710C8BEB221A532A20487ED1241A9815_gshared (U3CGetEnumeratorU3Ed__1_t428C31FE719799CD61A887870EE46ED9488AAFAC* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_m41A8DAE4F14656C560E5165A1964CC6FE5712E3A_gshared (U3CGetEnumeratorU3Ed__1_t428C31FE719799CD61A887870EE46ED9488AAFAC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__1_MoveNext_m17AB7258D629B8D9CEC578FABBF86A8236C4EC6F_gshared (U3CGetEnumeratorU3Ed__1_t428C31FE719799CD61A887870EE46ED9488AAFAC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	OrderedEnumerable_1_t2F9F5060B969113C249D3BC84B7DA3D9C9DCD84B* V_1 = NULL;
	EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
		OrderedEnumerable_1_t2F9F5060B969113C249D3BC84B7DA3D9C9DCD84B* L_1 = (OrderedEnumerable_1_t2F9F5060B969113C249D3BC84B7DA3D9C9DCD84B*)__this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00a4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		OrderedEnumerable_1_t2F9F5060B969113C249D3BC84B7DA3D9C9DCD84B* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5 = (RuntimeObject*)L_4->___source_0;
		Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD L_6;
		memset((&L_6), 0, sizeof(L_6));
		Buffer_1__ctor_mE9AE2968725B445ABEBD61A3A7C93B5C2204928E((&L_6), L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CbufferU3E5__2_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CbufferU3E5__2_3))->___items_0), (void*)NULL);
		Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD* L_7 = (Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD*)(&__this->___U3CbufferU3E5__2_3);
		int32_t L_8 = (int32_t)L_7->___count_1;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		OrderedEnumerable_1_t2F9F5060B969113C249D3BC84B7DA3D9C9DCD84B* L_9 = V_1;
		NullCheck(L_9);
		EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65* L_10;
		L_10 = VirtualFuncInvoker1< EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65*, EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65* >::Invoke(7, L_9, (EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65*)NULL);
		V_2 = L_10;
		EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65* L_11 = V_2;
		Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD* L_12 = (Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD*)(&__this->___U3CbufferU3E5__2_3);
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_13 = (ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962*)L_12->___items_0;
		Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD* L_14 = (Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD*)(&__this->___U3CbufferU3E5__2_3);
		int32_t L_15 = (int32_t)L_14->___count_1;
		NullCheck(L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16;
		L_16 = EnumerableSorter_1_Sort_m893109DECEB392FD9D2D63B17FFF04EA3B8A6BEE(L_11, L_13, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___U3CmapU3E5__3_4 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__3_4), (void*)L_16);
		V_2 = (EnumerableSorter_1_tCEB88BCDB8FD518D48EECB11790C41C8C37FDD65*)NULL;
		__this->___U3CiU3E5__4_5 = 0;
		goto IL_00bb;
	}

IL_0078:
	{
		Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD* L_17 = (Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD*)(&__this->___U3CbufferU3E5__2_3);
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_18 = (ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962*)L_17->___items_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->___U3CmapU3E5__3_4;
		int32_t L_20 = (int32_t)__this->___U3CiU3E5__4_5;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_18);
		int32_t L_23 = L_22;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_24 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		__this->___U3CU3E2__current_1 = L_24;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___Item2_1), (void*)NULL);
		#endif
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00a4:
	{
		__this->___U3CU3E1__state_0 = (-1);
		int32_t L_25 = (int32_t)__this->___U3CiU3E5__4_5;
		V_3 = L_25;
		int32_t L_26 = V_3;
		__this->___U3CiU3E5__4_5 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00bb:
	{
		int32_t L_27 = (int32_t)__this->___U3CiU3E5__4_5;
		Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD* L_28 = (Buffer_1_t2AA2065A8CCA17DCF8E53D789BA407C07206B3CD*)(&__this->___U3CbufferU3E5__2_3);
		int32_t L_29 = (int32_t)L_28->___count_1;
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0078;
		}
	}
	{
		__this->___U3CmapU3E5__3_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__3_4), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d5:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CTElementU3E_get_Current_m0FF57B77A19BDC81427FD9B3FBEBF37BA283A90D_gshared (U3CGetEnumeratorU3Ed__1_t428C31FE719799CD61A887870EE46ED9488AAFAC* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A)__this->___U3CU3E2__current_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m7495761E0952298D9D687578B235FD12E22A63FB_gshared (U3CGetEnumeratorU3Ed__1_t428C31FE719799CD61A887870EE46ED9488AAFAC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_m93F5769044EBC3A4587A2E6B65C8B0FEAB75E8F8_gshared (U3CGetEnumeratorU3Ed__1_t428C31FE719799CD61A887870EE46ED9488AAFAC* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A)__this->___U3CU3E2__current_1;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1__ctor_m7D4E289FB3E0AC3B7870898DBABE01B7A01C0AE4_gshared (U3CGetEnumeratorU3Ed__1_t35287071076620851350DEE5A7358F21C466DA90* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_mE26C254B51721A2CDF4DC94D3CB711261F59C20E_gshared (U3CGetEnumeratorU3Ed__1_t35287071076620851350DEE5A7358F21C466DA90* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__1_MoveNext_mB0DB6AF383D4F3BEA55C80FF4A4E862863DEDBBA_gshared (U3CGetEnumeratorU3Ed__1_t35287071076620851350DEE5A7358F21C466DA90* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	OrderedEnumerable_1_t8EEABC87399C51697FF13CC459FC26CA5A5857DA* V_1 = NULL;
	EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
		OrderedEnumerable_1_t8EEABC87399C51697FF13CC459FC26CA5A5857DA* L_1 = (OrderedEnumerable_1_t8EEABC87399C51697FF13CC459FC26CA5A5857DA*)__this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00a4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		OrderedEnumerable_1_t8EEABC87399C51697FF13CC459FC26CA5A5857DA* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5 = (RuntimeObject*)L_4->___source_0;
		Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Buffer_1__ctor_mCA3CAB859EF638AEA56347DA74B5CABAAB17F76D((&L_6), L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CbufferU3E5__2_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CbufferU3E5__2_3))->___items_0), (void*)NULL);
		Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10* L_7 = (Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10*)(&__this->___U3CbufferU3E5__2_3);
		int32_t L_8 = (int32_t)L_7->___count_1;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		OrderedEnumerable_1_t8EEABC87399C51697FF13CC459FC26CA5A5857DA* L_9 = V_1;
		NullCheck(L_9);
		EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5* L_10;
		L_10 = VirtualFuncInvoker1< EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5*, EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5* >::Invoke(7, L_9, (EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5*)NULL);
		V_2 = L_10;
		EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5* L_11 = V_2;
		Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10* L_12 = (Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10*)(&__this->___U3CbufferU3E5__2_3);
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_13 = (GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7*)L_12->___items_0;
		Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10* L_14 = (Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10*)(&__this->___U3CbufferU3E5__2_3);
		int32_t L_15 = (int32_t)L_14->___count_1;
		NullCheck(L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16;
		L_16 = EnumerableSorter_1_Sort_m76A2E3BB759F0B9F80B75384E4FB17875CA4829D(L_11, L_13, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___U3CmapU3E5__3_4 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__3_4), (void*)L_16);
		V_2 = (EnumerableSorter_1_t5897E023ECB6DBE16092BDD0CD9397E8600CD0F5*)NULL;
		__this->___U3CiU3E5__4_5 = 0;
		goto IL_00bb;
	}

IL_0078:
	{
		Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10* L_17 = (Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10*)(&__this->___U3CbufferU3E5__2_3);
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_18 = (GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7*)L_17->___items_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->___U3CmapU3E5__3_4;
		int32_t L_20 = (int32_t)__this->___U3CiU3E5__4_5;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_18);
		int32_t L_23 = L_22;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_24 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		__this->___U3CU3E2__current_1 = L_24;
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00a4:
	{
		__this->___U3CU3E1__state_0 = (-1);
		int32_t L_25 = (int32_t)__this->___U3CiU3E5__4_5;
		V_3 = L_25;
		int32_t L_26 = V_3;
		__this->___U3CiU3E5__4_5 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00bb:
	{
		int32_t L_27 = (int32_t)__this->___U3CiU3E5__4_5;
		Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10* L_28 = (Buffer_1_t9B6292878C6BF8E6B600994FF4C2B16AAB609D10*)(&__this->___U3CbufferU3E5__2_3);
		int32_t L_29 = (int32_t)L_28->___count_1;
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0078;
		}
	}
	{
		__this->___U3CmapU3E5__3_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__3_4), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d5:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CTElementU3E_get_Current_m97BA4EBA4873197922F6C695F296D0CEFFC01068_gshared (U3CGetEnumeratorU3Ed__1_t35287071076620851350DEE5A7358F21C466DA90* __this, const RuntimeMethod* method) 
{
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_0 = (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E)__this->___U3CU3E2__current_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m4710AD2906AA9D8B1281D8A1C078204D762AC69F_gshared (U3CGetEnumeratorU3Ed__1_t35287071076620851350DEE5A7358F21C466DA90* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_m87F64C217ABC9797A9C49967E10BF4B0163CA7E9_gshared (U3CGetEnumeratorU3Ed__1_t35287071076620851350DEE5A7358F21C466DA90* __this, const RuntimeMethod* method) 
{
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_0 = (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E)__this->___U3CU3E2__current_1;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1__ctor_m7CDF2599C2FFAFFFC82473005F41D25C15D8BE3F_gshared (U3CGetEnumeratorU3Ed__1_t3DA927506BB3A75FB0C275BE0E1E951C2FA72436* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_m262816F0042566C2FA2B6C6F77A17A515D51EF79_gshared (U3CGetEnumeratorU3Ed__1_t3DA927506BB3A75FB0C275BE0E1E951C2FA72436* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__1_MoveNext_m53F24826AD3ADA7B424450DC60ACB29D9D932FE3_gshared (U3CGetEnumeratorU3Ed__1_t3DA927506BB3A75FB0C275BE0E1E951C2FA72436* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	OrderedEnumerable_1_tFFE2D41E419F999B45E7C9636190F547FE16EA00* V_1 = NULL;
	EnumerableSorter_1_t33B4B1FE8E6E19EEFB45A8EC216B39E6DDF2FDDD* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
		OrderedEnumerable_1_tFFE2D41E419F999B45E7C9636190F547FE16EA00* L_1 = (OrderedEnumerable_1_tFFE2D41E419F999B45E7C9636190F547FE16EA00*)__this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00a4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		OrderedEnumerable_1_tFFE2D41E419F999B45E7C9636190F547FE16EA00* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5 = (RuntimeObject*)L_4->___source_0;
		Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Buffer_1__ctor_m086C12C5694E0D6EFB7A2B3FE005444773F1BC8B((&L_6), L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CbufferU3E5__2_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CbufferU3E5__2_3))->___items_0), (void*)NULL);
		Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14* L_7 = (Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14*)(&__this->___U3CbufferU3E5__2_3);
		int32_t L_8 = (int32_t)L_7->___count_1;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		OrderedEnumerable_1_tFFE2D41E419F999B45E7C9636190F547FE16EA00* L_9 = V_1;
		NullCheck(L_9);
		EnumerableSorter_1_t33B4B1FE8E6E19EEFB45A8EC216B39E6DDF2FDDD* L_10;
		L_10 = VirtualFuncInvoker1< EnumerableSorter_1_t33B4B1FE8E6E19EEFB45A8EC216B39E6DDF2FDDD*, EnumerableSorter_1_t33B4B1FE8E6E19EEFB45A8EC216B39E6DDF2FDDD* >::Invoke(7, L_9, (EnumerableSorter_1_t33B4B1FE8E6E19EEFB45A8EC216B39E6DDF2FDDD*)NULL);
		V_2 = L_10;
		EnumerableSorter_1_t33B4B1FE8E6E19EEFB45A8EC216B39E6DDF2FDDD* L_11 = V_2;
		Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14* L_12 = (Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14*)(&__this->___U3CbufferU3E5__2_3);
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_13 = (MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911*)L_12->___items_0;
		Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14* L_14 = (Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14*)(&__this->___U3CbufferU3E5__2_3);
		int32_t L_15 = (int32_t)L_14->___count_1;
		NullCheck(L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16;
		L_16 = EnumerableSorter_1_Sort_m587E268B44E37C43725852E9B98275323B905602(L_11, L_13, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___U3CmapU3E5__3_4 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__3_4), (void*)L_16);
		V_2 = (EnumerableSorter_1_t33B4B1FE8E6E19EEFB45A8EC216B39E6DDF2FDDD*)NULL;
		__this->___U3CiU3E5__4_5 = 0;
		goto IL_00bb;
	}

IL_0078:
	{
		Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14* L_17 = (Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14*)(&__this->___U3CbufferU3E5__2_3);
		MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911* L_18 = (MarkToBaseAdjustmentRecordU5BU5D_t4F120A507E14039BC63574D1815FF2E7B9D73911*)L_17->___items_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->___U3CmapU3E5__3_4;
		int32_t L_20 = (int32_t)__this->___U3CiU3E5__4_5;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_18);
		int32_t L_23 = L_22;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_24 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		__this->___U3CU3E2__current_1 = L_24;
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00a4:
	{
		__this->___U3CU3E1__state_0 = (-1);
		int32_t L_25 = (int32_t)__this->___U3CiU3E5__4_5;
		V_3 = L_25;
		int32_t L_26 = V_3;
		__this->___U3CiU3E5__4_5 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00bb:
	{
		int32_t L_27 = (int32_t)__this->___U3CiU3E5__4_5;
		Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14* L_28 = (Buffer_1_t78B6DF8A4894DAF17C243F0D271FBE2B62619A14*)(&__this->___U3CbufferU3E5__2_3);
		int32_t L_29 = (int32_t)L_28->___count_1;
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0078;
		}
	}
	{
		__this->___U3CmapU3E5__3_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__3_4), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d5:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CTElementU3E_get_Current_m672F346977DD33B67A2FC68B9F7BF48C49C9B1C3_gshared (U3CGetEnumeratorU3Ed__1_t3DA927506BB3A75FB0C275BE0E1E951C2FA72436* __this, const RuntimeMethod* method) 
{
	{
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_0 = (MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607)__this->___U3CU3E2__current_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m7653FFEE409E60E02766385A970C1176C951084B_gshared (U3CGetEnumeratorU3Ed__1_t3DA927506BB3A75FB0C275BE0E1E951C2FA72436* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_mF5D7899F74CC888243D77D87AF26D98ED21A2063_gshared (U3CGetEnumeratorU3Ed__1_t3DA927506BB3A75FB0C275BE0E1E951C2FA72436* __this, const RuntimeMethod* method) 
{
	{
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_0 = (MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607)__this->___U3CU3E2__current_1;
		MarkToBaseAdjustmentRecord_t4BE0F5A88932146F70A2B521176BDA91A20D8607 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1__ctor_m035A8063D3793CE9F8396850548DD6160D90DDE4_gshared (U3CGetEnumeratorU3Ed__1_t86CE4D514C7EA04C708491BC8E9D7FCB75DB8A9F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_m139A423927BBCC13B847B12CCE8F1DF1585A52B1_gshared (U3CGetEnumeratorU3Ed__1_t86CE4D514C7EA04C708491BC8E9D7FCB75DB8A9F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__1_MoveNext_mDE6F2E58734AFD387C9D46688D63894A1440A34F_gshared (U3CGetEnumeratorU3Ed__1_t86CE4D514C7EA04C708491BC8E9D7FCB75DB8A9F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	OrderedEnumerable_1_tA6269C578EE7D3423C79F32258D574795AEF1151* V_1 = NULL;
	EnumerableSorter_1_t4439350BEBB5B5B9E8D43BBDBB271F1DC472270B* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
		OrderedEnumerable_1_tA6269C578EE7D3423C79F32258D574795AEF1151* L_1 = (OrderedEnumerable_1_tA6269C578EE7D3423C79F32258D574795AEF1151*)__this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00a4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		OrderedEnumerable_1_tA6269C578EE7D3423C79F32258D574795AEF1151* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5 = (RuntimeObject*)L_4->___source_0;
		Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD L_6;
		memset((&L_6), 0, sizeof(L_6));
		Buffer_1__ctor_m9178E0FB078F890A98854B06AF9C08C14061F4AC((&L_6), L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CbufferU3E5__2_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CbufferU3E5__2_3))->___items_0), (void*)NULL);
		Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD* L_7 = (Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD*)(&__this->___U3CbufferU3E5__2_3);
		int32_t L_8 = (int32_t)L_7->___count_1;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		OrderedEnumerable_1_tA6269C578EE7D3423C79F32258D574795AEF1151* L_9 = V_1;
		NullCheck(L_9);
		EnumerableSorter_1_t4439350BEBB5B5B9E8D43BBDBB271F1DC472270B* L_10;
		L_10 = VirtualFuncInvoker1< EnumerableSorter_1_t4439350BEBB5B5B9E8D43BBDBB271F1DC472270B*, EnumerableSorter_1_t4439350BEBB5B5B9E8D43BBDBB271F1DC472270B* >::Invoke(7, L_9, (EnumerableSorter_1_t4439350BEBB5B5B9E8D43BBDBB271F1DC472270B*)NULL);
		V_2 = L_10;
		EnumerableSorter_1_t4439350BEBB5B5B9E8D43BBDBB271F1DC472270B* L_11 = V_2;
		Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD* L_12 = (Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD*)(&__this->___U3CbufferU3E5__2_3);
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_13 = (MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061*)L_12->___items_0;
		Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD* L_14 = (Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD*)(&__this->___U3CbufferU3E5__2_3);
		int32_t L_15 = (int32_t)L_14->___count_1;
		NullCheck(L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16;
		L_16 = EnumerableSorter_1_Sort_m0B1E1BD2E50D9C85A518873DD8F2D3109DDB872C(L_11, L_13, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___U3CmapU3E5__3_4 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__3_4), (void*)L_16);
		V_2 = (EnumerableSorter_1_t4439350BEBB5B5B9E8D43BBDBB271F1DC472270B*)NULL;
		__this->___U3CiU3E5__4_5 = 0;
		goto IL_00bb;
	}

IL_0078:
	{
		Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD* L_17 = (Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD*)(&__this->___U3CbufferU3E5__2_3);
		MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061* L_18 = (MarkToMarkAdjustmentRecordU5BU5D_t09E9394A7451C53E2DD62ACB4FD0CF5F52159061*)L_17->___items_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->___U3CmapU3E5__3_4;
		int32_t L_20 = (int32_t)__this->___U3CiU3E5__4_5;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_18);
		int32_t L_23 = L_22;
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_24 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		__this->___U3CU3E2__current_1 = L_24;
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00a4:
	{
		__this->___U3CU3E1__state_0 = (-1);
		int32_t L_25 = (int32_t)__this->___U3CiU3E5__4_5;
		V_3 = L_25;
		int32_t L_26 = V_3;
		__this->___U3CiU3E5__4_5 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00bb:
	{
		int32_t L_27 = (int32_t)__this->___U3CiU3E5__4_5;
		Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD* L_28 = (Buffer_1_tCA1933430719B4829D9E8C1DB02C579B9C68E7CD*)(&__this->___U3CbufferU3E5__2_3);
		int32_t L_29 = (int32_t)L_28->___count_1;
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0078;
		}
	}
	{
		__this->___U3CmapU3E5__3_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__3_4), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d5:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CTElementU3E_get_Current_m4877DE59D6C3D03C652359E32516BA7991F04E67_gshared (U3CGetEnumeratorU3Ed__1_t86CE4D514C7EA04C708491BC8E9D7FCB75DB8A9F* __this, const RuntimeMethod* method) 
{
	{
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_0 = (MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C)__this->___U3CU3E2__current_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m3CFB64F6AEBD7E71CA5A2BE730332B9547C02843_gshared (U3CGetEnumeratorU3Ed__1_t86CE4D514C7EA04C708491BC8E9D7FCB75DB8A9F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_m2CB7BF4E3FE33BE56F048C01862F3AF0E175497B_gshared (U3CGetEnumeratorU3Ed__1_t86CE4D514C7EA04C708491BC8E9D7FCB75DB8A9F* __this, const RuntimeMethod* method) 
{
	{
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_0 = (MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C)__this->___U3CU3E2__current_1;
		MarkToMarkAdjustmentRecord_tD53618A3728435D5C904857DAC644EE27640807C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1__ctor_m9E33A6AB6E68676FE01C4F3ACE05CF805FC971AC_gshared (U3CGetEnumeratorU3Ed__1_t6D4BC5B68087352E56482B91E7BADA70BEB38CD2* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_mE9C6F11BF14488BD0B136A00A03DD1E3C30ED18C_gshared (U3CGetEnumeratorU3Ed__1_t6D4BC5B68087352E56482B91E7BADA70BEB38CD2* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__1_MoveNext_mAF290F5B9C23A195FED4423C55D740076C440461_gshared (U3CGetEnumeratorU3Ed__1_t6D4BC5B68087352E56482B91E7BADA70BEB38CD2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	OrderedEnumerable_1_t635FACC705EB8D479616971CD818376DC3A5AF51* V_1 = NULL;
	EnumerableSorter_1_t9DF0BF2FF3A689EB41C9CE2B42D3A91F5776B3AD* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
		OrderedEnumerable_1_t635FACC705EB8D479616971CD818376DC3A5AF51* L_1 = (OrderedEnumerable_1_t635FACC705EB8D479616971CD818376DC3A5AF51*)__this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00a4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		OrderedEnumerable_1_t635FACC705EB8D479616971CD818376DC3A5AF51* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5 = (RuntimeObject*)L_4->___source_0;
		Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Buffer_1__ctor_m072DE84AEC969582EB5760D4835747F9DC0C02AF((&L_6), L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___U3CbufferU3E5__2_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CbufferU3E5__2_3))->___items_0), (void*)NULL);
		Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59* L_7 = (Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59*)(&__this->___U3CbufferU3E5__2_3);
		int32_t L_8 = (int32_t)L_7->___count_1;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		OrderedEnumerable_1_t635FACC705EB8D479616971CD818376DC3A5AF51* L_9 = V_1;
		NullCheck(L_9);
		EnumerableSorter_1_t9DF0BF2FF3A689EB41C9CE2B42D3A91F5776B3AD* L_10;
		L_10 = VirtualFuncInvoker1< EnumerableSorter_1_t9DF0BF2FF3A689EB41C9CE2B42D3A91F5776B3AD*, EnumerableSorter_1_t9DF0BF2FF3A689EB41C9CE2B42D3A91F5776B3AD* >::Invoke(7, L_9, (EnumerableSorter_1_t9DF0BF2FF3A689EB41C9CE2B42D3A91F5776B3AD*)NULL);
		V_2 = L_10;
		EnumerableSorter_1_t9DF0BF2FF3A689EB41C9CE2B42D3A91F5776B3AD* L_11 = V_2;
		Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59* L_12 = (Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59*)(&__this->___U3CbufferU3E5__2_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_12->___items_0;
		Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59* L_14 = (Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59*)(&__this->___U3CbufferU3E5__2_3);
		int32_t L_15 = (int32_t)L_14->___count_1;
		NullCheck(L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16;
		L_16 = EnumerableSorter_1_Sort_m8685D15BDC4342DFFAE8D12488D213864CFDC321(L_11, L_13, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___U3CmapU3E5__3_4 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__3_4), (void*)L_16);
		V_2 = (EnumerableSorter_1_t9DF0BF2FF3A689EB41C9CE2B42D3A91F5776B3AD*)NULL;
		__this->___U3CiU3E5__4_5 = 0;
		goto IL_00bb;
	}

IL_0078:
	{
		Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59* L_17 = (Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59*)(&__this->___U3CbufferU3E5__2_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_17->___items_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->___U3CmapU3E5__3_4;
		int32_t L_20 = (int32_t)__this->___U3CiU3E5__4_5;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_18);
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		__this->___U3CU3E2__current_1 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_24);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00a4:
	{
		__this->___U3CU3E1__state_0 = (-1);
		int32_t L_25 = (int32_t)__this->___U3CiU3E5__4_5;
		V_3 = L_25;
		int32_t L_26 = V_3;
		__this->___U3CiU3E5__4_5 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00bb:
	{
		int32_t L_27 = (int32_t)__this->___U3CiU3E5__4_5;
		Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59* L_28 = (Buffer_1_t10E8615C3706C626725B10C3DDEF0AD28D233B59*)(&__this->___U3CbufferU3E5__2_3);
		int32_t L_29 = (int32_t)L_28->___count_1;
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0078;
		}
	}
	{
		__this->___U3CmapU3E5__3_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmapU3E5__3_4), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d5:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CTElementU3E_get_Current_m0897AA37D3035A619F9DF0DD44EE8649A3B64799_gshared (U3CGetEnumeratorU3Ed__1_t6D4BC5B68087352E56482B91E7BADA70BEB38CD2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CU3E2__current_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_mED39879DD4868C3CEF0CF2D2BCB7A5F4D16C87E5_gshared (U3CGetEnumeratorU3Ed__1_t6D4BC5B68087352E56482B91E7BADA70BEB38CD2* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_m3B856AEBDAD428E151FA5FCFFD49E3CFBDBAAF63_gshared (U3CGetEnumeratorU3Ed__1_t6D4BC5B68087352E56482B91E7BADA70BEB38CD2* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1__ctor_mF0F745619724BDF6636B7B0514E34BCBC80279E8_gshared (U3CGetEnumeratorU3Ed__1_t0C0E1C4A0A69A2FDEE7A295C343DBFCB38E1E136* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_mCE7E04EE9529ED4065E56E990020C03717535005_gshared (U3CGetEnumeratorU3Ed__1_t0C0E1C4A0A69A2FDEE7A295C343DBFCB38E1E136* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__1_MoveNext_mF7246BB82BCF175E60B056936F108905CA9E36BE_gshared (U3CGetEnumeratorU3Ed__1_t0C0E1C4A0A69A2FDEE7A295C343DBFCB38E1E136* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TElement_t7131B4894D970BCE712C2414419F0A27829AF29C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TElement_t7131B4894D970BCE712C2414419F0A27829AF29C);
	int32_t V_0 = 0;
	OrderedEnumerable_1_t9FC254A996960AAA55B70FA7417B36D16C123B28* V_1 = NULL;
	EnumerableSorter_1_t748424BBEB090E58B6D364ADABD271AC18B4C251* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
		OrderedEnumerable_1_t9FC254A996960AAA55B70FA7417B36D16C123B28* L_1 = *(OrderedEnumerable_1_t9FC254A996960AAA55B70FA7417B36D16C123B28**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00a4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		OrderedEnumerable_1_t9FC254A996960AAA55B70FA7417B36D16C123B28* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5 = (RuntimeObject*)L_4->___source_0;
		Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Buffer_1__ctor_m55137EEF7AF9E0883A438776A066DA5520FFDE49((&L_6), L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		il2cpp_codegen_write_instance_field_data<Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_6);
		int32_t L_7 = (int32_t)(((Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3))))->___count_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		OrderedEnumerable_1_t9FC254A996960AAA55B70FA7417B36D16C123B28* L_8 = V_1;
		NullCheck(L_8);
		EnumerableSorter_1_t748424BBEB090E58B6D364ADABD271AC18B4C251* L_9;
		L_9 = VirtualFuncInvoker1< EnumerableSorter_1_t748424BBEB090E58B6D364ADABD271AC18B4C251*, EnumerableSorter_1_t748424BBEB090E58B6D364ADABD271AC18B4C251* >::Invoke(7, L_8, (EnumerableSorter_1_t748424BBEB090E58B6D364ADABD271AC18B4C251*)NULL);
		V_2 = L_9;
		EnumerableSorter_1_t748424BBEB090E58B6D364ADABD271AC18B4C251* L_10 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(((Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3))))->___items_0;
		int32_t L_12 = (int32_t)(((Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3))))->___count_1;
		NullCheck(L_10);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13;
		L_13 = ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (EnumerableSorter_1_t748424BBEB090E58B6D364ADABD271AC18B4C251*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_10, L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		il2cpp_codegen_write_instance_field_data<Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), L_13);
		V_2 = (EnumerableSorter_1_t748424BBEB090E58B6D364ADABD271AC18B4C251*)NULL;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), 0);
		goto IL_00bb;
	}

IL_0078:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(((Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3))))->___items_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = *(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		int32_t L_16 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		NullCheck(L_15);
		int32_t L_17 = L_16;
		int32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_14);
		int32_t L_19 = L_18;
		il2cpp_codegen_memcpy(L_20, (L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)), SizeOf_TElement_t7131B4894D970BCE712C2414419F0A27829AF29C);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_20, SizeOf_TElement_t7131B4894D970BCE712C2414419F0A27829AF29C);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
		return (bool)1;
	}

IL_00a4:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		int32_t L_21 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		V_3 = L_21;
		int32_t L_22 = V_3;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), ((int32_t)il2cpp_codegen_add(L_22, 1)));
	}

IL_00bb:
	{
		int32_t L_23 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		int32_t L_24 = (int32_t)(((Buffer_1_tE71E32188387FE3B78503E8C2565BD78BE40C697*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3))))->___count_1;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0078;
		}
	}
	{
		il2cpp_codegen_write_instance_field_data<Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d5:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CTElementU3E_get_Current_mEE2A7BC907921D8ECB6DD8679B8AB0DE57942132_gshared (U3CGetEnumeratorU3Ed__1_t0C0E1C4A0A69A2FDEE7A295C343DBFCB38E1E136* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TElement_t7131B4894D970BCE712C2414419F0A27829AF29C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TElement_t7131B4894D970BCE712C2414419F0A27829AF29C);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TElement_t7131B4894D970BCE712C2414419F0A27829AF29C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TElement_t7131B4894D970BCE712C2414419F0A27829AF29C);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m0995698E264EEC53A69A42B9391105FEDFF8663B_gshared (U3CGetEnumeratorU3Ed__1_t0C0E1C4A0A69A2FDEE7A295C343DBFCB38E1E136* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_m0E4A0EA7748A5ED7A55D173736B833FFEB3867F0_gshared (U3CGetEnumeratorU3Ed__1_t0C0E1C4A0A69A2FDEE7A295C343DBFCB38E1E136* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TElement_t7131B4894D970BCE712C2414419F0A27829AF29C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TElement_t7131B4894D970BCE712C2414419F0A27829AF29C);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_TElement_t7131B4894D970BCE712C2414419F0A27829AF29C);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), L_0);
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__35__ctor_m081A1FE89C23793EF327B27268262718EDD11462_gshared (U3CGetEnumeratorU3Ed__35_tFBB72033DD97EBEE1D1AB495DD3A0C1827242215* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__35_System_IDisposable_Dispose_mC419C4B325BA00F95E941CFD9400EEC7B985DEB7_gshared (U3CGetEnumeratorU3Ed__35_tFBB72033DD97EBEE1D1AB495DD3A0C1827242215* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__35_MoveNext_m3D9E095DC37A90FDD234143F0DC7678CA8599CAA_gshared (U3CGetEnumeratorU3Ed__35_tFBB72033DD97EBEE1D1AB495DD3A0C1827242215* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
		ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* L_1 = (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF*)__this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0085;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* L_4 = V_1;
		NullCheck(L_4);
		Tables_t14D3B197594232ACFA76B87EB205EB3661F6EAA6* L_5 = (Tables_t14D3B197594232ACFA76B87EB205EB3661F6EAA6*)L_4->____tables_0;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_5);
		NodeU5BU5D_t2D9C2B502AE419E91BEF20D4861A838720732B76* L_6 = (NodeU5BU5D_t2D9C2B502AE419E91BEF20D4861A838720732B76*)L_5->____buckets_0;
		__this->___U3CbucketsU3E5__2_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbucketsU3E5__2_3), (void*)L_6);
		__this->___U3CiU3E5__3_4 = 0;
		goto IL_00be;
	}

IL_003d:
	{
		NodeU5BU5D_t2D9C2B502AE419E91BEF20D4861A838720732B76* L_7 = (NodeU5BU5D_t2D9C2B502AE419E91BEF20D4861A838720732B76*)__this->___U3CbucketsU3E5__2_3;
		int32_t L_8 = (int32_t)__this->___U3CiU3E5__3_4;
		NullCheck(L_7);
		Node_t821211F0535E80E80FDC8FFB600F681E98286BF0* L_9;
		L_9 = VolatileRead(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))));
		__this->___U3CcurrentU3E5__4_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentU3E5__4_5), (void*)L_9);
		goto IL_009f;
	}

IL_005b:
	{
		Node_t821211F0535E80E80FDC8FFB600F681E98286BF0* L_10 = (Node_t821211F0535E80E80FDC8FFB600F681E98286BF0*)__this->___U3CcurrentU3E5__4_5;
		NullCheck(L_10);
		RuntimeObject* L_11 = (RuntimeObject*)L_10->____key_0;
		Node_t821211F0535E80E80FDC8FFB600F681E98286BF0* L_12 = (Node_t821211F0535E80E80FDC8FFB600F681E98286BF0*)__this->___U3CcurrentU3E5__4_5;
		NullCheck(L_12);
		RuntimeObject* L_13 = (RuntimeObject*)L_12->____value_1;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_14;
		memset((&L_14), 0, sizeof(L_14));
		KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950((&L_14), L_11, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		__this->___U3CU3E2__current_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___value_1), (void*)NULL);
		#endif
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0085:
	{
		__this->___U3CU3E1__state_0 = (-1);
		Node_t821211F0535E80E80FDC8FFB600F681E98286BF0* L_15 = (Node_t821211F0535E80E80FDC8FFB600F681E98286BF0*)__this->___U3CcurrentU3E5__4_5;
		NullCheck(L_15);
		Node_t821211F0535E80E80FDC8FFB600F681E98286BF0* L_16 = (Node_t821211F0535E80E80FDC8FFB600F681E98286BF0*)L_15->____next_2;
		il2cpp_codegen_memory_barrier();
		__this->___U3CcurrentU3E5__4_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentU3E5__4_5), (void*)L_16);
	}

IL_009f:
	{
		Node_t821211F0535E80E80FDC8FFB600F681E98286BF0* L_17 = (Node_t821211F0535E80E80FDC8FFB600F681E98286BF0*)__this->___U3CcurrentU3E5__4_5;
		if (L_17)
		{
			goto IL_005b;
		}
	}
	{
		__this->___U3CcurrentU3E5__4_5 = (Node_t821211F0535E80E80FDC8FFB600F681E98286BF0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentU3E5__4_5), (void*)(Node_t821211F0535E80E80FDC8FFB600F681E98286BF0*)NULL);
		int32_t L_18 = (int32_t)__this->___U3CiU3E5__3_4;
		V_2 = L_18;
		int32_t L_19 = V_2;
		__this->___U3CiU3E5__3_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_00be:
	{
		int32_t L_20 = (int32_t)__this->___U3CiU3E5__3_4;
		NodeU5BU5D_t2D9C2B502AE419E91BEF20D4861A838720732B76* L_21 = (NodeU5BU5D_t2D9C2B502AE419E91BEF20D4861A838720732B76*)__this->___U3CbucketsU3E5__2_3;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 U3CGetEnumeratorU3Ed__35_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_Current_m4C814BB677DE72DABBD4F3FA5C18693DB4DF2C80_gshared (U3CGetEnumeratorU3Ed__35_tFBB72033DD97EBEE1D1AB495DD3A0C1827242215* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->___U3CU3E2__current_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__35_System_Collections_IEnumerator_Reset_mC076EBC85BEA8C6BBD6000C7CDB836898EA57C86_gshared (U3CGetEnumeratorU3Ed__35_tFBB72033DD97EBEE1D1AB495DD3A0C1827242215* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__35_System_Collections_IEnumerator_get_Current_m2C50F6E9AB2D743BB0D2163CC0B8B59C0EEFA222_gshared (U3CGetEnumeratorU3Ed__35_tFBB72033DD97EBEE1D1AB495DD3A0C1827242215* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->___U3CU3E2__current_1;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), &L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__35__ctor_mAA657A1A6BB8899C8EA5794709BE50B2D31D17AD_gshared (U3CGetEnumeratorU3Ed__35_t5851A752199A6195E7EB427BC50C5FFCAB8D4E6E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__35_System_IDisposable_Dispose_m5E74525F9E0D828079C058474C9805E5406E8376_gshared (U3CGetEnumeratorU3Ed__35_t5851A752199A6195E7EB427BC50C5FFCAB8D4E6E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__35_MoveNext_m26BB00E5C3D192DD2E14E2DC62721C0286F5EF16_gshared (U3CGetEnumeratorU3Ed__35_t5851A752199A6195E7EB427BC50C5FFCAB8D4E6E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tCC6B29F5B3ECDC48DA55B051B543697C7D8F0C10 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const uint32_t SizeOf_TValue_t4F488A851F73E55CB1E462A046C792E0B08BEF27 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const uint32_t SizeOf_KeyValuePair_2_tD9757DA6FC0F26A42D06A8ED5CE2FF855BD847C9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TKey_tCC6B29F5B3ECDC48DA55B051B543697C7D8F0C10);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TKey_tCC6B29F5B3ECDC48DA55B051B543697C7D8F0C10);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TValue_t4F488A851F73E55CB1E462A046C792E0B08BEF27);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_TValue_t4F488A851F73E55CB1E462A046C792E0B08BEF27);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_16 = alloca(SizeOf_KeyValuePair_2_tD9757DA6FC0F26A42D06A8ED5CE2FF855BD847C9);
	int32_t V_0 = 0;
	ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
		ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* L_1 = *(ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),2));
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0085;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* L_4 = V_1;
		NullCheck(L_4);
		Tables_tD895B223685217918C345ED5D52074F7E29E5F95* L_5 = (Tables_tD895B223685217918C345ED5D52074F7E29E5F95*)L_4->____tables_0;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_5);
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_6 = (NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A*)L_5->____buckets_0;
		il2cpp_codegen_write_instance_field_data<NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_6);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), 0);
		goto IL_00be;
	}

IL_003d:
	{
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_7 = *(NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		int32_t L_8 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck(L_7);
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_9;
		L_9 = ((  Node_tC5111E77A2002D0AD173457666915D4D0BD59865* (*) (Node_tC5111E77A2002D0AD173457666915D4D0BD59865**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		il2cpp_codegen_write_instance_field_data<Node_tC5111E77A2002D0AD173457666915D4D0BD59865*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_9);
		goto IL_009f;
	}

IL_005b:
	{
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_10 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(L_10, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),0)), SizeOf_TKey_tCC6B29F5B3ECDC48DA55B051B543697C7D8F0C10);
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_12 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),1)), SizeOf_TValue_t4F488A851F73E55CB1E462A046C792E0B08BEF27);
		memset(L_16, 0, SizeOf_KeyValuePair_2_tD9757DA6FC0F26A42D06A8ED5CE2FF855BD847C9);
		KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8)) ? il2cpp_codegen_memcpy(L_14, L_11, SizeOf_TKey_tCC6B29F5B3ECDC48DA55B051B543697C7D8F0C10): *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? il2cpp_codegen_memcpy(L_15, L_13, SizeOf_TValue_t4F488A851F73E55CB1E462A046C792E0B08BEF27): *(void**)L_13), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_16, SizeOf_KeyValuePair_2_tD9757DA6FC0F26A42D06A8ED5CE2FF855BD847C9);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
		return (bool)1;
	}

IL_0085:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_17 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_18 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),2));
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_write_instance_field_data<Node_tC5111E77A2002D0AD173457666915D4D0BD59865*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_18);
	}

IL_009f:
	{
		Node_tC5111E77A2002D0AD173457666915D4D0BD59865* L_19 = *(Node_tC5111E77A2002D0AD173457666915D4D0BD59865**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		if (L_19)
		{
			goto IL_005b;
		}
	}
	{
		il2cpp_codegen_write_instance_field_data<Node_tC5111E77A2002D0AD173457666915D4D0BD59865*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (Node_tC5111E77A2002D0AD173457666915D4D0BD59865*)NULL);
		int32_t L_20 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		V_2 = L_20;
		int32_t L_21 = V_2;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4), ((int32_t)il2cpp_codegen_add(L_21, 1)));
	}

IL_00be:
	{
		int32_t L_22 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A* L_23 = *(NodeU5BU5D_t7193DC7EDFEC062E7E235A8B377A855C28B9CE9A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__35_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_Current_mCEB6D17DD950C42AB064FB68FE2EF713618847BB_gshared (U3CGetEnumeratorU3Ed__35_t5851A752199A6195E7EB427BC50C5FFCAB8D4E6E* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_tD9757DA6FC0F26A42D06A8ED5CE2FF855BD847C9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_0 = alloca(SizeOf_KeyValuePair_2_tD9757DA6FC0F26A42D06A8ED5CE2FF855BD847C9);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_KeyValuePair_2_tD9757DA6FC0F26A42D06A8ED5CE2FF855BD847C9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_KeyValuePair_2_tD9757DA6FC0F26A42D06A8ED5CE2FF855BD847C9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__35_System_Collections_IEnumerator_Reset_m327E18E2CCB7B70E31F4F6FA4D38001D581C577F_gshared (U3CGetEnumeratorU3Ed__35_t5851A752199A6195E7EB427BC50C5FFCAB8D4E6E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetEnumeratorU3Ed__35_System_Collections_IEnumerator_get_Current_mBF502423683D06AA24D587EF40D4DD9DC55B60A1_gshared (U3CGetEnumeratorU3Ed__35_t5851A752199A6195E7EB427BC50C5FFCAB8D4E6E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_tD9757DA6FC0F26A42D06A8ED5CE2FF855BD847C9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_0 = alloca(SizeOf_KeyValuePair_2_tD9757DA6FC0F26A42D06A8ED5CE2FF855BD847C9);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)), SizeOf_KeyValuePair_2_tD9757DA6FC0F26A42D06A8ED5CE2FF855BD847C9);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10), L_0);
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetItemIdsU3Ed__9__ctor_m356BEE7B297159631EE058B1F99E3FAF5C0729BB_gshared (U3CGetItemIdsU3Ed__9_tF93733F63FD5F03443983B07568D05E67F0A16BB* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetItemIdsU3Ed__9_System_IDisposable_Dispose_mC1561B8D7EA9514ED8CF37CB3E04EB39212D5093_gshared (U3CGetItemIdsU3Ed__9_tF93733F63FD5F03443983B07568D05E67F0A16BB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0017:
			{
				U3CGetItemIdsU3Ed__9_U3CU3Em__Finally1_m7FEEF83D042C9F55915DED87C24CBCCB49CDCB39(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				return;
			}
		});
		try
		{
			goto IL_001e;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		goto IL_0020;
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetItemIdsU3Ed__9_MoveNext_m9593FF33BBAAC9909E028AC9AC7240EA2E179A46_gshared (U3CGetItemIdsU3Ed__9_tF93733F63FD5F03443983B07568D05E67F0A16BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00b5:
			{
				U3CGetItemIdsU3Ed__9_System_IDisposable_Dispose_mC1561B8D7EA9514ED8CF37CB3E04EB39212D5093(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
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
					goto IL_0012_1;
				}
			}
			{
				goto IL_000c_1;
			}

IL_000c_1:
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0016_1;
			}

IL_0012_1:
			{
				goto IL_001d_1;
			}

IL_0014_1:
			{
				goto IL_0082_1;
			}

IL_0016_1:
			{
				V_0 = (bool)0;
				goto IL_00bd;
			}

IL_001d_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				RuntimeObject* L_3 = (RuntimeObject*)__this->___items_3;
				V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_4 = V_2;
				if (!L_4)
				{
					goto IL_0039_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00bd;
			}

IL_0039_1:
			{
				RuntimeObject* L_5 = (RuntimeObject*)__this->___items_3;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_5);
				__this->___U3CU3Es__1_5 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1_5), (void*)L_6);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_0096_1;
			}

IL_0055_1:
			{
				RuntimeObject* L_7 = (RuntimeObject*)__this->___U3CU3Es__1_5;
				NullCheck(L_7);
				TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_8;
				L_8 = InterfaceFuncInvoker0< TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_7);
				__this->___U3CitemU3E5__2_6 = L_8;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CitemU3E5__2_6))->___m_Data_1), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CitemU3E5__2_6))->___m_Children_2), (void*)NULL);
				#endif
				TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4* L_9 = (TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4*)(&__this->___U3CitemU3E5__2_6);
				int32_t L_10;
				L_10 = TreeViewItemData_1_get_id_mCA0344199EDCD8BB5C795EDCC3DD0B104A9F3A8C_inline(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
				__this->___U3CU3E2__current_1 = L_10;
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_00bd;
			}

IL_0082_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4* L_11 = (TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4*)(&__this->___U3CitemU3E5__2_6);
				il2cpp_codegen_initobj(L_11, sizeof(TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4));
			}

IL_0096_1:
			{
				RuntimeObject* L_12 = (RuntimeObject*)__this->___U3CU3Es__1_5;
				NullCheck((RuntimeObject*)L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
				if (L_13)
				{
					goto IL_0055_1;
				}
			}
			{
				U3CGetItemIdsU3Ed__9_U3CU3Em__Finally1_m7FEEF83D042C9F55915DED87C24CBCCB49CDCB39(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				__this->___U3CU3Es__1_5 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1_5), (void*)(RuntimeObject*)NULL);
				V_0 = (bool)0;
				goto IL_00bd;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00bd:
	{
		bool L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetItemIdsU3Ed__9_U3CU3Em__Finally1_m7FEEF83D042C9F55915DED87C24CBCCB49CDCB39_gshared (U3CGetItemIdsU3Ed__9_tF93733F63FD5F03443983B07568D05E67F0A16BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CU3Es__1_5;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___U3CU3Es__1_5;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_001b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CGetItemIdsU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_Int32U3E_get_Current_m0E45107CD7973F195BC4C2EAC39BCC4D62B50ABB_gshared (U3CGetItemIdsU3Ed__9_tF93733F63FD5F03443983B07568D05E67F0A16BB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E2__current_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetItemIdsU3Ed__9_System_Collections_IEnumerator_Reset_m3DD154B5CF974B4FCF001141A6EDBF15C4428ABB_gshared (U3CGetItemIdsU3Ed__9_tF93733F63FD5F03443983B07568D05E67F0A16BB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetItemIdsU3Ed__9_System_Collections_IEnumerator_get_Current_m5CE29FFA3E720B281EFEB702CAA923C80723557F_gshared (U3CGetItemIdsU3Ed__9_tF93733F63FD5F03443983B07568D05E67F0A16BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E2__current_1;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetItemIdsU3Ed__9_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_m9361AD9B704EEB73EC817CC998C86B5D94FE4A89_gshared (U3CGetItemIdsU3Ed__9_tF93733F63FD5F03443983B07568D05E67F0A16BB* __this, const RuntimeMethod* method) 
{
	U3CGetItemIdsU3Ed__9_tF93733F63FD5F03443983B07568D05E67F0A16BB* V_0 = NULL;
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
		U3CGetItemIdsU3Ed__9_tF93733F63FD5F03443983B07568D05E67F0A16BB* L_3 = (U3CGetItemIdsU3Ed__9_tF93733F63FD5F03443983B07568D05E67F0A16BB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		U3CGetItemIdsU3Ed__9__ctor_m356BEE7B297159631EE058B1F99E3FAF5C0729BB(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		V_0 = L_3;
	}

IL_0029:
	{
		U3CGetItemIdsU3Ed__9_tF93733F63FD5F03443983B07568D05E67F0A16BB* L_4 = V_0;
		RuntimeObject* L_5 = (RuntimeObject*)__this->___U3CU3E3__items_4;
		NullCheck(L_4);
		L_4->___items_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___items_3), (void*)L_5);
		U3CGetItemIdsU3Ed__9_tF93733F63FD5F03443983B07568D05E67F0A16BB* L_6 = V_0;
		return (RuntimeObject*)L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetItemIdsU3Ed__9_System_Collections_IEnumerable_GetEnumerator_mEDAB8763DFC5861AD4CA7D789A3570F57BFE2694_gshared (U3CGetItemIdsU3Ed__9_tF93733F63FD5F03443983B07568D05E67F0A16BB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetItemIdsU3Ed__9_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_m9361AD9B704EEB73EC817CC998C86B5D94FE4A89(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetItemIdsU3Ed__9__ctor_mA413200E1FE85BE0128BA5FB3A91B46C4A7048CD_gshared (U3CGetItemIdsU3Ed__9_t1C187ED9EE7F68E40E20D3F5EAB3CCA02DE6AEA6* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetItemIdsU3Ed__9_System_IDisposable_Dispose_mFD9D89B20606851E5C5F07E3B6A109A2AA038E15_gshared (U3CGetItemIdsU3Ed__9_t1C187ED9EE7F68E40E20D3F5EAB3CCA02DE6AEA6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0017:
			{
				((  void (*) (U3CGetItemIdsU3Ed__9_t1C187ED9EE7F68E40E20D3F5EAB3CCA02DE6AEA6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				return;
			}
		});
		try
		{
			goto IL_001e;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		goto IL_0020;
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetItemIdsU3Ed__9_MoveNext_mF0A6BA7D47F9867CA848E323E555F8D7882AB515_gshared (U3CGetItemIdsU3Ed__9_t1C187ED9EE7F68E40E20D3F5EAB3CCA02DE6AEA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TreeViewItemData_1_tA7D754BA4AA8679D457028AFCECA3BD34D173944 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const TreeViewItemData_1_t3E2C741B77BE0CA5BE82E36F13DE84F4E7AE117C L_8 = alloca(SizeOf_TreeViewItemData_1_tA7D754BA4AA8679D457028AFCECA3BD34D173944);
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00b5:
			{
				((  void (*) (U3CGetItemIdsU3Ed__9_t1C187ED9EE7F68E40E20D3F5EAB3CCA02DE6AEA6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
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
					goto IL_0012_1;
				}
			}
			{
				goto IL_000c_1;
			}

IL_000c_1:
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0016_1;
			}

IL_0012_1:
			{
				goto IL_001d_1;
			}

IL_0014_1:
			{
				goto IL_0082_1;
			}

IL_0016_1:
			{
				V_0 = (bool)0;
				goto IL_00bd;
			}

IL_001d_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
				RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_4 = V_2;
				if (!L_4)
				{
					goto IL_0039_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00bd;
			}

IL_0039_1:
			{
				RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_5);
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), L_6);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
				goto IL_0096_1;
			}

IL_0055_1:
			{
				RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				NullCheck(L_7);
				InterfaceActionInvoker1Invoker< TreeViewItemData_1_t3E2C741B77BE0CA5BE82E36F13DE84F4E7AE117C* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_7, (TreeViewItemData_1_t3E2C741B77BE0CA5BE82E36F13DE84F4E7AE117C*)L_8);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_8, SizeOf_TreeViewItemData_1_tA7D754BA4AA8679D457028AFCECA3BD34D173944);
				int32_t L_9;
				L_9 = ((  int32_t (*) (TreeViewItemData_1_t3E2C741B77BE0CA5BE82E36F13DE84F4E7AE117C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))((((TreeViewItemData_1_t3E2C741B77BE0CA5BE82E36F13DE84F4E7AE117C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)))), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1), L_9);
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), 1);
				V_0 = (bool)1;
				goto IL_00bd;
			}

IL_0082_1:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-3));
				il2cpp_codegen_initobj((((TreeViewItemData_1_t3E2C741B77BE0CA5BE82E36F13DE84F4E7AE117C*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6)))), SizeOf_TreeViewItemData_1_tA7D754BA4AA8679D457028AFCECA3BD34D173944);
			}

IL_0096_1:
			{
				RuntimeObject* L_10 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				NullCheck((RuntimeObject*)L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
				if (L_11)
				{
					goto IL_0055_1;
				}
			}
			{
				((  void (*) (U3CGetItemIdsU3Ed__9_t1C187ED9EE7F68E40E20D3F5EAB3CCA02DE6AEA6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
				il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (RuntimeObject*)NULL);
				V_0 = (bool)0;
				goto IL_00bd;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00bd:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetItemIdsU3Ed__9_U3CU3Em__Finally1_mBF9C58F7B969303287F3006DE7501FE684A7D843_gshared (U3CGetItemIdsU3Ed__9_t1C187ED9EE7F68E40E20D3F5EAB3CCA02DE6AEA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), (-1));
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_001b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CGetItemIdsU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_Int32U3E_get_Current_m5CDAE49EB74B5CE9DAE390BBCCB759AF36D50CA6_gshared (U3CGetItemIdsU3Ed__9_t1C187ED9EE7F68E40E20D3F5EAB3CCA02DE6AEA6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetItemIdsU3Ed__9_System_Collections_IEnumerator_Reset_mF0DBCD4913722BF31AA21D6002DAA46B65A90C11_gshared (U3CGetItemIdsU3Ed__9_t1C187ED9EE7F68E40E20D3F5EAB3CCA02DE6AEA6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetItemIdsU3Ed__9_System_Collections_IEnumerator_get_Current_mB0731855211F9610E557A5BAEEBACD485C90B804_gshared (U3CGetItemIdsU3Ed__9_t1C187ED9EE7F68E40E20D3F5EAB3CCA02DE6AEA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1));
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetItemIdsU3Ed__9_System_Collections_Generic_IEnumerableU3CSystem_Int32U3E_GetEnumerator_mC315DF086155FA1F0ECB99C76FD93E874FE893C4_gshared (U3CGetItemIdsU3Ed__9_t1C187ED9EE7F68E40E20D3F5EAB3CCA02DE6AEA6* __this, const RuntimeMethod* method) 
{
	U3CGetItemIdsU3Ed__9_t1C187ED9EE7F68E40E20D3F5EAB3CCA02DE6AEA6* V_0 = NULL;
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
		U3CGetItemIdsU3Ed__9_t1C187ED9EE7F68E40E20D3F5EAB3CCA02DE6AEA6* L_3 = (U3CGetItemIdsU3Ed__9_t1C187ED9EE7F68E40E20D3F5EAB3CCA02DE6AEA6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (U3CGetItemIdsU3Ed__9_t1C187ED9EE7F68E40E20D3F5EAB3CCA02DE6AEA6*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_3, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		V_0 = L_3;
	}

IL_0029:
	{
		U3CGetItemIdsU3Ed__9_t1C187ED9EE7F68E40E20D3F5EAB3CCA02DE6AEA6* L_4 = V_0;
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
		NullCheck(L_4);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3), L_5);
		U3CGetItemIdsU3Ed__9_t1C187ED9EE7F68E40E20D3F5EAB3CCA02DE6AEA6* L_6 = V_0;
		return (RuntimeObject*)L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetItemIdsU3Ed__9_System_Collections_IEnumerable_GetEnumerator_m4F96EA04EC81EF3137F90609CE7AB019D89DACA7_gshared (U3CGetItemIdsU3Ed__9_t1C187ED9EE7F68E40E20D3F5EAB3CCA02DE6AEA6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (U3CGetItemIdsU3Ed__9_t1C187ED9EE7F68E40E20D3F5EAB3CCA02DE6AEA6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLastAsyncU3Ed__0_1__ctor_mD2C43D37BEE729749F0745655EB319990C8A02C6_gshared (U3CLastAsyncU3Ed__0_1_t38AFC35C81A53570FC7FA05BED4F1D9156275B70* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLastAsyncU3Ed__0_1_MoveNext_mD5D46810F666D802864B40E962F0F7D6C06FC9AE_gshared (U3CLastAsyncU3Ed__0_1_t38AFC35C81A53570FC7FA05BED4F1D9156275B70* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_tA4C0825C39824D7B3EB7A500638B9E9D79150F3D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TSource_tA4C0825C39824D7B3EB7A500638B9E9D79150F3D);
	const Il2CppFullySharedGenericAny L_23 = L_20;
	const Il2CppFullySharedGenericAny L_26 = L_20;
	const Il2CppFullySharedGenericAny L_38 = L_20;
	const Il2CppFullySharedGenericAny L_59 = L_20;
	const Il2CppFullySharedGenericAny L_61 = L_20;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tA4C0825C39824D7B3EB7A500638B9E9D79150F3D);
	memset(V_1, 0, SizeOf_TSource_tA4C0825C39824D7B3EB7A500638B9E9D79150F3D);
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CLastAsyncU3Ed__0_1_t38AFC35C81A53570FC7FA05BED4F1D9156275B70* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_8;
	memset((&V_8), 0, sizeof(V_8));
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
			goto IL_0226_1;
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
				goto IL_00a6_2;
			}

IL_004e_2:
			{
				goto IL_0171_2;
			}

IL_0053_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_TSource_tA4C0825C39824D7B3EB7A500638B9E9D79150F3D);
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
					goto IL_00c2_2;
				}
			}
			{
				int32_t L_12 = 0;
				V_0 = L_12;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_12);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_13 = V_3;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_13);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CLastAsyncU3Ed__0_1_t38AFC35C81A53570FC7FA05BED4F1D9156275B70**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
				goto IL_02e7;
			}

IL_00a6_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_14 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12));
				V_3 = L_14;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_15 = (-1);
				V_0 = L_15;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_15);
			}

IL_00c2_2:
			{
				bool L_16;
				L_16 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_3), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_16);
				bool L_17 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10));
				V_2 = L_17;
				bool L_18 = V_2;
				if (!L_18)
				{
					goto IL_00ee_2;
				}
			}
			{
				RuntimeObject* L_19 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				NullCheck(L_19);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_19, (Il2CppFullySharedGenericAny*)L_20);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_20, SizeOf_TSource_tA4C0825C39824D7B3EB7A500638B9E9D79150F3D);
				goto IL_0114_2;
			}

IL_00ee_2:
			{
				bool L_21 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),4));
				V_6 = L_21;
				bool L_22 = V_6;
				if (!L_22)
				{
					goto IL_010d_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_23, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TSource_tA4C0825C39824D7B3EB7A500638B9E9D79150F3D);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_23, SizeOf_TSource_tA4C0825C39824D7B3EB7A500638B9E9D79150F3D);
				goto IL_01b8_2;
			}

IL_010d_2:
			{
				Exception_t* L_24;
				L_24 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, method);
			}

IL_0114_2:
			{
				goto IL_0129_2;
			}

IL_0116_2:
			{
				RuntimeObject* L_25 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				NullCheck(L_25);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_25, (Il2CppFullySharedGenericAny*)L_26);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_26, SizeOf_TSource_tA4C0825C39824D7B3EB7A500638B9E9D79150F3D);
			}

IL_0129_2:
			{
				RuntimeObject* L_27 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
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
					goto IL_018e_2;
				}
			}
			{
				int32_t L_31 = 1;
				V_0 = L_31;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_31);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_32 = V_8;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_32);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CLastAsyncU3Ed__0_1_t38AFC35C81A53570FC7FA05BED4F1D9156275B70**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_8), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 7));
				goto IL_02e7;
			}

IL_0171_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_33 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12));
				V_8 = L_33;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_34 = (-1);
				V_0 = L_34;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_34);
			}

IL_018e_2:
			{
				bool L_35;
				L_35 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_8), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), L_35);
				bool L_36 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
				V_7 = L_36;
				bool L_37 = V_7;
				if (L_37)
				{
					goto IL_0116_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_38, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TSource_tA4C0825C39824D7B3EB7A500638B9E9D79150F3D);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), L_38, SizeOf_TSource_tA4C0825C39824D7B3EB7A500638B9E9D79150F3D);
				goto IL_01b8_2;
			}

IL_01b8_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), 1);
				goto IL_01cd_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01c1_1;
			}
			throw e;
		}

CATCH_01c1_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_39 = V_9;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), L_39);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01cd_1;
		}

IL_01cd_1:
		{
			RuntimeObject* L_40 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_40) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_41 = V_10;
			if (!L_41)
			{
				goto IL_024c_1;
			}
		}
		{
			RuntimeObject* L_42 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
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
				goto IL_0243_1;
			}
		}
		{
			int32_t L_46 = 2;
			V_0 = L_46;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_46);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_47 = V_11;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_47);
			V_5 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CLastAsyncU3Ed__0_1_t38AFC35C81A53570FC7FA05BED4F1D9156275B70**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_11), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
			goto IL_02e7;
		}

IL_0226_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_48 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
			V_11 = L_48;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_49 = (-1);
			V_0 = L_49;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_49);
		}

IL_0243_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_024c_1:
		{
			RuntimeObject* L_50 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_9 = L_50;
			RuntimeObject* L_51 = V_9;
			if (!L_51)
			{
				goto IL_0276_1;
			}
		}
		{
			RuntimeObject* L_52 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_52, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_53 = V_13;
			if (L_53)
			{
				goto IL_0269_1;
			}
		}
		{
			RuntimeObject* L_54 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_54, method);
		}

IL_0269_1:
		{
			Exception_t* L_55 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_56;
			L_56 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_55, NULL);
			NullCheck(L_56);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_56, NULL);
		}

IL_0276_1:
		{
			int32_t L_57 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_14 = L_57;
			int32_t L_58 = V_14;
			if ((((int32_t)L_58) == ((int32_t)1)))
			{
				goto IL_0285_1;
			}
		}
		{
			goto IL_028e_1;
		}

IL_0285_1:
		{
			il2cpp_codegen_memcpy(L_59, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8)), SizeOf_TSource_tA4C0825C39824D7B3EB7A500638B9E9D79150F3D);
			il2cpp_codegen_memcpy(V_1, L_59, SizeOf_TSource_tA4C0825C39824D7B3EB7A500638B9E9D79150F3D);
			goto IL_02cb;
		}

IL_028e_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8)))), SizeOf_TSource_tA4C0825C39824D7B3EB7A500638B9E9D79150F3D);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (RuntimeObject*)NULL);
			goto IL_02cb;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02aa;
		}
		throw e;
	}

CATCH_02aa:
	{
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (RuntimeObject*)NULL);
		Exception_t* L_60 = V_13;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_60, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02e7;
	}

IL_02cb:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_61, V_1, SizeOf_TSource_tA4C0825C39824D7B3EB7A500638B9E9D79150F3D);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_61: *(void**)L_61));
	}

IL_02e7:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLastAsyncU3Ed__0_1_SetStateMachine_m61FD68F490A0E9CA0D71D3799E018DA24E57B8B8_gshared (U3CLastAsyncU3Ed__0_1_t38AFC35C81A53570FC7FA05BED4F1D9156275B70* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLastAsyncU3Ed__1_1__ctor_m99554932EBA0A7C881D38603DC94852C30DB84A6_gshared (U3CLastAsyncU3Ed__1_1_t0FD9210854E67C87AE6374B78E7F411EE5178410* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLastAsyncU3Ed__1_1_MoveNext_m014F455F82411CAFA396AA65C3B53E592A47DBE4_gshared (U3CLastAsyncU3Ed__1_1_t0FD9210854E67C87AE6374B78E7F411EE5178410* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
	const Il2CppFullySharedGenericAny L_13 = L_8;
	const Il2CppFullySharedGenericAny L_27 = L_8;
	const Il2CppFullySharedGenericAny L_30 = L_8;
	const Il2CppFullySharedGenericAny L_52 = L_8;
	const Il2CppFullySharedGenericAny L_54 = L_8;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
	memset(V_1, 0, SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
	bool V_2 = false;
	bool V_3 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_4;
	memset((&V_4), 0, sizeof(V_4));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CLastAsyncU3Ed__1_1_t0FD9210854E67C87AE6374B78E7F411EE5178410* V_6 = NULL;
	bool V_7 = false;
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
			goto IL_01d4_1;
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
				goto IL_00f1_2;
			}

IL_004a_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))), SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), (bool)0);
				goto IL_00a9_2;
			}

IL_0060_2:
			{
				RuntimeObject* L_7 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_7);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_7, (Il2CppFullySharedGenericAny*)L_8);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_8, SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
				Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_9 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
				NullCheck(L_9);
				bool L_11;
				L_11 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
				V_2 = L_11;
				bool L_12 = V_2;
				if (!L_12)
				{
					goto IL_009c_2;
				}
			}
			{
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), (bool)1);
				il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_13, SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
			}

IL_009c_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)))), SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
			}

IL_00a9_2:
			{
				RuntimeObject* L_14 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
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
					goto IL_010e_2;
				}
			}
			{
				int32_t L_18 = 0;
				V_0 = L_18;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_18);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_19 = V_4;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), L_19);
				V_6 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CLastAsyncU3Ed__1_1_t0FD9210854E67C87AE6374B78E7F411EE5178410**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_4), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				goto IL_0295;
			}

IL_00f1_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_20 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
				V_4 = L_20;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_21 = (-1);
				V_0 = L_21;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_21);
			}

IL_010e_2:
			{
				bool L_22;
				L_22 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_4), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13), L_22);
				bool L_23 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),13));
				V_3 = L_23;
				bool L_24 = V_3;
				if (L_24)
				{
					goto IL_0060_2;
				}
			}
			{
				bool L_25 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				V_7 = L_25;
				bool L_26 = V_7;
				if (!L_26)
				{
					goto IL_0143_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_27, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_27, SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
				goto IL_0166_2;
			}

IL_0143_2:
			{
				bool L_28 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
				V_8 = L_28;
				bool L_29 = V_8;
				if (!L_29)
				{
					goto IL_015f_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_30, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_30, SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
				goto IL_0166_2;
			}

IL_015f_2:
			{
				Exception_t* L_31;
				L_31 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, method);
			}

IL_0166_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 1);
				goto IL_017b_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_016f_1;
			}
			throw e;
		}

CATCH_016f_1:
		{
			V_9 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_32 = V_9;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_32);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_017b_1;
		}

IL_017b_1:
		{
			RuntimeObject* L_33 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_10 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_33) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_34 = V_10;
			if (!L_34)
			{
				goto IL_01fa_1;
			}
		}
		{
			RuntimeObject* L_35 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
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
				goto IL_01f1_1;
			}
		}
		{
			int32_t L_39 = 1;
			V_0 = L_39;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_39);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_40 = V_11;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15), L_40);
			V_6 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CLastAsyncU3Ed__1_1_t0FD9210854E67C87AE6374B78E7F411EE5178410**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_11), (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0295;
		}

IL_01d4_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_41 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15));
			V_11 = L_41;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_42 = (-1);
			V_0 = L_42;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_42);
		}

IL_01f1_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_11), NULL);
		}

IL_01fa_1:
		{
			RuntimeObject* L_43 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_9 = L_43;
			RuntimeObject* L_44 = V_9;
			if (!L_44)
			{
				goto IL_0224_1;
			}
		}
		{
			RuntimeObject* L_45 = V_9;
			V_13 = ((Exception_t*)IsInstClass((RuntimeObject*)L_45, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_46 = V_13;
			if (L_46)
			{
				goto IL_0217_1;
			}
		}
		{
			RuntimeObject* L_47 = V_9;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
		}

IL_0217_1:
		{
			Exception_t* L_48 = V_13;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_49;
			L_49 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_48, NULL);
			NullCheck(L_49);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_49, NULL);
		}

IL_0224_1:
		{
			int32_t L_50 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_14 = L_50;
			int32_t L_51 = V_14;
			if ((((int32_t)L_51) == ((int32_t)1)))
			{
				goto IL_0233_1;
			}
		}
		{
			goto IL_023c_1;
		}

IL_0233_1:
		{
			il2cpp_codegen_memcpy(L_52, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
			il2cpp_codegen_memcpy(V_1, L_52, SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
			goto IL_0279;
		}

IL_023c_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
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
		V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		Exception_t* L_53 = V_13;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_53, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0295;
	}

IL_0279:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_54, V_1, SizeOf_TSource_t5E567F9991874D44CD456D44CA5E63D6E904192E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_54: *(void**)L_54));
	}

IL_0295:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLastAsyncU3Ed__1_1_SetStateMachine_m659C5BBACA777EA21F377365560CC2F3E41393DB_gshared (U3CLastAsyncU3Ed__1_1_t0FD9210854E67C87AE6374B78E7F411EE5178410* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLastAwaitAsyncU3Ed__2_1__ctor_m509ECA7A107EADCBBC56453B9D69941D9860D1D8_gshared (U3CLastAwaitAsyncU3Ed__2_1_tC239805AACCC4C0F81C94B1270D7382B72745616* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLastAwaitAsyncU3Ed__2_1_MoveNext_mE3F71EB81B4FC677F2346D2092698B03C75F8712_gshared (U3CLastAwaitAsyncU3Ed__2_1_tC239805AACCC4C0F81C94B1270D7382B72745616* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
	const Il2CppFullySharedGenericAny L_22 = L_9;
	const Il2CppFullySharedGenericAny L_36 = L_9;
	const Il2CppFullySharedGenericAny L_39 = L_9;
	const Il2CppFullySharedGenericAny L_61 = L_9;
	const Il2CppFullySharedGenericAny L_63 = L_9;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
	memset(V_1, 0, SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CLastAwaitAsyncU3Ed__2_1_tC239805AACCC4C0F81C94B1270D7382B72745616* V_5 = NULL;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
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
			goto IL_024c_1;
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
				goto IL_0167_2;
			}

IL_0053_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))), SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), (bool)0);
				goto IL_011f_2;
			}

IL_006c_2:
			{
				RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_9, SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
				Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C* L_10 = *(Func_2_t71231B84A8B66DBE2AD3FD895311DB62801EC31C**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
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
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CLastAwaitAsyncU3Ed__2_1_tC239805AACCC4C0F81C94B1270D7382B72745616**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_030d;
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
					goto IL_0112_2;
				}
			}
			{
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), (bool)1);
				il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_22, SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
			}

IL_0112_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)))), SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
			}

IL_011f_2:
			{
				RuntimeObject* L_23 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
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
					goto IL_0184_2;
				}
			}
			{
				int32_t L_27 = 1;
				V_0 = L_27;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_27);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_28 = V_7;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15), L_28);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CLastAwaitAsyncU3Ed__2_1_tC239805AACCC4C0F81C94B1270D7382B72745616**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_7), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_030d;
			}

IL_0167_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15));
				V_7 = L_29;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_30 = (-1);
				V_0 = L_30;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_30);
			}

IL_0184_2:
			{
				bool L_31;
				L_31 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), L_31);
				bool L_32 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
				V_6 = L_32;
				bool L_33 = V_6;
				if (L_33)
				{
					goto IL_006c_2;
				}
			}
			{
				bool L_34 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				V_8 = L_34;
				bool L_35 = V_8;
				if (!L_35)
				{
					goto IL_01bb_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_36, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_36, SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
				goto IL_01de_2;
			}

IL_01bb_2:
			{
				bool L_37 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
				V_9 = L_37;
				bool L_38 = V_9;
				if (!L_38)
				{
					goto IL_01d7_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_39, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_39, SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
				goto IL_01de_2;
			}

IL_01d7_2:
			{
				Exception_t* L_40;
				L_40 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, method);
			}

IL_01de_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 1);
				goto IL_01f3_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01e7_1;
			}
			throw e;
		}

CATCH_01e7_1:
		{
			V_10 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_41 = V_10;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_41);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01f3_1;
		}

IL_01f3_1:
		{
			RuntimeObject* L_42 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_42) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_43 = V_11;
			if (!L_43)
			{
				goto IL_0272_1;
			}
		}
		{
			RuntimeObject* L_44 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			NullCheck((RuntimeObject*)L_44);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_45;
			L_45 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_44);
			V_13 = L_45;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_46;
			L_46 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_13), NULL);
			V_12 = L_46;
			bool L_47;
			L_47 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_12), NULL);
			if (L_47)
			{
				goto IL_0269_1;
			}
		}
		{
			int32_t L_48 = 2;
			V_0 = L_48;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_48);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_49 = V_12;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16), L_49);
			V_5 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CLastAwaitAsyncU3Ed__2_1_tC239805AACCC4C0F81C94B1270D7382B72745616**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_12), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_030d;
		}

IL_024c_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16));
			V_12 = L_50;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_51 = (-1);
			V_0 = L_51;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_51);
		}

IL_0269_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_0272_1:
		{
			RuntimeObject* L_52 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_10 = L_52;
			RuntimeObject* L_53 = V_10;
			if (!L_53)
			{
				goto IL_029c_1;
			}
		}
		{
			RuntimeObject* L_54 = V_10;
			V_14 = ((Exception_t*)IsInstClass((RuntimeObject*)L_54, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_55 = V_14;
			if (L_55)
			{
				goto IL_028f_1;
			}
		}
		{
			RuntimeObject* L_56 = V_10;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_56, method);
		}

IL_028f_1:
		{
			Exception_t* L_57 = V_14;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_58;
			L_58 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_57, NULL);
			NullCheck(L_58);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_58, NULL);
		}

IL_029c_1:
		{
			int32_t L_59 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_15 = L_59;
			int32_t L_60 = V_15;
			if ((((int32_t)L_60) == ((int32_t)1)))
			{
				goto IL_02ab_1;
			}
		}
		{
			goto IL_02b4_1;
		}

IL_02ab_1:
		{
			il2cpp_codegen_memcpy(L_61, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
			il2cpp_codegen_memcpy(V_1, L_61, SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
			goto IL_02f1;
		}

IL_02b4_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
			goto IL_02f1;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02d0;
		}
		throw e;
	}

CATCH_02d0:
	{
		V_14 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		Exception_t* L_62 = V_14;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_62, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_030d;
	}

IL_02f1:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_63, V_1, SizeOf_TSource_t9B9FB7EB8E5B4C10A91054E5ECB4CFFC2539AECD);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_63: *(void**)L_63));
	}

IL_030d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLastAwaitAsyncU3Ed__2_1_SetStateMachine_m230957A2514F3F85C748B2B53D9E6382C7726E3E_gshared (U3CLastAwaitAsyncU3Ed__2_1_tC239805AACCC4C0F81C94B1270D7382B72745616* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLastAwaitWithCancellationAsyncU3Ed__3_1__ctor_m08031E0150BB83ABD56769552C772A9A24DC83C8_gshared (U3CLastAwaitWithCancellationAsyncU3Ed__3_1_tE16CA9A4999761FA673AE43AC096DABBF15267E4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLastAwaitWithCancellationAsyncU3Ed__3_1_MoveNext_mD6395A4018CB1316FA8343C4E3C720D0C013C5A0_gshared (U3CLastAwaitWithCancellationAsyncU3Ed__3_1_tE16CA9A4999761FA673AE43AC096DABBF15267E4* __this, const RuntimeMethod* method) 
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
	const uint32_t SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
	const Il2CppFullySharedGenericAny L_23 = L_9;
	const Il2CppFullySharedGenericAny L_37 = L_9;
	const Il2CppFullySharedGenericAny L_40 = L_9;
	const Il2CppFullySharedGenericAny L_62 = L_9;
	const Il2CppFullySharedGenericAny L_64 = L_9;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
	memset(V_1, 0, SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
	bool V_2 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CLastAwaitWithCancellationAsyncU3Ed__3_1_tE16CA9A4999761FA673AE43AC096DABBF15267E4* V_5 = NULL;
	bool V_6 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
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
			goto IL_0255_1;
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
				goto IL_0170_2;
			}

IL_0056_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)))), SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), (bool)0);
				goto IL_0128_2;
			}

IL_006f_2:
			{
				RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
				NullCheck(L_8);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8, (Il2CppFullySharedGenericAny*)L_9);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12), L_9, SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
				Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814* L_10 = *(Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),3));
				il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
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
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CLastAwaitWithCancellationAsyncU3Ed__3_1_tE16CA9A4999761FA673AE43AC096DABBF15267E4**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_3), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0316;
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
					goto IL_011b_2;
				}
			}
			{
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11), (bool)1);
				il2cpp_codegen_memcpy(L_23, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)), SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10), L_23, SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
			}

IL_011b_2:
			{
				il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),12)))), SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
			}

IL_0128_2:
			{
				RuntimeObject* L_24 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
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
					goto IL_018d_2;
				}
			}
			{
				int32_t L_28 = 1;
				V_0 = L_28;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_28);
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_29 = V_7;
				il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15), L_29);
				V_5 = __this;
				((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CLastAwaitWithCancellationAsyncU3Ed__3_1_tE16CA9A4999761FA673AE43AC096DABBF15267E4**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_7), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
				goto IL_0316;
			}

IL_0170_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_30 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15));
				V_7 = L_30;
				il2cpp_codegen_initobj((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),15)))), sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_31 = (-1);
				V_0 = L_31;
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_31);
			}

IL_018d_2:
			{
				bool L_32;
				L_32 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_7), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14), L_32);
				bool L_33 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),14));
				V_6 = L_33;
				bool L_34 = V_6;
				if (L_34)
				{
					goto IL_006f_2;
				}
			}
			{
				bool L_35 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),5));
				V_8 = L_35;
				bool L_36 = V_8;
				if (!L_36)
				{
					goto IL_01c4_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_37, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_37, SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
				goto IL_01e7_2;
			}

IL_01c4_2:
			{
				bool L_38 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),11));
				V_9 = L_38;
				bool L_39 = V_9;
				if (!L_39)
				{
					goto IL_01e0_2;
				}
			}
			{
				il2cpp_codegen_memcpy(L_40, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),10)), SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
				il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9), L_40, SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
				goto IL_01e7_2;
			}

IL_01e0_2:
			{
				Exception_t* L_41;
				L_41 = Error_NoElements_m9FAF29875B71BD3258D6E9E0BD6207BFC95316A5_inline(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, method);
			}

IL_01e7_2:
			{
				il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8), 1);
				goto IL_01fc_1;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01f0_1;
			}
			throw e;
		}

CATCH_01f0_1:
		{
			V_10 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_42 = V_10;
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), L_42);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_01fc_1;
		}

IL_01fc_1:
		{
			RuntimeObject* L_43 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6));
			V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_43) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_44 = V_11;
			if (!L_44)
			{
				goto IL_027b_1;
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
				goto IL_0272_1;
			}
		}
		{
			int32_t L_49 = 2;
			V_0 = L_49;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_49);
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_50 = V_12;
			il2cpp_codegen_write_instance_field_data<Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16), L_50);
			V_5 = __this;
			((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CLastAwaitWithCancellationAsyncU3Ed__3_1_tE16CA9A4999761FA673AE43AC096DABBF15267E4**, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (&V_12), (&V_5), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
			goto IL_0316;
		}

IL_0255_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_51 = *(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16));
			V_12 = L_51;
			il2cpp_codegen_initobj((((Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),16)))), sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_52 = (-1);
			V_0 = L_52;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), L_52);
		}

IL_0272_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_12), NULL);
		}

IL_027b_1:
		{
			RuntimeObject* L_53 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7));
			V_10 = L_53;
			RuntimeObject* L_54 = V_10;
			if (!L_54)
			{
				goto IL_02a5_1;
			}
		}
		{
			RuntimeObject* L_55 = V_10;
			V_14 = ((Exception_t*)IsInstClass((RuntimeObject*)L_55, Exception_t_il2cpp_TypeInfo_var));
			Exception_t* L_56 = V_14;
			if (L_56)
			{
				goto IL_0298_1;
			}
		}
		{
			RuntimeObject* L_57 = V_10;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_57, method);
		}

IL_0298_1:
		{
			Exception_t* L_58 = V_14;
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_59;
			L_59 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_58, NULL);
			NullCheck(L_59);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_59, NULL);
		}

IL_02a5_1:
		{
			int32_t L_60 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),8));
			V_15 = L_60;
			int32_t L_61 = V_15;
			if ((((int32_t)L_61) == ((int32_t)1)))
			{
				goto IL_02b4_1;
			}
		}
		{
			goto IL_02bd_1;
		}

IL_02b4_1:
		{
			il2cpp_codegen_memcpy(L_62, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)), SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
			il2cpp_codegen_memcpy(V_1, L_62, SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
			goto IL_02fa;
		}

IL_02bd_1:
		{
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),7), NULL);
			il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),9)))), SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
			goto IL_02fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02d9;
		}
		throw e;
	}

CATCH_02d9:
	{
		V_14 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		Exception_t* L_63 = V_14;
		((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), L_63, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0316;
	}

IL_02fa:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),0), ((int32_t)-2));
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),6), (RuntimeObject*)NULL);
		il2cpp_codegen_memcpy(L_64, V_1, SizeOf_TSource_t132EA158576CC2D78F4103615C38195D3158B98F);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0),1)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_64: *(void**)L_64));
	}

IL_0316:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLastAwaitWithCancellationAsyncU3Ed__3_1_SetStateMachine_m0D9D6DF762FDC6987D52F7F6D883079B95A1B247_gshared (U3CLastAwaitWithCancellationAsyncU3Ed__3_1_tE16CA9A4999761FA673AE43AC096DABBF15267E4* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetException_m0D772D62D01CC371F4AB0F6943BBBE0FEAB19643_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___runnerPromise_0;
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
		RuntimeObject* L_3 = __this->___runnerPromise_0;
		Exception_t* L_4 = ___0_exception;
		NullCheck(L_3);
		InterfaceActionInvoker1< Exception_t* >::Invoke(3, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_3, L_4);
	}

IL_0028:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_SetResult_mBBA527F0F21E04D65A269C0D02597CE5B2D1E9CB_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = __this->___runnerPromise_0;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(2, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_2);
	}

IL_001c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Error_ArgumentOutOfRange_mB12CA2A5A28BE69DF8EFD9AB4FBD5DDD4C27AD13_inline (String_t* ___0_paramName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	{
		String_t* L_0 = ___0_paramName;
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		Exception_t* L_2 = V_0;
		return L_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TreeData_1_get_rootItemIds_m8307EE3034C4CEC53C0EB7AD488E0126B2E03C53_gshared_inline (TreeData_1_t52F9997F4F3827B6D2DDD108B0B5F8007C1054DE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___m_RootItemIds_0;
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TreeViewItemData_1_get_id_mCA0344199EDCD8BB5C795EDCC3DD0B104A9F3A8C_gshared_inline (TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___U3CidU3Ek__BackingField_0;
		return L_0;
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
