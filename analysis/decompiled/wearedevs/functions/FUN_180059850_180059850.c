/* FUN_180059850 @ 180059850 */

void FUN_180059850(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined3 uStack_54;
  undefined1 local_51;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  if (*(int *)(param_1 + 0x138) == 1) {
    uVar8 = *(ulonglong *)(param_1 + 0x140);
    if (uVar8 < 2) {
      uVar7 = *(undefined1 *)(param_1 + 0x198);
      uVar9 = *(undefined4 *)(param_1 + 0x160);
      uVar10 = *(undefined4 *)(param_1 + 0x164);
      uVar11 = *(undefined4 *)(param_1 + 0x168);
      uVar12 = *(undefined4 *)(param_1 + 0x16c);
      if (*(longlong *)(param_1 + 0x170) == 0) {
        uVar2 = *(undefined8 *)(param_1 + 400);
        uVar4 = *(undefined8 *)(param_1 + 0x148);
        uVar5 = *(undefined8 *)(param_1 + 0x150);
        uVar6 = *(undefined8 *)(param_1 + 0x158);
        uVar3 = 0;
        uVar1 = local_128;
      }
      else {
        FUN_1801b29c0(&local_128,param_1 + 0x170);
        uVar3 = uStack_118;
        local_b8 = local_110;
        local_c8 = (undefined4)uStack_120;
        uStack_c4 = uStack_120._4_4_;
        uStack_c0 = (undefined4)uStack_118;
        uStack_bc = uStack_118._4_4_;
        uVar2 = *(undefined8 *)(param_1 + 400);
        uVar4 = *(undefined8 *)(param_1 + 0x148);
        uVar5 = *(undefined8 *)(param_1 + 0x150);
        uVar6 = *(undefined8 *)(param_1 + 0x158);
        uStack_118 = local_110;
        uVar1 = uStack_120;
        uStack_120 = uVar3;
        uVar3 = local_128;
        if ((((*(longlong *)(param_1 + 0x138) == 1) || ((int)*(longlong *)(param_1 + 0x138) == 2))
            && (*(uint *)(param_1 + 0x140) < 2)) && (*(longlong *)(param_1 + 0x170) != 0)) {
          local_78 = local_128;
          local_128 = uVar1;
          local_a8 = uVar9;
          uStack_a4 = uVar10;
          uStack_a0 = uVar11;
          uStack_9c = uVar12;
          local_90 = param_1;
          local_88 = uVar8;
          local_80 = uVar2;
          local_70 = uVar4;
          local_68 = uVar5;
          local_60 = uVar6;
          local_51 = uVar7;
          FUN_1801b2a70(param_1 + 0x170);
          uVar2 = local_80;
          param_1 = local_90;
          uVar3 = local_78;
          uVar4 = local_70;
          uVar5 = local_68;
          uVar6 = local_60;
          uVar8 = local_88;
          uVar9 = local_a8;
          uVar10 = uStack_a4;
          uVar11 = uStack_a0;
          uVar12 = uStack_9c;
          uVar7 = local_51;
          uVar1 = local_128;
        }
      }
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x148);
      uVar5 = *(undefined8 *)(param_1 + 0x150);
      uVar6 = *(undefined8 *)(param_1 + 0x158);
      uVar9 = *(undefined4 *)(param_1 + 0x160);
      uVar10 = *(undefined4 *)(param_1 + 0x164);
      uVar11 = *(undefined4 *)(param_1 + 0x168);
      uVar12 = *(undefined4 *)(param_1 + 0x16c);
      uVar3 = *(undefined8 *)(param_1 + 0x170);
      uVar2 = *(undefined8 *)(param_1 + 400);
      uVar7 = *(undefined1 *)(param_1 + 0x198);
      uStack_54 = (undefined3)((uint)*(undefined4 *)(param_1 + 0x19c) >> 8);
      local_58 = *(undefined4 *)(param_1 + 0x199);
      uStack_120 = *(undefined8 *)(param_1 + 0x180);
      uStack_118 = *(undefined8 *)(param_1 + 0x188);
      uVar1 = *(undefined8 *)(param_1 + 0x178);
    }
    local_128 = uVar1;
    *(undefined8 *)(param_1 + 0x138) = 2;
    *(ulonglong *)(param_1 + 0x140) = uVar8;
    *(undefined8 *)(param_1 + 0x148) = uVar4;
    *(undefined8 *)(param_1 + 0x150) = uVar5;
    *(undefined8 *)(param_1 + 0x158) = uVar6;
    *(undefined4 *)(param_1 + 0x160) = uVar9;
    *(undefined4 *)(param_1 + 0x164) = uVar10;
    *(undefined4 *)(param_1 + 0x168) = uVar11;
    *(undefined4 *)(param_1 + 0x16c) = uVar12;
    *(undefined8 *)(param_1 + 0x170) = uVar3;
    *(undefined4 *)(param_1 + 0x178) = (undefined4)local_128;
    *(undefined4 *)(param_1 + 0x17c) = local_128._4_4_;
    *(undefined4 *)(param_1 + 0x180) = (undefined4)uStack_120;
    *(undefined4 *)(param_1 + 0x184) = uStack_120._4_4_;
    *(undefined8 *)(param_1 + 0x188) = uStack_118;
    *(undefined8 *)(param_1 + 400) = uVar2;
    *(undefined1 *)(param_1 + 0x198) = uVar7;
    *(undefined4 *)(param_1 + 0x199) = local_58;
    *(uint *)(param_1 + 0x19c) = CONCAT31(uStack_54,local_58._3_1_);
  }
  FUN_180056600(&local_128,param_1,param_2);
  FUN_180050ed0(&local_128);
  if ((*(longlong *)(param_1 + 0x138) != 0) && ((int)*(longlong *)(param_1 + 0x138) != 3)) {
    FUN_180114360(param_1 + 0xb8);
  }
  return;
}


