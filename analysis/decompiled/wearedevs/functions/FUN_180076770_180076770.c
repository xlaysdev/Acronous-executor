/* FUN_180076770 @ 180076770 */

void FUN_180076770(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  if (*(char *)(param_1 + 3) == '\0') {
    if (param_1[1] != 0) {
      thunk_FUN_1801d3330(*param_1,param_1[1],1);
      return;
    }
  }
  else if (*(char *)(param_1 + 3) == '\x03') {
    thunk_FUN_180178080();
    uVar1 = param_1[2];
    cVar2 = FUN_180177ca0(uVar1);
    if (cVar2 != '\0') {
      FUN_1801776a0(uVar1);
      return;
    }
  }
  return;
}


