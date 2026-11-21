/* Unwind@18006cbc0 @ 18006cbc0 */

void Unwind_18006cbc0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x659);
  if (*(char *)(param_2 + 0x65a) != '\0') {
    FUN_18003b7b0(param_2 + 0x5a8);
    FUN_1800755d0(param_2 + 0x5c0);
    FUN_18000b7c0(param_2 + 0x5d8);
  }
  if ((bVar1 & 1) == 0) {
    *(undefined1 *)(param_2 + 0x65f) = 0;
    *(undefined1 *)(param_2 + 0x65e) = 0;
    *(undefined1 *)(param_2 + 0x65d) = 0;
    return;
  }
  FUN_180077610(param_2 + 0x590);
  *(undefined1 *)(param_2 + 0x65f) = 0;
  *(undefined1 *)(param_2 + 0x65e) = 0;
  *(undefined1 *)(param_2 + 0x65d) = 0;
  return;
}


