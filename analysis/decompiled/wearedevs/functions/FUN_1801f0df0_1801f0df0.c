/* FUN_1801f0df0 @ 1801f0df0 */

ulonglong FUN_1801f0df0(char *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  bool bVar14;
  
  uVar12 = param_2[1];
  if (uVar12 == 0) {
    lVar13 = *param_2;
    bVar14 = false;
    uVar7 = 0;
    uVar5 = 0;
    lVar11 = 0;
    if (*param_1 == '\0') goto LAB_1801f0f79;
  }
  else {
    bVar14 = *(char *)*param_2 == '0';
    if (*param_1 == '\0') {
      lVar13 = *param_2;
      uVar7 = *(uint *)(param_1 + 0x10);
      if (0x22 < uVar7 - 2) goto LAB_1801f1030;
      uVar5 = 0;
      uVar4 = 0;
      if (uVar7 < 0xb) {
        do {
          uVar10 = *(byte *)(lVar13 + uVar5) - 0x30;
          if (uVar7 <= uVar10) goto LAB_1801f0fc0;
          iVar2 = (uint)uVar4 * (uVar7 & 0xffff);
          uVar3 = (ushort)iVar2;
          if (((short)((uint)iVar2 >> 0x10) != 0) ||
             (uVar8 = (ushort)uVar10, uVar4 = uVar3 + uVar8, CARRY2(uVar3,uVar8)))
          goto LAB_1801f0ff7;
          uVar5 = uVar5 + 1;
        } while (uVar12 != uVar5);
      }
      else {
        do {
          bVar1 = *(byte *)(lVar13 + uVar5);
          uVar10 = bVar1 - 0x30;
          if (0x39 < bVar1) {
            uVar10 = (bVar1 - 0x41 & 0xffffffdf) + 10;
          }
          if (uVar7 <= uVar10) goto LAB_1801f0fc0;
          iVar2 = (uint)uVar4 * (uVar7 & 0xffff);
          uVar3 = (ushort)iVar2;
          if (((short)((uint)iVar2 >> 0x10) != 0) ||
             (uVar4 = uVar3 + (ushort)uVar10, CARRY2(uVar3,(ushort)uVar10))) {
LAB_1801f0ff7:
            *param_2 = lVar13 + uVar5 + 1;
            param_2[1] = ~uVar5 + uVar12;
            return 0;
          }
          uVar5 = uVar5 + 1;
        } while (uVar12 != uVar5);
      }
      lVar13 = lVar13 + uVar12;
      uVar5 = uVar12;
LAB_1801f0f79:
      *param_2 = lVar13;
      param_2[1] = 0;
      goto joined_r0x0001801f0fdc;
    }
    lVar13 = *param_2;
    uVar10 = *(uint *)(param_1 + 0x10);
    if (0x22 < uVar10 - 2) {
LAB_1801f1030:
      *param_2 = lVar13 + 1;
      param_2[1] = uVar12 - 1;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0("to_digit: invalid radix -- radix must be in the range 2 to 36 inclusive",0x8f,
                    &PTR_s_library_core_src_char_methods_rs_180293a20);
    }
    uVar5 = 0;
    uVar7 = 0;
    if (uVar10 < 0xb) {
      do {
        uVar9 = *(byte *)(lVar13 + uVar5) - 0x30;
        if (uVar10 <= uVar9) goto LAB_1801f0f97;
        if (*(ulonglong *)(param_1 + 8) <= uVar5) goto LAB_1801f100d;
        uVar5 = uVar5 + 1;
        uVar7 = uVar7 * uVar10 + uVar9;
      } while (uVar12 != uVar5);
    }
    else {
      do {
        bVar1 = *(byte *)(lVar13 + uVar5);
        uVar9 = bVar1 - 0x30;
        if (0x39 < bVar1) {
          uVar9 = (bVar1 - 0x41 & 0xffffffdf) + 10;
        }
        if (uVar10 <= uVar9) goto LAB_1801f0f97;
        if (*(ulonglong *)(param_1 + 8) <= uVar5) {
LAB_1801f100d:
          *param_2 = lVar13 + uVar5 + 1;
          param_2[1] = ~uVar5 + uVar12;
          return 0;
        }
        uVar5 = uVar5 + 1;
        uVar7 = uVar7 * uVar10 + uVar9;
      } while (uVar12 != uVar5);
    }
    lVar13 = lVar13 + uVar12;
    lVar11 = 0;
    uVar5 = uVar12;
  }
  goto LAB_1801f0fa3;
LAB_1801f0fc0:
  *param_2 = lVar13 + uVar5;
  param_2[1] = uVar12 - uVar5;
joined_r0x0001801f0fdc:
  uVar12 = CONCAT62((int6)((ulonglong)param_2 >> 0x10),1);
  if (uVar5 == 0) {
    return 0;
  }
  goto LAB_1801f0fde;
LAB_1801f0f97:
  lVar13 = lVar13 + uVar5;
  lVar11 = uVar12 - uVar5;
LAB_1801f0fa3:
  *param_2 = lVar13;
  param_2[1] = lVar11;
  uVar12 = (ulonglong)(uVar7 < 0x10000);
  uVar6 = 0;
  if (uVar5 != 0) {
LAB_1801f0fde:
    uVar7 = 0;
    if (param_1[0x14] != '\0') {
      uVar7 = (uint)uVar12;
    }
    if (!bVar14) {
      uVar7 = (uint)uVar12;
    }
    uVar6 = (ulonglong)uVar7;
    if (uVar5 == 1) {
      uVar6 = uVar12 & 0xffffffff;
    }
  }
  return uVar6;
}


