/* FUN_1801f4890 @ 1801f4890 */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1801f4890(ushort *param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
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
  short sVar21;
  short sVar22;
  short sVar23;
  undefined1 auVar24 [14];
  undefined1 auVar25 [14];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  char cVar36;
  undefined8 uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  undefined8 *puVar43;
  longlong lVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  ushort uVar48;
  ushort uVar49;
  ushort uVar50;
  undefined1 auVar47 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  ushort *local_98;
  undefined8 *local_90;
  undefined8 **local_88;
  code *local_80 [5];
  undefined1 local_58 [3];
  char cStack_55;
  char cStack_54;
  char cStack_53;
  char cStack_52;
  char cStack_51;
  undefined1 auStack_50 [3];
  char cStack_4d;
  char cStack_4c;
  char cStack_4b;
  char cStack_4a;
  char cStack_49;
  undefined8 *local_48;
  
  local_98 = param_1;
  if ((*(byte *)((longlong)param_2 + 0x13) & 0x18) != 0) {
    local_88 = (undefined8 **)0x0;
    _local_58 = &local_98;
    _auStack_50 = &LAB_1801edde0;
    cVar36 = FUN_1801ef150(&local_88,&DAT_180294718,&DAT_1802934cf,local_58);
    if (cVar36 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("called `Result::unwrap()` on an `Err` va",0x2b,&local_48,&DAT_180293c88,
                    &PTR_s_library_core_src_net_ip_addr_rs_180294748);
    }
    if ((undefined8 **)0x27 < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(0,local_88,0x27,&PTR_s_library_core_src_net_display_buf_180294700);
    }
    uVar37 = FUN_1801f0810(param_2,local_80);
    return uVar37;
  }
  uVar1 = *param_1;
  uVar39 = *(ulonglong *)(param_1 + 1);
  uVar2 = param_1[7];
  uVar4 = *(uint *)(param_1 + 5);
  uVar3 = param_1[5];
  uVar50 = (ushort)(uVar39 >> 0x30);
  auVar24._8_4_ = 0;
  auVar24._0_8_ = uVar39;
  auVar24._12_2_ = uVar50;
  uVar49 = (ushort)(uVar39 >> 0x20);
  auVar25._8_2_ = uVar49;
  auVar25._0_8_ = uVar39;
  auVar25._10_4_ = auVar24._10_4_;
  auVar47._8_6_ = auVar25._8_6_;
  auVar47._6_2_ = (short)(uVar4 >> 0x10);
  uVar48 = (ushort)(uVar39 >> 0x10);
  auVar47._4_2_ = uVar48;
  auVar47._0_2_ = (ushort)uVar39;
  auVar47._2_2_ = (short)uVar4;
  auVar47._14_2_ = 0;
  auVar45 = pshuflw(ZEXT416(uVar4),auVar47,0xd8);
  auVar52._0_4_ = auVar45._0_4_;
  auVar52._12_4_ = auVar45._12_4_;
  auVar52._4_4_ = auVar45._8_4_;
  auVar52._8_4_ = auVar45._4_4_;
  auVar45 = pshuflw(auVar52,auVar52,0x90);
  auVar45 = pshufhw(auVar45,auVar45,0xd2);
  uVar41 = auVar45._0_8_ & 0xffffffffffff0000;
  uVar42 = auVar45._8_8_ & 0xffffffffffff;
  auVar45._8_8_ = uVar42 | (ulonglong)uVar2 << 0x30;
  auVar45._0_8_ = uVar41;
  auVar51[1] = 0;
  auVar51[0] = (byte)uVar42;
  auVar51[2] = (char)(uVar42 >> 8);
  auVar51[3] = 0;
  auVar51[4] = (char)(uVar42 >> 0x10);
  auVar51[5] = 0;
  auVar51[6] = (char)(uVar42 >> 0x18);
  auVar51[7] = 0;
  auVar51[8] = (char)(uVar42 >> 0x20);
  auVar51[9] = 0;
  auVar51[10] = (char)(uVar42 >> 0x28);
  auVar51[0xb] = 0;
  auVar51[0xc] = (char)uVar2;
  auVar51[0xd] = 0;
  auVar51[0xe] = (char)(uVar2 >> 8);
  auVar51[0xf] = 0;
  auVar52 = pshuflw(auVar51,auVar51,0xb1);
  auVar52 = pshufhw(auVar52,auVar52,0xb1);
  auVar26[0xd] = 0;
  auVar26._0_13_ = auVar45._0_13_;
  auVar26[0xe] = (char)(uVar41 >> 0x38);
  auVar27[0xc] = (char)(uVar41 >> 0x30);
  auVar27._0_12_ = auVar45._0_12_;
  auVar27._13_2_ = auVar26._13_2_;
  auVar28[0xb] = 0;
  auVar28._0_11_ = auVar45._0_11_;
  auVar28._12_3_ = auVar27._12_3_;
  auVar29[10] = (char)(uVar41 >> 0x28);
  auVar29._0_10_ = auVar45._0_10_;
  auVar29._11_4_ = auVar28._11_4_;
  auVar30[9] = 0;
  auVar30._0_9_ = auVar45._0_9_;
  auVar30._10_5_ = auVar29._10_5_;
  auVar31[8] = (char)(uVar41 >> 0x20);
  auVar31._0_8_ = uVar41;
  auVar31._9_6_ = auVar30._9_6_;
  auVar35._7_8_ = 0;
  auVar35._0_7_ = auVar31._8_7_;
  auVar33._1_8_ = SUB158(auVar35 << 0x40,7);
  auVar33[0] = (char)(uVar41 >> 0x18);
  auVar33._9_6_ = 0;
  auVar34._1_10_ = SUB1510(auVar33 << 0x30,5);
  auVar34[0] = (char)(uVar41 >> 0x10);
  auVar34._11_4_ = 0;
  auVar32[2] = (char)(uVar1 >> 8);
  auVar32._0_2_ = uVar1;
  auVar32._3_12_ = SUB1512(auVar34 << 0x20,3);
  auVar46._0_2_ = uVar1 & 0xff;
  auVar46._2_13_ = auVar32._2_13_;
  auVar46[0xf] = 0;
  auVar45 = pshuflw(auVar46,auVar46,0xb1);
  auVar45 = pshufhw(auVar45,auVar45,0xb1);
  sVar8 = auVar45._0_2_;
  sVar9 = auVar45._2_2_;
  sVar10 = auVar45._4_2_;
  sVar11 = auVar45._6_2_;
  sVar12 = auVar45._8_2_;
  sVar13 = auVar45._10_2_;
  sVar14 = auVar45._12_2_;
  sVar15 = auVar45._14_2_;
  sVar16 = auVar52._0_2_;
  sVar17 = auVar52._2_2_;
  sVar18 = auVar52._4_2_;
  sVar19 = auVar52._6_2_;
  sVar20 = auVar52._8_2_;
  sVar21 = auVar52._10_2_;
  sVar22 = auVar52._12_2_;
  sVar23 = auVar52._14_2_;
  _local_58 = (ushort **)
              CONCAT17((0 < sVar15) * (sVar15 < 0x100) * auVar45[0xe] - (0xff < sVar15),
                       CONCAT16((0 < sVar14) * (sVar14 < 0x100) * auVar45[0xc] - (0xff < sVar14),
                                CONCAT15((0 < sVar13) * (sVar13 < 0x100) * auVar45[10] -
                                         (0xff < sVar13),
                                         CONCAT14((0 < sVar12) * (sVar12 < 0x100) * auVar45[8] -
                                                  (0xff < sVar12),
                                                  CONCAT13((0 < sVar11) * (sVar11 < 0x100) *
                                                           auVar45[6] - (0xff < sVar11),
                                                           CONCAT12((0 < sVar10) * (sVar10 < 0x100)
                                                                    * auVar45[4] - (0xff < sVar10),
                                                                    CONCAT11((0 < sVar9) *
                                                                             (sVar9 < 0x100) *
                                                                             auVar45[2] -
                                                                             (0xff < sVar9),
                                                                             (0 < sVar8) *
                                                                             (sVar8 < 0x100) *
                                                                             auVar45[0] -
                                                                             (0xff < sVar8))))))));
  _auStack_50 = (undefined1 *)
                CONCAT17((0 < sVar23) * (sVar23 < 0x100) * auVar52[0xe] - (0xff < sVar23),
                         CONCAT16((0 < sVar22) * (sVar22 < 0x100) * auVar52[0xc] - (0xff < sVar22),
                                  CONCAT15((0 < sVar21) * (sVar21 < 0x100) * auVar52[10] -
                                           (0xff < sVar21),
                                           CONCAT14((0 < sVar20) * (sVar20 < 0x100) * auVar52[8] -
                                                    (0xff < sVar20),
                                                    CONCAT13((0 < sVar19) * (sVar19 < 0x100) *
                                                             auVar52[6] - (0xff < sVar19),
                                                             CONCAT12((0 < sVar18) *
                                                                      (sVar18 < 0x100) * auVar52[4]
                                                                      - (0xff < sVar18),
                                                                      CONCAT11((0 < sVar17) *
                                                                               (sVar17 < 0x100) *
                                                                               auVar52[2] -
                                                                               (0xff < sVar17),
                                                                               (0 < sVar16) *
                                                                               (sVar16 < 0x100) *
                                                                               auVar52[0] -
                                                                               (0xff < sVar16)))))))
                        );
  if (((char)uVar1 == '\0' && uVar1 >> 8 == 0) &&
     (((uVar39 & 0xff00ff00ff00ff) == 0 &&
      CONCAT26(uVar50 >> 8,CONCAT24(uVar49 >> 8,CONCAT22(uVar48 >> 8,auVar47._0_2_ >> 8))) == 0) &&
      (uVar3 >> 8 & uVar3) == 0xff)) {
    local_48 = (undefined8 *)CONCAT44(local_48._4_4_,*(undefined4 *)(param_1 + 6));
    local_80[0] = FUN_1801f4680;
    local_88 = &local_48;
    uVar37 = FUN_1801ef150(*param_2,param_2[1],&DAT_180294760,&local_88);
    return uVar37;
  }
  bVar7 = uVar1 != 0;
  uVar41 = 2 - (ulonglong)bVar7;
  uVar39 = (ulonglong)(uVar1 == 0);
  if (auVar47._0_2_ == 0) {
    uVar39 = uVar41;
  }
  uVar42 = (ulonglong)(bVar7 && auVar47._0_2_ == 0);
  if (uVar48 == 0) {
    uVar38 = 2;
    uVar40 = 0;
    if (auVar47._0_2_ == 0) {
      uVar38 = uVar42;
      uVar40 = uVar41;
    }
    uVar41 = uVar40 + 1;
    if (uVar39 <= uVar40) {
      uVar42 = uVar38;
    }
    if (uVar39 < uVar41) {
      uVar39 = uVar41;
    }
  }
  else {
    uVar38 = 0;
    uVar41 = 0;
  }
  if (uVar49 == 0) {
    if (uVar41 == 0) {
      uVar38 = 3;
    }
    uVar40 = uVar41 + 1;
    if (uVar39 <= uVar41) {
      uVar42 = uVar38;
    }
    if (uVar39 < uVar40) {
      uVar39 = uVar40;
    }
  }
  else {
    uVar38 = 0;
    uVar40 = 0;
  }
  if (uVar50 == 0) {
    if (uVar40 == 0) {
      uVar38 = 4;
    }
    uVar41 = uVar40 + 1;
    if (uVar39 <= uVar40) {
      uVar42 = uVar38;
    }
    if (uVar39 < uVar41) {
      uVar39 = uVar41;
    }
  }
  else {
    uVar38 = 0;
    uVar41 = 0;
  }
  if (uVar3 == 0) {
    if (uVar41 == 0) {
      uVar38 = 5;
    }
    uVar40 = uVar41 + 1;
    if (uVar39 <= uVar41) {
      uVar42 = uVar38;
    }
    if (uVar39 < uVar40) {
      uVar39 = uVar40;
    }
  }
  else {
    uVar38 = 0;
    uVar40 = 0;
  }
  if (param_1[6] == 0) {
    if (uVar40 == 0) {
      uVar38 = 6;
    }
    uVar41 = uVar40 + 1;
    if (uVar39 <= uVar40) {
      uVar42 = uVar38;
    }
    if (uVar39 < uVar41) {
      uVar39 = uVar41;
    }
  }
  else {
    uVar38 = 0;
    uVar41 = 0;
  }
  if (uVar2 == 0) {
    if (uVar41 == 0) {
      uVar38 = 7;
    }
    if (uVar39 <= uVar41) {
      uVar42 = uVar38;
    }
    if (uVar39 < uVar41 + 1) {
      uVar39 = uVar41 + 1;
    }
  }
  puVar43 = (undefined8 *)(local_58 + 2);
  uVar37 = *param_2;
  lVar5 = param_2[1];
  if ((uint)uVar39 < 2) {
    local_90 = (undefined8 *)local_58;
    local_88 = &local_90;
    local_80[0] = FUN_1801ede80;
    cVar36 = FUN_1801ef150(uVar37,lVar5,&DAT_1802934cf,&local_88);
    if (cVar36 != '\0') {
      return 1;
    }
    pcVar6 = *(code **)(lVar5 + 0x20);
    local_48 = puVar43;
    cVar36 = (*pcVar6)(uVar37,0x3a);
    if (cVar36 == '\0') {
      local_80[0] = FUN_1801ede80;
      local_88 = &local_48;
      cVar36 = FUN_1801ef150(uVar37,lVar5,&DAT_1802934cf,&local_88);
      if (cVar36 == '\0') {
        local_48 = (undefined8 *)(local_58 + 4);
        cVar36 = (*pcVar6)(uVar37,0x3a);
        if (cVar36 == '\0') {
          local_80[0] = FUN_1801ede80;
          local_88 = &local_48;
          cVar36 = FUN_1801ef150(uVar37,lVar5,&DAT_1802934cf,&local_88);
          if (cVar36 == '\0') {
            local_48 = (undefined8 *)(local_58 + 6);
            cVar36 = (*pcVar6)(uVar37,0x3a);
            if (cVar36 == '\0') {
              local_80[0] = FUN_1801ede80;
              local_88 = &local_48;
              cVar36 = FUN_1801ef150(uVar37,lVar5,&DAT_1802934cf,&local_88);
              if (cVar36 == '\0') {
                local_48 = (undefined8 *)auStack_50;
                cVar36 = (*pcVar6)(uVar37,0x3a);
                if (cVar36 == '\0') {
                  local_80[0] = FUN_1801ede80;
                  local_88 = &local_48;
                  cVar36 = FUN_1801ef150(uVar37,lVar5,&DAT_1802934cf,&local_88);
                  if (cVar36 == '\0') {
                    local_48 = (undefined8 *)(auStack_50 + 2);
                    cVar36 = (*pcVar6)(uVar37,0x3a);
                    if (cVar36 == '\0') {
                      local_80[0] = FUN_1801ede80;
                      local_88 = &local_48;
                      cVar36 = FUN_1801ef150(uVar37,lVar5,&DAT_1802934cf,&local_88);
                      if (cVar36 == '\0') {
                        local_48 = (undefined8 *)(auStack_50 + 4);
                        cVar36 = (*pcVar6)(uVar37,0x3a);
                        if (cVar36 == '\0') {
                          local_80[0] = FUN_1801ede80;
                          local_88 = &local_48;
                          cVar36 = FUN_1801ef150(uVar37,lVar5,&DAT_1802934cf,&local_88);
                          if (cVar36 == '\0') {
                            local_48 = (undefined8 *)(auStack_50 + 6);
                            cVar36 = (*pcVar6)(uVar37,0x3a);
                            if (cVar36 == '\0') {
                              local_80[0] = FUN_1801ede80;
                              local_88 = &local_48;
                              cVar36 = FUN_1801ef150(uVar37,lVar5,&DAT_1802934cf,&local_88);
                              if (cVar36 == '\0') {
                                return 0;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (uVar42 != 0) {
      local_90 = (undefined8 *)local_58;
      local_88 = &local_90;
      local_80[0] = FUN_1801ede80;
      cVar36 = FUN_1801ef150(uVar37,lVar5,&DAT_1802934cf,&local_88);
      if (cVar36 != '\0') {
        return 1;
      }
      if (uVar42 != 1) {
        pcVar6 = *(code **)(lVar5 + 0x20);
        lVar44 = (ulonglong)(uint)((int)uVar42 * 2) - 2;
        do {
          local_48 = puVar43;
          cVar36 = (*pcVar6)(uVar37,0x3a);
          if (cVar36 != '\0') {
            return 1;
          }
          local_80[0] = FUN_1801ede80;
          local_88 = &local_48;
          cVar36 = FUN_1801ef150(uVar37,lVar5,&DAT_1802934cf,&local_88);
          if (cVar36 != '\0') {
            return 1;
          }
          puVar43 = (undefined8 *)((longlong)puVar43 + 2);
          lVar44 = lVar44 + -2;
        } while (lVar44 != 0);
      }
    }
    cVar36 = (**(code **)(lVar5 + 0x18))(uVar37,&DAT_18029476a,2);
    if (cVar36 == '\0') {
      uVar39 = uVar39 + uVar42;
      if (8 < uVar39) {
                    /* WARNING: Subroutine does not return */
        FUN_180201a30(uVar39,8,8,&PTR_s_library_core_src_net_ip_addr_rs_180294770);
      }
      uVar37 = FUN_1801f47c0(uVar37,lVar5,uVar39 * 2 + -0x10 + (longlong)&local_48,8 - uVar39);
      return uVar37;
    }
  }
  return 1;
}


