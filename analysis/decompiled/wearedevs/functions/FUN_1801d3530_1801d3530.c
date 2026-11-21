/* FUN_1801d3530 @ 1801d3530 */

void FUN_1801d3530(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 *local_10;
  
  local_20 = *param_1;
  uStack_1c = param_1[1];
  uStack_18 = param_1[2];
  uStack_14 = param_1[3];
  local_10 = param_1;
  FUN_1801dd410(&local_20);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


