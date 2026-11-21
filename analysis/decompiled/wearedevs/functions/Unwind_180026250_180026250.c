/* Unwind@180026250 @ 180026250 */

void Unwind_180026250(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  if (*(char *)(param_2 + 0x197) == '\0') {
    pcVar1 = *(code **)(*(longlong *)(param_2 + 0x180) + 0x20);
    *(undefined1 *)(param_2 + 0x1a7) = 0;
    (*pcVar1)(*(undefined8 *)(param_2 + 0x188),*(undefined8 *)(param_2 + 0x170),
              *(undefined8 *)(param_2 + 0x178));
  }
  *(undefined1 *)(param_2 + 0x1a7) = 0;
  return;
}


