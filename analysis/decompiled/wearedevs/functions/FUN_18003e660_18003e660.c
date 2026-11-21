/* FUN_18003e660 @ 18003e660 */

void FUN_18003e660(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  undefined1 local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_18016c5d0(*(undefined8 *)(param_1 + 8));
  local_30 = (undefined4 *)(param_1 + 0x10);
  FUN_18003ad30(local_30);
  uVar1 = *local_28;
  uVar2 = local_28[1];
  uVar3 = local_28[2];
  uVar4 = local_28[3];
  uVar5 = local_28[5];
  uVar6 = local_28[6];
  uVar7 = local_28[7];
  local_30[4] = local_28[4];
  local_30[5] = uVar5;
  local_30[6] = uVar6;
  local_30[7] = uVar7;
  *local_30 = uVar1;
  local_30[1] = uVar2;
  local_30[2] = uVar3;
  local_30[3] = uVar4;
  local_19 = 0;
  FUN_1801783b0(&local_38);
  return;
}


