/* Unwind@180120120 @ 180120120 */

void Unwind_180120120(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  if ((*(char *)(param_2 + 0x1d0a) != '\0') && (*(longlong *)(param_2 + 0x1be0) != 0)) {
    pcVar1 = *(code **)(*(longlong *)(param_2 + 0x1be0) + 0x20);
    *(undefined1 *)(param_2 + 0x1d36) = 0;
    (*pcVar1)(*(undefined8 *)(param_2 + 0x1bf8),*(undefined8 *)(param_2 + 0x1be8),
              *(undefined8 *)(param_2 + 0x1bf0));
  }
  *(undefined1 *)(param_2 + 0x1d36) = 0;
  return;
}


