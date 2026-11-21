/* FUN_180112710 @ 180112710 */

/* WARNING: Removing unreachable block (ram,0x0001801127e3) */

undefined1 * FUN_180112710(undefined1 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  bool bVar30;
  bool bVar31;
  undefined1 uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  undefined1 *puVar36;
  byte bVar37;
  uint uVar38;
  byte bVar39;
  uint unaff_EBP;
  uint uVar40;
  bool bVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  
  lVar3 = param_2[2];
  local_68 = (undefined1  [16])0x0;
  puVar36 = local_68;
  uVar33 = FUN_180113060(param_2,puVar36,8);
  if (uVar33 == 8) {
    auVar42 = local_68;
LAB_180112759:
    auVar44[1] = 0;
    auVar44[0] = auVar42[8];
    auVar44[2] = auVar42[9];
    auVar44[3] = 0;
    auVar44[4] = auVar42[10];
    auVar44[5] = 0;
    auVar44[6] = auVar42[0xb];
    auVar44[7] = 0;
    auVar44[8] = auVar42[0xc];
    auVar44[9] = 0;
    auVar44[10] = auVar42[0xd];
    auVar44[0xb] = 0;
    auVar44[0xc] = auVar42[0xe];
    auVar44[0xd] = 0;
    auVar44[0xe] = auVar42[0xf];
    auVar44[0xf] = 0;
    auVar43 = pshuflw(auVar44,auVar44,0xb1);
    auVar44 = pshufhw(auVar43,auVar43,0xb1);
    auVar21[0xd] = 0;
    auVar21._0_13_ = auVar42._0_13_;
    auVar21[0xe] = auVar42[7];
    auVar22[0xc] = auVar42[6];
    auVar22._0_12_ = auVar42._0_12_;
    auVar22._13_2_ = auVar21._13_2_;
    auVar23[0xb] = 0;
    auVar23._0_11_ = auVar42._0_11_;
    auVar23._12_3_ = auVar22._12_3_;
    auVar24[10] = auVar42[5];
    auVar24._0_10_ = auVar42._0_10_;
    auVar24._11_4_ = auVar23._11_4_;
    auVar25[9] = 0;
    auVar25._0_9_ = auVar42._0_9_;
    auVar25._10_5_ = auVar24._10_5_;
    auVar26[8] = auVar42[4];
    auVar26._0_8_ = auVar42._0_8_;
    auVar26._9_6_ = auVar25._9_6_;
    auVar27._7_8_ = 0;
    auVar27._0_7_ = auVar26._8_7_;
    auVar28._1_8_ = SUB158(auVar27 << 0x40,7);
    auVar28[0] = auVar42[3];
    auVar28._9_6_ = 0;
    auVar29._1_10_ = SUB1510(auVar28 << 0x30,5);
    auVar29[0] = auVar42[2];
    auVar29._11_4_ = 0;
    auVar43._3_12_ = SUB1512(auVar29 << 0x20,3);
    auVar43[2] = auVar42[1];
    auVar43[0] = auVar42[0];
    auVar43[1] = 0;
    auVar43[0xf] = 0;
    auVar42 = pshuflw(auVar43,auVar43,0xb1);
    auVar42 = pshufhw(auVar42,auVar42,0xb1);
    sVar5 = auVar42._0_2_;
    sVar6 = auVar42._2_2_;
    sVar7 = auVar42._4_2_;
    sVar8 = auVar42._6_2_;
    sVar9 = auVar42._8_2_;
    sVar10 = auVar42._10_2_;
    sVar11 = auVar42._12_2_;
    sVar12 = auVar42._14_2_;
    sVar13 = auVar44._0_2_;
    sVar14 = auVar44._2_2_;
    sVar15 = auVar44._4_2_;
    sVar16 = auVar44._6_2_;
    sVar17 = auVar44._8_2_;
    sVar18 = auVar44._10_2_;
    sVar19 = auVar44._12_2_;
    sVar20 = auVar44._14_2_;
    uVar35 = param_2[1];
    uVar33 = param_2[2];
    if (uVar33 != uVar35) {
      if (uVar35 <= uVar33) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar33,uVar35,&PTR_s_C__Users_burne__cargo_registry_s_18023f118);
      }
      lVar4 = *param_2;
      if (*(char *)(lVar4 + uVar33) == '/') {
        uVar1 = uVar33 + 1;
        param_2[2] = uVar1;
        if (uVar1 == uVar35) {
LAB_1801128d1:
          param_2[2] = uVar1;
          uVar40 = 0;
          bVar31 = false;
LAB_1801129b9:
          bVar30 = bVar31;
          bVar37 = (byte)uVar40;
          if (!bVar30) goto LAB_1801129c7;
        }
        else {
          uVar34 = uVar1;
          if (uVar35 <= uVar1) goto LAB_180112a91;
          cVar2 = *(char *)(lVar4 + 1 + uVar33);
          uVar34 = uVar33 + 2;
          param_2[2] = uVar34;
          bVar37 = cVar2 - 0x30;
          if (9 < bVar37) goto LAB_1801128d1;
          bVar31 = true;
          uVar40 = 0;
          bVar30 = false;
          if (bVar37 < 0x81) {
            if (uVar34 == uVar35) {
LAB_18011291f:
              param_2[2] = uVar34;
              bVar41 = false;
            }
            else {
              if (uVar35 <= uVar34) goto LAB_180112a91;
              cVar2 = *(char *)(lVar4 + uVar34);
              param_2[2] = uVar33 + 3;
              bVar39 = cVar2 - 0x30;
              unaff_EBP = (uint)bVar39;
              if (9 < bVar39) goto LAB_18011291f;
              bVar41 = true;
              uVar34 = uVar33 + 3;
            }
            uVar40 = (uint)bVar37;
            if (bVar41) {
              uVar38 = unaff_EBP & 0xff;
              uVar40 = uVar38 + (uint)bVar37 * 10;
              if (0x80 < uVar40) goto LAB_1801129c7;
              if (uVar34 == uVar35) {
LAB_180112971:
                bVar37 = (byte)uVar38;
                param_2[2] = uVar34;
                bVar41 = false;
              }
              else {
                if (uVar35 <= uVar34) goto LAB_180112a91;
                cVar2 = *(char *)(lVar4 + uVar34);
                param_2[2] = uVar34 + 1;
                bVar37 = cVar2 - 0x30;
                uVar38 = (uint)bVar37;
                if (9 < bVar37) goto LAB_180112971;
                bVar41 = true;
                uVar34 = uVar34 + 1;
              }
              if (bVar41) {
                uVar40 = (uint)bVar37 + uVar40 * 10;
                if (0x80 < uVar40) goto LAB_1801129c7;
                if (uVar34 != uVar35) {
                  if (uVar35 <= uVar34) {
LAB_180112a91:
                    /* WARNING: Subroutine does not return */
                    FUN_180201d02(uVar34,uVar35,&PTR_s_C__Users_burne__cargo_registry_s_18023f118);
                  }
                  cVar2 = *(char *)(lVar4 + uVar34);
                  param_2[2] = uVar34 + 1;
                  if ((byte)(cVar2 - 0x30U) < 10) goto LAB_1801129c7;
                }
                param_2[2] = uVar34;
              }
            }
            goto LAB_1801129b9;
          }
LAB_1801129c7:
          bVar37 = (byte)uVar40;
          param_2[2] = uVar1;
        }
        if (bVar30) {
          if (0x80 < bVar37) {
                    /* WARNING: Subroutine does not return */
            FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,local_78,&DAT_18023ef28
                          ,&PTR_s_C__Users_burne__cargo_registry_s_18023f040);
          }
          param_1[1] = (0 < sVar5) * (sVar5 < 0x100) * auVar42[0] - (0xff < sVar5);
          param_1[2] = (0 < sVar6) * (sVar6 < 0x100) * auVar42[2] - (0xff < sVar6);
          param_1[3] = (0 < sVar7) * (sVar7 < 0x100) * auVar42[4] - (0xff < sVar7);
          param_1[4] = (0 < sVar8) * (sVar8 < 0x100) * auVar42[6] - (0xff < sVar8);
          param_1[5] = (0 < sVar9) * (sVar9 < 0x100) * auVar42[8] - (0xff < sVar9);
          param_1[6] = (0 < sVar10) * (sVar10 < 0x100) * auVar42[10] - (0xff < sVar10);
          param_1[7] = (0 < sVar11) * (sVar11 < 0x100) * auVar42[0xc] - (0xff < sVar11);
          param_1[8] = (0 < sVar12) * (sVar12 < 0x100) * auVar42[0xe] - (0xff < sVar12);
          param_1[9] = (0 < sVar13) * (sVar13 < 0x100) * auVar44[0] - (0xff < sVar13);
          param_1[10] = (0 < sVar14) * (sVar14 < 0x100) * auVar44[2] - (0xff < sVar14);
          param_1[0xb] = (0 < sVar15) * (sVar15 < 0x100) * auVar44[4] - (0xff < sVar15);
          param_1[0xc] = (0 < sVar16) * (sVar16 < 0x100) * auVar44[6] - (0xff < sVar16);
          param_1[0xd] = (0 < sVar17) * (sVar17 < 0x100) * auVar44[8] - (0xff < sVar17);
          param_1[0xe] = (0 < sVar18) * (sVar18 < 0x100) * auVar44[10] - (0xff < sVar18);
          param_1[0xf] = (0 < sVar19) * (sVar19 < 0x100) * auVar44[0xc] - (0xff < sVar19);
          param_1[0x10] = (0 < sVar20) * (sVar20 < 0x100) * auVar44[0xe] - (0xff < sVar20);
          param_1[0x11] = bVar37;
          uVar32 = 1;
          goto LAB_1801129ea;
        }
      }
    }
  }
  else if (((ulonglong)puVar36 & 1) == 0) {
    uVar35 = param_2[1];
    uVar34 = param_2[2];
    if (uVar34 != uVar35) {
      if (uVar35 <= uVar34) goto LAB_180112a91;
      if (*(char *)(*param_2 + uVar34) == ':') {
        uVar1 = uVar34 + 1;
        param_2[2] = uVar1;
        if (uVar1 != uVar35) {
          if (uVar35 <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_180201d02(uVar1,uVar35,&PTR_s_C__Users_burne__cargo_registry_s_18023f118);
          }
          if (*(char *)(*param_2 + uVar1) == ':') {
            param_2[2] = uVar34 + 2;
            local_58 = 0;
            uStack_50 = 0;
            uVar35 = FUN_180113060(param_2,&local_58,8 - uVar33);
            if (8 < uVar33) {
                    /* WARNING: Subroutine does not return */
              FUN_180201a30(0,uVar33,8,&PTR_s_C__Users_burne__cargo_registry_s_18023f0b8);
            }
            if (8 < uVar35) {
                    /* WARNING: Subroutine does not return */
              FUN_180201a30(0,uVar35,8,&PTR_s_C__Users_burne__cargo_registry_s_18023f0a0);
            }
            if (8 < uVar35 + uVar33) {
                    /* WARNING: Subroutine does not return */
              FUN_180201ec0("assertion failed: head.len() + tail.len() <= 8",0x2e,
                            &PTR_s_C__Users_burne__cargo_registry_s_18023f100);
            }
            local_78 = (undefined1  [16])0x0;
            memcpy(local_78,local_68,uVar33 * 2);
            memcpy(local_78 + (uint)((8 - (int)uVar35) * 2),&local_58,uVar35 * 2);
            auVar42 = local_78;
            goto LAB_180112759;
          }
        }
      }
    }
  }
  param_2[2] = lVar3;
  uVar32 = 0;
LAB_1801129ea:
  *param_1 = uVar32;
  return param_1;
}


