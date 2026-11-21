/* Unwind@180180930 @ 180180930 */

void Unwind_180180930(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x48);
  lVar2 = *(longlong *)(param_2 + 0x38);
  *(undefined8 *)(lVar1 + 0x18 + lVar2) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(lVar1 + 0x20 + lVar2) = *(undefined8 *)(param_2 + 0x28);
  return;
}


