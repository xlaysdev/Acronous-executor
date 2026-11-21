/* Unwind@1801181c0 @ 1801181c0 */

void Unwind_1801181c0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0x1e0) + 0x20);
  *(undefined1 *)(param_2 + 0x217) = 1;
  *(undefined1 *)(param_2 + 0x216) = 0;
  (*pcVar1)(*(undefined8 *)(param_2 + 0x1d8),*(undefined8 *)(param_2 + 0x1d0),
            *(undefined8 *)(param_2 + 0x1c8));
  *(undefined1 *)(param_2 + 0x217) = 1;
  *(undefined1 *)(param_2 + 0x216) = 0;
  return;
}


