/* Unwind@1800508b0 @ 1800508b0 */

void Unwind_1800508b0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  if (*(ulonglong *)(param_2 + 0xe8) <= *(ulonglong *)(param_2 + 0x1a0)) {
    pcVar1 = *(code **)(*(longlong *)(param_2 + 0x188) + 0x20);
    *(undefined1 *)(param_2 + 0x1bf) = 0;
    (*pcVar1)(*(undefined8 *)(param_2 + 0x198),*(undefined8 *)(param_2 + 0x1b0),
              *(undefined8 *)(param_2 + 0x1a8));
  }
  *(undefined1 *)(param_2 + 0x1bf) = 0;
  return;
}


