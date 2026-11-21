/* Unwind@180146b10 @ 180146b10 */

void Unwind_180146b10(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  if (*(longlong *)(param_2 + 0xe8) != 0 && 0x7fff < *(ulonglong *)(param_2 + 0xe0)) {
    pcVar1 = *(code **)(*(longlong *)(param_2 + 0xe8) + 0x20);
    *(undefined1 *)(param_2 + 0xff) = 0;
    *(undefined1 *)(param_2 + 0xfe) = 0;
    (*pcVar1)(*(undefined8 *)(param_2 + 0xf0),*(undefined8 *)(param_2 + 200),
              *(undefined8 *)(param_2 + 0xd8));
  }
  *(undefined1 *)(param_2 + 0xff) = 0;
  *(undefined1 *)(param_2 + 0xfe) = 0;
  return;
}


