/* FUN_180144a00 @ 180144a00 */

ulonglong FUN_180144a00(int *param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined5 uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  char cVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  longlong *plVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined7 uVar24;
  byte local_280;
  undefined4 local_27f;
  undefined4 uStack_27b;
  undefined4 uStack_277;
  undefined4 uStack_273;
  undefined4 local_26f;
  undefined4 uStack_26b;
  undefined4 uStack_267;
  undefined4 uStack_263;
  undefined4 uStack_25f;
  undefined4 uStack_25b;
  undefined4 uStack_257;
  undefined4 uStack_253;
  undefined3 uStack_24f;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  char local_240;
  undefined4 uStack_23f;
  undefined3 uStack_23b;
  byte local_238;
  undefined4 local_237;
  undefined4 uStack_233;
  undefined4 uStack_22f;
  undefined4 uStack_22b;
  undefined4 local_227;
  undefined4 uStack_223;
  undefined4 uStack_21f;
  undefined4 uStack_21b;
  undefined4 uStack_217;
  undefined4 uStack_213;
  undefined4 uStack_20f;
  undefined4 uStack_20b;
  undefined3 uStack_207;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  char local_1f8;
  undefined4 uStack_1f7;
  undefined3 uStack_1f3;
  byte local_1f0;
  undefined4 local_1ef;
  undefined4 uStack_1eb;
  undefined4 uStack_1e7;
  undefined4 uStack_1e3;
  undefined4 local_1df;
  undefined4 uStack_1db;
  undefined4 uStack_1d7;
  undefined4 uStack_1d3;
  undefined4 uStack_1cf;
  undefined4 uStack_1cb;
  undefined4 uStack_1c7;
  undefined4 uStack_1c3;
  undefined3 uStack_1bf;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  char local_1b0;
  undefined4 uStack_1af;
  undefined3 uStack_1ab;
  longlong local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  int *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  longlong local_c8;
  longlong *local_c0 [2];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  byte local_98;
  byte bStack_97;
  undefined2 uStack_96;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  param_1[0] = 0;
  param_1[1] = 0;
  if (*param_1 == 1) {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 2);
  }
  local_118 = param_3;
  if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
     (((uVar19 = (uint)DAT_1802fccb0, uVar19 - 1 < 2 ||
       ((uVar19 != 0 && (uVar19 = FUN_1801faaf0(&PTR_DAT_1802fcca0), (char)uVar19 != '\0')))) &&
      (cVar12 = FUN_1801601d0(PTR_DAT_1802fcca0,uVar19), cVar12 != '\0')))) {
    uStack_80 = PTR_DAT_1802fcca0 + 0x30;
    local_98 = 1;
    bStack_97 = 0;
    uStack_96 = 0;
    uStack_94 = 0;
    uStack_90._0_4_ = 8;
    uStack_90._4_4_ = 0;
    uStack_88._0_4_ = 0;
    uStack_88._4_4_ = 0;
    FUN_180160410(&local_c8,PTR_DAT_1802fcca0,&local_98);
    if (local_c8 != 2) {
      FUN_180161780(&local_c8,&local_b0);
    }
  }
  else {
    local_c8 = 2;
    local_a8 = 0;
  }
  local_168 = (undefined8 *)CONCAT44(local_168._4_4_,(undefined4)local_168);
  uStack_90 = (undefined8 *)CONCAT44(uStack_90._4_4_,(undefined4)uStack_90);
  if (*(longlong *)PTR_DAT_1802fd448 != 0) goto LAB_180144a85;
  uVar19 = (uint)DAT_1802fcd28;
  if (1 < uVar19 - 1) {
    local_168 = (undefined8 *)CONCAT44(local_168._4_4_,(undefined4)local_168);
    uStack_90 = (undefined8 *)CONCAT44(uStack_90._4_4_,(undefined4)uStack_90);
    if (uVar19 == 0) goto LAB_180144a85;
    uVar19 = FUN_1801faaf0(&PTR_DAT_1802fcd18);
    if ((char)uVar19 == '\0') goto LAB_180144a85;
  }
  cVar12 = FUN_1801601d0(PTR_DAT_1802fcd18,uVar19);
  local_168 = (undefined8 *)CONCAT44(local_168._4_4_,(undefined4)local_168);
  uStack_90 = (undefined8 *)CONCAT44(uStack_90._4_4_,(undefined4)uStack_90);
  if (cVar12 != '\0') {
    uStack_80 = PTR_DAT_1802fcd18 + 0x30;
    local_110 = "decode";
    uStack_108 = (byte *)0xd;
    local_168 = &local_110;
    uStack_160._0_4_ = 0x80252448;
    uStack_160._4_4_ = 1;
    local_98 = 1;
    bStack_97 = 0;
    uStack_96 = 0;
    uStack_94 = 0;
    uStack_90 = &local_168;
    uStack_88._0_4_ = 1;
    uStack_88._4_4_ = 0;
    FUN_180160ae0(PTR_DAT_1802fcd18,&local_98);
  }
