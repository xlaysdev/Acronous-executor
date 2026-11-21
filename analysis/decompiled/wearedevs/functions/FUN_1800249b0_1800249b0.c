/* FUN_1800249b0 @ 1800249b0 */

void FUN_1800249b0(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  size_t *psVar3;
  longlong *plVar4;
  ushort uVar5;
  short sVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  char cVar28;
  ushort uVar29;
  uint uVar30;
  int iVar31;
  undefined4 *puVar32;
  undefined4 *puVar33;
  longlong lVar34;
  longlong lVar35;
  undefined8 *puVar36;
  longlong lVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  short sVar40;
  undefined8 uVar41;
  longlong *plVar42;
  longlong lVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  void *pvVar46;
  short sVar47;
  ulonglong uVar48;
  bool bVar49;
  undefined8 local_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  longlong lStack_1c8;
  longlong local_1c0;
  longlong lStack_1b8;
  longlong local_1b0;
  ulonglong uStack_1a8;
  longlong local_1a0;
  void *pvStack_198;
  size_t local_190;
  size_t sStack_188;
  ushort local_180;
  undefined6 uStack_17e;
  longlong *local_178;
  longlong *local_170;
  void *local_168;
  void *local_160;
  ulonglong local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  ulonglong local_140;
  longlong *local_138;
  longlong *local_130;
  undefined8 local_128;
  longlong *local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  size_t local_108;
  size_t sStack_100;
  longlong *local_f8;
  longlong local_f0;
  ulonglong local_e8;
  ulonglong *local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  char local_aa;
  undefined1 local_a9;
  longlong *local_a8;
  ulonglong local_a0;
  void *local_98;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  undefined1 local_71;
  ulonglong local_70;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_128 = *(undefined8 *)(param_2 + 0x18);
  local_138 = *(longlong **)(param_2 + 0x20);
  uVar38 = *(ulonglong *)(param_2 + 0x28);
  local_120 = local_138 + uVar38 * 0xd;
  local_140 = *(ulonglong *)(param_2 + 0x40);
  local_150 = *(undefined4 *)(param_2 + 0x30);
  uStack_14c = *(undefined4 *)(param_2 + 0x34);
  uStack_148 = *(undefined4 *)(param_2 + 0x38);
  uStack_144 = *(undefined4 *)(param_2 + 0x3c);
  local_160 = (void *)0x0;
  local_130 = local_138;
  if (*(longlong *)(param_2 + 0x50) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x48),*(longlong *)(param_2 + 0x50) << 2,2);
  }
  uVar44 = param_1[5];
  uVar45 = uVar38 + 1 >> 1;
  if (uVar44 == 0) {
    uVar45 = uVar38;
  }
  local_e0 = (ulonglong *)(param_1 + 3);
  uVar38 = 0;
  if (uVar44 < 0x6001) {
    uVar38 = 0x6000 - uVar44;
  }
  if (uVar45 <= uVar38) {
    uVar38 = uVar45;
  }
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar38 + uVar44;
  auVar12._8_8_ = 2;
  auVar12._0_8_ = 0xaaaaaaaaaaaaaaab;
  uVar38 = SUB168(auVar11 * auVar12,8) >> 1;
  local_a8 = param_1;
  if ((ulonglong)param_1[10] < uVar38) {
    lVar37 = 0x3f;
    if (uVar38 - 1 != 0) {
      for (; uVar38 - 1 >> lVar37 == 0; lVar37 = lVar37 + -1) {
      }
    }
    uVar39 = 0xffffffffffffffff >> (~(byte)lVar37 & 0x3f);
    uVar45 = 0;
    if (1 < uVar38) {
      uVar45 = uVar39;
    }
    if (uVar45 < 0x8000) {
      uVar48 = uVar45 + 1;
      if (uVar44 == 0) {
        *(short *)(param_1 + 0xb) = (short)uVar45;
        FUN_180027490();
        puVar32 = (undefined4 *)thunk_FUN_1801d32d0(uVar48 * 4,2);
        if (puVar32 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_18020171e(2,uVar48 * 4);
        }
        puVar33 = puVar32;
        uVar44 = 1;
        if (1 < uVar38) {
          lVar37 = 1;
          if (7 < uVar39) {
            uVar38 = uVar39 & 0xfffffffffffffff8;
            puVar33 = puVar32 + uVar38;
            lVar37 = uVar38 + 1;
            uVar44 = 0;
            do {
              puVar1 = puVar32 + uVar44;
              *puVar1 = 0xffff;
              puVar1[1] = 0xffff;
              puVar1[2] = 0xffff;
              puVar1[3] = 0xffff;
              puVar1 = puVar32 + uVar44 + 4;
              *puVar1 = 0xffff;
              puVar1[1] = 0xffff;
              puVar1[2] = 0xffff;
              puVar1[3] = 0xffff;
              uVar44 = uVar44 + 8;
            } while (uVar38 != uVar44);
          }
          lVar37 = (uVar39 - lVar37) + 1;
          do {
            *puVar33 = 0xffff;
            puVar33 = puVar33 + 1;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          uVar44 = uVar48;
        }
        *puVar33 = 0xffff;
        if (param_1[10] != 0) {
          thunk_FUN_1801d3330(param_1[9],param_1[10] << 2);
        }
        param_1[9] = (longlong)puVar32;
        param_1[10] = uVar44;
        uVar48 = uVar48 - (uVar48 >> 2);
        if (uVar48 < 0x13b13b13b13b13c) {
          puVar32 = (undefined4 *)(uVar48 * 0x68);
          local_90 = uVar48;
          FUN_180027490();
          uVar41 = 8;
          local_98 = (void *)thunk_FUN_1801d32d0(puVar32,8);
          if (local_98 != (void *)0x0) {
            local_88 = param_1[4];
            local_a0 = param_1[5];
            local_70 = 0;
            while (param_1 = local_a8, local_70 != local_a0) {
              lVar37 = local_70 * 0x68;
              local_80 = local_88 + lVar37;
              local_70 = local_70 + 1;
              lVar37 = *(longlong *)(local_88 + 0x40 + lVar37);
              if (lVar37 != 0) {
                (**(code **)(lVar37 + 0x20))
                          (*(undefined8 *)(local_80 + 0x58),*(undefined8 *)(local_80 + 0x48),
                           *(undefined8 *)(local_80 + 0x50));
              }
              (**(code **)(*(longlong *)(local_80 + 0x18) + 0x20))
                        (*(undefined8 *)(local_80 + 0x30),*(undefined8 *)(local_80 + 0x20));
            }
            if (*local_e0 != 0) {
              thunk_FUN_1801d3330(local_a8[4],*local_e0 * 0x68);
            }
            param_1[3] = local_90;
            param_1[4] = (longlong)local_98;
            param_1[5] = 0;
            if ((int)local_160 == 1) {
              if (local_140 <= local_158) {
                    /* WARNING: Subroutine does not return */
                FUN_180201d02(local_158,local_140,&PTR_s_C__Users_burne__cargo_registry_s_180204ed8)
                ;
              }
              lVar37 = CONCAT44(uStack_144,uStack_148);
              bVar49 = *(char *)(lVar37 + 0x10 + local_158 * 0x48) == '\0';
              if (bVar49) {
                uVar38 = local_140;
              }
              else {
                uVar38 = *(ulonglong *)(lVar37 + local_158 * 0x48 + 0x18);
              }
              local_160 = (void *)(ulonglong)!bVar49;
              local_80 = *(undefined8 *)(lVar37 + 0x20 + local_158 * 0x48);
              local_70 = *(undefined8 *)(lVar37 + 0x28 + local_158 * 0x48);
              local_a0 = *(undefined8 *)(lVar37 + 0x30 + local_158 * 0x48);
              local_88 = *(undefined8 *)(lVar37 + 0x38 + local_158 * 0x48);
              local_158 = uVar38;
                    /* WARNING: Subroutine does not return */
              FUN_180201ee0("expected a header name, but got None",0x49,
                            &PTR_s_C__Users_burne__cargo_registry_s_180204c48);
            }
            goto LAB_180024d11;
          }
        }
        else {
          uVar41 = 0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(uVar41,puVar32);
      }
      cVar28 = FUN_180026e30(param_1,uVar48);
      if (cVar28 == '\0') goto LAB_180024d11;
    }
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("size overflows MAX_SIZE",0x17,&local_1e0,&DAT_180204c90,
                  &PTR_s_C__Users_burne__cargo_registry_s_180204c08);
  }
LAB_180024d11:
  plVar4 = local_130;
  if (local_130 != local_120) {
    plVar4 = local_130 + 0xd;
    if (*local_130 != 2) {
      local_b8 = local_130[1];
      local_108 = local_130[10];
      sStack_100 = local_130[0xb];
      local_118 = (undefined4)local_130[8];
      uStack_114 = *(undefined4 *)((longlong)local_130 + 0x44);
      uStack_110 = (undefined4)local_130[9];
      uStack_10c = *(undefined4 *)((longlong)local_130 + 0x4c);
      local_d8 = local_130[3];
      local_d0 = local_130[4];
      local_c8 = local_130[5];
      local_c0 = local_130[6];
      local_e8 = local_130[7];
      uVar30 = (uint)*local_130;
      local_170 = param_1 + 6;
      local_f8 = local_120;
      local_130 = local_130 + 0xd;
LAB_180024dca:
      plVar4 = local_a8;
      local_160 = (void *)(ulonglong)(uVar30 & 1);
      lVar37 = param_1[5];
      uVar38 = param_1[10];
      local_178 = local_130;
      local_168 = local_160;
      local_158 = local_b8;
      if ((int)*param_1 == 1) {
        if ((ulonglong)(lVar37 * 5) < uVar38) {
          FUN_1801ab140(param_1);
          lVar37 = param_1[10];
          if (lVar37 != 0) {
            puVar33 = (undefined4 *)param_1[9];
            uVar38 = lVar37 * 4 - 4;
            puVar32 = puVar33;
            if (0x1b < uVar38) {
              uVar38 = (uVar38 >> 2) + 1;
              uVar44 = uVar38 & 0xfffffffffffffff8;
              puVar32 = puVar33 + uVar44;
              uVar45 = 0;
              do {
                *(undefined8 *)(puVar33 + uVar45) = 0xffff0000ffff;
                *(undefined8 *)((longlong)(puVar33 + uVar45) + 8) = 0xffff0000ffff;
                *(undefined8 *)(puVar33 + uVar45 + 4) = 0xffff0000ffff;
                *(undefined8 *)((longlong)(puVar33 + uVar45 + 4) + 8) = 0xffff0000ffff;
                uVar45 = uVar45 + 8;
              } while (uVar44 != uVar45);
              if (uVar38 == uVar44) goto LAB_180024e6f;
            }
            do {
              *puVar32 = 0xffff;
              puVar32 = puVar32 + 1;
            } while (puVar32 != puVar33 + lVar37);
          }
LAB_180024e6f:
          if (param_1[5] != 0) {
            local_80 = param_1[5] * 0x68 + local_a8[4];
            uVar5 = *(ushort *)(local_a8 + 0xb);
            lVar37 = local_a8[9];
            uVar38 = local_a8[10];
            uVar44 = local_a8[4];
            sVar40 = 0;
            do {
              uVar39 = uVar44 + 0x68;
              sVar47 = sVar40 + 1;
              uVar30 = FUN_180026950(local_a8);
              uVar45 = (ulonglong)(uVar30 & uVar5);
              *(short *)(uVar44 + 0x60) = (short)uVar30;
              uVar44 = 0;
              if (uVar38 <= uVar45) {
                uVar45 = 0;
              }
              while( true ) {
                if (uVar38 == 0) {
                  do {
                    /* WARNING: Do nothing block with infinite loop */
                  } while( true );
                }
                if (*(short *)(lVar37 + uVar45 * 4) == -1) goto LAB_180024f64;
                if (((uint)uVar5 &
                    (int)uVar45 - (uint)(*(ushort *)(lVar37 + 2 + uVar45 * 4) & uVar5)) < uVar44)
                break;
                uVar44 = uVar44 + 1;
                uVar45 = uVar45 + 1;
                if (uVar38 <= uVar45) {
                  uVar45 = 0;
                }
              }
              while( true ) {
                if (uVar38 <= uVar45) {
                  uVar45 = 0;
                }
                if (uVar38 == 0) {
                  do {
                    /* WARNING: Do nothing block with infinite loop */
                  } while( true );
                }
                sVar6 = *(short *)(lVar37 + uVar45 * 4);
                if (sVar6 == -1) break;
                uVar29 = *(ushort *)(lVar37 + 2 + uVar45 * 4);
                *(short *)(lVar37 + uVar45 * 4) = sVar40;
                *(short *)(lVar37 + 2 + uVar45 * 4) = (short)uVar30;
                uVar45 = uVar45 + 1;
                sVar40 = sVar6;
                uVar30 = (uint)uVar29;
              }
LAB_180024f64:
              *(short *)(lVar37 + uVar45 * 4) = sVar40;
              *(short *)(lVar37 + 2 + uVar45 * 4) = (short)uVar30;
              uVar44 = uVar39;
              sVar40 = sVar47;
            } while (uVar39 != local_80);
          }
          goto LAB_180024fc5;
        }
        *param_1 = 0;
        cVar28 = FUN_180026e30(param_1,uVar38 * 2);
      }
      else {
        if (lVar37 != uVar38 - (uVar38 >> 2)) goto LAB_180024fc5;
        if (lVar37 == 0) {
          *(undefined2 *)(local_a8 + 0xb) = 7;
          FUN_180027490();
          puVar36 = (undefined8 *)thunk_FUN_1801d32d0(0x20,2);
          if (puVar36 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_18020171e(2,0x20);
          }
          *puVar36 = 0xffff0000ffff;
          puVar36[1] = 0xffff0000ffff;
          puVar36[2] = 0xffff0000ffff;
          puVar36[3] = 0xffff0000ffff;
          if (plVar4[10] != 0) {
            thunk_FUN_1801d3330(plVar4[9],plVar4[10] << 2,2);
          }
          plVar4[9] = (longlong)puVar36;
          plVar4[10] = 8;
          FUN_180027490();
          local_90 = thunk_FUN_1801d32d0(0x270,8);
          if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_18020171e(8,0x270);
          }
          local_88 = plVar4[4];
          local_a0 = plVar4[5];
          local_70 = 0;
          while (plVar4 = local_a8, local_70 != local_a0) {
            lVar37 = local_70 * 0x68;
            local_80 = local_88 + lVar37;
            local_70 = local_70 + 1;
            lVar37 = *(longlong *)(local_88 + 0x40 + lVar37);
            if (lVar37 != 0) {
              (**(code **)(lVar37 + 0x20))
                        (*(undefined8 *)(local_80 + 0x58),*(undefined8 *)(local_80 + 0x48),
                         *(undefined8 *)(local_80 + 0x50));
            }
            (**(code **)(*(longlong *)(local_80 + 0x18) + 0x20))
                      (*(undefined8 *)(local_80 + 0x30),*(undefined8 *)(local_80 + 0x20),
                       *(undefined8 *)(local_80 + 0x28));
          }
          if (*local_e0 != 0) {
            thunk_FUN_1801d3330(local_a8[4],*local_e0 * 0x68,8);
          }
          plVar4[3] = 6;
          plVar4[4] = local_90;
          plVar4[5] = 0;
          goto LAB_180024fc5;
        }
        cVar28 = FUN_180026e30(local_a8,uVar38 * 2);
      }
      if (cVar28 != '\0') {
        if (CONCAT44(uStack_114,local_118) != 0) {
          local_61 = 1;
          (**(code **)(CONCAT44(uStack_114,local_118) + 0x20))
                    (sStack_100,CONCAT44(uStack_10c,uStack_110),local_108);
        }
        local_61 = 1;
                    /* WARNING: Subroutine does not return */
        FUN_180201bc0("size overflows MAX_SIZE",0x17,&local_1e0,&DAT_180204c90,
                      &PTR_s_C__Users_burne__cargo_registry_s_180204c60);
      }
LAB_180024fc5:
      plVar4 = local_a8;
      uVar29 = FUN_180026950(local_a8);
      uVar5 = *(ushort *)(plVar4 + 0xb);
      uVar44 = (ulonglong)(uVar29 & uVar5);
      uVar38 = plVar4[10];
      lVar37 = plVar4[9];
      lVar43 = plVar4[4];
      local_70 = plVar4[5];
      local_88 = CONCAT44(uStack_114,local_118);
      local_98 = (void *)CONCAT44(uStack_10c,uStack_110);
      local_a9 = local_88 == 0;
      local_90 = local_108;
      uVar45 = 0;
      cVar28 = (char)uStack_110;
      do {
        uVar39 = local_70;
        param_1 = local_a8;
        if (uVar38 <= uVar44) {
          uVar44 = 0;
        }
        if (uVar38 == 0) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        local_80 = (ulonglong)*(ushort *)(lVar37 + uVar44 * 4);
        if ((local_80 == 0xffff) ||
           (uVar7 = *(ushort *)(lVar37 + 2 + uVar44 * 4),
           ((int)uVar44 - (uint)(uVar7 & uVar5) & (uint)uVar5) < uVar45)) {
          lVar37 = *local_a8;
          if (0x7fff < local_70) {
            local_80 = sStack_100;
            local_71 = local_a9;
            (**(code **)(local_d8 + 0x20))(local_c0,local_d0,local_c8);
            if (local_88 != 0) {
              local_61 = 0;
              (**(code **)(local_88 + 0x20))(local_80,local_98,local_90);
            }
            local_61 = 0;
                    /* WARNING: Subroutine does not return */
            FUN_180201bc0("size overflows MAX_SIZE",0x17,&local_1e0,&DAT_180204c90,
                          &PTR_s_C__Users_burne__cargo_registry_s_180204c78);
          }
          local_1a0 = local_88;
          pvStack_198 = local_98;
          local_190 = local_90;
          sStack_188 = sStack_100;
          lStack_1c8 = local_d8;
          local_1c0 = local_d0;
          lStack_1b8 = local_c8;
          local_1b0 = local_c0;
          uStack_1a8 = local_e8;
          local_1e0 = 0;
          local_180 = uVar29;
          if (local_70 == *local_e0) {
            local_80 = sStack_100;
            FUN_1801fa370(local_e0);
            lVar43 = param_1[4];
          }
          lVar35 = uVar39 * 0x68;
          *(ulonglong *)(lVar43 + 0x60 + lVar35) = CONCAT62(uStack_17e,local_180);
          psVar3 = (size_t *)(lVar43 + 0x50 + lVar35);
          *psVar3 = local_190;
          psVar3[1] = sStack_188;
          plVar4 = (longlong *)(lVar43 + 0x40 + lVar35);
          *plVar4 = local_1a0;
          plVar4[1] = (longlong)pvStack_198;
          plVar4 = (longlong *)(lVar43 + 0x30 + lVar35);
          *plVar4 = local_1b0;
          plVar4[1] = uStack_1a8;
          plVar4 = (longlong *)(lVar43 + 0x20 + lVar35);
          *plVar4 = local_1c0;
          plVar4[1] = lStack_1b8;
          puVar36 = (undefined8 *)(lVar43 + 0x10 + lVar35);
          *puVar36 = local_1d0;
          puVar36[1] = lStack_1c8;
          puVar32 = (undefined4 *)(lVar43 + lVar35);
          *puVar32 = (undefined4)local_1e0;
          puVar32[1] = local_1e0._4_4_;
          puVar32[2] = uStack_1d8;
          puVar32[3] = uStack_1d4;
          param_1[5] = uVar39 + 1;
          lVar43 = param_1[9];
          uVar38 = param_1[10];
          uVar48 = 0;
          uVar8 = uVar39 & 0xffffffff;
          if (uVar38 <= uVar44) {
            uVar44 = 0;
          }
          while( true ) {
            if (uVar38 == 0) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            uVar5 = *(ushort *)(lVar43 + uVar44 * 4);
            if (uVar5 == 0xffff) break;
            uVar48 = uVar48 + 1;
            uVar7 = *(ushort *)(lVar43 + 2 + uVar44 * 4);
            *(short *)(lVar43 + uVar44 * 4) = (short)uVar8;
            *(ushort *)(lVar43 + 2 + uVar44 * 4) = uVar29;
            uVar44 = uVar44 + 1;
            uVar8 = (ulonglong)uVar5;
            uVar29 = uVar7;
            if (uVar38 <= uVar44) {
              uVar44 = 0;
            }
          }
          *(short *)(lVar43 + uVar44 * 4) = (short)uVar8;
          *(ushort *)(lVar43 + 2 + uVar44 * 4) = uVar29;
          plVar42 = local_f8;
          if ((uVar45 < 0x200 || lVar37 == 2) && uVar48 < 0x80) {
            local_80 = local_70;
          }
          else {
            if (*param_1 == 0) {
              *param_1 = 1;
            }
            local_80 = local_70;
          }
          goto LAB_180025828;
        }
        if (uVar7 == uVar29) {
          if (local_70 <= local_80) {
                    /* WARNING: Subroutine does not return */
            FUN_180201d02(local_80,local_70,&PTR_s_C__Users_burne__cargo_registry_s_180204cc8);
          }
          local_a0 = local_80 * 0x68;
          lVar35 = *(longlong *)(lVar43 + 0x40 + local_a0);
          if ((local_88 == 0) != (lVar35 != 0)) {
            lVar34 = local_a0 + lVar43;
            if (lVar35 == 0) {
              if (*(char *)(lVar34 + 0x48) == cVar28) {
                plVar42 = local_f8;
                goto LAB_1800254ed;
              }
            }
            else if (*(size_t *)(lVar34 + 0x50) == local_90) {
              local_f0 = lVar43;
              local_aa = cVar28;
              iVar31 = memcmp(*(void **)(lVar34 + 0x48),local_98,local_90);
              param_1 = local_a8;
              plVar42 = local_f8;
              lVar43 = local_f0;
              cVar28 = local_aa;
              if (iVar31 == 0) goto code_r0x000180025144;
            }
          }
        }
        uVar45 = uVar45 + 1;
        uVar44 = uVar44 + 1;
      } while( true );
    }
  }
LAB_180024d2f:
  local_130 = plVar4;
  FUN_180026700(&local_160);
  return;
code_r0x000180025144:
  if (local_88 != 0) {
    local_61 = 1;
    (**(code **)(local_88 + 0x20))(sStack_100,local_98,local_90);
    local_70 = param_1[5];
  }
LAB_1800254ed:
  if (local_70 <= local_80) {
                    /* WARNING: Subroutine does not return */
    FUN_180201d02(local_80,local_70,&PTR_s_C__Users_burne__cargo_registry_s_180204ce0);
  }
  lVar37 = param_1[4];
  if (*(char *)(lVar37 + local_a0) != '\0') {
    uVar38 = *(ulonglong *)(local_a0 + lVar37 + 8);
    uVar44 = param_1[8];
    if (uVar44 <= uVar38) {
LAB_180025c22:
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar38,uVar44,&PTR_s_C__Users_burne__cargo_registry_s_180204d28);
    }
    lVar43 = param_1[7];
    while( true ) {
      uVar45 = *(ulonglong *)(lVar43 + 8 + uVar38 * 0x48);
      cVar28 = *(char *)(lVar43 + 0x10 + uVar38 * 0x48);
      uVar39 = *(ulonglong *)(lVar43 + 0x18 + uVar38 * 0x48);
      if (*(char *)(lVar43 + uVar38 * 0x48) == '\0') {
        if (cVar28 == '\0') {
          if (local_70 <= uVar45) {
                    /* WARNING: Subroutine does not return */
            FUN_180201d02(uVar45,local_70,&PTR_s_C__Users_burne__cargo_registry_s_180204d40);
          }
          *(undefined8 *)(lVar37 + uVar45 * 0x68) = 0;
        }
        else {
          if (local_70 <= uVar45) {
                    /* WARNING: Subroutine does not return */
            FUN_180201d02(uVar45,local_70,&PTR_s_C__Users_burne__cargo_registry_s_180204d58);
          }
          if (*(char *)(lVar37 + uVar45 * 0x68) == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180204d70);
          }
          *(ulonglong *)(uVar45 * 0x68 + lVar37 + 8) = uVar39;
          if (uVar44 <= uVar39) {
                    /* WARNING: Subroutine does not return */
            FUN_180201d02(uVar39,uVar44,&PTR_s_C__Users_burne__cargo_registry_s_180204d88);
          }
          *(undefined8 *)(lVar43 + uVar39 * 0x48) = 0;
          *(ulonglong *)(lVar43 + 8 + uVar39 * 0x48) = uVar45;
        }
      }
      else if (cVar28 == '\0') {
        if (local_70 <= uVar39) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar39,local_70,&PTR_s_C__Users_burne__cargo_registry_s_180204da0);
        }
        if (*(char *)(lVar37 + uVar39 * 0x68) == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180204db8);
        }
        *(ulonglong *)(uVar39 * 0x68 + lVar37 + 0x10) = uVar45;
        if (uVar44 <= uVar45) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar45,uVar44,&PTR_s_C__Users_burne__cargo_registry_s_180204dd0);
        }
        *(undefined8 *)(lVar43 + 0x10 + uVar45 * 0x48) = 0;
        *(ulonglong *)(lVar43 + 0x18 + uVar45 * 0x48) = uVar39;
      }
      else {
        if (uVar44 <= uVar45) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar45,uVar44,&PTR_s_C__Users_burne__cargo_registry_s_180204de8);
        }
        *(undefined8 *)(lVar43 + 0x10 + uVar45 * 0x48) = 1;
        *(ulonglong *)(lVar43 + 0x18 + uVar45 * 0x48) = uVar39;
        if (uVar44 <= uVar39) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar39,uVar44,&PTR_s_C__Users_burne__cargo_registry_s_180204e00);
        }
        *(undefined8 *)(lVar43 + uVar39 * 0x48) = 1;
        *(ulonglong *)(lVar43 + 8 + uVar39 * 0x48) = uVar45;
      }
      pcVar2 = (char *)(lVar43 + uVar38 * 0x48);
      uVar45 = *(ulonglong *)(pcVar2 + 0x10);
      uVar39 = *(ulonglong *)(pcVar2 + 0x18);
      local_f0 = *(longlong *)(pcVar2 + 0x20);
      local_90 = *(ulonglong *)(pcVar2 + 0x28);
      local_88 = *(longlong *)(pcVar2 + 0x30);
      local_98 = *(void **)(pcVar2 + 0x38);
      uVar44 = uVar44 - 1;
      uVar41 = *(undefined8 *)(lVar43 + 0x40 + uVar44 * 0x48);
      puVar32 = (undefined4 *)(lVar43 + uVar44 * 0x48);
      uVar13 = puVar32[1];
      uVar14 = puVar32[2];
      uVar15 = puVar32[3];
      puVar33 = (undefined4 *)(lVar43 + 0x10 + uVar44 * 0x48);
      uVar16 = *puVar33;
      uVar17 = puVar33[1];
      uVar18 = puVar33[2];
      uVar19 = puVar33[3];
      puVar33 = (undefined4 *)(lVar43 + 0x20 + uVar44 * 0x48);
      uVar20 = *puVar33;
      uVar21 = puVar33[1];
      uVar22 = puVar33[2];
      uVar23 = puVar33[3];
      puVar33 = (undefined4 *)(lVar43 + 0x30 + uVar44 * 0x48);
      uVar24 = *puVar33;
      uVar25 = puVar33[1];
      uVar26 = puVar33[2];
      uVar27 = puVar33[3];
      *(undefined4 *)pcVar2 = *puVar32;
      *(undefined4 *)(pcVar2 + 4) = uVar13;
      *(undefined4 *)(pcVar2 + 8) = uVar14;
      *(undefined4 *)(pcVar2 + 0xc) = uVar15;
      *(undefined4 *)(pcVar2 + 0x10) = uVar16;
      *(undefined4 *)(pcVar2 + 0x14) = uVar17;
      *(undefined4 *)(pcVar2 + 0x18) = uVar18;
      *(undefined4 *)(pcVar2 + 0x1c) = uVar19;
      *(undefined4 *)(pcVar2 + 0x20) = uVar20;
      *(undefined4 *)(pcVar2 + 0x24) = uVar21;
      *(undefined4 *)(pcVar2 + 0x28) = uVar22;
      *(undefined4 *)(pcVar2 + 0x2c) = uVar23;
      *(undefined4 *)(pcVar2 + 0x30) = uVar24;
      *(undefined4 *)(pcVar2 + 0x34) = uVar25;
      *(undefined4 *)(pcVar2 + 0x38) = uVar26;
      *(undefined4 *)(pcVar2 + 0x3c) = uVar27;
      *(undefined8 *)(pcVar2 + 0x40) = uVar41;
      param_1[8] = uVar44;
      if (uVar38 != uVar44) {
        if (uVar44 <= uVar38) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar38,uVar44,&PTR_s_C__Users_burne__cargo_registry_s_180204e18);
        }
        uVar48 = *(ulonglong *)(pcVar2 + 8);
        lVar35 = *(longlong *)(pcVar2 + 0x10);
        uVar8 = *(ulonglong *)(pcVar2 + 0x18);
        if (*pcVar2 == '\0') {
          if (local_70 <= uVar48) {
                    /* WARNING: Subroutine does not return */
            FUN_180201d02(uVar48,local_70,&PTR_s_C__Users_burne__cargo_registry_s_180204e30);
          }
          if (*(char *)(lVar37 + uVar48 * 0x68) == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180204e48);
          }
          *(ulonglong *)(uVar48 * 0x68 + lVar37 + 8) = uVar38;
        }
        else {
          if (uVar44 <= uVar48) {
                    /* WARNING: Subroutine does not return */
            FUN_180201d02(uVar48,uVar44,&PTR_s_C__Users_burne__cargo_registry_s_180204e60);
          }
          *(undefined8 *)(lVar43 + 0x10 + uVar48 * 0x48) = 1;
          *(ulonglong *)(lVar43 + uVar48 * 0x48 + 0x18) = uVar38;
        }
        if (lVar35 == 0) {
          if (local_70 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_180201d02(uVar8,local_70,&PTR_s_C__Users_burne__cargo_registry_s_180204e78);
          }
          if (*(char *)(lVar37 + uVar8 * 0x68) == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180204e90);
          }
          *(ulonglong *)(uVar8 * 0x68 + lVar37 + 0x10) = uVar38;
        }
        else {
          if (uVar44 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_180201d02(uVar8,uVar44,&PTR_s_C__Users_burne__cargo_registry_s_180204ea8);
          }
          *(undefined8 *)(lVar43 + uVar8 * 0x48) = 1;
          *(ulonglong *)(lVar43 + 8 + uVar8 * 0x48) = uVar38;
        }
      }
      if ((uVar45 & 1) == 0 && (uVar39 != uVar44 || uVar45 == 0)) break;
      (**(code **)(local_f0 + 0x20))(local_98,local_90,local_88);
      if (uVar39 != uVar44) {
        uVar38 = uVar39;
      }
      if (uVar44 <= uVar38) goto LAB_180025c22;
    }
    (**(code **)(local_f0 + 0x20))(local_98,local_90,local_88);
  }
  lVar43 = *(longlong *)(lVar37 + 0x18 + local_a0);
  uVar41 = *(undefined8 *)(lVar37 + 0x20 + local_a0);
  uVar9 = *(undefined8 *)(lVar37 + 0x28 + local_a0);
  uVar10 = *(undefined8 *)(lVar37 + 0x30 + local_a0);
  *(longlong *)(lVar37 + 0x18 + local_a0) = local_d8;
  *(longlong *)(lVar37 + 0x20 + local_a0) = local_d0;
  *(longlong *)(lVar37 + 0x28 + local_a0) = local_c8;
  *(longlong *)(lVar37 + 0x30 + local_a0) = local_c0;
  *(ulonglong *)(lVar37 + 0x38 + local_a0) = local_e8;
  local_61 = 0;
  (**(code **)(lVar43 + 0x20))(uVar10,uVar41,uVar9);
