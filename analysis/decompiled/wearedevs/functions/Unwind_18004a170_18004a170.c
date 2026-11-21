/* Unwind@18004a170 @ 18004a170 */

void Unwind_18004a170(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0xda9);
  if (*(char *)(param_2 + 0xdaa) == '\0') {
    *(byte *)(param_2 + 0xdad) = bVar1 & 1;
    *(undefined1 *)(param_2 + 0xdac) = *(undefined1 *)(param_2 + 0xd89);
    *(undefined1 *)(param_2 + 0xdab) = 0;
    return;
  }
  FUN_180041c30(param_2 + 0x3e0);
  *(byte *)(param_2 + 0xdad) = bVar1 & 1;
  *(undefined1 *)(param_2 + 0xdac) = *(undefined1 *)(param_2 + 0xd89);
  *(undefined1 *)(param_2 + 0xdab) = 0;
  return;
}


