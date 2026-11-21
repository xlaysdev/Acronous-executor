/* FUN_180053a00 @ 180053a00 */

void FUN_180053a00(undefined8 *param_1,longlong param_2,ulonglong param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  int *piVar45;
  longlong lVar46;
  ulonglong uVar47;
  longlong lVar48;
  ulonglong uVar49;
  
  uVar7 = *(ulonglong *)(param_2 + 0x50);
  if (uVar7 <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_180201d02(param_3,uVar7,&PTR_s_C__Users_burne__cargo_registry_s_180208f08);
  }
  lVar8 = *(longlong *)(param_2 + 0x48);
  *(undefined4 *)(lVar8 + param_3 * 4) = 0xffff;
  uVar47 = *(ulonglong *)(param_2 + 0x28);
  if (param_4 < uVar47) {
    lVar9 = *(longlong *)(param_2 + 0x20);
    lVar48 = param_4 * 0x68;
    uVar10 = *(undefined8 *)(lVar9 + 0x60 + lVar48);
    puVar1 = (undefined8 *)(lVar9 + 0x50 + lVar48);
    uVar29 = *puVar1;
    uVar30 = puVar1[1];
    puVar1 = (undefined8 *)(lVar9 + 0x40 + lVar48);
    uVar31 = *puVar1;
    uVar32 = puVar1[1];
    uVar33 = *(undefined8 *)(lVar9 + lVar48);
    uVar34 = ((undefined8 *)(lVar9 + lVar48))[1];
    puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar48);
    uVar35 = *puVar1;
    uVar36 = puVar1[1];
    puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar48);
    uVar37 = *puVar1;
    uVar38 = puVar1[1];
    puVar1 = (undefined8 *)(lVar9 + 0x30 + lVar48);
    uVar39 = *puVar1;
    uVar40 = puVar1[1];
    uVar47 = uVar47 - 1;
    lVar46 = uVar47 * 0x68;
    uVar11 = *(undefined8 *)(lVar9 + 0x60 + lVar46);
    puVar2 = (undefined4 *)(lVar9 + 0x50 + lVar46);
    uVar14 = *puVar2;
    uVar15 = puVar2[1];
    uVar16 = puVar2[2];
    uVar17 = puVar2[3];
    puVar2 = (undefined4 *)(lVar9 + 0x40 + lVar46);
    uVar18 = *puVar2;
    uVar19 = puVar2[1];
    uVar20 = puVar2[2];
    uVar21 = puVar2[3];
    puVar2 = (undefined4 *)(lVar9 + lVar46);
    uVar22 = puVar2[1];
    uVar23 = puVar2[2];
    uVar24 = puVar2[3];
    puVar3 = (undefined4 *)(lVar9 + 0x10 + lVar46);
    uVar25 = *puVar3;
    uVar26 = puVar3[1];
    uVar27 = puVar3[2];
    uVar28 = puVar3[3];
    puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar46);
    uVar41 = *puVar1;
    uVar42 = puVar1[1];
    puVar1 = (undefined8 *)(lVar9 + 0x30 + lVar46);
    uVar43 = *puVar1;
    uVar44 = puVar1[1];
    puVar3 = (undefined4 *)(lVar9 + lVar48);
    *puVar3 = *puVar2;
    puVar3[1] = uVar22;
    puVar3[2] = uVar23;
    puVar3[3] = uVar24;
    puVar2 = (undefined4 *)(lVar9 + 0x10 + lVar48);
    *puVar2 = uVar25;
    puVar2[1] = uVar26;
    puVar2[2] = uVar27;
    puVar2[3] = uVar28;
    puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar48);
    *puVar1 = uVar41;
    puVar1[1] = uVar42;
    puVar1 = (undefined8 *)(lVar9 + 0x30 + lVar48);
    *puVar1 = uVar43;
    puVar1[1] = uVar44;
    puVar2 = (undefined4 *)(lVar9 + 0x40 + lVar48);
    *puVar2 = uVar18;
    puVar2[1] = uVar19;
    puVar2[2] = uVar20;
    puVar2[3] = uVar21;
    puVar2 = (undefined4 *)(lVar9 + 0x50 + lVar48);
    *puVar2 = uVar14;
    puVar2[1] = uVar15;
    puVar2[2] = uVar16;
    puVar2[3] = uVar17;
    *(undefined8 *)(lVar9 + 0x60 + lVar48) = uVar11;
    *(ulonglong *)(param_2 + 0x28) = uVar47;
    if (param_4 < uVar47) {
      piVar45 = (int *)(lVar9 + lVar48);
      uVar4 = *(ushort *)(piVar45 + 0x18);
      uVar12 = (ulonglong)(*(ushort *)(param_2 + 0x58) & uVar4);
      while( true ) {
        do {
          uVar49 = uVar12;
          uVar12 = 0;
        } while (uVar7 <= uVar49);
        uVar5 = *(ushort *)(lVar8 + uVar49 * 4);
        if (uVar47 <= uVar5 && uVar5 != 0xffff) break;
        uVar12 = uVar49 + 1;
      }
      *(short *)(lVar8 + uVar49 * 4) = (short)param_4;
      *(ushort *)(lVar8 + 2 + uVar49 * 4) = uVar4;
      if (*piVar45 == 1) {
        uVar12 = *(ulonglong *)(piVar45 + 2);
        uVar49 = *(ulonglong *)(param_2 + 0x40);
        if (uVar49 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar12,uVar49,&PTR_s_C__Users_burne__cargo_registry_s_180208f20);
        }
        uVar13 = *(ulonglong *)(piVar45 + 4);
        lVar9 = *(longlong *)(param_2 + 0x38);
        *(undefined8 *)(lVar9 + uVar12 * 0x48) = 0;
        *(ulonglong *)(lVar9 + 8 + uVar12 * 0x48) = param_4;
        if (uVar49 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar13,uVar49,&PTR_s_C__Users_burne__cargo_registry_s_180208f38);
        }
        *(undefined8 *)(lVar9 + 0x10 + uVar13 * 0x48) = 0;
        *(ulonglong *)(lVar9 + 0x18 + uVar13 * 0x48) = param_4;
      }
    }
    if (uVar47 == 0) {
LAB_180053bf9:
      param_1[0xc] = uVar10;
      param_1[10] = uVar29;
      param_1[0xb] = uVar30;
      param_1[8] = uVar31;
      param_1[9] = uVar32;
      param_1[6] = uVar39;
      param_1[7] = uVar40;
      param_1[4] = uVar37;
      param_1[5] = uVar38;
      param_1[2] = uVar35;
      param_1[3] = uVar36;
      *param_1 = uVar33;
      param_1[1] = uVar34;
      return;
    }
    uVar4 = *(ushort *)(param_2 + 0x58);
    while( true ) {
      uVar47 = param_3 + 1;
      if (uVar7 <= uVar47) {
        uVar47 = 0;
      }
      sVar6 = *(short *)(lVar8 + uVar47 * 4);
      if ((sVar6 == -1) ||
         (uVar5 = *(ushort *)(lVar8 + 2 + uVar47 * 4),
         ((int)uVar47 - (uint)(uVar5 & uVar4) & (uint)uVar4) == 0)) goto LAB_180053bf9;
      if (uVar7 <= param_3) break;
      *(short *)(lVar8 + param_3 * 4) = sVar6;
      *(ushort *)(lVar8 + 2 + param_3 * 4) = uVar5;
      *(undefined4 *)(lVar8 + uVar47 * 4) = 0xffff;
      param_3 = uVar47;
    }
  }
  else {
    FUN_180201680(param_4,uVar47);
  }
                    /* WARNING: Subroutine does not return */
  FUN_180201d02(param_3);
}


