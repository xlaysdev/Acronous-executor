/* FUN_18016c380 @ 18016c380 */

void FUN_18016c380(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = param_1[2];
  lVar2 = *param_1;
  uStack_30 = (undefined4)param_1[1];
  uStack_2c = *(undefined4 *)((longlong)param_1 + 0xc);
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_38 = lVar2;
  if (*(char *)(lVar1 + 0xb8) != '\x01') {
    if (*(char *)(lVar1 + 0xb8) == '\x02') {
      local_38 = 0;
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180261488,param_1[1]);
      }
      FUN_180173c90(lVar2);
      uVar4 = lVar2 + 0x18;
      uVar3 = FUN_18017bd40(lVar2 + 0xe8);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (*(ulonglong *)(lVar2 + 0x90) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar4,*(ulonglong *)(lVar2 + 0x90),
                      &PTR_s_C__Users_burne__cargo_registry_s_1802626d8);
      }
      FUN_18017ca80(*(longlong *)(lVar2 + 0x88) + uVar4 * 0x10 + 8,lVar2 + 0x150);
      return;
    }
    FUN_1801d8880(lVar1 + 0x70,FUN_18016d130);
    *(undefined1 *)(lVar1 + 0xb8) = 1;
  }
  lVar2 = local_38;
  local_48 = CONCAT44(uStack_2c,uStack_30);
  local_38 = 0;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_1802614a0);
  }
  if (*(char *)(lVar1 + 0xb6) == '\x02') {
    FUN_180173c90(lVar2);
    uVar4 = lVar2 + 0x18;
    uVar3 = FUN_18017bd40(lVar2 + 0xe8);
    if ((uVar3 & 1) != 0) {
      if (*(ulonglong *)(lVar2 + 0x90) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar4,*(ulonglong *)(lVar2 + 0x90),
                      &PTR_s_C__Users_burne__cargo_registry_s_1802626d8);
      }
      FUN_18017ca80(*(longlong *)(lVar2 + 0x88) + uVar4 * 0x10 + 8,lVar2 + 0x150);
    }
  }
  else {
    local_50 = lVar2;
    local_40 = local_28;
    if (*(longlong *)(lVar1 + 0x98) == 0) {
      FUN_180173c90(lVar2);
      uVar4 = lVar2 + 0x18;
      uVar3 = FUN_18017bd40(lVar2 + 0xe8);
      if ((uVar3 & 1) != 0) {
        if (*(ulonglong *)(lVar2 + 0x90) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar4,*(ulonglong *)(lVar2 + 0x90),
                        &PTR_s_C__Users_burne__cargo_registry_s_1802626d8);
        }
        FUN_18017ca80(*(longlong *)(lVar2 + 0x88) + uVar4 * 0x10 + 8,lVar2 + 0x150);
      }
    }
    else {
      FUN_180165060(&local_50,*(longlong *)(lVar1 + 0x98));
    }
  }
  return;
}


