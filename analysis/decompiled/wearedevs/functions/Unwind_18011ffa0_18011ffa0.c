/* Unwind@18011ffa0 @ 18011ffa0 */

void Unwind_18011ffa0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  if (*(char *)(param_2 + 0x1d37) == '\0') {
    *(undefined1 *)(param_2 + 0x1d36) = 1;
    return;
  }
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0x1bc0) + 0x20);
  *(undefined1 *)(param_2 + 0x1d36) = 1;
  (*pcVar1)(*(undefined8 *)(param_2 + 0x1bd8),*(undefined8 *)(param_2 + 0x1cf0),
            *(undefined8 *)(param_2 + 0x1cf8));
  *(undefined1 *)(param_2 + 0x1d36) = 1;
  return;
}


