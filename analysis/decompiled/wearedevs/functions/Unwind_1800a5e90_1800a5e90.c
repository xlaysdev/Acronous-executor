/* Unwind@1800a5e90 @ 1800a5e90 */

void Unwind_1800a5e90(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x30);
  if (*plVar1 == 0) {
    FUN_1800a66c0(plVar1 + 1);
    return;
  }
  FUN_1800a6210(plVar1 + 1);
  return;
}


