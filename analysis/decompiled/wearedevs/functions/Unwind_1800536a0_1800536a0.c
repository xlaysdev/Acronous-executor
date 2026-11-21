/* Unwind@1800536a0 @ 1800536a0 */

void Unwind_1800536a0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0xa0) + 0x20);
  *(undefined1 *)(param_2 + 0x10f) = 1;
  *(undefined1 *)(param_2 + 0x10e) = 0;
  (*pcVar1)(*(undefined8 *)(param_2 + 0xf0),*(undefined8 *)(param_2 + 0xa8),
            *(undefined8 *)(param_2 + 0x100));
  *(undefined1 *)(param_2 + 0x10f) = 1;
  *(undefined1 *)(param_2 + 0x10e) = 0;
  return;
}


