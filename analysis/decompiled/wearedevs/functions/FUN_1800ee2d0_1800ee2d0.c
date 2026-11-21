/* FUN_1800ee2d0 @ 1800ee2d0 */

void FUN_1800ee2d0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*param_1 != 0) {
    if ((int)*param_1 != 2) {
      FUN_180101100(param_1 + 1);
      return;
    }
    lVar1 = param_1[1];
    if (((uint)lVar1 & 3) == 1) {
      uVar2 = *(undefined8 *)(lVar1 + -1);
      puVar3 = *(undefined8 **)(lVar1 + 7);
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)(uVar2);
      }
      if (puVar3[1] != 0) {
        thunk_FUN_1801d3330(uVar2,puVar3[1],puVar3[2]);
      }
      thunk_FUN_1801d3330(lVar1 + -1,0x18,8);
      return;
    }
  }
  return;
}


