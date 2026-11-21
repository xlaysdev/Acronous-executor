/* FUN_18010e090 @ 18010e090 */

char * FUN_18010e090(char *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  undefined **local_160;
  char local_158;
  undefined7 uStack_157;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined2 local_140;
  undefined4 local_13e;
  undefined2 local_13a;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined5 uStack_f0;
  undefined3 uStack_eb;
  undefined5 uStack_e8;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined8 local_b8;
  undefined8 uStack_b0;
  char local_a8;
  char local_a7;
  char local_a6;
  undefined4 local_a5;
  undefined4 uStack_a1;
  undefined4 uStack_9d;
  undefined4 uStack_99;
  undefined4 local_95;
  undefined4 uStack_91;
  undefined4 uStack_8d;
  undefined4 uStack_89;
  undefined4 local_85;
  undefined4 uStack_81;
  undefined4 uStack_7d;
  undefined4 uStack_79;
  undefined4 uStack_75;
  undefined4 uStack_71;
  undefined4 uStack_6d;
  undefined4 uStack_69;
  undefined5 local_65;
  undefined3 uStack_60;
  undefined5 uStack_5d;
  undefined2 uStack_58;
  undefined1 uStack_56;
  undefined3 uStack_55;
  undefined2 uStack_52;
  undefined **local_50;
  undefined8 local_48;
  undefined2 local_3a;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  cVar6 = *param_2;
  cVar4 = param_2[1];
  cVar5 = param_2[2];
  uStack_e8 = (undefined5)((ulonglong)*(undefined8 *)(param_2 + 0x50) >> 0x18);
  local_f8 = *(undefined8 *)(param_2 + 0x43);
  uStack_f0 = (undefined5)*(undefined8 *)(param_2 + 0x4b);
  uStack_eb = (undefined3)((ulonglong)*(undefined8 *)(param_2 + 0x4b) >> 0x28);
  local_108 = *(undefined8 *)(param_2 + 0x33);
  uStack_100 = *(undefined8 *)(param_2 + 0x3b);
  local_118 = *(undefined8 *)(param_2 + 0x23);
  uStack_110 = *(undefined8 *)(param_2 + 0x2b);
  local_128 = *(undefined8 *)(param_2 + 0x13);
  uStack_120 = *(undefined8 *)(param_2 + 0x1b);
  local_138 = *(undefined8 *)(param_2 + 3);
  uStack_130 = *(undefined8 *)(param_2 + 0xb);
  cVar3 = '\x04';
  if (cVar6 == '\x04') goto LAB_18010e289;
  uStack_52 = (undefined2)((ulonglong)*(undefined8 *)(param_2 + 0x50) >> 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x4b);
  local_65 = (undefined5)*(undefined8 *)(param_2 + 0x43);
  uStack_60 = (undefined3)((ulonglong)*(undefined8 *)(param_2 + 0x43) >> 0x28);
  uStack_5d = (undefined5)uVar1;
  uStack_58 = (undefined2)((ulonglong)uVar1 >> 0x28);
  uStack_55 = (undefined3)((ulonglong)*(undefined8 *)(param_2 + 0x50) >> 0x18);
  uStack_56 = (undefined1)((ulonglong)uVar1 >> 0x38);
  local_a5 = *(undefined4 *)(param_2 + 3);
  uStack_a1 = *(undefined4 *)(param_2 + 7);
  uStack_9d = *(undefined4 *)(param_2 + 0xb);
  uStack_99 = *(undefined4 *)(param_2 + 0xf);
  local_95 = *(undefined4 *)(param_2 + 0x13);
  uStack_91 = *(undefined4 *)(param_2 + 0x17);
  uStack_8d = *(undefined4 *)(param_2 + 0x1b);
  uStack_89 = *(undefined4 *)(param_2 + 0x1f);
  local_85 = *(undefined4 *)(param_2 + 0x23);
  uStack_81 = *(undefined4 *)(param_2 + 0x27);
  uStack_7d = *(undefined4 *)(param_2 + 0x2b);
  uStack_79 = *(undefined4 *)(param_2 + 0x2f);
  uStack_75 = *(undefined4 *)(param_2 + 0x33);
  uStack_71 = *(undefined4 *)(param_2 + 0x37);
  uStack_6d = *(undefined4 *)(param_2 + 0x3b);
  uStack_69 = *(undefined4 *)(param_2 + 0x3f);
  local_a8 = cVar6;
  local_a7 = cVar4;
  local_a6 = cVar5;
  FUN_1801b3ac0(&local_d8,param_3,param_4);
  FUN_1801aadd0(&local_160,&local_d8);
  if (local_160 == (undefined **)0x0) {
    if (local_158 == '\n') {
      local_b8 = 0;
      uStack_b0 = 0;
      local_3a = 0xffff;
      local_48 = 1;
      local_50 = &PTR_LAB_18023e678;
      goto joined_r0x00018010e1f0;
    }
    FUN_18010dc80(&local_a8);
    cVar6 = '\x04';
    cVar4 = '\x02';
    cVar5 = local_158;
  }
  else {
    local_48 = CONCAT71(uStack_157,local_158);
    local_b8 = CONCAT44(uStack_14c,local_150);
    uStack_b0 = CONCAT44(uStack_144,uStack_148);
    local_3a = local_140;
    local_50 = local_160;
    local_d8 = local_13e;
    local_d4 = local_13a;
joined_r0x00018010e1f0:
    lVar2 = CONCAT17((undefined1)uStack_71,CONCAT43(uStack_75,uStack_79._1_3_));
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x20))
                (CONCAT53(uStack_5d,uStack_60),
                 CONCAT17((undefined1)uStack_69,CONCAT43(uStack_6d,uStack_71._1_3_)),
                 CONCAT53(local_65,uStack_69._1_3_));
    }
    uStack_79._1_3_ = SUB83(local_50,0);
    uStack_75 = (undefined4)((ulonglong)local_50 >> 0x18);
    uStack_71._0_1_ = (undefined1)((ulonglong)local_50 >> 0x38);
    uStack_71._1_3_ = (undefined3)local_48;
    uStack_6d = (undefined4)((ulonglong)local_48 >> 0x18);
    uStack_69._0_1_ = (undefined1)((ulonglong)local_48 >> 0x38);
    uStack_69._1_3_ = (undefined3)local_b8;
    local_65 = (undefined5)((ulonglong)local_b8 >> 0x18);
    uStack_60 = (undefined3)uStack_b0;
    uStack_5d = (undefined5)((ulonglong)uStack_b0 >> 0x18);
    local_138 = CONCAT44(uStack_a1,local_a5);
    uStack_130 = CONCAT44(uStack_99,uStack_9d);
    local_128 = CONCAT44(uStack_91,local_95);
    uStack_120 = CONCAT44(uStack_89,uStack_8d);
    local_118 = CONCAT44(uStack_81,local_85);
    uStack_110 = CONCAT44(uStack_79,uStack_7d);
    local_108 = CONCAT44(uStack_71,uStack_75);
    uStack_100 = CONCAT44(uStack_69,uStack_6d);
    local_f8 = CONCAT35(uStack_60,local_65);
    uStack_f0 = uStack_5d;
    uStack_eb = (undefined3)CONCAT42(local_d8,local_3a);
    uStack_e8 = (undefined5)(CONCAT26(local_d4,CONCAT42(local_d8,local_3a)) >> 0x18);
  }
  cVar3 = cVar6;
LAB_18010e289:
  *param_1 = cVar3;
  param_1[1] = cVar4;
  param_1[2] = cVar5;
  *(undefined8 *)(param_1 + 3) = local_138;
  *(undefined8 *)(param_1 + 0xb) = uStack_130;
  *(undefined8 *)(param_1 + 0x13) = local_128;
  *(undefined8 *)(param_1 + 0x1b) = uStack_120;
  *(undefined8 *)(param_1 + 0x23) = local_118;
  *(undefined8 *)(param_1 + 0x2b) = uStack_110;
  *(undefined8 *)(param_1 + 0x33) = local_108;
  *(undefined8 *)(param_1 + 0x3b) = uStack_100;
  *(undefined8 *)(param_1 + 0x43) = local_f8;
  *(ulonglong *)(param_1 + 0x4b) = CONCAT35(uStack_eb,uStack_f0);
  *(ulonglong *)(param_1 + 0x50) = CONCAT53(uStack_e8,uStack_eb);
  return param_1;
}


