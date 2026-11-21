/* Unwind@180035680 @ 180035680 */

void Unwind_180035680(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x20);
  *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_2 + 0x28);
  plVar1 = (longlong *)(lVar2 + 8);
  *plVar1 = *plVar1 + 1;
  return;
}


