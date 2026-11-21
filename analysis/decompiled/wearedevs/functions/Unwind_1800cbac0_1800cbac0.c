/* Unwind@1800cbac0 @ 1800cbac0 */

void Unwind_1800cbac0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  if ((0x7fff < *(ulonglong *)(param_2 + 0x280)) && (*(longlong *)(param_2 + 600) != 0)) {
    pcVar1 = *(code **)(*(longlong *)(param_2 + 600) + 0x20);
    *(undefined1 *)(param_2 + 0x2b7) = 0;
    (*pcVar1)(*(undefined8 *)(param_2 + 0x270),*(undefined8 *)(param_2 + 0x260),
              *(undefined8 *)(param_2 + 0x268));
  }
  *(undefined1 *)(param_2 + 0x2b7) = 0;
  return;
}


