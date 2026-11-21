/* Unwind@180050850 @ 180050850 */

void Unwind_180050850(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0x158) + 0x20);
  *(undefined1 *)(param_2 + 0x1bf) = 0;
  (*pcVar1)(*(undefined8 *)(param_2 + 0x170),*(undefined8 *)(param_2 + 0x160),
            *(undefined8 *)(param_2 + 0x168));
  *(undefined1 *)(param_2 + 0x1bf) = 0;
  return;
}


