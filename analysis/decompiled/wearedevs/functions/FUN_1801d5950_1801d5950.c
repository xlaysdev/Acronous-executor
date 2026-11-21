/* FUN_1801d5950 @ 1801d5950 */

undefined8 FUN_1801d5950(undefined8 *param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined8 local_b0;
  int local_a8 [8];
  HANDLE local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined1 local_74;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  
  uVar5 = *param_2;
  uVar7 = param_2[2];
  uVar13 = 0x2000;
  local_80 = param_1;
  if ((param_3 & 1) == 0) {
LAB_1801d59cb:
    local_70 = param_3 ^ 1;
    if (uVar5 - uVar7 < 0x20) {
      puVar9 = param_2;
      uVar12 = FUN_1801d5770(param_1);
      if ((uVar12 & 1) != 0) {
        return 1;
      }
      if (puVar9 == (ulonglong *)0x0) {
        return 0;
      }
      uVar6 = *param_2;
      uVar12 = param_2[2];
      goto LAB_1801d5a0e;
    }
  }
  else {
    if (param_4 < 0xfffffffffffffc00) {
      uVar12 = param_4 + 0x400;
      uVar6 = (ulonglong)((uint)uVar12 & 0x1fff);
      uVar8 = (param_4 - uVar6) + 0x2400;
      if (uVar12 <= uVar8) {
        uVar13 = uVar8;
      }
      if (uVar6 == 0) {
        uVar13 = uVar12;
      }
      if (param_4 == 0) goto LAB_1801d59cb;
    }
    local_70 = 0;
  }
  uVar12 = uVar7;
  uVar6 = uVar5;
LAB_1801d5a0e:
  local_88 = (HANDLE)*local_80;
  iVar14 = 0;
  uVar8 = 0;
  local_68 = uVar5;
  local_60 = uVar7;
  while( true ) {
    if ((uVar12 == uVar6) && (uVar6 == local_68)) {
      puVar9 = param_2;
      uVar5 = FUN_1801d5770(local_80);
      if ((uVar5 & 1) != 0) {
        return 1;
      }
      uVar12 = param_2[2];
      if (puVar9 == (ulonglong *)0x0) {
        return 0;
      }
      uVar6 = *param_2;
    }
    uVar5 = param_2[1];
    if (uVar12 == uVar6) {
      uVar7 = uVar6 * 2;
      if (uVar6 * 2 < uVar6 + 0x20) {
        uVar7 = uVar6 + 0x20;
      }
      FUN_180200d80(local_a8,uVar6,uVar5,uVar7,1,1);
      if (local_a8[0] == 1) {
        return 1;
      }
      uVar5 = CONCAT44(local_a8[3],local_a8[2]);
      param_2[1] = uVar5;
      *param_2 = uVar7;
    }
    else {
      uVar7 = *param_2;
    }
    uVar11 = uVar7 - uVar12;
    if (uVar13 < uVar7 - uVar12) {
      uVar11 = uVar13;
    }
    local_a8[0] = 0x103;
    local_a8[1] = 0;
    local_a8[2] = 0;
    local_a8[3] = 0;
    uVar6 = 0xffffffff;
    if (uVar11 < 0xffffffff) {
      uVar6 = uVar11;
    }
    iVar3 = NtReadFile(local_88,0,0,0,local_a8,uVar5 + uVar12,(int)uVar6,0,0);
    if (iVar3 == 0x103) {
      WaitForSingleObject(local_88,0xffffffff);
      iVar3 = local_a8[0];
    }
    if (iVar3 == -0x3fffffef) break;
    if (iVar3 == 0x103) {
      local_78 = 0;
      local_74 = 0;
      local_b0 = FUN_1801d62f0(&local_78,
                               "fatal runtime error: I/O error: operation failed to complete synchronously, aborting\nstrings passed to WinAPI cannot contain NULs"
                               ,0xab);
      FUN_1801e2b90(&local_b0);
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(7);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (iVar3 < 0) {
      uVar4 = RtlNtStatusToDosError(iVar3);
      cVar2 = FUN_1801daa10(uVar4);
      if (cVar2 == '\v') {
        param_2[2] = uVar12;
        return 0;
      }
      param_2[2] = uVar12;
      return 1;
    }
    uVar5 = CONCAT44(local_a8[3],local_a8[2]);
    uVar12 = uVar12 + uVar5;
    param_2[2] = uVar12;
    if (uVar5 == 0) {
      return 0;
    }
    uVar10 = uVar8;
    if (uVar8 < uVar5) {
      uVar10 = uVar5;
    }
    uVar8 = uVar10 - uVar5;
    iVar14 = iVar14 + 1;
    if (uVar11 <= uVar5) {
      iVar14 = 0;
    }
    uVar6 = uVar7;
    if ((local_70 & 1) != 0) {
      uVar7 = uVar13;
      if (1 < iVar14) {
        uVar7 = 0xffffffffffffffff;
      }
      if (uVar10 == uVar11) {
        uVar7 = uVar13;
      }
      uVar13 = uVar7;
      if (((uVar5 == uVar11) && (uVar7 <= uVar11)) && (uVar13 = uVar7 * 2, (longlong)uVar7 < 0)) {
        uVar13 = 0xffffffffffffffff;
      }
    }
  }
  param_2[2] = uVar12;
  return 0;
}


