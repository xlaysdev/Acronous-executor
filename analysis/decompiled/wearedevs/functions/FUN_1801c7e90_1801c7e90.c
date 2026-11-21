/* FUN_1801c7e90 @ 1801c7e90 */

void FUN_1801c7e90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong local_50;
  undefined8 *local_48;
  longlong local_40;
  undefined8 *local_38;
  undefined1 local_2a;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  local_98 = param_1[0x11];
  local_a8 = param_1[0xf];
  uStack_a0 = param_1[0x10];
  local_b8 = param_1[0xd];
  uStack_b0 = param_1[0xe];
  local_c8 = param_1[0xb];
  uStack_c0 = param_1[0xc];
  local_d8 = param_1[9];
  uStack_d0 = param_1[10];
  local_e8 = param_1[7];
  uStack_e0 = param_1[8];
  uStack_90 = *param_1;
  uStack_88 = param_1[1];
  local_80 = param_1[2];
  uStack_78 = param_1[3];
  local_158 = *param_1;
  uStack_150 = param_1[1];
  local_148 = param_1[2];
  uStack_140 = param_1[3];
  local_29 = 1;
  local_38 = param_1;
  FUN_18016d1a0(&local_158);
  local_148 = local_38[7];
  uStack_140 = local_38[8];
  local_138 = *(undefined4 *)(local_38 + 9);
  uStack_134 = *(undefined4 *)((longlong)local_38 + 0x4c);
  uStack_130 = *(undefined4 *)(local_38 + 10);
  uStack_12c = *(undefined4 *)((longlong)local_38 + 0x54);
  local_128 = *(undefined4 *)(local_38 + 0xb);
  uStack_124 = *(undefined4 *)((longlong)local_38 + 0x5c);
  uStack_120 = *(undefined4 *)(local_38 + 0xc);
  uStack_11c = *(undefined4 *)((longlong)local_38 + 100);
  local_118 = *(undefined4 *)(local_38 + 0xd);
  uStack_114 = *(undefined4 *)((longlong)local_38 + 0x6c);
  uStack_110 = *(undefined4 *)(local_38 + 0xe);
  uStack_10c = *(undefined4 *)((longlong)local_38 + 0x74);
  local_108 = *(undefined4 *)(local_38 + 0xf);
  uStack_104 = *(undefined4 *)((longlong)local_38 + 0x7c);
  uStack_100 = *(undefined4 *)(local_38 + 0x10);
  uStack_fc = *(undefined4 *)((longlong)local_38 + 0x84);
  local_f8 = local_38[0x11];
  local_29 = 0;
  local_158 = uVar1;
  uStack_150 = uVar2;
  FUN_1801c6220(&local_158);
  local_40 = 0;
  plVar3 = (longlong *)local_38[4];
  local_38 = local_38 + 4;
  if ((plVar3[3] != 0) && (local_58 = plVar3[4], local_58 != 0)) {
    local_48 = (undefined8 *)plVar3[5];
    local_60 = plVar3;
    if ((code *)*local_48 != (code *)0x0) {
      (*(code *)*local_48)(local_58);
    }
    plVar3 = local_60;
    if (local_48[1] != 0) {
      thunk_FUN_1801d3330(local_58,local_48[1],local_48[2]);
    }
  }
  plVar3[3] = 1;
  plVar3[4] = local_40;
  plVar3[5] = local_50;
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    local_2a = 0;
    local_68 = plVar3;
    FUN_1801e3850(&local_68);
  }
  return;
}


