#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
extern void NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747 (void);
// 0x00000002 UnityEngine.Vector3 UnityEngine.AI.NavMeshAgent::get_destination()
extern void NavMeshAgent_get_destination_m0FDF371CBF97028F28416675134875122F13AD2F (void);
// 0x00000003 System.Void UnityEngine.AI.NavMeshAgent::set_isStopped(System.Boolean)
extern void NavMeshAgent_set_isStopped_m3258581121A85B9F8BC02FCC2111B15506A26896 (void);
// 0x00000004 System.Single UnityEngine.AI.NavMeshAgent::get_speed()
extern void NavMeshAgent_get_speed_m5AA9A1B23412A8F5CE24A5312F6E6D4BA282B173 (void);
// 0x00000005 System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination_Injected(UnityEngine.Vector3&)
extern void NavMeshAgent_SetDestination_Injected_m41607AA111EE126BBBDCDDF76B7523B0BC369D9A (void);
// 0x00000006 System.Void UnityEngine.AI.NavMeshAgent::get_destination_Injected(UnityEngine.Vector3&)
extern void NavMeshAgent_get_destination_Injected_m494AB78E64E0F2835BF8FFE6A60A71E199474A00 (void);
// 0x00000007 UnityEngine.Vector3 UnityEngine.AI.NavMeshHit::get_position()
extern void NavMeshHit_get_position_m66845935ED76B2480F72EE6628EFD9D6BF35B39A (void);
// 0x00000008 System.Void UnityEngine.AI.NavMesh::Internal_CallOnNavMeshPreUpdate()
extern void NavMesh_Internal_CallOnNavMeshPreUpdate_m5C0CEF0AEF92B6BE0368AA5ABC02B4CCDEFA9AD5 (void);
// 0x00000009 System.Boolean UnityEngine.AI.NavMesh::SamplePosition(UnityEngine.Vector3,UnityEngine.AI.NavMeshHit&,System.Single,System.Int32)
extern void NavMesh_SamplePosition_m9675E148D95E1D92ED75DC608CAA33E75ABCA05E (void);
// 0x0000000A System.Boolean UnityEngine.AI.NavMesh::SamplePosition_Injected(UnityEngine.Vector3&,UnityEngine.AI.NavMeshHit&,System.Single,System.Int32)
extern void NavMesh_SamplePosition_Injected_m080B714E6E15722B909226ADC8176F66A51E418A (void);
// 0x0000000B System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::.ctor(System.Object,System.IntPtr)
extern void OnNavMeshPreUpdate__ctor_mDBB85480C3EA968112EB3B356486B9C9FF387BD4 (void);
// 0x0000000C System.Void UnityEngine.AI.NavMesh/OnNavMeshPreUpdate::Invoke()
extern void OnNavMeshPreUpdate_Invoke_m8950FEDFD3E07B272ED469FD1911AA98C60FC28D (void);
static Il2CppMethodPointer s_methodPointers[12] = 
{
	NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747,
	NavMeshAgent_get_destination_m0FDF371CBF97028F28416675134875122F13AD2F,
	NavMeshAgent_set_isStopped_m3258581121A85B9F8BC02FCC2111B15506A26896,
	NavMeshAgent_get_speed_m5AA9A1B23412A8F5CE24A5312F6E6D4BA282B173,
	NavMeshAgent_SetDestination_Injected_m41607AA111EE126BBBDCDDF76B7523B0BC369D9A,
	NavMeshAgent_get_destination_Injected_m494AB78E64E0F2835BF8FFE6A60A71E199474A00,
	NavMeshHit_get_position_m66845935ED76B2480F72EE6628EFD9D6BF35B39A,
	NavMesh_Internal_CallOnNavMeshPreUpdate_m5C0CEF0AEF92B6BE0368AA5ABC02B4CCDEFA9AD5,
	NavMesh_SamplePosition_m9675E148D95E1D92ED75DC608CAA33E75ABCA05E,
	NavMesh_SamplePosition_Injected_m080B714E6E15722B909226ADC8176F66A51E418A,
	OnNavMeshPreUpdate__ctor_mDBB85480C3EA968112EB3B356486B9C9FF387BD4,
	OnNavMeshPreUpdate_Invoke_m8950FEDFD3E07B272ED469FD1911AA98C60FC28D,
};
extern void NavMeshHit_get_position_m66845935ED76B2480F72EE6628EFD9D6BF35B39A_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[1] = 
{
	{ 0x06000007, NavMeshHit_get_position_m66845935ED76B2480F72EE6628EFD9D6BF35B39A_AdjustorThunk },
};
static const int32_t s_InvokerIndices[12] = 
{
	1788,
	2443,
	2032,
	2423,
	1640,
	1949,
	2443,
	3978,
	2977,
	2942,
	1135,
	2449,
};
extern const CustomAttributesCacheGenerator g_UnityEngine_AIModule_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_AIModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_AIModule_CodeGenModule = 
{
	"UnityEngine.AIModule.dll",
	12,
	s_methodPointers,
	1,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_UnityEngine_AIModule_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
