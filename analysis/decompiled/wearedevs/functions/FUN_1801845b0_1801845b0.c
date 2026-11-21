/* FUN_1801845b0 @ 1801845b0 */

undefined8 FUN_1801845b0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  code *pcVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char *pcVar10;
  char cVar11;
  byte bVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined4 uVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong *plVar22;
  longlong *plVar23;
  longlong lVar24;
  longlong *plVar25;
  uint uVar26;
  longlong *plVar27;
  bool bVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  char *local_128;
  longlong local_120;
  int local_118;
  uint local_10c;
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  undefined4 local_e4;
  longlong *local_e0;
  undefined1 local_d1;
  longlong *local_d0;
  undefined1 local_c3;
  undefined1 local_c2;
  undefined1 local_c1;
  undefined8 local_c0;
  
  local_c0 = 0xfffffffffffffffe;
  *(byte *)(param_2 + 0xe) = *(byte *)(*(longlong *)(*param_1 + 0x10) + 0x80) ^ 1;
  local_c1 = 1;
  plVar23 = param_2;
  local_f0 = param_1;
  local_d0 = param_2;
  lVar14 = FUN_1801df8c0();
  param_2[9] = lVar14;
  uVar18 = SUB84(plVar23,0);
  *(undefined4 *)(param_2 + 10) = uVar18;
  local_c1 = 1;
  local_d0 = param_2;
  lVar14 = FUN_1801df8c0();
  param_2[0xb] = lVar14;
  *(undefined4 *)(param_2 + 0xc) = uVar18;
  param_2[4] = 0;
