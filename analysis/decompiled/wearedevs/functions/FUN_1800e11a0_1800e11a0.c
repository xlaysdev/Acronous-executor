/* FUN_1800e11a0 @ 1800e11a0 */

void FUN_1800e11a0(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x1d0) == '\0') {
LAB_1800e1230:
    FUN_1800df340(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x1d0) == '\x03') {
    cVar1 = *(char *)(param_1 + 400);
    if (cVar1 == '\0') {
      param_1 = param_1 + 0x38;
      goto LAB_1800e1230;
    }
    if (cVar1 == '\x04') {
      FUN_1800e0c40(*(undefined8 *)(param_1 + 0x198));
      if (*(int *)(param_1 + 0x70) != 3) {
        *(undefined1 *)(param_1 + 0x191) = 0;
      }
    }
    else {
      if (cVar1 != '\x03') {
        return;
      }
      if (*(int *)(param_1 + 0x198) != 2) {
        FUN_1800df340(param_1 + 0x198);
      }
    }
    *(undefined1 *)(param_1 + 0x191) = 0;
  }
  return;
}


