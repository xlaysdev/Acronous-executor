/* FUN_18010f230 @ 18010f230 */

void FUN_18010f230(int *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 0) {
    if (*(longlong *)(param_1 + 4) != 0 && *(longlong *)(param_1 + 2) != 0) {
      thunk_FUN_1801d3330(*(longlong *)(param_1 + 2),*(longlong *)(param_1 + 4),1);
      return;
    }
  }
  else if (*param_1 == 1) {
    if ((char)param_1[2] == '\0') {
      FUN_18010f130(param_1 + 4);
      return;
    }
    lVar1 = *(longlong *)(param_1 + 6);
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)(param_1 + 8);
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(lVar1);
      }
      if (puVar2[1] != 0) {
        thunk_FUN_1801d3330(lVar1,puVar2[1],puVar2[2]);
        return;
      }
    }
  }
  return;
}


