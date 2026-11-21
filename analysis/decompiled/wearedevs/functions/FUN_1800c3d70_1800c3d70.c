/* FUN_1800c3d70 @ 1800c3d70 */

void * FUN_1800c3d70(void *param_1,void *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  ushort uVar4;
  ushort uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  void *pvVar10;
  char cVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ushort uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  int local_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  ushort local_a8;
  undefined6 uStack_a6;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 *local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  *(undefined1 *)(param_3 + 4) = 1;
  lVar13 = 2;
  if (2 < *(ulonglong *)((longlong)param_2 + 0x40)) {
    lVar13 = *(ulonglong *)((longlong)param_2 + 0x40) - 3;
  }
  local_60 = param_2;
  if (lVar13 == 0) {
    *(undefined8 *)((longlong)param_2 + 0x40) = 4;
    uVar6 = param_3[1];
    uVar7 = param_3[2];
    uVar8 = param_3[3];
    *(undefined8 *)((longlong)param_2 + 0x48) = *param_3;
    *(undefined8 *)((longlong)param_2 + 0x50) = uVar6;
    *(undefined8 *)((longlong)param_2 + 0x58) = uVar7;
    *(undefined8 *)((longlong)param_2 + 0x60) = uVar8;
    *(undefined8 *)((longlong)param_2 + 0x68) = param_3[4];
  }
  else {
    local_80 = param_3;
    if (lVar13 != 1) {
      plVar1 = (longlong *)((longlong)param_2 + 0x40);
      local_58 = (undefined8 *)*param_3;
      local_70 = param_3[1];
      local_78 = param_3[2];
      local_68 = param_3[3];
      uVar6 = param_3[4];
      local_49 = 1;
      cVar11 = FUN_180053cd0(plVar1);
      if (cVar11 == '\0') {
        lVar13 = *plVar1;
        uVar18 = (uint)CONCAT62((int6)((ulonglong)uVar6 >> 0x10),0x14b6);
        local_98 = uVar6;
        local_90 = plVar1;
        if (lVar13 == 2) {
          local_e8 = *(undefined1 (*) [16])((longlong)local_60 + 0x48);
          auVar23._0_8_ = local_e8._0_8_;
          auVar23._8_4_ = local_e8._0_4_;
          auVar23._12_4_ = local_e8._4_4_;
          local_108 = auVar23 ^ (undefined1  [16])s_uespemosarenegyl_180204b70;
          auVar24._0_8_ = local_e8._8_8_;
          auVar24._8_4_ = local_e8._8_4_;
          auVar24._12_4_ = local_e8._12_4_;
          local_f8 = auVar24 ^ (undefined1  [16])s_modnarodsetybdet_180204b80;
          local_d8 = (undefined1  [16])0x0;
          local_c8 = 0;
          local_88 = 0;
          FUN_1800271e0(local_108,&local_88,8);
          local_88 = 0x33;
          FUN_1800271e0(local_108,&local_88,8);
          uVar22 = local_d8._0_8_ << 0x38 | local_d8._8_8_;
          uVar14 = local_f8._8_8_ ^ uVar22;
          uVar16 = local_108._0_8_ + local_f8._0_8_;
          uVar12 = (local_f8._0_8_ << 0xd | (ulonglong)local_f8._0_8_ >> 0x33) ^ uVar16;
          uVar15 = (uVar14 << 0x10 | uVar14 >> 0x30) ^ local_108._8_8_ + uVar14;
          uVar19 = local_108._8_8_ + uVar14 + uVar12;
          uVar16 = (uVar16 << 0x20 | uVar16 >> 0x20) + uVar15;
          uVar12 = (uVar12 << 0x11 | uVar12 >> 0x2f) ^ uVar19;
          uVar14 = (uVar15 << 0x15 | uVar15 >> 0x2b) ^ uVar16;
          uVar15 = (uVar16 ^ uVar22) + uVar12;
          uVar16 = ((uVar19 << 0x20 | uVar19 >> 0x20) ^ 0xff) + uVar14;
          uVar12 = (uVar12 << 0xd | uVar12 >> 0x33) ^ uVar15;
          uVar14 = (uVar14 << 0x10 | uVar14 >> 0x30) ^ uVar16;
          uVar16 = uVar16 + uVar12;
          uVar15 = (uVar15 << 0x20 | uVar15 >> 0x20) + uVar14;
          uVar12 = (uVar12 << 0x11 | uVar12 >> 0x2f) ^ uVar16;
          uVar14 = (uVar14 << 0x15 | uVar14 >> 0x2b) ^ uVar15;
          uVar15 = uVar15 + uVar12;
          uVar16 = (uVar16 << 0x20 | uVar16 >> 0x20) + uVar14;
          uVar12 = (uVar12 << 0xd | uVar12 >> 0x33) ^ uVar15;
          uVar14 = (uVar14 << 0x10 | uVar14 >> 0x30) ^ uVar16;
          uVar16 = uVar16 + uVar12;
          uVar15 = (uVar15 << 0x20 | uVar15 >> 0x20) + uVar14;
          uVar12 = (uVar12 << 0x11 | uVar12 >> 0x2f) ^ uVar16;
          uVar14 = (uVar14 << 0x15 | uVar14 >> 0x2b) ^ uVar15;
          lVar20 = (uVar16 << 0x20 | uVar16 >> 0x20) + uVar14;
          uVar12 = (uVar12 << 0xd | uVar12 >> 0x33) ^ uVar15 + uVar12;
          lVar21 = lVar20 + uVar12;
          uVar18 = ((uint)lVar21 ^ (uint)((ulonglong)lVar21 >> 0x20) ^
                   ((uint)(uVar14 >> 0x10) ^ (uint)((ulonglong)lVar20 >> 0x20)) >> 0xb ^
                   (uint)(uVar12 >> 0x2f)) & 0x7fff;
        }
        pvVar10 = local_60;
        uVar4 = *(ushort *)((longlong)local_60 + 0x98);
        uVar17 = (ushort)uVar18;
        uVar14 = (ulonglong)(uVar18 & 0xffff & (uint)uVar4);
        lVar20 = *(longlong *)((longlong)local_60 + 0x60);
        uVar12 = *(ulonglong *)((longlong)local_60 + 0x68);
        uVar15 = 0;
        do {
          if (*(ulonglong *)((longlong)local_60 + 0x90) <= uVar14) {
            uVar14 = 0;
          }
          if (*(ulonglong *)((longlong)local_60 + 0x90) == 0) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          uVar16 = (ulonglong)*(ushort *)(*(longlong *)((longlong)local_60 + 0x88) + uVar14 * 4);
          if (uVar16 == 0xffff) {
            if (0x7fff < uVar12) {
              local_49 = 0;
              (*(code *)local_58[4])(local_68,local_70,local_78);
              goto LAB_1800c42d3;
            }
            local_c8 = 0;
            uStack_c0 = 0x33;
            local_b8 = (undefined1  [16])0x0;
            local_f8._8_8_ = local_58;
            local_e8._8_8_ = local_78;
            local_e8._0_8_ = local_70;
            local_d8._8_8_ = local_98;
            local_d8._0_8_ = local_68;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = local_108._8_8_;
            local_108 = auVar9 << 0x40;
            local_a8 = uVar17;
            if (uVar12 == *(ulonglong *)((longlong)local_60 + 0x58)) {
              FUN_1801fa370((longlong)local_60 + 0x58);
              lVar20 = *(longlong *)((longlong)pvVar10 + 0x60);
            }
            lVar13 = uVar12 * 0x68;
            *(ulonglong *)(lVar20 + 0x60 + lVar13) = CONCAT62(uStack_a6,local_a8);
            puVar2 = (undefined8 *)(lVar20 + 0x50 + lVar13);
            *puVar2 = local_b8._0_8_;
            puVar2[1] = local_b8._8_8_;
            puVar2 = (undefined8 *)(lVar20 + 0x40 + lVar13);
            *puVar2 = local_c8;
            puVar2[1] = uStack_c0;
            puVar3 = (undefined4 *)(lVar20 + 0x30 + lVar13);
            *puVar3 = local_d8._0_4_;
            puVar3[1] = local_d8._4_4_;
            puVar3[2] = local_d8._8_4_;
            puVar3[3] = local_d8._12_4_;
            puVar3 = (undefined4 *)(lVar20 + 0x20 + lVar13);
            *puVar3 = local_e8._0_4_;
            puVar3[1] = local_e8._4_4_;
            puVar3[2] = local_e8._8_4_;
            puVar3[3] = local_e8._12_4_;
            puVar2 = (undefined8 *)(lVar20 + 0x10 + lVar13);
            *puVar2 = local_f8._0_8_;
            puVar2[1] = local_f8._8_8_;
            *(undefined8 *)(lVar20 + lVar13) = local_108._0_8_;
            ((undefined8 *)(lVar20 + lVar13))[1] = local_108._8_8_;
            *(ulonglong *)((longlong)pvVar10 + 0x68) = uVar12 + 1;
            if (*(ulonglong *)((longlong)pvVar10 + 0x90) <= uVar14) {
              local_49 = 0;
                    /* WARNING: Subroutine does not return */
              FUN_180201d02(uVar14,*(ulonglong *)((longlong)pvVar10 + 0x90),
                            &PTR_s_C__Users_burne__cargo_registry_s_180213728);
            }
            lVar13 = *(longlong *)((longlong)pvVar10 + 0x88);
            *(short *)(lVar13 + uVar14 * 4) = (short)uVar12;
            *(ushort *)(lVar13 + 2 + uVar14 * 4) = uVar17;
            goto LAB_1800c4260;
          }
          uVar5 = *(ushort *)(*(longlong *)((longlong)local_60 + 0x88) + 2 + uVar14 * 4);
          if (((int)uVar14 - (uint)(uVar5 & uVar4) & (uint)uVar4) < uVar15) {
            local_110 = (int)lVar13;
            local_49 = 0;
            lVar13 = FUN_180046190(local_90,&DAT_180213380,local_80,uVar18,uVar14,
                                   local_110 != 2 && 0x1ff < uVar15);
            if (lVar13 == 0) goto LAB_1800c4260;
            goto LAB_1800c42d3;
          }
          if (uVar5 == uVar17) {
            if (uVar12 <= uVar16) {
              local_49 = 1;
                    /* WARNING: Subroutine does not return */
              FUN_180201d02(uVar16,uVar12,&PTR_s_C__Users_burne__cargo_registry_s_180213710);
            }
            lVar21 = uVar16 * 0x68;
            if ((*(longlong *)(lVar20 + 0x40 + lVar21) == 0) &&
               (*(char *)(lVar20 + lVar21 + 0x48) == '3')) goto code_r0x0001800c40a0;
          }
          uVar15 = uVar15 + 1;
          uVar14 = uVar14 + 1;
        } while( true );
      }
      (*(code *)local_58[4])(local_68,local_70,local_78);
      goto LAB_1800c42d3;
    }
    local_58 = (undefined8 *)((longlong)param_2 + 0x48);
    (**(code **)(*(longlong *)((longlong)param_2 + 0x48) + 0x20))
              (*(undefined8 *)((longlong)param_2 + 0x60),*(undefined8 *)((longlong)param_2 + 0x50),
               *(undefined8 *)((longlong)param_2 + 0x58));
    local_58[4] = local_80[4];
    uVar6 = *local_80;
    uVar7 = local_80[1];
    uVar8 = local_80[3];
    local_58[2] = local_80[2];
    local_58[3] = uVar8;
    *local_58 = uVar6;
    local_58[1] = uVar7;
  }
  goto LAB_1800c4260;
code_r0x0001800c40a0:
  if (*(char *)(lVar20 + lVar21) != '\0') {
    FUN_180054460(local_90,*(undefined8 *)(lVar20 + lVar21 + 8));
    uVar12 = *(ulonglong *)((longlong)local_60 + 0x68);
  }
  if (uVar12 <= uVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_180201d02(uVar16,uVar12,&PTR_s_C__Users_burne__cargo_registry_s_180213740);
  }
  lVar13 = *(longlong *)((longlong)local_60 + 0x60);
  lVar20 = *(longlong *)(lVar13 + 0x18 + lVar21);
  uVar6 = *(undefined8 *)(lVar13 + 0x20 + lVar21);
  uVar7 = *(undefined8 *)(lVar13 + 0x28 + lVar21);
  uVar8 = *(undefined8 *)(lVar13 + 0x30 + lVar21);
  cVar11 = *(char *)(lVar13 + 0x38 + lVar21);
  *(undefined8 **)(lVar13 + 0x18 + lVar21) = local_58;
  *(undefined8 *)(lVar13 + 0x20 + lVar21) = local_70;
  *(undefined8 *)(lVar13 + 0x28 + lVar21) = local_78;
  *(undefined8 *)(lVar13 + 0x30 + lVar21) = local_68;
  *(undefined8 *)(lVar13 + 0x38 + lVar21) = local_98;
  if (cVar11 == '\x03') {
LAB_1800c42d3:
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("size overflows MAX_SIZE",0x17,local_108,&DAT_1802136a8,
                  &PTR_s_C__Users_burne__cargo_registry_s_180213448);
  }
  if (cVar11 != '\x02') {
    (**(code **)(lVar20 + 0x20))(uVar8,uVar6,uVar7);
  }
LAB_1800c4260:
  memcpy(param_1,local_60,0xf8);
  return param_1;
}


