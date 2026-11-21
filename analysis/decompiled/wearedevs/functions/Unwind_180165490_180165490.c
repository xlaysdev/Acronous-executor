/* Unwind@180165490 @ 180165490 */

void Unwind_180165490(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(*(longlong *)(param_2 + 0x38) + 0x10);
  *plVar1 = *plVar1 + 1;
  *(undefined1 *)(param_2 + 0x4f) = 0;
  return;
}


