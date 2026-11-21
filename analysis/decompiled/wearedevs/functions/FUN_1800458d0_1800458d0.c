/* FUN_1800458d0 @ 1800458d0 */

/* WARNING: Type propagation algorithm not settling */

void FUN_1800458d0(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

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
  byte bVar11;
  undefined1 uVar12;
  ushort uVar13;
  ushort uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  longlong *plVar19;
  char cVar20;
  int iVar21;
  byte *******pppppppbVar22;
  ulonglong uVar23;
  longlong lVar24;
  byte *******pppppppbVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  undefined8 *puVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  longlong lVar35;
  undefined8 unaff_R13;
  ushort uVar36;
  uint uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  int local_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  byte *******local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ushort local_c8;
  undefined6 uStack_c6;
  byte *******local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint local_94;
  undefined8 *local_90;
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  longlong *local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_49 = 1;
  local_80 = param_4;
  cVar20 = FUN_180053cd0(param_2);
  if (cVar20 != '\0') {
    *(undefined1 *)(param_1 + 4) = 3;
                    /* WARNING: Could not recover jumptable at 0x000180045944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*local_80 + 0x20))(local_80[3],local_80[1],local_80[2]);
    return;
  }
  lVar24 = *param_2;
  local_90 = param_1;
  local_58 = param_3;
  if (lVar24 == 2) {
    local_108 = *(undefined1 (*) [16])(param_2 + 1);
    auVar38._0_8_ = local_108._0_8_;
    auVar38._8_4_ = local_108._0_4_;
    auVar38._12_4_ = local_108._4_4_;
    local_128 = auVar38 ^ (undefined1  [16])s_uespemosarenegyl_180204b70;
    auVar39._0_8_ = local_108._8_8_;
    auVar39._8_4_ = local_108._8_4_;
    auVar39._12_4_ = local_108._12_4_;
    local_118 = auVar39 ^ (undefined1  [16])s_modnarodsetybdet_180204b80;
    local_f8 = (undefined1  [16])0x0;
    local_e8 = (byte *******)0x0;
    lVar28 = *param_3;
    local_b8 = (byte *******)(ulonglong)(lVar28 != 0);
    FUN_1800271e0(local_128,&local_b8,8);
    if (lVar28 == 0) {
      pppppppbVar22 = (byte *******)(ulonglong)*(byte *)(param_3 + 1);
      pppppppbVar25 = (byte *******)&local_b8;
      lVar30 = 8;
      local_b8 = pppppppbVar22;
    }
    else {
      pppppppbVar25 = (byte *******)param_3[1];
      lVar30 = param_3[2];
      pppppppbVar22 = pppppppbVar25;
    }
    FUN_1800271e0(local_128,pppppppbVar25,lVar30);
    uVar34 = local_f8._0_8_ << 0x38 | local_f8._8_8_;
    uVar26 = local_118._8_8_ ^ uVar34;
    uVar33 = local_128._0_8_ + local_118._0_8_;
    uVar23 = (local_118._0_8_ << 0xd | (ulonglong)local_118._0_8_ >> 0x33) ^ uVar33;
    uVar27 = (uVar26 << 0x10 | uVar26 >> 0x30) ^ local_128._8_8_ + uVar26;
    uVar29 = local_128._8_8_ + uVar26 + uVar23;
    uVar33 = (uVar33 << 0x20 | uVar33 >> 0x20) + uVar27;
    uVar23 = (uVar23 << 0x11 | uVar23 >> 0x2f) ^ uVar29;
    uVar26 = (uVar27 << 0x15 | uVar27 >> 0x2b) ^ uVar33;
    uVar33 = (uVar33 ^ uVar34) + uVar23;
    uVar27 = ((uVar29 << 0x20 | uVar29 >> 0x20) ^ 0xff) + uVar26;
    uVar23 = (uVar23 << 0xd | uVar23 >> 0x33) ^ uVar33;
    uVar26 = (uVar26 << 0x10 | uVar26 >> 0x30) ^ uVar27;
    uVar27 = uVar27 + uVar23;
    uVar29 = (uVar33 << 0x20 | uVar33 >> 0x20) + uVar26;
    uVar23 = (uVar23 << 0x11 | uVar23 >> 0x2f) ^ uVar27;
    uVar26 = (uVar26 << 0x15 | uVar26 >> 0x2b) ^ uVar29;
    uVar29 = uVar29 + uVar23;
    uVar27 = (uVar27 << 0x20 | uVar27 >> 0x20) + uVar26;
    uVar23 = (uVar23 << 0xd | uVar23 >> 0x33) ^ uVar29;
    uVar26 = (uVar26 << 0x10 | uVar26 >> 0x30) ^ uVar27;
    uVar27 = uVar27 + uVar23;
    uVar29 = (uVar29 << 0x20 | uVar29 >> 0x20) + uVar26;
    uVar23 = (uVar23 << 0x11 | uVar23 >> 0x2f) ^ uVar27;
    uVar26 = (uVar26 << 0x15 | uVar26 >> 0x2b) ^ uVar29;
    lVar30 = (uVar27 << 0x20 | uVar27 >> 0x20) + uVar26;
    uVar23 = (uVar23 << 0xd | uVar23 >> 0x33) ^ uVar29 + uVar23;
    lVar31 = lVar30 + uVar23;
    uVar37 = (uint)((ulonglong)lVar31 >> 0x20) ^ (uint)lVar31 ^
             ((uint)(uVar26 >> 0x10) ^ (uint)((ulonglong)lVar30 >> 0x20)) >> 0xb ^
             (uint)(uVar23 >> 0x2f);
    uVar23 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),lVar28 == 0) & 0xffffffff;
    local_78 = pppppppbVar22;
  }
  else {
    uVar37 = (*param_3 != 0 ^ 0x84222325) * 0xaef4a21;
    if (*param_3 == 0) {
      local_78 = (byte *******)(ulonglong)*(byte *)(param_3 + 1);
      uVar37 = (*(byte *)(param_3 + 1) ^ 0x281a39c5) * 0xaef4a21;
      uVar23 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
    }
    else {
      local_78 = (byte *******)param_3[1];
      uVar23 = param_3[2];
      if (uVar23 != 0) {
        uVar26 = uVar23 & 7;
        pppppppbVar25 = local_78;
        if (uVar26 != 0) {
          do {
            bVar11 = *(byte *)pppppppbVar25;
            pppppppbVar25 = (byte *******)((longlong)pppppppbVar25 + 1);
            uVar37 = (bVar11 ^ uVar37) * 0x1b3;
            uVar26 = uVar26 - 1;
          } while (uVar26 != 0);
        }
        if (7 < uVar23) {
          do {
            bVar11 = *(byte *)pppppppbVar25;
            pbVar1 = (byte *)((longlong)pppppppbVar25 + 1);
            pbVar2 = (byte *)((longlong)pppppppbVar25 + 2);
            pbVar3 = (byte *)((longlong)pppppppbVar25 + 3);
            pbVar4 = (byte *)((longlong)pppppppbVar25 + 4);
            pbVar5 = (byte *)((longlong)pppppppbVar25 + 5);
            pbVar6 = (byte *)((longlong)pppppppbVar25 + 6);
            pbVar7 = (byte *)((longlong)pppppppbVar25 + 7);
            pppppppbVar25 = pppppppbVar25 + 1;
            uVar37 = ((uint)*pbVar7 ^
                     ((uint)*pbVar6 ^
                     ((uint)*pbVar5 ^
                     ((uint)*pbVar4 ^
                     ((uint)*pbVar3 ^
                     ((uint)*pbVar2 ^ ((uint)*pbVar1 ^ (bVar11 ^ uVar37) * 0x1b3) * 0x1b3) * 0x1b3)
                     * 0x1b3) * 0x1b3) * 0x1b3) * 0x1b3) * 0x1b3;
          } while (pppppppbVar25 != (byte *******)((longlong)local_78 + uVar23));
        }
      }
      uVar23 = 0;
    }
  }
  uVar37 = uVar37 & 0x7fff;
  uVar13 = *(ushort *)(param_2 + 0xb);
  uVar29 = (ulonglong)(uVar37 & uVar13);
  uVar26 = param_2[10];
  lVar28 = param_2[9];
  lVar30 = param_2[4];
  local_60 = param_2[5];
  uVar27 = 0;
  local_88 = param_2;
  do {
    if (uVar26 <= uVar29) {
      uVar29 = 0;
    }
    if (uVar26 == 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    uVar33 = (ulonglong)*(ushort *)(lVar28 + uVar29 * 4);
    uVar36 = (ushort)uVar37;
    if (uVar33 == 0xffff) {
      local_49 = 1;
      FUN_1801ae640(&local_b8,local_58);
      plVar19 = local_88;
      puVar32 = local_90;
      lVar24 = *local_80;
      local_58 = (longlong *)local_88[5];
      if (local_58 < 0x8000) {
        local_d8 = local_a8;
        uStack_d0 = uStack_a0;
        local_e8 = local_b8;
        uStack_e0 = uStack_b0;
        local_f8._8_8_ = local_80[4];
        local_f8._0_8_ = local_80[3];
        auVar18._8_8_ = 0;
        auVar18._0_8_ = local_128._8_8_;
        local_128 = auVar18 << 0x40;
        local_108 = *(undefined1 (*) [16])(local_80 + 1);
        local_c8 = uVar36;
        local_118._8_8_ = lVar24;
        if (local_58 == (longlong *)local_88[3]) {
          FUN_1801fa370(local_88 + 3);
        }
        lVar24 = plVar19[4];
        lVar28 = (longlong)local_58 * 0x68;
        *(ulonglong *)(lVar24 + 0x60 + lVar28) = CONCAT62(uStack_c6,local_c8);
        puVar9 = (undefined8 *)(lVar24 + 0x50 + lVar28);
        *puVar9 = local_d8;
        puVar9[1] = uStack_d0;
        puVar9 = (undefined8 *)(lVar24 + 0x40 + lVar28);
        *puVar9 = local_e8;
        puVar9[1] = uStack_e0;
        puVar10 = (undefined4 *)(lVar24 + 0x30 + lVar28);
        *puVar10 = local_f8._0_4_;
        puVar10[1] = local_f8._4_4_;
        puVar10[2] = local_f8._8_4_;
        puVar10[3] = local_f8._12_4_;
        puVar10 = (undefined4 *)(lVar24 + 0x20 + lVar28);
        *puVar10 = local_108._0_4_;
        puVar10[1] = local_108._4_4_;
        puVar10[2] = local_108._8_4_;
        puVar10[3] = local_108._12_4_;
        puVar9 = (undefined8 *)(lVar24 + 0x10 + lVar28);
        *puVar9 = local_118._0_8_;
        puVar9[1] = local_118._8_8_;
        *(undefined8 *)(lVar24 + lVar28) = local_128._0_8_;
        ((undefined8 *)(lVar24 + lVar28))[1] = local_128._8_8_;
        plVar19[5] = (longlong)local_58 + 1;
        if ((ulonglong)plVar19[10] <= uVar29) {
          local_49 = 0;
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar29,plVar19[10],&PTR_s_C__Users_burne__cargo_registry_s_180208328);
        }
        lVar24 = plVar19[9];
        *(short *)(lVar24 + uVar29 * 4) = (short)local_60;
        *(ushort *)(lVar24 + 2 + uVar29 * 4) = uVar36;
LAB_180045fa6:
        *(undefined1 *)(puVar32 + 4) = 2;
        return;
      }
      (**(code **)(lVar24 + 0x20))();
      if (local_b8 != (byte *******)0x0) {
        local_49 = 0;
        (*(code *)local_b8[4])(uStack_a0,uStack_b0,local_a8);
      }
LAB_180045ede:
      *(undefined1 *)(puVar32 + 4) = 3;
      return;
    }
    uVar14 = *(ushort *)(lVar28 + 2 + uVar29 * 4);
    if (((int)uVar29 - (uint)(uVar14 & uVar13) & (uint)uVar13) < uVar27) {
      local_49 = 1;
      FUN_1801ae640(local_128,local_58);
      puVar32 = local_90;
      local_130 = (int)lVar24;
      local_49 = 0;
      lVar24 = FUN_180046190(local_88,local_128,local_80,uVar37,uVar29,
                             local_130 != 2 && 0x1ff < uVar27);
      if (lVar24 == 0) goto LAB_180045fa6;
      goto LAB_180045ede;
    }
    if (uVar14 == uVar36) {
      if (local_60 <= uVar33) {
        local_49 = 1;
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar33,local_60,&PTR_s_C__Users_burne__cargo_registry_s_180208310);
      }
      lVar35 = uVar33 * 0x68;
      lVar31 = *(longlong *)(lVar30 + 0x40 + lVar35);
      if ((bool)(char)uVar23 != (lVar31 != 0)) {
        lVar8 = lVar30 + lVar35;
        if (lVar31 == 0) {
          if (*(char *)(lVar8 + 0x48) == (char)local_78) {
LAB_180045d41:
            plVar19 = local_88;
            puVar32 = local_90;
            local_78._0_4_ = (undefined4)*local_80;
            local_78._4_4_ = *(undefined4 *)((longlong)local_80 + 4);
            uStack_70 = (undefined4)local_80[1];
            uStack_6c = *(undefined4 *)((longlong)local_80 + 0xc);
            local_58 = (longlong *)local_80[3];
            lVar24 = local_80[4];
            uVar23 = local_60;
            local_60 = local_80[2];
            if (*(char *)(lVar30 + lVar35) != '\0') {
              FUN_180054460(local_88,*(undefined8 *)(lVar30 + lVar35 + 8));
              uVar23 = plVar19[5];
            }
            if (uVar23 <= uVar33) {
                    /* WARNING: Subroutine does not return */
              FUN_180201d02(uVar33,uVar23,&PTR_s_C__Users_burne__cargo_registry_s_180208340);
            }
            lVar28 = plVar19[4];
            puVar9 = (undefined8 *)(lVar28 + 0x18 + lVar35);
            uVar15 = *puVar9;
            uVar16 = puVar9[1];
            puVar9 = (undefined8 *)(lVar28 + 0x28 + lVar35);
            uVar17 = puVar9[1];
            puVar32[2] = *puVar9;
            puVar32[3] = uVar17;
            *puVar32 = uVar15;
            puVar32[1] = uVar16;
            uVar12 = *(undefined1 *)(lVar28 + 0x38 + lVar35);
            *(undefined4 *)((longlong)puVar32 + 0x24) = *(undefined4 *)(lVar28 + 0x3c + lVar35);
            *(undefined4 *)((longlong)puVar32 + 0x21) = *(undefined4 *)(lVar28 + 0x39 + lVar35);
            puVar10 = (undefined4 *)(lVar28 + 0x18 + lVar35);
            *puVar10 = (undefined4)local_78;
            puVar10[1] = local_78._4_4_;
            puVar10[2] = uStack_70;
            puVar10[3] = uStack_6c;
            *(ulonglong *)(lVar28 + 0x28 + lVar35) = local_60;
            *(longlong **)(lVar28 + 0x30 + lVar35) = local_58;
            *(longlong *)(lVar28 + 0x38 + lVar35) = lVar24;
            *(undefined1 *)(puVar32 + 4) = uVar12;
                    /* WARNING: Read-only address (ram,0x000180204b70) is written */
                    /* WARNING: Read-only address (ram,0x000180204b80) is written */
            return;
          }
        }
        else if (*(size_t *)(lVar8 + 0x50) == local_58[2]) {
          local_78 = (byte *******)local_58[1];
          local_94 = (uint)uVar23;
          iVar21 = memcmp(*(void **)(lVar8 + 0x48),local_78,*(size_t *)(lVar8 + 0x50));
          uVar23 = (ulonglong)local_94;
          if (iVar21 == 0) goto LAB_180045d41;
        }
      }
    }
    uVar27 = uVar27 + 1;
    uVar29 = uVar29 + 1;
  } while( true );
}


