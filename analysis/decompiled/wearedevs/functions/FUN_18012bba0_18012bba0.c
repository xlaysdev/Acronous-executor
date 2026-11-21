/* FUN_18012bba0 @ 18012bba0 */

longlong FUN_18012bba0(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined2 uVar5;
  ushort uVar6;
  undefined2 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined6 uStack_6e;
  
  plVar8 = (longlong *)*param_1;
  lVar26 = param_1[1];
  lVar9 = param_1[2];
  uVar10 = param_1[3];
  uVar11 = param_1[4];
  uVar12 = plVar8[5];
  if (uVar12 < 0x8000) {
    uVar5 = *(undefined2 *)(param_1 + 6);
    uVar27 = param_1[5];
    bVar4 = *(byte *)((longlong)param_1 + 0x32);
    lVar21 = *param_2;
    uVar16 = *(undefined4 *)((longlong)param_2 + 4);
    lVar22 = param_2[1];
    uVar17 = *(undefined4 *)((longlong)param_2 + 0xc);
    lVar23 = param_2[2];
    uVar18 = *(undefined4 *)((longlong)param_2 + 0x14);
    lVar24 = param_2[3];
    uVar19 = *(undefined4 *)((longlong)param_2 + 0x1c);
    lVar13 = param_2[4];
    if (uVar12 == plVar8[3]) {
      FUN_1801fa370(plVar8 + 3);
    }
    lVar14 = plVar8[4];
    lVar25 = uVar12 * 0x68;
    *(ulonglong *)(lVar14 + 0x60 + lVar25) = CONCAT62(uStack_6e,uVar5);
    puVar1 = (undefined8 *)(lVar14 + 0x50 + lVar25);
    *puVar1 = uVar10;
    puVar1[1] = uVar11;
    plVar2 = (longlong *)(lVar14 + 0x40 + lVar25);
    *plVar2 = lVar26;
    plVar2[1] = lVar9;
    local_98 = (undefined4)lVar13;
    uStack_94 = (undefined4)((ulonglong)lVar13 >> 0x20);
    puVar3 = (undefined4 *)(lVar14 + 0x30 + lVar25);
    *puVar3 = (int)lVar24;
    puVar3[1] = uVar19;
    puVar3[2] = local_98;
    puVar3[3] = uStack_94;
    puVar3 = (undefined4 *)(lVar14 + 0x20 + lVar25);
    *puVar3 = (int)lVar22;
    puVar3[1] = uVar17;
    puVar3[2] = (int)lVar23;
    puVar3[3] = uVar18;
    puVar3 = (undefined4 *)(lVar14 + 0x10 + lVar25);
    *puVar3 = uStack_c0;
    puVar3[1] = uStack_bc;
    puVar3[2] = (int)lVar21;
    puVar3[3] = uVar16;
    puVar3 = (undefined4 *)(lVar14 + lVar25);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = uStack_c8;
    puVar3[3] = uStack_c4;
    plVar8[5] = uVar12 + 1;
    lVar26 = plVar8[9];
    uVar15 = plVar8[10];
    uVar28 = 0;
    uVar20 = uVar12 & 0xffffffff;
    if (uVar15 <= uVar27) {
      uVar27 = 0;
    }
    while( true ) {
      if (uVar15 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar6 = *(ushort *)(lVar26 + uVar27 * 4);
      if (uVar6 == 0xffff) break;
      uVar28 = uVar28 + 1;
      uVar7 = *(undefined2 *)(lVar26 + 2 + uVar27 * 4);
      *(short *)(lVar26 + uVar27 * 4) = (short)uVar20;
      *(undefined2 *)(lVar26 + 2 + uVar27 * 4) = uVar5;
      uVar27 = uVar27 + 1;
      uVar5 = uVar7;
      uVar20 = (ulonglong)uVar6;
      if (uVar15 <= uVar27) {
        uVar27 = 0;
      }
    }
    *(short *)(lVar26 + uVar27 * 4) = (short)uVar20;
    *(undefined2 *)(lVar26 + 2 + uVar27 * 4) = uVar5;
    if (((bVar4 | 0x7f < uVar28) == 1) && (*plVar8 == 0)) {
      *plVar8 = 1;
    }
    if ((ulonglong)plVar8[5] <= uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar12,plVar8[5],&PTR_s_C__Users_burne__cargo_registry_s_180243078);
    }
    lVar26 = lVar25 + plVar8[4] + 0x18;
  }
  else {
    (**(code **)(*param_2 + 0x20))(param_2[3],param_2[1],param_2[2]);
    if (lVar26 != 0) {
      (**(code **)(lVar26 + 0x20))(uVar11,lVar9,uVar10);
    }
    lVar26 = 0;
  }
  return lVar26;
}


