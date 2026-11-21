/* FUN_1800a7a30 @ 1800a7a30 */

undefined8 * FUN_1800a7a30(undefined8 *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_328 [184];
  undefined1 local_270 [184];
  undefined1 local_1b8 [328];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  void *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  memcpy(local_270,param_2,0x200);
  local_30 = param_2;
  memcpy(local_328,param_2,0xb8);
  FUN_180069770(&local_70,local_328);
  FUN_180051030(local_1b8);
  param_1[2] = local_60;
  *param_1 = local_70;
  param_1[1] = uStack_68;
  param_1[3] = local_58;
  param_1[4] = uStack_50;
  param_1[5] = local_48;
  param_1[6] = uStack_40;
  uVar1 = *(undefined4 *)((longlong)local_30 + 0x200);
  uVar2 = *(undefined4 *)((longlong)local_30 + 0x204);
  uVar3 = *(undefined4 *)((longlong)local_30 + 0x208);
  uVar4 = *(undefined4 *)((longlong)local_30 + 0x20c);
  uVar5 = *(undefined4 *)((longlong)local_30 + 0x210);
  uVar6 = *(undefined4 *)((longlong)local_30 + 0x214);
  uVar7 = *(undefined4 *)((longlong)local_30 + 0x218);
  uVar8 = *(undefined4 *)((longlong)local_30 + 0x21c);
  uVar9 = *(undefined4 *)((longlong)local_30 + 0x224);
  uVar10 = *(undefined4 *)((longlong)local_30 + 0x228);
  uVar11 = *(undefined4 *)((longlong)local_30 + 0x22c);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)((longlong)local_30 + 0x220);
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar9;
  *(undefined4 *)(param_1 + 0xc) = uVar10;
  *(undefined4 *)((longlong)param_1 + 100) = uVar11;
  *(undefined4 *)(param_1 + 9) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar6;
  *(undefined4 *)(param_1 + 10) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar8;
  *(undefined4 *)(param_1 + 7) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar4;
  local_38 = (longlong)local_30 + 0x230;
  FUN_180124e90();
  if (*(char *)((longlong)local_30 + 0x250) != '\x03') {
    FUN_1800a6a70(local_38);
  }
  FUN_180076020(*(undefined8 *)((longlong)local_30 + 600));
  return param_1;
}


