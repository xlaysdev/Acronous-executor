/* FUN_18012c1c0 @ 18012c1c0 */

void FUN_18012c1c0(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined1 local_50 [16];
  int local_40 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_1801ef980(local_50,param_2,"Header",6);
  FUN_1801ef590(local_50,"name",4,param_1,&DAT_180243438);
  FUN_1801f2ab0(local_40,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  if (local_40[0] == 1) {
    puVar1 = (undefined4 *)(param_1 + 0x10);
    puVar2 = &DAT_180243468;
  }
  else {
    local_28 = local_38;
    uStack_24 = uStack_34;
    uStack_20 = uStack_30;
    uStack_1c = uStack_2c;
    puVar2 = &DAT_180243438;
    puVar1 = &local_28;
  }
  FUN_1801ef590(local_50,"value",5,puVar1,puVar2);
  FUN_1801ef720(local_50);
  return;
}


