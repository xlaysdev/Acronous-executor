/* Unwind@18006ce70 @ 18006ce70 */

void Unwind_18006ce70(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x657);
  if (*(char *)(param_2 + 0x658) == '\0') {
    *(byte *)(param_2 + 0x65c) = bVar1 & 1;
    *(undefined1 *)(param_2 + 0x65b) = 0;
    return;
  }
  FUN_18000b7c0(param_2 + 0x570);
  *(byte *)(param_2 + 0x65c) = bVar1 & 1;
  *(undefined1 *)(param_2 + 0x65b) = 0;
  return;
}


