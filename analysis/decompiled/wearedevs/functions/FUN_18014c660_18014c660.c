/* FUN_18014c660 @ 18014c660 */

/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_18014c660(undefined8 *param_1,undefined8 *****param_2,undefined8 *param_3,undefined4 param_4)

{
  short sVar1;
  undefined8 ****ppppuVar2;
  char cVar3;
  void *pvVar4;
  undefined8 ****_Dst;
  undefined8 *****pppppuVar5;
  uint uVar6;
  undefined8 ****ppppuVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined8 ****ppppuVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined7 uVar14;
  undefined8 *****pppppuVar13;
  undefined8 in_R10;
  undefined *in_R11;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined4 uVar17;
  undefined8 ****unaff_R13;
  undefined7 uVar18;
  undefined4 uVar19;
  undefined8 ****ppppuVar20;
  undefined8 ****ppppuVar21;
  undefined8 *****pppppuVar22;
  undefined8 *****pppppuVar23;
  undefined1 local_500 [32];
  undefined8 ****local_4e0;
  undefined8 local_4d8;
  byte local_428;
  undefined4 uStack_427;
  undefined3 uStack_423;
  undefined8 ****local_420;
  undefined8 ****local_418;
  undefined8 ****local_410;
  undefined8 *****pppppuStack_408;
  undefined8 ****local_400;
  undefined8 *****local_3f8;
  undefined8 *****pppppuStack_3f0;
  undefined *local_3e8;
  undefined8 *****local_3e0;
  undefined1 uStack_3d8;
  undefined7 uStack_3d7;
  undefined *local_3d0;
  undefined8 uStack_3c8;
  undefined8 *****local_3c0;
  undefined8 ****local_3b8;
  undefined1 local_3b0;
  undefined7 uStack_3af;
  undefined8 local_3a8;
  undefined *local_3a0;
  char local_398;
  undefined1 uStack_397;
  undefined6 uStack_396;
  undefined8 *****pppppuStack_390;
  undefined8 ****local_388;
  undefined8 *****pppppuStack_380;
  undefined8 ****local_378;
  undefined8 ****ppppuStack_370;
  undefined8 local_368;
  undefined *local_360;
  undefined8 *****local_358;
  undefined8 *****pppppuStack_350;
  undefined *local_348;
  undefined8 local_340;
  undefined8 *****local_338;
  undefined8 ****local_2a8;
  undefined *local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 *****pppppuStack_288;
  undefined *local_280;
  undefined8 uStack_278;
  undefined8 *****local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined1 local_1c8 [16];
  undefined4 local_1b8;
  undefined3 uStack_1b4;
  undefined4 uStack_1b0;
  undefined3 uStack_1ac;
  undefined8 ****local_1a8;
  undefined8 ****local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 *local_188;
  undefined *local_180;
  undefined8 *****local_178;
  undefined8 *****local_170;
  undefined8 *****local_168;
  undefined8 *****local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 *****local_140;
  undefined8 *****local_138;
  undefined8 *****local_130;
  undefined8 local_128;
  undefined8 ****ppppuStack_120;
  undefined8 ****local_118;
  undefined8 ****ppppuStack_110;
  undefined8 ****local_108;
  undefined8 local_100;
  undefined *local_f8;
  undefined1 local_ea;
  undefined1 local_e9;
  undefined8 ****local_e8;
  undefined8 *****local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 ****local_c8;
  undefined8 ****local_c0;
  undefined1 local_b4 [19];
  undefined1 local_a1;
  undefined1 local_a0;
  char local_9f;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined4 local_9c;
  undefined8 *local_98;
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 local_88;
  char local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  undefined1 local_80;
  byte local_7f;
  byte local_7e;
  undefined1 local_7d;
  undefined1 local_7c;
  undefined1 local_7b;
  char local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  byte local_71;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  local_85 = 1;
  local_86 = 1;
  local_87 = '\x01';
  local_88 = 1;
  local_89 = 1;
  local_8a = 1;
  local_188 = param_3;
  local_b4._0_4_ = param_4;
  local_b4._4_8_ = param_2;
  FUN_1801ade10(&local_298);
  memcpy(&local_4e0,&local_298,0xe0);
  memcpy(&local_298,&local_4e0,0xe0);
  local_77 = 1;
  local_78 = 0;
  local_79 = 1;
  local_7a = '\x01';
  local_7b = 1;
  local_7c = 1;
  local_7d = 1;
  FUN_1801adee0(&local_388,&local_298,3);
  ppppuVar7 = &local_388;
  memcpy(&local_4e0,ppppuVar7,0xe0);
  pppppuVar13 = (undefined8 *****)local_b4._4_8_;
  ppppuVar2 = local_420;
  ppppuVar21 = local_4e0;
  cVar3 = *(char *)local_b4._4_8_;
  local_84 = CONCAT31(local_84._1_3_,cVar3);
  if (cVar3 == '\f') {
    uVar15 = 1;
    if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
      uVar6 = (uint)DAT_1802fce18;
      if (uVar6 - 1 < 2) {
LAB_18014c7b7:
        local_77 = 1;
        local_78 = 1;
        local_79 = 1;
        local_7a = '\x01';
        local_7b = 1;
        local_7c = 1;
        local_7d = 1;
        cVar3 = FUN_1801601d0(PTR_DAT_1802fce08,uVar6);
        if (cVar3 != '\0') {
          local_280 = PTR_DAT_1802fce08 + 0x30;
          local_388 = (undefined8 ****)0x1802561f8;
          pppppuStack_380 = (undefined8 *****)0x43;
          ppppuStack_120 = (undefined8 ****)&DAT_180255780;
          local_298 = (undefined8 ****)0x1;
          uStack_290 = (undefined8 *****)&local_128;
          pppppuStack_288 = (undefined8 *****)0x1;
          local_77 = 1;
          local_78 = 1;
          local_79 = 1;
          local_7a = '\x01';
          local_7b = 1;
          local_7c = 1;
          local_7d = 1;
          local_128 = ppppuVar7;
          FUN_180160ae0(PTR_DAT_1802fce08,&local_298);
        }
      }
      else if (uVar6 != 0) {
        local_77 = 1;
        local_78 = 1;
        local_79 = 1;
        local_7a = '\x01';
        local_7b = 1;
        local_7c = 1;
        local_7d = 1;
        uVar6 = FUN_1801faaf0(&PTR_DAT_1802fce08);
        if ((char)uVar6 != '\0') goto LAB_18014c7b7;
      }
    }
LAB_18014d486:
    *(undefined2 *)(param_1 + 1) = 0x100;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_b4._0_4_;
    *(undefined4 *)(param_1 + 2) = 1;
    *param_1 = 3;
    uVar17 = (undefined4)CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
    cVar3 = '\x01';
    uVar12 = (undefined4)CONCAT71((int7)((ulonglong)pppppuVar13 >> 8),1);
    uVar9 = (int)CONCAT71((int7)((ulonglong)ppppuVar7 >> 8),1);
LAB_18014d4b2:
    if ((int)local_4e0 != 3) {
      local_85 = (undefined1)uVar9;
      local_86 = (undefined1)uVar12;
      local_88 = (undefined1)uVar17;
      local_89 = 1;
      local_8a = uVar15;
      local_87 = cVar3;
      FUN_18014c490(&local_4e0);
    }
  }
  else {
    local_9c = CONCAT31(local_9c._1_3_,cVar3 == '\f');
    ppppuVar20 = *(undefined8 *****)(local_b4._4_8_ + 8);
    ppppuVar10 = *(undefined8 *****)(local_b4._4_8_ + 0x10);
    local_128 = (undefined8 ****)CONCAT44(CONCAT13(local_128._7_1_,uStack_423),uStack_427);
    local_98 = param_1;
    memcpy(&local_298,&local_4d8,0xb0);
    local_388 = local_410;
    pppppuStack_380 = pppppuStack_408;
    local_c0 = ppppuVar21;
    if (ppppuVar21 == (undefined8 ****)0x3) {
      if (ppppuVar10 != (undefined8 ****)0x0 && 10 < (byte)local_84) {
        thunk_FUN_1801d3330(ppppuVar20,ppppuVar10,1);
      }
      ppppuVar20 = local_420;
      ppppuVar10 = local_418;
      bVar8 = local_428;
    }
    else {
      if (local_418 != (undefined8 ****)0x0 && 10 < local_428) {
        thunk_FUN_1801d3330(local_420,local_418,1);
      }
      memcpy(&local_298,&local_4d8,0xb0);
      local_128._0_7_ =
           CONCAT43(*(undefined4 *)((longlong)pppppuVar13 + 4),
                    (int3)*(undefined4 *)((longlong)pppppuVar13 + 1));
      local_388 = local_410;
      pppppuStack_380 = pppppuStack_408;
      pppppuVar13 = (undefined8 *****)local_b4._4_8_;
      bVar8 = (byte)local_84;
    }
    ppppuVar7 = (undefined8 ****)0x0;
    _Dst = (undefined8 ****)&local_4d8;
    memcpy(_Dst,&local_298,0xb0);
    param_1 = local_98;
    pvVar4 = (void *)((ulonglong)local_128 & 0xffffffff);
    uStack_423 = (undefined3)((ulonglong)local_128 >> 0x20);
    uStack_427 = (undefined4)local_128;
    local_410 = local_388;
    pppppuStack_408 = pppppuStack_380;
    ppppuVar21 = pppppuVar13[0xf];
    uVar15 = (byte)local_9c;
    local_428 = bVar8;
    local_418 = ppppuVar10;
    if (ppppuVar21 == (undefined8 ****)0x0) {
      uVar11 = 1;
      sVar1 = *(short *)(pppppuVar13 + 0x13);
      _Dst = (undefined8 ****)((ulonglong)local_128 >> 0x18 & 0xffffffff);
      ppppuVar7 = local_420;
    }
    else {
      local_420 = ppppuVar20;
      if ((byte)local_84 != '\a') {
        unaff_R13 = ppppuVar2;
        if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
          uVar6 = (uint)DAT_1802fce90;
          if (uVar6 - 1 < 2) {
LAB_18014cc22:
            local_77 = 1;
            local_78 = 1;
            local_79 = 1;
            local_7a = '\x01';
            local_7b = 1;
            local_7c = 1;
            local_7d = 0;
            cVar3 = FUN_1801601d0(PTR_DAT_1802fce80,uVar6);
            if (cVar3 != '\0') {
              local_280 = PTR_DAT_1802fce80 + 0x30;
              local_388 = (undefined8 ****)&DAT_180256098;
              pppppuStack_380 = (undefined8 *****)0x67;
              local_128 = &local_388;
              ppppuStack_120 = (undefined8 ****)&DAT_180255780;
              local_298 = (undefined8 ****)0x1;
              uStack_290 = (undefined8 *****)&local_128;
              pppppuStack_288 = (undefined8 *****)0x1;
              local_77 = 1;
              local_78 = 1;
              local_79 = 1;
              local_7a = '\x01';
              local_7b = 1;
              local_7c = 1;
              local_7d = 0;
              FUN_180160ae0(PTR_DAT_1802fce80,&local_298);
            }
          }
          else if (uVar6 != 0) {
            local_77 = 1;
            local_78 = 1;
            local_79 = 1;
            local_7a = '\x01';
            local_7b = 1;
            local_7c = 1;
            local_7d = 0;
            uVar6 = FUN_1801faaf0(&PTR_DAT_1802fce80);
            if ((char)uVar6 != '\0') goto LAB_18014cc22;
          }
        }
        goto LAB_18014d486;
      }
      ppppuVar2 = pppppuVar13[0x10];
      ppppuVar20 = pppppuVar13[0x11];
      ppppuVar7 = pppppuVar13[0x12];
      memcpy(&local_388,_Dst,0xd8);
      ppppuVar10 = local_c0;
      if (local_c0 == (undefined8 ****)0x3) {
        local_77 = 0;
        local_78 = 0;
        local_79 = 1;
        local_7a = '\x01';
        local_7b = 1;
        local_7c = 1;
        local_7d = 0;
        ppppuVar10 = (undefined8 ****)0x3;
        (*(code *)ppppuVar21[4])(ppppuVar7,ppppuVar2,ppppuVar20);
        uVar15 = (byte)local_9c;
      }
      else {
        memcpy(&uStack_290,_Dst,0xd8);
        local_298 = ppppuVar10;
        local_128 = ppppuVar21;
        ppppuStack_120 = ppppuVar2;
        local_118 = ppppuVar20;
        ppppuStack_110 = ppppuVar7;
        FUN_18012dc10(&local_1a8,local_1c8,&local_128);
        if (local_1a8 != (undefined8 ****)0x0) {
          (*(code *)local_1a8[4])(local_190,local_1a0,local_198);
        }
        ppppuVar10 = local_298;
        memcpy(&local_388,&uStack_290,0xd8);
        uVar15 = (byte)local_9c;
      }
      param_1 = local_98;
      pvVar4 = memcpy(_Dst,&local_388,0xd8);
      uVar11 = 0;
      sVar1 = *(short *)(local_b4._4_8_ + 0x98);
      pppppuVar13 = (undefined8 *****)local_b4._4_8_;
      ppppuVar20 = local_420;
      local_4e0 = ppppuVar10;
    }
    local_420 = ppppuVar20;
    uVar18 = (undefined7)((ulonglong)ppppuVar7 >> 8);
    uVar14 = (undefined7)((ulonglong)pppppuVar13 >> 8);
    uVar9 = (undefined4)uVar11;
    if (sVar1 != 0) {
      if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
        uVar6 = (uint)DAT_1802fce78;
        uVar16 = (undefined1)uVar11;
        if (uVar6 - 1 < 2) {
LAB_18014caff:
          local_78 = 1;
          local_79 = 1;
          local_7a = '\x01';
          local_7b = 1;
          local_7c = 1;
          local_7d = 0;
          local_77 = uVar16;
          cVar3 = FUN_1801601d0(PTR_DAT_1802fce68,uVar6);
          if (cVar3 != '\0') {
            local_280 = PTR_DAT_1802fce68 + 0x30;
            local_388 = (undefined8 ****)0x1802561cd;
            pppppuStack_380 = (undefined8 *****)0x57;
            local_128 = &local_388;
            ppppuStack_120 = (undefined8 ****)&DAT_180255780;
            local_298 = (undefined8 ****)0x1;
            uStack_290 = (undefined8 *****)&local_128;
            pppppuStack_288 = (undefined8 *****)0x1;
            local_78 = 1;
            local_79 = 1;
            local_7a = '\x01';
            local_7b = 1;
            local_7c = 1;
            local_7d = 0;
            local_77 = uVar16;
            FUN_180160ae0(PTR_DAT_1802fce68,&local_298);
          }
        }
        else if (uVar6 != 0) {
          local_78 = 1;
          local_79 = 1;
          local_7a = '\x01';
          local_7b = 1;
          local_7c = 1;
          local_7d = 0;
          local_77 = uVar16;
          uVar6 = FUN_1801faaf0(&PTR_DAT_1802fce68);
          if ((char)uVar6 != '\0') goto LAB_18014caff;
        }
      }
      *(undefined2 *)(param_1 + 1) = 0x100;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_b4._0_4_;
      *(undefined4 *)(param_1 + 2) = 1;
      *param_1 = 3;
      uVar17 = (undefined4)CONCAT71(uVar18,1);
      cVar3 = '\x01';
      uVar12 = (undefined4)CONCAT71(uVar14,1);
      goto LAB_18014d4b2;
    }
    local_9c = uVar9;
    if (pppppuVar13[7] == (undefined8 ****)0x0) {
      uVar17 = (undefined4)CONCAT71(uVar18,1);
      local_c8 = (undefined8 ****)0x0;
      if (pppppuVar13[3] != (undefined8 ****)0x0) goto LAB_18014cf9e;
LAB_18014d0cb:
      ppppuVar7 = local_c8;
      pppppuVar5 = (undefined8 *****)
                   CONCAT71((int7)((ulonglong)_Dst >> 8),
                            (byte)local_84 != '\a' || ppppuVar21 != (undefined8 ****)0x0);
      if ((byte)local_84 != '\a' || ppppuVar21 != (undefined8 ****)0x0) {
        if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
          uVar6 = (uint)DAT_1802fce00;
          uVar16 = (undefined1)uVar17;
          if (uVar6 - 1 < 2) {
LAB_18014d10d:
            local_e0 = (undefined8 *****)0x0;
            local_f8 = local_d0;
            local_100 = local_d8;
            local_108 = local_c0;
            local_71 = 3;
            local_72 = 1;
            local_73 = 1;
            local_74 = 1;
            local_76 = 1;
            local_e8 = ppppuVar7;
            local_75 = uVar16;
            cVar3 = FUN_1801601d0(PTR_DAT_1802fcdf0,uVar6);
            if (cVar3 != '\0') {
              local_280 = PTR_DAT_1802fcdf0 + 0x30;
              local_388 = (undefined8 ****)0x1802561ac;
              pppppuStack_380 = (undefined8 *****)0x43;
              local_128 = &local_388;
              ppppuStack_120 = (undefined8 ****)&DAT_180255780;
              local_298 = (undefined8 ****)0x1;
              uStack_290 = (undefined8 *****)&local_128;
              pppppuStack_288 = (undefined8 *****)0x1;
              local_e0 = (undefined8 *****)0x0;
              local_f8 = local_d0;
              local_100 = local_d8;
              local_108 = local_c0;
              local_71 = 3;
              local_72 = 1;
              local_73 = 1;
              local_74 = 1;
              local_76 = 1;
              local_e8 = ppppuVar7;
              local_75 = uVar16;
              FUN_180160ae0(PTR_DAT_1802fcdf0,&local_298);
            }
          }
          else if (uVar6 != 0) {
            local_e0 = (undefined8 *****)0x0;
            local_f8 = local_d0;
            local_100 = local_d8;
            local_108 = local_c0;
            local_71 = 3;
            local_72 = 1;
            local_73 = 1;
            local_74 = 1;
            local_76 = 1;
            local_e8 = local_c8;
            local_75 = uVar16;
            uVar6 = FUN_1801faaf0(&PTR_DAT_1802fcdf0);
            if ((char)uVar6 != '\0') goto LAB_18014d10d;
          }
        }
        *(undefined2 *)(param_1 + 1) = 0x100;
        *(undefined4 *)((longlong)param_1 + 0xc) = local_b4._0_4_;
        *(undefined4 *)(param_1 + 2) = 1;
        *param_1 = 3;
        uVar19 = 1;
        uVar14 = (undefined7)((ulonglong)pppppuVar13 >> 8);
        goto LAB_18014e3d2;
      }
      if (pppppuVar13[0xb] == (undefined8 ****)0x0) {
        pppppuVar22 = (undefined8 *****)0x0;
        pppppuVar23 = (undefined8 *****)0x0;
        local_84 = (undefined4)CONCAT71((int7)((ulonglong)pvVar4 >> 8),1);
        local_7e = 3;
        uVar9 = (undefined4)CONCAT71((int7)((ulonglong)in_R10 >> 8),1);
        local_378 = local_c8;
        goto LAB_18014df12;
      }
      local_388 = pppppuVar13[0xb];
      pppppuStack_380 = (undefined8 *****)pppppuVar13[0xc];
      local_378 = pppppuVar13[0xd];
      ppppuStack_370 = pppppuVar13[0xe];
      if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
        uVar6 = (uint)DAT_1802fcea8;
        if (uVar6 - 1 < 2) {
LAB_18014d65d:
          local_98 = (undefined8 *)CONCAT44(local_98._4_4_,uVar17);
          local_7f = 3;
          local_80 = 1;
          cVar3 = FUN_1801601d0(PTR_DAT_1802fce98,uVar6);
          uVar17 = local_98._0_4_;
          if (cVar3 != '\0') {
            local_280 = PTR_DAT_1802fce98 + 0x30;
            local_128 = (undefined8 ****)&DAT_180256142;
            ppppuStack_120 = (undefined8 ****)0x47;
            local_1a8 = (undefined8 ****)&local_128;
            local_1a0 = (undefined8 ****)&DAT_180255780;
            local_298 = (undefined8 ****)0x1;
            uStack_290 = &local_1a8;
            pppppuStack_288 = (undefined8 *****)0x1;
            local_7f = 3;
            local_80 = 1;
            FUN_180160ae0(PTR_DAT_1802fce98,&local_298);
            uVar17 = local_98._0_4_;
          }
        }
        else if (uVar6 != 0) {
          local_98 = (undefined8 *)CONCAT44(local_98._4_4_,uVar17);
          local_7f = 3;
          local_80 = 1;
          uVar6 = FUN_1801faaf0(&PTR_DAT_1802fce98);
          uVar17 = local_98._0_4_;
          if ((char)uVar6 != '\0') goto LAB_18014d65d;
        }
      }
      *(undefined2 *)(param_1 + 1) = 0x100;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_b4._0_4_;
      *(undefined4 *)(param_1 + 2) = 1;
      uVar19 = (undefined4)CONCAT71((int7)((ulonglong)in_R10 >> 8),1);
      bVar8 = 3;
      ppppuVar7 = local_c8;
