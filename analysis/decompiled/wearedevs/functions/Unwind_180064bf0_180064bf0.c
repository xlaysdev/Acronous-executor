/* Unwind@180064bf0 @ 180064bf0 */

void Unwind_180064bf0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_2 + 0x278);
  if (cVar1 == '\t') {
    return;
  }
  if ((*(byte *)(param_2 + 0x74e) & 1) == 0) {
    return;
  }
  if (cVar1 == '\0') {
    return;
  }
  if (cVar1 == '\x03') {
    return;
  }
  FUN_180066870(param_2 + 0x278);
  return;
}


