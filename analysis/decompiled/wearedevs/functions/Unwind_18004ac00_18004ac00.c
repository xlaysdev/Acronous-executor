/* Unwind@18004ac00 @ 18004ac00 */

void Unwind_18004ac00(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0xdc9);
  if (*(char *)(param_2 + 0xdca) == '\0') {
    *(byte *)(param_2 + 0xdd7) = bVar1 & 1;
    *(undefined1 *)(param_2 + 0xdd6) = 1;
    *(undefined1 *)(param_2 + 0xdd5) = 1;
    *(undefined1 *)(param_2 + 0xdd4) = 1;
    *(undefined1 *)(param_2 + 0xdd3) = 1;
    return;
  }
  FUN_180041bb0(param_2 + 0xd48);
  *(byte *)(param_2 + 0xdd7) = bVar1 & 1;
  *(undefined1 *)(param_2 + 0xdd6) = 1;
  *(undefined1 *)(param_2 + 0xdd5) = 1;
  *(undefined1 *)(param_2 + 0xdd4) = 1;
  *(undefined1 *)(param_2 + 0xdd3) = 1;
  return;
}


