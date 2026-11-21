/* FUN_180200a26 @ 180200a26 */

void FUN_180200a26(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = param_1;
  local_18 = param_2;
  local_10 = param_3;
  FUN_1801dd420(&local_20);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


