/* FUN_180126ec0 @ 180126ec0 */

void FUN_180126ec0(ulonglong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  int iVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int *piVar10;
  int *piVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  bool bVar14;
  int iVar15;
  int extraout_XMM0_Dc;
  int iVar16;
  int extraout_XMM0_Dd;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_90;
  byte bStack_88;
  uint uStack_87;
  uint3 uStack_83;
  undefined8 local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar3 = *(ulonglong *)(param_2 + 0x10);
  lVar8 = uVar3 * 0x60;
  if (0x155555555555555 < uVar3) {
    uVar12 = 0;
LAB_180126f04:
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(uVar12,lVar8);
  }
  piVar10 = *(int **)(param_2 + 8);
  if (lVar8 == 0) {
    uVar6 = 8;
    uVar13 = 0;
  }
  else {
    FUN_180027490();
    uVar12 = 8;
    uVar6 = thunk_FUN_1801d32d0(lVar8,8);
    if (uVar6 == 0) goto LAB_180126f04;
    uVar13 = uVar3;
  }
  piVar11 = piVar10 + uVar3 * 0x18;
  uVar7 = 0;
  uVar9 = uVar13;
  for (; (bVar14 = uVar9 != 0, uVar9 = uVar9 - 1, bVar14 && (piVar10 != piVar11));
      piVar10 = piVar10 + 0x18) {
    local_70 = uVar7;
    if (uVar13 <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar7,uVar13,&PTR_s_C__Users_burne__rustup_toolchain_180242790);
    }
    iVar4 = piVar10[0x16];
    if (*(undefined8 **)(piVar10 + 0xe) == (undefined8 *)0x0) {
      bVar5 = *(byte *)(piVar10 + 0x10);
      local_68 = 0;
      local_50 = 0;
    }
    else {
      (*(code *)**(undefined8 **)(piVar10 + 0xe))
                (&local_90,piVar10 + 0x14,*(undefined8 *)(piVar10 + 0x10),
                 *(undefined8 *)(piVar10 + 0x12));
      local_50 = local_90;
      local_60 = local_80;
      local_58 = uStack_78;
      local_68 = (ulonglong)uStack_87 << 8 | (ulonglong)uStack_83 << 0x28;
      bVar5 = bStack_88;
    }
    local_68 = bVar5 | local_68;
    uVar12 = (*(code *)**(undefined8 **)(piVar10 + 6))
                       (&local_90,piVar10 + 0xc,*(undefined8 *)(piVar10 + 8),
                        *(undefined8 *)(piVar10 + 10));
    if (*piVar10 != 1) {
      iVar15 = extraout_XMM0_Dc;
      iVar16 = extraout_XMM0_Dd;
    }
    else {
      uVar12 = *(undefined8 *)(piVar10 + 2);
      iVar15 = piVar10[4];
      iVar16 = piVar10[5];
    }
    uVar7 = local_70 + 1;
    lVar8 = local_70 * 0x60;
    *(ulonglong *)(uVar6 + lVar8) = (ulonglong)(*piVar10 == 1);
    puVar1 = (undefined8 *)(uVar6 + 8 + lVar8);
    *puVar1 = uVar12;
    *(int *)(puVar1 + 1) = iVar15;
    *(int *)((longlong)puVar1 + 0xc) = iVar16;
    local_d8 = (undefined4)local_90;
    uStack_d4 = (undefined4)((ulonglong)local_90 >> 0x20);
    uStack_d0 = (undefined4)CONCAT41(uStack_87,bStack_88);
    uStack_cc = (undefined4)(CONCAT35(uStack_83,CONCAT41(uStack_87,bStack_88)) >> 0x20);
    puVar2 = (undefined4 *)(uVar6 + 0x18 + lVar8);
    *puVar2 = local_d8;
    puVar2[1] = uStack_d4;
    puVar2[2] = uStack_d0;
    puVar2[3] = uStack_cc;
    puVar1 = (undefined8 *)(uVar6 + 0x28 + lVar8);
    *puVar1 = local_80;
    puVar1[1] = uStack_78;
    *(undefined8 *)(uVar6 + 0x38 + lVar8) = local_50;
    *(ulonglong *)(uVar6 + 0x40 + lVar8) = local_68;
    *(undefined8 *)(uVar6 + 0x48 + lVar8) = local_60;
    *(undefined8 *)(uVar6 + 0x50 + lVar8) = local_58;
    *(short *)(uVar6 + 0x58 + lVar8) = (short)iVar4;
  }
  param_1[2] = uVar3;
  *param_1 = uVar13;
  param_1[1] = uVar6;
  return;
}


