/* Unwind@18018ae00 @ 18018ae00 */

void Unwind_18018ae00(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x78);
  *(undefined8 *)(lVar1 + 0xa0) = 2;
  *(undefined8 *)(lVar1 + 0xa8) = 0;
  *(undefined8 *)(lVar1 + 0xb0) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(lVar1 + 0xb8) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(lVar1 + 0xc0) = *(undefined8 *)(param_2 + 0x60);
  *(undefined1 *)(param_2 + 0x97) = 0;
  return;
}