LAB_18014e46a:
      *param_1 = 3;
      local_e0 = (undefined8 *****)0x0;
      local_f8 = local_d0;
      local_100 = local_d8;
      local_108 = local_c0;
      local_72 = 1;
      local_73 = 0;
      local_74 = (undefined1)uVar19;
      local_75 = (undefined1)uVar17;
      local_76 = 1;
      local_130 = pppppuVar13;
      local_e8 = ppppuVar7;
      local_71 = bVar8;
      (*(code *)local_388[4])(ppppuStack_370,pppppuStack_380,local_378);
      local_84 = 0;
      pppppuVar5 = pppppuVar13;
      if (bVar8 < 4) {
LAB_18014e51c:
        if (bVar8 == 2) goto LAB_18014e56f;
        uVar12 = local_84;
      }
      else {
LAB_18014e56f:
        local_138 = (undefined8 *****)CONCAT44(local_138._4_4_,uVar19);
        local_98 = (undefined8 *)CONCAT44(local_98._4_4_,uVar17);
        local_140 = pppppuVar5;
        (*(code *)(*pppppuVar5)[4])(pppppuVar5[3],pppppuVar5[1],pppppuVar5[2]);
        thunk_FUN_1801d3330(local_140,0x20,8);
        ppppuVar7 = local_c8;
        uVar19 = local_138._0_4_;
        uVar12 = local_84;
        uVar17 = local_98._0_4_;
      }
