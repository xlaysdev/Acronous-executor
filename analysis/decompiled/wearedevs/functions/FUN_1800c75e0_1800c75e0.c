/* FUN_1800c75e0 @ 1800c75e0 */

void FUN_1800c75e0(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0xb68);
  if (cVar1 == '\0') {
    FUN_1800c61c0(param_1 + 0x10);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_1800c7300(param_1 + 0xb70);
    return;
  }
  if (cVar1 == '\x04') {
    FUN_1800c61c0(param_1 + 0xb70);
    return;
  }
  return;
}


