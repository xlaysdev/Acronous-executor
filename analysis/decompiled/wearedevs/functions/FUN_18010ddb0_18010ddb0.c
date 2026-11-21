/* FUN_18010ddb0 @ 18010ddb0 */

char * FUN_18010ddb0(char *param_1,char *param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  char cVar8;
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
  char local_d8;
  byte local_d7;
  longlong local_d0;
  char local_c8;
  char local_c7;
  byte local_c6;
  undefined4 local_c5;
  undefined4 uStack_c1;
  undefined4 uStack_bd;
  undefined4 uStack_b9;
  undefined4 uStack_b5;
  undefined1 uStack_b1;
  undefined1 uStack_b0;
  undefined1 uStack_af;
  undefined1 uStack_ae;
  undefined4 uStack_ad;
  undefined1 uStack_a9;
  undefined2 uStack_a8;
  undefined1 uStack_a6;
  undefined4 local_a5;
  undefined1 uStack_a1;
  undefined2 uStack_a0;
  undefined1 uStack_9e;
  undefined4 uStack_9d;
  undefined4 uStack_99;
  undefined4 local_95;
  undefined4 uStack_91;
  undefined4 uStack_8d;
  undefined4 uStack_89;
  undefined8 local_85;
  undefined5 uStack_7d;
  undefined3 uStack_78;
  undefined5 uStack_75;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  byte bStack_60;
  undefined1 uStack_5f;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined4 uStack_56;
  undefined2 uStack_52;
  undefined2 uStack_50;
  undefined6 uStack_4e;
  uint local_48;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  cVar8 = *param_2;
  cVar6 = param_2[1];
  bVar7 = param_2[2];
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
  cVar5 = '\x04';
  if (cVar8 == '\x04') goto LAB_18010df95;
  uStack_75 = (undefined5)((ulonglong)*(undefined8 *)(param_2 + 0x50) >> 0x18);
  local_85 = *(undefined8 *)(param_2 + 0x43);
  uStack_7d = (undefined5)*(undefined8 *)(param_2 + 0x4b);
  uStack_78 = (undefined3)((ulonglong)*(undefined8 *)(param_2 + 0x4b) >> 0x28);
  local_c5 = *(undefined4 *)(param_2 + 3);
  uStack_c1 = *(undefined4 *)(param_2 + 7);
  uStack_bd = *(undefined4 *)(param_2 + 0xb);
  uStack_b9 = *(undefined4 *)(param_2 + 0xf);
  uStack_b5 = *(undefined4 *)(param_2 + 0x13);
  uVar1 = *(undefined4 *)(param_2 + 0x17);
  uStack_ad = *(undefined4 *)(param_2 + 0x1b);
  uVar2 = *(undefined4 *)(param_2 + 0x1f);
  local_a5 = *(undefined4 *)(param_2 + 0x23);
  uVar3 = *(undefined4 *)(param_2 + 0x27);
  uStack_9d = *(undefined4 *)(param_2 + 0x2b);
  uStack_99 = *(undefined4 *)(param_2 + 0x2f);
  local_95 = *(undefined4 *)(param_2 + 0x33);
  uStack_91 = *(undefined4 *)(param_2 + 0x37);
  uStack_8d = *(undefined4 *)(param_2 + 0x3b);
  uStack_89 = *(undefined4 *)(param_2 + 0x3f);
  uStack_a1 = (undefined1)uVar3;
  uStack_a0 = (undefined2)((uint)uVar3 >> 8);
  uStack_9e = (undefined1)((uint)uVar3 >> 0x18);
  uStack_b1 = (undefined1)uVar1;
  uStack_b0 = (undefined1)((uint)uVar1 >> 8);
  uStack_af = (undefined1)((uint)uVar1 >> 0x10);
  uStack_ae = (undefined1)((uint)uVar1 >> 0x18);
  uStack_a9 = (undefined1)uVar2;
  uStack_a8 = (undefined2)((uint)uVar2 >> 8);
  uStack_a6 = (undefined1)((uint)uVar2 >> 0x18);
  local_c8 = cVar8;
  local_c7 = cVar6;
  local_c6 = bVar7;
  FUN_1801accb0(&local_d8,param_3,param_4);
  if (local_d8 == '\x01') {
LAB_18010df81:
    bVar7 = local_d7;
    FUN_18010dc80(&local_c8);
    cVar8 = '\x04';
    cVar6 = '\x02';
  }
  else {
    if (local_d0 != param_4) {
      local_d7 = 0;
      goto LAB_18010df81;
    }
    FUN_1801b3ac0(&local_68,param_3,param_4);
    uVar1 = uStack_56;
    local_70 = CONCAT44(uStack_64,local_68);
    local_68 = CONCAT22(uStack_5c,uStack_5e);
    uStack_64 = CONCAT22(uStack_58,uStack_5a);
    local_d7 = bStack_60;
    if (local_70 == 0) goto LAB_18010df81;
    local_41 = uStack_5f;
    local_48 = (uint)bStack_60;
    uStack_58 = (undefined2)uStack_4e;
    uStack_56 = (undefined4)((uint6)uStack_4e >> 0x10);
    bStack_60 = (byte)uVar1;
    uStack_5f = (undefined1)((uint)uVar1 >> 8);
    uStack_5e = (undefined2)((uint)uVar1 >> 0x10);
    uStack_5c = uStack_52;
    uStack_5a = uStack_50;
    lVar4 = CONCAT17(uStack_b1,CONCAT43(uStack_b5,uStack_b9._1_3_));
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x20))
                (CONCAT17((undefined1)uStack_99,CONCAT43(uStack_9d,CONCAT12(uStack_9e,uStack_a0))),
                 CONCAT17(uStack_a9,
                          CONCAT43(uStack_ad,CONCAT12(uStack_ae,CONCAT11(uStack_af,uStack_b0)))),
                 CONCAT17(uStack_a1,CONCAT43(local_a5,CONCAT12(uStack_a6,uStack_a8))));
    }
    uStack_b9._1_3_ = (undefined3)local_70;
    uStack_ae = (undefined1)local_68;
    uStack_ad = (undefined4)(CONCAT44(uStack_64,local_68) >> 8);
    uStack_a9 = (undefined1)((uint)uStack_64 >> 8);
    uStack_a8 = (undefined2)((uint)uStack_64 >> 0x10);
    uStack_9e = (undefined1)uStack_58;
    uStack_9d = (undefined4)(CONCAT44(uStack_56,CONCAT22(uStack_58,uStack_5a)) >> 0x18);
    uStack_99._0_1_ = (undefined1)((uint)uStack_56 >> 0x18);
    local_138 = CONCAT44(uStack_c1,local_c5);
    uStack_130 = CONCAT44(uStack_b9,uStack_bd);
    local_128 = CONCAT17(uStack_ae,
                         CONCAT16(local_41,CONCAT15((char)local_48,
                                                    (int5)((ulonglong)local_70 >> 0x18))));
    uStack_120 = CONCAT17(bStack_60,CONCAT25(uStack_a8,CONCAT14(uStack_a9,uStack_ad)));
    local_118 = CONCAT17(uStack_9e,
                         CONCAT25(uStack_5a,
                                  (int5)(CONCAT24(uStack_5c,
                                                  CONCAT22(uStack_5e,CONCAT11(uStack_5f,bStack_60)))
                                        >> 8)));
    uStack_110 = CONCAT44(uStack_99,uStack_9d);
    local_108 = CONCAT44(uStack_91,local_95);
    uStack_100 = CONCAT44(uStack_89,uStack_8d);
    local_f8 = local_85;
    uStack_f0 = uStack_7d;
    uStack_eb = uStack_78;
    uStack_e8 = uStack_75;
  }
  cVar5 = cVar8;
LAB_18010df95:
  *param_1 = cVar5;
  param_1[1] = cVar6;
  param_1[2] = bVar7;
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


