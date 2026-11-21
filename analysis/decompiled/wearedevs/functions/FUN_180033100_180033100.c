/* FUN_180033100 @ 180033100 */

undefined8 * FUN_180033100(undefined8 *param_1,int *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int *piVar16;
  longlong *plVar17;
  undefined1 local_f0 [24];
  ulonglong local_d8;
  ulonglong local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  longlong lStack_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong *local_78;
  undefined1 *puStack_70;
  longlong *local_68;
  int *local_60;
  int *local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  plVar1 = (longlong *)(param_2 + 0x18);
  uVar9 = *(ulonglong *)(param_2 + 0x1e);
  local_58 = param_2;
  if (uVar9 == 0) {
    piVar16 = param_2 + 0x1a;
    local_a8 = 1;
    uVar14 = 0;
    uVar8 = 0;
  }
  else {
    uVar11 = *(ulonglong *)(param_2 + 0x18);
    uVar14 = *(ulonglong *)(param_2 + 0x1c);
    uVar8 = 0;
    uVar12 = uVar11;
    if (uVar14 < uVar11) {
      uVar12 = 0;
    }
    lVar7 = uVar14 - uVar12;
    uVar15 = uVar11 - lVar7;
    uVar5 = (uVar9 - uVar15) * 0x20;
    if (uVar9 <= uVar15) {
      uVar5 = 0;
    }
    lVar2 = *(longlong *)(param_2 + 0x1a);
    uVar6 = lVar7 + uVar9;
    if (uVar15 < uVar9) {
      uVar6 = uVar11;
    }
    uVar6 = uVar6 - lVar7;
    if (uVar6 != 0) {
      if (uVar6 < 4) {
        uVar15 = 0;
        uVar8 = 0;
      }
      else {
        plVar17 = (longlong *)(uVar14 * 0x20 + uVar12 * -0x20 + lVar2 + 0x70);
        uVar15 = 0;
        uVar8 = 0;
        do {
          uVar8 = uVar8 + plVar17[-0xc] + plVar17[-8] + plVar17[-4] + *plVar17;
          uVar15 = uVar15 + 4;
          plVar17 = plVar17 + 0x10;
        } while ((uVar6 & 0xfffffffffffffffc) != uVar15);
      }
      if ((uVar6 & 3) != 0) {
        uVar13 = 0;
        do {
          uVar8 = uVar8 + *(longlong *)
                           (uVar14 * 0x20 + uVar15 * 0x20 + uVar12 * -0x20 + lVar2 + 0x10 + uVar13);
          uVar13 = uVar13 + 0x20;
        } while (((uint)uVar6 & 3) << 5 != uVar13);
      }
    }
    if (uVar5 != 0) {
      uVar14 = uVar5 >> 5;
      if (uVar5 < 0x80) {
        uVar12 = 0;
      }
      else {
        plVar17 = (longlong *)(lVar2 + 0x70);
        uVar12 = 0;
        do {
          uVar8 = uVar8 + plVar17[-0xc] + plVar17[-8] + plVar17[-4] + *plVar17;
          uVar12 = uVar12 + 4;
          plVar17 = plVar17 + 0x10;
        } while ((uVar14 & 0xfffffffffffffffc) != uVar12);
      }
      if ((uVar14 & 3) != 0) {
        uVar5 = 0;
        do {
          uVar8 = uVar8 + *(longlong *)(uVar12 * 0x20 + lVar2 + 0x10 + uVar5);
          uVar5 = uVar5 + 0x20;
        } while (((uint)uVar14 & 3) << 5 != uVar5);
      }
    }
    piVar16 = param_2 + 0x1a;
    uVar14 = 0;
    if (uVar11 <= *(ulonglong *)(param_2 + 0x1c)) {
      uVar14 = uVar11;
    }
    lVar10 = (*(ulonglong *)(param_2 + 0x1c) - uVar14) * 0x20;
    lVar7 = lVar2 + lVar10;
    uVar14 = *(ulonglong *)(lVar2 + 0x10 + lVar10);
    if (uVar14 == uVar8) {
      FUN_1801b3b40(&local_88,lVar7);
      if (*(longlong *)(local_58 + 0x1e) != 0) {
        lVar7 = *(longlong *)(local_58 + 0x1c);
        uVar9 = 0;
        if (*(ulonglong *)(local_58 + 0x18) <= lVar7 + 1U) {
          uVar9 = *(ulonglong *)(local_58 + 0x18);
        }
        *(ulonglong *)(local_58 + 0x1c) = (lVar7 - uVar9) + 1;
        *(longlong *)(local_58 + 0x1e) = *(longlong *)(local_58 + 0x1e) + -1;
        lVar2 = *(longlong *)(*(longlong *)(local_58 + 0x1a) + lVar7 * 0x20);
        if (lVar2 != 0) {
          lVar7 = *(longlong *)(local_58 + 0x1a) + lVar7 * 0x20;
          (**(code **)(lVar2 + 0x20))
                    (*(undefined8 *)(lVar7 + 0x18),*(undefined8 *)(lVar7 + 8),
                     *(undefined8 *)(lVar7 + 0x10));
        }
      }
      param_1[2] = local_78;
      param_1[3] = puStack_70;
      *(undefined4 *)param_1 = (undefined4)local_88;
      *(undefined4 *)((longlong)param_1 + 4) = local_88._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_80._4_4_;
      goto LAB_180033446;
    }
    if (uVar8 < uVar14) {
      FUN_1801b3b40(param_1,lVar7);
      goto LAB_180033446;
    }
    uVar12 = *(ulonglong *)(param_2 + 0x1c);
    uVar14 = 0;
    uVar5 = uVar11;
    if (uVar12 < uVar11) {
      uVar5 = 0;
    }
    lVar7 = uVar12 - uVar5;
    uVar6 = uVar11 - lVar7;
    uVar15 = (uVar9 - uVar6) * 0x20;
    if (uVar9 <= uVar6) {
      uVar15 = 0;
    }
    uVar13 = lVar7 + uVar9;
    if (uVar6 < uVar9) {
      uVar13 = uVar11;
    }
    uVar13 = uVar13 - lVar7;
    if (uVar13 != 0) {
      if (uVar13 < 4) {
        uVar9 = 0;
        uVar14 = 0;
      }
      else {
        plVar17 = (longlong *)(uVar12 * 0x20 + uVar5 * -0x20 + lVar2 + 0x70);
        uVar9 = 0;
        uVar14 = 0;
        do {
          uVar14 = uVar14 + plVar17[-0xc] + plVar17[-8] + plVar17[-4] + *plVar17;
          uVar9 = uVar9 + 4;
          plVar17 = plVar17 + 0x10;
        } while ((uVar13 & 0xfffffffffffffffc) != uVar9);
      }
      if ((uVar13 & 3) != 0) {
        uVar11 = 0;
        do {
          uVar14 = uVar14 + *(longlong *)
                             (lVar2 + uVar12 * 0x20 + uVar9 * 0x20 + uVar5 * -0x20 + 0x10 + uVar11);
          uVar11 = uVar11 + 0x20;
        } while (((uint)uVar13 & 3) << 5 != uVar11);
      }
    }
    if (uVar15 != 0) {
      uVar9 = uVar15 >> 5;
      if (uVar15 < 0x80) {
        uVar11 = 0;
      }
      else {
        plVar17 = (longlong *)(lVar2 + 0x70);
        uVar11 = 0;
        do {
          uVar14 = uVar14 + plVar17[-0xc] + plVar17[-8] + plVar17[-4] + *plVar17;
          uVar11 = uVar11 + 4;
          plVar17 = plVar17 + 0x10;
        } while ((uVar9 & 0xfffffffffffffffc) != uVar11);
      }
      if ((uVar9 & 3) != 0) {
        uVar12 = 0;
        do {
          uVar14 = uVar14 + *(longlong *)(lVar2 + uVar11 * 0x20 + 0x10 + uVar12);
          uVar12 = uVar12 + 0x20;
        } while (((uint)uVar9 & 3) << 5 != uVar12);
      }
    }
    local_60 = piVar16;
    if (uVar14 < uVar8) {
      FUN_180200a26("`len` greater than remainingC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\http-body-util-0.1.5\\src\\util.rs"
                    ,0x1c,&DAT_1802066f8);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if ((longlong)uVar8 < 0) {
      uVar4 = 0;
LAB_180033609:
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(uVar4,uVar8);
    }
    if (uVar8 == 0) {
      local_a8 = 1;
      uVar8 = 0;
    }
    else {
      FUN_180027490();
      local_a8 = thunk_FUN_1801d32d0(uVar8,1);
      uVar4 = 1;
      if (local_a8 == 0) goto LAB_180033609;
      piVar16 = local_60;
    }
  }
  uVar9 = 0x3f;
  if (uVar8 >> 10 != 0) {
    for (; (uVar8 >> 10) >> uVar9 == 0; uVar9 = uVar9 - 1) {
    }
  }
  uVar11 = (uVar9 ^ 0xffffffffffffffc0) + 0x41;
  uVar9 = 7;
  if (uVar11 < 7) {
    uVar9 = uVar11;
  }
  local_90 = (uVar9 & 0xffffffff) * 4 + 1;
  local_a0 = 0;
  local_98 = uVar8;
  if (uVar14 == uVar8) {
    local_49 = 1;
    FUN_18002dba0(&local_a8,plVar1);
  }
  else {
    local_49 = 1;
    FUN_18002e880(&local_a8,plVar1);
  }
  if ((local_90 & 1) == 0) {
    param_1[1] = local_a8;
    param_1[2] = local_a0;
    param_1[3] = local_90;
    *param_1 = PTR_PTR_1802fd530;
  }
  else {
    uVar9 = local_90 >> 5;
    local_49 = 0;
    FUN_1801b1ef0(local_f0,local_a8,local_a0,local_98,uVar9);
    local_49 = 0;
    FUN_1801b3d40(&local_c8,local_f0);
    local_d0 = uVar9;
    if (local_b8 < uVar9) {
      local_68 = (longlong *)local_b8;
      local_d8 = local_b8;
      local_88 = &local_d0;
      uStack_80 = &LAB_1800273d0;
      local_78 = &local_d8;
      puStack_70 = &LAB_1800273d0;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_1802065d0,&local_88,&PTR_s_C__Users_burne__cargo_registry_s_180206658);
    }
    lStack_c0 = lStack_c0 + uVar9;
    param_1[2] = local_b8 - uVar9;
    param_1[3] = local_b0;
    *(undefined4 *)param_1 = local_c8;
    *(undefined4 *)((longlong)param_1 + 4) = uStack_c4;
    param_1[1] = lStack_c0;
    local_b8 = local_b8 - uVar9;
  }
LAB_180033446:
  local_68 = plVar1;
  local_60 = piVar16;
  FUN_18002f100(plVar1);
  if (*local_68 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)local_60,*local_68 << 5,8);
  }
  if (*local_58 != 3) {
    FUN_18000b470();
  }
  return param_1;
}


