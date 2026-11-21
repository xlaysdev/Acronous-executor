/* FUN_1800f04f0 @ 1800f04f0 */

undefined8 FUN_1800f04f0(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 local_38;
  ulonglong local_30;
  ulonglong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: !self.context.is_null()",0x29,
                  &PTR_s_C__Users_burne__cargo_registry_s_180216370);
  }
  local_28 = 0;
  uStack_20 = 0;
  local_38 = param_2;
  local_30 = param_3;
  bVar1 = FUN_18005a460(0,lVar3,&local_38);
  if (lVar3 == 0 && (bVar1 & 1) == 0) {
    if (local_30 < local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(0,local_28,local_30,&PTR_s_C__Users_burne__cargo_registry_s_180209a30);
    }
    lVar3 = 0;
    uVar4 = local_28;
  }
  else {
    uVar4 = 0;
  }
  lVar5 = 0xd00000003;
  if ((bVar1 & 1) == 0) {
    lVar5 = lVar3;
  }
  uVar2 = 1;
  if (lVar5 == 0) {
    if (param_3 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(0,uVar4,param_3,&PTR_s_C__Users_burne__cargo_registry_s_180216970);
    }
    uVar2 = 0;
  }
  return uVar2;
}