LAB_180184690:
  do {
    plVar23 = local_f0;
    if (*(char *)((longlong)param_2 + 0x72) == '\x01') {
      lVar14 = *local_f0;
      lVar24 = *(longlong *)(lVar14 + 0x10);
      iVar19 = *(int *)(lVar24 + 200);
      uVar26 = *(uint *)((longlong)param_2 + 0x14);
      uVar13 = *(uint *)(param_2 + 2) << 0x11 ^ *(uint *)(param_2 + 2);
      uVar13 = uVar13 >> 7 ^ uVar26 >> 0x10 ^ uVar26 ^ uVar13;
      *(uint *)(param_2 + 2) = uVar26;
      *(uint *)((longlong)param_2 + 0x14) = uVar13;
      local_c1 = 1;
      local_d0 = param_2;
      FUN_18016fa90(lVar24 + 0xa8,(ulonglong)(iVar19 + 1) * (ulonglong)(uVar13 + uVar26) >> 0x20);
      uVar20 = *(ulonglong *)(lVar14 + 0x18);
      uVar15 = *(ulonglong *)(*(longlong *)(lVar14 + 0x10) + 0xe8);
      if (uVar15 <= uVar20) {
        local_c1 = 1;
        local_d0 = param_2;
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar20,uVar15,&PTR_s_C__Users_burne__cargo_registry_s_180264f28);
      }
      lVar14 = *(longlong *)(*(longlong *)(lVar14 + 0x10) + 0xe0);
      lVar24 = uVar20 * 0x80;
      *(longlong *)(lVar14 + 0x10 + lVar24) = param_2[6];
      *(longlong *)(lVar14 + 0x20 + lVar24) = param_2[7];
      *(longlong *)(lVar14 + 0x28 + lVar24) = param_2[8];
      local_c1 = 0;
      local_d0 = param_2;
      FUN_180173480(*(longlong *)(*local_f0 + 0x10) + 0x10,param_2);
      return 0;
    }
    uVar13 = (int)param_2[0xd] + 1;
    *(uint *)(param_2 + 0xd) = uVar13;
    lVar14 = *local_f0;
    uVar26 = *(uint *)(*(longlong *)(lVar14 + 0x10) + 0x70);
    local_e0 = param_2;
    if (uVar26 == 0) {
      local_c3 = 1;
      local_100 = param_2;
      FUN_180201c40(&PTR_s_C__Users_burne__cargo_registry_s_180264fb0);
      goto LAB_180185398;
    }
    uVar20 = (ulonglong)uVar13 % (ulonglong)uVar26;
    if ((int)uVar20 == 0) {
      if ((int)param_2[10] != 1000000000) {
        local_120 = param_2[9];
        local_c3 = 1;
        local_118 = (int)param_2[10];
        local_100 = param_2;
        uVar15 = FUN_1801df960(&local_120);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar15;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar20 & 0xffffffff;
        auVar8 = auVar2 * ZEXT816(1000000000) + auVar8;
        lVar14 = auVar8._8_8_;
        uVar20 = -lVar14;
        local_e0[6] = local_e0[6] + (-(ulonglong)(lVar14 != 0) | auVar8._0_8_);
      }
      lVar14 = local_e0[4];
      if (lVar14 != 0) {
        local_c3 = 1;
        local_100 = local_e0;
        uVar16 = FUN_1801df8c0();
        local_100 = local_e0;
        local_c3 = 1;
        uVar15 = FUN_1801e3e00(uVar16);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar15;
        local_148._8_8_ = 0;
        local_148._0_8_ = uVar20 & 0xffffffff;
        local_148 = auVar3 * ZEXT816(1000000000) + local_148;
        dVar29 = (double)FUN_1801f5a90(local_148);
        auVar31._8_4_ = (int)((ulonglong)lVar14 >> 0x20);
        auVar31._0_8_ = lVar14;
        auVar31._12_4_ = 0x45300000;
        dVar33 = (auVar31._8_8_ - 1.9342813113834067e+25) +
                 ((double)CONCAT44(0x43300000,(int)lVar14) - 4503599627370496.0);
        dVar30 = pow(0.9,dVar33);
        local_e0[5] = (longlong)
                      ((1.0 - (1.0 - dVar30)) * (double)local_e0[5] +
                      (dVar29 / dVar33) * (1.0 - dVar30));
      }
      local_c3 = 0;
      local_100 = local_e0;
      param_2 = (longlong *)FUN_180184030(plVar23,local_e0,0);
      iVar19 = (int)*plVar23 + 0x10;
      local_c3 = 1;
      local_100 = param_2;
      FUN_1801820a0(param_2);
      local_c3 = 1;
      local_100 = param_2;
      lVar14 = FUN_1801df8c0();
      param_2[9] = lVar14;
      *(int *)(param_2 + 10) = iVar19;
      local_c3 = 1;
      local_100 = param_2;
      lVar14 = FUN_1801df8c0();
      param_2[0xb] = lVar14;
      *(int *)(param_2 + 0xc) = iVar19;
      param_2[4] = 0;
      lVar14 = *plVar23;
    }
    uVar26 = *(uint *)((longlong)param_2 + 0x6c);
    if (uVar26 == 0) {
      local_c1 = 1;
      local_d0 = param_2;
      FUN_180201c40(&PTR_s_C__Users_burne__cargo_registry_s_180264f68);
      goto LAB_180185398;
    }
    if (*(uint *)(param_2 + 0xd) % uVar26 == 0) {
      lVar14 = *(longlong *)(lVar14 + 0x10);
      if (*(int *)(lVar14 + 0x28) == 1) {
        uVar13 = *(uint *)(lVar14 + 0x2c);
      }
      else {
        dVar29 = 0.0;
        if (0.0 <= 200000.0 / (double)param_2[5]) {
          dVar29 = 200000.0 / (double)param_2[5];
        }
        dVar30 = 4294967295.0;
        if (dVar29 <= 4294967295.0) {
          dVar30 = dVar29;
        }
        uVar13 = (uint)(longlong)dVar30;
        if (uVar13 < 3) {
          uVar13 = 2;
        }
        if (0x7e < uVar13) {
          uVar13 = 0x7f;
        }
      }
      uVar7 = uVar13 - uVar26;
      if (uVar13 < uVar26) {
        uVar7 = uVar26 - uVar13;
      }
      if (2 < uVar7) {
        *(uint *)((longlong)param_2 + 0x6c) = uVar13;
      }
      local_c1 = 1;
      local_e0 = param_2;
      local_d0 = param_2;
      lVar14 = FUN_180173b50(lVar14 + 0x10);
      plVar23 = local_f0;
      param_2 = local_e0;
      if (lVar14 == 0) {
        lVar14 = *local_e0;
        *local_e0 = 0;
        if (lVar14 == 0) {
          plVar22 = (longlong *)local_e0[3];
          uVar20 = plVar22[3];
          local_e4 = (undefined4)(uVar20 >> 0x20);
          if ((int)plVar22[4] != (int)uVar20) {
            do {
              uVar13 = (uint)uVar20 + 1;
              local_120 = CONCAT44(local_120._4_4_,uVar13);
              uVar26 = (uint)(uVar20 >> 0x20);
              if (uVar26 == (uint)uVar20) {
                LOCK();
                uVar15 = plVar22[3];
                bVar28 = uVar20 == uVar15;
                if (bVar28) {
                  plVar22[3] = CONCAT44(uVar13,uVar13);
                  uVar15 = uVar20;
                }
                else {
                }
                UNLOCK();
              }
              else {
                if (uVar13 == uVar26) {
                  local_d0 = local_e0;
                  local_c1 = 1;
                  FUN_1801fb094(CONCAT71((int7)(uVar20 >> 8),1),&local_e4,&local_120,0);
                  goto LAB_180185398;
                }
                LOCK();
                uVar15 = plVar22[3];
                bVar28 = uVar20 == uVar15;
                if (bVar28) {
                  plVar22[3] = uVar20 & 0xffffffff00000000 | (ulonglong)uVar13;
                  uVar15 = uVar20;
                }
                else {
                }
                UNLOCK();
              }
              if (bVar28) {
                plVar27 = *(longlong **)(plVar22[2] + (uVar20 & 0xff) * 8);
                goto LAB_180184bce;
              }
              local_e4 = (undefined4)(uVar15 >> 0x20);
              uVar20 = uVar15;
            } while ((int)plVar22[4] != (int)uVar15);
          }
          plVar27 = (longlong *)0x0;
          goto LAB_180184bce;
        }
      }
LAB_180184be0:
      local_c1 = 0;
      local_d0 = param_2;
      param_2 = (longlong *)FUN_1801857a0(plVar23);
    }
    else {
      lVar24 = *param_2;
      *param_2 = 0;
      if (lVar24 != 0) goto LAB_180184be0;
      plVar22 = (longlong *)param_2[3];
      uVar20 = plVar22[3];
      local_e4 = (undefined4)(uVar20 >> 0x20);
      if ((int)plVar22[4] != (int)uVar20) {
        do {
          uVar13 = (uint)uVar20 + 1;
          local_120 = CONCAT44(local_120._4_4_,uVar13);
          uVar26 = (uint)(uVar20 >> 0x20);
          if (uVar26 == (uint)uVar20) {
            LOCK();
            uVar15 = plVar22[3];
            bVar28 = uVar20 == uVar15;
            if (bVar28) {
              plVar22[3] = CONCAT44(uVar13,uVar13);
            }
            else {
              uVar20 = uVar15;
            }
            UNLOCK();
          }
          else {
            if (uVar13 == uVar26) {
              local_c1 = 1;
              local_d0 = param_2;
              FUN_1801fb094(CONCAT71((int7)(uVar20 >> 8),1),&local_e4,&local_120,0);
              goto LAB_180185398;
            }
            LOCK();
            uVar15 = plVar22[3];
            bVar28 = uVar20 == uVar15;
            if (bVar28) {
              plVar22[3] = uVar20 & 0xffffffff00000000 | (ulonglong)uVar13;
            }
            else {
              uVar20 = uVar15;
            }
            UNLOCK();
          }
          if (bVar28) {
            goto LAB_180184be0;
          }
          local_e4 = (undefined4)(uVar20 >> 0x20);
        } while ((int)plVar22[4] != (int)uVar20);
      }
      plVar25 = param_2;
      if (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0xf0) != 0) {
        plVar23 = param_2 + 3;
        uVar16 = *(undefined8 *)(*plVar23 + 0x18);
        iVar19 = *(int *)(*plVar23 + 0x20);
        uVar20 = *(ulonglong *)(*(longlong *)(lVar14 + 0x10) + 0xf0);
        lVar24 = *(longlong *)(lVar14 + 0x10);
        uVar15 = *(ulonglong *)(lVar24 + 0xa0);
        if (uVar15 == 0) {
          local_c1 = 1;
          local_e0 = param_2;
          local_d0 = param_2;
                    /* WARNING: Subroutine does not return */
          FUN_180201c20(&PTR_s_C__Users_burne__cargo_registry_s_180264f80);
        }
        LOCK();
        bVar28 = *(char *)(lVar24 + 0x108) == '\0';
        if (bVar28) {
          *(char *)(lVar24 + 0x108) = '\x01';
        }
        UNLOCK();
        local_108 = plVar23;
        local_e0 = param_2;
        if (!bVar28) {
          local_c1 = 1;
          local_d0 = param_2;
          FUN_180200390((char *)(lVar24 + 0x108));
        }
        if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
          local_10c = 0;
          plVar23 = local_108;
        }
        else {
          local_d0 = local_e0;
          local_c1 = 1;
          local_10c = FUN_180200a50();
          local_10c = local_10c ^ 1;
          plVar23 = local_108;
        }
        if ((uVar20 | uVar15) >> 0x20 == 0) {
          uVar20 = (uVar20 & 0xffffffff) / (uVar15 & 0xffffffff);
        }
        else {
          uVar20 = uVar20 / uVar15;
        }
        uVar21 = 0x100 - (ulonglong)(uint)(iVar19 - (int)((ulonglong)uVar16 >> 0x20));
        uVar15 = uVar20 + 1;
        if (uVar21 < uVar20 + 1) {
          uVar15 = uVar21;
        }
        uVar15 = uVar15 + (uVar15 == 0);
        uVar20 = *(ulonglong *)(*(longlong *)(lVar14 + 0x10) + 0xf0);
        if (uVar20 <= uVar15) {
          uVar15 = uVar20;
        }
        plVar22 = (longlong *)(lVar24 + 0x128);
        if (0x7f < uVar15) {
          uVar15 = 0x80;
        }
        *(ulonglong *)(*(longlong *)(lVar14 + 0x10) + 0xf0) = uVar20 - uVar15;
        if (uVar20 == 0) {
          local_108 = (longlong *)0x0;
        }
        else {
          local_108 = (longlong *)*plVar22;
          if (local_108 != (longlong *)0x0) {
            lVar14 = *(longlong *)((longlong)local_108 + 8);
            *plVar22 = lVar14;
            if (lVar14 == 0) {
              *(undefined8 *)(lVar24 + 0x130) = 0;
            }
            *(undefined8 *)((longlong)local_108 + 8) = 0;
          }
        }
        local_128 = (char *)(lVar24 + 0x108);
        local_120 = (longlong)local_108;
        FUN_18017edb0(plVar23);
        plVar27 = local_108;
        pcVar10 = local_128;
        if (((char)local_10c == '\0') &&
           ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) != 0)) {
          local_d0 = local_e0;
          local_c1 = 1;
          cVar11 = FUN_180200a50();
          if (cVar11 == '\0') {
            *(undefined1 *)(lVar24 + 0x109) = 1;
          }
        }
        LOCK();
        cVar11 = *pcVar10;
        *pcVar10 = '\0';
        UNLOCK();
        if (cVar11 == '\x02') {
          local_d0 = local_e0;
          local_c1 = 1;
          WakeByAddressSingle(pcVar10);
        }
