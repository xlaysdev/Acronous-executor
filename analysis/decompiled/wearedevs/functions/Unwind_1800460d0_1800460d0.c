/* Unwind@1800460d0 @ 1800460d0 */

void Unwind_1800460d0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  if ((0x7fff < *(ulonglong *)(param_2 + 0x120)) && (*(longlong *)(param_2 + 0xc0) != 0)) {
    pcVar1 = *(code **)(*(longlong *)(param_2 + 0xc0) + 0x20);
    *(undefined1 *)(param_2 + 0x12f) = 0;
    (*pcVar1)(*(undefined8 *)(param_2 + 0xd8),*(undefined8 *)(param_2 + 200),
              *(undefined8 *)(param_2 + 0xd0));
  }
  *(undefined1 *)(param_2 + 0x12f) = 0;
  return;
}


