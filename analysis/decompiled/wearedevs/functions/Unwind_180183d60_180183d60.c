/* Unwind@180183d60 @ 180183d60 */

void Unwind_180183d60(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_2 + 0x465);
  bVar2 = *(byte *)(param_2 + 0x466);
  if (*(char *)(param_2 + 0x467) == '\0') {
    *(undefined1 *)(param_2 + 0x46a) = 0;
    *(byte *)(param_2 + 0x469) = bVar2 & 1;
    *(byte *)(param_2 + 0x468) = bVar1 & 1;
    return;
  }
  FUN_18016c8e0(param_2 + 0x3f8);
  if (*(longlong *)(param_2 + 0x3f8) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x400),*(longlong *)(param_2 + 0x3f8) << 4,8);
  }
  *(undefined1 *)(param_2 + 0x46a) = 1;
  *(byte *)(param_2 + 0x469) = bVar2 & 1;
  *(byte *)(param_2 + 0x468) = bVar1 & 1;
  return;
}


