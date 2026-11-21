/* Unwind@18016edc0 @ 18016edc0 */

void Unwind_18016edc0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x28);
  plVar1 = *(longlong **)(param_2 + 0x30);
  plVar1[1] = *(longlong *)(param_2 + 0x20);
  plVar1[2] = lVar2;
  *plVar1 = *plVar1 + 1;
  return;
}


