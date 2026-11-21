/* Unwind@1800336b0 @ 1800336b0 */

void Unwind_1800336b0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0x50) + 0x20);
  *(undefined1 *)(param_2 + 0xcf) = 0;
  (*pcVar1)(*(undefined8 *)(param_2 + 0x68),*(undefined8 *)(param_2 + 0x58),
            *(undefined8 *)(param_2 + 0xb0));
  *(undefined1 *)(param_2 + 0xcf) = 0;
  return;
}


