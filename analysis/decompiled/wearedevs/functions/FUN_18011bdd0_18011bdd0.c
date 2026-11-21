/* FUN_18011bdd0 @ 18011bdd0 */

void FUN_18011bdd0(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ushort uVar4;
  ushort uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  char cVar11;
  ushort uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  ushort local_a8;
  undefined6 uStack_a6;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78;
  longlong lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_1801b1d00(&local_78,param_3);
  local_49 = 1;
  local_80 = param_2;
  cVar11 = FUN_180129e00(param_2);
  plVar1 = local_80;
  local_a0 = param_3;
  local_98 = param_1;
  if (cVar11 == '\0') {
    uVar12 = FUN_180026950(local_80,&DAT_180241528);
    plVar10 = local_80;
    uVar4 = *(ushort *)(plVar1 + 0xb);
    uVar14 = (ulonglong)(uVar12 & uVar4);
    lVar17 = plVar1[4];
    uVar20 = plVar1[5];
    uVar18 = 0;
    while( true ) {
      if ((ulonglong)plVar1[10] <= uVar14) {
        uVar14 = 0;
      }
      if (plVar1[10] == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar19 = (ulonglong)*(ushort *)(plVar1[9] + uVar14 * 4);
      local_a8 = uVar12;
      if (uVar19 == 0xffff) {
        local_e0._0_4_ = local_68;
        local_e0._4_4_ = uStack_64;
        uStack_d8._0_4_ = uStack_60;
        uStack_d8._4_4_ = uStack_5c;
        if (0x7fff < uVar20) {
          local_49 = 0;
          (**(code **)(local_78 + 0x20))();
          goto LAB_18011c245;
        }
        local_c8 = 0;
        uStack_c0 = 0x18;
        local_b8 = (undefined1  [16])0x0;
        local_f0 = local_78;
        uStack_e8 = lStack_70;
        local_d0 = local_58;
        local_108 = 0;
        if (uVar20 == local_80[3]) {
          FUN_1801fa370(local_80 + 3);
          lVar17 = plVar10[4];
        }
        lVar15 = uVar20 * 0x68;
        *(ulonglong *)(lVar17 + 0x60 + lVar15) = CONCAT62(uStack_a6,local_a8);
        puVar3 = (undefined8 *)(lVar17 + 0x50 + lVar15);
        *puVar3 = local_b8._0_8_;
        puVar3[1] = local_b8._8_8_;
        puVar3 = (undefined8 *)(lVar17 + 0x40 + lVar15);
        *puVar3 = local_c8;
        puVar3[1] = uStack_c0;
        puVar2 = (undefined4 *)(lVar17 + 0x30 + lVar15);
        *puVar2 = (undefined4)uStack_d8;
        puVar2[1] = uStack_d8._4_4_;
        puVar2[2] = (undefined4)local_d0;
        puVar2[3] = local_d0._4_4_;
        puVar2 = (undefined4 *)(lVar17 + 0x20 + lVar15);
        *puVar2 = (undefined4)uStack_e8;
        puVar2[1] = uStack_e8._4_4_;
        puVar2[2] = (undefined4)local_e0;
        puVar2[3] = local_e0._4_4_;
        puVar2 = (undefined4 *)(lVar17 + 0x10 + lVar15);
        *puVar2 = uStack_f8;
        puVar2[1] = uStack_f4;
        puVar2[2] = (undefined4)local_f0;
        puVar2[3] = local_f0._4_4_;
        *(undefined8 *)(lVar17 + lVar15) = local_108;
        ((undefined8 *)(lVar17 + lVar15))[1] = uStack_100;
        plVar10[5] = uVar20 + 1;
        if ((ulonglong)plVar10[10] <= uVar14) {
          local_49 = 0;
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar14,plVar10[10],&PTR_s_C__Users_burne__cargo_registry_s_180240fc8);
        }
        lVar17 = plVar10[9];
        *(short *)(lVar17 + uVar14 * 4) = (short)uVar20;
        *(ushort *)(lVar17 + 2 + uVar14 * 4) = uVar12;
        goto LAB_18011c080;
      }
      uVar5 = *(ushort *)(plVar1[9] + 2 + uVar14 * 4);
      if (((int)uVar14 - (uint)(uVar5 & uVar4) & (uint)uVar4) < uVar18) break;
      if (uVar5 == uVar12) {
        if (uVar20 <= uVar19) {
          local_49 = 1;
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar19,uVar20,&PTR_s_C__Users_burne__cargo_registry_s_180240fb0);
        }
        lVar15 = uVar19 * 0x68;
        if ((*(longlong *)(lVar17 + 0x40 + lVar15) == 0) &&
           (*(char *)(lVar17 + lVar15 + 0x48) == '\x18')) goto code_r0x00018011bedc;
      }
      uVar18 = uVar18 + 1;
      uVar14 = uVar14 + 1;
    }
    lVar15 = *local_80;
    if (0x7fff < uVar20) {
      local_49 = 0;
      (**(code **)(local_78 + 0x20))
                (CONCAT44(uStack_5c,uStack_60),lStack_70,CONCAT44(uStack_64,local_68));
      goto LAB_18011c245;
    }
    local_c8 = 0;
    uStack_c0 = 0x18;
    local_b8 = ZEXT816(0);
    local_d0 = local_58;
    local_e0 = CONCAT44(uStack_64,local_68);
    uStack_d8 = CONCAT44(uStack_5c,uStack_60);
    local_f0 = local_78;
    uStack_e8 = lStack_70;
    local_108 = 0;
    if (uVar20 == local_80[3]) {
      FUN_1801fa370(local_80 + 3);
      lVar17 = plVar10[4];
    }
    lVar13 = uVar20 * 0x68;
    *(ulonglong *)(lVar17 + 0x60 + lVar13) = CONCAT62(uStack_a6,local_a8);
    puVar3 = (undefined8 *)(lVar17 + 0x50 + lVar13);
    *puVar3 = local_b8._0_8_;
    puVar3[1] = local_b8._8_8_;
    puVar3 = (undefined8 *)(lVar17 + 0x40 + lVar13);
    *puVar3 = local_c8;
    puVar3[1] = uStack_c0;
    puVar3 = (undefined8 *)(lVar17 + 0x30 + lVar13);
    *puVar3 = uStack_d8;
    puVar3[1] = local_d0;
    plVar1 = (longlong *)(lVar17 + 0x20 + lVar13);
    *plVar1 = uStack_e8;
    plVar1[1] = local_e0;
    puVar3 = (undefined8 *)(lVar17 + 0x10 + lVar13);
    *puVar3 = CONCAT44(uStack_f4,uStack_f8);
    puVar3[1] = local_f0;
    *(undefined8 *)(lVar17 + lVar13) = local_108;
    ((undefined8 *)(lVar17 + lVar13))[1] = uStack_100;
    plVar10[5] = uVar20 + 1;
    lVar17 = plVar10[9];
    uVar19 = plVar10[10];
    uVar16 = 0;
    if (uVar19 <= uVar14) {
      uVar14 = 0;
    }
    if (uVar19 == 0) goto LAB_18011c1e0;
    while( true ) {
      uVar4 = *(ushort *)(lVar17 + uVar14 * 4);
      if (uVar4 == 0xffff) break;
      uVar16 = uVar16 + 1;
      uVar5 = *(ushort *)(lVar17 + 2 + uVar14 * 4);
      *(short *)(lVar17 + uVar14 * 4) = (short)uVar20;
      *(ushort *)(lVar17 + 2 + uVar14 * 4) = uVar12;
      uVar14 = uVar14 + 1;
      uVar20 = (ulonglong)uVar4;
      if (uVar19 <= uVar14) {
        uVar14 = 0;
      }
      uVar12 = uVar5;
      if (uVar19 == 0) {
LAB_18011c1e0:
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
    }
    *(short *)(lVar17 + uVar14 * 4) = (short)uVar20;
    *(ushort *)(lVar17 + 2 + uVar14 * 4) = uVar12;
    if ((0x1ff < uVar18 && lVar15 != 2 || 0x7f < uVar16) && (*plVar10 == 0)) {
      *plVar10 = 1;
    }
    goto LAB_18011c080;
  }
  (**(code **)(local_78 + 0x20))
            (CONCAT44(uStack_5c,uStack_60),lStack_70,CONCAT44(uStack_64,local_68));
  goto LAB_18011c245;
code_r0x00018011bedc:
  local_90 = CONCAT44(uStack_64,local_68);
  local_88 = CONCAT44(uStack_5c,uStack_60);
  if (*(char *)(lVar17 + lVar15) != '\0') {
    FUN_18012a0e0(local_80,*(undefined8 *)(lVar17 + lVar15 + 8));
    uVar20 = plVar10[5];
  }
  puVar3 = local_98;
  uVar9 = local_a0;
  if (uVar20 <= uVar19) {
                    /* WARNING: Subroutine does not return */
    FUN_180201d02(uVar19,uVar20,&PTR_s_C__Users_burne__cargo_registry_s_180240fe0);
  }
  lVar17 = plVar10[4];
  lVar13 = *(longlong *)(lVar17 + 0x18 + lVar15);
  uVar6 = *(undefined8 *)(lVar17 + 0x20 + lVar15);
  uVar7 = *(undefined8 *)(lVar17 + 0x28 + lVar15);
  uVar8 = *(undefined8 *)(lVar17 + 0x30 + lVar15);
  cVar11 = *(char *)(lVar17 + 0x38 + lVar15);
  plVar1 = (longlong *)(lVar17 + 0x18 + lVar15);
  *plVar1 = local_78;
  plVar1[1] = lStack_70;
  *(undefined8 *)(lVar17 + 0x28 + lVar15) = local_90;
  *(undefined8 *)(lVar17 + 0x30 + lVar15) = local_88;
  *(undefined8 *)(lVar17 + 0x38 + lVar15) = local_58;
  if (cVar11 != '\x03') {
    local_a0 = uVar9;
    local_98 = puVar3;
    if (cVar11 != '\x02') {
      (**(code **)(lVar13 + 0x20))(uVar8,uVar6,uVar7);
      local_a0 = uVar9;
      local_98 = puVar3;
    }
LAB_18011c080:
    *local_98 = 0x8000000000000001;
    local_98[1] = local_a0;
    *(undefined1 *)(local_98 + 3) = 0;
    return;
  }
LAB_18011c245:
                    /* WARNING: Subroutine does not return */
  FUN_180201bc0("size overflows MAX_SIZE",0x17,&local_108,&DAT_180240ee0,
                &PTR_s_C__Users_burne__cargo_registry_s_180241560);
}


