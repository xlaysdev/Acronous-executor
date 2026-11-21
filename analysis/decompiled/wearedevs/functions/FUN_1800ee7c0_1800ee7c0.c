/* FUN_1800ee7c0 @ 1800ee7c0 */

void FUN_1800ee7c0(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  cVar1 = *(char *)((longlong)param_1 + 0x21);
  if (cVar1 == '\0') {
    if (param_1[1] != 0) {
      thunk_FUN_1801d3330(*param_1,param_1[1],1);
      return;
    }
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 != '\x04') {
        return;
      }
      uVar2 = param_1[5];
      puVar3 = (undefined8 *)param_1[6];
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)(uVar2);
      }
      if (puVar3[1] != 0) {
        thunk_FUN_1801d3330(uVar2,puVar3[1],puVar3[2]);
      }
    }
    if ((*(char *)(param_1 + 4) == '\0') || (param_1[7] == 0)) {
      *(undefined1 *)(param_1 + 4) = 0;
      return;
    }
    thunk_FUN_1801d3330(param_1[6],param_1[7],1);
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}


