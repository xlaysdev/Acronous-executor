/* Unwind@180183ca0 @ 180183ca0 */

void Unwind_180183ca0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_2 + 0x473);
  bVar2 = *(byte *)(param_2 + 0x475);
  if (*(char *)(param_2 + 0x474) == '\0') {
    *(byte *)(param_2 + 0x467) = bVar2 & 1;
    *(undefined1 *)(param_2 + 0x466) = 0;
    *(byte *)(param_2 + 0x465) = bVar1 & 1;
    return;
  }
  if (*(longlong *)(param_2 + 0x3e0) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 1000),*(longlong *)(param_2 + 0x3e0) << 7,0x80);
  }
  *(byte *)(param_2 + 0x467) = bVar2 & 1;
  *(undefined1 *)(param_2 + 0x466) = 1;
  *(byte *)(param_2 + 0x465) = bVar1 & 1;
  return;
}


