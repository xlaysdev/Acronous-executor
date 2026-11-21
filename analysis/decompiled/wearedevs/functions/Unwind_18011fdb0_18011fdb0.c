/* Unwind@18011fdb0 @ 18011fdb0 */

void Unwind_18011fdb0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  if ((0x7fff < *(ulonglong *)(param_2 + 0x1ce8)) && (*(longlong *)(param_2 + 0x1be0) != 0)) {
    pcVar1 = *(code **)(*(longlong *)(param_2 + 0x1be0) + 0x20);
    *(undefined1 *)(param_2 + 0x1d37) = 0;
    (*pcVar1)(*(undefined8 *)(param_2 + 0x1bf8),*(undefined8 *)(param_2 + 0x1be8),
              *(undefined8 *)(param_2 + 0x1bf0));
  }
  *(undefined1 *)(param_2 + 0x1d37) = 0;
  return;
}


