/* FUN_1800edd90 @ 1800edd90 */

void FUN_1800edd90(short *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if ((*param_1 != 3) && (lVar1 = *(longlong *)(param_1 + 0x18), lVar1 != 0)) {
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


