/* Unwind@18011a4f0 @ 18011a4f0 */

void Unwind_18011a4f0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0x80) + 0x20);
  *(undefined1 *)(param_2 + 0xd7) = 0;
  (*pcVar1)(*(undefined8 *)(param_2 + 0x98),*(undefined8 *)(param_2 + 0x88),
            *(undefined8 *)(param_2 + 0xa8));
  *(undefined1 *)(param_2 + 0xd7) = 0;
  return;
}