LAB_18014e5ce:
      uVar9 = local_9c;
      cVar3 = (char)uVar19;
      if (ppppuVar7 != (undefined8 ****)0x0) {
        local_77 = (undefined1)local_9c;
        local_78 = 1;
        local_79 = (undefined1)uVar12;
        local_7b = (undefined1)uVar17;
        local_7c = 1;
        local_7d = 0;
        local_7a = cVar3;
        (*(code *)ppppuVar7[4])(local_d0,local_c0,local_d8);
      }
      goto LAB_18014d4b2;
    }
    local_128 = pppppuVar13[7];
    ppppuStack_120 = pppppuVar13[8];
    local_118 = pppppuVar13[9];
    ppppuStack_110 = pppppuVar13[10];
    (*(code *)*local_128)(&local_400,&ppppuStack_110,ppppuStack_120,local_118);
    if (local_400 == (undefined8 ****)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_18025be58);
    }
    local_298 = local_400;
    uStack_290 = local_3f8;
    pppppuStack_288 = pppppuStack_3f0;
    local_280 = local_3e8;
    FUN_1801acb70(&local_3b8,&local_298);
    if (local_3b8 == (undefined8 ****)0x0) {
      local_ea = local_3b0;
      if ((*(ulonglong *)PTR_DAT_1802fd448 < 2) &&
         (((uVar6 = (uint)DAT_1802fcec0, uVar6 - 1 < 2 ||
           ((uVar6 != 0 && (uVar6 = FUN_1801faaf0(&PTR_DAT_1802fceb0), (char)uVar6 != '\0')))) &&
          (cVar3 = FUN_1801601d0(PTR_DAT_1802fceb0,uVar6), cVar3 != '\0')))) {
        local_280 = PTR_DAT_1802fceb0 + 0x30;
        local_388 = (undefined8 ****)&local_128;
        pppppuStack_380 = (undefined8 *****)&LAB_18012df10;
        local_378 = (undefined8 ****)&local_ea;
        ppppuStack_370 = (undefined8 ****)&LAB_1801ac760;
        local_1a8 = (undefined8 ****)&DAT_1802564e3;
        local_1a0 = &local_388;
        local_2a8 = &local_1a8;
        local_2a0 = &DAT_180255780;
        local_298 = (undefined8 ****)0x1;
        uStack_290 = &local_2a8;
        pppppuStack_288 = (undefined8 *****)0x1;
        FUN_180160ae0(PTR_DAT_1802fceb0,&local_298);
      }
      *(undefined2 *)(param_1 + 1) = 0x100;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_b4._0_4_;
      param_1[2] = 1;
      *param_1 = 3;
      local_e0 = (undefined8 *****)0x0;
      local_e8 = (undefined8 ****)0x0;
      local_71 = 3;
      local_72 = 1;
      local_73 = 1;
      local_74 = 1;
      local_75 = 0;
      local_76 = 1;
      (*(code *)local_128[4])(ppppuStack_110,ppppuStack_120,local_118);
      uVar12 = (undefined4)CONCAT71(uVar14,1);
      uVar17 = 0;
      cVar3 = '\x01';
      uVar9 = local_9c;
      goto LAB_18014d4b2;
    }
    local_108 = (undefined8 ****)CONCAT71(uStack_3af,local_3b0);
    local_e0 = (undefined8 *****)0x0;
    local_d0 = local_3a0;
    local_f8 = local_3a0;
    local_d8 = local_3a8;
    local_100 = local_3a8;
    local_e8 = local_3b8;
    local_71 = 3;
    local_72 = 1;
    local_73 = 1;
    local_74 = 1;
    local_75 = 0;
    local_76 = 1;
    _Dst = ppppuStack_110;
    local_c0 = local_108;
    pvVar4 = (void *)(*(code *)local_128[4])(ppppuStack_110,ppppuStack_120,local_118);
    uVar17 = 0;
    local_c8 = local_3b8;
    pppppuVar13 = (undefined8 *****)local_b4._4_8_;
    in_R10 = local_3a8;
    in_R11 = local_3a0;
    if (*(undefined8 *****)(local_b4._4_8_ + 0x18) == (undefined8 ****)0x0) goto LAB_18014d0cb;
