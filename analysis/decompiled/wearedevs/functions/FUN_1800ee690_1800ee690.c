/* FUN_1800ee690 @ 1800ee690 */

void FUN_1800ee690(short *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 3) {
    FUN_18007eeb0();
    if (*(longlong *)(param_1 + 0x10) != -1) {
      FUN_18007b1e0(*(longlong *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x14));
    }
    FUN_1800b0d40(param_1 + 4);
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x1c);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(lVar1);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_1801d3330(lVar1,puVar2[1],puVar2[2]);
      return;
    }
  }
  return;
}


