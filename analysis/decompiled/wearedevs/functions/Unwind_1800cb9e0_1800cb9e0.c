/* Unwind@1800cb9e0 @ 1800cb9e0 */

void Unwind_1800cb9e0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0x290) + 0x20);
  *(undefined1 *)(param_2 + 0x2b7) = 0;
  (*pcVar1)(*(undefined8 *)(param_2 + 0x2a8),*(undefined8 *)(param_2 + 0x298),
            *(undefined8 *)(param_2 + 0x2a0));
  *(undefined1 *)(param_2 + 0x2b7) = 0;
  return;
}


