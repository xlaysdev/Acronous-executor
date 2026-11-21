/* FUN_180146160 @ 180146160 */

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_180146160(longlong *param_1,longlong *param_2,longlong *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  size_t *psVar11;
  longlong *plVar12;
  byte bVar13;
  ushort uVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  longlong *plVar18;
  char cVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  byte *******pppppppbVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  undefined8 unaff_RDI;
  ulonglong uVar29;
  ulonglong uVar30;
  ushort uVar31;
  uint uVar32;
  longlong lVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  int local_120;
  byte *******local_118;
  longlong *local_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  longlong local_c8;
  void *pvStack_c0;
  size_t local_b8;
  byte *******pppppppbStack_b0;
  ushort local_a8;
  undefined6 uStack_a6;
  longlong *local_98;
  longlong local_90;
  ulonglong local_88;
  void *local_80;
  longlong *local_78;
  size_t local_70;
  ulonglong local_68;
  longlong local_60;
  byte *******local_58;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_49 = 1;
  local_4a = 1;
  local_98 = param_3;
  local_78 = param_2;
  cVar19 = FUN_18015f220();
  plVar18 = local_78;
  if (cVar19 == '\0') {
    lVar22 = *param_1;
    if (lVar22 == 2) {
      local_e8 = *(undefined1 (*) [16])(param_1 + 1);
      auVar34._0_8_ = local_e8._0_8_;
      auVar34._8_4_ = local_e8._0_4_;
      auVar34._12_4_ = local_e8._4_4_;
      local_108 = auVar34 ^ (undefined1  [16])s_uespemosarenegyl_180204b70;
      auVar35._0_8_ = local_e8._8_8_;
      auVar35._8_4_ = local_e8._8_4_;
      auVar35._12_4_ = local_e8._12_4_;
      local_f8 = auVar35 ^ (undefined1  [16])s_modnarodsetybdet_180204b80;
      local_d8 = (undefined1  [16])0x0;
      local_c8 = 0;
      lVar15 = *local_78;
      local_118 = (byte *******)(ulonglong)(lVar15 != 0);
      FUN_1800271e0(local_108,&local_118,8);
      if (lVar15 == 0) {
        local_118 = (byte *******)(ulonglong)*(byte *)(plVar18 + 1);
        pppppppbVar23 = (byte *******)&local_118;
        lVar27 = 8;
        local_58 = local_118;
      }
      else {
        pppppppbVar23 = (byte *******)plVar18[1];
        lVar27 = plVar18[2];
        local_58 = pppppppbVar23;
      }
      FUN_1800271e0(local_108,pppppppbVar23,lVar27);
      uVar30 = local_d8._0_8_ << 0x38 | local_d8._8_8_;
      uVar24 = local_f8._8_8_ ^ uVar30;
      uVar29 = local_108._0_8_ + local_f8._0_8_;
      uVar21 = (local_f8._0_8_ << 0xd | (ulonglong)local_f8._0_8_ >> 0x33) ^ uVar29;
      uVar25 = (uVar24 << 0x10 | uVar24 >> 0x30) ^ local_108._8_8_ + uVar24;
      uVar26 = local_108._8_8_ + uVar24 + uVar21;
      uVar29 = (uVar29 << 0x20 | uVar29 >> 0x20) + uVar25;
      uVar21 = (uVar21 << 0x11 | uVar21 >> 0x2f) ^ uVar26;
      uVar24 = (uVar25 << 0x15 | uVar25 >> 0x2b) ^ uVar29;
      uVar29 = (uVar29 ^ uVar30) + uVar21;
      uVar25 = ((uVar26 << 0x20 | uVar26 >> 0x20) ^ 0xff) + uVar24;
      uVar21 = (uVar21 << 0xd | uVar21 >> 0x33) ^ uVar29;
      uVar24 = (uVar24 << 0x10 | uVar24 >> 0x30) ^ uVar25;
      uVar25 = uVar25 + uVar21;
      uVar26 = (uVar29 << 0x20 | uVar29 >> 0x20) + uVar24;
      uVar21 = (uVar21 << 0x11 | uVar21 >> 0x2f) ^ uVar25;
      uVar24 = (uVar24 << 0x15 | uVar24 >> 0x2b) ^ uVar26;
      uVar26 = uVar26 + uVar21;
      uVar25 = (uVar25 << 0x20 | uVar25 >> 0x20) + uVar24;
      uVar21 = (uVar21 << 0xd | uVar21 >> 0x33) ^ uVar26;
      uVar24 = (uVar24 << 0x10 | uVar24 >> 0x30) ^ uVar25;
      uVar25 = uVar25 + uVar21;
      uVar26 = (uVar26 << 0x20 | uVar26 >> 0x20) + uVar24;
      uVar21 = (uVar21 << 0x11 | uVar21 >> 0x2f) ^ uVar25;
      uVar24 = (uVar24 << 0x15 | uVar24 >> 0x2b) ^ uVar26;
      lVar27 = (uVar25 << 0x20 | uVar25 >> 0x20) + uVar24;
      uVar21 = (uVar21 << 0xd | uVar21 >> 0x33) ^ uVar26 + uVar21;
      lVar28 = lVar27 + uVar21;
      uVar32 = (uint)((ulonglong)lVar28 >> 0x20) ^ (uint)lVar28 ^
               ((uint)(uVar24 >> 0x10) ^ (uint)((ulonglong)lVar27 >> 0x20)) >> 0xb ^
               (uint)(uVar21 >> 0x2f);
      local_60 = lVar15;
    }
    else {
      local_60 = *local_78;
      uVar32 = (local_60 != 0 ^ 0x84222325) * 0xaef4a21;
      if (local_60 == 0) {
        local_58 = (byte *******)(ulonglong)*(byte *)(local_78 + 1);
        uVar32 = (*(byte *)(local_78 + 1) ^ 0x281a39c5) * 0xaef4a21;
        local_60 = 0;
      }
      else {
        local_58 = (byte *******)local_78[1];
        uVar21 = local_78[2];
        if (uVar21 != 0) {
          uVar24 = uVar21 & 7;
          pppppppbVar23 = local_58;
          if (uVar24 != 0) {
            do {
              bVar13 = *(byte *)pppppppbVar23;
              pppppppbVar23 = (byte *******)((longlong)pppppppbVar23 + 1);
              uVar32 = (bVar13 ^ uVar32) * 0x1b3;
              uVar24 = uVar24 - 1;
            } while (uVar24 != 0);
          }
          if (7 < uVar21) {
            do {
              bVar13 = *(byte *)pppppppbVar23;
              pbVar1 = (byte *)((longlong)pppppppbVar23 + 1);
              pbVar2 = (byte *)((longlong)pppppppbVar23 + 2);
              pbVar3 = (byte *)((longlong)pppppppbVar23 + 3);
              pbVar4 = (byte *)((longlong)pppppppbVar23 + 4);
              pbVar5 = (byte *)((longlong)pppppppbVar23 + 5);
              pbVar6 = (byte *)((longlong)pppppppbVar23 + 6);
              pbVar7 = (byte *)((longlong)pppppppbVar23 + 7);
              pppppppbVar23 = pppppppbVar23 + 1;
              uVar32 = ((uint)*pbVar7 ^
                       ((uint)*pbVar6 ^
                       ((uint)*pbVar5 ^
                       ((uint)*pbVar4 ^
                       ((uint)*pbVar3 ^
                       ((uint)*pbVar2 ^ ((uint)*pbVar1 ^ (bVar13 ^ uVar32) * 0x1b3) * 0x1b3) * 0x1b3
                       ) * 0x1b3) * 0x1b3) * 0x1b3) * 0x1b3) * 0x1b3;
            } while (pppppppbVar23 != (byte *******)((longlong)local_58 + uVar21));
          }
        }
      }
    }
    uVar32 = uVar32 & 0x7fff;
    uVar25 = (ulonglong)*(ushort *)(param_1 + 0xb);
    uVar24 = (ulonglong)(uVar32 & *(ushort *)(param_1 + 0xb));
    uVar21 = param_1[10];
    lVar15 = param_1[9];
    lVar27 = param_1[4];
    local_68 = param_1[5];
    local_80 = (void *)plVar18[1];
    local_70 = plVar18[2];
    uVar26 = 0;
    local_110 = param_1;
    do {
      plVar18 = local_110;
      if (uVar21 <= uVar24) {
        uVar24 = 0;
      }
      if (uVar21 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar29 = (ulonglong)*(ushort *)(lVar15 + uVar24 * 4);
      uVar31 = (ushort)uVar32;
      local_a8 = uVar31;
      if (uVar29 == 0xffff) {
        pppppppbVar23 = (byte *******)local_78[3];
        lVar22 = *local_98;
        if (local_68 < 0x8000) {
          local_c8 = local_60;
          pvStack_c0 = local_80;
          local_b8 = local_70;
          local_d8._8_8_ = local_98[4];
          local_d8._0_8_ = local_98[3];
          auVar16._8_8_ = 0;
          auVar16._0_8_ = local_108._8_8_;
          local_108 = auVar16 << 0x40;
          local_e8 = *(undefined1 (*) [16])(local_98 + 1);
          pppppppbStack_b0 = pppppppbVar23;
          local_f8._8_8_ = lVar22;
          if (local_68 == local_110[3]) {
            local_58 = pppppppbVar23;
            FUN_1801fa370(local_110 + 3);
            lVar27 = plVar18[4];
          }
          lVar22 = local_68 * 0x68;
          *(ulonglong *)(lVar27 + 0x60 + lVar22) = CONCAT62(uStack_a6,local_a8);
          psVar11 = (size_t *)(lVar27 + 0x50 + lVar22);
          *psVar11 = local_b8;
          psVar11[1] = (size_t)pppppppbStack_b0;
          plVar12 = (longlong *)(lVar27 + 0x40 + lVar22);
          *plVar12 = local_c8;
          plVar12[1] = (longlong)pvStack_c0;
          puVar10 = (undefined4 *)(lVar27 + 0x30 + lVar22);
          *puVar10 = local_d8._0_4_;
          puVar10[1] = local_d8._4_4_;
          puVar10[2] = local_d8._8_4_;
          puVar10[3] = local_d8._12_4_;
          puVar10 = (undefined4 *)(lVar27 + 0x20 + lVar22);
          *puVar10 = local_e8._0_4_;
          puVar10[1] = local_e8._4_4_;
          puVar10[2] = local_e8._8_4_;
          puVar10[3] = local_e8._12_4_;
          puVar9 = (undefined8 *)(lVar27 + 0x10 + lVar22);
          *puVar9 = local_f8._0_8_;
          puVar9[1] = local_f8._8_8_;
          *(undefined8 *)(lVar27 + lVar22) = local_108._0_8_;
          ((undefined8 *)(lVar27 + lVar22))[1] = local_108._8_8_;
          plVar18[5] = local_68 + 1;
          if ((ulonglong)plVar18[10] <= uVar24) {
            local_49 = 0;
            local_4a = 0;
                    /* WARNING: Subroutine does not return */
            FUN_180201d02(uVar24,plVar18[10],&PTR_s_C__Users_burne__cargo_registry_s_180253140);
          }
          lVar22 = plVar18[9];
          *(short *)(lVar22 + uVar24 * 4) = (short)local_68;
          *(ushort *)(lVar22 + 2 + uVar24 * 4) = uVar31;
          uVar21 = 0;
        }
        else {
          local_58 = pppppppbVar23;
          (**(code **)(lVar22 + 0x20))();
          uVar21 = CONCAT71((int7)((ulonglong)pppppppbVar23 >> 8),2);
          if (local_60 != 0) {
            local_49 = 0;
            local_4a = 0;
            (**(code **)(local_60 + 0x20))(local_58,local_80,local_70);
          }
        }
        goto LAB_180146a5d;
      }
      uVar14 = *(ushort *)(lVar15 + 2 + uVar24 * 4);
      if (((int)uVar24 - ((uint)uVar14 & (uint)uVar25) & (uint)uVar25) < uVar26) {
        local_120 = (int)lVar22;
        pppppppbStack_b0 = (byte *******)local_78[3];
        lVar22 = *local_98;
        local_58 = pppppppbStack_b0;
        if (local_68 < 0x8000) {
          local_d8._8_8_ = local_98[4];
          local_c8 = local_60;
          pvStack_c0 = local_80;
          local_b8 = local_70;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = local_108._8_8_;
          local_108 = auVar17 << 0x40;
          local_e8 = *(undefined1 (*) [16])(local_98 + 1);
          local_f8._8_8_ = lVar22;
          local_d8._0_8_ = local_98[3];
          if (local_68 == local_110[3]) {
            FUN_1801fa370(local_110 + 3);
            lVar27 = plVar18[4];
          }
          lVar22 = local_68 * 0x68;
          *(ulonglong *)(lVar27 + 0x60 + lVar22) = CONCAT62(uStack_a6,local_a8);
          psVar11 = (size_t *)(lVar27 + 0x50 + lVar22);
          *psVar11 = local_b8;
          psVar11[1] = (size_t)pppppppbStack_b0;
          plVar12 = (longlong *)(lVar27 + 0x40 + lVar22);
          *plVar12 = local_c8;
          plVar12[1] = (longlong)pvStack_c0;
          plVar12 = (longlong *)(lVar27 + 0x30 + lVar22);
          *plVar12 = local_d8._0_8_;
          plVar12[1] = local_d8._8_8_;
          puVar9 = (undefined8 *)(lVar27 + 0x20 + lVar22);
          *puVar9 = local_e8._0_8_;
          puVar9[1] = local_e8._8_8_;
          puVar9 = (undefined8 *)(lVar27 + 0x10 + lVar22);
          *puVar9 = local_f8._0_8_;
          puVar9[1] = local_f8._8_8_;
          *(undefined8 *)(lVar27 + lVar22) = local_108._0_8_;
          ((undefined8 *)(lVar27 + lVar22))[1] = local_108._8_8_;
          plVar18[5] = local_68 + 1;
          lVar22 = plVar18[9];
          uVar21 = plVar18[10];
          uVar25 = 0;
          if (uVar21 <= uVar24) {
            uVar24 = 0;
          }
          while( true ) {
            if (uVar21 == 0) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            uVar31 = *(ushort *)(lVar22 + uVar24 * 4);
            if (uVar31 == 0xffff) break;
            uVar25 = uVar25 + 1;
            uVar14 = *(ushort *)(lVar22 + 2 + uVar24 * 4);
            *(short *)(lVar22 + uVar24 * 4) = (short)local_68;
            *(short *)(lVar22 + 2 + uVar24 * 4) = (short)uVar32;
            uVar24 = uVar24 + 1;
            uVar32 = (uint)uVar14;
            local_68 = (ulonglong)uVar31;
            if (uVar21 <= uVar24) {
              uVar24 = 0;
            }
          }
          *(short *)(lVar22 + uVar24 * 4) = (short)local_68;
          *(short *)(lVar22 + 2 + uVar24 * 4) = (short)uVar32;
          uVar21 = 0;
          if ((local_120 != 2 && 0x1ff < uVar26 || 0x7f < uVar25) && (*plVar18 == 0)) {
            *plVar18 = 1;
            uVar21 = 0;
          }
        }
        else {
          (**(code **)(lVar22 + 0x20))();
          uVar21 = CONCAT71((int7)(uVar21 >> 8),2);
          if (local_60 != 0) {
            local_49 = 0;
            local_4a = 0;
            (**(code **)(local_60 + 0x20))(local_58,local_80,local_70);
          }
        }
        goto LAB_180146a5d;
      }
      if (uVar14 == uVar31) {
        if (local_68 <= uVar29) {
          local_49 = 1;
          local_4a = 1;
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar29,local_68,&PTR_s_C__Users_burne__cargo_registry_s_180253128);
        }
        lVar33 = uVar29 * 0x68;
        lVar28 = *(longlong *)(lVar27 + 0x40 + lVar33);
        if ((local_60 == 0) != (lVar28 != 0)) {
          lVar8 = lVar27 + lVar33;
          if (lVar28 == 0) {
            if (*(char *)(lVar8 + 0x48) == (char)local_58) goto LAB_1801465d8;
          }
          else if (*(size_t *)(lVar8 + 0x50) == local_70) {
            local_90 = lVar27;
            local_88 = uVar25;
            iVar20 = memcmp(*(void **)(lVar8 + 0x48),local_80,local_70);
            uVar25 = local_88;
            lVar27 = local_90;
            if (iVar20 == 0) goto LAB_1801465d8;
          }
        }
      }
      uVar26 = uVar26 + 1;
      uVar24 = uVar24 + 1;
    } while( true );
  }
  local_4b = 1;
  (**(code **)(*local_98 + 0x20))(local_98[3],local_98[1],local_98[2]);
  uVar21 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),2);
  if (*local_78 != 0) {
    (**(code **)(*local_78 + 0x20))(local_78[3],local_78[1],local_78[2]);
  }
