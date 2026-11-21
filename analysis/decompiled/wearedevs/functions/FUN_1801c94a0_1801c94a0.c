/* FUN_1801c94a0 @ 1801c94a0 */

void FUN_1801c94a0(ulonglong *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uStack_850;
  undefined4 local_848;
  undefined4 uStack_844;
  undefined4 uStack_840;
  undefined4 uStack_83c;
  longlong local_838 [2];
  undefined4 auStack_828 [508];
  ulonglong local_38;
  
  uVar4 = *param_1;
  uVar3 = uVar4 & 0xfffffffffffffff8;
  uVar5 = *(ulonglong *)(uVar3 + 0x810);
  plVar6 = (longlong *)(uVar5 & 0xfffffffffffffff8);
  if (plVar6 != (longlong *)0x0) {
    do {
      LOCK();
      uVar1 = *param_1;
      if (uVar4 == uVar1) {
        *param_1 = uVar5;
      }
      UNLOCK();
      if (uVar4 == uVar1) {
        if (uVar4 == param_1[0x10]) {
          LOCK();
          if (uVar4 == param_1[0x10]) {
            param_1[0x10] = uVar5;
          }
          UNLOCK();
        }
        thunk_FUN_1801d3330(uVar3,0x818,8);
        lVar7 = *plVar6;
        local_838[0] = lVar7;
        memcpy(local_838 + 1,plVar6 + 1,0x808);
        if (lVar7 == 0) break;
        if (0x40 < local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(0,local_38,0x40,&PTR_s_C__Users_burne__cargo_registry_s_180288700);
        }
        if (local_38 != 0) {
          lVar7 = local_38 * 0x20;
          lVar8 = 0;
          do {
            pcVar2 = *(code **)((longlong)local_838 + lVar8);
            uStack_850 = *(undefined8 *)((longlong)local_838 + lVar8 + 8);
            local_848 = *(undefined4 *)((longlong)auStack_828 + lVar8);
            uStack_844 = *(undefined4 *)((longlong)auStack_828 + lVar8 + 4);
            uStack_840 = *(undefined4 *)((longlong)auStack_828 + lVar8 + 8);
            uStack_83c = *(undefined4 *)((longlong)auStack_828 + lVar8 + 0xc);
            *(code **)((longlong)local_838 + lVar8) = FUN_180027490;
            *(undefined8 *)((longlong)local_838 + lVar8 + 8) = 0;
            *(undefined4 *)((longlong)auStack_828 + lVar8) = 0;
            *(undefined4 *)((longlong)auStack_828 + lVar8 + 4) = 0;
            *(undefined4 *)((longlong)auStack_828 + lVar8 + 8) = 0;
            *(undefined4 *)((longlong)auStack_828 + lVar8 + 0xc) = 0;
            (*pcVar2)(&uStack_850);
            lVar8 = lVar8 + 0x20;
          } while (lVar7 != lVar8);
        }
      }
      uVar4 = *param_1;
      uVar3 = uVar4 & 0xfffffffffffffff8;
      uVar5 = *(ulonglong *)(uVar3 + 0x810);
      plVar6 = (longlong *)(uVar5 & 0xfffffffffffffff8);
    } while (plVar6 != (longlong *)0x0);
  }
  thunk_FUN_1801d3330(*param_1 & 0xfffffffffffffff8,0x818,8);
  return;
}


