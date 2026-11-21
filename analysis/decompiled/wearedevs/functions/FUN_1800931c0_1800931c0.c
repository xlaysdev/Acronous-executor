/* FUN_1800931c0 @ 1800931c0 */

void FUN_1800931c0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
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
  local_48[0] = FUN_18016c5d0(*(undefined8 *)(param_1 + 8));
  local_30 = (undefined4 *)((longlong)local_38 + 0x10);
  FUN_18003ad30();
  local_30[4] = local_80;
  local_30[5] = uStack_7c;
  local_30[6] = uStack_78;
  local_30[7] = uStack_74;
  *local_30 = 2;
  local_30[1] = uStack_8c;
  local_30[2] = uStack_88;
  local_30[3] = uStack_84;
  local_21 = 0;
  FUN_1801783b0(local_48);
  puVar2 = local_38;
  uVar1 = *(undefined8 *)((longlong)local_38 + 8);
  local_22 = 1;
  local_50 = FUN_18016c5d0();
  local_38 = (undefined4 *)((longlong)puVar2 + 0x10);
  FUN_18003ad30(local_38);
  uStack_68 = (undefined4)uVar1;
  uStack_64 = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_58 = (undefined4)param_2;
  uStack_54 = (undefined4)((ulonglong)param_2 >> 0x20);
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = uStack_58;
  local_38[7] = uStack_54;
  *local_38 = 1;
  local_38[1] = uStack_6c;
  local_38[2] = uStack_68;
  local_38[3] = uStack_64;
  local_22 = 0;
  FUN_1801783b0(&local_50);
  return;
}


