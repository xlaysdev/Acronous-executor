/* FUN_18004f9e0 @ 18004f9e0 */

void FUN_18004f9e0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  char cVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  longlong lVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong *plVar26;
  bool bVar27;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined2 uStack_1b0;
  undefined2 local_1ae;
  undefined4 uStack_1ac;
  undefined6 uStack_1a6;
  undefined2 uStack_1a0;
  char local_19e;
  undefined4 local_19d;
  undefined1 local_199;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined2 uStack_190;
  undefined2 uStack_18e;
  undefined2 uStack_18c;
  undefined2 uStack_18a;
  undefined4 uStack_186;
  undefined4 uStack_182;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong local_168;
  longlong lStack_160;
  longlong local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined2 uStack_138;
  undefined2 uStack_136;
  undefined2 uStack_134;
  undefined2 uStack_132;
  undefined2 uStack_130;
  undefined4 uStack_12e;
  undefined4 uStack_12a;
  char local_126;
  undefined4 local_125;
  undefined1 local_121;
  undefined4 *local_120;
  longlong *local_118;
  ulonglong local_110;
  longlong *local_108;
  ulonglong local_100;
  ulonglong local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  ulonglong local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  ulonglong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined4 *local_a0;
  longlong local_98;
  longlong local_90;
  undefined4 local_88;
  undefined1 local_84;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_70;
  undefined4 *local_68;
  ulonglong local_60;
  longlong local_58;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_c8 = *(undefined8 *)(param_2 + 0x18);
  local_d8 = *(longlong **)(param_2 + 0x20);
  uVar18 = *(ulonglong *)(param_2 + 0x28);
  local_c0 = local_d8 + uVar18 * 0xd;
  local_e0 = *(ulonglong *)(param_2 + 0x40);
  local_f0 = *(undefined4 *)(param_2 + 0x30);
  uStack_ec = *(undefined4 *)(param_2 + 0x34);
  uStack_e8 = *(undefined4 *)(param_2 + 0x38);
  uStack_e4 = *(undefined4 *)(param_2 + 0x3c);
  local_100 = 0;
  local_d0 = local_d8;
  if (*(longlong *)(param_2 + 0x50) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x48),*(longlong *)(param_2 + 0x50) << 2,2);
  }
  uVar23 = *(ulonglong *)(param_1 + 0x28);
  uVar16 = uVar18 + 1 >> 1;
  if (uVar23 == 0) {
    uVar16 = uVar18;
  }
  uVar18 = 0;
  if (uVar23 < 0x6001) {
    uVar18 = 0x6000 - uVar23;
  }
  if (uVar16 <= uVar18) {
    uVar18 = uVar16;
  }
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar18 + uVar23;
  auVar9._8_8_ = 2;
  auVar9._0_8_ = 0xaaaaaaaaaaaaaaab;
  uVar18 = SUB168(auVar8 * auVar9,8) >> 1;
  local_90 = param_1;
  if (*(ulonglong *)(param_1 + 0x50) < uVar18) {
    lVar17 = 0x3f;
    if (uVar18 - 1 != 0) {
      for (; uVar18 - 1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar19 = 0xffffffffffffffff >> (~(byte)lVar17 & 0x3f);
    uVar16 = 0;
    if (1 < uVar18) {
      uVar16 = uVar19;
    }
    if (uVar16 < 0x8000) {
      uVar25 = uVar16 + 1;
      if (uVar23 == 0) {
        *(short *)(param_1 + 0x58) = (short)uVar16;
        FUN_180027490();
        puVar14 = (undefined4 *)thunk_FUN_1801d32d0(uVar25 * 4,2);
        if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_18020171e(2,uVar25 * 4);
        }
        puVar15 = puVar14;
        uVar23 = 1;
        if (1 < uVar18) {
          lVar17 = 1;
          if (7 < uVar19) {
            uVar18 = uVar19 & 0xfffffffffffffff8;
            puVar15 = puVar14 + uVar18;
            lVar17 = uVar18 + 1;
            uVar23 = 0;
            do {
              puVar3 = puVar14 + uVar23;
              *puVar3 = 0xffff;
              puVar3[1] = 0xffff;
              puVar3[2] = 0xffff;
              puVar3[3] = 0xffff;
              puVar3 = puVar14 + uVar23 + 4;
              *puVar3 = 0xffff;
              puVar3[1] = 0xffff;
              puVar3[2] = 0xffff;
              puVar3[3] = 0xffff;
              uVar23 = uVar23 + 8;
            } while (uVar18 != uVar23);
          }
          lVar17 = (uVar19 - lVar17) + 1;
          do {
            *puVar15 = 0xffff;
            puVar15 = puVar15 + 1;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          uVar23 = uVar25;
        }
        *puVar15 = 0xffff;
        if (*(longlong *)(param_1 + 0x50) != 0) {
          thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x48),*(longlong *)(param_1 + 0x50) << 2);
        }
        *(undefined4 **)(param_1 + 0x48) = puVar14;
        *(ulonglong *)(param_1 + 0x50) = uVar23;
        uVar25 = uVar25 - (uVar25 >> 2);
        if (uVar25 < 0x13b13b13b13b13c) {
          puVar14 = (undefined4 *)(uVar25 * 0x68);
          local_80 = uVar25;
          FUN_180027490();
          uVar22 = 8;
          local_78 = thunk_FUN_1801d32d0(puVar14,8);
          if (local_78 != 0) {
            local_70 = *(longlong *)(param_1 + 0x20);
            local_58 = *(longlong *)(param_1 + 0x28);
            local_60 = 0;
            while (param_1 = local_90, local_60 != local_58) {
              lVar17 = local_60 * 0x68;
              local_68 = (undefined4 *)(local_70 + lVar17);
              local_60 = local_60 + 1;
              lVar17 = *(longlong *)(local_70 + 0x40 + lVar17);
              if (lVar17 != 0) {
                (**(code **)(lVar17 + 0x20))
                          (*(undefined8 *)(local_68 + 0x16),*(undefined8 *)(local_68 + 0x12),
                           *(undefined8 *)(local_68 + 0x14));
              }
              (**(code **)(*(longlong *)(local_68 + 6) + 0x20))
                        (*(undefined8 *)(local_68 + 0xc),*(undefined8 *)(local_68 + 8));
            }
            if (*(longlong *)(local_90 + 0x18) != 0) {
              thunk_FUN_1801d3330(*(undefined8 *)(local_90 + 0x20),
                                  *(longlong *)(local_90 + 0x18) * 0x68);
            }
            *(ulonglong *)(param_1 + 0x18) = local_80;
            *(ulonglong *)(param_1 + 0x20) = local_78;
            *(undefined8 *)(param_1 + 0x28) = 0;
            if ((int)local_100 == 1) {
              if (local_e0 <= local_f8) {
                    /* WARNING: Subroutine does not return */
                FUN_180201d02(local_f8,local_e0,&PTR_s_C__Users_burne__cargo_registry_s_180209a48);
              }
              lVar17 = CONCAT44(uStack_e4,uStack_e8);
              bVar27 = *(char *)(lVar17 + 0x10 + local_f8 * 0x48) == '\0';
              if (bVar27) {
                uVar18 = local_e0;
              }
              else {
                uVar18 = *(ulonglong *)(lVar17 + local_f8 * 0x48 + 0x18);
              }
              local_100 = (ulonglong)!bVar27;
              local_68 = *(undefined4 **)(lVar17 + 0x20 + local_f8 * 0x48);
              local_60 = *(undefined8 *)(lVar17 + 0x28 + local_f8 * 0x48);
              local_58 = *(undefined8 *)(lVar17 + 0x30 + local_f8 * 0x48);
              local_70 = *(undefined8 *)(lVar17 + 0x38 + local_f8 * 0x48);
              local_f8 = uVar18;
                    /* WARNING: Subroutine does not return */
              FUN_180201ee0("expected a header name, but got None",0x49,
                            &PTR_s_C__Users_burne__cargo_registry_s_180208d08);
            }
            goto LAB_18004fd4a;
          }
        }
        else {
          uVar22 = 0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(uVar22,puVar14);
      }
      cVar13 = FUN_1800551e0(param_1,uVar25);
      if (cVar13 == '\0') goto LAB_18004fd4a;
    }
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("size overflows MAX_SIZE",0x17,&local_4a,&DAT_180208de8,
                  &PTR_s_C__Users_burne__cargo_registry_s_180208cc8);
  }
LAB_18004fd4a:
  local_118 = local_c0;
  plVar12 = local_d0;
  if (local_d0 != local_c0) {
    plVar12 = local_d0 + 0xd;
    if (*local_d0 != 2) {
      local_f8 = local_d0[1];
      local_168 = local_d0[10];
      lStack_160 = local_d0[0xb];
      local_178 = (undefined4)local_d0[8];
      uStack_174 = *(undefined4 *)((longlong)local_d0 + 0x44);
      uStack_170 = (undefined4)local_d0[9];
      uStack_16c = *(undefined4 *)((longlong)local_d0 + 0x4c);
      local_b0 = local_d0[3];
      local_a8 = local_d0[4];
      local_a0 = (undefined4 *)local_d0[5];
      local_98 = local_d0[6];
      lVar17 = local_d0[7];
      uVar24 = (uint)*local_d0;
      lVar10 = CONCAT44(uStack_e4,uStack_e8);
      local_110 = local_e0;
      local_d0 = local_d0 + 0xd;
      do {
        uVar23 = local_f8;
        local_100 = (ulonglong)(uVar24 & 1);
        uVar18 = local_100;
        local_49 = 1;
        local_108 = local_d0;
        FUN_1800528f0(&local_158,param_1,&local_178);
        puVar14 = uStack_148;
        lVar11 = local_158;
        if (local_126 == '\x03') {
          local_49 = 1;
                    /* WARNING: Subroutine does not return */
          FUN_180201bc0("size overflows MAX_SIZE",0x17,&local_4a,&DAT_180208de8,
                        &PTR_s_C__Users_burne__cargo_registry_s_180208d20);
        }
        local_198 = (undefined4)local_140;
        uStack_194 = local_140._4_4_;
        uStack_190 = uStack_138;
        uStack_18e = uStack_136;
        uStack_18c = uStack_134;
        uStack_18a = uStack_132;
        uStack_186 = uStack_12e;
        uStack_182 = uStack_12a;
        local_88 = local_125;
        local_84 = local_121;
        if (local_126 == '\x02') {
          puVar15 = *(undefined4 **)(local_158 + 0x28);
          if (puVar15 <= uStack_148) {
                    /* WARNING: Subroutine does not return */
            FUN_180201d02(uStack_148,puVar15,&PTR_s_C__Users_burne__cargo_registry_s_180208f68);
          }
          lVar21 = (longlong)uStack_148 * 0x68;
          if (*(char *)(*(longlong *)(local_158 + 0x20) + lVar21) != '\0') {
            FUN_180054460(local_158,*(undefined8 *)(*(longlong *)(local_158 + 0x20) + lVar21 + 8));
            puVar15 = *(undefined4 **)(lVar11 + 0x28);
          }
          if (puVar15 <= puVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_180201d02(puVar14,puVar15,&PTR_s_C__Users_burne__cargo_registry_s_180208f80);
          }
          lVar4 = *(longlong *)(lVar11 + 0x20);
          lVar5 = *(longlong *)(lVar4 + 0x18 + lVar21);
          uVar22 = *(undefined8 *)(lVar4 + 0x20 + lVar21);
          uVar6 = *(undefined8 *)(lVar4 + 0x28 + lVar21);
          uVar7 = *(undefined8 *)(lVar4 + 0x30 + lVar21);
          *(longlong *)(lVar4 + 0x18 + lVar21) = local_b0;
          *(longlong *)(lVar4 + 0x20 + lVar21) = local_a8;
          *(undefined4 **)(lVar4 + 0x28 + lVar21) = local_a0;
          *(longlong *)(lVar4 + 0x30 + lVar21) = local_98;
          *(longlong *)(lVar4 + 0x38 + lVar21) = lVar17;
          local_49 = 0;
          (**(code **)(lVar5 + 0x20))(uVar7,uVar22,uVar6);
          if ((char)(uVar24 & 1) != '\0') goto LAB_18004ffb8;
LAB_18005028c:
          plVar26 = local_108;
        }
        else {
          local_1c8 = (undefined4)local_150;
          uStack_1c4 = local_150._4_4_;
          uStack_1c0 = (undefined4)uStack_148;
          uStack_1bc = uStack_148._4_4_;
          puVar14 = &local_1c8;
          uStack_1a6 = (undefined6)CONCAT44(uStack_12a,uStack_12e);
          uStack_1a0 = (undefined2)((uint)uStack_12a >> 0x10);
          uStack_1ac = CONCAT22(uStack_132,uStack_134);
          uStack_1b8 = (undefined4)local_140;
          uStack_1b4 = local_140._4_4_;
          uStack_1b0 = uStack_138;
          local_1ae = uStack_136;
          local_19e = local_126;
          local_199 = local_121;
          local_19d = local_125;
          local_158 = local_b0;
          local_150 = local_a8;
          uStack_148 = local_a0;
          local_140 = local_98;
          uStack_138 = (undefined2)lVar17;
          uStack_136 = (undefined2)((ulonglong)lVar17 >> 0x10);
          uStack_134 = (undefined2)((ulonglong)lVar17 >> 0x20);
          uStack_132 = (undefined2)((ulonglong)lVar17 >> 0x30);
          local_49 = 0;
          uVar16 = FUN_180054210(lVar11,puVar14,&local_158,uStack_1a0,
                                 CONCAT62(uStack_1a6,uStack_130),local_126);
          if ((uVar16 & 1) != 0) {
            local_49 = 0;
                    /* WARNING: Subroutine does not return */
            FUN_180201bc0("size overflows MAX_SIZE",0x17,&local_4a,&DAT_180208de8,
                          &PTR_s_C__Users_burne__cargo_registry_s_180208d38);
          }
          if (uVar18 == 0) goto LAB_18005028c;
LAB_18004ffb8:
          plVar26 = local_108;
          local_68 = puVar14;
          do {
            if (local_110 <= uVar23) {
              local_100 = 1;
              local_49 = 0;
              local_f8 = uVar23;
                    /* WARNING: Subroutine does not return */
              FUN_180201d02(uVar23,local_110,&PTR_s_C__Users_burne__cargo_registry_s_180209a48);
            }
            bVar27 = *(char *)(lVar10 + 0x10 + uVar23 * 0x48) == '\0';
            if (!bVar27) {
              local_b8 = *(ulonglong *)(lVar10 + uVar23 * 0x48 + 0x18);
            }
            uVar18 = (ulonglong)!bVar27;
            local_80 = *(ulonglong *)(lVar10 + 0x20 + uVar23 * 0x48);
            local_58 = *(longlong *)(lVar10 + 0x28 + uVar23 * 0x48);
            local_60 = *(longlong *)(lVar10 + 0x30 + uVar23 * 0x48);
            local_70 = *(longlong *)(lVar10 + 0x38 + uVar23 * 0x48);
            local_120 = *(undefined4 **)(lVar11 + 0x28);
            if (local_120 <= local_68) {
              local_f8 = local_b8;
              local_100 = uVar18;
                    /* WARNING: Subroutine does not return */
              FUN_180201d02(local_68,local_120,&PTR_s_C__Users_burne__cargo_registry_s_1802091c0);
            }
            uVar22 = *(undefined8 *)(lVar10 + 0x40 + uVar23 * 0x48);
            puVar20 = (undefined8 *)(*(longlong *)(lVar11 + 0x20) + (longlong)local_68 * 0x68);
            local_78 = uVar18;
            if (*(int *)(*(longlong *)(lVar11 + 0x20) + (longlong)local_68 * 0x68) == 1) {
              uVar18 = puVar20[2];
              uVar23 = *(ulonglong *)(lVar11 + 0x40);
              if (uVar23 == *(ulonglong *)(lVar11 + 0x30)) {
                FUN_1801f8b00(lVar11 + 0x30);
              }
              lVar17 = *(longlong *)(lVar11 + 0x38);
              *(undefined8 *)(lVar17 + uVar23 * 0x48) = 1;
              *(ulonglong *)(lVar17 + 8 + uVar23 * 0x48) = uVar18;
              *(undefined8 *)(lVar17 + 0x10 + uVar23 * 0x48) = 0;
              *(undefined4 **)(lVar17 + 0x18 + uVar23 * 0x48) = local_68;
              *(ulonglong *)(lVar17 + 0x20 + uVar23 * 0x48) = local_80;
              *(longlong *)(lVar17 + 0x28 + uVar23 * 0x48) = local_58;
              *(ulonglong *)(lVar17 + 0x30 + uVar23 * 0x48) = local_60;
              *(longlong *)(lVar17 + 0x38 + uVar23 * 0x48) = local_70;
              *(undefined8 *)(lVar17 + 0x40 + uVar23 * 0x48) = uVar22;
              *(ulonglong *)(lVar11 + 0x40) = uVar23 + 1;
              if (uVar23 < uVar18) {
                local_100 = local_78;
                local_f8 = local_b8;
                    /* WARNING: Subroutine does not return */
                FUN_180201d02(uVar18,uVar23 + 1,&PTR_s_C__Users_burne__cargo_registry_s_180208e48);
              }
              lVar17 = *(longlong *)(lVar11 + 0x38);
              *(undefined8 *)(lVar17 + 0x10 + uVar18 * 0x48) = 1;
              *(ulonglong *)(lVar17 + 0x18 + uVar18 * 0x48) = uVar23;
              *puVar20 = 1;
              puVar20[2] = uVar23;
              plVar26 = local_108;
            }
            else {
              lVar17 = *(longlong *)(lVar11 + 0x40);
              if (lVar17 == *(longlong *)(lVar11 + 0x30)) {
                FUN_1801f8b00(lVar11 + 0x30);
              }
              lVar21 = *(longlong *)(lVar11 + 0x38);
              *(undefined8 *)(lVar21 + lVar17 * 0x48) = 0;
              *(undefined4 **)(lVar21 + 8 + lVar17 * 0x48) = local_68;
              *(undefined8 *)(lVar21 + 0x10 + lVar17 * 0x48) = 0;
              *(undefined4 **)(lVar21 + 0x18 + lVar17 * 0x48) = local_68;
              *(ulonglong *)(lVar21 + 0x20 + lVar17 * 0x48) = local_80;
              *(longlong *)(lVar21 + 0x28 + lVar17 * 0x48) = local_58;
              *(ulonglong *)(lVar21 + 0x30 + lVar17 * 0x48) = local_60;
              *(longlong *)(lVar21 + 0x38 + lVar17 * 0x48) = local_70;
              *(undefined8 *)(lVar21 + 0x40 + lVar17 * 0x48) = uVar22;
              *(longlong *)(lVar11 + 0x40) = lVar17 + 1;
              *puVar20 = 1;
              puVar20[1] = lVar17;
              puVar20[2] = lVar17;
            }
            uVar23 = local_b8;
          } while (local_78 != 0);
        }
        local_100 = 0;
        local_f8 = uVar23;
        plVar12 = local_d0;
        if (plVar26 == local_118) break;
        local_d0 = plVar26 + 0xd;
        plVar12 = local_d0;
        if (*plVar26 == 2) break;
        local_f8 = plVar26[1];
        local_168 = plVar26[10];
        lStack_160 = plVar26[0xb];
        local_178 = (undefined4)plVar26[8];
        uStack_174 = *(undefined4 *)((longlong)plVar26 + 0x44);
        uStack_170 = (undefined4)plVar26[9];
        uStack_16c = *(undefined4 *)((longlong)plVar26 + 0x4c);
        local_b0 = plVar26[3];
        local_a8 = plVar26[4];
        local_a0 = (undefined4 *)plVar26[5];
        local_98 = plVar26[6];
        lVar17 = plVar26[7];
        uVar24 = (uint)*plVar26;
        param_1 = local_90;
      } while( true );
    }
  }
  local_d0 = plVar12;
  FUN_18005a290(&local_100);
  FUN_180032b40(&local_d8);
  local_58 = CONCAT44(uStack_e4,uStack_e8);
  local_60 = local_e0;
  puVar20 = (undefined8 *)(local_58 + 0x38);
  local_68 = (undefined4 *)0x0;
  while ((undefined4 *)local_60 != local_68) {
    local_68 = (undefined4 *)((longlong)local_68 + 1);
    uVar22 = *puVar20;
    plVar12 = puVar20 + -3;
    puVar1 = puVar20 + -2;
    puVar2 = puVar20 + -1;
    puVar20 = puVar20 + 9;
    (**(code **)(*plVar12 + 0x20))(uVar22,*puVar1,*puVar2);
  }
  if (CONCAT44(uStack_ec,local_f0) == 0) {
    return;
  }
  thunk_FUN_1801d3330(local_58,CONCAT44(uStack_ec,local_f0) * 0x48,8);
  return;
}


