/* FUN_1800a36b0 @ 1800a36b0 */

undefined8 FUN_1800a36b0(longlong *param_1,undefined **param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined **ppuVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  uint uVar13;
  undefined **ppuVar14;
  longlong *plVar15;
  undefined **local_568;
  undefined **local_560;
  longlong lStack_558;
  undefined4 local_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined4 local_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 local_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined **local_508;
  undefined **ppuStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined **local_298;
  undefined **ppuStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined **local_268;
  undefined **ppuStack_260;
  int local_258;
  int iStack_254;
  int iStack_250;
  int iStack_24c;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  byte local_1f0;
  undefined **local_1e8;
  undefined **ppuStack_1e0;
  longlong local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined **local_178;
  undefined **ppuStack_170;
  int local_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  undefined8 local_158;
  undefined *local_148;
  undefined *puStack_140;
  undefined *local_138;
  undefined **local_128;
  undefined **ppuStack_120;
  int local_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined **local_f8;
  undefined **ppuStack_f0;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined8 local_d8;
  undefined **local_d0;
  undefined **ppuStack_c8;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined8 local_b0;
  undefined **local_a8;
  undefined **ppuStack_a0;
  uint local_8c;
  longlong *local_88;
  undefined *local_80;
  undefined **local_78;
  undefined **local_70;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  if ((int)*param_1 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("upgradeable client connection polled after upgradeC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\hyper-1.11.0\\src\\client\\conn\\http1.rs"
                  ,0x32,&DAT_180210178);
  }
  local_a8 = (undefined **)(param_1 + 0x17);
  plVar1 = param_1 + 0x46;
  plVar15 = param_1 + 0x40;
  local_8c = 0;
  local_88 = plVar15;
LAB_1800a3759:
  do {
    uVar13 = local_8c + (local_8c < 0x10);
    bVar2 = 0xf < local_8c;
    local_8c = uVar13;
    if (bVar2) {
      FUN_180115f80(param_2);
      return 1;
    }
LAB_1800a379f:
    do {
      if ((char)param_1[0x4c] != '\0') goto LAB_1800a3e70;
      if ((param_1[0x27] != 0) || (param_1[0x34] == -0x7ffffffffffffffe)) {
        lVar3 = param_1[0x4a];
        *(undefined1 *)(param_1 + 0x4a) = 3;
        if ((char)lVar3 == '\x03') {
          ppuVar12 = param_2;
          bVar7 = FUN_180059680(param_1);
          goto LAB_1800a3e1b;
        }
        local_f8 = (undefined **)*plVar1;
        ppuStack_f0 = (undefined **)param_1[0x47];
        local_e8 = (int)param_1[0x48];
        iStack_e4 = *(int *)((longlong)param_1 + 0x244);
        iStack_e0 = (int)param_1[0x49];
        iStack_dc = *(int *)((longlong)param_1 + 0x24c);
        local_d8._5_3_ = (undefined3)((uint)*(int *)((longlong)param_1 + 0x254) >> 8);
        local_d8._0_5_ = CONCAT41(*(undefined4 *)((longlong)param_1 + 0x251),(char)lVar3);
        if (param_1[0x27] - 1U < 2) {
          local_61 = 1;
          ppuVar12 = param_2;
          uVar9 = FUN_180123e20(&local_f8);
          local_70 = ppuVar12;
          if ((uVar9 & 1) != 0) {
            local_4e8 = local_d8;
            local_4f8 = (undefined **)CONCAT44(iStack_e4,local_e8);
            uStack_4f0 = (undefined **)CONCAT44(iStack_dc,iStack_e0);
            local_508 = local_f8;
            ppuStack_500 = ppuStack_f0;
            local_61 = 0;
            FUN_1801245b0(plVar1,&local_508);
            goto LAB_1800a3e70;
          }
          if (ppuVar12 == (undefined **)0x0) {
            local_61 = 1;
            FUN_180056600(&local_1e8,param_1,param_2);
            ppuVar12 = ppuStack_1e0;
            switch((longlong)local_1e8 + -3) {
            case 0:
              local_61 = 1;
              FUN_1801240e0(&local_268,&local_f8,&ppuStack_1e0);
              if (local_268 == (undefined **)0x0) {
                local_4e8 = local_d8;
                local_4f8 = (undefined **)CONCAT44(iStack_e4,local_e8);
                uStack_4f0 = (undefined **)CONCAT44(iStack_dc,iStack_e0);
                local_508 = local_f8;
                ppuStack_500 = ppuStack_f0;
                local_61 = 0;
                FUN_1801245b0(plVar1,&local_508);
                goto LAB_1800a379f;
              }
              local_70 = local_268;
              local_78 = ppuStack_260;
              local_80 = (undefined *)CONCAT44(iStack_254,local_258);
              local_100 = CONCAT44(iStack_24c,iStack_250);
              if (param_1[0x27] - 1U < 2) {
                FUN_180114360(local_a8);
              }
              local_61 = 1;
              (*(code *)local_70[4])(local_100,local_78,local_80);
              break;
            case 1:
              local_508 = ppuStack_1e0;
              local_66 = 1;
              uVar11 = FUN_1801158a0(CONCAT71((int7)((ulonglong)((longlong)local_1e8 + -3) >> 8),7))
              ;
              local_66 = 0;
              FUN_1800689b0(uVar11,ppuVar12);
              local_61 = 1;
              FUN_180123ef0(&local_f8,uVar11);
              break;
            case 2:
              break;
            case 3:
              local_4e8 = local_d8;
              local_4f8 = (undefined **)CONCAT44(iStack_e4,local_e8);
              uStack_4f0 = (undefined **)CONCAT44(iStack_dc,iStack_e0);
              local_508 = local_f8;
              ppuStack_500 = ppuStack_f0;
              local_61 = 0;
              FUN_1801245b0(plVar1,&local_508);
              goto LAB_1800a3e70;
            default:
              local_510 = uStack_190;
              local_520 = uStack_1a0;
              uStack_518 = local_198;
              local_530 = uStack_1b0;
              uStack_52c = uStack_1ac;
              uStack_528 = (undefined4)local_1a8;
              uStack_524 = local_1a8._4_4_;
              local_540 = uStack_1c0;
              uStack_53c = uStack_1bc;
              uStack_538 = local_1b8;
              uStack_534 = uStack_1b4;
              local_550 = (undefined4)uStack_1d0;
              uStack_54c = uStack_1d0._4_4_;
              uStack_548 = local_1c8;
              uStack_544 = uStack_1c4;
              local_560 = ppuStack_1e0;
              lStack_558 = local_1d8;
              local_568 = local_1e8;
              local_61 = 1;
              FUN_1801241d0(&local_508,&local_f8,&local_568);
              if ((int)local_508 == 4) {
                local_248 = local_d8;
                local_258 = local_e8;
                iStack_254 = iStack_e4;
                iStack_250 = iStack_e0;
                iStack_24c = iStack_dc;
                local_268 = local_f8;
                ppuStack_260 = ppuStack_f0;
                local_61 = 0;
                FUN_1801245b0(plVar1,&local_268);
                goto LAB_1800a379f;
              }
              local_70 = local_508;
              if (param_1[0x27] - 1U < 2) {
                FUN_180114360(local_a8);
              }
              if (local_70 != (undefined **)0x3) {
                local_61 = 1;
                FUN_1800430f0(&local_508);
              }
            }
          }
          else {
            FUN_180059850(param_1,param_2);
            local_80 = *local_70;
            if (local_80 != (undefined *)0x0) {
              local_78 = (undefined **)local_70[1];
              if ((code *)*local_78 != (code *)0x0) {
                (*(code *)*local_78)(local_80);
              }
              if (local_78[1] != (undefined *)0x0) {
                thunk_FUN_1801d3330(local_80,local_78[1],local_78[2]);
              }
            }
            thunk_FUN_1801d3330(local_70,0x18,8);
          }
        }
        FUN_1800a6a70(&local_f8);
        goto LAB_1800a379f;
      }
      if (((int)*plVar15 == 2) || (cVar6 = FUN_1800a9540(plVar15,param_2), cVar6 == '\0')) {
LAB_1800a3b7e:
        ppuVar12 = local_a8;
        *(undefined1 *)(param_1 + 0x4c) = 1;
        FUN_180114360(local_a8);
        FUN_180114410(ppuVar12);
        goto LAB_1800a379f;
      }
      FUN_180058540(&local_268,param_1,param_2);
      bVar7 = local_1f0;
      if (local_268 == (undefined **)0x5) goto LAB_1800a3e70;
      if ((int)local_268 == 3) {
        ppuStack_500 = ppuStack_260;
        local_508 = (undefined **)0x3;
        ppuVar12 = (undefined **)FUN_1800a2fc0(plVar15,&local_508);
        if (ppuVar12 == (undefined **)0x0) goto LAB_1800a3b7e;
        break;
      }
      if ((int)local_268 == 4) {
        if (param_1[0x34] == -0x7ffffffffffffffb) goto LAB_1800a3b7e;
        goto LAB_1800a379f;
      }
      local_508 = local_268;
      ppuStack_500 = ppuStack_260;
      local_4a8 = local_208;
      uStack_4a0 = uStack_200;
      local_4b8 = local_218;
      uStack_4b0 = uStack_210;
      local_4f8 = (undefined **)CONCAT44(iStack_254,local_258);
      uStack_4f0 = (undefined **)CONCAT44(iStack_24c,iStack_250);
      local_4c8 = local_228;
      uStack_4c4 = uStack_224;
      uStack_4c0 = uStack_220;
      uStack_4bc = uStack_21c;
      local_4d8 = local_238;
      uStack_4d4 = uStack_234;
      uStack_4d0 = uStack_230;
      uStack_4cc = uStack_22c;
      local_4e8 = local_248;
      uStack_4e0._0_4_ = uStack_240;
      uStack_4e0._4_4_ = uStack_23c;
      if (local_1f8 == 0) {
        local_f8 = (undefined **)((ulonglong)local_f8 & 0xffffffffffffff00);
      }
      else {
        local_62 = 1;
        FUN_1801242d0(&local_f8,local_1f8,local_1f0 & 1);
        local_278 = local_d8;
        local_288 = CONCAT44(iStack_e4,local_e8);
        uStack_280 = CONCAT44(iStack_dc,iStack_e0);
        local_298 = local_f8;
        ppuStack_290 = ppuStack_f0;
        local_108 = local_b0;
        local_118 = local_c0;
        iStack_114 = iStack_bc;
        iStack_110 = iStack_b8;
        iStack_10c = iStack_b4;
        local_128 = local_d0;
        ppuStack_120 = ppuStack_c8;
        FUN_1801245b0(plVar1,&local_298);
        local_f8 = local_128;
        ppuStack_f0 = ppuStack_120;
        local_e8 = local_118;
        iStack_e4 = iStack_114;
        iStack_e0 = iStack_110;
        iStack_dc = iStack_10c;
        local_d8 = local_108;
      }
      if ((bVar7 & 2) != 0) {
        local_63 = 1;
        ppuVar12 = (undefined **)FUN_1801145b0(local_a8);
        local_63 = 1;
        local_128 = (undefined **)FUN_18009f6f0(&local_4a8);
        ppuStack_120 = ppuVar12;
        if (ppuVar12 != (undefined **)0x0 && local_128 != (undefined **)0x0) {
          LOCK();
          *ppuVar12 = *ppuVar12 + -1;
          UNLOCK();
          if (*ppuVar12 == (undefined *)0x0) {
            local_63 = 1;
            FUN_1801139f0(&ppuStack_120);
          }
        }
      }
      local_188 = local_4a8;
      uStack_180 = uStack_4a0;
      local_198 = local_4b8;
      uStack_190 = uStack_4b0;
      local_1a8 = CONCAT44(uStack_4c4,local_4c8);
      uStack_1a0 = CONCAT44(uStack_4bc,uStack_4c0);
      local_1b8 = local_4d8;
      uStack_1b4 = uStack_4d4;
      uStack_1b0 = uStack_4d0;
      uStack_1ac = uStack_4cc;
      local_1c8 = (undefined4)local_4e8;
      uStack_1c4 = local_4e8._4_4_;
      uStack_1c0 = (undefined4)uStack_4e0;
      uStack_1bc = uStack_4e0._4_4_;
      local_1d8 = (longlong)local_4f8;
      uStack_1d0 = (longlong)uStack_4f0;
      local_1e8 = local_508;
      ppuStack_1e0 = ppuStack_500;
      local_158 = local_d8;
      local_168 = local_e8;
      iStack_164 = iStack_e4;
      iStack_160 = iStack_e0;
      iStack_15c = iStack_dc;
      local_178 = local_f8;
      ppuStack_170 = ppuStack_f0;
      local_63 = 0;
      ppuVar12 = (undefined **)FUN_1800a2fc0(plVar15,&local_1e8);
    } while (ppuVar12 == (undefined **)0x0);
    bVar7 = 0;
LAB_1800a3e1b:
    if (ppuVar12 != (undefined **)0x0 && (bVar7 & 1) == 0) goto LAB_1800a401f;
LAB_1800a3e70:
    ppuVar12 = param_2;
    uVar9 = FUN_1800a7c40(param_1);
    if (ppuVar12 != (undefined **)0x0 && (uVar9 & 1) == 0) goto LAB_1800a401f;
    ppuVar14 = param_2;
    uVar10 = FUN_1800699b0(param_1);
    if ((uVar10 & 1) == 0) {
      if (ppuVar14 != (undefined **)0x0) {
        local_67 = 1;
        local_508 = ppuVar14;
        ppuVar12 = (undefined **)FUN_1801158a0(8);
        local_67 = 0;
        FUN_1800689b0(ppuVar12,ppuVar14);
        goto LAB_1800a401f;
      }
      FUN_180059dc0(local_a8);
      FUN_1800564c0(param_1,param_2);
    }
    plVar15 = local_88;
    if ((char)param_1[0x4c] == '\0') {
      if ((*(longlong *)param_1[0x4b] == 0) || (0x8000000000000001 < (ulonglong)param_1[0x34])) {
        cVar6 = *(char *)((longlong)param_1 + 0x1fb);
        *(undefined1 *)((longlong)param_1 + 0x1fb) = 0;
joined_r0x0001800a3f4c:
        if (cVar6 != '\0') goto LAB_1800a3759;
        iVar8 = (int)param_1[0x27];
      }
      else {
        cVar6 = *(char *)((longlong)param_1 + 0x1fb);
        *(undefined1 *)((longlong)param_1 + 0x1fb) = 0;
        if ((uVar9 != 0) && ((uVar10 & 1) != 0)) goto joined_r0x0001800a3f4c;
        if (cVar6 != '\0') goto LAB_1800a3759;
        ppuVar12 = param_2;
        uVar9 = FUN_1800a7c40(param_1);
        if ((uVar9 & 1) == 0) {
          if (ppuVar12 != (undefined **)0x0) goto LAB_1800a401f;
          goto LAB_1800a3759;
        }
        if ((char)param_1[0x4c] != '\0') goto LAB_1800a40ec;
        iVar8 = (int)param_1[0x27];
      }
      if (iVar8 != 4) {
        return 1;
      }
      goto LAB_1800a40ec;
    }
    cVar6 = *(char *)((longlong)param_1 + 0x1fb);
    *(undefined1 *)((longlong)param_1 + 0x1fb) = 0;
    if (cVar6 == '\0') {
LAB_1800a40ec:
      lVar3 = param_1[0x19];
      ppuVar14 = (undefined **)param_1[0x1a];
      param_1[0x19] = 0;
      if ((int)lVar3 == 1) {
        ppuVar12 = (undefined **)param_1[0x3b];
        param_1[0x3b] = 0;
        if (ppuVar12 == (undefined **)0x0) {
          local_508 = (undefined **)*param_1;
          *param_1 = 2;
          local_268 = ppuVar14;
          if (local_508 == (undefined **)0x2) {
            local_64 = 1;
            local_508 = ppuVar14;
                    /* WARNING: Subroutine does not return */
            FUN_180201b60("upgradeable client connection missing after upgrade",0x33,&DAT_1802101c8)
            ;
          }
          memcpy(&ppuStack_500,param_1 + 1,0x260);
          local_64 = 1;
          FUN_18009ba70(&local_1e8,&local_508);
          lVar5 = uStack_1d0;
          lVar3 = local_1d8;
          ppuVar4 = ppuStack_1e0;
          ppuVar12 = local_1e8;
          local_148 = (undefined *)CONCAT44(uStack_1c4,local_1c8);
          puStack_140 = (undefined *)CONCAT44(uStack_1bc,uStack_1c0);
          local_138 = (undefined *)CONCAT44(uStack_1b4,local_1b8);
          local_1e8 = ppuVar14;
          FUN_180027490();
          local_70 = (undefined **)thunk_FUN_1801d32d0(0x18,8);
          if (local_70 == (undefined **)0x0) {
            local_a8 = ppuVar12;
            ppuStack_a0 = ppuVar4;
            local_78 = (undefined **)lVar5;
            local_80 = (undefined *)lVar3;
                    /* WARNING: Subroutine does not return */
            FUN_180201705(8,0x18);
          }
          local_70[2] = local_138;
          *local_70 = local_148;
          local_70[1] = puStack_140;
          ppuStack_500 = &PTR_FUN_18020fea8;
          local_4f8 = ppuVar12;
          uStack_4f0 = ppuVar4;
          local_4e8 = lVar3;
          uStack_4e0 = lVar5;
          local_508 = local_70;
          FUN_1801219e0(ppuVar14,&local_508);
          return 0;
        }
        if (ppuVar14 != (undefined **)0x0) {
          local_508 = ppuVar14;
          local_70 = ppuVar14;
          uVar13 = FUN_1801775a0(ppuVar14 + 6);
          if ((uVar13 & 5) == 1) {
            (**(code **)(local_70[4] + 0x10))(local_70[5]);
          }
          LOCK();
          *local_70 = *local_70 + -1;
          UNLOCK();
          if (*local_70 == (undefined *)0x0) {
            FUN_180113f90(&local_508);
          }
        }
      }
      else {
        ppuVar12 = param_2;
        uVar9 = FUN_1800699b0(param_1);
        if ((uVar9 & 1) == 0) {
          if (ppuVar12 == (undefined **)0x0) {
            uVar9 = (**(code **)(param_1[0x10] + 0x30))(param_1[0xf]);
          }
          else {
            uVar9 = 0;
            param_2 = ppuVar12;
          }
        }
        else {
          uVar9 = 1;
          param_2 = ppuVar12;
        }
        if ((uVar9 & 1) != 0) {
          return 1;
        }
        if (param_2 == (undefined **)0x0) {
          ppuVar12 = (undefined **)param_1[0x3b];
          param_1[0x3b] = 0;
          if (ppuVar12 == (undefined **)0x0) {
            return 0;
          }
        }
        else {
          ppuVar12 = (undefined **)FUN_180115680(param_2);
        }
      }
LAB_1800a401f:
      plVar15 = local_88;
      lVar3 = param_1[0x4a];
      *(undefined1 *)(param_1 + 0x4a) = 3;
      local_70 = ppuVar12;
      if ((char)lVar3 != '\x03') {
        local_508 = (undefined **)*plVar1;
        ppuStack_500 = (undefined **)param_1[0x47];
        local_4f8 = (undefined **)param_1[0x48];
        uStack_4f0 = (undefined **)param_1[0x49];
        local_4e8._0_5_ = CONCAT41(*(undefined4 *)((longlong)param_1 + 0x251),(char)lVar3);
        local_4e8 = CONCAT44(*(int *)((longlong)param_1 + 0x254),(undefined4)local_4e8);
        uVar11 = FUN_1801158a0(CONCAT71((uint7)(uint3)((uint)*(int *)((longlong)param_1 + 0x254) >>
                                                      8),7));
        FUN_180068680(uVar11,"connection error",0x10);
        FUN_180123ef0(&local_508,uVar11);
        local_65 = 1;
        FUN_1800a6a70(&local_508);
      }
      local_508 = (undefined **)0x3;
      local_65 = 0;
      ppuStack_500 = local_70;
      FUN_1800a2fc0(plVar15,&local_508);
      return 0;
    }
  } while( true );
}


