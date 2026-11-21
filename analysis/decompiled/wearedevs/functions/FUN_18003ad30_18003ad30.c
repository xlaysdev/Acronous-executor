/* FUN_18003ad30 @ 18003ad30 */

void FUN_18003ad30(int *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (*param_1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 2);
    puVar2 = *(undefined8 **)(param_1 + 4);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(uVar3);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_1801d3330(uVar3,puVar2[1],puVar2[2]);
      return;
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    puVar2 = *(undefined8 **)(param_1 + 6);
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


