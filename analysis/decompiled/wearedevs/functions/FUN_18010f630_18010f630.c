/* FUN_18010f630 @ 18010f630 */

void FUN_18010f630(longlong param_1,undefined4 *param_2)

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
  undefined8 local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  undefined1 local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  local_38 = FUN_18016c5d0(*(undefined8 *)(param_1 + 0x10));
  local_30 = (undefined4 *)(param_1 + 0x18);
  FUN_18010f230(local_30);
  uVar1 = *local_28;
  uVar2 = local_28[1];
  uVar3 = local_28[2];
  uVar4 = local_28[3];
  uVar5 = local_28[4];
  uVar6 = local_28[5];
  uVar7 = local_28[6];
  uVar8 = local_28[7];
  uVar9 = local_28[9];
  uVar10 = local_28[10];
  uVar11 = local_28[0xb];
  local_30[8] = local_28[8];
  local_30[9] = uVar9;
  local_30[10] = uVar10;
  local_30[0xb] = uVar11;
  local_30[4] = uVar5;
  local_30[5] = uVar6;
  local_30[6] = uVar7;
  local_30[7] = uVar8;
  *local_30 = uVar1;
  local_30[1] = uVar2;
  local_30[2] = uVar3;
  local_30[3] = uVar4;
  local_19 = 0;
  FUN_1801783b0(&local_38);
  return;
}


