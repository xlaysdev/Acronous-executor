/* FUN_18006bc60 @ 18006bc60 */

/* WARNING: Removing unreachable block (ram,0x00018006be92) */

undefined8 * FUN_18006bc60(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  byte bVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  char cVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong local_688;
  undefined4 local_680;
  undefined4 uStack_67c;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 local_670;
  undefined4 uStack_66c;
  undefined4 uStack_668;
  undefined4 uStack_664;
  undefined4 local_660;
  undefined4 uStack_65c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined4 local_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  longlong local_640;
  longlong lStack_638;
  longlong local_630;
  longlong lStack_628;
  longlong local_620;
  byte local_618 [32];
  undefined1 uStack_5f8;
  undefined7 uStack_5f7;
  uint local_518;
  uint uStack_514;
  uint uStack_510;
  undefined4 uStack_50c;
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined8 local_4f8;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  uint local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  longlong local_408;
  undefined1 local_3f8 [184];
  char local_340;
  undefined1 local_328 [16];
  uint local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined1 local_2f8 [8];
  longlong *plStack_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  longlong *local_2c8 [2];
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  uint local_2a0 [2];
  longlong *plStack_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  longlong local_270;
  uint local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  longlong local_258;
  uint local_248;
  uint uStack_244;
  uint uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  longlong local_208;
  longlong lStack_200;
  longlong local_1f8;
  longlong lStack_1f0;
  longlong local_1e8;
  longlong lStack_1e0;
  undefined8 local_148;
  longlong *local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  uint local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 local_b0;
  undefined1 local_af;
  undefined6 uStack_ae;
  longlong *local_a0;
  uint local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  longlong *local_60;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  plVar1 = param_2 + 0x14;
  plVar14 = param_2 + 1;
  local_a0 = param_2 + 0x18;
  plVar13 = local_a0;
  local_140 = plVar14;
  local_78 = param_1;
LAB_18006bd1d:
  do {
    FUN_1800ae150(local_618,plVar1,param_3);
    if (local_618[0] != 5) {
      if (local_618[0] == 6) {
LAB_18006c578:
        *local_78 = 3;
        puVar11 = local_78;
      }
      else {
        local_248 = CONCAT31(local_618._1_3_,local_618[0]);
        uStack_244._1_3_ = local_618._5_3_;
        uStack_244 = CONCAT31(uStack_244._1_3_,local_618[4]);
        uStack_240._1_3_ = local_618._9_3_;
        uStack_240 = CONCAT31(uStack_240._1_3_,local_618[8]);
        uStack_23c._1_3_ = local_618._13_3_;
        uStack_23c = CONCAT31(uStack_23c._1_3_,local_618[0xc]);
        local_238._1_3_ = local_618._17_3_;
        local_238 = CONCAT31(local_238._1_3_,local_618[0x10]);
        uStack_234._1_3_ = local_618._21_3_;
        uStack_234 = CONCAT31(uStack_234._1_3_,local_618[0x14]);
        uStack_230._1_3_ = local_618._25_3_;
        uStack_230 = CONCAT31(uStack_230._1_3_,local_618[0x18]);
        uStack_22c._1_3_ = (undefined3)stack0xfffffffffffffa05;
        uStack_22c = CONCAT31(uStack_22c._1_3_,local_618[0x1c]);
        local_228 = (undefined4)CONCAT71(uStack_5f7,uStack_5f8);
        uStack_224 = (undefined4)((uint7)uStack_5f7 >> 0x18);
        local_56 = 1;
        lVar8 = FUN_180123580(param_2 + 0x1a);
        puVar11 = local_78;
        if (lVar8 == 0) {
          uVar2 = uStack_244;
          if ((((local_618[0] != 2) && (local_618[0] != 1)) &&
              (uVar2 = uStack_240, local_618[0] != 0)) || (uVar2 != 0)) {
            local_4f8 = CONCAT44(uStack_224,local_228);
            local_508 = local_238;
            uStack_504 = uStack_234;
            uStack_500 = uStack_230;
            uStack_4fc = uStack_22c;
            local_518 = local_248;
            uStack_514 = uStack_244;
            uStack_510 = uStack_240;
            uStack_50c = uStack_23c;
            local_56 = 0;
            uVar9 = FUN_180115be0(&local_518);
            *puVar11 = 2;
            puVar11[1] = uVar9;
            return puVar11;
          }
          *local_78 = 0;
        }
        else {
          *local_78 = 2;
          local_78[1] = lVar8;
        }
        if ((1 < local_618[0] - 2) && (local_618[0] != 0)) {
          if (local_618[0] == 1) {
            (**(code **)(CONCAT44(uStack_23c,uStack_240) + 0x20))
                      (CONCAT44(uStack_224,local_228),CONCAT44(uStack_234,local_238),
                       CONCAT44(uStack_22c,uStack_230));
          }
          else {
            lVar8 = CONCAT44(uStack_23c,uStack_240);
            if ((uStack_240 & 3) == 1) {
              local_70 = (undefined8 *)(lVar8 + -1);
              local_60 = *(longlong **)(lVar8 + -1);
              local_68 = *(undefined8 **)(lVar8 + 7);
              if ((code *)*local_68 != (code *)0x0) {
                (*(code *)*local_68)(local_60);
              }
              if (local_68[1] != 0) {
                thunk_FUN_1801d3330(local_60,local_68[1],local_68[2]);
              }
              thunk_FUN_1801d3330(local_70,0x18,8);
            }
          }
        }
      }
      return puVar11;
    }
    lVar8 = *param_2;
    *param_2 = 2;
    if (lVar8 != 2) {
      local_620 = plVar14[0xc];
      local_630 = plVar14[10];
      lStack_628 = plVar14[0xb];
      local_640 = plVar14[8];
      lStack_638 = plVar14[9];
      local_680 = (undefined4)*plVar14;
      uStack_67c = *(undefined4 *)((longlong)plVar14 + 4);
      uStack_678 = (undefined4)plVar14[1];
      uStack_674 = *(undefined4 *)((longlong)plVar14 + 0xc);
      local_670 = (undefined4)plVar14[2];
      uStack_66c = *(undefined4 *)((longlong)plVar14 + 0x14);
      uStack_668 = (undefined4)plVar14[3];
      uStack_664 = *(undefined4 *)((longlong)plVar14 + 0x1c);
      local_660 = (undefined4)plVar14[4];
      uStack_65c = *(undefined4 *)((longlong)plVar14 + 0x24);
      uStack_658 = (undefined4)plVar14[5];
      uStack_654 = *(undefined4 *)((longlong)plVar14 + 0x2c);
      local_650 = (undefined4)plVar14[6];
      uStack_64c = *(undefined4 *)((longlong)plVar14 + 0x34);
      uStack_648 = (undefined4)plVar14[7];
      uStack_644 = *(undefined4 *)((longlong)plVar14 + 0x3c);
      local_688 = lVar8;
      FUN_18007d3c0(param_2,&local_688,param_3);
      goto LAB_18006bd1d;
    }
    FUN_1800a9b50(&local_518,plVar13,param_3);
    if (CONCAT44(uStack_414,local_418) == 2) {
LAB_18006c7ce:
      *local_78 = 0;
      return local_78;
    }
    if (local_418 == 3) {
      plVar14 = (longlong *)param_2[0x11];
      if (*(char *)((longlong)plVar14 + 0x40) == '\0') {
        puVar11 = *(undefined8 **)*param_3;
        lVar8 = (*(code *)*puVar11)(((undefined8 *)*param_3)[1]);
        LOCK();
        cVar12 = *(char *)((longlong)plVar14 + 0x20);
        *(char *)((longlong)plVar14 + 0x20) = '\x01';
        UNLOCK();
        if (cVar12 == '\0') {
          local_70 = puVar11;
          local_68 = (undefined8 *)lVar8;
          local_60 = plVar14;
          if (*(longlong *)((longlong)plVar14 + 0x10) != 0) {
            (**(code **)(*(longlong *)((longlong)plVar14 + 0x10) + 0x18))
                      (*(undefined8 *)((longlong)plVar14 + 0x18));
          }
          *(undefined8 **)((longlong)local_60 + 0x10) = local_68;
          *(undefined8 **)((longlong)local_60 + 0x18) = local_70;
          LOCK();
          *(undefined1 *)((longlong)local_60 + 0x20) = 0;
          UNLOCK();
          plVar14 = local_60;
          if (*(char *)((longlong)local_60 + 0x40) == '\0') goto LAB_18006c578;
        }
        else {
          (**(code **)(lVar8 + 0x18))(puVar11);
        }
      }
      LOCK();
      cVar12 = *(char *)((longlong)plVar14 + 0x41);
      *(char *)((longlong)plVar14 + 0x41) = '\x01';
      UNLOCK();
      if (cVar12 == '\0') {
        LOCK();
        *(undefined1 *)((longlong)plVar14 + 0x41) = 0;
        UNLOCK();
      }
      goto LAB_18006c7ce;
    }
    memcpy(local_618,&local_518,0x100);
    local_98 = local_418;
    uStack_94 = uStack_414;
    uStack_90 = uStack_410;
    uVar3 = uStack_90;
    uStack_8c = uStack_40c;
    local_88 = local_408;
    uStack_90._0_1_ = (char)uStack_410;
    uStack_90 = uVar3;
    if ((local_418 & 1) == 0) {
      if ((char)uStack_90 == '\0') goto LAB_18006c8bc;
      if (local_408 == 0) {
        local_4c = 1;
        local_4d = 1;
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_1802105a8);
      }
    }
    else {
      if ((char)uStack_90 == '\0') {
LAB_18006c8bc:
        local_4c = 1;
        local_4d = 1;
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("internal error: entered unreachable codeC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\hyper-1.11.0\\src\\client\\dispatch.rs"
                      ,0x28,&DAT_180210458);
      }
      if (local_408 == 0) {
        local_4c = 1;
        local_4d = 1;
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_1802105a8);
      }
    }
    local_4c = 1;
    local_4d = 1;
    uVar7 = FUN_1801775d0(local_408 + 0x30,2);
    if ((uVar7 & 4) == 0) {
      memcpy(local_3f8,local_618,0xe0);
      local_128 = local_428;
      uStack_124 = uStack_424;
      uStack_120 = uStack_420;
      uStack_11c = uStack_41c;
      local_138 = local_438;
      uStack_134 = uStack_434;
      uStack_130 = uStack_430;
      uStack_12c = uStack_42c;
      local_49 = 1;
      local_4a = 1;
      local_4b = 1;
      FUN_180121f60(local_3f8);
      uVar4 = uStack_124;
      uVar3 = local_128;
      local_60 = (longlong *)CONCAT44(uStack_134,local_138);
      if (local_60 == (longlong *)0x0) {
        local_49 = 1;
        local_4a = 1;
        local_4b = 1;
        (**(code **)(CONCAT44(uStack_124,local_128) + 0x28))
                  (&local_248,CONCAT44(uStack_12c,uStack_130));
        lVar10 = CONCAT44(uStack_234,local_238);
        lVar8 = CONCAT44(uStack_23c,uStack_240);
        if ((char)local_248 != '\0') goto LAB_18006bf0e;
LAB_18006bfaa:
        cVar12 = local_340;
        if (local_60 != (longlong *)0x0) goto LAB_18006bfbb;
LAB_18006bf50:
        local_49 = 1;
        local_4a = 1;
        local_4b = 1;
        uVar5 = (*(code *)((undefined8 *)CONCAT44(uVar4,uVar3))[4])(CONCAT44(uStack_12c,uStack_130))
        ;
        local_68 = (undefined8 *)CONCAT71(local_68._1_7_,uVar5);
        local_70 = (undefined8 *)CONCAT44(uVar4,uVar3);
        if (cVar12 == '\a') goto LAB_18006bfd5;
LAB_18006c0b6:
        local_49 = 1;
        local_4a = 1;
        local_4b = 1;
        FUN_1800a0200(&local_118,local_328);
        if (CONCAT44(uStack_114,local_118) != 0) {
          local_308 = (undefined4)local_108;
          uStack_304 = local_108._4_4_;
          uStack_300 = (undefined4)uStack_100;
          uStack_2fc = uStack_100._4_4_;
          local_318 = local_118;
          uStack_314 = uStack_114;
          uStack_310 = uStack_110;
          uStack_30c = uStack_10c;
          local_49 = 1;
          local_4a = 1;
          local_4b = 1;
          FUN_18009ff00(&local_248,local_328,&local_318);
          if (CONCAT44(uStack_244,local_248) != 0) {
            local_49 = 1;
            local_4a = 1;
            local_4b = 1;
            (**(code **)(CONCAT44(uStack_244,local_248) + 0x20))
                      (CONCAT44(uStack_22c,uStack_230),CONCAT44(uStack_23c,uStack_240),
                       CONCAT44(uStack_234,local_238));
          }
        }
        memcpy(&local_248,local_3f8,0xe0);
        puVar11 = local_70;
        plVar14 = local_140;
        local_49 = 0;
        local_4a = 1;
        local_4b = 1;
        FUN_1800ae250(local_2a0,plVar1,&local_248,
                      CONCAT71((int7)((ulonglong)param_2 >> 8),cVar12 != '\a' & (byte)local_68) &
                      0xffffffff);
        if (local_2a0[0] == 1) {
          local_2a8 = local_278;
          local_2b8 = uStack_288;
          uStack_2b4 = uStack_284;
          uStack_2b0 = uStack_280;
          uStack_2ac = uStack_27c;
          local_2c8[0] = plStack_298;
          local_108 = local_88;
          local_118 = local_98;
          uStack_114 = uStack_94;
          uStack_110 = uStack_90;
          uStack_10c = uStack_8c;
          local_54 = 1;
          local_148 = FUN_180115be0(local_2c8);
          local_248 = 3;
          uStack_244 = 0;
          local_54 = 0;
          FUN_1800a98b0(&local_118,&local_248);
          if (local_60 != (longlong *)0x0) goto LAB_18006c08c;
LAB_18006c293:
          plVar13 = local_a0;
          local_60 = (longlong *)CONCAT44(uStack_12c,uStack_130);
          if ((code *)*puVar11 != (code *)0x0) {
            (*(code *)*puVar11)(local_60);
          }
          if (local_70[1] != 0) {
            thunk_FUN_1801d3330(local_60,local_70[1],local_70[2]);
          }
        }
        else {
          local_b0 = cVar12 == '\a';
          uStack_f0 = uStack_288;
          uStack_ec = uStack_284;
          local_f8 = uStack_290;
          uStack_f4 = uStack_28c;
          uStack_100 = plStack_298;
          local_d8 = local_270;
          local_e8 = uStack_280;
          uStack_e4 = uStack_27c;
          uStack_e0 = local_278;
          lStack_d0 = CONCAT44(uStack_434,local_438);
          lStack_c8 = CONCAT44(uStack_42c,uStack_430);
          uStack_c0 = local_428;
          uStack_bc = uStack_424;
          uStack_b8 = uStack_420;
          uStack_b4 = uStack_41c;
          local_108 = local_88;
          local_118 = local_98;
          uStack_114 = uStack_94;
          uStack_110 = uStack_90;
          uStack_10c = uStack_8c;
          local_af = (byte)local_68;
          local_4e = 1;
          local_4f = 1;
          FUN_1800ae150(local_2a0,plVar1,param_3);
          if ((local_2a0[0] & 0xff) == 5) {
            local_1e8 = CONCAT44(uStack_b4,uStack_b8);
            lStack_1e0 = CONCAT62(uStack_ae,CONCAT11(local_af,local_b0));
            lStack_1f0 = CONCAT44(uStack_bc,uStack_c0);
            local_1f8 = lStack_c8;
            local_208 = local_d8;
            lStack_200 = lStack_d0;
            local_218 = local_e8;
            uStack_214 = uStack_e4;
            uStack_210 = (undefined4)uStack_e0;
            uStack_20c = uStack_e0._4_4_;
            local_228 = local_f8;
            uStack_224 = uStack_f4;
            uStack_220 = uStack_f0;
            uStack_21c = uStack_ec;
            local_238 = (undefined4)local_108;
            uStack_234 = local_108._4_4_;
            uStack_230 = (undefined4)uStack_100;
            uStack_22c = uStack_100._4_4_;
            local_248 = local_118;
            uStack_244 = uStack_114;
            uStack_240 = uStack_110;
            uStack_23c = uStack_10c;
            local_4e = 0;
            local_4f = 0;
            FUN_18007d3c0(param_2,&local_248,param_3);
            goto LAB_18006c50e;
          }
          if ((local_2a0[0] & 0xff) == 6) {
            local_1e8 = CONCAT44(uStack_b4,uStack_b8);
            lStack_1e0 = CONCAT62(uStack_ae,CONCAT11(local_af,local_b0));
            lStack_1f0 = CONCAT44(uStack_bc,uStack_c0);
            local_1f8 = lStack_c8;
            local_208 = local_d8;
            lStack_200 = lStack_d0;
            local_218 = local_e8;
            uStack_214 = uStack_e4;
            uStack_210 = (undefined4)uStack_e0;
            uStack_20c = uStack_e0._4_4_;
            local_228 = local_f8;
            uStack_224 = uStack_f4;
            uStack_220 = uStack_f0;
            uStack_21c = uStack_ec;
            local_238 = (undefined4)local_108;
            uStack_234 = local_108._4_4_;
            uStack_230 = (undefined4)uStack_100;
            uStack_22c = uStack_100._4_4_;
            local_248 = local_118;
            uStack_244 = uStack_114;
            uStack_240 = uStack_110;
            uStack_23c = uStack_10c;
            local_60 = param_2;
            FUN_180075cd0(param_2);
            local_60[0xc] = local_1e8;
            local_60[0xd] = lStack_1e0;
            local_60[10] = local_1f8;
            local_60[0xb] = lStack_1f0;
            local_60[8] = local_208;
            local_60[9] = lStack_200;
            local_60[6] = CONCAT44(uStack_214,local_218);
            local_60[7] = CONCAT44(uStack_20c,uStack_210);
            local_60[4] = CONCAT44(uStack_224,local_228);
            local_60[5] = CONCAT44(uStack_21c,uStack_220);
            local_60[2] = CONCAT44(uStack_234,local_238);
            local_60[3] = CONCAT44(uStack_22c,uStack_230);
            *local_60 = CONCAT44(uStack_244,local_248);
            local_60[1] = CONCAT44(uStack_23c,uStack_240);
            goto LAB_18006c578;
          }
          local_2e8 = uStack_290;
          uStack_2e4 = uStack_28c;
          uStack_2e0 = uStack_288;
          uStack_2dc = uStack_284;
          plStack_2f0 = plStack_298;
          local_258 = local_108;
          local_268 = local_118;
          uStack_264 = uStack_114;
          uStack_260 = uStack_110;
          uStack_25c = uStack_10c;
          local_53 = 1;
          local_148 = FUN_180115be0(local_2f8);
          local_248 = 3;
          uStack_244 = 0;
          local_53 = 0;
          FUN_1800a98b0(&local_268,&local_248);
          FUN_18013c270(&uStack_100);
          LOCK();
          *uStack_100 = *uStack_100 + -1;
          UNLOCK();
          if (*uStack_100 == 0) {
            FUN_18013bc70(&uStack_100);
          }
          FUN_1800755d0(&local_e8);
          if (lStack_d0 == 0) {
            local_60 = (longlong *)lStack_c8;
            local_68 = (undefined8 *)CONCAT44(uStack_bc,uStack_c0);
            if ((code *)*local_68 != (code *)0x0) {
              (*(code *)*local_68)(lStack_c8);
            }
            if (local_68[1] == 0) goto LAB_18006c50e;
            thunk_FUN_1801d3330(local_60,local_68[1],local_68[2]);
            plVar13 = local_a0;
          }
          else {
            local_49 = 0;
            local_4a = 0;
            local_4b = 0;
            (**(code **)(lStack_d0 + 0x20))
                      (CONCAT44(uStack_b4,uStack_b8),lStack_c8,CONCAT44(uStack_bc,uStack_c0));
LAB_18006c50e:
            plVar13 = local_a0;
          }
        }
      }
      else {
        lVar10 = CONCAT44(uStack_124,local_128);
        lVar8 = lVar10;
LAB_18006bf0e:
        if (lVar10 != lVar8) goto LAB_18006bfaa;
        if ((lVar8 != 0) || (bVar6 = local_340 - 1, (bVar6 < 7 & 0x59U >> (bVar6 & 0x1f)) == 0)) {
          local_49 = 1;
          local_4a = 1;
          local_4b = 1;
          FUN_18011b220(local_3f8);
          goto LAB_18006bfaa;
        }
        cVar12 = (char)(0x7000504000001 >> (bVar6 * '\b' & 0x3f));
        if (local_60 == (longlong *)0x0) goto LAB_18006bf50;
LAB_18006bfbb:
        local_68 = (undefined8 *)
                   CONCAT71(local_68._1_7_,(undefined8 *)CONCAT44(uVar4,uVar3) == (undefined8 *)0x0)
        ;
        local_70 = (undefined8 *)CONCAT44(uVar4,uVar3);
        if (cVar12 != '\a') goto LAB_18006c0b6;
LAB_18006bfd5:
        puVar11 = (undefined8 *)CONCAT44(uVar4,uVar3);
        local_49 = 1;
        local_4a = 1;
        local_4b = 1;
        local_70 = puVar11;
        bVar6 = FUN_18011ac50(local_3f8);
        if ((lVar8 != 0 & bVar6) != 1) goto LAB_18006c0b6;
        local_108 = local_88;
        local_118 = local_98;
        uStack_114 = uStack_94;
        uStack_110 = uStack_90;
        uStack_10c = uStack_8c;
        local_55 = 1;
        local_148 = FUN_180115860();
        local_248 = 3;
        uStack_244 = 0;
        local_55 = 0;
        FUN_1800a98b0(&local_118,&local_248);
        local_50 = 1;
        local_51 = 0;
        FUN_18007a660(local_3f8);
        if (local_60 == (longlong *)0x0) goto LAB_18006c293;
LAB_18006c08c:
        plVar13 = local_a0;
        local_4c = 0;
        local_4d = 0;
        (**(code **)((longlong)local_60 + 0x20))
                  (CONCAT44(uStack_11c,uStack_120),CONCAT44(uStack_12c,uStack_130),puVar11);
      }
    }
    else {
      local_52 = 1;
      FUN_180077610(&local_98);
      FUN_18007c570(local_618);
    }
  } while( true );
}


