/* Unwind@180183920 @ 180183920 */

void Unwind_180183920(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_2 + 0x470);
  bVar2 = *(byte *)(param_2 + 0x472);
  if (*(char *)(param_2 + 0x471) == '\0') {
    *(byte *)(param_2 + 0x475) = bVar2 & 1;
    *(undefined1 *)(param_2 + 0x474) = 0;
    *(byte *)(param_2 + 0x473) = bVar1 & 1;
    return;
  }
  if (*(longlong *)(param_2 + 0x450) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x448),*(undefined8 *)(param_2 + 0x3d8),8);
  }
  *(byte *)(param_2 + 0x475) = bVar2 & 1;
  *(undefined1 *)(param_2 + 0x474) = 1;
  *(byte *)(param_2 + 0x473) = bVar1 & 1;
  return;
}


