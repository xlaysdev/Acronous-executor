/* FUN_180110600 @ 180110600 */

void FUN_180110600(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
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


