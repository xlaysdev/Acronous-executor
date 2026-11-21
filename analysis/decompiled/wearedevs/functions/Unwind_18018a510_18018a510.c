/* Unwind@18018a510 @ 18018a510 */

void Unwind_18018a510(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x74);
  if (*(char *)(param_2 + 0x76) == '\0') {
    *(byte *)(param_2 + 0x77) = bVar1 & 1;
    return;
  }
  if ((*(byte *)(param_2 + 0x75) & 1) == 0) {
    *(byte *)(param_2 + 0x77) = bVar1 & 1;
    return;
  }
  FUN_18002ce10(*(undefined8 *)(param_2 + 0x58));
  *(byte *)(param_2 + 0x77) = bVar1 & 1;
  return;
}


