/* Unwind@1800a3530 @ 1800a3530 */

void Unwind_1800a3530(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0x438) + 0x18);
  *(undefined1 *)(param_2 + 0x45f) = 1;
  (*pcVar1)(*(undefined8 *)(param_2 + 0x440));
  *(undefined1 *)(param_2 + 0x45f) = 1;
  return;
}


