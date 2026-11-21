/* FUN_1801162c0 @ 1801162c0 */

undefined8 FUN_1801162c0(ulonglong *param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined7 uVar3;
  undefined7 uVar4;
  undefined7 uVar5;
  undefined7 uVar6;
  uint uVar7;
  undefined3 uVar8;
  char cVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong _Size;
  uint uVar13;
  undefined8 local_130;
  ulonglong local_128;
  ulonglong local_120;
  ulonglong local_118;
  ulonglong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined7 uStack_e8;
  undefined4 local_d8;
  uint uStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8;
  undefined7 uStack_b7;
  ulonglong local_b0;
  undefined8 local_a8;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 uStack_88;
  undefined7 uStack_87;
  ulonglong *local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar12 = param_1[2];
  if (param_1[2] == 0) {
    while( true ) {
      FUN_18013a600(&local_130,param_1 + 4,param_2);
      uVar12 = local_118;
      if ((byte)local_130 == 7) break;
      local_60 = local_128;
      local_68 = local_120;
      local_70 = local_110;
      uVar13 = (uint)(byte)local_130;
      local_78 = (ulonglong *)CONCAT44(local_78._4_4_,uVar13);
      if ((byte)local_130 != 5) {
        if (uVar13 == 6) {
          return 0;
        }
        local_d8._1_3_ = (undefined3)(local_130 >> 8);
        uVar8 = local_d8._1_3_;
        local_d8 = (undefined4)local_130;
        uStack_d4 = local_130._4_4_;
        uStack_d0 = (uint)local_128;
        uStack_a0 = uStack_d0;
        uStack_cc = (undefined4)(local_128 >> 0x20);
        uStack_c8 = (undefined4)local_120;
        uStack_98._0_4_ = uStack_c8;
        uStack_c4 = (undefined4)(local_120 >> 0x20);
        uStack_c0 = (undefined4)local_118;
        uStack_90 = uStack_c0;
        uStack_bc = (undefined4)(local_118 >> 0x20);
        local_b8 = (undefined1)local_110;
        uStack_b7 = (undefined7)(local_110 >> 8);
        uStack_d0._0_1_ = (undefined1)local_128;
        uStack_c8._0_1_ = (undefined1)local_120;
        uStack_c0._0_1_ = (undefined1)local_118;
        uStack_f0 = (undefined4)(local_118 >> 8);
        uVar3 = (undefined7)(local_130 >> 8);
        uVar4 = (undefined7)(local_128 >> 8);
        uVar5 = (undefined7)(local_120 >> 8);
        uVar6 = (undefined7)(local_118 >> 8);
        uVar7 = uStack_a0;
        uStack_e8 = uStack_b7;
        uStack_d0 = uStack_a0;
        uStack_c8 = (undefined4)uStack_98;
        uStack_c0 = uStack_90;
        local_a8._4_4_ = local_130._4_4_;
        uStack_9c = uStack_cc;
        uStack_98._4_4_ = uStack_c4;
        uStack_88 = local_b8;
        uStack_87 = uStack_b7;
        if (uVar13 != 0) {
          if (((byte)local_130 == 1) || ((byte)local_130 == 2)) {
            local_128 = (ulonglong)local_130._4_4_;
            uVar7 = local_130._4_4_;
            goto joined_r0x00018011650f;
          }
          local_108 = CONCAT17((undefined1)uStack_d0,uVar3);
          uStack_100 = CONCAT17((undefined1)uStack_c8,uVar4);
          local_f8 = CONCAT17((undefined1)uStack_c0,uVar5);
          uStack_ec = (undefined4)(CONCAT17(local_b8,uVar6) >> 0x20);
          if ((byte)local_130 == 4) {
            local_a8._0_4_ = CONCAT31(uVar8,4);
            local_58 = local_118;
            local_49 = 1;
            uStack_8c = uStack_bc;
            lVar11 = FUN_18012d690(&local_a8);
            if (lVar11 == 0) {
              local_58 = local_118;
              local_49 = 1;
                    /* WARNING: Subroutine does not return */
              FUN_180201b60("h2 error reported io cause without an underlying io errorC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\hyper-1.11.0\\src\\proto\\h2\\upgrade.rs"
                            ,0x39,&DAT_180240280);
            }
          }
          else {
LAB_18011660f:
            local_f8 = CONCAT17((undefined1)uStack_c0,uVar5);
            uStack_100 = CONCAT17((undefined1)uStack_c8,uVar4);
            local_108 = CONCAT17((undefined1)uStack_d0,uVar3);
            uStack_8c._1_3_ = (undefined3)uStack_ec;
            uStack_8c = CONCAT31(uStack_8c._1_3_,(char)(local_118 >> 0x20));
            uStack_88 = uStack_ec._3_1_;
            local_58 = local_118;
            local_49 = 1;
            local_a8._0_4_ = local_d8;
            FUN_180114cf0(CONCAT71(uStack_b7,0x28),&local_a8);
          }
          goto LAB_180116384;
        }
joined_r0x00018011650f:
        if (uVar7 != 0) {
          if ((int)local_128 == 5) {
            uStack_8c = uStack_bc;
            local_a8._0_4_ = local_d8;
            local_58 = local_118;
            local_49 = 1;
            FUN_180114cf0(0xb,&local_a8);
            goto LAB_180116384;
          }
          if ((int)local_128 != 8) {
            uStack_ec = (undefined4)(CONCAT17(local_b8,uVar6) >> 0x20);
            goto LAB_18011660f;
          }
        }
        local_58 = local_118;
        local_49 = 1;
        FUN_180116070(&local_d8);
        goto LAB_180116384;
      }
      if (local_118 != 0) {
LAB_1801164ad:
        local_b0 = uVar12;
        FUN_180123180(param_1 + 6,uVar12);
        local_78 = param_1;
        (**(code **)(*param_1 + 0x20))(param_1[3],param_1[1],param_1[2]);
        *local_78 = local_60;
        local_78[1] = local_68;
        local_78[2] = local_b0;
        local_78[3] = local_70;
        uVar12 = local_b0;
        param_1 = local_78;
        goto LAB_1801162fc;
      }
      local_58 = 0;
      local_49 = 1;
      cVar9 = FUN_18013a0c0(param_1 + 4);
      if (cVar9 != '\0') goto LAB_1801164ad;
      local_58 = 0;
      local_49 = 0;
      (**(code **)(local_60 + 0x20))(local_70,local_68,0);
    }
    uVar10 = 1;
  }
  else {
LAB_1801162fc:
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    _Size = uVar1 - uVar2;
    if (uVar12 <= uVar1 - uVar2) {
      _Size = uVar12;
    }
    uVar12 = _Size + uVar2;
    if ((uVar12 < uVar2) || (uVar1 < uVar12)) {
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(uVar2,uVar12,uVar1,&PTR_s_C__Users_burne__cargo_registry_s_1802401c0);
    }
    memcpy((void *)(uVar2 + *param_3),(void *)param_1[1],_Size);
    if ((ulonglong)param_3[3] < uVar12) {
      param_3[3] = uVar12;
    }
    param_3[2] = uVar12;
    uVar12 = param_1[2];
    local_130 = _Size;
    if (uVar12 < _Size) {
      local_d8 = (undefined4)uVar12;
      uStack_d4 = (uint)(uVar12 >> 0x20);
      local_a8 = &local_130;
      uStack_a0 = 0x800273d0;
      uStack_9c = 1;
      uStack_90 = 0x800273d0;
      uStack_8c = 1;
      uStack_98 = &local_d8;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_180240298,&local_a8,&PTR_s_C__Users_burne__cargo_registry_s_180240320);
    }
    param_1[2] = uVar12 - _Size;
    param_1[1] = param_1[1] + _Size;
    FUN_18013a9d0(&local_a8,param_1 + 4,_Size);
    if ((char)local_a8 != '\x05') {
      FUN_180116070(&local_a8);
    }
LAB_180116384:
    uVar10 = 0;
  }
  return uVar10;
}


