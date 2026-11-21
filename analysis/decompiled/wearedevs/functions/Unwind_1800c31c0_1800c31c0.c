/* Unwind@1800c31c0 @ 1800c31c0 */

void Unwind_1800c31c0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x24e);
  if (*(char *)(param_2 + 0x24f) == '\0') {
    *(byte *)(param_2 + 0x24d) = bVar1 & 1;
    return;
  }
  FUN_1800b9bd0(*(undefined8 *)(param_2 + 0x2c0));
  *(byte *)(param_2 + 0x24d) = bVar1 & 1;
  return;
}


