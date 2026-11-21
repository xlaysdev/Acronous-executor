/* Unwind@18006cde0 @ 18006cde0 */

void Unwind_18006cde0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_2 + 0x65d);
  bVar2 = *(byte *)(param_2 + 0x65e);
  if (*(char *)(param_2 + 0x65f) == '\0') {
    *(byte *)(param_2 + 0x658) = bVar2 & 1;
    *(byte *)(param_2 + 0x657) = bVar1 & 1;
    return;
  }
  FUN_18007a660(param_2 + 0x2b0);
  *(byte *)(param_2 + 0x658) = bVar2 & 1;
  *(byte *)(param_2 + 0x657) = bVar1 & 1;
  return;
}


