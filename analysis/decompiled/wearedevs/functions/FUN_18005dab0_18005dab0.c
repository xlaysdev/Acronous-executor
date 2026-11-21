/* FUN_18005dab0 @ 18005dab0 */

void * FUN_18005dab0(void *param_1,void *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  char cVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong local_118;
  ulonglong *local_110;
  undefined8 local_108;
  ulonglong local_100;
  undefined ****local_f8;
  undefined8 local_f0;
  longlong lStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  byte local_a0;
  byte local_9f;
  undefined ***local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined **local_50;
  void *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_a0 = *(byte *)(param_3 + 10) ^ 1 | *(int *)((longlong)param_3 + 0x54) != 0;
  local_a8 = *(undefined4 *)((longlong)param_3 + 0x84);
  local_9f = *(int *)((longlong)param_3 + 0x7c) != 0 & *(byte *)(param_3 + 0xf);
  uVar13 = CONCAT71((int7)((ulonglong)param_2 >> 8),local_9f);
  local_e0 = param_3[2];
  local_d8 = *(undefined4 *)(param_3 + 3);
  local_100 = (ulonglong)*(uint *)(param_3 + 0xb);
  local_f8 = (undefined ****)(ulonglong)*(uint *)((longlong)param_3 + 0x5c);
  local_b0 = param_3[8];
  local_d0 = param_3[4];
  uStack_c8 = param_3[5];
  local_c0 = param_3[6];
  uStack_b8 = param_3[7];
  local_a4 = 0xffff;
  local_f0 = *param_3;
  lStack_e8 = param_3[1];
  local_48 = param_2;
  uVar12 = FUN_18008dbb0(&local_100);
  puVar9 = PTR_PTR_1802fbfb0;
  local_88 = uVar12;
  local_80 = uVar13;
  if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
    bVar1 = PTR_PTR_1802fbfb0[0x10];
    uVar11 = (uint)bVar1;
    if (((bVar1 - 1 < 2) ||
        ((bVar1 != 0 && (uVar11 = FUN_1801faaf0(PTR_PTR_1802fbfb0), (char)uVar11 != '\0')))) &&
       (cVar10 = FUN_1801601d0(*(undefined8 *)puVar9,uVar11), cVar10 != '\0')) {
      local_118 = *(longlong *)puVar9;
      lStack_e8 = local_118 + 0x30;
      local_50 = &PTR_s_Client_18020a0e8;
      local_98 = &local_50;
      local_90 = &DAT_18020a0f8;
      local_100 = 1;
      local_f8 = &local_98;
      local_f0 = 1;
      local_108 = 0;
      local_110 = &local_100;
      FUN_1800de4a0(&local_78,&local_118);
      goto LAB_18005dc1a;
    }
  }
  local_78 = 2;
  local_58 = 0;
LAB_18005dc1a:
  FUN_180160670(&local_100);
  FUN_1800b84d0(&local_78,&local_100);
  memcpy(param_1,local_48,0x3c0);
  uVar2 = param_3[10];
  uVar3 = param_3[0xb];
  uVar4 = param_3[0xc];
  uVar5 = param_3[0xd];
  uVar6 = param_3[0xe];
  uVar7 = *(undefined8 *)((longlong)param_3 + 0x74);
  uVar8 = *(undefined8 *)((longlong)param_3 + 0x7c);
  *(undefined8 *)((longlong)param_1 + 0x424) = param_3[9];
  *(undefined8 *)((longlong)param_1 + 0x42c) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x434) = uVar3;
  *(undefined8 *)((longlong)param_1 + 0x43c) = uVar4;
  *(undefined8 *)((longlong)param_1 + 0x444) = uVar5;
  *(undefined8 *)((longlong)param_1 + 0x44c) = uVar6;
  *(undefined8 *)((longlong)param_1 + 0x450) = uVar7;
  *(undefined8 *)((longlong)param_1 + 0x458) = uVar8;
  *(undefined8 *)((longlong)param_1 + 0x3e0) = local_58;
  *(undefined8 *)((longlong)param_1 + 0x3d0) = local_68;
  *(undefined8 *)((longlong)param_1 + 0x3d8) = uStack_60;
  *(undefined8 *)((longlong)param_1 + 0x3c0) = local_78;
  *(undefined8 *)((longlong)param_1 + 0x3c8) = uStack_70;
  *(undefined8 *)((longlong)param_1 + 1000) = 0;
  *(undefined4 *)((longlong)param_1 + 0x410) = 0;
  *(undefined2 *)((longlong)param_1 + 0x41c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x420) = 1;
  *(undefined4 *)((longlong)param_1 + 0x460) = 2;
  *(undefined1 *)((longlong)param_1 + 0x49c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a0) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4a8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4b1) = 2;
  *(undefined1 *)((longlong)param_1 + 0x4c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c8) = uVar12;
  *(undefined8 *)((longlong)param_1 + 0x4d0) = uVar13;
  *(undefined8 *)((longlong)param_1 + 0x4d8) = 0;
  return param_1;
}


