/* FUN_18005a460 @ 18005a460 */

void FUN_18005a460(undefined8 param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong local_40;
  ulonglong local_38;
  ulonglong local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar3 = param_3[1];
  uVar1 = param_3[2];
  local_38 = uVar3 - uVar1;
  if (uVar3 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(uVar1,uVar3,uVar3,&PTR_s_C__Users_burne__cargo_registry_s_180209850);
  }
  local_40 = *param_3 + uVar1;
  local_30 = 0;
  uStack_28 = 0;
  bVar2 = thunk_FUN_18016dc20(0,param_2,&local_40);
  if (param_2 == 0 && (bVar2 & 1) == 0) {
    if (local_38 < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(0,local_30,local_38,&PTR_s_C__Users_burne__cargo_registry_s_180209838);
    }
    uVar3 = local_30 + uVar1;
    if (CARRY8(local_30,uVar1)) {
                    /* WARNING: Subroutine does not return */
      FUN_180201b60("overflow",8,&PTR_s_C__Users_burne__cargo_registry_s_180209268);
    }
    param_3[2] = uVar3;
    if (uVar3 < (ulonglong)param_3[3]) {
      uVar3 = param_3[3];
    }
    param_3[3] = uVar3;
  }
  return;
}


