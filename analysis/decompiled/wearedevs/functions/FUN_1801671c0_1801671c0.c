/* FUN_1801671c0 @ 1801671c0 */

void FUN_1801671c0(char *param_1,undefined8 param_2,undefined4 param_3,char *param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  undefined8 local_30;
  undefined4 local_28;
  
  lVar6 = *(longlong *)(param_1 + 8);
  lVar8 = 0x220;
  if (*param_1 != '\0') {
    lVar8 = 0x160;
  }
  iVar2 = *(int *)(lVar6 + 0x98 + lVar8);
  if (iVar2 != 1000000000) {
    local_30 = FUN_1801e5a10(param_2,param_3,0,999999);
    uVar7 = *(ulonglong *)(lVar6 + 0x90 + lVar8);
    local_28 = param_3;
    uVar5 = FUN_1801df680(&local_30,uVar7,iVar2);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar5;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (uVar7 & 0xffffffff) / 1000000;
    auVar4 = auVar3 * ZEXT816(1000) + auVar4;
    uVar7 = auVar4._0_8_;
    if (0xfffffffffffffffc < uVar7) {
      uVar7 = 0xfffffffffffffffd;
    }
    if (auVar4._8_8_ != 0) {
      uVar7 = 0xfffffffffffffffd;
    }
    param_4 = param_1 + 0x10;
    uVar5 = *(ulonglong *)(param_1 + 0x28);
    while (uVar5 <= uVar7) {
      LOCK();
      uVar1 = *(ulonglong *)(param_1 + 0x28);
      bVar9 = uVar5 == uVar1;
      if (bVar9) {
        *(ulonglong *)(param_1 + 0x28) = uVar7;
      }
      else {
        uVar5 = uVar1;
      }
      UNLOCK();
      if (bVar9) {
        return;
      }
    }
    lVar6 = 0x220;
    if (*param_1 != '\0') {
      lVar6 = 0x160;
    }
    if (*(int *)(*(longlong *)(param_1 + 8) + 0x98 + lVar6) != 1000000000) {
      FUN_18016fc20(*(longlong *)(param_1 + 8) + lVar6 + 0x58);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180201b60("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                ,0x73,&PTR_s_C__Users_burne__cargo_registry_s_180260930,param_4);
}


