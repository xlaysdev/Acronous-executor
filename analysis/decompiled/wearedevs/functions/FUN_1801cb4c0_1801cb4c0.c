/* FUN_1801cb4c0 @ 1801cb4c0 */

longlong FUN_1801cb4c0(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = param_1[2];
  if ((ulonglong)param_1[1] < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(0,uVar1,param_1[1],&PTR_s_C__Users_burne__cargo_registry_s_180289040);
  }
  lVar2 = *param_1;
  lVar3 = lVar2;
  uVar1 = (**(code **)PTR_PTR_1802fd598)(10,lVar2,lVar2 + uVar1);
  if ((uVar1 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (lVar3 - lVar2) + 1;
  }
  lVar2 = (**(code **)PTR_PTR_1802fd590)(10,lVar2,lVar2 + lVar3);
  return lVar2 + 1;
}


