/* FUN_1801040f0 @ 1801040f0 */

undefined8 * FUN_1801040f0(undefined8 *param_1,byte *param_2,byte param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *unaff_RBX;
  bool bVar7;
  byte **local_128;
  undefined *local_120;
  undefined *local_118;
  byte ***local_110;
  undefined **local_108;
  undefined *local_100;
  byte *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  byte local_d8;
  undefined1 uStack_d7;
  undefined2 uStack_d6;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined3 uStack_5c;
  longlong *local_58;
  undefined4 uStack_50;
  undefined3 uStack_4c;
  longlong *local_48;
  uint local_3c;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_3c = (uint)*param_2;
  local_f8 = param_2;
  if (*param_2 != 0) {
    if (local_3c == 1) {
      unaff_RBX = (undefined8 *)(ulonglong)param_2[1];
    }
    else {
      puVar1 = *(undefined8 **)(param_2 + 8);
      FUN_180027490();
      local_48 = (longlong *)thunk_FUN_1801d32d0(0x20,8);
      if (local_48 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x20);
      }
      unaff_RBX = puVar1 + 3;
      (**(code **)*puVar1)(&local_d8,unaff_RBX,puVar1[1],puVar1[2]);
      *(undefined4 *)(local_48 + 2) = (undefined4)local_c8;
      *(undefined4 *)((longlong)local_48 + 0x14) = local_c8._4_4_;
      *(undefined4 *)(local_48 + 3) = (undefined4)uStack_c0;
      *(undefined4 *)((longlong)local_48 + 0x1c) = uStack_c0._4_4_;
      *(uint *)local_48 = CONCAT22(uStack_d6,CONCAT11(uStack_d7,local_d8));
      *(undefined4 *)((longlong)local_48 + 4) = uStack_d4;
      *(undefined4 *)(local_48 + 1) = (undefined4)uStack_d0;
      *(undefined4 *)((longlong)local_48 + 0xc) = uStack_d0._4_4_;
    }
  }
  (*(code *)**(undefined8 **)(param_2 + 0x10))
            (&local_d8,param_2 + 0x28,*(undefined8 *)(param_2 + 0x18),
             *(undefined8 *)(param_2 + 0x20));
  local_58 = (longlong *)CONCAT44(uStack_d4,CONCAT22(uStack_d6,CONCAT11(uStack_d7,local_d8)));
  local_f0 = uStack_d0;
  local_e8 = (longlong)local_c8;
  local_e0 = uStack_c0;
  (*(code *)**(undefined8 **)(param_2 + 0x30))
            (&local_80,param_2 + 0x48,*(undefined8 *)(param_2 + 0x38),
             *(undefined8 *)(param_2 + 0x40));
  plVar2 = local_48;
  local_98 = (undefined4)local_70;
  uStack_94 = local_70._4_4_;
  uStack_90 = (undefined4)uStack_68;
  uStack_8c = uStack_68._4_4_;
  local_a8 = (undefined4)local_80;
  uStack_a4 = local_80._4_4_;
  uStack_a0 = (undefined4)uStack_78;
  uStack_9c = uStack_78._4_4_;
  local_88 = *(undefined2 *)(param_2 + 0x50);
  local_d8 = (byte)local_3c;
  uStack_d7 = SUB81(unaff_RBX,0);
  uStack_d0 = local_48;
  local_c8 = local_58;
  uStack_c0 = local_f0;
  local_b8 = local_e8;
  local_b0 = local_e0;
  if (local_d8 == 0) {
    if ((param_3 & local_e8 != 0) == 0) goto LAB_1801042fd;
    uVar6 = local_e0;
    bVar3 = FUN_1801acf50(&local_c8);
    bVar7 = (bVar3 & ((uint)uVar6 & 0xffff) == 0x1bb) == 0;
    if (bVar7) {
      FUN_180102f20(param_2,&DAT_18023a038);
    }
    else {
      FUN_180102f20(param_2,&DAT_18023a028);
    }
    uStack_4c = 0;
    uStack_50 = (uint)!bVar7;
    (*(code *)*local_c8)(&local_80,&local_b0,uStack_c0,local_b8);
    param_1[5] = local_70;
    param_1[6] = uStack_68;
    *(undefined4 *)(param_1 + 3) = (undefined4)local_80;
    *(undefined4 *)((longlong)param_1 + 0x1c) = local_80._4_4_;
    *(undefined4 *)(param_1 + 4) = (undefined4)uStack_78;
    *(undefined4 *)((longlong)param_1 + 0x24) = uStack_78._4_4_;
    *(uint *)((longlong)param_1 + 0xc) = CONCAT31(uStack_4c,uStack_50._3_1_);
    *(uint *)((longlong)param_1 + 9) = uStack_50;
    *(undefined1 *)(param_1 + 1) = 1;
    param_1[2] = 0;
  }
  else {
    if (local_e8 == 0) {
LAB_1801042fd:
      if ((*(ulonglong *)PTR_DAT_1802fd448 < 2) &&
         (((uVar5 = (uint)DAT_1802fb098, uVar5 - 1 < 2 ||
           ((uVar5 != 0 && (uVar5 = FUN_1801faaf0(&PTR_DAT_1802fb088), (char)uVar5 != '\0')))) &&
          (cVar4 = FUN_1801601d0(PTR_DAT_1802fb088,uVar5), cVar4 != '\0')))) {
        uStack_68 = PTR_DAT_1802fb088 + 0x30;
        local_128 = &local_f8;
        local_120 = &DAT_18010d630;
        local_118 = &DAT_18023a048;
        local_110 = &local_128;
        local_108 = &local_118;
        local_100 = &DAT_180239d38;
        local_80 = 1;
        uStack_78 = &local_108;
        local_70 = 1;
        FUN_180160ae0(PTR_DAT_1802fb088,&local_80);
      }
      param_1[1] = 0;
      *(undefined1 *)((longlong)param_1 + 0x31) = 2;
      *(undefined1 *)(param_1 + 7) = 5;
      *param_1 = 1;
      goto joined_r0x00018010445f;
    }
    if (local_d8 == 2) {
      FUN_180027490();
      local_58 = (longlong *)thunk_FUN_1801d32d0(0x20,8);
      if (local_58 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x20);
      }
      (**(code **)*plVar2)(&local_80,plVar2 + 3,plVar2[1],plVar2[2]);
      *(undefined4 *)(local_58 + 2) = (undefined4)local_70;
      *(undefined4 *)((longlong)local_58 + 0x14) = local_70._4_4_;
      *(undefined4 *)(local_58 + 3) = (undefined4)uStack_68;
      *(undefined4 *)((longlong)local_58 + 0x1c) = uStack_68._4_4_;
      *(undefined4 *)local_58 = (undefined4)local_80;
      *(undefined4 *)((longlong)local_58 + 4) = local_80._4_4_;
      *(undefined4 *)(local_58 + 1) = (undefined4)uStack_78;
      *(undefined4 *)((longlong)local_58 + 0xc) = uStack_78._4_4_;
      local_3c = CONCAT31(local_3c._1_3_,2);
      local_48 = local_58;
    }
    else {
      local_60 = CONCAT13((undefined1)uStack_d4,CONCAT21(uStack_d6,uStack_d7));
      uStack_5c = (undefined3)((uint)uStack_d4 >> 8);
      local_3c = CONCAT31(local_3c._1_3_,1);
    }
    (*(code *)*local_c8)(&local_80,&local_b0,uStack_c0,local_b8);
    param_1[5] = local_70;
    param_1[6] = uStack_68;
    *(undefined4 *)(param_1 + 3) = (undefined4)local_80;
    *(undefined4 *)((longlong)param_1 + 0x1c) = local_80._4_4_;
    *(undefined4 *)(param_1 + 4) = (undefined4)uStack_78;
    *(undefined4 *)((longlong)param_1 + 0x24) = uStack_78._4_4_;
    *(uint *)((longlong)param_1 + 0xc) = CONCAT31(uStack_5c,local_60._3_1_);
    *(undefined4 *)((longlong)param_1 + 9) = local_60;
    *(undefined1 *)(param_1 + 1) = (undefined1)local_3c;
    param_1[2] = local_48;
  }
  *param_1 = 0;
joined_r0x00018010445f:
  if (1 < local_d8) {
    local_48 = uStack_d0;
    (**(code **)(*uStack_d0 + 0x20))(uStack_d0[3],uStack_d0[1],uStack_d0[2]);
    thunk_FUN_1801d3330(local_48,0x20,8);
  }
  (*(code *)local_c8[4])(local_b0,uStack_c0,local_b8);
  (**(code **)(CONCAT44(uStack_a4,local_a8) + 0x20))
            (CONCAT44(uStack_8c,uStack_90),CONCAT44(uStack_9c,uStack_a0),
             CONCAT44(uStack_94,local_98));
  return param_1;
}


