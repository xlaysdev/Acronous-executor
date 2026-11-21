/* Unwind@1801201b0 @ 1801201b0 */

void Unwind_1801201b0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0x1a60) + 0x20);
  *(undefined1 *)(param_2 + 0x1d30) = 1;
  *(undefined1 *)(param_2 + 0x1d2f) = 0;
  (*pcVar1)(*(undefined8 *)(param_2 + 0x1a78),*(undefined8 *)(param_2 + 0x1a68),
            *(undefined8 *)(param_2 + 0x1d00));
  *(undefined1 *)(param_2 + 0x1d30) = 1;
  *(undefined1 *)(param_2 + 0x1d2f) = 0;
  return;
}


