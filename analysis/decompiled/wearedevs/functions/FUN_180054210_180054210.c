/* FUN_180054210 @ 180054210 */

undefined8
FUN_180054210(longlong *param_1,longlong *param_2,longlong *param_3,undefined2 param_4,
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
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined6 uStack_4e;
  
  uVar17 = param_1[5];
  if (uVar17 < 0x8000) {
    lVar8 = *param_2;
    lVar9 = param_2[1];
    lVar10 = param_2[2];
    lVar11 = param_2[3];
    lVar12 = *param_3;
    lVar13 = param_3[1];
    lVar14 = param_3[2];
    lVar15 = param_3[3];
    lVar5 = param_3[4];
    if (uVar17 == param_1[3]) {
      FUN_1801fa370(param_1 + 3);
    }
    lVar6 = param_1[4];
    lVar18 = uVar17 * 0x68;
    *(ulonglong *)(lVar6 + 0x60 + lVar18) = CONCAT62(uStack_4e,param_4);
    plVar1 = (longlong *)(lVar6 + 0x50 + lVar18);
    *plVar1 = lVar10;
    plVar1[1] = lVar11;
    plVar1 = (longlong *)(lVar6 + 0x40 + lVar18);
    *plVar1 = lVar8;
    plVar1[1] = lVar9;
    plVar1 = (longlong *)(lVar6 + 0x30 + lVar18);
    *plVar1 = lVar15;
    plVar1[1] = lVar5;
    plVar1 = (longlong *)(lVar6 + 0x20 + lVar18);
    *plVar1 = lVar13;
    plVar1[1] = lVar14;
    puVar2 = (undefined8 *)(lVar6 + 0x10 + lVar18);
    *puVar2 = uStack_a0;
    puVar2[1] = lVar12;
    *(undefined8 *)(lVar6 + lVar18) = 0;
    ((undefined8 *)(lVar6 + lVar18))[1] = uStack_a8;
    param_1[5] = uVar17 + 1;
    lVar5 = param_1[9];
    uVar7 = param_1[10];
    uVar17 = uVar17 & 0xffffffff;
    uVar19 = 0;
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
      uVar19 = uVar19 + 1;
      uVar4 = *(undefined2 *)(lVar5 + 2 + param_5 * 4);
      *(short *)(lVar5 + param_5 * 4) = (short)uVar17;
      *(undefined2 *)(lVar5 + 2 + param_5 * 4) = param_4;
      param_5 = param_5 + 1;
      uVar17 = (ulonglong)uVar3;
      param_4 = uVar4;
      if (uVar7 <= param_5) {
        param_5 = 0;
      }
    }
    *(short *)(lVar5 + param_5 * 4) = (short)uVar17;
    *(undefined2 *)(lVar5 + 2 + param_5 * 4) = param_4;
    uVar16 = 0;
    if (((param_6 | 0x7f < uVar19) == 1) && (*param_1 == 0)) {
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


