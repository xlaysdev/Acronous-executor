/* Unwind@180127bb0 @ 180127bb0 */

void Unwind_180127bb0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((*(char *)(param_2 + 0x67) != '\0') &&
     (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x48) + 8), lVar1 != 0)) {
    thunk_FUN_1801d3330(**(undefined8 **)(param_2 + 0x48),lVar1,1);
  }
  *(undefined1 *)(param_2 + 0x66) = 0;
  return;
}


