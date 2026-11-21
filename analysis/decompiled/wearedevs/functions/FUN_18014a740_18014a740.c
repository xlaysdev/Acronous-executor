/* FUN_18014a740 @ 18014a740 */

undefined8 *
FUN_18014a740(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,undefined4 *param_4,
             byte param_5)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined3 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258 [160];
  undefined1 local_1b8 [24];
  longlong local_1a0;
  longlong local_180;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
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
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_90;
  undefined4 local_8f;
  undefined2 local_8b;
  undefined1 local_89;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_70;
  longlong local_68;
  undefined8 *local_60;
  undefined4 *local_58;
  undefined8 local_50;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_45 = *(undefined1 *)(param_3 + 0x17);
  uVar1 = *(undefined1 *)((longlong)param_3 + 0xbf);
  uVar4 = *(undefined3 *)((longlong)param_3 + 0xbd);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0xb9);
  local_78 = param_3[0x18];
  local_50 = param_3[0x19];
  cVar2 = *(char *)(param_3 + 0x1b);
  local_70 = param_3 + 0xc;
  local_60 = param_3;
  local_58 = param_4;
  if (param_3[0x1a] != 0) {
    local_68 = param_3[0x1a];
    FUN_18002a190();
    thunk_FUN_1801d3330(local_68,0x20,8);
  }
  local_90 = local_45;
  local_8b = (undefined2)uVar4;
  local_88 = local_78;
  local_80 = local_50;
  local_a8 = local_70[10];
  local_b8 = local_70[8];
  uStack_b0 = local_70[9];
  local_f8 = *local_70;
  uStack_f0 = local_70[1];
  local_e8 = local_70[2];
  uStack_e0 = local_70[3];
  local_d8 = *(undefined4 *)(local_70 + 4);
  uStack_d4 = *(undefined4 *)((longlong)local_70 + 0x24);
  uStack_d0 = *(undefined4 *)(local_70 + 5);
  uStack_cc = *(undefined4 *)((longlong)local_70 + 0x2c);
  local_c8 = *(undefined4 *)(local_70 + 6);
  uStack_c4 = *(undefined4 *)((longlong)local_70 + 0x34);
  uStack_c0 = *(undefined4 *)(local_70 + 7);
  uStack_bc = *(undefined4 *)((longlong)local_70 + 0x3c);
  local_118 = *local_58;
  uStack_114 = local_58[1];
  uStack_110 = local_58[2];
  uStack_10c = local_58[3];
  local_108 = local_58[4];
  uStack_104 = local_58[5];
  uStack_100 = local_58[6];
  uStack_fc = local_58[7];
  local_41 = 1;
  local_42 = 0;
  local_8f = uVar3;
  local_89 = uVar1;
  FUN_180135090(local_1b8,&local_90,&local_f8,&local_118);
  if (local_180 == 0 && local_1a0 == 0) {
    if (cVar2 == '\x03') {
      *(undefined2 *)(param_1 + 1) = 0x703;
      *param_1 = 3;
      local_41 = 1;
      local_42 = 0;
      FUN_1800663c0(local_1b8);
      local_44 = 0;
      FUN_1800430f0(local_60);
      return param_1;
    }
    local_43 = 1;
    FUN_180134ea0(local_1b8,&DAT_180255280);
  }
  puVar5 = local_60;
  local_a8 = local_60[10];
  uStack_a0 = local_60[0xb];
  local_b8 = local_60[8];
  uStack_b0 = local_60[9];
  local_f8 = *local_60;
  uStack_f0 = local_60[1];
  local_e8 = local_60[2];
  uStack_e0 = local_60[3];
  local_d8 = *(undefined4 *)(local_60 + 4);
  uStack_d4 = *(undefined4 *)((longlong)local_60 + 0x24);
  uStack_d0 = *(undefined4 *)(local_60 + 5);
  uStack_cc = *(undefined4 *)((longlong)local_60 + 0x2c);
  local_c8 = *(undefined4 *)(local_60 + 6);
  uStack_c4 = *(undefined4 *)((longlong)local_60 + 0x34);
  uStack_c0 = *(undefined4 *)(local_60 + 7);
  uStack_bc = *(undefined4 *)((longlong)local_60 + 0x3c);
  uVar6 = FUN_180134c30(&local_f8);
  local_268 = puVar5[10];
  uStack_260 = puVar5[0xb];
  local_278 = puVar5[8];
  uStack_270 = puVar5[9];
  local_2b8 = *puVar5;
  uStack_2b0 = puVar5[1];
  local_2a8 = puVar5[2];
  uStack_2a0 = puVar5[3];
  local_298 = puVar5[4];
  uStack_290 = puVar5[5];
  local_288 = puVar5[6];
  uStack_280 = puVar5[7];
  memcpy(local_258,local_1b8,0xa0);
  memcpy(param_1,&local_2b8,0x100);
  param_1[0x20] = uVar6;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((longlong)param_1 + 0x115) = 2;
  *(undefined4 *)(param_1 + 0x23) = param_2;
  *(byte *)((longlong)param_1 + 0x11c) = param_5 | 4;
  return param_1;
}


