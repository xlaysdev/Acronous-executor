/* Unwind@180099330 @ 180099330 */

void Unwind_180099330(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x28);
  if (*plVar1 == 0) {
    FUN_180079e50(plVar1 + 1);
    return;
  }
  FUN_180077940(plVar1 + 1);
  return;
}


