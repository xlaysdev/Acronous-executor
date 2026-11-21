/* Unwind@18016b470 @ 18016b470 */

void Unwind_18016b470(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(*(longlong *)(param_2 + 200) + 8);
  *plVar1 = *plVar1 + 1;
  *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined1 *)(param_2 + 0xdf) = 1;
  *(undefined1 *)(param_2 + 0xde) = 0;
  return;
}


