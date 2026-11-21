/* FUN_180100f10 @ 180100f10 */

ulonglong * FUN_180100f10(ulonglong *param_1,int *param_2)

{
  int iVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  ulonglong uVar16;
  ulonglong uVar17;
  int *piVar18;
  ulonglong unaff_RBX;
  ulonglong uVar19;
  longlong lVar20;
  undefined1 auVar21 [16];
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  int *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  iVar1 = *param_2;
  piVar18 = param_2;
  if (iVar1 == 1) {
    unaff_RBX = FUN_1801010f0(param_2 + 2);
    local_50 = unaff_RBX;
  }
  uVar19 = (ulonglong)(iVar1 == 1);
  local_58 = uVar19;
  uVar16 = FUN_1801011d0();
  if ((uVar16 & 1) == 0) {
    local_48 = piVar18;
    if (*(longlong *)(param_2 + 8) != 0) {
      uVar19 = *(ulonglong *)(param_2 + 6);
      lVar20 = *(longlong *)(param_2 + 8) << 3;
      do {
        uVar16 = uVar19;
        uVar17 = FUN_180101230(&local_48,uVar19,3);
        if ((uVar17 & 1) != 0) {
          param_1[1] = uVar16;
          *param_1 = 2;
          FUN_180101150(&local_48);
          if (local_58 == 0) {
            return param_1;
          }
          goto LAB_180101021;
        }
        local_60 = uVar16;
        FUN_180101100(&local_60);
        uVar19 = uVar19 + 8;
        lVar20 = lVar20 + -8;
      } while (lVar20 != 0);
      unaff_RBX = local_50;
      uVar19 = local_58;
    }
    iVar1 = param_2[0xb];
    *param_1 = uVar19;
    param_1[1] = unaff_RBX;
    param_1[2] = (ulonglong)local_48;
    uVar19 = *(ulonglong *)(param_2 + 10);
    auVar6._8_6_ = 0;
    auVar6._0_8_ = uVar19;
    auVar6[0xe] = (char)(uVar19 >> 0x38);
    auVar7._8_4_ = 0;
    auVar7._0_8_ = uVar19;
    auVar7[0xc] = (char)(uVar19 >> 0x30);
    auVar7._13_2_ = auVar6._13_2_;
    auVar8._8_4_ = 0;
    auVar8._0_8_ = uVar19;
    auVar8._12_3_ = auVar7._12_3_;
    auVar9._8_2_ = 0;
    auVar9._0_8_ = uVar19;
    auVar9[10] = (char)(uVar19 >> 0x28);
    auVar9._11_4_ = auVar8._11_4_;
    auVar10._8_2_ = 0;
    auVar10._0_8_ = uVar19;
    auVar10._10_5_ = auVar9._10_5_;
    auVar11[8] = (char)(uVar19 >> 0x20);
    auVar11._0_8_ = uVar19;
    auVar11._9_6_ = auVar10._9_6_;
    auVar13._7_8_ = 0;
    auVar13._0_7_ = auVar11._8_7_;
    auVar14._1_8_ = SUB158(auVar13 << 0x40,7);
    auVar14[0] = (char)(uVar19 >> 0x18);
    auVar14._9_6_ = 0;
    auVar15._1_10_ = SUB1510(auVar14 << 0x30,5);
    auVar15[0] = (char)(uVar19 >> 0x10);
    auVar15._11_4_ = 0;
    auVar12[2] = (char)(uVar19 >> 8);
    auVar12._0_2_ = (ushort)uVar19;
    auVar12._3_12_ = SUB1512(auVar15 << 0x20,3);
    auVar21._0_2_ = (ushort)uVar19 & 0xff;
    auVar21._2_13_ = auVar12._2_13_;
    auVar21[0xf] = 0;
    auVar21 = pshuflw(auVar21,auVar21,0xc6);
    sVar2 = auVar21._0_2_;
    sVar3 = auVar21._2_2_;
    sVar4 = auVar21._4_2_;
    sVar5 = auVar21._6_2_;
    *(uint *)(param_1 + 3) =
         CONCAT13((0 < sVar5) * (sVar5 < 0x100) * auVar21[6] - (0xff < sVar5),
                  CONCAT12((0 < sVar4) * (sVar4 < 0x100) * auVar21[4] - (0xff < sVar4),
                           CONCAT11((0 < sVar3) * (sVar3 < 0x100) * auVar21[2] - (0xff < sVar3),
                                    (0 < sVar2) * (sVar2 < 0x100) * auVar21[0] - (0xff < sVar2))));
    *(short *)((longlong)param_1 + 0x1c) = (short)iVar1;
  }
  else {
    param_1[1] = (ulonglong)piVar18;
    *param_1 = 2;
    if (uVar19 != 0) {
LAB_180101021:
      FUN_180101100(&local_50);
    }
  }
  return param_1;
}


