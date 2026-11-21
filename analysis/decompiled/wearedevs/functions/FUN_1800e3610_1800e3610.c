/* FUN_1800e3610 @ 1800e3610 */

void FUN_1800e3610(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x158);
  if (cVar1 == '\0') {
    FUN_1800df340();
    return;
  }
  if (cVar1 == '\x03') {
    if (*(int *)(param_1 + 0x160) != 2) {
      FUN_1800df340(param_1 + 0x160);
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_1800e0c40(*(undefined8 *)(param_1 + 0x160));
    if (*(int *)(param_1 + 0x38) != 3) {
      *(undefined1 *)(param_1 + 0x159) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x159) = 0;
  return;
}


