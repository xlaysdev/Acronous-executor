/* Unwind@1801651f0 @ 1801651f0 */

void Unwind_1801651f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(*(longlong *)(param_2 + 0x30) + 0x10);
  *plVar1 = *plVar1 + 1;
  *(undefined1 *)(param_2 + 0x3f) = 0;
  return;
}


