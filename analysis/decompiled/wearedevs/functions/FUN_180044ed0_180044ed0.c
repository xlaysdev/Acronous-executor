/* FUN_180044ed0 @ 180044ed0 */

/* WARNING: Type propagation algorithm not settling */

void FUN_180044ed0(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
  undefined8 *puVar13;
  byte bVar14;
  undefined1 uVar15;
  ushort uVar16;
  ushort uVar17;
  longlong lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  longlong *plVar23;
  char cVar24;
  int iVar25;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar26;
  longlong lVar27;
  byte *******pppppppbVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  void *pvVar31;
  ulonglong uVar32;
  longlong lVar33;
  longlong lVar34;
  size_t sVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  longlong lVar38;
  longlong lVar39;
  ushort uVar40;
  uint uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  int local_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  longlong local_e8;
  void *pvStack_e0;
  size_t local_d8;
  byte *******pppppppbStack_d0;
  ushort local_c8;
  undefined6 uStack_c6;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  byte *******local_a0;
  longlong *local_98;
  undefined8 *local_90;
  longlong *local_88;
  longlong local_80;
  void *local_78;
  size_t local_70;
  longlong *local_68;
  ulonglong local_60;
  byte *******local_58;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_49 = 1;
  local_4a = 1;
  local_88 = param_4;
  local_68 = param_3;
  cVar24 = FUN_180053cd0(param_2);
  plVar23 = local_68;
  if (cVar24 == '\0') {
    lVar27 = *param_2;
    local_90 = param_1;
    if (lVar27 == 2) {
      local_108 = *(undefined1 (*) [16])(param_2 + 1);
      auVar42._0_8_ = local_108._0_8_;
      auVar42._8_4_ = local_108._0_4_;
      auVar42._12_4_ = local_108._4_4_;
      local_128 = auVar42 ^ (undefined1  [16])s_uespemosarenegyl_180204b70;
      auVar43._0_8_ = local_108._8_8_;
      auVar43._8_4_ = local_108._8_4_;
      auVar43._12_4_ = local_108._12_4_;
      local_118 = auVar43 ^ (undefined1  [16])s_modnarodsetybdet_180204b80;
      local_f8 = (undefined1  [16])0x0;
      local_e8 = 0;
      lVar38 = *local_68;
      local_a0 = (byte *******)(ulonglong)(lVar38 != 0);
      FUN_1800271e0(local_128,&local_a0,8);
      if (lVar38 == 0) {
        local_a0 = (byte *******)(ulonglong)*(byte *)(plVar23 + 1);
        pppppppbVar28 = (byte *******)&local_a0;
        lVar33 = 8;
        local_58 = local_a0;
      }
      else {
        pppppppbVar28 = (byte *******)plVar23[1];
        lVar33 = plVar23[2];
        local_58 = pppppppbVar28;
      }
      FUN_1800271e0(local_128,pppppppbVar28,lVar33);
      uVar37 = local_f8._0_8_ << 0x38 | local_f8._8_8_;
      uVar29 = local_118._8_8_ ^ uVar37;
      uVar36 = local_128._0_8_ + local_118._0_8_;
      uVar26 = (local_118._0_8_ << 0xd | (ulonglong)local_118._0_8_ >> 0x33) ^ uVar36;
      uVar30 = (uVar29 << 0x10 | uVar29 >> 0x30) ^ local_128._8_8_ + uVar29;
      uVar32 = local_128._8_8_ + uVar29 + uVar26;
      uVar36 = (uVar36 << 0x20 | uVar36 >> 0x20) + uVar30;
      uVar26 = (uVar26 << 0x11 | uVar26 >> 0x2f) ^ uVar32;
      uVar29 = (uVar30 << 0x15 | uVar30 >> 0x2b) ^ uVar36;
      uVar36 = (uVar36 ^ uVar37) + uVar26;
      uVar30 = ((uVar32 << 0x20 | uVar32 >> 0x20) ^ 0xff) + uVar29;
      uVar26 = (uVar26 << 0xd | uVar26 >> 0x33) ^ uVar36;
      uVar29 = (uVar29 << 0x10 | uVar29 >> 0x30) ^ uVar30;
      uVar30 = uVar30 + uVar26;
      uVar32 = (uVar36 << 0x20 | uVar36 >> 0x20) + uVar29;
      uVar26 = (uVar26 << 0x11 | uVar26 >> 0x2f) ^ uVar30;
      uVar29 = (uVar29 << 0x15 | uVar29 >> 0x2b) ^ uVar32;
      uVar32 = uVar32 + uVar26;
      uVar30 = (uVar30 << 0x20 | uVar30 >> 0x20) + uVar29;
      uVar26 = (uVar26 << 0xd | uVar26 >> 0x33) ^ uVar32;
      uVar29 = (uVar29 << 0x10 | uVar29 >> 0x30) ^ uVar30;
      uVar30 = uVar30 + uVar26;
      uVar32 = (uVar32 << 0x20 | uVar32 >> 0x20) + uVar29;
      uVar26 = (uVar26 << 0x11 | uVar26 >> 0x2f) ^ uVar30;
      uVar29 = (uVar29 << 0x15 | uVar29 >> 0x2b) ^ uVar32;
      lVar33 = (uVar30 << 0x20 | uVar30 >> 0x20) + uVar29;
      uVar26 = (uVar26 << 0xd | uVar26 >> 0x33) ^ uVar32 + uVar26;
      lVar34 = lVar33 + uVar26;
      uVar41 = (uint)((ulonglong)lVar34 >> 0x20) ^ (uint)lVar34 ^
               ((uint)(uVar29 >> 0x10) ^ (uint)((ulonglong)lVar33 >> 0x20)) >> 0xb ^
               (uint)(uVar26 >> 0x2f);
    }
    else {
      lVar38 = *local_68;
      uVar41 = (lVar38 != 0 ^ 0x84222325) * 0xaef4a21;
      if (lVar38 == 0) {
        local_58 = (byte *******)(ulonglong)*(byte *)(local_68 + 1);
        uVar41 = (*(byte *)(local_68 + 1) ^ 0x281a39c5) * 0xaef4a21;
        lVar38 = 0;
      }
      else {
        local_58 = (byte *******)local_68[1];
        uVar26 = local_68[2];
        if (uVar26 != 0) {
          uVar29 = uVar26 & 7;
          pppppppbVar28 = local_58;
          if (uVar29 != 0) {
            do {
              bVar14 = *(byte *)pppppppbVar28;
              pppppppbVar28 = (byte *******)((longlong)pppppppbVar28 + 1);
              uVar41 = (bVar14 ^ uVar41) * 0x1b3;
              uVar29 = uVar29 - 1;
            } while (uVar29 != 0);
          }
          if (7 < uVar26) {
            do {
              bVar14 = *(byte *)pppppppbVar28;
              pbVar1 = (byte *)((longlong)pppppppbVar28 + 1);
              pbVar2 = (byte *)((longlong)pppppppbVar28 + 2);
              pbVar3 = (byte *)((longlong)pppppppbVar28 + 3);
              pbVar4 = (byte *)((longlong)pppppppbVar28 + 4);
              pbVar5 = (byte *)((longlong)pppppppbVar28 + 5);
              pbVar6 = (byte *)((longlong)pppppppbVar28 + 6);
              pbVar7 = (byte *)((longlong)pppppppbVar28 + 7);
              pppppppbVar28 = pppppppbVar28 + 1;
              uVar41 = ((uint)*pbVar7 ^
                       ((uint)*pbVar6 ^
                       ((uint)*pbVar5 ^
                       ((uint)*pbVar4 ^
                       ((uint)*pbVar3 ^
                       ((uint)*pbVar2 ^ ((uint)*pbVar1 ^ (bVar14 ^ uVar41) * 0x1b3) * 0x1b3) * 0x1b3
                       ) * 0x1b3) * 0x1b3) * 0x1b3) * 0x1b3) * 0x1b3;
            } while (pppppppbVar28 != (byte *******)((longlong)local_58 + uVar26));
          }
        }
      }
    }
    uVar41 = uVar41 & 0x7fff;
    uVar16 = *(ushort *)(param_2 + 0xb);
    uVar29 = (ulonglong)(uVar41 & uVar16);
    uVar26 = param_2[10];
    lVar33 = param_2[9];
    lVar34 = param_2[4];
    local_60 = param_2[5];
    local_78 = (void *)plVar23[1];
    local_70 = plVar23[2];
    uVar30 = 0;
    local_98 = param_2;
    local_80 = lVar38;
    do {
      plVar23 = local_98;
      if (uVar26 <= uVar29) {
        uVar29 = 0;
      }
      if (uVar26 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar32 = (ulonglong)*(ushort *)(lVar33 + uVar29 * 4);
      uVar40 = (ushort)uVar41;
      if (uVar32 == 0xffff) {
        pppppppbStack_d0 = (byte *******)local_68[3];
        lVar27 = *local_88;
        if (0x7fff < local_60) {
          local_58 = pppppppbStack_d0;
          (**(code **)(lVar27 + 0x20))();
          puVar13 = local_90;
          if (local_80 != 0) {
            local_49 = 0;
            local_4a = 0;
            (**(code **)(local_80 + 0x20))(local_58,local_78,local_70);
          }
          *(undefined1 *)(puVar13 + 4) = 3;
          return;
        }
        local_e8 = local_80;
        pvStack_e0 = local_78;
        local_d8 = local_70;
        local_f8._8_8_ = local_88[4];
        local_f8._0_8_ = local_88[3];
        auVar22._8_8_ = 0;
        auVar22._0_8_ = local_128._8_8_;
        local_128 = auVar22 << 0x40;
        local_108 = *(undefined1 (*) [16])(local_88 + 1);
        local_c8 = uVar40;
        local_118._8_8_ = lVar27;
        if (local_60 == local_98[3]) {
          local_58 = pppppppbStack_d0;
          FUN_1801fa370(local_98 + 3);
          lVar34 = plVar23[4];
        }
        lVar27 = local_60 * 0x68;
        *(ulonglong *)(lVar34 + 0x60 + lVar27) = CONCAT62(uStack_c6,local_c8);
        psVar11 = (size_t *)(lVar34 + 0x50 + lVar27);
        *psVar11 = local_d8;
        psVar11[1] = (size_t)pppppppbStack_d0;
        plVar12 = (longlong *)(lVar34 + 0x40 + lVar27);
        *plVar12 = local_e8;
        plVar12[1] = (longlong)pvStack_e0;
        puVar10 = (undefined4 *)(lVar34 + 0x30 + lVar27);
        *puVar10 = local_f8._0_4_;
        puVar10[1] = local_f8._4_4_;
        puVar10[2] = local_f8._8_4_;
        puVar10[3] = local_f8._12_4_;
        puVar10 = (undefined4 *)(lVar34 + 0x20 + lVar27);
        *puVar10 = local_108._0_4_;
        puVar10[1] = local_108._4_4_;
        puVar10[2] = local_108._8_4_;
        puVar10[3] = local_108._12_4_;
        puVar13 = (undefined8 *)(lVar34 + 0x10 + lVar27);
        *puVar13 = local_118._0_8_;
        puVar13[1] = local_118._8_8_;
        *(undefined8 *)(lVar34 + lVar27) = local_128._0_8_;
        ((undefined8 *)(lVar34 + lVar27))[1] = local_128._8_8_;
        plVar23[5] = local_60 + 1;
        if ((ulonglong)plVar23[10] <= uVar29) {
          local_49 = 0;
          local_4a = 0;
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar29,plVar23[10],&PTR_s_C__Users_burne__cargo_registry_s_180208328);
        }
        lVar27 = plVar23[9];
        *(short *)(lVar27 + uVar29 * 4) = (short)local_60;
        *(ushort *)(lVar27 + 2 + uVar29 * 4) = uVar40;
LAB_1800455e6:
        *(undefined1 *)(local_90 + 4) = 2;
        return;
      }
      uVar17 = *(ushort *)(lVar33 + 2 + uVar29 * 4);
      if (((int)uVar29 - (uint)(uVar17 & uVar16) & (uint)uVar16) < uVar30) {
        local_130 = (int)lVar27;
        local_49 = 0;
        local_4a = 0;
        lVar27 = FUN_180046190(local_98,local_68,local_88,uVar41,uVar29,
                               local_130 != 2 && 0x1ff < uVar30);
        if (lVar27 != 0) {
          *(undefined1 *)(local_90 + 4) = 3;
          return;
        }
        goto LAB_1800455e6;
      }
      if (uVar17 == uVar40) {
        if (local_60 <= uVar32) {
          local_49 = 1;
          local_4a = 1;
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar32,local_60,&PTR_s_C__Users_burne__cargo_registry_s_180208310);
        }
        lVar39 = uVar32 * 0x68;
        lVar18 = *(longlong *)(lVar34 + 0x40 + lVar39);
        if ((lVar38 == 0) != (lVar18 != 0)) {
          lVar8 = lVar34 + lVar39;
          if (lVar18 == 0) {
            if (*(char *)(lVar8 + 0x48) == (char)local_58) goto LAB_18004539d;
          }
          else if (*(size_t *)(lVar8 + 0x50) == local_70) {
            local_b8 = lVar34;
            iVar25 = memcmp(*(void **)(lVar8 + 0x48),local_78,local_70);
            lVar38 = local_80;
            lVar34 = local_b8;
            if (iVar25 == 0) goto LAB_18004539d;
          }
        }
      }
      uVar30 = uVar30 + 1;
      uVar29 = uVar29 + 1;
    } while( true );
  }
  *(undefined1 *)(param_1 + 4) = 3;
  local_4b = 1;
  (**(code **)(*local_88 + 0x20))(local_88[3],local_88[1],local_88[2]);
  if (*local_68 == 0) {
    return;
  }
  lVar27 = local_68[3];
  UNRECOVERED_JUMPTABLE = *(code **)(*local_68 + 0x20);
  pvVar31 = (void *)local_68[1];
  sVar35 = local_68[2];
