/* Unwind@1801b98d0 @ 1801b98d0 */

void Unwind_1801b98d0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x176);
  if (*(char *)(param_2 + 0x177) == '\0') {
    *(byte *)(param_2 + 0x175) = bVar1 & 1;
    return;
  }
  FUN_1801b9080(param_2 + 0x140);
  *(byte *)(param_2 + 0x175) = bVar1 & 1;
  return;
}


