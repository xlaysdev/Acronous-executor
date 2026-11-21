/* Unwind@18006df40 @ 18006df40 */

void Unwind_18006df40(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_2 + 0x461);
  bVar2 = *(byte *)(param_2 + 0x462);
  if (*(char *)(param_2 + 0x460) == '\0') {
    *(byte *)(param_2 + 0x464) = bVar2 & 1;
    *(byte *)(param_2 + 0x463) = bVar1 & 1;
    return;
  }
  FUN_18007c020(param_2 + 0x2b0);
  *(byte *)(param_2 + 0x464) = bVar2 & 1;
  *(byte *)(param_2 + 0x463) = bVar1 & 1;
  return;
}