LAB_180044f68:
                    /* WARNING: Could not recover jumptable at 0x000180044f7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar27,pvVar31,sVar35);
  return;
LAB_18004539d:
  puVar13 = local_90;
  plVar23 = local_98;
  lVar27 = local_88[4];
  uVar26 = local_60;
  uVar29 = local_88[2];
  pppppppbVar28 = (byte *******)local_88[3];
  uVar44 = (int)*local_88;
  uVar45 = *(undefined4 *)((longlong)local_88 + 4);
  uVar46 = (int)local_88[1];
  uVar47 = *(undefined4 *)((longlong)local_88 + 0xc);
  if (*(char *)(lVar34 + lVar39) != '\0') {
    local_b8 = *local_88;
    uStack_b0 = (int)local_88[1];
    uStack_ac = *(undefined4 *)((longlong)local_88 + 0xc);
    local_60 = local_88[2];
    local_58 = (byte *******)local_88[3];
    FUN_180054460(local_98,*(undefined8 *)(lVar34 + lVar39 + 8));
    uVar26 = plVar23[5];
    uVar29 = local_60;
    pppppppbVar28 = local_58;
    uVar44 = (undefined4)local_b8;
    uVar45 = local_b8._4_4_;
    uVar46 = uStack_b0;
    uVar47 = uStack_ac;
  }
  if (uVar26 <= uVar32) {
    local_b8 = CONCAT44(uVar45,uVar44);
    uStack_b0 = uVar46;
    uStack_ac = uVar47;
    local_60 = uVar29;
    local_58 = pppppppbVar28;
                    /* WARNING: Subroutine does not return */
    FUN_180201d02(uVar32,uVar26,&PTR_s_C__Users_burne__cargo_registry_s_180208340);
  }
  lVar33 = plVar23[4];
  puVar9 = (undefined8 *)(lVar33 + 0x18 + lVar39);
  uVar19 = *puVar9;
  uVar20 = puVar9[1];
  puVar9 = (undefined8 *)(lVar33 + 0x28 + lVar39);
  uVar21 = puVar9[1];
  puVar13[2] = *puVar9;
  puVar13[3] = uVar21;
  *puVar13 = uVar19;
  puVar13[1] = uVar20;
  uVar15 = *(undefined1 *)(lVar33 + 0x38 + lVar39);
  *(undefined4 *)((longlong)puVar13 + 0x24) = *(undefined4 *)(lVar33 + 0x3c + lVar39);
  *(undefined4 *)((longlong)puVar13 + 0x21) = *(undefined4 *)(lVar33 + 0x39 + lVar39);
  puVar10 = (undefined4 *)(lVar33 + 0x18 + lVar39);
  *puVar10 = uVar44;
  puVar10[1] = uVar45;
  puVar10[2] = uVar46;
  puVar10[3] = uVar47;
  *(ulonglong *)(lVar33 + 0x28 + lVar39) = uVar29;
  *(byte ********)(lVar33 + 0x30 + lVar39) = pppppppbVar28;
  *(longlong *)(lVar33 + 0x38 + lVar39) = lVar27;
  *(undefined1 *)(puVar13 + 4) = uVar15;
  if (lVar38 == 0) {
                    /* WARNING: Read-only address (ram,0x000180204b70) is written */
                    /* WARNING: Read-only address (ram,0x000180204b80) is written */
    return;
  }
  lVar27 = local_68[3];
  UNRECOVERED_JUMPTABLE = *(code **)(lVar38 + 0x20);
  pvVar31 = local_78;
  sVar35 = local_70;
  goto LAB_180044f68;
}


