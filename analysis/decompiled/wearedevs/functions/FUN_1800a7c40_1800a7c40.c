/* FUN_1800a7c40 @ 1800a7c40 */

undefined8 FUN_1800a7c40(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 uVar10;
  char cVar11;
  byte bVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong lVar22;
  undefined1 local_528 [208];
  longlong local_458;
  longlong *plStack_450;
  longlong *local_448;
  longlong lStack_440;
  longlong *local_438;
  longlong *plStack_430;
  longlong *local_428;
  longlong *plStack_420;
  longlong *local_418;
  undefined8 uStack_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined1 local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  int local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  longlong *local_1d8;
  longlong *plStack_1d0;
  longlong *local_1c8;
  longlong *plStack_1c0;
  longlong *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  int local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 *local_88;
  int *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  undefined1 local_5a;
  undefined1 local_59;
  longlong *local_58;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  char local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_80 = (int *)(param_1 + 0x200);
  lVar22 = param_1 + 0x10;
  local_c0 = param_1 + 0x218;
  plVar21 = (longlong *)(param_1 + 0xb8);
LAB_1800a7cc9:
  do {
    if (*(char *)(param_1 + 0x260) != '\0') {
      return 0;
    }
    if (((**(longlong **)(param_1 + 600) == 0) && (*(int *)(param_1 + 0x138) != 4)) &&
       (*(longlong *)(param_1 + 0x1a0) == -0x7ffffffffffffffe)) {
      uVar15 = *(ulonglong *)(param_1 + 0x48);
      if (uVar15 == 0) {
        lVar14 = 0;
        uVar20 = 0;
LAB_1800a7d6b:
        lVar18 = 0;
      }
      else {
        uVar20 = *(ulonglong *)(param_1 + 0x30);
        uVar17 = 0;
        if (uVar20 <= *(ulonglong *)(param_1 + 0x40)) {
          uVar17 = uVar20;
        }
        lVar14 = *(ulonglong *)(param_1 + 0x40) - uVar17;
        lVar18 = uVar15 - (uVar20 - lVar14);
        if (uVar15 < uVar20 - lVar14 || lVar18 == 0) {
          uVar20 = uVar15 + lVar14;
          goto LAB_1800a7d6b;
        }
      }
      local_1c8 = *(longlong **)(param_1 + 0x38);
      local_1d8 = local_1c8 + lVar14 * 10;
      plStack_1d0 = local_1c8 + uVar20 * 10;
      plStack_1c0 = local_1c8 + lVar18 * 10;
      lVar14 = FUN_1800c3760(&local_1d8);
      if ((lVar14 == 0) && ((int)*(undefined8 *)(param_1 + 0x200) == 2)) {
        local_68 = plVar21;
        FUN_1800a9b50(&local_1d8,local_c0,param_2);
        uVar10 = local_100;
        uVar16 = local_108;
        if (CONCAT44(uStack_d4,local_d8) == 2) {
          *(undefined1 *)(param_1 + 0x228) = 1;
LAB_1800a880d:
          plVar21 = local_68;
          *(undefined1 *)(param_1 + 0x260) = 1;
          FUN_180114360(local_68);
          FUN_180114410(plVar21);
          return 0;
        }
        if (local_d8 == 3) {
          return 1;
        }
        local_1e8 = local_c8;
        local_1f8 = local_d8;
        uStack_1f4 = uStack_d4;
        uStack_1f0 = uStack_d0;
        uStack_1ec = uStack_cc;
        local_59 = 1;
        cVar11 = FUN_1800a9540(&local_d8,param_2);
        if (cVar11 == '\0') {
          local_4f = 1;
          FUN_1800a5d50(&local_1f8);
          FUN_1800a7560(&local_1d8);
          goto LAB_1800a880d;
        }
        local_200 = local_110;
        uStack_210 = local_120;
        uStack_208 = uStack_118;
        local_218 = local_128;
        local_228 = local_138;
        uStack_220 = uStack_130;
        local_238 = local_148;
        uVar7 = local_238;
        uStack_230 = uStack_140;
        uVar8 = uStack_230;
        local_248 = local_158;
        uVar5 = local_248;
        uStack_240 = uStack_150;
        uVar6 = uStack_240;
        local_258 = local_168;
        uVar3 = local_258;
        uStack_250 = uStack_160;
        uVar4 = uStack_250;
        local_268 = local_178;
        uVar1 = local_268;
        uStack_260 = uStack_170;
        uVar2 = uStack_260;
        local_438 = local_1d8;
        plStack_430 = plStack_1d0;
        local_428 = local_1c8;
        plStack_420 = plStack_1c0;
        local_418 = local_1b8;
        uStack_3e0 = uStack_180;
        local_360 = uVar10;
        local_378 = uStack_118;
        uStack_370 = local_110;
        local_388 = local_128;
        uStack_380 = local_120;
        local_398 = local_138;
        uStack_390 = uStack_130;
        local_268._0_4_ = (undefined4)local_178;
        local_268._4_4_ = (undefined4)((ulonglong)local_178 >> 0x20);
        uStack_260._0_4_ = (undefined4)uStack_170;
        uStack_260._4_4_ = (undefined4)((ulonglong)uStack_170 >> 0x20);
        local_258._0_4_ = (undefined4)local_168;
        local_258._4_4_ = (undefined4)((ulonglong)local_168 >> 0x20);
        uStack_250._0_4_ = (undefined4)uStack_160;
        uStack_250._4_4_ = (undefined4)((ulonglong)uStack_160 >> 0x20);
        local_248._0_4_ = (undefined4)local_158;
        local_248._4_4_ = (undefined4)((ulonglong)local_158 >> 0x20);
        uStack_240._0_4_ = (undefined4)uStack_150;
        uStack_240._4_4_ = (undefined4)((ulonglong)uStack_150 >> 0x20);
        local_238._0_4_ = (undefined4)local_148;
        local_238._4_4_ = (undefined4)((ulonglong)local_148 >> 0x20);
        uStack_230._0_4_ = (undefined4)uStack_140;
        uStack_230._4_4_ = (undefined4)((ulonglong)uStack_140 >> 0x20);
        local_3a8 = (undefined4)local_238;
        uStack_3a4 = local_238._4_4_;
        uStack_3a0 = (undefined4)uStack_230;
        uStack_39c = uStack_230._4_4_;
        local_3b8 = (undefined4)local_248;
        uStack_3b4 = local_248._4_4_;
        uStack_3b0 = (undefined4)uStack_240;
        uStack_3ac = uStack_240._4_4_;
        local_3c8 = (undefined4)local_258;
        uStack_3c4 = local_258._4_4_;
        uStack_3c0 = (undefined4)uStack_250;
        uStack_3bc = uStack_250._4_4_;
        local_3d8 = (undefined4)local_268;
        uStack_3d4 = local_268._4_4_;
        uStack_3d0 = (undefined4)uStack_260;
        uStack_3cc = uStack_260._4_4_;
        local_368 = uVar16;
        local_268 = uVar1;
        uStack_260 = uVar2;
        local_258 = uVar3;
        uStack_250 = uVar4;
        local_248 = uVar5;
        uStack_240 = uVar6;
        local_238 = uVar7;
        uStack_230 = uVar8;
        local_b8 = lVar22;
        if (*local_80 != 2) {
          FUN_1800a5d50(local_80);
        }
        plVar21 = plStack_430;
        plVar19 = local_438;
        *(undefined8 *)(local_80 + 4) = local_c8;
        *(ulonglong *)local_80 = CONCAT44(uStack_d4,local_d8);
        *(ulonglong *)(local_80 + 2) = CONCAT44(uStack_cc,uStack_d0);
        memcpy(&local_358,&local_428,0xd0);
        local_288 = local_f8;
        uStack_280 = uStack_f0;
        local_278 = local_e8;
        uStack_270 = uStack_e0;
        memcpy(local_528,&local_358,0xf0);
        if (plVar19 == (longlong *)0x3) goto LAB_1800a880d;
        if (plVar19 == (longlong *)&DAT_00000004) {
          return 1;
        }
        memcpy(&local_348,local_528,0xd0);
        local_a8 = lStack_440;
        local_358 = plVar19;
        uStack_350 = plVar21;
        local_b0 = local_458;
        local_70 = plStack_450;
        local_58 = local_448;
        if (local_458 == 0) {
          local_4a = '\x01';
          local_4b = 1;
          cVar11 = (*(code *)local_448[4])();
          plVar19 = local_58;
          if (cVar11 != '\0') goto LAB_1800a8561;
          local_4a = '\x01';
          local_4b = 1;
          (*(code *)local_58[5])(&local_1d8,local_70);
          bVar12 = (byte)local_1d8 ^ 1 | local_1c8 != plStack_1d0;
          local_78 = *(longlong **)(param_1 + 600);
          lVar22 = *local_78;
          plVar21 = plStack_1d0;
joined_r0x0001800a84e1:
          if (lVar22 != 0) {
            local_90 = local_78 + 1;
            if (local_78[1] == 0) {
              local_88 = (undefined8 *)local_78[2];
              local_a0 = (undefined8 *)local_78[3];
              if ((code *)*local_a0 != (code *)0x0) {
                (*(code *)*local_a0)(local_88);
              }
              if (local_a0[1] != 0) {
                thunk_FUN_1801d3330(local_88,local_a0[1],local_a0[2]);
              }
            }
            else {
              (**(code **)(local_78[1] + 0x20))(local_78[4],local_78[2],local_78[3]);
            }
          }
          *local_78 = 1;
          local_78[1] = local_458;
          local_78[2] = (longlong)plStack_450;
          local_78[3] = (longlong)local_448;
          local_78[4] = lStack_440;
          cVar11 = '\0';
          local_78 = local_58;
        }
        else {
          if (local_448 != (longlong *)0x0) {
            bVar12 = 0;
            local_78 = *(longlong **)(param_1 + 600);
            lVar22 = *local_78;
            plVar21 = local_448;
            goto joined_r0x0001800a84e1;
          }
          plVar19 = (longlong *)0x0;
LAB_1800a8561:
          local_90 = *(longlong **)(param_1 + 600);
          if (*local_90 != 0) {
            if (local_90[1] == 0) {
              local_78 = (longlong *)local_90[2];
              local_88 = (undefined8 *)local_90[3];
              if ((code *)*local_88 != (code *)0x0) {
                (*(code *)*local_88)(local_78);
              }
              if (local_88[1] != 0) {
                thunk_FUN_1801d3330(local_78,local_88[1],local_88[2]);
              }
            }
            else {
              (**(code **)(local_90[1] + 0x20))(local_90[4],local_90[2],local_90[3]);
            }
          }
          *local_90 = 0;
          bVar12 = 2;
          cVar11 = '\x01';
          local_78 = plVar19;
        }
        memcpy(&local_1d8,&local_358,0xe0);
        local_4b = 0;
        local_4a = cVar11;
        FUN_180055790(param_1,&local_1d8,bVar12,plVar21);
        plVar21 = local_68;
        lVar22 = local_b8;
        if (cVar11 != '\0') {
          if (local_b0 == 0) {
            if ((code *)*local_58 != (code *)0x0) {
              (*(code *)*local_58)();
            }
            if (local_58[1] != 0) {
              thunk_FUN_1801d3330(local_70,local_58[1],local_58[2]);
            }
          }
          else {
            local_4e = 0;
            (**(code **)(local_b0 + 0x20))(local_a8,local_70,local_78);
          }
        }
        goto LAB_1800a7cc9;
      }
    }
    if ((*(char *)(param_1 + 0xb0) != '\0') || (cVar11 = FUN_180068b20(lVar22), cVar11 != '\0')) {
      local_58 = *(longlong **)(param_1 + 600);
      if ((char)*local_58 != '\0') {
        plVar19 = local_58 + 1;
        if (*(ulonglong *)(param_1 + 0x1a0) < 0x8000000000000002) {
          local_49 = 0;
          FUN_18003ea80(&local_1d8,plVar19,param_2);
          plVar9 = plStack_1c0;
          if (local_1d8 == (longlong *)&DAT_00000006) {
            return 1;
          }
          local_358 = (longlong *)CONCAT44(uStack_1ac,uStack_1b0);
          uStack_350 = (longlong *)CONCAT44(uStack_1a4,local_1a8);
          local_348 = uStack_1a0;
          uStack_344 = uStack_19c;
          uStack_340 = local_198;
          uStack_33c = uStack_194;
          local_338 = uStack_190;
          uStack_334 = uStack_18c;
          uStack_330 = local_188;
          uStack_32c = uStack_184;
          local_328 = uStack_180;
          iVar13 = (int)local_1d8;
          if (iVar13 == 3) {
            local_68 = local_1c8;
            local_70 = local_1b8;
            local_78 = plStack_1d0;
            if (*plVar19 == 0) {
              local_98 = plStack_1c0;
              local_4c = 0;
              local_4d = 1;
              cVar11 = (**(code **)(local_58[3] + 0x20))(local_58[2]);
              if (cVar11 != '\0') goto LAB_1800a83c3;
            }
            else if (local_58[3] == 0) {
LAB_1800a83c3:
              if (plVar9 == (longlong *)0x0) {
                local_98 = (longlong *)0x0;
                local_4c = 1;
                local_4d = 1;
                lVar14 = FUN_180059b70(param_1);
                if (lVar14 != 0) {
                  local_49 = 1;
                  (*(code *)local_78[4])(local_70,local_68,0);
LAB_1800a87b0:
                  if (*local_58 != 0) {
                    if (*plVar19 == 0) {
                      local_80 = (int *)local_58[2];
                      local_68 = (longlong *)local_58[3];
                      if ((code *)*local_68 != (code *)0x0) {
                        (*(code *)*local_68)(local_80);
                      }
                      if (local_68[1] != 0) {
                        thunk_FUN_1801d3330(local_80,local_68[1],local_68[2]);
                      }
                    }
                    else {
                      (**(code **)(*plVar19 + 0x20))(local_58[4],local_58[2],local_58[3]);
                    }
                  }
                  *local_58 = 0;
                  return 0;
                }
                local_49 = 1;
                (*(code *)local_78[4])(local_70,local_68,0);
              }
              else {
                local_1c8 = plVar9;
                local_98 = plVar9;
                local_4c = 1;
                local_4d = 0;
                local_1d8 = local_78;
                plStack_1d0 = local_68;
                plStack_1c0 = local_70;
                FUN_180059430();
              }
              goto LAB_1800a828f;
            }
            if (plVar9 == (longlong *)0x0) {
              local_49 = 0;
              (*(code *)local_78[4])(local_70,local_68,0);
            }
            else {
              local_1c8 = plVar9;
              local_98 = plVar9;
              local_4c = 0;
              local_4d = 0;
              local_1d8 = local_78;
              plStack_1d0 = local_68;
              plStack_1c0 = local_70;
              FUN_1800555b0();
            }
            goto LAB_1800a7cc9;
          }
          if (iVar13 == 5) {
            local_49 = 1;
            lVar14 = FUN_180059b70();
            if (lVar14 != 0) goto LAB_1800a87b0;
          }
          else {
            if (iVar13 == 4) {
              local_49 = 1;
              FUN_1800681a0(plStack_1d0);
              goto LAB_1800a87b0;
            }
            local_49 = 1;
            FUN_180059120();
          }
LAB_1800a828f:
          if (*local_58 != 0) {
            if (*plVar19 == 0) {
              local_68 = (longlong *)local_58[2];
              local_70 = (longlong *)local_58[3];
              if ((code *)*local_70 != (code *)0x0) {
                (*(code *)*local_70)(local_68);
              }
              goto LAB_1800a834d;
            }
            (**(code **)(*plVar19 + 0x20))(local_58[4],local_58[2],local_58[3]);
          }
        }
        else if (*plVar19 == 0) {
          local_68 = (longlong *)local_58[2];
          local_70 = (longlong *)local_58[3];
          if ((code *)*local_70 != (code *)0x0) {
            (*(code *)*local_70)(local_68);
          }
LAB_1800a834d:
          if (local_70[1] != 0) {
            thunk_FUN_1801d3330(local_68,local_70[1],local_70[2]);
          }
        }
        else {
          (**(code **)(*plVar19 + 0x20))(local_58[4],local_58[2],local_58[3]);
        }
        *local_58 = 0;
        goto LAB_1800a7cc9;
      }
      if (0x8000000000000001 < *(ulonglong *)(param_1 + 0x1a0)) {
        return 1;
      }
      local_49 = 0;
      lVar14 = FUN_180059b70();
      if (lVar14 != 0) {
        return 0;
      }
      goto LAB_1800a7cc9;
    }
    plVar19 = param_2;
    uVar15 = FUN_1800699b0(param_1);
    if ((uVar15 & 1) != 0) {
      return 1;
    }
    if (plVar19 != (longlong *)0x0) {
      local_5a = 1;
      local_1d8 = plVar19;
      uVar16 = FUN_1801158a0(8);
      local_5a = 0;
      FUN_1800689b0(uVar16,plVar19);
      return 0;
    }
    FUN_180059dc0(plVar21);
    FUN_1800564c0();
  } while( true );
}


