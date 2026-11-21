/* Unwind@1801ac440 @ 1801ac440 */

void Unwind_1801ac440(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  if (*(char *)(param_2 + 0x107) != '\0') {
    pcVar1 = *(code **)(*(longlong *)(param_2 + 0xa0) + 0x20);
    *(undefined1 *)(param_2 + 0x106) = 0;
    (*pcVar1)(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(param_2 + 0xa8),
              *(undefined8 *)(param_2 + 0xb0));
  }
  *(undefined1 *)(param_2 + 0x106) = 0;
  return;
}


