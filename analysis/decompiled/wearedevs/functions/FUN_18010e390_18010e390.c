/* FUN_18010e390 @ 18010e390 */

byte * FUN_18010e390(byte *param_1,char *param_2,byte *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined2 uStack_eb;
  byte bStack_e9;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined4 local_98;
  undefined2 uStack_94;
  byte bStack_92;
  undefined1 uStack_91;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined7 uStack_50;
  undefined1 uStack_49;
  undefined7 uStack_48;
  
  uStack_48 = (undefined7)((ulonglong)*(undefined8 *)(param_2 + 0x50) >> 8);
  local_58 = *(undefined8 *)(param_2 + 0x41);
  uStack_50 = (undefined7)*(undefined8 *)(param_2 + 0x49);
  uStack_49 = (undefined1)((ulonglong)*(undefined8 *)(param_2 + 0x49) >> 0x38);
  local_68 = *(undefined8 *)(param_2 + 0x31);
  uStack_60 = *(undefined8 *)(param_2 + 0x39);
  local_78 = *(undefined8 *)(param_2 + 0x21);
  uStack_70 = *(undefined8 *)(param_2 + 0x29);
  local_88 = *(undefined8 *)(param_2 + 0x11);
  uStack_80 = *(undefined8 *)(param_2 + 0x19);
  local_98 = *(undefined4 *)(param_2 + 1);
  uVar2 = *(undefined4 *)(param_2 + 5);
  uStack_90 = *(undefined4 *)(param_2 + 9);
  uStack_8c = *(undefined4 *)(param_2 + 0xd);
  uStack_94 = (undefined2)uVar2;
  bStack_92 = (byte)((uint)uVar2 >> 0x10);
  uStack_91 = (undefined1)((uint)uVar2 >> 0x18);
  bVar5 = *param_3;
  plVar1 = *(longlong **)(param_3 + 8);
  if (*param_2 == '\x04') {
    if (1 < bVar5) {
      (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],plVar1[2]);
      thunk_FUN_1801d3330(plVar1,0x20,8);
    }
    bVar5 = 4;
  }
  else {
    local_88 = *(undefined8 *)(param_2 + 0x11);
    uStack_80 = *(undefined8 *)(param_2 + 0x19);
    local_78 = *(undefined8 *)(param_2 + 0x21);
    uStack_70 = *(undefined8 *)(param_2 + 0x29);
    local_68 = *(undefined8 *)(param_2 + 0x31);
    uStack_60 = *(undefined8 *)(param_2 + 0x39);
    uStack_e8 = (undefined1)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x38);
    uStack_e7 = (undefined7)*(undefined8 *)(param_2 + 9);
    uStack_e0 = (undefined1)((ulonglong)*(undefined8 *)(param_2 + 9) >> 0x38);
    uStack_9f = (undefined7)((ulonglong)*(undefined8 *)(param_2 + 0x50) >> 8);
    local_58 = *(undefined8 *)(param_2 + 0x41);
    uVar2 = *(undefined4 *)(param_2 + 0x4d);
    uVar4 = *(undefined8 *)(param_2 + 0x49);
    if (*param_2 == '\x02') {
      plVar3 = (longlong *)CONCAT71(uStack_e7,uStack_e8);
      (**(code **)(*plVar3 + 0x20))(plVar3[3],plVar3[1],plVar3[2]);
      thunk_FUN_1801d3330(plVar3,0x20,8);
    }
    local_98 = *(undefined4 *)(param_3 + 1);
    uStack_eb = (undefined2)((uint)*(undefined4 *)(param_3 + 4) >> 8);
    bStack_e9 = (byte)((uint)*(undefined4 *)(param_3 + 4) >> 0x18);
    uStack_e8 = SUB81(plVar1,0);
    uStack_94 = uStack_eb;
    bStack_92 = bStack_e9;
    uStack_90 = (undefined4)((ulonglong)plVar1 >> 8);
    uStack_8c._0_3_ = (undefined3)((ulonglong)plVar1 >> 0x28);
    uStack_8c = CONCAT13(uStack_e0,(undefined3)uStack_8c);
    uStack_50 = (undefined7)uVar4;
    uStack_a0 = (undefined1)((uint)uVar2 >> 0x18);
    uStack_49 = uStack_a0;
    uStack_48 = uStack_9f;
    uStack_91 = uStack_e8;
  }
  *param_1 = bVar5;
  *(undefined4 *)(param_1 + 1) = local_98;
  *(undefined2 *)(param_1 + 5) = uStack_94;
  param_1[7] = bStack_92;
  *(ulonglong *)(param_1 + 8) = CONCAT35((undefined3)uStack_8c,CONCAT41(uStack_90,uStack_91));
  param_1[0x10] = uStack_8c._3_1_;
  *(undefined8 *)(param_1 + 0x11) = local_88;
  *(undefined8 *)(param_1 + 0x19) = uStack_80;
  *(undefined8 *)(param_1 + 0x21) = local_78;
  *(undefined8 *)(param_1 + 0x29) = uStack_70;
  *(undefined8 *)(param_1 + 0x31) = local_68;
  *(undefined8 *)(param_1 + 0x39) = uStack_60;
  *(undefined8 *)(param_1 + 0x41) = local_58;
  *(ulonglong *)(param_1 + 0x49) = CONCAT17(uStack_49,uStack_50);
  *(ulonglong *)(param_1 + 0x50) = CONCAT71(uStack_48,uStack_49);
  return param_1;
}


