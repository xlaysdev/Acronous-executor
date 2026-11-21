/* FUN_18017cdb0 @ 18017cdb0 */

undefined8 *
FUN_18017cdb0(undefined8 *param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
             char param_5,longlong param_6,undefined8 *param_7)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined8 local_30;
  
  puVar4 = PTR_DAT_1802fd5f8;
  local_30 = 0xfffffffffffffffe;
  local_58 = param_2;
  if ((param_3 & 1) != 0) goto LAB_18017cf56;
  if (*(longlong *)PTR_DAT_1802fd5f8 != 0) {
    param_4 = *(longlong *)PTR_DAT_1802fd5f8 - 1;
    goto LAB_18017cf56;
  }
  local_31 = 1;
  local_32 = 1;
  local_33 = 1;
  FUN_1801d7ad0(&local_a8,"RUST_MIN_STACK",0xe);
  param_4 = 0x200000;
  if (!SBORROW8(0,(longlong)local_a8)) {
    local_48 = local_a8;
    local_60 = uStack_a0;
    FUN_1801f2ab0(&local_f8,uStack_a0,local_98);
    if ((local_f8 != 1) && (uVar11 = CONCAT44(iStack_e4,local_e8), uVar11 != 0)) {
      pcVar3 = (char *)CONCAT44(iStack_ec,iStack_f0);
      if (uVar11 == 1) {
        cVar5 = *pcVar3;
        if ((cVar5 == '+') || (cVar5 == '-')) goto LAB_18017cf37;
      }
      else {
        cVar5 = *pcVar3;
      }
      uVar12 = (ulonglong)(cVar5 == '+');
      if (uVar11 - uVar12 < 0x11) {
        if (uVar11 == uVar12) {
          param_4 = 0;
        }
        else {
          lVar6 = 0;
          param_4 = 0;
          do {
            if (9 < (byte)pcVar3[lVar6 + uVar12] - 0x30) goto LAB_18017cf2e;
            param_4 = (ulonglong)((byte)pcVar3[lVar6 + uVar12] - 0x30) + param_4 * 10;
            lVar6 = lVar6 + 1;
          } while (lVar6 != uVar11 + -uVar12);
        }
      }
      else {
        lVar6 = 0;
        param_4 = 0;
        while( true ) {
          if (lVar6 == uVar11 + -uVar12) goto LAB_18017cf37;
          uVar13 = (byte)pcVar3[lVar6 + uVar12] - 0x30;
          if (9 < uVar13) break;
          auVar1._8_8_ = 0;
          auVar1._0_8_ = param_4;
          uVar7 = SUB168(auVar1 * ZEXT816(10),0);
          param_4 = uVar13 + uVar7;
          if ((SUB168(auVar1 * ZEXT816(10),8) != 0) ||
             (lVar6 = lVar6 + 1, CARRY8((ulonglong)uVar13,uVar7))) break;
        }
LAB_18017cf2e:
        param_4 = 0x200000;
      }
    }
LAB_18017cf37:
    if (local_48 != (longlong *)0x0) {
      thunk_FUN_1801d3330(local_60,local_48,1);
    }
  }
  *(ulonglong *)puVar4 = param_4 + 1;