LAB_180184bce:
        plVar23 = local_f0;
        param_2 = local_e0;
        plVar25 = local_e0;
        if (plVar27 != (longlong *)0x0) goto LAB_180184be0;
      }
      if ((int)plVar25[10] != 1000000000) {
        local_120 = plVar25[9];
        local_c1 = 1;
        local_118 = (int)plVar25[10];
        local_d0 = plVar25;
        uVar20 = FUN_1801df960(&local_120);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar20;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulonglong)plVar22 & 0xffffffff;
        auVar9 = auVar4 * ZEXT816(1000000000) + auVar9;
        lVar14 = auVar9._8_8_;
        plVar22 = (longlong *)-lVar14;
        plVar25[6] = plVar25[6] + (-(ulonglong)(lVar14 != 0) | auVar9._0_8_);
        plVar23 = local_f0;
      }
      uVar26 = (uint)plVar22;
      lVar14 = plVar25[4];
      if (lVar14 != 0) {
        local_c1 = 1;
        local_d0 = plVar25;
        uVar16 = FUN_1801df8c0();
        local_c1 = 1;
        local_d0 = plVar25;
        uVar20 = FUN_1801e3e00(uVar16);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar20;
        local_138._8_8_ = 0;
        local_138._0_8_ = (ulonglong)plVar22 & 0xffffffff;
        local_138 = auVar5 * ZEXT816(1000000000) + local_138;
        uVar26 = local_138._8_4_;
        dVar29 = (double)FUN_1801f5a90(local_138);
        auVar32._8_4_ = (int)((ulonglong)lVar14 >> 0x20);
        auVar32._0_8_ = lVar14;
        auVar32._12_4_ = 0x45300000;
        dVar33 = (auVar32._8_8_ - 1.9342813113834067e+25) +
                 ((double)CONCAT44(0x43300000,(int)lVar14) - 4503599627370496.0);
        dVar30 = pow(0.9,dVar33);
        plVar25[5] = (longlong)
                     ((1.0 - (1.0 - dVar30)) * (double)plVar25[5] +
                     (dVar29 / dVar33) * (1.0 - dVar30));
        plVar23 = local_f0;
      }
      lVar14 = *plVar23;
      if (*(char *)((longlong)plVar25 + 0x71) == '\0') {
        lVar24 = *(longlong *)(lVar14 + 0x10);
        if ((ulonglong)(((uint)*(undefined8 *)(lVar24 + 0xf8) & 0xffff) * 2) <
            *(ulonglong *)(lVar24 + 0x100)) {
          LOCK();
          *(longlong *)(lVar24 + 0xf8) = *(longlong *)(lVar24 + 0xf8) + 1;
          UNLOCK();
          *(undefined1 *)((longlong)plVar25 + 0x71) = 1;
          goto LAB_180184d44;
        }
        *(undefined1 *)((longlong)plVar25 + 0x71) = 0;
LAB_180184e96:
        if (0x7ffffffffffffffe < (ulonglong)plVar23[3]) {
          local_c1 = 1;
          local_d0 = plVar25;
          FUN_180201940(&PTR_s_C__Users_burne__cargo_registry_s_1802604c0);
LAB_180185398:
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        if (plVar23[6] == 0) {
          lVar14 = *plVar23;
          lVar24 = *(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30);
          local_e0 = plVar25;
          if (lVar24 != 0) {
            lVar14 = *(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x38);
            uVar20 = *(longlong *)(lVar14 + 0x10) - 1U & 0xfffffffffffffff0;
            local_c2 = 1;
            local_f8 = plVar25;
            (**(code **)(lVar14 + 0x28))(lVar24 + uVar20 + 0x10);
            uVar26 = (uint)uVar20;
            lVar14 = *plVar23;
          }
          param_2 = local_e0;
          if (((*local_e0 == 0) &&
              (*(int *)(local_e0[3] + 0x20) == (int)*(undefined8 *)(local_e0[3] + 0x18))) &&
             (*(char *)((longlong)local_e0 + 0x73) == '\0')) {
            lVar24 = *(longlong *)(lVar14 + 0x10) + 0x28;
            local_c2 = 1;
            local_f8 = local_e0;
            cVar11 = FUN_18017c040(*(longlong *)(lVar14 + 0x10) + 0xf8,lVar24,
                                   *(undefined8 *)(lVar14 + 0x18),
                                   *(undefined1 *)((longlong)local_e0 + 0x71));
            *(undefined1 *)((longlong)local_e0 + 0x71) = 0;
            param_2 = local_e0;
            if (cVar11 != '\0') {
              local_f8 = local_e0;
              local_c2 = 1;
              FUN_180173e80(*(longlong *)(lVar14 + 0x10) + 0x10);
              param_2 = local_e0;
            }
            do {
              uVar26 = (uint)lVar24;
              if ((*(char *)((longlong)param_2 + 0x72) != '\0') ||
                 (*(char *)((longlong)param_2 + 0x73) != '\0')) goto LAB_180184f19;
              lVar14 = param_2[7];
              lVar24 = param_2[8];
              param_2[7] = lVar14 + 1;
              param_2[8] = lVar24 + 1;
              lVar1 = *(longlong *)(*plVar23 + 0x10);
              uVar20 = *(ulonglong *)(*plVar23 + 0x18);
              uVar15 = *(ulonglong *)(lVar1 + 0xe8);
              local_f8 = param_2;
              if (uVar15 <= uVar20) {
                local_c2 = 1;
                    /* WARNING: Subroutine does not return */
                FUN_180201d02(uVar20,uVar15,&PTR_s_C__Users_burne__cargo_registry_s_180265038);
              }
              lVar1 = *(longlong *)(lVar1 + 0xe0);
              lVar17 = uVar20 * 0x80;
              *(longlong *)(lVar1 + 0x10 + lVar17) = param_2[6];
              *(longlong *)(lVar1 + 0x20 + lVar17) = lVar14 + 1;
              *(longlong *)(lVar1 + 0x28 + lVar17) = lVar24 + 1;
              local_c2 = 0;
              param_2 = (longlong *)FUN_180184030(plVar23,param_2,1000000000);
              param_2[8] = param_2[8] + 1;
              local_c2 = 1;
              local_f8 = param_2;
              FUN_1801820a0(param_2,*plVar23 + 0x10);
              if ((*param_2 != 0) ||
                 (*(int *)(param_2[3] + 0x20) != (int)*(undefined8 *)(param_2[3] + 0x18))) {
                lVar14 = *(longlong *)(*plVar23 + 0x10);
                uVar26 = (int)lVar14 + 0x28;
                local_c2 = 1;
                local_f8 = param_2;
                bVar12 = FUN_18017bee0(lVar14 + 0xf8);
                *(byte *)((longlong)param_2 + 0x71) = bVar12 ^ 1;
                goto LAB_180184f19;
              }
              lVar14 = *(longlong *)(*plVar23 + 0x10);
              lVar24 = lVar14 + 0x28;
              local_c2 = 1;
              local_f8 = param_2;
              cVar11 = FUN_18017c1e0(lVar14 + 0xf8);
              uVar26 = (uint)lVar24;
            } while (cVar11 != '\0');
            *(undefined1 *)((longlong)param_2 + 0x71) = 1;
          }
LAB_180184f19:
          lVar14 = *(longlong *)(*(longlong *)(*plVar23 + 0x10) + 0x40);
          if (lVar14 != 0) {
            lVar24 = *(longlong *)(*(longlong *)(*plVar23 + 0x10) + 0x48);
            uVar20 = *(longlong *)(lVar24 + 0x10) - 1U & 0xfffffffffffffff0;
            local_c2 = 1;
            local_f8 = param_2;
            (**(code **)(lVar24 + 0x28))(lVar14 + uVar20 + 0x10);
            uVar26 = (uint)uVar20;
          }
        }
        else {
          local_c1 = 0;
          local_d0 = plVar25;
          param_2 = (longlong *)FUN_180184030(plVar23,plVar25,0);
          uVar26 = (uint)plVar25;
        }
        local_c1 = 1;
        local_d0 = param_2;
        lVar14 = FUN_1801df8c0();
        param_2[9] = lVar14;
        *(uint *)(param_2 + 10) = uVar26;
        local_c1 = 1;
        local_d0 = param_2;
        lVar14 = FUN_1801df8c0();
        param_2[0xb] = lVar14;
        *(uint *)(param_2 + 0xc) = uVar26;
        param_2[4] = 0;
        goto LAB_180184690;
      }
LAB_180184d44:
      lVar24 = *(longlong *)(lVar14 + 0x10);
      uVar20 = *(ulonglong *)(lVar24 + 0xa0);
      uVar26 = *(uint *)((longlong)plVar25 + 0x14);
      uVar13 = *(uint *)(plVar25 + 2) << 0x11 ^ *(uint *)(plVar25 + 2);
      uVar13 = uVar13 >> 7 ^ uVar26 >> 0x10 ^ uVar26 ^ uVar13;
      *(uint *)(plVar25 + 2) = uVar26;
      *(uint *)((longlong)plVar25 + 0x14) = uVar13;
      if (uVar20 != 0) {
        uVar13 = uVar13 + uVar26;
        uVar15 = 0;
        do {
          uVar21 = uVar15 + ((uVar20 & 0xffffffff) * (ulonglong)uVar13 >> 0x20);
          if ((uVar21 | uVar20) >> 0x20 == 0) {
            plVar23 = (longlong *)((uVar21 & 0xffffffff) % (uVar20 & 0xffffffff));
            if (plVar23 != *(longlong **)(lVar14 + 0x18)) goto LAB_180184dda;
          }
          else {
            plVar23 = (longlong *)(uVar21 % uVar20);
            if (plVar23 != *(longlong **)(lVar14 + 0x18)) {
LAB_180184dda:
              plVar22 = *(longlong **)(*(longlong *)(lVar14 + 0x10) + 0xa0);
              if (plVar22 <= plVar23) {
                local_c1 = 1;
                local_d0 = plVar25;
                    /* WARNING: Subroutine does not return */
                FUN_180201d02(plVar23,plVar22,&PTR_s_C__Users_burne__cargo_registry_s_180264ef8);
              }
              lVar24 = (longlong)plVar23 * 0x10;
              local_c1 = 1;
              plVar23 = plVar25 + 3;
              local_d0 = plVar25;
              lVar24 = FUN_18017ef70(lVar24 + *(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x98));
              uVar26 = (uint)plVar23;
              if (lVar24 != 0) goto LAB_180184e3e;
            }
          }
          uVar26 = (uint)plVar23;
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar20);
        lVar24 = *(longlong *)(lVar14 + 0x10);
      }
      local_c1 = 1;
      local_d0 = plVar25;
      lVar24 = FUN_180173b50(lVar24 + 0x10);
      plVar23 = local_f0;
      if (lVar24 == 0) goto LAB_180184e96;
LAB_180184e3e:
      plVar23 = local_f0;
      local_d1 = 1;
      local_120 = lVar24;
      local_e0 = plVar25;
      lVar14 = FUN_1801df8c0();
      local_e0[9] = lVar14;
      *(uint *)(local_e0 + 10) = uVar26;
      local_d1 = 1;
      lVar14 = FUN_1801df8c0();
      local_e0[0xb] = lVar14;
      *(uint *)(local_e0 + 0xc) = uVar26;
      local_e0[4] = 0;
      local_d1 = 0;
      param_2 = (longlong *)FUN_1801857a0(plVar23);
    }
    if (param_2 == (longlong *)0x0) {
      return 0;
    }
  } while( true );
}


