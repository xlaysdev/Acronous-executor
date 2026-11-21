/* FUN_1800ef720 @ 1800ef720 */

void FUN_1800ef720(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = *(char *)(param_1 + 0x368);
  if (cVar1 == '\0') {
    FUN_1800ee5e0();
    return;
  }
  if (cVar1 == '\x03') {
    if (*(int *)(param_1 + 0x370) != 3) {
      FUN_1800ee5e0(param_1 + 0x370);
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    lVar2 = *(longlong *)(param_1 + 0x370);
    if (lVar2 != 0) {
      FUN_1800ef3d0(lVar2);
      thunk_FUN_1801d3330(lVar2,0x228,8);
    }
    if (*(int *)(param_1 + 0x140) != 3) {
      *(undefined1 *)(param_1 + 0x369) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x369) = 0;
  return;
}


