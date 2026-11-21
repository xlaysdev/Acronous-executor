/* Unwind@180184530 @ 180184530 */

void Unwind_180184530(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(*(longlong *)(param_2 + 0x40) + 0x18);
  *plVar1 = *plVar1 + 1;
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x58);
  *(undefined1 *)(param_2 + 0x67) = 1;
  *(undefined1 *)(param_2 + 0x66) = 0;
  return;
}


