/* Unwind@18016b660 @ 18016b660 */

void Unwind_18016b660(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x30);
  *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_2 + 0x38);
  plVar1 = (longlong *)(lVar2 + 8);
  *plVar1 = *plVar1 + 1;
  *(undefined1 *)(param_2 + 0x47) = 1;
  return;
}


