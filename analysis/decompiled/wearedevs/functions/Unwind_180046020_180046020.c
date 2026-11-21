/* Unwind@180046020 @ 180046020 */

void Unwind_180046020(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0x100) + 0x20);
  *(undefined1 *)(param_2 + 0x12f) = 0;
  (*pcVar1)(*(undefined8 *)(param_2 + 0x120),*(undefined8 *)(param_2 + 0x108),
            *(undefined8 *)(param_2 + 0x118));
  *(undefined1 *)(param_2 + 0x12f) = 0;
  return;
}


