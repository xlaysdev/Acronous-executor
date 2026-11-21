/* FUN_180170660 @ 180170660 */

void FUN_180170660(char *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  code *pcVar7;
  undefined4 uVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 unaff_R14;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  int local_b0;
  int local_ac;
  longlong local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  plVar1 = (longlong *)(lVar4 + 0x70);
  local_60 = param_3;
  local_58 = param_4;
  if (*(char *)(lVar4 + 0xb8) != '\x01') {
    if (*(char *)(lVar4 + 0xb8) == '\x02') {
      local_49 = 1;
                    /* WARNING: Subroutine does not return */
      FUN_1802008b0(&PTR_s_C__Users_burne__rustup_toolchain_180261f40);
    }
    local_49 = 1;
    FUN_1801d8880(plVar1,FUN_18016d130);
    *(undefined1 *)(lVar4 + 0xb8) = 1;
    param_2 = (undefined4)CONCAT71((int7)((ulonglong)unaff_R14 >> 8),(char)param_2);
  }
  if (*(char *)(lVar4 + 0xb6) != '\x02') {
    local_49 = 1;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0("Cannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks."
                  ,0x183,param_5);
  }
  *(char *)(lVar4 + 0xb6) = (char)param_2;
  cVar3 = *param_1;
  plVar5 = *(longlong **)(param_1 + 8);
  plVar10 = plVar5 + 0x5d;
  if (cVar3 != '\0') {
    plVar10 = plVar5 + 0x45;
  }
  local_49 = 1;
  uVar8 = FUN_18016f900(plVar10);
  if ((*(byte *)(lVar4 + 0xa8) & 1) == 0) {
    local_49 = 1;
    local_50 = uVar8;
    plVar10 = (longlong *)FUN_18009ec50(0);
    if (plVar10 == (longlong *)0x0) {
      local_49 = 1;
                    /* WARNING: Subroutine does not return */
      FUN_1802008b0(&PTR_s_C__Users_burne__rustup_toolchain_180261f40);
    }
    local_a8 = *plVar10;
    lStack_a0 = plVar10[1];
    *plVar10 = *plVar10 + 1;
    iVar13 = DAT_1802fd4d8;
    LOCK();
    DAT_1802fd4d8 = DAT_1802fd4d8 + 1;
    UNLOCK();
    local_49 = 1;
    uVar11 = FUN_1801804c0(&local_a8,iVar13);
    bVar6 = uVar11 >> 0x20 != 0;
    iVar9 = (int)uVar11;
    iVar13 = 1;
    if (bVar6 || iVar9 != 0) {
      iVar13 = iVar9;
    }
    local_b0 = 0;
    uVar8 = local_50;
    if (bVar6 || iVar9 != 0) {
      local_b0 = (int)(uVar11 >> 0x20);
    }
  }
  else {
    iVar13 = *(int *)(lVar4 + 0xb0);
    local_b0 = *(int *)(lVar4 + 0xac);
  }
  *(undefined4 *)(lVar4 + 0xa8) = 1;
  *(undefined4 *)(lVar4 + 0xac) = uVar8;
  *(undefined4 *)(lVar4 + 0xb0) = param_2;
  if (*plVar1 != 0) {
    local_49 = 1;
                    /* WARNING: Subroutine does not return */
    FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_180261528);
  }
  *plVar1 = -1;
  uVar12 = 1;
  LOCK();
  lVar2 = *plVar5;
  *plVar5 = *plVar5 + 1;
  UNLOCK();
  if (cVar3 == '\0') {
    if (-1 < lVar2) {
      uVar12 = 0;
      goto LAB_1801707ec;
    }
  }
  else if (-1 < lVar2) {
LAB_1801707ec:
    local_c8 = *(longlong *)(lVar4 + 0x78);
    local_c0 = *(undefined8 *)(lVar4 + 0x80);
    *(undefined8 *)(lVar4 + 0x78) = uVar12;
    *(longlong **)(lVar4 + 0x80) = plVar5;
    *plVar1 = *plVar1 + 1;
    if (*(longlong *)(lVar4 + 0x88) == -1) {
      local_a8 = local_c8;
      lStack_a0 = local_c0;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0("reached max `enter` depth",0x33,
                    &PTR_s_C__Users_burne__cargo_registry_s_180261560);
    }
    local_b8 = *(longlong *)(lVar4 + 0x88) + 1;
    local_ac = 1;
    if (local_b0 != 0 || iVar13 != 0) {
      local_ac = iVar13;
    }
    *(longlong *)(lVar4 + 0x88) = local_b8;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 8;
    local_70 = 0;
    local_a8 = 1;
    local_d0 = param_4;
    lStack_a0 = param_3;
    if (*(char *)(lVar4 + 0xb8) != '\x01') {
      if (*(char *)(lVar4 + 0xb8) == '\x02') {
        FUN_18016f640(&local_d0);
                    /* WARNING: Subroutine does not return */
        FUN_1802008b0(&PTR_s_C__Users_burne__rustup_toolchain_180261f40);
      }
      local_4a = 1;
      FUN_1801d8880(plVar1,FUN_18016d130);
      *(undefined1 *)(lVar4 + 0xb8) = 1;
    }
    local_4a = 0;
    FUN_180164b90(lVar4 + 0x98,&local_a8,&local_a8,param_4);
    FUN_18016eff0(&local_a8);
    local_49 = 0;
    FUN_18016f350(&local_c8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
}


