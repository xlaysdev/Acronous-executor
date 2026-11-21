/* FUN_180032d00 @ 180032d00 */

void FUN_180032d00(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  longlong local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_80 = param_2 + 0xc;
  local_58 = param_1;
  while( true ) {
    (**(code **)(param_2[0x11] + 0x18))(&local_128,param_2[0x10],param_3);
    if (local_128 == 6) {
      *local_58 = 5;
      return;
    }
    local_50 = local_118;
    local_c8 = (undefined4)local_110;
    uStack_c4 = local_110._4_4_;
    uStack_c0 = (undefined4)uStack_108;
    uStack_bc = uStack_108._4_4_;
    local_b8 = local_100;
    uStack_b4 = uStack_fc;
    uStack_b0 = uStack_f8;
    uStack_ac = uStack_f4;
    local_a8 = local_f0;
    uStack_a4 = uStack_ec;
    uStack_a0 = uStack_e8;
    uStack_9c = uStack_e4;
    local_98 = local_e0;
    uStack_94 = uStack_dc;
    uStack_90 = uStack_d8;
    uStack_8c = uStack_d4;
    local_88 = local_d0;
    iVar8 = (int)local_128;
    if (iVar8 == 4) {
      *local_58 = 4;
      local_58[1] = local_120;
      local_58[2] = local_118;
      return;
    }
    if (iVar8 == 5) {
      lVar1 = *param_2;
      *param_2 = 4;
      if (lVar1 == 4) {
                    /* WARNING: Subroutine does not return */
        FUN_180201b60("polled after complete",0x15,&PTR_s_C__Users_burne__cargo_registry_s_180206520
                     );
      }
      local_58[0xf] = param_2[0xf];
      lVar10 = param_2[0xe];
      local_58[0xd] = param_2[0xd];
      local_58[0xe] = lVar10;
      lVar10 = param_2[0xc];
      local_58[0xb] = param_2[0xb];
      local_58[0xc] = lVar10;
      lVar10 = param_2[10];
      local_58[9] = param_2[9];
      local_58[10] = lVar10;
      lVar10 = param_2[1];
      lVar2 = param_2[2];
      lVar3 = param_2[3];
      lVar4 = param_2[4];
      lVar5 = param_2[5];
      lVar6 = param_2[6];
      lVar7 = param_2[8];
      local_58[7] = param_2[7];
      local_58[8] = lVar7;
      local_58[5] = lVar5;
      local_58[6] = lVar6;
      local_58[3] = lVar3;
      local_58[4] = lVar4;
      local_58[1] = lVar10;
      local_58[2] = lVar2;
      *local_58 = lVar1;
      return;
    }
    local_78 = *param_2;
    if (local_78 == 4) break;
    if (iVar8 == 3) {
      local_60 = uStack_108;
      if (local_110 == 0) {
        (**(code **)(local_120 + 0x20))(uStack_108,local_118,0);
      }
      else {
        local_68 = local_110;
        local_70 = local_120;
        uVar11 = param_2[0xc];
        uVar9 = param_2[0xf];
        if (uVar9 == uVar11) {
          FUN_18007d270(local_80);
          uVar11 = param_2[0xc];
          uVar9 = param_2[0xf];
        }
        param_2[0xf] = uVar9 + 1;
        uVar12 = 0;
        if (uVar11 <= uVar9 + param_2[0xe]) {
          uVar12 = uVar11;
        }
        lVar1 = param_2[0xd];
        lVar10 = ((uVar9 + param_2[0xe]) - uVar12) * 0x20;
        *(longlong *)(lVar1 + lVar10) = local_70;
        *(longlong *)(lVar1 + 8 + lVar10) = local_50;
        *(longlong *)(lVar1 + 0x10 + lVar10) = local_68;
        *(longlong *)(lVar1 + 0x18 + lVar10) = local_60;
      }
    }
    else if ((int)local_78 == 3) {
      *param_2 = local_128;
      param_2[1] = local_120;
      param_2[2] = local_118;
      param_2[3] = local_110;
      param_2[4] = uStack_108;
      param_2[0xb] = local_d0;
      param_2[9] = CONCAT44(uStack_dc,local_e0);
      param_2[10] = CONCAT44(uStack_d4,uStack_d8);
      param_2[7] = CONCAT44(uStack_ec,local_f0);
      param_2[8] = CONCAT44(uStack_e4,uStack_e8);
      *(undefined4 *)(param_2 + 5) = local_100;
      *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_fc;
      *(undefined4 *)(param_2 + 6) = uStack_f8;
      *(undefined4 *)((longlong)param_2 + 0x34) = uStack_f4;
    }
    else {
      FUN_1800249b0(param_2,&local_128);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_1802064f0,local_120,local_f0,4,local_128,
                local_120,local_118,(undefined4)local_110,(undefined4)uStack_108,local_100,uStack_f8
                ,local_f0,uStack_e8,local_e0,uStack_d8,local_d0);
}


