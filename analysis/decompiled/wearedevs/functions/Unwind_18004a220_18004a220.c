/* Unwind@18004a220 @ 18004a220 */

void Unwind_18004a220(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_2 + 0xdab);
  bVar2 = *(byte *)(param_2 + 0xdac);
  if (*(char *)(param_2 + 0xdad) == '\0') {
    *(undefined1 *)(param_2 + 0xdbc) = 0;
    *(byte *)(param_2 + 0xdbb) = bVar2 & 1;
    *(byte *)(param_2 + 0xdba) = bVar1 & 1;
    *(undefined1 *)(param_2 + 0xdb9) = 0;
    return;
  }
  if ((*(ulonglong *)(param_2 + 0xdb0) & 0x7fffffffffffffff) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0xcc8),*(ulonglong *)(param_2 + 0xdb0),1);
  }
  *(undefined1 *)(param_2 + 0xdbc) = 1;
  *(byte *)(param_2 + 0xdbb) = bVar2 & 1;
  *(byte *)(param_2 + 0xdba) = bVar1 & 1;
  *(undefined1 *)(param_2 + 0xdb9) = 0;
  return;
}


