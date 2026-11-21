/* Unwind@1800c28a0 @ 1800c28a0 */

void Unwind_1800c28a0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x46d);
  if (*(char *)(param_2 + 0x46e) == '\0') {
    *(byte *)(param_2 + 0x46f) = bVar1 & 1;
    return;
  }
  FUN_1800ba0a0(*(undefined8 *)(param_2 + 0x4e0));
  *(byte *)(param_2 + 0x46f) = bVar1 & 1;
  return;
}


