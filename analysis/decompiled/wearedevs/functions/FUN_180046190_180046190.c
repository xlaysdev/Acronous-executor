/* FUN_180046190 @ 180046190 */

undefined8
FUN_180046190(longlong *param_1,longlong *param_2,longlong *param_3,undefined2 param_4,
             ulonglong param_5,byte param_6)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ushort uVar3;
  undefined2 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined6 uStack_46;
  
  uVar19 = param_1[5];
  if (uVar19 < 0x8000) {
    lVar8 = *param_2;
    lVar9 = param_2[1];
    lVar10 = param_2[2];
    lVar11 = param_2[3];
    lVar12 = *param_3;
    lVar13 = param_3[1];
    lVar14 = param_3[2];
    lVar15 = param_3[3];
    lVar5 = param_3[4];
    if (uVar19 == param_1[3]) {
      FUN_1801fa370(param_1 + 3);
    }
    lVar6 = param_1[4];
    lVar17 = uVar19 * 0x68;
    *(ulonglong *)(lVar6 + 0x60 + lVar17) = CONCAT62(uStack_46,param_4);
    plVar1 = (longlong *)(lVar6 + 0x50 + lVar17);
    *plVar1 = lVar10;
    plVar1[1] = lVar11;
    plVar1 = (longlong *)(lVar6 + 0x40 + lVar17);
    *plVar1 = lVar8;
    plVar1[1] = lVar9;
    plVar1 = (longlong *)(lVar6 + 0x30 + lVar17);
    *plVar1 = lVar15;
    plVar1[1] = lVar5;
    plVar1 = (longlong *)(lVar6 + 0x20 + lVar17);
    *plVar1 = lVar13;
    plVar1[1] = lVar14;
    puVar2 = (undefined8 *)(lVar6 + 0x10 + lVar17);
    *puVar2 = uStack_98;
    puVar2[1] = lVar12;
    *(undefined8 *)(lVar6 + lVar17) = 0;
    ((undefined8 *)(lVar6 + lVar17))[1] = uStack_a0;
    param_1[5] = uVar19 + 1;
    lVar5 = param_1[9];
    uVar7 = param_1[10];
    uVar18 = 0;
    if (uVar7 <= param_5) {
      param_5 = 0;
    }
    while( true ) {
      if (uVar7 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar3 = *(ushort *)(lVar5 + param_5 * 4);
      if (uVar3 == 0xffff) break;
      uVar18 = uVar18 + 1;
      uVar4 = *(undefined2 *)(lVar5 + 2 + param_5 * 4);
      *(short *)(lVar5 + param_5 * 4) = (short)uVar19;
      *(undefined2 *)(lVar5 + 2 + param_5 * 4) = param_4;
      param_5 = param_5 + 1;
      uVar19 = (ulonglong)uVar3;
      param_4 = uVar4;
      if (uVar7 <= param_5) {
        param_5 = 0;
      }
    }
    *(short *)(lVar5 + param_5 * 4) = (short)uVar19;
    *(undefined2 *)(lVar5 + 2 + param_5 * 4) = param_4;
    uVar16 = 0;
    if (((param_6 | 0x7f < uVar18) == 1) && (*param_1 == 0)) {
      *param_1 = 1;
      uVar16 = 0;
    }
  }
  else {
    (**(code **)(*param_3 + 0x20))(param_3[3],param_3[1],param_3[2]);
    uVar16 = 1;
    if (*param_2 != 0) {
      (**(code **)(*param_2 + 0x20))(param_2[3],param_2[1],param_2[2]);
    }
  }
  return uVar16;
}


