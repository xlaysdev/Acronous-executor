/* FUN_1801dffb0 @ 1801dffb0 */

void FUN_1801dffb0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  DWORD DVar5;
  char *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 local_2d0 [512];
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  char *local_b8;
  longlong local_b0;
  char **local_a8;
  undefined1 *local_a0;
  ulonglong *local_98;
  code *local_90;
  undefined8 local_88;
  code *local_80;
  undefined8 local_78;
  undefined1 *local_70;
  ulonglong local_68;
  undefined8 *local_60;
  longlong local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_2 == (longlong *)0x0) {
    lVar9 = 0;
    if (DAT_1802fd820 == 0) {
LAB_1801e003e:
      pcVar6 = (char *)0x0;
      goto LAB_1801e0040;
    }
    param_3 = *(ulonglong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar8 = *(ulonglong *)(param_3 + 0x128);
  }
  else {
    lVar9 = *param_2;
    pcVar6 = *(char **)(lVar9 + 0x18);
    if (pcVar6 != (char *)0x0) {
      lVar9 = *(longlong *)(lVar9 + 0x20) + -1;
      goto LAB_1801e0040;
    }
    param_3 = DAT_1802fd820;
    if (DAT_1802fd820 == 0) goto LAB_1801e003e;
    uVar8 = *(ulonglong *)(lVar9 + 0x10);
  }
  pcVar6 = (char *)0x0;
  if (DAT_1802fd820 == uVar8) {
    pcVar6 = "main";
  }
  lVar9 = 4;
LAB_1801e0040:
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  lVar4 = param_1[3];
  local_b8 = "<unnamed>library\\std\\src\\panicking.rs";
  if (pcVar6 != (char *)0x0) {
    local_b8 = pcVar6;
  }
  local_b0 = 9;
  if (pcVar6 != (char *)0x0) {
    local_b0 = lVar9;
  }
  DVar5 = GetCurrentThreadId();
  if (DVar5 == 0) {
    lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar8 = *(ulonglong *)(lVar9 + 0x128);
    if (uVar8 == 0) {
      uVar7 = DAT_1802fd828;
      do {
        if (uVar7 == 0xffffffffffffffff) {
          FUN_180200880();
          goto LAB_1801e0346;
        }
        uVar8 = uVar7 + 1;
        LOCK();
        bVar10 = uVar7 == DAT_1802fd828;
        if (bVar10) {
          DAT_1802fd828 = uVar8;
        }
        else {
          uVar7 = DAT_1802fd828;
        }
        UNLOCK();
      } while (!bVar10);
      *(ulonglong *)(lVar9 + 0x128) = uVar8;
    }
  }
  else {
    uVar8 = (ulonglong)DVar5;
  }
  local_68 = uVar8;
  memset(local_2d0,0,0x200);
  local_c8 = 0x200;
  local_c0 = 0;
  local_a8 = &local_b8;
  local_a0 = &LAB_1801e1670;
  local_98 = &local_68;
  local_90 = FUN_1801ee720;
  local_80 = FUN_1801e1600;
  local_70 = &LAB_1801e1670;
  local_d0 = local_2d0;
  local_88 = uVar1;
  local_78 = uVar2;
  lVar9 = FUN_1801d65b0(&local_d0,&DAT_1802907a0,&local_a8);
  if (lVar9 == 0) {
    param_3 = local_c0;
    if (0x200 < local_c0) {
LAB_1801e0346:
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(0,param_3,0x200,&DAT_180290788);
    }
    lVar9 = (**(code **)(lVar4 + 0x38))(uVar3,local_2d0);
    if (((uint)lVar9 & 3) != 1) {
      return;
    }
    local_58 = lVar9 + -1;
    local_50 = *(undefined8 **)(lVar9 + -1);
    local_60 = *(undefined8 **)(lVar9 + 7);
    if ((code *)*local_60 != (code *)0x0) {
      (*(code *)*local_60)(local_50);
    }
  }
  else {
    if (((uint)lVar9 & 3) == 1) {
      local_60 = (undefined8 *)(lVar9 + -1);
      local_58 = *(undefined8 *)(lVar9 + -1);
      local_50 = *(undefined8 **)(lVar9 + 7);
      if ((code *)*local_50 != (code *)0x0) {
        (*(code *)*local_50)(local_58);
      }
      if (local_50[1] != 0) {
        thunk_FUN_1801d3330(local_58,local_50[1],local_50[2]);
      }
      thunk_FUN_1801d3330(local_60,0x18,8);
    }
    local_a8 = &local_b8;
    local_a0 = &LAB_1801e1670;
    local_98 = &local_68;
    local_90 = FUN_1801ee720;
    local_80 = FUN_1801e1600;
    local_70 = &LAB_1801e1670;
    local_88 = uVar1;
    local_78 = uVar2;
    lVar9 = (**(code **)(lVar4 + 0x48))(uVar3,&DAT_1802907a0,&local_a8);
    if (((uint)lVar9 & 3) != 1) {
      return;
    }
    local_58 = lVar9 + -1;
    local_50 = *(undefined8 **)(lVar9 + -1);
    local_60 = *(undefined8 **)(lVar9 + 7);
    if ((code *)*local_60 != (code *)0x0) {
      (*(code *)*local_60)(local_50);
    }
  }
  if (local_60[1] != 0) {
    thunk_FUN_1801d3330(local_50,local_60[1],local_60[2]);
  }
  thunk_FUN_1801d3330(local_58,0x18,8);
  return;
}


