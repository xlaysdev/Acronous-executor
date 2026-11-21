/* Unwind@1801184a0 @ 1801184a0 */

void Unwind_1801184a0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  if (*(longlong *)(param_2 + 0x200) != 0 && 0x7fff < *(ulonglong *)(param_2 + 0x1c0)) {
    pcVar1 = *(code **)(*(longlong *)(param_2 + 0x200) + 0x20);
    *(undefined1 *)(param_2 + 0x217) = 0;
    *(undefined1 *)(param_2 + 0x216) = 0;
    (*pcVar1)(*(undefined8 *)(param_2 + 0x1e8),*(undefined8 *)(param_2 + 0x208),
              *(undefined8 *)(param_2 + 0x1f8));
  }
  *(undefined1 *)(param_2 + 0x217) = 0;
  *(undefined1 *)(param_2 + 0x216) = 0;
  return;
}


