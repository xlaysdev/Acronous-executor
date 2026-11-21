/* Unwind@18011ff00 @ 18011ff00 */

void Unwind_18011ff00(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  if (*(char *)(param_2 + 0x1d0b) == '\0') {
    pcVar1 = *(code **)(*(longlong *)(param_2 + 0x1cd8) + 0x20);
    *(undefined1 *)(param_2 + 0x1d35) = 0;
    *(undefined1 *)(param_2 + 0x1d34) = 0;
    (*pcVar1)(*(undefined8 *)(param_2 + 0x1cb0),*(undefined8 *)(param_2 + 0x1cf0),
              *(undefined8 *)(param_2 + 0x1ce8));
  }
  *(undefined1 *)(param_2 + 0x1d35) = 0;
  *(undefined1 *)(param_2 + 0x1d34) = 0;
  return;
}


