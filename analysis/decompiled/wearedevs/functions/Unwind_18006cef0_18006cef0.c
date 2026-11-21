/* Unwind@18006cef0 @ 18006cef0 */

void Unwind_18006cef0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x65b);
  if (*(char *)(param_2 + 0x65c) == '\0') {
    *(byte *)(param_2 + 0x656) = bVar1 & 1;
    return;
  }
  FUN_180077610(param_2 + 0x610);
  *(byte *)(param_2 + 0x656) = bVar1 & 1;
  return;
}


