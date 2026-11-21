/* Unwind@180045770 @ 180045770 */

void Unwind_180045770(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  if (*(longlong *)(param_2 + 0xe8) != 0 && 0x7fff < *(ulonglong *)(param_2 + 0x108)) {
    pcVar1 = *(code **)(*(longlong *)(param_2 + 0xe8) + 0x20);
    *(undefined1 *)(param_2 + 0x11f) = 0;
    *(undefined1 *)(param_2 + 0x11e) = 0;
    (*pcVar1)(*(undefined8 *)(param_2 + 0x110),*(undefined8 *)(param_2 + 0xf0),
              *(undefined8 *)(param_2 + 0xf8));
  }
  *(undefined1 *)(param_2 + 0x11f) = 0;
  *(undefined1 *)(param_2 + 0x11e) = 0;
  return;
}


