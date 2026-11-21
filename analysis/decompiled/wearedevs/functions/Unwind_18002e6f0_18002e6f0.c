/* Unwind@18002e6f0 @ 18002e6f0 */

void Unwind_18002e6f0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0xb0) + 0x20);
  *(undefined1 *)(param_2 + 0x11f) = 0;
  (*pcVar1)(*(undefined8 *)(param_2 + 200),*(undefined8 *)(param_2 + 0xb8),
            *(undefined8 *)(param_2 + 0x110));
  *(undefined1 *)(param_2 + 0x11f) = 0;
  return;
}