LAB_180146a5d:
  return uVar21 & 0xffffffff;
LAB_1801465d8:
  lVar15 = local_60;
  plVar18 = local_110;
  puVar9 = (undefined8 *)(lVar27 + lVar33);
  local_88 = *local_98;
  local_58 = (byte *******)local_98[1];
  local_68 = local_98[2];
  local_90 = local_98[3];
  lVar22 = local_98[4];
  if (*(int *)(lVar27 + lVar33) == 1) {
    uVar21 = puVar9[2];
    uVar24 = local_110[8];
    if (uVar24 == local_110[6]) {
      FUN_1801f8b00(local_110 + 6);
    }
    lVar27 = plVar18[7];
    *(undefined8 *)(lVar27 + uVar24 * 0x48) = 1;
    *(ulonglong *)(lVar27 + 8 + uVar24 * 0x48) = uVar21;
    *(undefined8 *)(lVar27 + 0x10 + uVar24 * 0x48) = 0;
    *(ulonglong *)(lVar27 + 0x18 + uVar24 * 0x48) = uVar29;
    *(ulonglong *)(lVar27 + 0x20 + uVar24 * 0x48) = local_88;
    *(byte ********)(lVar27 + 0x28 + uVar24 * 0x48) = local_58;
    *(ulonglong *)(lVar27 + 0x30 + uVar24 * 0x48) = local_68;
    *(longlong *)(lVar27 + 0x38 + uVar24 * 0x48) = local_90;
    *(longlong *)(lVar27 + 0x40 + uVar24 * 0x48) = lVar22;
    plVar18[8] = uVar24 + 1;
    if (uVar24 < uVar21) {
      local_49 = 1;
      local_4a = 0;
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar21,uVar24 + 1,&PTR_s_C__Users_burne__cargo_registry_s_180253110);
    }
    lVar22 = plVar18[7];
    *(undefined8 *)(lVar22 + 0x10 + uVar21 * 0x48) = 1;
    *(ulonglong *)(lVar22 + 0x18 + uVar21 * 0x48) = uVar24;
    *puVar9 = 1;
    puVar9[2] = uVar24;
  }
  else {
    uVar21 = local_110[8];
    if (uVar21 == local_110[6]) {
      FUN_1801f8b00(local_110 + 6);
    }
    lVar27 = plVar18[7];
    *(undefined8 *)(lVar27 + uVar21 * 0x48) = 0;
    *(ulonglong *)(lVar27 + 8 + uVar21 * 0x48) = uVar29;
    *(undefined8 *)(lVar27 + 0x10 + uVar21 * 0x48) = 0;
    *(ulonglong *)(lVar27 + 0x18 + uVar21 * 0x48) = uVar29;
    *(ulonglong *)(lVar27 + 0x20 + uVar21 * 0x48) = local_88;
    *(byte ********)(lVar27 + 0x28 + uVar21 * 0x48) = local_58;
    *(ulonglong *)(lVar27 + 0x30 + uVar21 * 0x48) = local_68;
    *(longlong *)(lVar27 + 0x38 + uVar21 * 0x48) = local_90;
    *(longlong *)(lVar27 + 0x40 + uVar21 * 0x48) = lVar22;
    plVar18[8] = uVar21 + 1;
    *puVar9 = 1;
    puVar9[1] = uVar21;
    puVar9[2] = uVar21;
  }
  uVar21 = CONCAT71((int7)(uVar21 >> 8),1);
  if (lVar15 != 0) {
    (**(code **)(lVar15 + 0x20))(local_78[3],local_80,local_70);
  }
  goto LAB_180146a5d;
}


