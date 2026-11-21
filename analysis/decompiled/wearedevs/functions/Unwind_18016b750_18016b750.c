/* Unwind@18016b750 @ 18016b750 */

void Unwind_18016b750(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(*(longlong *)(param_2 + 0x30) + 8);
  *plVar1 = *plVar1 + 1;
  *(undefined1 *)(param_2 + 0x47) = 0;
  return;
}


