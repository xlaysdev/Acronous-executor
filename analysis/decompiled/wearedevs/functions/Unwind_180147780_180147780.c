/* Unwind@180147780 @ 180147780 */

void Unwind_180147780(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0x68) + 0x20);
  *(undefined1 *)(param_2 + 0x77) = 0;
  (*pcVar1)(*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x58),
            *(undefined8 *)(param_2 + 0x50));
  *(undefined1 *)(param_2 + 0x77) = 0;
  return;
}


