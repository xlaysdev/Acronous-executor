/* Unwind@1800456b0 @ 1800456b0 */

void Unwind_1800456b0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0xb0) + 0x20);
  *(undefined1 *)(param_2 + 0x11f) = 1;
  *(undefined1 *)(param_2 + 0x11e) = 0;
  (*pcVar1)(*(undefined8 *)(param_2 + 0x110),*(undefined8 *)(param_2 + 0xb8),
            *(undefined8 *)(param_2 + 0x108));
  *(undefined1 *)(param_2 + 0x11f) = 1;
  *(undefined1 *)(param_2 + 0x11e) = 0;
  return;
}