LAB_180144a85:
  local_120 = param_1 + 4;
  bVar23 = true;
  plVar21 = (longlong *)*param_2;
  uVar18 = param_2[1];
  if (uVar18 < (ulonglong)plVar21[1]) {
LAB_180144b14:
    do {
      bVar6 = *(byte *)(*plVar21 + uVar18);
      if ((char)bVar6 < '\0') {
        if (*(longlong *)PTR_DAT_1802fd448 == 0) {
          uVar19 = (uint)DAT_1802fccf8;
          if (uVar19 - 1 < 2) {
LAB_180144f0b:
            cVar12 = FUN_1801601d0(PTR_DAT_1802fcce8,uVar19);
            if (cVar12 != '\0') {
              uStack_80 = PTR_DAT_1802fcce8 + 0x30;
              local_1a8 = 0;
              if (uVar18 <= (ulonglong)plVar21[1]) {
                local_1a8 = plVar21[1] - uVar18;
              }
              local_168._0_4_ = 0x80252fe0;
              local_168._4_4_ = 1;
              local_110 = (char *)&local_1a8;
              uStack_108 = &DAT_180252840;
              local_100 = &local_168;
              uStack_f8 = &DAT_180252ff0;
              local_98 = 1;
              bStack_97 = 0;
              uStack_96 = 0;
              uStack_94 = 0;
              uStack_90 = &local_110;
              uStack_88._0_4_ = 2;
              uStack_88._4_4_ = 0;
              FUN_180160ae0(PTR_DAT_1802fcce8,&local_98);
            }
          }
          else if (uVar19 != 0) {
            uVar19 = FUN_1801faaf0(&PTR_DAT_1802fcce8);
            if ((char)uVar19 != '\0') goto LAB_180144f0b;
          }
        }
        FUN_180143720(&local_110,param_2,7);
        if ((char)local_110 != '\x01') {
          FUN_180143b70(&local_98,local_120,uStack_108);
          uVar18 = (ulonglong)local_98;
          if ((char)local_58 == '\b') goto LAB_180145a42;
          local_1ef = CONCAT13((undefined1)uStack_94,CONCAT21(uStack_96,bStack_97));
          uStack_1eb = CONCAT13((undefined1)uStack_90,uStack_94._1_3_);
          uStack_1e7 = (undefined4)((ulonglong)uStack_90 >> 8);
          uStack_1e3 = CONCAT13((undefined1)uStack_88,uStack_90._5_3_);
          local_1df = (undefined4)((ulonglong)uStack_88 >> 8);
          uStack_1db = CONCAT13((undefined1)uStack_80,uStack_88._5_3_);
          uStack_1d7 = (undefined4)((ulonglong)uStack_80 >> 8);
          uStack_1d3 = CONCAT13((undefined1)uStack_78,uStack_80._5_3_);
          uStack_1cf = (undefined4)((ulonglong)uStack_78 >> 8);
          uStack_1cb = CONCAT13((undefined1)uStack_70,uStack_78._5_3_);
          uStack_1c7 = CONCAT13((undefined1)uStack_6c,uStack_70._1_3_);
          uStack_1c3 = CONCAT13((undefined1)uStack_68,uStack_6c._1_3_);
          uStack_1bf = (undefined3)((uint)uStack_68 >> 8);
          uStack_1bc = uStack_64;
          uStack_1b8 = uStack_60;
          uStack_1b4 = uStack_5c;
          uStack_1ab = (undefined3)((ulonglong)local_58 >> 0x28);
          uStack_1af = local_58._1_4_;
          local_1f0 = local_98;
          local_1b0 = (char)local_58;
          local_4b = 1;
          FUN_180143990(&local_98,param_2,0);
          local_4b = 1;
          (**(code **)(CONCAT44(uStack_94,CONCAT22(uStack_96,CONCAT11(bStack_97,local_98))) + 0x20))
                    (uStack_80,uStack_90,uStack_88);
          local_4b = 0;
          cVar12 = FUN_180141060(local_118,&local_1f0);
          goto LAB_180144b00;
        }
        uVar18 = (ulonglong)local_110 >> 8 & 0xff;
        if ((int)local_c8 == 2) goto LAB_180145a9c;
LAB_180145a4b:
        FUN_180161750(&local_c8,&local_b0);
        lVar15 = local_c8;
        if (local_c8 == 2) goto LAB_180145a9c;
        FUN_1801617b0(&local_c8,local_b0);
        goto LAB_180145a7e;
      }
      if (0x3f < bVar6) {
        if (*(longlong *)PTR_DAT_1802fd448 == 0) {
          uVar19 = (uint)DAT_1802fccc8;
          if (uVar19 - 1 < 2) {
LAB_180144fd6:
            cVar12 = FUN_1801601d0(PTR_DAT_1802fccb8,uVar19);
            if (cVar12 != '\0') {
              uStack_80 = PTR_DAT_1802fccb8 + 0x30;
              local_1a8 = 0;
              if (uVar18 <= (ulonglong)plVar21[1]) {
                local_1a8 = plVar21[1] - uVar18;
              }
              local_168._0_4_ = 0x80253028;
              local_168._4_4_ = 1;
              local_110 = (char *)&local_1a8;
              uStack_108 = &DAT_180252840;
              local_100 = &local_168;
              uStack_f8 = &DAT_180252ff0;
              local_98 = 1;
              bStack_97 = 0;
              uStack_96 = 0;
              uStack_94 = 0;
              uStack_90 = &local_110;
              uStack_88._0_4_ = 2;
              uStack_88._4_4_ = 0;
              FUN_180160ae0(PTR_DAT_1802fccb8,&local_98);
            }
          }
          else if (uVar19 != 0) {
            uVar19 = FUN_1801faaf0(&PTR_DAT_1802fccb8);
            if ((char)uVar19 != '\0') goto LAB_180144fd6;
          }
        }
        FUN_180143ff0(&local_98,param_1,param_2,1);
        uVar18 = (ulonglong)local_98;
        if ((char)local_58 == '\b') {
LAB_180145a42:
          goto joined_r0x000180145a36;
        }
        uStack_134 = uStack_64;
        uStack_130 = uStack_60;
        uStack_12c = uStack_5c;
        uStack_140 = uStack_70;
        uStack_13c = uStack_6c;
        uStack_138 = uStack_68;
        local_168._4_4_ = uStack_94;
        local_168._0_4_ = CONCAT31(CONCAT21(uStack_96,bStack_97),local_98);
        local_128 = (undefined4)local_58;
        local_49 = 1;
        uStack_124 = local_58._4_4_;
        uStack_160 = uStack_90;
        uStack_150 = uStack_80;
        uStack_158 = uStack_88;
        uStack_148 = uStack_78;
        FUN_180146e00(&local_110,&local_168);
        local_4a = 1;
        uVar18 = FUN_180147900(&local_110);
        while( true ) {
          if ((*(longlong *)(param_1 + 0xc) + uVar18 <= *(ulonglong *)(param_1 + 0xe)) ||
             (*(longlong *)(param_1 + 10) == 0)) break;
          lVar15 = *(longlong *)(param_1 + 10) + -1;
          *(longlong *)(param_1 + 10) = lVar15;
          uVar16 = lVar15 + *(longlong *)(param_1 + 8);
          lVar15 = *(longlong *)(param_1 + 6);
          uVar14 = 0;
          if (*(ulonglong *)(param_1 + 4) <= uVar16) {
            uVar14 = *(ulonglong *)(param_1 + 4);
          }
          lVar20 = uVar16 - uVar14;
          plVar21 = (longlong *)(lVar15 + lVar20 * 0x48);
          lVar17 = *plVar21;
          local_1a8 = *plVar21;
          uStack_1a0 = (undefined4)plVar21[1];
          uStack_19c = *(undefined4 *)((longlong)plVar21 + 0xc);
          puVar2 = (undefined8 *)(lVar15 + 0x10 + lVar20 * 0x48);
          local_198 = *puVar2;
          uStack_190 = puVar2[1];
          puVar2 = (undefined8 *)(lVar15 + 0x20 + lVar20 * 0x48);
          local_188 = *puVar2;
          uStack_180 = puVar2[1];
          puVar2 = (undefined8 *)(lVar15 + 0x30 + lVar20 * 0x48);
          local_178 = *puVar2;
          uStack_170 = puVar2[1];
          cVar12 = *(char *)(lVar15 + 0x40 + lVar20 * 0x48);
          uVar7 = *(undefined4 *)(lVar15 + 0x44 + lVar20 * 0x48);
          uVar9 = CONCAT14(local_a0._7_1_,uVar7);
          uVar8 = *(undefined4 *)(lVar15 + 0x41 + lVar20 * 0x48);
          local_a0 = (undefined8 *)CONCAT44((int)((uint5)uVar9 >> 8),uVar8);
          if (cVar12 == '\b') break;
          local_198._4_4_ = (undefined4)((ulonglong)local_198 >> 0x20);
          uStack_190._4_4_ = (undefined4)((ulonglong)uStack_190 >> 0x20);
          local_188._4_4_ = (undefined4)((ulonglong)local_188 >> 0x20);
          uStack_180._4_4_ = (undefined4)((ulonglong)uStack_180 >> 0x20);
          local_178._4_4_ = (undefined4)((ulonglong)local_178 >> 0x20);
          uStack_170._4_4_ = (undefined4)((ulonglong)uStack_170 >> 0x20);
          uStack_68 = (undefined4)local_178;
          uStack_64 = local_178._4_4_;
          uStack_60 = (undefined4)uStack_170;
          uStack_5c = uStack_170._4_4_;
          uStack_78._0_4_ = (undefined4)local_188;
          uStack_78._4_4_ = local_188._4_4_;
          uStack_70 = (undefined4)uStack_180;
          uStack_6c = uStack_180._4_4_;
          uStack_88._0_4_ = (undefined4)local_198;
          uStack_88._4_4_ = local_198._4_4_;
          uStack_80._0_4_ = (undefined4)uStack_190;
          uStack_80._4_4_ = uStack_190._4_4_;
          local_98 = (byte)lVar17;
          bStack_97 = (byte)((ulonglong)lVar17 >> 8);
          uStack_96 = (undefined2)((ulonglong)lVar17 >> 0x10);
          local_58._5_3_ = (undefined3)((uint)uVar7 >> 8);
          local_58._0_5_ = CONCAT41(uVar8,cVar12);
          uStack_94 = *(undefined4 *)((longlong)plVar21 + 4);
          uStack_90._0_4_ = uStack_1a0;
          uStack_90._4_4_ = uStack_19c;
          lVar15 = FUN_180147900(&local_98);
          *(longlong *)(param_1 + 0xc) = *(longlong *)(param_1 + 0xc) - lVar15;
          local_4a = 1;
          FUN_180146060(&local_98);
        }
        uVar14 = *(longlong *)(param_1 + 0xc) + uVar18;
        if (*(ulonglong *)(param_1 + 0xe) < uVar14) {
          local_49 = 1;
          FUN_180146060(&local_110);
        }
        else {
          *(ulonglong *)(param_1 + 0xc) = uVar14;
          local_58 = local_d0;
          uStack_68 = local_e0;
          uStack_64 = uStack_dc;
          uStack_60 = uStack_d8;
          uStack_5c = uStack_d4;
          uStack_78._0_4_ = local_f0;
          uStack_78._4_4_ = uStack_ec;
          uStack_70 = uStack_e8;
          uStack_6c = uStack_e4;
          uStack_88._0_4_ = (undefined4)local_100;
          uStack_88._4_4_ = local_100._4_4_;
          uStack_80._0_4_ = (undefined4)uStack_f8;
          uStack_80._4_4_ = uStack_f8._4_4_;
          local_98 = (byte)local_110;
          bStack_97 = (byte)((ulonglong)local_110 >> 8);
          uStack_96 = (undefined2)((ulonglong)local_110 >> 0x10);
          uStack_94 = local_110._4_4_;
          uStack_90._0_4_ = (undefined4)uStack_108;
          uStack_90._4_4_ = uStack_108._4_4_;
          uVar14 = *(ulonglong *)(param_1 + 4);
          uVar16 = *(ulonglong *)(param_1 + 10);
          if (uVar16 == uVar14) {
            FUN_18015dd20(local_120);
            uVar14 = *(ulonglong *)(param_1 + 4);
            uVar16 = *(ulonglong *)(param_1 + 10);
          }
          lVar15 = *(longlong *)(param_1 + 6);
          uVar22 = *(longlong *)(param_1 + 8) - 1;
          uVar13 = uVar14 + uVar22;
          if (!CARRY8(uVar14,uVar22)) {
            uVar13 = uVar22;
          }
          *(ulonglong *)(param_1 + 8) = uVar13;
          *(ulonglong *)(param_1 + 10) = uVar16 + 1;
          puVar1 = (undefined4 *)(lVar15 + uVar13 * 0x48);
          *puVar1 = CONCAT22(uStack_96,CONCAT11(bStack_97,local_98));
          puVar1[1] = uStack_94;
          puVar1[2] = (undefined4)uStack_90;
          puVar1[3] = uStack_90._4_4_;
          puVar2 = (undefined8 *)(lVar15 + 0x10 + uVar13 * 0x48);
          *puVar2 = CONCAT44(uStack_88._4_4_,(undefined4)uStack_88);
          puVar2[1] = CONCAT44(uStack_80._4_4_,(undefined4)uStack_80);
          puVar2 = (undefined8 *)(lVar15 + 0x20 + uVar13 * 0x48);
          *puVar2 = CONCAT44(uStack_78._4_4_,(undefined4)uStack_78);
          puVar2[1] = CONCAT44(uStack_6c,uStack_70);
          puVar2 = (undefined8 *)(lVar15 + 0x30 + uVar13 * 0x48);
          *puVar2 = CONCAT44(uStack_64,uStack_68);
          puVar2[1] = CONCAT44(uStack_5c,uStack_60);
          *(undefined8 *)(lVar15 + 0x40 + uVar13 * 0x48) = local_58;
        }
        local_49 = 1;
        FUN_180143990(&local_98,param_2,0);
        local_49 = 1;
        (**(code **)(CONCAT44(uStack_94,CONCAT22(uStack_96,CONCAT11(bStack_97,local_98))) + 0x20))
                  (uStack_80,uStack_90,uStack_88);
        local_58 = CONCAT44(uStack_124,local_128);
        uStack_68 = uStack_138;
        uStack_64 = uStack_134;
        uStack_60 = uStack_130;
        uStack_5c = uStack_12c;
        uStack_70 = uStack_140;
        uStack_6c = uStack_13c;
        local_98 = (byte)(undefined4)local_168;
        bStack_97 = (byte)((uint)(undefined4)local_168 >> 8);
        uStack_96 = (undefined2)((uint)(undefined4)local_168 >> 0x10);
        uStack_94 = local_168._4_4_;
        local_49 = 0;
        uStack_90 = uStack_160;
        uStack_80 = uStack_150;
        uStack_88 = uStack_158;
        uStack_78 = uStack_148;
        cVar12 = FUN_180141060(local_118,&local_98);
LAB_180144b00:
        bVar23 = false;
        if (cVar12 != '\0') break;
        plVar21 = (longlong *)*param_2;
        uVar18 = param_2[1];
        if ((ulonglong)plVar21[1] <= uVar18) break;
        goto LAB_180144b14;
      }
      if ((bVar6 & 0x30) == 0) {
        if (*(longlong *)PTR_DAT_1802fd448 == 0) {
          uVar19 = (uint)DAT_1802fcc98;
          if (uVar19 - 1 < 2) {
LAB_180145558:
            cVar12 = FUN_1801601d0(PTR_DAT_1802fcc88,uVar19);
            if (cVar12 != '\0') {
              uStack_80 = PTR_DAT_1802fcc88 + 0x30;
              local_1a8 = plVar21[1] - uVar18;
              if ((ulonglong)plVar21[1] < uVar18) {
                local_1a8 = 0;
              }
              local_168._0_4_ = 0x80253050;
              local_168._4_4_ = 1;
              local_110 = (char *)&local_1a8;
              uStack_108 = &DAT_180252840;
              local_100 = &local_168;
              uStack_f8 = &DAT_180252ff0;
              local_98 = 1;
              bStack_97 = 0;
              uStack_96 = 0;
              uStack_94 = 0;
              uStack_90 = &local_110;
              uStack_88._0_4_ = 2;
              uStack_88._4_4_ = 0;
              FUN_180160ae0(PTR_DAT_1802fcc88,&local_98);
            }
          }
          else if (uVar19 != 0) {
            uVar19 = FUN_1801faaf0(&PTR_DAT_1802fcc88);
            if ((char)uVar19 != '\0') goto LAB_180145558;
          }
        }
        FUN_180143ff0(&local_98,param_1,param_2,0);
        uVar18 = (ulonglong)local_98;
        if ((char)local_58 == '\b') goto LAB_180145a42;
        local_237 = CONCAT13((undefined1)uStack_94,CONCAT21(uStack_96,bStack_97));
        uStack_233 = CONCAT13((undefined1)uStack_90,uStack_94._1_3_);
        uStack_22f = (undefined4)((ulonglong)uStack_90 >> 8);
        uStack_22b = CONCAT13((undefined1)uStack_88,uStack_90._5_3_);
        local_227 = (undefined4)((ulonglong)uStack_88 >> 8);
        uStack_223 = CONCAT13((undefined1)uStack_80,uStack_88._5_3_);
        uStack_21f = (undefined4)((ulonglong)uStack_80 >> 8);
        uStack_21b = CONCAT13((undefined1)uStack_78,uStack_80._5_3_);
        uStack_217 = (undefined4)((ulonglong)uStack_78 >> 8);
        uStack_213 = CONCAT13((undefined1)uStack_70,uStack_78._5_3_);
        uStack_20f = CONCAT13((undefined1)uStack_6c,uStack_70._1_3_);
        uStack_20b = CONCAT13((undefined1)uStack_68,uStack_6c._1_3_);
        uStack_207 = (undefined3)((uint)uStack_68 >> 8);
        uStack_204 = uStack_64;
        uStack_200 = uStack_60;
        uStack_1fc = uStack_5c;
        uStack_1f3 = (undefined3)((ulonglong)local_58 >> 0x28);
        uStack_1f7 = local_58._1_4_;
        local_238 = local_98;
        local_1f8 = (char)local_58;
        local_4c = 1;
        FUN_180143990(&local_98,param_2,0);
        local_4c = 1;
        (**(code **)(CONCAT44(uStack_94,CONCAT22(uStack_96,CONCAT11(bStack_97,local_98))) + 0x20))
                  (uStack_80,uStack_90,uStack_88);
        local_4c = 0;
        cVar12 = FUN_180141060(local_118,&local_238);
        goto LAB_180144b00;
      }
      if ((bVar6 & 0x30) == 0x10) {
        if (*(longlong *)PTR_DAT_1802fd448 == 0) {
          uVar19 = (uint)DAT_1802fcce0;
          if (uVar19 - 1 < 2) {
LAB_18014548d:
            cVar12 = FUN_1801601d0(PTR_DAT_1802fccd0,uVar19);
            if (cVar12 != '\0') {
              uStack_80 = PTR_DAT_1802fccd0 + 0x30;
              local_1a8 = 0;
              if (uVar18 <= (ulonglong)plVar21[1]) {
                local_1a8 = plVar21[1] - uVar18;
              }
              local_168._0_4_ = 0x80253078;
              local_168._4_4_ = 1;
              local_110 = (char *)&local_1a8;
              uStack_108 = &DAT_180252840;
              local_100 = &local_168;
              uStack_f8 = &DAT_180252ff0;
              local_98 = 1;
              bStack_97 = 0;
              uStack_96 = 0;
              uStack_94 = 0;
              uStack_90 = &local_110;
              uStack_88._0_4_ = 2;
              uStack_88._4_4_ = 0;
              FUN_180160ae0(PTR_DAT_1802fccd0,&local_98);
            }
          }
          else if (uVar19 != 0) {
            uVar19 = FUN_1801faaf0(&PTR_DAT_1802fccd0);
            if ((char)uVar19 != '\0') goto LAB_18014548d;
          }
        }
        FUN_180143ff0(&local_98,param_1,param_2,0);
        uVar18 = (ulonglong)local_98;
        if ((char)local_58 == '\b') goto LAB_180145a42;
        local_27f = CONCAT13((undefined1)uStack_94,CONCAT21(uStack_96,bStack_97));
        uStack_27b = CONCAT13((undefined1)uStack_90,uStack_94._1_3_);
        uStack_277 = (undefined4)((ulonglong)uStack_90 >> 8);
        uStack_273 = CONCAT13((undefined1)uStack_88,uStack_90._5_3_);
        local_26f = (undefined4)((ulonglong)uStack_88 >> 8);
        uStack_26b = CONCAT13((undefined1)uStack_80,uStack_88._5_3_);
        uStack_267 = (undefined4)((ulonglong)uStack_80 >> 8);
        uStack_263 = CONCAT13((undefined1)uStack_78,uStack_80._5_3_);
        uStack_25f = (undefined4)((ulonglong)uStack_78 >> 8);
        uStack_25b = CONCAT13((undefined1)uStack_70,uStack_78._5_3_);
        uStack_257 = CONCAT13((undefined1)uStack_6c,uStack_70._1_3_);
        uStack_253 = CONCAT13((undefined1)uStack_68,uStack_6c._1_3_);
        uStack_24f = (undefined3)((uint)uStack_68 >> 8);
        uStack_24c = uStack_64;
        uStack_248 = uStack_60;
        uStack_244 = uStack_5c;
        uStack_23b = (undefined3)((ulonglong)local_58 >> 0x28);
        uStack_23f = local_58._1_4_;
        local_280 = local_98;
        local_240 = (char)local_58;
        local_4d = 1;
        FUN_180143990(&local_98,param_2,0);
        local_4d = 1;
        (**(code **)(CONCAT44(uStack_94,CONCAT22(uStack_96,CONCAT11(bStack_97,local_98))) + 0x20))
                  (uStack_80,uStack_90,uStack_88);
        local_4d = 0;
        cVar12 = FUN_180141060(local_118,&local_280);
        goto LAB_180144b00;
      }
      uVar24 = (undefined7)(uVar18 >> 8);
      if (bVar6 < 0x20) {
        uVar18 = CONCAT71(uVar24,3);
joined_r0x000180145a36:
        if ((int)local_c8 != 2) goto LAB_180145a4b;
        goto LAB_180145a9c;
      }
      if (*(longlong *)PTR_DAT_1802fd448 == 0) {
        uVar19 = (uint)DAT_1802fcd10;
        if (uVar19 - 1 < 2) {
LAB_180145623:
          cVar12 = FUN_1801601d0(PTR_DAT_1802fcd00,uVar19);
          if (cVar12 != '\0') {
            uStack_80 = PTR_DAT_1802fcd00 + 0x30;
            local_1a8 = 0;
            if (uVar18 <= (ulonglong)plVar21[1]) {
              local_1a8 = plVar21[1] - uVar18;
            }
            local_168._0_4_ = 0x80253098;
            local_168._4_4_ = 1;
            local_110 = (char *)&local_1a8;
            uStack_108 = &DAT_180252840;
            local_100 = &local_168;
            uStack_f8 = &DAT_180252ff0;
            local_98 = 1;
            bStack_97 = 0;
            uStack_96 = 0;
            uStack_94 = 0;
            uStack_90 = &local_110;
            uStack_88._0_4_ = 2;
            uStack_88._4_4_ = 0;
            FUN_180160ae0(PTR_DAT_1802fcd00,&local_98);
          }
        }
        else if (uVar19 != 0) {
          uVar19 = FUN_1801faaf0(&PTR_DAT_1802fcd00);
          if ((char)uVar19 != '\0') goto LAB_180145623;
        }
      }
      if (!bVar23) {
LAB_180145a1e:
        uVar18 = CONCAT71(uVar24,10);
        goto joined_r0x000180145a36;
      }
      FUN_180143720(&local_98,param_2,5);
      puVar2 = uStack_90;
      if (local_98 == 1) {
        uVar18 = (ulonglong)bStack_97;
        goto LAB_180145a42;
      }
      local_a0 = uStack_90;
      if (*(undefined8 **)(param_1 + 0x18) < uStack_90) goto LAB_180145a1e;
      if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
        uVar19 = (uint)DAT_1802fcc80;
        if (uVar19 - 1 < 2) {
LAB_1801451e3:
          cVar12 = FUN_1801601d0(PTR_DAT_1802fcc70,uVar19);
          if (cVar12 != '\0') {
            uStack_f8 = PTR_DAT_1802fcc70 + 0x30;
            local_168._0_4_ = 0x80252980;
            local_168._4_4_ = 1;
            uStack_160._0_4_ = 0x3d;
            uStack_160._4_4_ = 0;
            local_1a8 = *(longlong *)(param_1 + 0xc);
            local_98 = (byte)&local_168;
            bStack_97 = (byte)((ulonglong)&local_168 >> 8);
            uStack_96 = (undefined2)((ulonglong)&local_168 >> 0x10);
            uStack_94 = (undefined4)((ulonglong)&local_168 >> 0x20);
            uStack_90._0_4_ = 0x80252448;
            uStack_90._4_4_ = 1;
            uStack_88 = &local_1a8;
            uStack_80._0_4_ = 0x80252840;
            uStack_80._4_4_ = 1;
            uStack_78 = &local_a0;
            uStack_70 = 0x80252840;
            uStack_6c = 1;
            local_110 = (char *)0x1;
            local_100 = (undefined8 *)0x3;
            uStack_108 = &local_98;
            FUN_180160ae0(PTR_DAT_1802fcc70,&local_110);
          }
        }
        else if (uVar19 != 0) {
          uVar19 = FUN_1801faaf0(&PTR_DAT_1802fcc70);
          if ((char)uVar19 != '\0') goto LAB_1801451e3;
        }
      }
      *(undefined8 **)(param_1 + 0xe) = puVar2;
      if (puVar2 < *(undefined8 **)(param_1 + 0xc)) {
        do {
          if (*(longlong *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_180201ee0("Size of table != 0, but no headers left!",0x51,&DAT_180252620);
          }
          uVar14 = (*(longlong *)(param_1 + 10) + *(longlong *)(param_1 + 8)) - 1;
          uVar18 = 0;
          if (*(ulonglong *)(param_1 + 4) <= uVar14) {
            uVar18 = *(ulonglong *)(param_1 + 4);
          }
          lVar15 = FUN_180147900((uVar14 - uVar18) * 0x48 + *(longlong *)(param_1 + 6));
          uVar18 = *(longlong *)(param_1 + 0xc) - lVar15;
          *(ulonglong *)(param_1 + 0xc) = uVar18;
          plVar21 = uStack_88;
          puVar2 = uStack_78;
          puVar10 = uStack_90;
          puVar11 = uStack_80;
          if (*(longlong *)(param_1 + 10) != 0) {
            lVar15 = *(longlong *)(param_1 + 10) + -1;
            *(longlong *)(param_1 + 10) = lVar15;
            uVar16 = lVar15 + *(longlong *)(param_1 + 8);
            lVar15 = *(longlong *)(param_1 + 6);
            uVar14 = 0;
            if (*(ulonglong *)(param_1 + 4) <= uVar16) {
              uVar14 = *(ulonglong *)(param_1 + 4);
            }
            lVar17 = uVar16 - uVar14;
            local_58 = *(undefined8 *)(lVar15 + 0x40 + lVar17 * 0x48);
            puVar1 = (undefined4 *)(lVar15 + lVar17 * 0x48);
            uVar7 = *puVar1;
            uStack_94 = puVar1[1];
            uStack_90._0_4_ = (undefined4)*(longlong *)(puVar1 + 2);
            uStack_90._4_4_ = puVar1[3];
            plVar3 = (longlong *)(lVar15 + 0x10 + lVar17 * 0x48);
            uStack_88._0_4_ = (undefined4)*plVar3;
            uStack_88._4_4_ = *(undefined4 *)((longlong)plVar3 + 4);
            uStack_80._0_4_ = (undefined4)plVar3[1];
            uStack_80._4_4_ = *(undefined4 *)((longlong)plVar3 + 0xc);
            plVar4 = (longlong *)(lVar15 + 0x20 + lVar17 * 0x48);
            uStack_78._0_4_ = (undefined4)*plVar4;
            uStack_78._4_4_ = *(undefined4 *)((longlong)plVar4 + 4);
            uStack_70 = (undefined4)plVar4[1];
            uStack_6c = *(undefined4 *)((longlong)plVar4 + 0xc);
            puVar5 = (undefined4 *)(lVar15 + 0x30 + lVar17 * 0x48);
            uStack_68 = *puVar5;
            uStack_64 = puVar5[1];
            uStack_60 = puVar5[2];
            uStack_5c = puVar5[3];
            local_98 = (byte)uVar7;
            bStack_97 = (byte)((uint)uVar7 >> 8);
            uStack_96 = (undefined2)((uint)uVar7 >> 0x10);
            plVar21 = (longlong *)*plVar3;
            puVar2 = (undefined8 *)*plVar4;
            puVar10 = *(undefined8 **)(puVar1 + 2);
            puVar11 = (undefined *)plVar3[1];
            if ((char)local_58 != '\b') {
              FUN_180146060(&local_98);
              uVar18 = *(ulonglong *)(param_1 + 0xc);
              plVar21 = (longlong *)CONCAT44(uStack_88._4_4_,(undefined4)uStack_88);
              puVar2 = (undefined8 *)CONCAT44(uStack_78._4_4_,(undefined4)uStack_78);
              puVar10 = (undefined8 *)CONCAT44(uStack_90._4_4_,(undefined4)uStack_90);
              puVar11 = (undefined *)CONCAT44(uStack_80._4_4_,(undefined4)uStack_80);
            }
          }
          uStack_80 = puVar11;
          uStack_90 = puVar10;
          uStack_78 = puVar2;
          uStack_88 = plVar21;
        } while (*(ulonglong *)(param_1 + 0xe) < uVar18);
      }
      FUN_180143990(&local_98,param_2,0);
      (**(code **)(CONCAT44(uStack_94,CONCAT22(uStack_96,CONCAT11(bStack_97,local_98))) + 0x20))
                (uStack_80,uStack_90,uStack_88);
      bVar23 = true;
      plVar21 = (longlong *)*param_2;
      uVar18 = param_2[1];
    } while (uVar18 < (ulonglong)plVar21[1]);
  }
  uVar18 = CONCAT71((int7)(uVar18 >> 8),0xc);
  if ((int)local_c8 != 2) {
    FUN_180161750(&local_c8,&local_b0);
    lVar15 = local_c8;
    if (local_c8 != 2) {
      FUN_1801617b0(&local_c8,local_b0);
LAB_180145a7e:
      if (lVar15 != 0) {
        LOCK();
        *local_c0[0] = *local_c0[0] + -1;
        UNLOCK();
        if (*local_c0[0] == 0) {
          FUN_18003cc40(local_c0);
        }
      }
    }
  }
LAB_180145a9c:
  return uVar18 & 0xffffffff;
}


