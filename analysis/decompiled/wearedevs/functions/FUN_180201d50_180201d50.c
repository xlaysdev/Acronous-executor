/* FUN_180201d50 @ 180201d50 */

void FUN_180201d50(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  undefined1 local_18;
  undefined1 local_17;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_28 = &local_38;
  local_18 = 0;
  local_38 = param_1;
  local_30 = param_2;
  local_20 = param_4;
  local_17 = param_3;
  FUN_1801d3530(&local_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


