/* FUN_18010f980 @ 18010f980 */

void FUN_18010f980(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48 [2];
  undefined4 *local_38;
  undefined4 *local_30;
  undefined1 local_22;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_21 = 1;
  local_38 = (undefined4 *)param_1;
  local_48[0] = FUN_18016c5d0(*(undefined8 *)(param_1 + 0x10));
  local_30 = (undefined4 *)((longlong)local_38 + 0x18);
  FUN_18010f230();
  local_30[8] = local_90;
  local_30[9] = uStack_8c;
  local_30[10] = uStack_88;
  local_30[0xb] = uStack_84;
  local_30[4] = local_a0;
  local_30[5] = uStack_9c;
  local_30[6] = uStack_98;
  local_30[7] = uStack_94;
  *local_30 = 2;
  local_30[1] = uStack_ac;
  local_30[2] = uStack_a8;
  local_30[3] = uStack_a4;
  local_21 = 0;
  FUN_1801783b0(local_48);
  puVar2 = local_38;
  uVar1 = *(undefined8 *)((longlong)local_38 + 0x10);
  local_22 = 1;
  local_50 = FUN_18016c5d0();
  local_38 = (undefined4 *)((longlong)puVar2 + 0x18);
  FUN_18010f230(local_38);
  local_70 = (undefined4)uVar1;
  uStack_6c = (undefined4)((ulonglong)uVar1 >> 0x20);
  local_60 = (undefined4)param_2;
  uStack_5c = (undefined4)((ulonglong)param_2 >> 0x20);
  local_38[8] = local_60;
  local_38[9] = uStack_5c;
  local_38[10] = uStack_58;
  local_38[0xb] = uStack_54;
  local_38[4] = local_70;
  local_38[5] = uStack_6c;
  local_38[6] = 0;
  local_38[7] = 0;
  *local_38 = 1;
  local_38[1] = uStack_7c;
  local_38[2] = 1;
  local_38[3] = 0;
  local_22 = 0;
  FUN_1801783b0(&local_50);
  return;
}