LAB_18017cf56:
  local_31 = 1;
  local_32 = 1;
  local_33 = 1;
  uVar8 = FUN_1801dfd60();
  local_31 = 1;
  local_32 = 1;
  local_33 = 0;
  local_40 = (longlong *)FUN_1801dfe00(uVar8,local_58);
  if (param_5 == '\0') {
    local_35 = 1;
    local_36 = 1;
    FUN_1801e08b0(&local_118,&local_40);
  }
  else {
    local_118 = 0;
    uStack_110 = 8;
    local_108 = 0;
    uStack_100 = 0;
  }
  local_a8 = (longlong *)0x1;
  uStack_a0 = (int *)0x1;
  local_98 = (undefined **)param_6;
  uStack_90 = 0;
  FUN_180027490();
  local_50 = (longlong *)thunk_FUN_1801d32d0(0x30,8);
  local_48 = local_50;
  if (local_50 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x30);
  }
  *(undefined4 *)(local_50 + 4) = (undefined4)local_88;
  *(undefined4 *)((longlong)local_50 + 0x24) = local_88._4_4_;
  *(undefined4 *)(local_50 + 5) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)local_50 + 0x2c) = uStack_80._4_4_;
  local_50[2] = (longlong)local_98;
  local_50[3] = uStack_90;
  *local_50 = (longlong)local_a8;
  local_50[1] = (longlong)uStack_a0;
  LOCK();
  lVar6 = *local_50;
  *local_50 = *local_50 + 1;
  UNLOCK();
  if (*local_50 != 0 && SCARRY8(lVar6,1) == *local_50 < 0) {
    uStack_d0 = *param_7;
    uStack_c8 = param_7[1];
    uStack_c0 = param_7[2];
    uStack_b8 = param_7[3];
    local_e8 = (int)local_108;
    iStack_e4 = local_108._4_4_;
    iStack_e0 = (int)uStack_100;
    iStack_dc = uStack_100._4_4_;
    local_f8 = (int)local_118;
    iStack_f4 = local_118._4_4_;
    iStack_f0 = (int)uStack_110;
    iStack_ec = uStack_110._4_4_;
    local_d8 = local_50;
    if (local_50[2] != 0) {
      local_34 = 1;
      FUN_1801dfde0(local_50[2] + 0x10);
    }
    local_68 = uStack_b8;
    local_78 = (int)uStack_c8;
    uStack_74 = uStack_c8._4_4_;
    uStack_70 = (int)uStack_c0;
    uStack_6c = uStack_c0._4_4_;
    local_88 = local_d8;
    uStack_80 = uStack_d0;
    local_98 = (undefined **)CONCAT44(iStack_e4,local_e8);
    uStack_90 = CONCAT44(iStack_dc,iStack_e0);
    local_a8 = (longlong *)CONCAT44(iStack_f4,local_f8);
    uStack_a0 = (int *)CONCAT44(iStack_ec,iStack_f0);
    FUN_180027490();
    piVar9 = (int *)thunk_FUN_1801d32d0(0x48,8);
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x48);
    }
    *(undefined8 *)(piVar9 + 0x10) = uStack_b8;
    piVar9[0xc] = (int)uStack_c8;
    piVar9[0xd] = uStack_c8._4_4_;
    piVar9[0xe] = (int)uStack_c0;
    piVar9[0xf] = uStack_c0._4_4_;
    piVar9[8] = (int)local_d8;
    piVar9[9] = local_d8._4_4_;
    piVar9[10] = (int)uStack_d0;
    piVar9[0xb] = uStack_d0._4_4_;
    piVar9[4] = local_e8;
    piVar9[5] = iStack_e4;
    piVar9[6] = iStack_e0;
    piVar9[7] = iStack_dc;
    *piVar9 = local_f8;
    piVar9[1] = iStack_f4;
    piVar9[2] = iStack_f0;
    piVar9[3] = iStack_ec;
    LOCK();
    lVar6 = *local_40;
    *local_40 = *local_40 + 1;
    UNLOCK();
    if (*local_40 != 0 && SCARRY8(lVar6,1) == *local_40 < 0) {
      local_a8 = local_40;
      local_98 = &PTR_FUN_180264840;
      uStack_a0 = piVar9;
      FUN_180027490();
      puVar10 = (undefined4 *)thunk_FUN_1801d32d0(0x18,8);
      if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x18);
      }
      *(undefined ***)(puVar10 + 4) = local_98;
      *puVar10 = (undefined4)local_a8;
      puVar10[1] = local_a8._4_4_;
      puVar10[2] = (undefined4)uStack_a0;
      puVar10[3] = uStack_a0._4_4_;
      local_34 = 0;
      uVar11 = FUN_1801dce50(param_4);
      if ((uVar11 & 1) == 0) {
        *param_1 = local_40;
        param_1[1] = local_50;
        param_1[2] = puVar10;
      }
      else {
        param_1[1] = puVar10;
        *param_1 = 0;
        LOCK();
        *local_50 = *local_50 + -1;
        UNLOCK();
        if (*local_50 == 0) {
          FUN_1801e3850(&local_50);
        }
        LOCK();
        *local_40 = *local_40 + -1;
        UNLOCK();
        if (*local_40 == 0) {
          local_31 = 0;
          local_32 = 0;
          local_33 = 0;
          FUN_1801e3970(&local_40);
        }
      }
      return param_1;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


