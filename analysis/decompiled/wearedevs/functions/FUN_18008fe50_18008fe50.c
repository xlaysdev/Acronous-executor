/* FUN_18008fe50 @ 18008fe50 */

void * FUN_18008fe50(void *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined2 uStack_ee;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined2 uStack_80;
  undefined2 uStack_7e;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_48 = param_2;
  local_40 = param_3;
  FUN_1801adfb0(&local_158);
  local_58 = local_40[4];
  local_78 = *local_40;
  uStack_70 = local_40[1];
  local_68 = local_40[2];
  uStack_60 = local_40[3];
  local_e8 = local_158;
  uStack_e0 = uStack_150;
  local_d8 = local_148;
  uStack_d4 = uStack_144;
  uStack_d0 = uStack_140;
  uStack_cc = uStack_13c;
  local_c8 = local_138;
  uStack_c4 = uStack_134;
  uStack_c0 = uStack_130;
  uStack_bc = uStack_12c;
  local_b8 = local_128;
  uStack_b4 = uStack_124;
  uStack_b0 = uStack_120;
  uStack_ac = uStack_11c;
  local_a8 = local_118;
  uStack_a0 = uStack_110;
  local_98 = local_108;
  uStack_90 = uStack_100;
  local_88 = (longlong *)CONCAT44(uStack_f4,local_f8);
  uStack_7c = uStack_ec;
  _uStack_80 = CONCAT22(uStack_ee,*(undefined2 *)(local_48 + 0xd));
  FUN_1800430f0(&local_e8);
  local_98 = local_48[10];
  uStack_90 = local_48[0xb];
  local_a8 = local_48[8];
  uStack_a0 = local_48[9];
  local_e8 = *local_48;
  uStack_e0 = local_48[1];
  local_d8 = *(undefined4 *)(local_48 + 2);
  uStack_d4 = *(undefined4 *)((longlong)local_48 + 0x14);
  uStack_d0 = *(undefined4 *)(local_48 + 3);
  uStack_cc = *(undefined4 *)((longlong)local_48 + 0x1c);
  local_c8 = *(undefined4 *)(local_48 + 4);
  uStack_c4 = *(undefined4 *)((longlong)local_48 + 0x24);
  uStack_c0 = *(undefined4 *)(local_48 + 5);
  uStack_bc = *(undefined4 *)((longlong)local_48 + 0x2c);
  local_b8 = *(undefined4 *)(local_48 + 6);
  uStack_b4 = *(undefined4 *)((longlong)local_48 + 0x34);
  uStack_b0 = *(undefined4 *)(local_48 + 7);
  uStack_ac = *(undefined4 *)((longlong)local_48 + 0x3c);
  _uStack_80 = CONCAT12(*(undefined1 *)((longlong)local_48 + 0x6a),uStack_80);
  puVar2 = (undefined8 *)local_48[0xc];
  if (local_88 != (longlong *)0x0) {
    lVar1 = local_88[1];
    if (lVar1 != 0) {
      local_50 = local_88;
      local_40 = puVar2;
      FUN_1800a2ea0();
      puVar2 = local_40;
      local_88 = local_50;
      lVar3 = lVar1 * 0x21 + 0x31;
      if (lVar3 != 0) {
        thunk_FUN_1801d3330(*local_50 + lVar1 * -0x20 + -0x20,lVar3,0x10);
      }
    }
    thunk_FUN_1801d3330(local_88,0x20,8);
  }
  local_88 = puVar2;
  memcpy(param_1,&local_e8,0x98);
  return param_1;
}


