/* Unwind@1800c1ef0 @ 1800c1ef0 */

void Unwind_1800c1ef0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x25d);
  if (*(char *)(param_2 + 0x25e) == '\0') {
    *(byte *)(param_2 + 0x25f) = bVar1 & 1;
    return;
  }
  FUN_1800b9b40(*(undefined8 *)(param_2 + 0x2d0));
  *(byte *)(param_2 + 0x25f) = bVar1 & 1;
  return;
}


