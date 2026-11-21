/* Unwind@1801405a0 @ 1801405a0 */

void Unwind_1801405a0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 400) + 0x20);
  *(undefined1 *)(param_2 + 0x507) = 0;
  (*pcVar1)(*(undefined8 *)(param_2 + 0x1a8),*(undefined8 *)(param_2 + 0x198),
            *(undefined8 *)(param_2 + 0x4f8));
  *(undefined1 *)(param_2 + 0x507) = 0;
  return;
}


