/* FUN_1800e28c0 @ 1800e28c0 */

void FUN_1800e28c0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  cVar1 = *(char *)((longlong)param_1 + 0x49);
  if (cVar1 == '\0') {
    lVar2 = param_1[7];
    puVar3 = (undefined8 *)param_1[8];
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(lVar2);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_1801d3330(lVar2,puVar3[1],puVar3[2]);
    }
    if (*param_1 != 0) {
      FUN_180101100(param_1 + 1);
    }
    FUN_180101150(param_1 + 2);
  }
  else {
    if (cVar1 == '\x03') {
      lVar2 = param_1[10];
      puVar3 = (undefined8 *)param_1[0xb];
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)(lVar2);
      }
      if (puVar3[1] != 0) {
        thunk_FUN_1801d3330(lVar2,puVar3[1],puVar3[2]);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_1800e10f0(param_1 + 10);
      *(undefined1 *)((longlong)param_1 + 0x4a) = 0;
    }
    *(undefined1 *)((longlong)param_1 + 0x4b) = 0;
    if (*param_1 != 0) {
      FUN_180101100(param_1 + 1);
    }
    FUN_180101150(param_1 + 2);
  }
  if (param_1[4] == 0) {
    return;
  }
  thunk_FUN_1801d3330(param_1[5],param_1[4],1);
  return;
}


