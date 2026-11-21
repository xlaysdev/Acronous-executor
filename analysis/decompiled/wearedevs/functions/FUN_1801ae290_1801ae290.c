/* FUN_1801ae290 @ 1801ae290 */

void FUN_1801ae290(undefined2 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined2 local_3a;
  undefined *local_38;
  undefined8 *local_30;
  undefined2 *local_28;
  code *local_20;
  undefined **local_18;
  undefined1 *local_10;
  
  local_3a = *param_1;
  puVar2 = param_2;
  puVar1 = (undefined *)FUN_1801adac0();
  local_38 = &DAT_1802843f9;
  if (puVar1 != (undefined *)0x0) {
    local_38 = puVar1;
  }
  local_30 = (undefined8 *)0x15;
  if (puVar1 != (undefined *)0x0) {
    local_30 = puVar2;
  }
  local_28 = &local_3a;
  local_20 = FUN_1801ee5a0;
  local_18 = &local_38;
  local_10 = &LAB_1800a5660;
  FUN_1801ef150(*param_2,param_2[1],&DAT_18028440e,&local_28);
  return;
}


