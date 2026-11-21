/* FUN_1800ee8f0 @ 1800ee8f0 */

void FUN_1800ee8f0(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0xc2);
  if (cVar1 == '\x04') {
    FUN_1800ee020(param_1 + 200);
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 != '\0') {
        return;
      }
      goto LAB_1800ee94e;
    }
    FUN_1800ee7c0(param_1 + 0xe8);
  }
  *(undefined1 *)(param_1 + 0xc3) = 0;
  param_1 = param_1 + 0x60;
LAB_1800ee94e:
  FUN_18000adf0(param_1);
  return;
}


