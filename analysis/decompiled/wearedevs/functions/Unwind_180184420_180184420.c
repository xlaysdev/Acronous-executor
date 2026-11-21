/* Unwind@180184420 @ 180184420 */

void Unwind_180184420(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(*(longlong *)(param_2 + 0x40) + 8);
  *plVar1 = *plVar1 + 1;
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x58);
  *(undefined1 *)(param_2 + 0x67) = 1;
  *(undefined1 *)(param_2 + 0x66) = 0;
  return;
}


