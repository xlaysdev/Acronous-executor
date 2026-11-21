/* FUN_18009cd60 @ 18009cd60 */

void FUN_18009cd60(ulonglong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  int iVar4;
  byte bVar5;
  ulonglong uVar6;
  longlong lVar7;
  int *piVar8;
  ulonglong uVar9;
  int *piVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  bool bVar13;
  int iVar14;
  int extraout_XMM0_Dc;
  int iVar15;
  int extraout_XMM0_Dd;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_98;
  byte bStack_90;
  uint uStack_8f;
  uint3 uStack_8b;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined7 uStack_77;
  ulonglong local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar3 = *(ulonglong *)(param_2 + 0x10);
  lVar7 = uVar3 * 0x68;
  if (0x13b13b13b13b13b < uVar3) {
    uVar11 = 0;
LAB_18009cd9d:
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(uVar11,lVar7);
  }
  piVar10 = *(int **)(param_2 + 8);
  if (lVar7 == 0) {
    uVar6 = 8;
    uVar9 = 0;
  }
  else {
    FUN_180027490();
    uVar11 = 8;
    uVar6 = thunk_FUN_1801d32d0(lVar7,8);
    if (uVar6 == 0) goto LAB_18009cd9d;
    uVar9 = uVar3;
  }
  piVar8 = piVar10 + uVar3 * 0x1a;
  local_70 = 0;
  uVar12 = uVar9;
  for (; (bVar13 = uVar12 != 0, uVar12 = uVar12 - 1, bVar13 && (piVar10 != piVar8));
      piVar10 = piVar10 + 0x1a) {
    if (uVar9 <= local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(local_70,uVar9,&PTR_s_C__Users_burne__rustup_toolchain_18020f8a0);
    }
    iVar4 = piVar10[0x18];
    if (*(undefined8 **)(piVar10 + 0x10) == (undefined8 *)0x0) {
      bVar5 = *(byte *)(piVar10 + 0x12);
      local_68 = 0;
      local_50 = 0;
    }
    else {
      (*(code *)**(undefined8 **)(piVar10 + 0x10))
                (&local_98,piVar10 + 0x16,*(undefined8 *)(piVar10 + 0x12),
                 *(undefined8 *)(piVar10 + 0x14));
      local_50 = local_98;
      local_60 = local_88;
      local_58 = uStack_80;
      local_68 = (ulonglong)uStack_8f << 8 | (ulonglong)uStack_8b << 0x28;
      bVar5 = bStack_90;
    }
    local_68 = bVar5 | local_68;
    uVar11 = (*(code *)**(undefined8 **)(piVar10 + 6))
                       (&local_98,piVar10 + 0xc,*(undefined8 *)(piVar10 + 8),
                        *(undefined8 *)(piVar10 + 10));
    local_78 = (undefined1)piVar10[0xe];
    if (*piVar10 != 1) {
      iVar14 = extraout_XMM0_Dc;
      iVar15 = extraout_XMM0_Dd;
    }
    else {
      uVar11 = *(undefined8 *)(piVar10 + 2);
      iVar14 = piVar10[4];
      iVar15 = piVar10[5];
    }
    lVar7 = local_70 * 0x68;
    local_70 = local_70 + 1;
    *(ulonglong *)(uVar6 + lVar7) = (ulonglong)(*piVar10 == 1);
    puVar1 = (undefined8 *)(uVar6 + 8 + lVar7);
    *puVar1 = uVar11;
    *(int *)(puVar1 + 1) = iVar14;
    *(int *)((longlong)puVar1 + 0xc) = iVar15;
    local_e8 = (undefined4)local_98;
    uStack_e4 = (undefined4)((ulonglong)local_98 >> 0x20);
    uStack_e0 = (undefined4)CONCAT41(uStack_8f,bStack_90);
    uStack_dc = (undefined4)(CONCAT35(uStack_8b,CONCAT41(uStack_8f,bStack_90)) >> 0x20);
    puVar2 = (undefined4 *)(uVar6 + 0x18 + lVar7);
    *puVar2 = local_e8;
    puVar2[1] = uStack_e4;
    puVar2[2] = uStack_e0;
    puVar2[3] = uStack_dc;
    puVar1 = (undefined8 *)(uVar6 + 0x28 + lVar7);
    *puVar1 = local_88;
    puVar1[1] = uStack_80;
    *(ulonglong *)(uVar6 + 0x38 + lVar7) = CONCAT71(uStack_77,local_78);
    *(undefined8 *)(uVar6 + 0x40 + lVar7) = local_50;
    *(ulonglong *)(uVar6 + 0x48 + lVar7) = local_68;
    *(undefined8 *)(uVar6 + 0x50 + lVar7) = local_60;
    *(undefined8 *)(uVar6 + 0x58 + lVar7) = local_58;
    *(short *)(uVar6 + 0x60 + lVar7) = (short)iVar4;
  }
  param_1[2] = uVar3;
  *param_1 = uVar9;
  param_1[1] = uVar6;
  return;
}


