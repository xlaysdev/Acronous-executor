/* FUN_18005afd0 @ 18005afd0 */

void FUN_18005afd0(int *param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte bVar3;
  longlong local_40;
  ulonglong local_38;
  ulonglong local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  local_38 = uVar1 - uVar2;
  if (uVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(0,uVar2,uVar1,&PTR_s_C__Users_burne__cargo_registry_s_180209838);
  }
  local_40 = *param_3 + uVar2;
  local_30 = 0;
  uStack_28 = 0;
  if (*param_1 == 2) {
    bVar3 = FUN_18005a550(param_1 + 2,param_2,&local_40);
  }
  else {
    bVar3 = FUN_18005a640(0,param_2,&local_40);
  }
  if (param_2 == 0 && (bVar3 & 1) == 0) {
    if (local_38 < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(0,local_30,local_38,&PTR_s_C__Users_burne__cargo_registry_s_180209a30);
    }
    local_30 = local_30 + uVar2;
    if ((ulonglong)param_3[3] < local_30) {
      param_3[3] = local_30;
    }
    param_3[2] = local_30;
  }
  return;
}