LAB_18014cf9e:
    local_388 = pppppuVar13[3];
    pppppuStack_380 = (undefined8 *****)pppppuVar13[4];
    local_378 = pppppuVar13[5];
    ppppuStack_370 = pppppuVar13[6];
    if ((byte)local_84 == '\a' && ppppuVar21 == (undefined8 ****)0x0) {
      if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
        uVar6 = (uint)DAT_1802fce60;
        if (uVar6 - 1 < 2) {
LAB_18014d2c9:
          local_98 = (undefined8 *)CONCAT44(local_98._4_4_,uVar17);
          cVar3 = FUN_1801601d0(PTR_DAT_1802fce50,uVar6);
          uVar17 = local_98._0_4_;
          if (cVar3 != '\0') {
            local_280 = PTR_DAT_1802fce50 + 0x30;
            local_128 = (undefined8 ****)&DAT_1802560cb;
            ppppuStack_120 = (undefined8 ****)0x4b;
            local_1a8 = (undefined8 ****)&local_128;
            local_1a0 = (undefined8 ****)&DAT_180255780;
            local_298 = (undefined8 ****)0x1;
            uStack_290 = &local_1a8;
            pppppuStack_288 = (undefined8 *****)0x1;
            FUN_180160ae0(PTR_DAT_1802fce50,&local_298);
            uVar17 = local_98._0_4_;
          }
        }
        else if (uVar6 != 0) {
          local_98 = (undefined8 *)CONCAT44(local_98._4_4_,uVar17);
          uVar6 = FUN_1801faaf0(&PTR_DAT_1802fce50);
          uVar17 = local_98._0_4_;
          if ((char)uVar6 != '\0') goto LAB_18014d2c9;
        }
      }
      *(undefined2 *)(param_1 + 1) = 0x100;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_b4._0_4_;
      *(undefined4 *)(param_1 + 2) = 1;
      *param_1 = 3;
