/* Unwind@18006de70 @ 18006de70 */

void Unwind_18006de70(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_2 + 0x459);
  bVar2 = *(byte *)(param_2 + 0x45a);
  if (*(longlong *)(param_2 + 0x330) == 0) {
    *(undefined1 *)(param_2 + 0x462) = 0;
    *(byte *)(param_2 + 0x461) = bVar2 & 1;
    *(byte *)(param_2 + 0x460) = bVar1 & 1;
    return;
  }
  if (*(char *)(param_2 + 0x438) == '\0') {
    *(undefined1 *)(param_2 + 0x462) = 0;
    *(byte *)(param_2 + 0x461) = bVar2 & 1;
    *(byte *)(param_2 + 0x460) = bVar1 & 1;
    return;
  }
  FUN_1800755d0(param_2 + 0x330);
  *(undefined1 *)(param_2 + 0x462) = 0;
  *(byte *)(param_2 + 0x461) = bVar2 & 1;
  *(byte *)(param_2 + 0x460) = bVar1 & 1;
  return;
}


