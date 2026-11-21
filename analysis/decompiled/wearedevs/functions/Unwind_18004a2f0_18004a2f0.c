/* Unwind@18004a2f0 @ 18004a2f0 */

void Unwind_18004a2f0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar1 = *(byte *)(param_2 + 0xdbf);
  bVar2 = *(byte *)(param_2 + 0xdc0);
  bVar3 = *(byte *)(param_2 + 0xdc1);
  if (*(char *)(param_2 + 0xdbe) == '\0') {
    *(undefined1 *)(param_2 + 0xdd7) = 0;
    *(byte *)(param_2 + 0xdd6) = bVar3 & 1;
    *(byte *)(param_2 + 0xdd5) = bVar2 & 1;
    *(byte *)(param_2 + 0xdd4) = bVar1 & 1;
    *(undefined1 *)(param_2 + 0xdd3) = 0;
    return;
  }
  FUN_180043680(param_2 + 0x590);
  *(undefined1 *)(param_2 + 0xdd7) = 0;
  *(byte *)(param_2 + 0xdd6) = bVar3 & 1;
  *(byte *)(param_2 + 0xdd5) = bVar2 & 1;
  *(byte *)(param_2 + 0xdd4) = bVar1 & 1;
  *(undefined1 *)(param_2 + 0xdd3) = 1;
  return;
}


