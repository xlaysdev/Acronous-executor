/* FUN_1801dfc10 @ 1801dfc10 */

void FUN_1801dfc10(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  FUN_1801dd430(&local_18);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


