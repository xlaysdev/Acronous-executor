/* Unwind@18012ddd0 @ 18012ddd0 */

void Unwind_18012ddd0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0x20) + 0x20);
  *(undefined1 *)(param_2 + 0x67) = 0;
  (*pcVar1)(*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x28),
            *(undefined8 *)(param_2 + 0x50));
  *(undefined1 *)(param_2 + 0x67) = 0;
  return;
}


