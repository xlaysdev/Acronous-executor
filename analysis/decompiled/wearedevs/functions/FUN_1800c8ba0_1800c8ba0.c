/* FUN_1800c8ba0 @ 1800c8ba0 */

void FUN_1800c8ba0(int *param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = (char)param_1[0xda];
  if (cVar1 == '\0') {
    if (*param_1 == 2) {
      FUN_18007eeb0(param_1 + 2);
      FUN_1800ba880(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10));
      FUN_1800c8d30(param_1 + 2);
      return;
    }
    FUN_1800c7620();
    return;
  }
  if (cVar1 == '\x03') {
    FUN_1800c8970(param_1 + 0xdc);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    lVar2 = *(longlong *)(param_1 + 0xdc);
    if (lVar2 != 0) {
      FUN_1800c8160(lVar2);
      thunk_FUN_1801d3330(lVar2,0x228,8);
    }
    if (param_1[0x50] != 3) {
      *(undefined1 *)((longlong)param_1 + 0x369) = 0;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x369) = 0;
  return;
}


