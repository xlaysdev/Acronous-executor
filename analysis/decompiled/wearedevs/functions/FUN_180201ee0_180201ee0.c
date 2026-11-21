/* FUN_180201ee0 @ 180201ee0 */

void FUN_180201ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 *local_30;
  undefined8 local_28;
  undefined2 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = &local_18;
  local_20 = 1;
  local_28 = param_3;
  local_18 = param_1;
  local_10 = param_2;
  FUN_1801d3530(&local_30);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