LAB_18014dc38:
      ppppuVar7 = local_c8;
      local_e0 = (undefined8 *****)0x0;
      local_f8 = local_d0;
      local_100 = local_d8;
      local_108 = local_c0;
      local_71 = 3;
      local_72 = 1;
      local_73 = 1;
      local_74 = 0;
      local_75 = (undefined1)uVar17;
      local_76 = 1;
      local_e8 = local_c8;
      (*(code *)local_388[4])(ppppuStack_370,pppppuStack_380,local_378);
      uVar14 = (undefined7)((ulonglong)pppppuVar13 >> 8);
      uVar19 = 0;
LAB_18014e3d2:
      uVar12 = (int)CONCAT71(uVar14,1);
      goto LAB_18014e5ce;
    }
    local_98 = (undefined8 *)CONCAT44(local_98._4_4_,uVar17);
    FUN_1801ae4c0(&local_398,pppppuStack_380,local_378);
    if (local_398 == '\x03') {
      FUN_18014f730(&local_298,&local_388,local_b4,uStack_397);
      if ((char)local_298 != '\x03') {
        uVar9 = local_298._1_4_;
        *(undefined4 *)((longlong)param_1 + 0xc) = local_298._4_4_;
        *(undefined4 *)((longlong)param_1 + 9) = uVar9;
        uVar9 = uStack_290._1_4_;
        local_128._0_7_ = (undefined7)((ulonglong)uStack_290 >> 8);
        param_1[4] = local_280;
        param_1[5] = uStack_278;
        *(undefined4 *)((longlong)param_1 + 0x14) = uStack_290._4_4_;
        *(undefined4 *)((longlong)param_1 + 0x11) = uVar9;
        *(char *)(param_1 + 1) = (char)local_298;
        *(undefined1 *)(param_1 + 2) = (undefined1)uStack_290;
        param_1[3] = pppppuStack_288;
        *param_1 = 3;
        uVar17 = local_98._0_4_;
        goto LAB_18014dc38;
      }
    }
    else {
      uStack_290 = (undefined8 *****)CONCAT62(uStack_396,CONCAT11(uStack_397,local_398));
      pppppuStack_288 = pppppuStack_390;
    }
    pppppuVar5 = pppppuStack_288;
    local_7e = (byte)uStack_290;
    local_128._0_7_ = (undefined7)((ulonglong)uStack_290 >> 8);
    uStack_1b4 = (undefined3)((ulonglong)uStack_290 >> 0x28);
    local_1b8 = uStack_290._1_4_;
    if (local_c8 == (undefined8 ****)0x0) {
      FUN_18007a9b0((ulonglong)uStack_290 & 0xff,pppppuStack_288);
      local_7e = 3;
      uVar17 = local_98._0_4_;
    }
    else {
      uStack_1ac = uStack_1b4;
      uStack_1b0 = uStack_290._1_4_;
      uVar17 = local_98._0_4_;
    }
    ppppuVar7 = local_c8;
    local_e0 = (undefined8 *****)0x0;
    local_f8 = local_d0;
    local_100 = local_d8;
    local_108 = local_c0;
    local_130 = pppppuVar5;
    local_72 = 1;
    local_73 = 1;
    local_74 = 0;
    uVar16 = (undefined1)uVar17;
    local_76 = 1;
    local_e8 = local_c8;
    local_75 = uVar16;
    local_71 = local_7e;
    (*(code *)local_388[4])(ppppuStack_370,pppppuStack_380,local_378);
    bVar8 = local_7e;
    pppppuVar13 = pppppuVar5;
    if (*(undefined8 *****)(local_b4._4_8_ + 0x58) == (undefined8 ****)0x0) {
      if ((byte)local_84 == '\a' && ppppuVar21 != (undefined8 ****)0x0) {
        if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
          uVar6 = (uint)DAT_1802fce48;
          if (uVar6 - 1 < 2) {
LAB_18014d97f:
            local_e0 = (undefined8 *****)0x0;
            local_f8 = local_d0;
            local_100 = local_d8;
            local_108 = local_c0;
            local_130 = pppppuVar5;
            local_72 = 1;
            local_73 = 1;
            local_74 = 0;
            local_76 = 1;
            local_e8 = ppppuVar7;
            local_75 = uVar16;
            local_71 = local_7e;
            cVar3 = FUN_1801601d0(PTR_DAT_1802fce38,uVar6);
            if (cVar3 != '\0') {
              local_280 = PTR_DAT_1802fce38 + 0x30;
              local_388 = (undefined8 ****)&DAT_18025610f;
              pppppuStack_380 = (undefined8 *****)0x67;
              local_128 = &local_388;
              ppppuStack_120 = (undefined8 ****)&DAT_180255780;
              local_298 = (undefined8 ****)0x1;
              uStack_290 = (undefined8 *****)&local_128;
              pppppuStack_288 = (undefined8 *****)0x1;
              local_e0 = (undefined8 *****)0x0;
              local_f8 = local_d0;
              local_100 = local_d8;
              local_108 = local_c0;
              local_130 = pppppuVar5;
              local_71 = local_7e;
              local_72 = 1;
              local_73 = 1;
              local_74 = 0;
              local_76 = 1;
              local_e8 = ppppuVar7;
              local_75 = uVar16;
              FUN_180160ae0(PTR_DAT_1802fce38,&local_298);
            }
          }
          else if (uVar6 != 0) {
            local_e0 = (undefined8 *****)0x0;
            local_f8 = local_d0;
            local_100 = local_d8;
            local_108 = local_c0;
            local_130 = pppppuVar5;
            local_71 = local_7e;
            local_72 = 1;
            local_73 = 1;
            local_74 = 0;
            local_76 = 1;
            local_e8 = ppppuVar7;
            local_75 = uVar16;
            uVar6 = FUN_1801faaf0(&PTR_DAT_1802fce38);
            if ((char)uVar6 != '\0') goto LAB_18014d97f;
          }
        }
        *(undefined2 *)(param_1 + 1) = 0x100;
        *(undefined4 *)((longlong)param_1 + 0xc) = local_b4._0_4_;
        *(undefined4 *)(param_1 + 2) = 1;
        *param_1 = 3;
        local_84 = (undefined4)CONCAT71((uint7)local_b4._1_3_,1);
        uVar19 = 0;
        bVar8 = local_7e;
        if (local_7e < 4) goto LAB_18014e51c;
        goto LAB_18014e56f;
      }
      pppppuVar22 = (undefined8 *****)0x0;
      pppppuVar23 = (undefined8 *****)0x0;
      local_84 = (undefined4)CONCAT71(local_b4._5_7_,1);
      uVar9 = 0;
      local_378 = ppppuVar7;
    }
    else {
      local_388 = *(undefined8 *****)(local_b4._4_8_ + 0x58);
      pppppuStack_380 = *(undefined8 ******)(local_b4._4_8_ + 0x60);
      local_378 = *(undefined8 *****)(local_b4._4_8_ + 0x68);
      ppppuStack_370 = *(undefined8 *****)(local_b4._4_8_ + 0x70);
      if (local_378 == (undefined8 ****)0x0) {
        if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
          uVar6 = (uint)DAT_1802fcde8;
          if (uVar6 - 1 < 2) {
LAB_18014db3a:
            local_168 = pppppuVar5;
            local_7f = bVar8;
            local_80 = 0;
            cVar3 = FUN_1801601d0(PTR_DAT_1802fcdd8,uVar6);
            ppppuVar7 = local_c8;
            uVar17 = local_98._0_4_;
            if (cVar3 != '\0') {
              local_280 = PTR_DAT_1802fcdd8 + 0x30;
              local_128 = (undefined8 ****)&DAT_1802560f0;
              ppppuStack_120 = (undefined8 ****)0x3f;
              local_1a8 = (undefined8 ****)&local_128;
              local_1a0 = (undefined8 ****)&DAT_180255780;
              local_298 = (undefined8 ****)0x1;
              uStack_290 = &local_1a8;
              pppppuStack_288 = (undefined8 *****)0x1;
              local_168 = pppppuVar5;
              local_7f = bVar8;
              local_80 = 0;
              FUN_180160ae0(PTR_DAT_1802fcdd8,&local_298);
              ppppuVar7 = local_c8;
              uVar17 = local_98._0_4_;
            }
          }
          else if (uVar6 != 0) {
            local_168 = pppppuVar5;
            local_7f = local_7e;
            local_80 = 0;
            uVar6 = FUN_1801faaf0(&PTR_DAT_1802fcdd8);
            ppppuVar7 = local_c8;
            uVar17 = local_98._0_4_;
            if ((char)uVar6 != '\0') goto LAB_18014db3a;
          }
        }
        *(undefined2 *)(param_1 + 1) = 0x100;
        *(undefined4 *)((longlong)param_1 + 0xc) = local_b4._0_4_;
        *(undefined4 *)(param_1 + 2) = 1;
        uVar19 = 0;
        goto LAB_18014e46a;
      }
      local_168 = pppppuVar5;
      local_7f = local_7e;
      local_80 = 0;
      (*(code *)*local_388)(local_500,&ppppuStack_370,pppppuStack_380);
      local_168 = pppppuVar5;
      local_7f = bVar8;
      local_80 = 0;
      FUN_18015efc0(&local_3e0,local_500);
      if (local_3e0 == (undefined8 *****)0x0) {
        local_168 = pppppuVar5;
        local_7f = bVar8;
        local_80 = 0;
        FUN_18014f600(&local_298,&local_388,local_b4,uStack_3d8);
        if ((int)local_298 == 1) {
          param_1[1] = uStack_290;
          param_1[2] = pppppuStack_288;
          param_1[3] = local_280;
          param_1[4] = uStack_278;
          param_1[5] = local_270;
          uVar19 = 0;
          ppppuVar7 = local_c8;
          uVar17 = local_98._0_4_;
          goto LAB_18014e46a;
        }
      }
      else {
        local_270 = local_3c0;
        pppppuStack_288 = (undefined8 *****)CONCAT71(uStack_3d7,uStack_3d8);
        local_280 = local_3d0;
        uStack_278 = uStack_3c8;
        uStack_290 = local_3e0;
      }
      ppppuVar7 = local_c8;
      in_R11 = local_280;
      pppppuVar23 = pppppuStack_288;
      pppppuVar22 = uStack_290;
      local_138 = local_270;
      local_148 = uStack_278;
      local_150 = uStack_278;
      local_158 = local_280;
      local_160 = pppppuStack_288;
      local_e0 = uStack_290;
      local_f8 = local_d0;
      local_100 = local_d8;
      local_108 = local_c0;
      local_e8 = local_c8;
      local_130 = pppppuVar5;
      local_71 = bVar8;
      local_72 = 1;
      local_73 = 0;
      local_74 = 0;
      uVar17 = local_98._0_4_;
      local_75 = SUB81(local_98,0);
      local_76 = 1;
      (*(code *)local_388[4])(ppppuStack_370,pppppuStack_380,local_378);
      local_84 = 0;
      uVar9 = 0;
      local_378 = ppppuVar7;
      uVar11 = local_148;
      pppppuVar13 = local_138;
    }
