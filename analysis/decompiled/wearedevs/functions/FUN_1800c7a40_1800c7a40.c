/* FUN_1800c7a40 @ 1800c7a40 */

void FUN_1800c7a40(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x288);
  if (cVar1 == '\0') {
    FUN_1800c6e10(param_1 + 0x10);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_1800c7460(param_1 + 0x290);
    return;
  }
  if (cVar1 == '\x04') {
    FUN_1800c6e10(param_1 + 0x290);
    return;
  }
  return;
}


