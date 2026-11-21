/* FUN_18019af80 @ 18019af80 */

ulonglong FUN_18019af80(ushort *param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  char cVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint7 uVar27;
  char *pcVar26;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined1 auVar32 [16];
  ushort uVar33;
  ushort *local_60;
  code *local_58;
  ushort local_50 [3];
  undefined8 local_4a;
  ushort local_42;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  local_50[0] = uVar1 << 8 | uVar1 >> 8;
  uVar4 = param_1[7];
  local_50[1] = uVar2 << 8 | uVar2 >> 8;
  local_50[2] = uVar3 << 8 | uVar3 >> 8;
  pcVar26 = (char *)(ulonglong)local_50[2];
  local_42 = uVar4 << 8 | uVar4 >> 8;
  uVar31 = *(ulonglong *)(param_1 + 3);
  auVar13._8_6_ = 0;
  auVar13._0_8_ = uVar31;
  auVar13[0xe] = (char)(uVar31 >> 0x38);
  auVar14._8_4_ = 0;
  auVar14._0_8_ = uVar31;
  auVar14[0xc] = (char)(uVar31 >> 0x30);
  auVar14._13_2_ = auVar13._13_2_;
  auVar15._8_4_ = 0;
  auVar15._0_8_ = uVar31;
  auVar15._12_3_ = auVar14._12_3_;
  auVar16._8_2_ = 0;
  auVar16._0_8_ = uVar31;
  auVar16[10] = (char)(uVar31 >> 0x28);
  auVar16._11_4_ = auVar15._11_4_;
  auVar17._8_2_ = 0;
  auVar17._0_8_ = uVar31;
  auVar17._10_5_ = auVar16._10_5_;
  auVar18[8] = (char)(uVar31 >> 0x20);
  auVar18._0_8_ = uVar31;
  auVar18._9_6_ = auVar17._9_6_;
  auVar20._7_8_ = 0;
  auVar20._0_7_ = auVar18._8_7_;
  auVar21._1_8_ = SUB158(auVar20 << 0x40,7);
  auVar21[0] = (char)(uVar31 >> 0x18);
  auVar21._9_6_ = 0;
  auVar22._1_10_ = SUB1510(auVar21 << 0x30,5);
  auVar22[0] = (char)(uVar31 >> 0x10);
  auVar22._11_4_ = 0;
  uVar33 = (ushort)uVar31;
  auVar19[2] = (char)(uVar31 >> 8);
  auVar19._0_2_ = uVar33;
  auVar19._3_12_ = SUB1512(auVar22 << 0x20,3);
  auVar32._0_2_ = uVar33 & 0xff;
  auVar32._2_13_ = auVar19._2_13_;
  auVar32[0xf] = 0;
  auVar32 = pshuflw((undefined1  [16])0x0,auVar32,0xb1);
  auVar32 = pshufhw(auVar32,auVar32,0xb1);
  sVar5 = auVar32._0_2_;
  sVar6 = auVar32._2_2_;
  sVar7 = auVar32._4_2_;
  sVar8 = auVar32._6_2_;
  sVar9 = auVar32._8_2_;
  sVar10 = auVar32._10_2_;
  sVar11 = auVar32._12_2_;
  sVar12 = auVar32._14_2_;
  local_4a = CONCAT17((0 < sVar12) * (sVar12 < 0x100) * auVar32[0xe] - (0xff < sVar12),
                      CONCAT16((0 < sVar11) * (sVar11 < 0x100) * auVar32[0xc] - (0xff < sVar11),
                               CONCAT15((0 < sVar10) * (sVar10 < 0x100) * auVar32[10] -
                                        (0xff < sVar10),
                                        CONCAT14((0 < sVar9) * (sVar9 < 0x100) * auVar32[8] -
                                                 (0xff < sVar9),
                                                 CONCAT13((0 < sVar8) * (sVar8 < 0x100) * auVar32[6]
                                                          - (0xff < sVar8),
                                                          CONCAT12((0 < sVar7) * (sVar7 < 0x100) *
                                                                   auVar32[4] - (0xff < sVar7),
                                                                   CONCAT11((0 < sVar6) *
                                                                            (sVar6 < 0x100) *
                                                                            auVar32[2] -
                                                                            (0xff < sVar6),
                                                                            (0 < sVar5) *
                                                                            (sVar5 < 0x100) *
                                                                            auVar32[0] -
                                                                            (0xff < sVar5))))))));
  if (uVar1 == 0) {
    if (uVar2 == 0) {
      uVar24 = 0;
      goto joined_r0x00018019b080;
    }
    uVar29 = (ulonglong)(uVar3 == 0) * 3 - 1;
    lVar25 = 1;
    uVar24 = 0;
    lVar30 = lVar25;
    if (uVar33 == 0) goto LAB_18019b06b;
LAB_18019b0a3:
    lVar25 = lVar30;
    uVar28 = 0xffffffffffffffff;
    if (-1 < (longlong)uVar29) {
      lVar25 = 3 - uVar29;
      if (lVar30 < lVar25) {
        uVar24 = uVar29;
      }
    }
  }
  else {
    uVar24 = (ulonglong)(uVar2 == 0) * 2 - 1;
joined_r0x00018019b080:
    if (uVar3 == 0) {
      uVar29 = 2;
      if (-1 < (longlong)uVar24) {
        uVar29 = uVar24;
      }
      lVar25 = -1;
      uVar24 = 0xffffffffffffffff;
      lVar30 = lVar25;
      if (uVar33 != 0) goto LAB_18019b0a3;
LAB_18019b06b:
      uVar28 = 3;
      if (-1 < (longlong)uVar29) {
        uVar28 = uVar29;
      }
    }
    else {
      lVar25 = -1;
      if (-1 < (longlong)uVar24) {
        lVar25 = 2 - uVar24;
      }
      uVar28 = (ulonglong)(uVar33 == 0) * 4 - 1;
    }
  }
  sVar5 = (short)(uVar31 >> 0x20);
  sVar6 = (short)(uVar31 >> 0x30);
  if ((short)(uVar31 >> 0x10) == 0) {
    uVar31 = 4;
    if (-1 < (longlong)uVar28) {
      uVar31 = uVar28;
    }
    if (sVar5 == 0) goto LAB_18019b18e;
LAB_18019b100:
    uVar29 = 0xffffffffffffffff;
    if (-1 < (longlong)uVar31) {
      if (lVar25 < (longlong)(5 - uVar31)) {
        uVar24 = uVar31;
        lVar25 = 5 - uVar31;
      }
    }
    if (sVar6 != 0) goto LAB_18019b12b;
LAB_18019b1a6:
    uVar31 = 6;
    if (-1 < (longlong)uVar29) {
      uVar31 = uVar29;
    }
    if (uVar4 == 0) goto LAB_18019b1b8;
LAB_18019b150:
    uVar29 = 0xffffffffffffffff;
    if (-1 < (longlong)uVar31) {
      if (lVar25 < (longlong)(7 - uVar31)) {
        uVar24 = uVar31;
        lVar25 = 7 - uVar31;
      }
    }
  }
  else {
    uVar31 = 0xffffffffffffffff;
    if (-1 < (longlong)uVar28) {
      if (lVar25 < (longlong)(4 - uVar28)) {
        uVar24 = uVar28;
        lVar25 = 4 - uVar28;
      }
    }
    if (sVar5 != 0) goto LAB_18019b100;
LAB_18019b18e:
    uVar29 = 5;
    if (-1 < (longlong)uVar31) {
      uVar29 = uVar31;
    }
    if (sVar6 == 0) goto LAB_18019b1a6;
LAB_18019b12b:
    uVar31 = 0xffffffffffffffff;
    if (-1 < (longlong)uVar29) {
      if (lVar25 < (longlong)(6 - uVar29)) {
        uVar24 = uVar29;
        lVar25 = 6 - uVar29;
      }
    }
    if (uVar4 != 0) goto LAB_18019b150;
LAB_18019b1b8:
    uVar29 = 7;
    if (-1 < (longlong)uVar31) {
      uVar29 = uVar31;
    }
  }
  lVar30 = 8 - uVar29;
  if (lVar25 < lVar30) {
    uVar31 = uVar29;
  }
  else {
    uVar31 = uVar24;
    lVar30 = lVar25;
  }
  if ((longlong)uVar29 < 0) {
    uVar31 = uVar24;
    lVar30 = lVar25;
  }
  uVar24 = 0xfffffffffffffffe;
  if (1 < lVar30) {
    uVar24 = uVar31 + lVar30;
  }
  uVar29 = 0xffffffffffffffff;
  if (1 < lVar30) {
    uVar29 = uVar31;
  }
  uVar27 = (uint7)(byte)uVar3;
  if ((longlong)uVar24 < 8) {
    if (uVar29 == 0) {
      if (uVar24 < 8) {
        uVar31 = 0;
        do {
          if (uVar31 == 0) {
            cVar23 = FUN_1801f0c50(param_2,
                                   ":C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\url-2.5.8\\src\\host.rs"
                                   ,1);
            pcVar26 = (char *)CONCAT71((int7)((ulonglong)pcVar26 >> 8),1);
            if (cVar23 != '\0') break;
            cVar23 = FUN_1801f0c50(param_2,
                                   ":C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\url-2.5.8\\src\\host.rs"
                                   ,1);
            uVar31 = uVar24;
            if (cVar23 != '\0') break;
          }
          local_60 = local_50 + uVar31;
          local_58 = FUN_1801eeae0;
          cVar23 = FUN_1801ef150(*param_2,param_2[1],&DAT_180267cd8,&local_60);
          if (cVar23 != '\0') goto LAB_18019b66b;
          if (uVar31 == 7) goto LAB_18019b635;
          cVar23 = FUN_1801f0c50(param_2,
                                 ":C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\url-2.5.8\\src\\host.rs"
                                 ,1);
          uVar31 = uVar31 + 1;
          pcVar26 = (char *)CONCAT71((int7)((ulonglong)pcVar26 >> 8),1);
        } while (cVar23 == '\0');
        goto LAB_18019b66e;
      }
      cVar23 = FUN_1801f0c50(param_2,
                             ":C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\url-2.5.8\\src\\host.rs"
                             ,1);
      pcVar26 = (char *)CONCAT71(uVar27,1);
      if (cVar23 != '\0') goto LAB_18019b66e;
      goto LAB_18019b6c1;
    }
    if (uVar24 < 8) {
      uVar31 = 0;
      pcVar26 = 
      ":C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\url-2.5.8\\src\\host.rs"
      ;
      do {
        if (uVar31 == uVar29) {
          cVar23 = FUN_1801f0c50(param_2,
                                 ":C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\url-2.5.8\\src\\host.rs"
                                 ,1);
          uVar31 = uVar24;
          if (cVar23 != '\0') break;
        }
        local_60 = local_50 + uVar31;
        local_58 = FUN_1801eeae0;
        cVar23 = FUN_1801ef150(*param_2,param_2[1],&DAT_180267cd8,&local_60);
        if (cVar23 != '\0') break;
        if (uVar31 == 7) goto LAB_18019b635;
        cVar23 = FUN_1801f0c50(param_2,
                               ":C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\url-2.5.8\\src\\host.rs"
                               ,1);
        uVar31 = uVar31 + 1;
      } while (cVar23 == '\0');
    }
    else {
      local_60 = local_50;
      local_58 = FUN_1801eeae0;
      cVar23 = FUN_1801ef150(*param_2,param_2[1],&DAT_180267cd8,&local_60);
      if (cVar23 == '\0') {
        cVar23 = FUN_1801f0c50(param_2,
                               ":C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\url-2.5.8\\src\\host.rs"
                               ,1);
        pcVar26 = (char *)CONCAT71(uVar27,1);
        if (cVar23 != '\0') goto LAB_18019b66e;
        if (uVar29 != 1) {
          local_58 = FUN_1801eeae0;
          local_60 = local_50 + 1;
          cVar23 = FUN_1801ef150(*param_2,param_2[1],&DAT_180267cd8,&local_60);
          if (cVar23 != '\0') goto LAB_18019b66b;
          cVar23 = FUN_1801f0c50(param_2,
                                 ":C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\url-2.5.8\\src\\host.rs"
                                 ,1);
          if (cVar23 != '\0') goto LAB_18019b66e;
          if (uVar29 != 2) {
            local_58 = FUN_1801eeae0;
            local_60 = local_50 + 2;
            cVar23 = FUN_1801ef150(*param_2,param_2[1],&DAT_180267cd8,&local_60);
            if (cVar23 != '\0') goto LAB_18019b66b;
            cVar23 = FUN_1801f0c50(param_2,
                                   ":C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\url-2.5.8\\src\\host.rs"
                                   ,1);
            if (cVar23 != '\0') goto LAB_18019b66e;
            if (uVar29 != 3) {
              local_58 = FUN_1801eeae0;
              local_60 = (ushort *)&local_4a;
              cVar23 = FUN_1801ef150(*param_2,param_2[1],&DAT_180267cd8,&local_60);
              if (cVar23 != '\0') goto LAB_18019b66b;
              cVar23 = FUN_1801f0c50(param_2,
                                     ":C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\url-2.5.8\\src\\host.rs"
                                     ,1);
              if (cVar23 != '\0') goto LAB_18019b66e;
              if (uVar29 != 4) {
                local_58 = FUN_1801eeae0;
                local_60 = (ushort *)((longlong)&local_4a + 2);
                cVar23 = FUN_1801ef150(*param_2,param_2[1],&DAT_180267cd8,&local_60);
                if (cVar23 != '\0') goto LAB_18019b66b;
                cVar23 = FUN_1801f0c50(param_2,
                                       ":C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\url-2.5.8\\src\\host.rs"
                                       ,1);
                if (cVar23 != '\0') goto LAB_18019b66e;
                if (uVar29 != 5) {
                  local_60 = (ushort *)((longlong)&local_4a + 4);
                  local_58 = FUN_1801eeae0;
                  cVar23 = FUN_1801ef150(*param_2,param_2[1],&DAT_180267cd8,&local_60);
                  if (cVar23 != '\0') goto LAB_18019b66b;
                  cVar23 = FUN_1801f0c50(param_2,
                                         ":C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\url-2.5.8\\src\\host.rs"
                                         ,1);
                  if (cVar23 != '\0') goto LAB_18019b66e;
                  if (uVar29 != 6) {
                    local_60 = (ushort *)((longlong)&local_4a + 6);
                    local_58 = FUN_1801eeae0;
                    cVar23 = FUN_1801ef150(*param_2,param_2[1],&DAT_180267cd8,&local_60);
                    if (cVar23 != '\0') goto LAB_18019b66b;
                    cVar23 = FUN_1801f0c50(param_2,
                                           ":C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\url-2.5.8\\src\\host.rs"
                                           ,1);
                    if (cVar23 != '\0') goto LAB_18019b66e;
                    if (uVar29 != 7) goto LAB_18019b91e;
                  }
                }
              }
            }
          }
        }
LAB_18019b6c1:
        pcVar26 = (char *)CONCAT71(uVar27,1);
        cVar23 = FUN_1801f0c50(param_2,
                               ":C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\url-2.5.8\\src\\host.rs"
                               ,1);
        if (cVar23 == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar24,8,&DAT_180267cc0);
        }
        goto LAB_18019b66e;
      }
    }
LAB_18019b66b:
    pcVar26 = (char *)CONCAT71((int7)((ulonglong)pcVar26 >> 8),1);
  }
  else {
    if (uVar29 == 0) {
      cVar23 = FUN_1801f0c50(param_2,
                             ":C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\url-2.5.8\\src\\host.rs"
                             ,1);
      pcVar26 = (char *)CONCAT71(uVar27,1);
      if (cVar23 != '\0') goto LAB_18019b66e;
LAB_18019b61c:
      pcVar26 = (char *)CONCAT71(uVar27,1);
      cVar23 = FUN_1801f0c50(param_2,
                             ":C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\url-2.5.8\\src\\host.rs"
                             ,1);
      if (cVar23 != '\0') goto LAB_18019b66e;
    }
    else {
      local_60 = local_50;
      local_58 = FUN_1801eeae0;
      cVar23 = FUN_1801ef150(*param_2,param_2[1],&DAT_180267cd8,&local_60);
      if (cVar23 != '\0') goto LAB_18019b66b;
      cVar23 = FUN_1801f0c50(param_2,
                             ":C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\url-2.5.8\\src\\host.rs"
                             ,1);
      pcVar26 = (char *)CONCAT71(uVar27,1);
      if (cVar23 != '\0') goto LAB_18019b66e;
      if (uVar29 == 1) goto LAB_18019b61c;
      local_58 = FUN_1801eeae0;
      local_60 = local_50 + 1;
      cVar23 = FUN_1801ef150(*param_2,param_2[1],&DAT_180267cd8,&local_60);
      if (cVar23 != '\0') goto LAB_18019b66b;
      cVar23 = FUN_1801f0c50(param_2,
                             ":C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\url-2.5.8\\src\\host.rs"
                             ,1);
      if (cVar23 != '\0') goto LAB_18019b66e;
      if (uVar29 == 2) goto LAB_18019b61c;
      local_58 = FUN_1801eeae0;
      local_60 = local_50 + 2;
      cVar23 = FUN_1801ef150(*param_2,param_2[1],&DAT_180267cd8,&local_60);
      if (cVar23 != '\0') goto LAB_18019b66b;
      cVar23 = FUN_1801f0c50(param_2,
                             ":C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\url-2.5.8\\src\\host.rs"
                             ,1);
      if (cVar23 != '\0') goto LAB_18019b66e;
      if (uVar29 == 3) goto LAB_18019b61c;
      local_58 = FUN_1801eeae0;
      local_60 = (ushort *)&local_4a;
      cVar23 = FUN_1801ef150(*param_2,param_2[1],&DAT_180267cd8,&local_60);
      if (cVar23 != '\0') goto LAB_18019b66b;
      cVar23 = FUN_1801f0c50(param_2,
                             ":C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\url-2.5.8\\src\\host.rs"
                             ,1);
      if (cVar23 != '\0') goto LAB_18019b66e;
      if (uVar29 == 4) goto LAB_18019b61c;
      local_58 = FUN_1801eeae0;
      local_60 = (ushort *)((longlong)&local_4a + 2);
      cVar23 = FUN_1801ef150(*param_2,param_2[1],&DAT_180267cd8,&local_60);
      if (cVar23 != '\0') goto LAB_18019b66b;
      cVar23 = FUN_1801f0c50(param_2,
                             ":C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\url-2.5.8\\src\\host.rs"
                             ,1);
      if (cVar23 != '\0') goto LAB_18019b66e;
      if (uVar29 == 5) goto LAB_18019b61c;
      local_60 = (ushort *)((longlong)&local_4a + 4);
      local_58 = FUN_1801eeae0;
      cVar23 = FUN_1801ef150(*param_2,param_2[1],&DAT_180267cd8,&local_60);
      if (cVar23 != '\0') goto LAB_18019b66b;
      cVar23 = FUN_1801f0c50(param_2,
                             ":C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\url-2.5.8\\src\\host.rs"
                             ,1);
      if (cVar23 != '\0') goto LAB_18019b66e;
      if (uVar29 == 6) goto LAB_18019b61c;
      local_60 = (ushort *)((longlong)&local_4a + 6);
      local_58 = FUN_1801eeae0;
      cVar23 = FUN_1801ef150(*param_2,param_2[1],&DAT_180267cd8,&local_60);
      if (cVar23 != '\0') goto LAB_18019b66b;
      cVar23 = FUN_1801f0c50(param_2,
                             ":C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\url-2.5.8\\src\\host.rs"
                             ,1);
      if (cVar23 != '\0') goto LAB_18019b66e;
      if (uVar29 == 7) goto LAB_18019b61c;
LAB_18019b91e:
      local_58 = FUN_1801eeae0;
      local_60 = &local_42;
      pcVar26 = (char *)CONCAT71(uVar27,1);
      cVar23 = FUN_1801ef150(*param_2,param_2[1],&DAT_180267cd8,&local_60);
      if (cVar23 != '\0') goto LAB_18019b66b;
    }
LAB_18019b635:
    pcVar26 = (char *)0x0;
  }
LAB_18019b66e:
  return (ulonglong)pcVar26 & 0xffffffff;
}


