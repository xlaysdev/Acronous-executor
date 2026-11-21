/* Unwind@180053630 @ 180053630 */

void Unwind_180053630(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  if (*(char *)(param_2 + 0x10d) == '\0') {
    pcVar1 = *(code **)(*(longlong *)(param_2 + 0xb0) + 0x20);
    *(undefined1 *)(param_2 + 0x10f) = 0;
    *(undefined1 *)(param_2 + 0x10e) = 0;
    (*pcVar1)(*(undefined8 *)(param_2 + 0x100),*(undefined8 *)(param_2 + 0xe8),
              *(undefined8 *)(param_2 + 0xe0));
  }
  *(undefined1 *)(param_2 + 0x10f) = 0;
  *(undefined1 *)(param_2 + 0x10e) = 0;
  return;
}