LAB_18014df12:
    local_388 = (undefined8 ****)CONCAT71(CONCAT34(uStack_1ac,uStack_1b0),local_7e);
    ppppuStack_370 = local_c0;
    local_368 = local_d8;
    local_360 = local_d0;
    local_f8 = local_d0;
    local_100 = local_d8;
    local_108 = local_c0;
    local_72 = 0;
    local_73 = (undefined1)local_84;
    local_138 = (undefined8 *****)CONCAT44(local_138._4_4_,uVar9);
    local_74 = (undefined1)uVar9;
    uVar16 = (undefined1)uVar17;
    local_76 = 1;
    pppppuStack_380 = pppppuVar5;
    local_358 = pppppuVar22;
    pppppuStack_350 = pppppuVar23;
    local_348 = in_R11;
    local_340 = uVar11;
    local_338 = pppppuVar13;
    local_180 = in_R11;
    local_160 = pppppuVar23;
    local_158 = in_R11;
    local_150 = uVar11;
    local_148 = uVar11;
    local_130 = pppppuVar5;
    local_e8 = local_378;
    local_e0 = pppppuVar22;
    local_75 = uVar16;
    local_71 = local_7e;
    FUN_18014b540(&local_298,&local_4e0,&local_388);
    local_178 = pppppuVar22;
    local_170 = pppppuVar23;
    local_140 = pppppuVar5;
    memcpy(&local_4e0,&local_298,0xe0);
    ppppuVar7 = local_4e0;
    if (local_4e0 != (undefined8 ****)0x3) {
      local_98 = (undefined8 *)CONCAT44(local_98._4_4_,uVar17);
      memcpy((void *)((longlong)&uStack_290 + 2),(undefined1 *)((longlong)&local_4d8 + 2),0xd6);
      local_298 = ppppuVar7;
      uStack_290._0_2_ = CONCAT11(local_4d8._1_1_,(undefined1)local_4d8);
      FUN_18000b470(&local_298);
      local_248 = local_188[10];
      uStack_240 = local_188[0xb];
      local_258 = local_188[8];
      uStack_250 = local_188[9];
      local_298 = (undefined8 ****)*local_188;
      uStack_290 = (undefined8 *****)local_188[1];
      pppppuStack_288 = (undefined8 *****)local_188[2];
      local_280 = (undefined *)local_188[3];
      uStack_278 = local_188[4];
      local_270 = (undefined8 *****)local_188[5];
      local_268 = local_188[6];
      uStack_260 = local_188[7];
      memcpy(param_1,&local_298,0xe0);
      if ((char)local_9c != '\x01' || ppppuVar21 == (undefined8 ****)0x0) {
        return param_1;
      }
      goto LAB_18014d5cf;
    }
    local_ea = (undefined1)local_4d8;
    local_e9 = local_4d8._1_1_;
    if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
      uVar6 = (uint)DAT_1802fce30;
      if (uVar6 - 1 < 2) {
LAB_18014e0ab:
        local_150 = local_148;
        local_158 = local_180;
        local_160 = local_170;
        local_e0 = local_178;
        local_f8 = local_d0;
        local_100 = local_d8;
        local_108 = local_c0;
        local_e8 = local_c8;
        local_130 = local_140;
        local_71 = local_7e;
        local_72 = 0;
        local_73 = (undefined1)local_84;
        local_74 = SUB81(local_138,0);
        local_76 = 1;
        local_75 = uVar16;
        cVar3 = FUN_1801601d0(PTR_DAT_1802fce20,uVar6);
        if (cVar3 != '\0') {
          local_128 = (undefined8 ****)&local_ea;
          ppppuStack_120 = (undefined8 ****)&LAB_1801ab550;
          local_118 = (undefined8 ****)local_b4;
          ppppuStack_110 = (undefined8 ****)FUN_18014f890;
          local_1a8 = (undefined8 ****)&DAT_180256165;
          local_1a0 = (undefined8 ****)&local_128;
          local_2a8 = &local_1a8;
          local_2a0 = &DAT_180255780;
          local_388 = (undefined8 ****)0x1;
          pppppuStack_380 = &local_2a8;
          ppppuStack_370 = (undefined8 ****)(PTR_DAT_1802fce20 + 0x30);
          local_378 = (undefined8 ****)0x1;
          local_150 = local_148;
          local_158 = local_180;
          local_160 = local_170;
          local_e0 = local_178;
          local_f8 = local_d0;
          local_100 = local_d8;
          local_108 = local_c0;
          local_e8 = local_c8;
          local_130 = local_140;
          local_71 = local_7e;
          local_72 = 0;
          local_73 = (undefined1)local_84;
          local_74 = SUB81(local_138,0);
          local_76 = 1;
          local_75 = uVar16;
          FUN_180160ae0(PTR_DAT_1802fce20,&local_388);
        }
      }
      else if (uVar6 != 0) {
        local_150 = local_148;
        local_158 = local_180;
        local_160 = local_170;
        local_e0 = local_178;
        local_f8 = local_d0;
        local_100 = local_d8;
        local_108 = local_c0;
        local_e8 = local_c8;
        local_130 = local_140;
        local_71 = local_7e;
        local_72 = 0;
        local_73 = (undefined1)local_84;
        local_74 = SUB81(local_138,0);
        local_76 = 1;
        local_75 = uVar16;
        uVar6 = FUN_1801faaf0(&PTR_DAT_1802fce20);
        if ((char)uVar6 != '\0') goto LAB_18014e0ab;
      }
    }
    *(undefined2 *)(param_1 + 1) = 0x100;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_b4._0_4_;
    *(undefined4 *)(param_1 + 2) = 1;
    *param_1 = 3;
    cVar3 = (char)local_138;
    uVar9 = local_9c;
    uVar12 = local_84;
  }
  local_9d = (undefined1)uVar9;
  local_9e = (undefined1)uVar12;
  local_98 = (undefined8 *)CONCAT44(local_98._4_4_,uVar17);
  local_a0 = (undefined1)uVar17;
  local_a1 = uVar15;
  local_9f = cVar3;
  local_9c = uVar9;
  local_84 = uVar12;
  FUN_18000b470(local_188);
  if ((*(undefined8 *****)(local_b4._4_8_ + 0x18) != (undefined8 ****)0x0) && (cVar3 != '\0')) {
    (*(code *)(*(undefined8 *****)(local_b4._4_8_ + 0x18))[4])
              (*(undefined8 *****)(local_b4._4_8_ + 0x30),*(undefined8 *****)(local_b4._4_8_ + 0x20)
               ,*(undefined8 *****)(local_b4._4_8_ + 0x28));
  }
  if (((byte)local_98 & *(undefined8 *****)(local_b4._4_8_ + 0x38) != (undefined8 ****)0x0) != 0) {
    (*(code *)(*(undefined8 *****)(local_b4._4_8_ + 0x38))[4])
              (*(undefined8 *****)(local_b4._4_8_ + 0x50),*(undefined8 *****)(local_b4._4_8_ + 0x40)
               ,*(undefined8 *****)(local_b4._4_8_ + 0x48));
  }
  if ((*(undefined8 *****)(local_b4._4_8_ + 0x58) != (undefined8 ****)0x0) &&
     ((byte)local_84 != '\0')) {
    (*(code *)(*(undefined8 *****)(local_b4._4_8_ + 0x58))[4])
              (*(undefined8 *****)(local_b4._4_8_ + 0x70),*(undefined8 *****)(local_b4._4_8_ + 0x60)
               ,*(undefined8 *****)(local_b4._4_8_ + 0x68));
  }
  ppppuVar21 = *(undefined8 *****)(local_b4._4_8_ + 0x78);
  if (((byte)local_9c & ppppuVar21 != (undefined8 ****)0x0) == 0) {
    return param_1;
  }
LAB_18014d5cf:
  (*(code *)ppppuVar21[4])
            (*(undefined8 *****)(local_b4._4_8_ + 0x90),*(undefined8 *****)(local_b4._4_8_ + 0x80),
             *(undefined8 *****)(local_b4._4_8_ + 0x88));
  return param_1;
}


