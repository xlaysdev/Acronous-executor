/* FUN_180090610 @ 180090610 */

undefined8 *
FUN_180090610(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
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
  undefined8 *puVar23;
  undefined8 uVar24;
  
  uVar24 = param_2[0xf];
  uVar22 = FUN_18003ed70(param_2[0xe],uVar24,param_4,param_5,param_6);
  uVar1 = param_2[0xc];
  uVar2 = param_2[0xd];
  uVar3 = param_2[10];
  uVar4 = param_2[0xb];
  uVar5 = param_2[8];
  uVar6 = param_2[9];
  uVar14 = *param_2;
  uVar15 = param_2[1];
  uVar16 = param_2[2];
  uVar17 = param_2[3];
  uVar18 = param_2[4];
  uVar19 = param_2[5];
  uVar20 = param_2[6];
  uVar21 = param_2[7];
  FUN_180027490();
  puVar23 = (undefined8 *)thunk_FUN_1801d32d0(0x58,8);
  if (puVar23 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x58);
  }
  puVar23[10] = param_3[10];
  uVar7 = param_3[9];
  puVar23[8] = param_3[8];
  puVar23[9] = uVar7;
  uVar7 = *param_3;
  uVar8 = param_3[1];
  uVar9 = param_3[2];
  uVar10 = param_3[3];
  uVar11 = param_3[4];
  uVar12 = param_3[5];
  uVar13 = param_3[7];
  puVar23[6] = param_3[6];
  puVar23[7] = uVar13;
  puVar23[4] = uVar11;
  puVar23[5] = uVar12;
  puVar23[2] = uVar9;
  puVar23[3] = uVar10;
  *puVar23 = uVar7;
  puVar23[1] = uVar8;
  param_1[0xe] = uVar22;
  param_1[0xf] = uVar24;
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar2;
  param_1[10] = uVar3;
  param_1[0xb] = uVar4;
  param_1[8] = uVar5;
  param_1[9] = uVar6;
  param_1[6] = uVar20;
  param_1[7] = uVar21;
  param_1[4] = uVar18;
  param_1[5] = uVar19;
  param_1[2] = uVar16;
  param_1[3] = uVar17;
  *param_1 = uVar14;
  param_1[1] = uVar15;
  param_1[0x10] = puVar23;
  return param_1;
}


