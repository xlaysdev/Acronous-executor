/* FUN_1800c7a00 @ 1800c7a00 */

void FUN_1800c7a00(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x1f8);
  if (cVar1 == '\0') {
    FUN_1800c68e0(param_1 + 0x10);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_1800c73b0(param_1 + 0x200);
    return;
  }
  if (cVar1 == '\x04') {
    FUN_1800c68e0(param_1 + 0x200);
    return;
  }
  return;
}


