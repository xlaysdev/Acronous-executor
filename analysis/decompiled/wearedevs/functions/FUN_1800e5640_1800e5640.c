/* FUN_1800e5640 @ 1800e5640 */

undefined8 * FUN_1800e5640(undefined8 *param_1,char *param_2)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  code *pcVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_1e0;
  undefined8 local_1d8;
  ulonglong local_1d0;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  ushort local_bc;
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined3 uStack_54;
  undefined2 local_4e;
  char local_4c;
  char local_4b;
  char local_4a;
  char local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_4c = param_2[0x1a2];
  local_4e = *(undefined2 *)(param_2 + 0x1a0);
  plVar6 = *(longlong **)(param_2 + 0x188);
  LOCK();
  lVar1 = *plVar6;
  *plVar6 = *plVar6 + 1;
  UNLOCK();
  if (*plVar6 == 0 || SCARRY8(lVar1,1) != *plVar6 < 0) goto LAB_1800e5997;
  local_68 = *(undefined8 *)(param_2 + 0x188);
  uStack_60 = *(undefined8 *)(param_2 + 400);
  if (*param_2 == '\0') {
    uVar12 = 0;
    if (*(int *)(param_2 + 0x10) == 1) goto LAB_1800e56da;
LAB_1800e56c1:
    uVar10 = 0;
    if (*(int *)(param_2 + 0x20) != 1) goto LAB_1800e56cd;
LAB_1800e56f4:
    local_70 = *(undefined8 *)(param_2 + 0x28);
    uVar13 = 1;
  }
  else {
    local_80 = *(undefined8 *)(param_2 + 8);
    uVar12 = 1;
    if (*(int *)(param_2 + 0x10) != 1) goto LAB_1800e56c1;
LAB_1800e56da:
    local_78 = *(undefined8 *)(param_2 + 0x18);
    uVar10 = 1;
    if (*(int *)(param_2 + 0x20) == 1) goto LAB_1800e56f4;
LAB_1800e56cd:
    uVar13 = 0;
  }
  cVar2 = param_2[0x30];
  cVar3 = param_2[0x38];
  cVar4 = param_2[0x3a];
  cVar5 = param_2[0x39];
  uStack_58 = *(undefined4 *)(param_2 + 0x31);
  uStack_54 = (undefined3)((uint)*(undefined4 *)(param_2 + 0x34) >> 8);
  plVar6 = *(longlong **)(param_2 + 0xd8);
  uVar7 = *(undefined8 *)(param_2 + 0xe0);
  LOCK();
  lVar1 = *plVar6;
  *plVar6 = *plVar6 + 1;
  UNLOCK();
  if (*plVar6 == 0 || SCARRY8(lVar1,1) != *plVar6 < 0) {
LAB_1800e5997:
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  plVar8 = *(longlong **)(param_2 + 0xe8);
  local_98 = uVar10;
  local_90 = uVar13;
  local_88 = uVar12;
  local_4b = cVar4;
  local_4a = cVar3;
  local_49 = cVar2;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    lVar1 = *plVar8;
    *plVar8 = *plVar8 + 1;
    UNLOCK();
    if (*plVar8 == 0 || SCARRY8(lVar1,1) != *plVar8 < 0) goto LAB_1800e5997;
    uVar13 = *(undefined8 *)(param_2 + 0xf0);
  }
  local_bc = *(ushort *)(param_2 + 0xd4);
  uVar11 = (ulonglong)local_bc;
  local_150 = *(undefined8 *)(param_2 + 0x40);
  uStack_148 = *(undefined8 *)(param_2 + 0x48);
  local_140 = *(undefined4 *)(param_2 + 0x50);
  uStack_13c = *(undefined4 *)(param_2 + 0x54);
  uStack_138 = *(undefined4 *)(param_2 + 0x58);
  uStack_134 = *(undefined4 *)(param_2 + 0x5c);
  local_130 = *(undefined4 *)(param_2 + 0x60);
  uStack_12c = *(undefined4 *)(param_2 + 100);
  uStack_128 = *(undefined4 *)(param_2 + 0x68);
  uStack_124 = *(undefined4 *)(param_2 + 0x6c);
  local_120 = *(undefined4 *)(param_2 + 0x70);
  uStack_11c = *(undefined4 *)(param_2 + 0x74);
  uStack_118 = *(undefined4 *)(param_2 + 0x78);
  uStack_114 = *(undefined4 *)(param_2 + 0x7c);
  local_c0 = *(undefined4 *)(param_2 + 0xd0);
  local_f0 = *(undefined4 *)(param_2 + 0xa0);
  local_f8 = *(undefined8 *)(param_2 + 0x98);
  local_100 = *(undefined4 *)(param_2 + 0x90);
  local_110 = *(undefined8 *)(param_2 + 0x80);
  uStack_108 = *(undefined8 *)(param_2 + 0x88);
  local_e0 = *(undefined4 *)(param_2 + 0xb0);
  local_e8 = *(undefined8 *)(param_2 + 0xa8);
  local_d8 = *(undefined4 *)(param_2 + 0xb8);
  uStack_d4 = *(undefined4 *)(param_2 + 0xbc);
  uStack_d0 = *(undefined4 *)(param_2 + 0xc0);
  uStack_cc = *(undefined4 *)(param_2 + 0xc4);
  local_c8 = *(undefined8 *)(param_2 + 200);
  local_b8 = plVar6;
  local_b0 = uVar7;
  local_a8 = plVar8;
  local_a0 = uVar13;
  if (*(int *)(param_2 + 0xf8) == 2) {
    local_1d8 = (**(code **)(*(longlong *)(param_2 + 0x108) + 0x28))
                          (*(undefined8 *)(param_2 + 0x100));
    local_1e0 = 2;
    local_1d0 = uVar11;
  }
  else {
    FUN_1800cbf10(&local_1e0,param_2 + 0xf8);
  }
  cVar2 = local_49;
  plVar6 = *(longlong **)(param_2 + 0x198);
  if (plVar6 == (longlong *)0x0) {
    uVar12 = 0;
  }
  else {
    LOCK();
    lVar1 = *plVar6;
    *plVar6 = *plVar6 + 1;
    UNLOCK();
    if (*plVar6 == 0 || SCARRY8(lVar1,1) != *plVar6 < 0) goto LAB_1800e5997;
    uVar12 = *(undefined8 *)(param_2 + 0x198);
  }
  *(char *)((longlong)param_1 + 0x1a2) = local_4c;
  *(undefined2 *)(param_1 + 0x34) = local_4e;
  memcpy(param_1 + 0x1f,&local_1e0,0x90);
  param_1[0x31] = local_68;
  param_1[0x32] = uStack_60;
  *param_1 = local_88;
  param_1[1] = local_80;
  param_1[2] = local_98;
  param_1[3] = local_78;
  param_1[4] = local_90;
  param_1[5] = local_70;
  *(char *)(param_1 + 6) = cVar2;
  *(uint *)((longlong)param_1 + 0x34) = CONCAT31(uStack_54,uStack_58._3_1_);
  *(undefined4 *)((longlong)param_1 + 0x31) = uStack_58;
  *(char *)(param_1 + 7) = local_4a;
  *(char *)((longlong)param_1 + 0x39) = cVar5;
  *(char *)((longlong)param_1 + 0x3a) = local_4b;
  memcpy(param_1 + 8,&local_150,0xb8);
  param_1[0x33] = uVar12;
  return param_1;
}


