/* FUN_1800de0f0 @ 1800de0f0 */

undefined8 * FUN_1800de0f0(undefined8 *param_1,undefined8 *param_2,void *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined1 local_208 [144];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined2 local_e4;
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 uStack_60;
  undefined1 local_4c;
  byte local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  plVar7 = (longlong *)param_2[0x22];
  LOCK();
  lVar1 = *plVar7;
  *plVar7 = *plVar7 + 1;
  UNLOCK();
  if (*plVar7 == 0 || SCARRY8(lVar1,1) != *plVar7 < 0) goto LAB_1800de433;
  uVar12 = param_2[0x23];
  plVar8 = (longlong *)param_2[0x24];
  if (plVar8 == (longlong *)0x0) {
    LOCK();
    lVar1 = *plVar7;
    *plVar7 = *plVar7 + 1;
    UNLOCK();
    if (*plVar7 == 0 || SCARRY8(lVar1,1) != *plVar7 < 0) goto LAB_1800de433;
  }
  else {
    LOCK();
    lVar1 = *plVar8;
    *plVar8 = *plVar8 + 1;
    UNLOCK();
    if (*plVar8 == 0 || SCARRY8(lVar1,1) != *plVar8 < 0) goto LAB_1800de433;
    local_70 = param_2[0x25];
    LOCK();
    lVar1 = *plVar7;
    *plVar7 = *plVar7 + 1;
    UNLOCK();
    if (*plVar7 == 0 || SCARRY8(lVar1,1) != *plVar7 < 0) goto LAB_1800de433;
  }
  uVar2 = *(undefined1 *)(param_2 + 6);
  uVar3 = *(undefined1 *)((longlong)param_2 + 0x3a);
  bVar4 = *(byte *)(param_2 + 7);
  local_c8 = (ulonglong)bVar4;
  uVar5 = *(undefined1 *)((longlong)param_2 + 0x39);
  uVar9 = *param_2;
  uVar10 = param_2[1];
  local_a0 = param_2[2];
  local_98 = param_2[3];
  local_90 = param_2[4];
  local_88 = param_2[5];
  local_e0 = (longlong *)param_2[0x1b];
  local_d8 = param_2[0x1c];
  LOCK();
  lVar1 = *local_e0;
  *local_e0 = *local_e0 + 1;
  UNLOCK();
  local_c0 = local_d8;
  local_68 = plVar7;
  uStack_60 = uVar12;
  if (*local_e0 == 0 || SCARRY8(lVar1,1) != *local_e0 < 0) {
LAB_1800de433:
                    /* WARNING: Does not return */
    pcVar11 = (code *)invalidInstructionException();
    (*pcVar11)();
  }
  local_d0 = (longlong *)param_2[0x1d];
  local_b8 = param_3;
  local_b0 = uVar12;
  local_a8 = plVar8;
  local_80 = uVar9;
  local_78 = uVar10;
  local_4c = uVar3;
  local_4b = bVar4;
  local_4a = uVar5;
  local_49 = uVar2;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    lVar1 = *local_d0;
    *local_d0 = *local_d0 + 1;
    UNLOCK();
    if (*local_d0 == 0 || SCARRY8(lVar1,1) != *local_d0 < 0) goto LAB_1800de433;
    local_c8 = param_2[0x1e];
  }
  local_e4 = *(undefined2 *)((longlong)param_2 + 0xd4);
  local_178 = param_2[8];
  uStack_170 = param_2[9];
  local_168 = param_2[10];
  uStack_160 = param_2[0xb];
  local_158 = param_2[0xc];
  uStack_150 = param_2[0xd];
  local_148 = param_2[0xe];
  uStack_140 = param_2[0xf];
  local_e8 = *(undefined4 *)(param_2 + 0x1a);
  local_118 = *(undefined4 *)(param_2 + 0x14);
  local_120 = param_2[0x13];
  local_128 = *(undefined4 *)(param_2 + 0x12);
  local_138 = param_2[0x10];
  uStack_130 = param_2[0x11];
  local_108 = *(undefined4 *)(param_2 + 0x16);
  local_110 = param_2[0x15];
  local_100 = param_2[0x17];
  uStack_f8 = param_2[0x18];
  local_f0 = param_2[0x19];
  memcpy(local_208,param_3,0x90);
  uVar12 = FUN_1800714c0(param_2 + 0x1f,plVar7,local_b0,local_a8,local_70);
  *(undefined1 *)((longlong)param_1 + 0x1a2) = *(undefined1 *)((longlong)param_2 + 0x132);
  *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_2 + 0x26);
  memcpy(param_1 + 0x1f,param_3,0x90);
  param_1[0x31] = local_68;
  param_1[0x32] = uStack_60;
  *param_1 = local_80;
  param_1[1] = local_78;
  param_1[2] = local_a0;
  param_1[3] = local_98;
  param_1[4] = local_90;
  param_1[5] = local_88;
  *(undefined1 *)(param_1 + 6) = local_49;
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x31);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)((longlong)param_1 + 0x31) = uVar6;
  *(byte *)(param_1 + 7) = local_4b;
  *(undefined1 *)((longlong)param_1 + 0x39) = local_4a;
  *(undefined1 *)((longlong)param_1 + 0x3a) = local_4c;
  memcpy(param_1 + 8,&local_178,0xb8);
  param_1[0x33] = uVar12;
  return param_1;
}


