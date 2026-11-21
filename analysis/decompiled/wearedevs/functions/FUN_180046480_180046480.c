/* FUN_180046480 @ 180046480 */

undefined8 * FUN_180046480(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 unaff_RSI;
  
  plVar7 = (longlong *)param_2[0x13];
  uVar8 = param_2[0x14];
  LOCK();
  lVar1 = *plVar7;
  *plVar7 = *plVar7 + 1;
  UNLOCK();
  if (*plVar7 == 0 || SCARRY8(lVar1,1) != *plVar7 < 0) {
LAB_180046588:
                    /* WARNING: Does not return */
    pcVar12 = (code *)invalidInstructionException();
    (*pcVar12)();
  }
  plVar9 = (longlong *)param_2[0x15];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    lVar1 = *plVar9;
    *plVar9 = *plVar9 + 1;
    UNLOCK();
    if (*plVar9 == 0 || SCARRY8(lVar1,1) != *plVar9 < 0) goto LAB_180046588;
    unaff_RSI = param_2[0x16];
  }
  uVar2 = *(undefined2 *)((longlong)param_2 + 0x94);
  uVar13 = *param_2;
  uVar14 = param_2[1];
  uVar15 = param_2[2];
  uVar16 = param_2[3];
  uVar17 = param_2[4];
  uVar18 = param_2[5];
  uVar19 = param_2[6];
  uVar20 = param_2[7];
  uVar3 = *(undefined4 *)(param_2 + 0x12);
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  uVar10 = param_2[0xb];
  uVar5 = *(undefined4 *)(param_2 + 10);
  uVar21 = param_2[8];
  uVar22 = param_2[9];
  uVar6 = *(undefined4 *)(param_2 + 0xe);
  uVar11 = param_2[0xd];
  param_1[0x15] = param_3[2];
  uVar23 = param_3[1];
  param_1[0x13] = *param_3;
  param_1[0x14] = uVar23;
  param_1[0x16] = plVar7;
  param_1[0x17] = uVar8;
  param_1[0x18] = plVar9;
  param_1[0x19] = unaff_RSI;
  *param_1 = uVar13;
  param_1[1] = uVar14;
  param_1[2] = uVar15;
  param_1[3] = uVar16;
  param_1[4] = uVar17;
  param_1[5] = uVar18;
  param_1[6] = uVar19;
  param_1[7] = uVar20;
  param_1[8] = uVar21;
  param_1[9] = uVar22;
  *(undefined4 *)(param_1 + 10) = uVar5;
  param_1[0xb] = uVar10;
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  param_1[0xd] = uVar11;
  *(undefined4 *)(param_1 + 0xe) = uVar6;
  uVar8 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar8;
  param_1[0x11] = param_2[0x11];
  *(undefined4 *)(param_1 + 0x12) = uVar3;
  *(undefined2 *)((longlong)param_1 + 0x94) = uVar2;
  *(undefined1 *)(param_1 + 0x71) = 0;
  return param_1;
}


