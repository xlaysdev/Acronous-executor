/* FUN_18010adf0 @ 18010adf0 */

undefined8 * FUN_18010adf0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  bool bVar15;
  undefined8 local_110;
  longlong lStack_108;
  undefined8 local_100;
  longlong lStack_f8;
  undefined8 local_f0;
  longlong lStack_e8;
  longlong local_e0;
  longlong lStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong local_a0;
  longlong local_98;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 *local_68;
  uint local_5c;
  undefined8 local_58;
  undefined1 local_4a;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  iVar7 = *(int *)(param_3 + 0x60);
  if (iVar7 == 1000000000) {
    uVar1 = *(uint *)(param_3 + 0x50);
    uVar14 = 1000000000;
    puVar12 = param_1;
    if ((uVar1 != 1000000000) &&
       (uVar13 = (ulonglong)(param_2[3] - param_2[1]) >> 5, (int)uVar13 != 0)) {
      uVar9 = *(ulonglong *)(param_3 + 0x48);
      uVar10 = uVar13 & 0xffffffff;
      if (uVar9 >> 0x20 == 0) {
        uVar9 = uVar9 & 0xffffffff;
      }
      puVar12 = (undefined8 *)(uVar9 / uVar10);
      uVar9 = (ulonglong)uVar1 % (uVar13 & 0xffffffff) + (uVar9 % uVar10) * 1000000000;
      if (uVar9 >> 0x20 == 0) {
        iVar7 = (int)((uVar9 & 0xffffffff) / uVar10);
      }
      else {
        iVar7 = (int)(uVar9 / uVar10);
      }
      uVar14 = (int)((ulonglong)uVar1 / (uVar13 & 0xffffffff)) + iVar7;
      if (999999999 < uVar14) {
        uVar13 = (ulonglong)(uVar14 >> 9) * 0x44b83;
        uVar9 = uVar13 >> 0x27;
        bVar15 = CARRY8((ulonglong)puVar12,uVar9);
        puVar12 = (undefined8 *)((longlong)puVar12 + uVar9);
        if (bVar15) {
          local_68 = param_2;
                    /* WARNING: Subroutine does not return */
          FUN_180201b60("overflow in Duration::new",0x19,
                        &PTR_s_C__Users_burne__rustup_toolchain_18023ccc8);
        }
        uVar14 = uVar14 + (uint)(uVar13 >> 0x27) * -1000000000;
      }
    }
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[3];
    param_1[0x16] = param_2[2];
    param_1[0x17] = uVar4;
    param_1[0x14] = uVar2;
    param_1[0x15] = uVar3;
    param_1[0x18] = puVar12;
    *(uint *)(param_1 + 0x19) = uVar14;
    *param_1 = 2;
    param_1[0x1a] = param_3;
  }
  else {
    local_88 = *(longlong *)(param_3 + 0x58);
    FUN_18010e7d0(&local_110,param_2,(ulonglong)*(uint5 *)(param_3 + 0x69),param_3 + 0x6e);
    lVar6 = lStack_f8;
    lVar5 = lStack_108;
    local_68 = (undefined8 *)local_110;
    local_90 = *(ulonglong *)(param_3 + 0x48);
    uVar1 = *(uint *)(param_3 + 0x50);
    uVar13 = lStack_d8 - lStack_e8;
    if (uVar13 == 0) {
      uVar14 = 1000000000;
      uVar13 = 0;
      if ((uVar1 != 1000000000) &&
         (uVar9 = (ulonglong)(lStack_f8 - lStack_108) >> 5, (int)uVar9 != 0)) {
        local_88 = lStack_108;
        local_58 = local_100;
        local_78 = local_f0;
        uVar10 = uVar9 & 0xffffffff;
        if (local_90 >> 0x20 == 0) {
          local_90 = local_90 & 0xffffffff;
        }
        uVar13 = local_90 / uVar10;
        uVar11 = (ulonglong)uVar1 % (uVar9 & 0xffffffff) + (local_90 % uVar10) * 1000000000;
        if (uVar11 >> 0x20 == 0) {
          iVar7 = (int)((uVar11 & 0xffffffff) / uVar10);
        }
        else {
          iVar7 = (int)(uVar11 / uVar10);
        }
        uVar14 = (int)((ulonglong)uVar1 / (uVar9 & 0xffffffff)) + iVar7;
        if (999999999 < uVar14) {
          uVar9 = (ulonglong)(uVar14 >> 9) * 0x44b83;
          uVar10 = uVar9 >> 0x27;
          bVar15 = CARRY8(uVar13,uVar10);
          uVar13 = uVar13 + uVar10;
          if (bVar15) {
            local_70 = local_e0;
                    /* WARNING: Subroutine does not return */
            FUN_180201b60("overflow in Duration::new",0x19,
                          &PTR_s_C__Users_burne__rustup_toolchain_18023ccc8);
          }
          uVar14 = uVar14 + (uint)(uVar9 >> 0x27) * -1000000000;
        }
      }
      param_1[0x14] = local_110;
      param_1[0x15] = lStack_108;
      param_1[0x16] = local_100;
      param_1[0x17] = lStack_f8;
      param_1[0x18] = uVar13;
      *(uint *)(param_1 + 0x19) = uVar14;
      *param_1 = 2;
      param_1[0x1a] = param_3;
      if (local_e0 != 0) {
        thunk_FUN_1801d3330(local_f0,local_e0 << 5,4);
      }
    }
    else {
      local_70 = local_e0;
      local_78 = local_f0;
      local_58 = local_100;
      local_a0 = lStack_e8;
      local_98 = lStack_d8;
      if ((uVar1 == 1000000000) ||
         (uVar9 = (ulonglong)(lStack_f8 - lStack_108) >> 5, (int)uVar9 == 0)) {
        local_5c = 1000000000;
      }
      else {
        uVar11 = uVar9 & 0xffffffff;
        uVar10 = local_90;
        if (local_90 >> 0x20 == 0) {
          uVar10 = local_90 & 0xffffffff;
        }
        local_80 = uVar10 / uVar11;
        uVar10 = (ulonglong)uVar1 % (uVar9 & 0xffffffff) + (uVar10 % uVar11) * 1000000000;
        if (uVar10 >> 0x20 == 0) {
          iVar8 = (int)((uVar10 & 0xffffffff) / uVar11);
        }
        else {
          iVar8 = (int)(uVar10 / uVar11);
        }
        local_5c = (int)((ulonglong)uVar1 / (uVar9 & 0xffffffff)) + iVar8;
        if (999999999 < local_5c) {
          uVar9 = (ulonglong)(local_5c >> 9) * 0x44b83;
          uVar10 = uVar9 >> 0x27;
          bVar15 = CARRY8(local_80,uVar10);
          local_80 = local_80 + uVar10;
          if (bVar15) {
                    /* WARNING: Subroutine does not return */
            FUN_180201b60("overflow in Duration::new",0x19,
                          &PTR_s_C__Users_burne__rustup_toolchain_18023ccc8);
          }
          local_5c = local_5c + (uint)(uVar9 >> 0x27) * -1000000000;
        }
      }
      local_4a = 1;
      puVar12 = &local_110;
      FUN_180178c10(puVar12,local_88,iVar7,&PTR_s_C__Users_burne__cargo_registry_s_18023bf98);
      uVar14 = 1000000000;
      if ((uVar1 != 1000000000) && (uVar13 = uVar13 >> 5, (int)uVar13 != 0)) {
        uVar10 = uVar13 & 0xffffffff;
        uVar9 = local_90;
        if (local_90 >> 0x20 == 0) {
          uVar9 = local_90 & 0xffffffff;
        }
        puVar12 = (undefined8 *)(uVar9 / uVar10);
        uVar9 = (ulonglong)uVar1 % (uVar13 & 0xffffffff) + (uVar9 % uVar10) * 1000000000;
        if (uVar9 >> 0x20 == 0) {
          iVar7 = (int)((uVar9 & 0xffffffff) / uVar10);
        }
        else {
          iVar7 = (int)(uVar9 / uVar10);
        }
        uVar14 = (int)((ulonglong)uVar1 / (uVar13 & 0xffffffff)) + iVar7;
        if (999999999 < uVar14) {
          uVar13 = (ulonglong)(uVar14 >> 9) * 0x44b83;
          uVar9 = uVar13 >> 0x27;
          bVar15 = CARRY8((ulonglong)puVar12,uVar9);
          puVar12 = (undefined8 *)((longlong)puVar12 + uVar9);
          if (bVar15) {
                    /* WARNING: Subroutine does not return */
            FUN_180201b60("overflow in Duration::new",0x19,
                          &PTR_s_C__Users_burne__rustup_toolchain_18023ccc8);
          }
          uVar14 = uVar14 + (uint)(uVar13 >> 0x27) * -1000000000;
        }
      }
      param_1[0xc] = local_b0;
      param_1[0xd] = uStack_a8;
      param_1[10] = local_c0;
      param_1[0xb] = uStack_b8;
      param_1[8] = local_d0;
      param_1[9] = uStack_c8;
      param_1[6] = local_e0;
      param_1[7] = lStack_d8;
      param_1[4] = local_f0;
      param_1[5] = lStack_e8;
      param_1[2] = local_100;
      param_1[3] = lStack_f8;
      *param_1 = local_110;
      param_1[1] = lStack_108;
      param_1[0x14] = local_68;
      param_1[0x15] = lVar5;
      param_1[0x16] = local_58;
      param_1[0x17] = lVar6;
      param_1[0x18] = local_80;
      *(uint *)(param_1 + 0x19) = local_5c;
      param_1[0xe] = local_78;
      param_1[0xf] = local_a0;
      param_1[0x10] = local_70;
      param_1[0x11] = local_98;
      param_1[0x12] = puVar12;
      *(uint *)(param_1 + 0x13) = uVar14;
      param_1[0x1a] = param_3;
    }
  }
  return param_1;
}


