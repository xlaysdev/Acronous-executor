/* Unwind@180066b80 @ 180066b80 */

void Unwind_180066b80(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0x80) + 0x20);
  *(undefined1 *)(param_2 + 199) = 0;
  (*pcVar1)(*(undefined8 *)(param_2 + 0x98),*(undefined8 *)(param_2 + 0x88),
            *(undefined8 *)(param_2 + 0x78));
  *(undefined1 *)(param_2 + 199) = 0;
  return;
}


