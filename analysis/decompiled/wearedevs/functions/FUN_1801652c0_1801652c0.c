/* FUN_1801652c0 @ 1801652c0 */

void FUN_1801652c0(longlong *param_1,ulonglong *param_2,int *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *local_38;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (param_3 == (int *)0x0) {
    lVar5 = *param_1;
  }
  else {
    lVar5 = *param_1;
    if ((*param_3 != 1) && (lVar5 == *(longlong *)(param_3 + 2))) {
      if (*(longlong *)(param_3 + 4) != 0) {
        local_29 = 1;
                    /* WARNING: Subroutine does not return */
        FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_180260408);
      }
      param_3[4] = -1;
      param_3[5] = -1;
      lVar1 = *(longlong *)(param_3 + 6);
      if (lVar1 != 0) {
        uVar3 = *(ulonglong *)(lVar1 + 0x40);
        uVar2 = *(ulonglong *)(lVar1 + 0x58);
        if (uVar2 == uVar3) {
          local_38 = param_2;
          FUN_18016f7d0(lVar1 + 0x40);
          uVar3 = *(ulonglong *)(lVar1 + 0x40);
          uVar2 = *(ulonglong *)(lVar1 + 0x58);
        }
        *(ulonglong *)(lVar1 + 0x58) = uVar2 + 1;
        uVar2 = uVar2 + *(longlong *)(lVar1 + 0x50);
        uVar4 = 0;
        if (uVar3 <= uVar2) {
          uVar4 = uVar3;
        }
        *(ulonglong **)(*(longlong *)(lVar1 + 0x48) + (uVar2 - uVar4) * 8) = param_2;
        *(undefined8 *)(lVar5 + 0x98) = *(undefined8 *)(lVar1 + 0x58);
        *(longlong *)(param_3 + 4) = *(longlong *)(param_3 + 4) + 1;
        return;
      }
      param_3[4] = 0;
      param_3[5] = 0;
      LOCK();
      uVar3 = *param_2;
      *param_2 = *param_2 - 0x40;
      UNLOCK();
      if (uVar3 < 0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: prev.ref_count() >= 1",0x27,
                      &PTR_s_C__Users_burne__cargo_registry_s_180263618);
      }
      if ((uVar3 & 0xffffffffffffffc0) == 0x40) {
                    /* WARNING: Could not recover jumptable at 0x000180165427. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_2[2] + 0x10))(param_2);
        return;
      }
      return;
    }
  }
  local_29 = 0;
  FUN_180176d70(lVar5 + 0x1a8,param_2);
  if (*(longlong *)(lVar5 + 0x220) == 0) {
    local_29 = 0;
    FUN_1801691b0(*(longlong *)(lVar5 + 0x228) + 0x10);
  }
  else {
    local_29 = 0;
    local_38 = (ulonglong *)FUN_18018cbb0();
    if (local_38 != (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("failed to wake I/O driver",0x19,&local_38,&PTR_FUN_180262428,
                    &PTR_s_C__Users_burne__cargo_registry_s_180262610);
    }
  }
  return;
}


