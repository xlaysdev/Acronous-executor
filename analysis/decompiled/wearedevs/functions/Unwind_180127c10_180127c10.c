/* Unwind@180127c10 @ 180127c10 */

void Unwind_180127c10(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((*(char *)(param_2 + 0x66) != '\0') &&
     (lVar1 = (*(undefined8 **)(param_2 + 0x48))[1], lVar1 != 0)) {
    thunk_FUN_1801d3330(**(undefined8 **)(param_2 + 0x48),lVar1,1);
  }
  return;
}


