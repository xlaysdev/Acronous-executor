/* FUN_180121f60 @ 180121f60 */

void FUN_180121f60(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  ulonglong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar24 [16];
  undefined1 auVar23 [16];
  undefined1 auVar22 [16];
  undefined1 auVar21 [16];
  undefined1 auVar20 [16];
  undefined1 auVar19 [16];
  undefined1 auVar18 [16];
  undefined1 auVar17 [16];
  byte bVar25;
  char cVar28;
  byte bVar27;
  char cVar30;
  byte bVar29;
  char cVar32;
  byte bVar31;
  char cVar34;
  byte bVar33;
  char cVar36;
  byte bVar35;
  char cVar38;
  byte bVar37;
  byte bVar39;
  undefined1 auVar26 [16];
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  undefined1 auVar66 [16];
  longlong local_f8;
  char *pcStack_f0;
  char *local_e8;
  undefined8 uStack_e0;
  char local_d8;
  longlong local_c8;
  undefined8 local_c0;
  char *local_b8;
  char *local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  char local_88;
  undefined8 local_80;
  
  local_80 = 0xfffffffffffffffe;
  FUN_18012ac20(&local_a8,param_1,&PTR_PTR_1802fb5f8);
  if (local_88 != '\x02') {
    (**(code **)(local_a8 + 0x20))(uStack_90,uStack_a0,local_98);
  }
  FUN_18012ac20(&local_a8,param_1,&PTR_PTR_1802fb618);
  if (local_88 != '\x02') {
    (**(code **)(local_a8 + 0x20))(uStack_90,uStack_a0,local_98);
  }
  FUN_18012ac20(&local_a8,param_1,&DAT_1802fb638);
  if (local_88 != '\x02') {
    (**(code **)(local_a8 + 0x20))(uStack_90,uStack_a0,local_98);
  }
  FUN_18012ac20(&local_a8,param_1,&DAT_1802fb658);
  if (local_88 != '\x02') {
    (**(code **)(local_a8 + 0x20))(uStack_90,uStack_a0,local_98);
  }
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0x43;
  lVar2 = FUN_18012a510(param_1,&local_a8);
  if ((lVar2 != 0) &&
     ((*(longlong *)(lVar2 + 0x10) != 8 || (**(longlong **)(lVar2 + 8) != 0x7372656c69617274)))) {
    local_e8 = (char *)0x0;
    uStack_e0 = 0;
    local_f8 = 0;
    pcStack_f0 = (char *)0x43;
    FUN_18012a990(&local_a8,param_1,&local_f8);
    if (local_88 != '\x02') {
      (**(code **)(local_a8 + 0x20))(uStack_90,uStack_a0,local_98);
    }
  }
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0x14;
  FUN_18012a990(&local_f8,param_1,&local_a8);
  if (local_d8 == '\x02') {
    return;
  }
  local_c8 = local_f8;
  local_c0 = uStack_e0;
  if (local_e8 != (char *)0x0) {
    if (&DAT_00000007 < local_e8) {
      if (local_e8 < (char *)0x20) {
        pcVar3 = (char *)0x0;
        uVar8 = 0;
LAB_1801221e3:
        pcVar10 = (char *)((ulonglong)local_e8 & 0xfffffffffffffff8);
        pcVar7 = pcStack_f0 + (longlong)pcVar10;
        auVar13 = ZEXT416(uVar8);
        auVar14._8_4_ = 0xffffffff;
        auVar14._0_8_ = 0xffffffffffffffff;
        auVar14._12_4_ = 0xffffffff;
        do {
          uVar6 = *(undefined8 *)(pcStack_f0 + (longlong)pcVar3);
          bVar25 = (char)uVar6 + 0x81;
          cVar28 = (char)((ulonglong)uVar6 >> 8);
          bVar27 = cVar28 + 0x81;
          cVar30 = (char)((ulonglong)uVar6 >> 0x10);
          bVar29 = cVar30 + 0x81;
          cVar32 = (char)((ulonglong)uVar6 >> 0x18);
          bVar31 = cVar32 + 0x81;
          cVar34 = (char)((ulonglong)uVar6 >> 0x20);
          bVar33 = cVar34 + 0x81;
          cVar36 = (char)((ulonglong)uVar6 >> 0x28);
          bVar35 = cVar36 + 0x81;
          cVar38 = (char)((ulonglong)uVar6 >> 0x30);
          cVar1 = (char)((ulonglong)uVar6 >> 0x38);
          bVar37 = cVar38 + 0x81;
          bVar39 = cVar1 + 0x81;
          auVar41[0] = -((byte)((bVar25 < 0xa1) * -0x5f | (bVar25 >= 0xa1) * bVar25) == bVar25);
          auVar41[1] = -((byte)((bVar27 < 0xa1) * -0x5f | (bVar27 >= 0xa1) * bVar27) == bVar27);
          auVar41[2] = -((byte)((bVar29 < 0xa1) * -0x5f | (bVar29 >= 0xa1) * bVar29) == bVar29);
          auVar41[3] = -((byte)((bVar31 < 0xa1) * -0x5f | (bVar31 >= 0xa1) * bVar31) == bVar31);
          auVar41[4] = -((byte)((bVar33 < 0xa1) * -0x5f | (bVar33 >= 0xa1) * bVar33) == bVar33);
          auVar41[5] = -((byte)((bVar35 < 0xa1) * -0x5f | (bVar35 >= 0xa1) * bVar35) == bVar35);
          auVar41[6] = -((byte)((bVar37 < 0xa1) * -0x5f | (bVar37 >= 0xa1) * bVar37) == bVar37);
          auVar41[7] = -((byte)((bVar39 < 0xa1) * -0x5f | (bVar39 >= 0xa1) * bVar39) == bVar39);
          auVar41[8] = 0xff;
          auVar41[9] = 0xff;
          auVar41[10] = 0xff;
          auVar41[0xb] = 0xff;
          auVar41[0xc] = 0xff;
          auVar41[0xd] = 0xff;
          auVar41[0xe] = 0xff;
          auVar41[0xf] = 0xff;
          auVar16[0] = -((char)uVar6 == '\t');
          auVar16[1] = -(cVar28 == '\t');
          auVar16[2] = -(cVar30 == '\t');
          auVar16[3] = -(cVar32 == '\t');
          auVar16[4] = -(cVar34 == '\t');
          auVar16[5] = -(cVar36 == '\t');
          auVar16[6] = -(cVar38 == '\t');
          auVar16[7] = -(cVar1 == '\t');
          auVar16[8] = 0xff;
          auVar16[9] = 0xff;
          auVar16[10] = 0xff;
          auVar16[0xb] = 0xff;
          auVar16[0xc] = 0xff;
          auVar16[0xd] = 0xff;
          auVar16[0xe] = 0xff;
          auVar16[0xf] = 0xff;
          auVar16 = auVar16 | auVar41;
          auVar24._0_14_ = auVar16._0_14_;
          auVar24[0xe] = auVar16[7];
          auVar24[0xf] = auVar16[7];
          auVar23._14_2_ = auVar24._14_2_;
          auVar23._0_13_ = auVar16._0_13_;
          auVar23[0xd] = auVar16[6];
          auVar22._13_3_ = auVar23._13_3_;
          auVar22._0_12_ = auVar16._0_12_;
          auVar22[0xc] = auVar16[6];
          auVar21._12_4_ = auVar22._12_4_;
          auVar21._0_11_ = auVar16._0_11_;
          auVar21[0xb] = auVar16[5];
          auVar20._11_5_ = auVar21._11_5_;
          auVar20._0_10_ = auVar16._0_10_;
          auVar20[10] = auVar16[5];
          auVar19._10_6_ = auVar20._10_6_;
          auVar19._0_9_ = auVar16._0_9_;
          auVar19[9] = auVar16[4];
          auVar18._9_7_ = auVar19._9_7_;
          auVar18._0_8_ = auVar16._0_8_;
          auVar18[8] = auVar16[4];
          auVar17._8_8_ = auVar18._8_8_;
          auVar17[7] = auVar16[3];
          auVar17[6] = auVar16[3];
          auVar17[5] = auVar16[2];
          auVar17[4] = auVar16[2];
          auVar17[3] = auVar16[1];
          auVar17[2] = auVar16[1];
          auVar17[0] = auVar16[0];
          auVar17[1] = auVar17[0];
          auVar13 = auVar13 | auVar17 ^ auVar14;
          pcVar3 = pcVar3 + 8;
        } while (pcVar10 != pcVar3);
        auVar13 = psllw(auVar13,7);
        bVar12 = (((((((SUB161(auVar13 >> 7,0) & 1) != 0 || (SUB161(auVar13 >> 0x17,0) & 1) != 0) ||
                     (SUB161(auVar13 >> 0x27,0) & 1) != 0) || (SUB161(auVar13 >> 0x37,0) & 1) != 0)
                   || (SUB161(auVar13 >> 0x47,0) & 1) != 0) || (SUB161(auVar13 >> 0x57,0) & 1) != 0)
                 || (SUB161(auVar13 >> 0x67,0) & 1) != 0) || (SUB161(auVar13 >> 0x77,0) & 1) != 0;
        if (local_e8 != pcVar10) goto LAB_180122275;
      }
      else {
        pcVar3 = (char *)((ulonglong)local_e8 & 0xffffffffffffffe0);
        auVar13 = (undefined1  [16])0x0;
        pcVar7 = (char *)0x0;
        auVar14 = (undefined1  [16])0x0;
        do {
          pcVar10 = pcStack_f0 + (longlong)pcVar7;
          pcVar11 = pcStack_f0 + 0x10 + (longlong)pcVar7;
          bVar25 = *pcVar10 + 0x81;
          bVar27 = pcVar10[1] + 0x81;
          bVar29 = pcVar10[2] + 0x81;
          bVar31 = pcVar10[3] + 0x81;
          bVar33 = pcVar10[4] + 0x81;
          bVar35 = pcVar10[5] + 0x81;
          bVar37 = pcVar10[6] + 0x81;
          bVar39 = pcVar10[7] + 0x81;
          bVar42 = pcVar10[8] + 0x81;
          bVar43 = pcVar10[9] + 0x81;
          bVar44 = pcVar10[10] + 0x81;
          bVar45 = pcVar10[0xb] + 0x81;
          bVar46 = pcVar10[0xc] + 0x81;
          bVar47 = pcVar10[0xd] + 0x81;
          bVar48 = pcVar10[0xe] + 0x81;
          bVar49 = pcVar10[0xf] + 0x81;
          bVar50 = *pcVar11 + 0x81;
          bVar51 = pcVar11[1] + 0x81;
          bVar52 = pcVar11[2] + 0x81;
          bVar53 = pcVar11[3] + 0x81;
          bVar54 = pcVar11[4] + 0x81;
          bVar55 = pcVar11[5] + 0x81;
          bVar56 = pcVar11[6] + 0x81;
          bVar57 = pcVar11[7] + 0x81;
          bVar58 = pcVar11[8] + 0x81;
          bVar59 = pcVar11[9] + 0x81;
          bVar60 = pcVar11[10] + 0x81;
          bVar61 = pcVar11[0xb] + 0x81;
          bVar62 = pcVar11[0xc] + 0x81;
          bVar63 = pcVar11[0xd] + 0x81;
          bVar64 = pcVar11[0xe] + 0x81;
          bVar65 = pcVar11[0xf] + 0x81;
          auVar66[0] = -((byte)((0xa0 < bVar25) * -0x60 | (0xa0 >= bVar25) * bVar25) == bVar25);
          auVar66[1] = -((byte)((0xa0 < bVar27) * -0x60 | (0xa0 >= bVar27) * bVar27) == bVar27);
          auVar66[2] = -((byte)((0xa0 < bVar29) * -0x60 | (0xa0 >= bVar29) * bVar29) == bVar29);
          auVar66[3] = -((byte)((0xa0 < bVar31) * -0x60 | (0xa0 >= bVar31) * bVar31) == bVar31);
          auVar66[4] = -((byte)((0xa0 < bVar33) * -0x60 | (0xa0 >= bVar33) * bVar33) == bVar33);
          auVar66[5] = -((byte)((0xa0 < bVar35) * -0x60 | (0xa0 >= bVar35) * bVar35) == bVar35);
          auVar66[6] = -((byte)((0xa0 < bVar37) * -0x60 | (0xa0 >= bVar37) * bVar37) == bVar37);
          auVar66[7] = -((byte)((0xa0 < bVar39) * -0x60 | (0xa0 >= bVar39) * bVar39) == bVar39);
          auVar66[8] = -((byte)((0xa0 < bVar42) * -0x60 | (0xa0 >= bVar42) * bVar42) == bVar42);
          auVar66[9] = -((byte)((0xa0 < bVar43) * -0x60 | (0xa0 >= bVar43) * bVar43) == bVar43);
          auVar66[10] = -((byte)((0xa0 < bVar44) * -0x60 | (0xa0 >= bVar44) * bVar44) == bVar44);
          auVar66[0xb] = -((byte)((0xa0 < bVar45) * -0x60 | (0xa0 >= bVar45) * bVar45) == bVar45);
          auVar66[0xc] = -((byte)((0xa0 < bVar46) * -0x60 | (0xa0 >= bVar46) * bVar46) == bVar46);
          auVar66[0xd] = -((byte)((0xa0 < bVar47) * -0x60 | (0xa0 >= bVar47) * bVar47) == bVar47);
          auVar66[0xe] = -((byte)((0xa0 < bVar48) * -0x60 | (0xa0 >= bVar48) * bVar48) == bVar48);
          auVar66[0xf] = -((byte)((0xa0 < bVar49) * -0x60 | (0xa0 >= bVar49) * bVar49) == bVar49);
          auVar40[0] = -((byte)((0xa0 < bVar50) * -0x60 | (0xa0 >= bVar50) * bVar50) == bVar50);
          auVar40[1] = -((byte)((0xa0 < bVar51) * -0x60 | (0xa0 >= bVar51) * bVar51) == bVar51);
          auVar40[2] = -((byte)((0xa0 < bVar52) * -0x60 | (0xa0 >= bVar52) * bVar52) == bVar52);
          auVar40[3] = -((byte)((0xa0 < bVar53) * -0x60 | (0xa0 >= bVar53) * bVar53) == bVar53);
          auVar40[4] = -((byte)((0xa0 < bVar54) * -0x60 | (0xa0 >= bVar54) * bVar54) == bVar54);
          auVar40[5] = -((byte)((0xa0 < bVar55) * -0x60 | (0xa0 >= bVar55) * bVar55) == bVar55);
          auVar40[6] = -((byte)((0xa0 < bVar56) * -0x60 | (0xa0 >= bVar56) * bVar56) == bVar56);
          auVar40[7] = -((byte)((0xa0 < bVar57) * -0x60 | (0xa0 >= bVar57) * bVar57) == bVar57);
          auVar40[8] = -((byte)((0xa0 < bVar58) * -0x60 | (0xa0 >= bVar58) * bVar58) == bVar58);
          auVar40[9] = -((byte)((0xa0 < bVar59) * -0x60 | (0xa0 >= bVar59) * bVar59) == bVar59);
          auVar40[10] = -((byte)((0xa0 < bVar60) * -0x60 | (0xa0 >= bVar60) * bVar60) == bVar60);
          auVar40[0xb] = -((byte)((0xa0 < bVar61) * -0x60 | (0xa0 >= bVar61) * bVar61) == bVar61);
          auVar40[0xc] = -((byte)((0xa0 < bVar62) * -0x60 | (0xa0 >= bVar62) * bVar62) == bVar62);
          auVar40[0xd] = -((byte)((0xa0 < bVar63) * -0x60 | (0xa0 >= bVar63) * bVar63) == bVar63);
          auVar40[0xe] = -((byte)((0xa0 < bVar64) * -0x60 | (0xa0 >= bVar64) * bVar64) == bVar64);
          auVar40[0xf] = -((byte)((0xa0 < bVar65) * -0x60 | (0xa0 >= bVar65) * bVar65) == bVar65);
          auVar15[0] = -(*pcVar10 == '\t');
          auVar15[1] = -(pcVar10[1] == '\t');
          auVar15[2] = -(pcVar10[2] == '\t');
          auVar15[3] = -(pcVar10[3] == '\t');
          auVar15[4] = -(pcVar10[4] == '\t');
          auVar15[5] = -(pcVar10[5] == '\t');
          auVar15[6] = -(pcVar10[6] == '\t');
          auVar15[7] = -(pcVar10[7] == '\t');
          auVar15[8] = -(pcVar10[8] == '\t');
          auVar15[9] = -(pcVar10[9] == '\t');
          auVar15[10] = -(pcVar10[10] == '\t');
          auVar15[0xb] = -(pcVar10[0xb] == '\t');
          auVar15[0xc] = -(pcVar10[0xc] == '\t');
          auVar15[0xd] = -(pcVar10[0xd] == '\t');
          auVar15[0xe] = -(pcVar10[0xe] == '\t');
          auVar15[0xf] = -(pcVar10[0xf] == '\t');
          auVar13 = auVar13 | ~auVar15 & auVar66;
          auVar26[0] = -(*pcVar11 == '\t');
          auVar26[1] = -(pcVar11[1] == '\t');
          auVar26[2] = -(pcVar11[2] == '\t');
          auVar26[3] = -(pcVar11[3] == '\t');
          auVar26[4] = -(pcVar11[4] == '\t');
          auVar26[5] = -(pcVar11[5] == '\t');
          auVar26[6] = -(pcVar11[6] == '\t');
          auVar26[7] = -(pcVar11[7] == '\t');
          auVar26[8] = -(pcVar11[8] == '\t');
          auVar26[9] = -(pcVar11[9] == '\t');
          auVar26[10] = -(pcVar11[10] == '\t');
          auVar26[0xb] = -(pcVar11[0xb] == '\t');
          auVar26[0xc] = -(pcVar11[0xc] == '\t');
          auVar26[0xd] = -(pcVar11[0xd] == '\t');
          auVar26[0xe] = -(pcVar11[0xe] == '\t');
          auVar26[0xf] = -(pcVar11[0xf] == '\t');
          auVar14 = auVar14 | ~auVar26 & auVar40;
          pcVar7 = pcVar7 + 0x20;
        } while (pcVar3 != pcVar7);
        auVar13 = psllw(auVar14 | auVar13,7);
        bVar12 = (((((((((((((((SUB161(auVar13 >> 7,0) & 1) != 0 ||
                              (SUB161(auVar13 >> 0xf,0) & 1) != 0) ||
                             (SUB161(auVar13 >> 0x17,0) & 1) != 0) ||
                            (SUB161(auVar13 >> 0x1f,0) & 1) != 0) ||
                           (SUB161(auVar13 >> 0x27,0) & 1) != 0) ||
                          (SUB161(auVar13 >> 0x2f,0) & 1) != 0) ||
                         (SUB161(auVar13 >> 0x37,0) & 1) != 0) ||
                        (SUB161(auVar13 >> 0x3f,0) & 1) != 0) ||
                       (SUB161(auVar13 >> 0x47,0) & 1) != 0) || (SUB161(auVar13 >> 0x4f,0) & 1) != 0
                      ) || (SUB161(auVar13 >> 0x57,0) & 1) != 0) ||
                    (SUB161(auVar13 >> 0x5f,0) & 1) != 0) || (SUB161(auVar13 >> 0x67,0) & 1) != 0)
                  || (SUB161(auVar13 >> 0x6f,0) & 1) != 0) || (SUB161(auVar13 >> 0x77,0) & 1) != 0)
                 || auVar13[0xf] < '\0';
        uVar8 = (uint)bVar12;
        if (local_e8 != pcVar3) {
          if (((ulonglong)local_e8 & 0x18) == 0) {
            pcVar7 = pcVar3 + (longlong)pcStack_f0;
            goto LAB_180122275;
          }
          goto LAB_1801221e3;
        }
      }
    }
    else {
      bVar12 = false;
      pcVar7 = pcStack_f0;
LAB_180122275:
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        bVar12 = (bool)(bVar12 | (cVar1 != '\t' && (byte)(cVar1 + 0x81U) < 0xa1));
      } while (pcVar7 != pcStack_f0 + (longlong)local_e8);
    }
    pcVar3 = local_e8;
    pcVar7 = pcStack_f0;
    if (bVar12) goto LAB_1801222ab;
  }
  pcVar11 = (char *)0x0;
  local_b8 = local_e8;
  local_b0 = pcStack_f0;
  pcVar10 = (char *)0x0;
  do {
    bVar12 = true;
    pcVar3 = local_b8;
    pcVar7 = local_b0;
    if (local_b8 < pcVar11) {
      pcVar9 = local_b8;
      pcVar3 = pcVar11;
    }
    else {
      do {
        pcVar5 = pcVar7 + (longlong)pcVar11;
        if (pcVar3 + -(longlong)pcVar11 < (char *)0x10) {
          pcVar9 = (char *)0x0;
          if (pcVar3 == pcVar11) {
LAB_1801223d0:
            pcVar9 = pcVar3;
            goto LAB_1801223de;
          }
          while (pcVar5[(longlong)pcVar9] != ',') {
            pcVar9 = pcVar9 + 1;
            if (pcVar3 + -(longlong)pcVar11 == pcVar9) goto LAB_1801223d0;
          }
        }
        else {
          uVar4 = FUN_1801f2f70(0x2c);
          pcVar9 = pcVar5;
          pcVar3 = local_b8;
          pcVar7 = local_b0;
          if ((uVar4 & 1) == 0) goto LAB_1801223d0;
        }
        pcVar5 = pcVar9 + (longlong)pcVar11 + 1;
        pcVar9 = pcVar9 + (longlong)pcVar11;
        pcVar11 = pcVar5;
        if ((pcVar9 < pcVar3) && (pcVar7[(longlong)pcVar9] == ',')) {
          bVar12 = false;
          goto LAB_1801223e1;
        }
      } while (pcVar5 <= pcVar3);
      pcVar9 = pcVar3;
      pcVar3 = pcVar5;
    }
LAB_1801223de:
    pcVar5 = pcVar10;
    pcVar11 = pcVar3;
LAB_1801223e1:
    lVar2 = (longlong)pcVar9 - (longlong)pcVar10;
    uVar6 = FUN_180110f50(pcVar10 + (longlong)pcVar7,lVar2);
    FUN_18012ae10(&local_a8,param_1,uVar6,lVar2);
    if (local_88 != '\x02') {
      (**(code **)(local_a8 + 0x20))(uStack_90,uStack_a0,local_98);
    }
    pcVar10 = pcVar5;
    pcVar3 = local_b8;
    pcVar7 = local_b0;
  } while (!bVar12);
LAB_1801222ab:
  (**(code **)(local_c8 + 0x20))(local_c0,pcVar7,pcVar3);
  return;
}