LAB_180025828:
  uVar38 = local_140;
  if (((ulonglong)local_168 & 1) != 0) {
    if (local_140 <= local_b8) {
LAB_180025b96:
      local_160 = (void *)0x1;
      local_61 = 0;
      local_158 = local_b8;
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(local_b8,uVar38,&PTR_s_C__Users_burne__cargo_registry_s_180204ed8);
    }
    lVar37 = CONCAT44(uStack_144,uStack_148);
    while( true ) {
      uVar44 = local_b8;
      bVar49 = *(char *)(lVar37 + 0x10 + local_b8 * 0x48) == '\0';
      if (!bVar49) {
        local_b8 = *(ulonglong *)(lVar37 + local_b8 * 0x48 + 0x18);
      }
      pvVar46 = (void *)(ulonglong)!bVar49;
      local_90 = *(ulonglong *)(lVar37 + 0x20 + uVar44 * 0x48);
      local_a0 = *(ulonglong *)(lVar37 + 0x28 + uVar44 * 0x48);
      local_70 = *(ulonglong *)(lVar37 + 0x30 + uVar44 * 0x48);
      local_88 = *(longlong *)(lVar37 + 0x38 + uVar44 * 0x48);
      local_e8 = param_1[5];
      if (local_e8 <= local_80) {
        local_158 = local_b8;
        local_160 = pvVar46;
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(local_80,local_e8,&PTR_s_C__Users_burne__cargo_registry_s_180204ec0);
      }
      uVar41 = *(undefined8 *)(lVar37 + 0x40 + uVar44 * 0x48);
      puVar36 = (undefined8 *)(param_1[4] + local_80 * 0x68);
      local_98 = pvVar46;
      if (*(int *)(param_1[4] + local_80 * 0x68) == 1) {
        uVar44 = puVar36[2];
        uVar45 = param_1[8];
        if (uVar45 == param_1[6]) {
          FUN_1801f8b00(local_170);
        }
        lVar43 = local_a8[7];
        *(undefined8 *)(lVar43 + uVar45 * 0x48) = 1;
        *(ulonglong *)(lVar43 + 8 + uVar45 * 0x48) = uVar44;
        *(undefined8 *)(lVar43 + 0x10 + uVar45 * 0x48) = 0;
        *(ulonglong *)(lVar43 + 0x18 + uVar45 * 0x48) = local_80;
        *(ulonglong *)(lVar43 + 0x20 + uVar45 * 0x48) = local_90;
        *(ulonglong *)(lVar43 + 0x28 + uVar45 * 0x48) = local_a0;
        *(ulonglong *)(lVar43 + 0x30 + uVar45 * 0x48) = local_70;
        *(longlong *)(lVar43 + 0x38 + uVar45 * 0x48) = local_88;
        *(undefined8 *)(lVar43 + 0x40 + uVar45 * 0x48) = uVar41;
        local_a8[8] = uVar45 + 1;
        if (uVar45 < uVar44) {
          local_158 = local_b8;
          local_160 = local_98;
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar44,uVar45 + 1,&PTR_s_C__Users_burne__cargo_registry_s_180204cb0);
        }
        lVar43 = local_a8[7];
        *(undefined8 *)(lVar43 + 0x10 + uVar44 * 0x48) = 1;
        *(ulonglong *)(lVar43 + 0x18 + uVar44 * 0x48) = uVar45;
        *puVar36 = 1;
        puVar36[2] = uVar45;
        param_1 = local_a8;
        plVar42 = local_f8;
      }
      else {
        lVar43 = param_1[8];
        if (lVar43 == param_1[6]) {
          FUN_1801f8b00(local_170);
        }
        lVar35 = param_1[7];
        *(undefined8 *)(lVar35 + lVar43 * 0x48) = 0;
        *(ulonglong *)(lVar35 + 8 + lVar43 * 0x48) = local_80;
        *(undefined8 *)(lVar35 + 0x10 + lVar43 * 0x48) = 0;
        *(ulonglong *)(lVar35 + 0x18 + lVar43 * 0x48) = local_80;
        *(ulonglong *)(lVar35 + 0x20 + lVar43 * 0x48) = local_90;
        *(ulonglong *)(lVar35 + 0x28 + lVar43 * 0x48) = local_a0;
        *(ulonglong *)(lVar35 + 0x30 + lVar43 * 0x48) = local_70;
        *(longlong *)(lVar35 + 0x38 + lVar43 * 0x48) = local_88;
        *(undefined8 *)(lVar35 + 0x40 + lVar43 * 0x48) = uVar41;
        param_1[8] = lVar43 + 1;
        *puVar36 = 1;
        puVar36[1] = lVar43;
        puVar36[2] = lVar43;
        plVar42 = local_f8;
      }
      local_f8 = plVar42;
      if (local_98 == (void *)0x0) break;
      if (uVar38 <= local_b8) goto LAB_180025b96;
    }
    local_160 = (void *)0x0;
    local_98 = (void *)0x0;
    local_158 = local_b8;
  }
  plVar4 = local_130;
  if (local_178 == plVar42) goto LAB_180024d2f;
  local_130 = local_178 + 0xd;
  plVar4 = local_130;
  if (*local_178 == 2) goto LAB_180024d2f;
  local_b8 = local_178[1];
  local_108 = local_178[10];
  sStack_100 = local_178[0xb];
  local_118 = (undefined4)local_178[8];
  uStack_114 = *(undefined4 *)((longlong)local_178 + 0x44);
  uStack_110 = (undefined4)local_178[9];
  uStack_10c = *(undefined4 *)((longlong)local_178 + 0x4c);
  local_d8 = local_178[3];
  local_d0 = local_178[4];
  local_c8 = local_178[5];
  local_c0 = local_178[6];
  local_e8 = local_178[7];
  uVar30 = (uint)*local_178;
  goto LAB_180024dca;
}


