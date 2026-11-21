/* FUN_18002d5a0 @ 18002d5a0 */

void FUN_18002d5a0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  if (param_2 != 0) {
    param_2 = 1 - param_2;
    do {
      uVar1 = *param_1;
      cVar2 = FUN_180177f20(uVar1);
      if (cVar2 != '\0') {
        FUN_1801776b0(uVar1);
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    } while (param_2 != 1);
  }
  return;
}


