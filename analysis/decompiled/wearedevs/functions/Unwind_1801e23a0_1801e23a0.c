/* Unwind@1801e23a0 @ 1801e23a0 */

void Unwind_1801e23a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 8);
  if (lVar4 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x30),lVar4,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x38) + 0x10));
  }
  plVar3 = *(longlong **)(param_2 + 0x20);
  if (*(longlong *)(param_2 + 0x28) != 0) {
    lVar4 = -*(longlong *)(param_2 + 0x28);
    do {
      lVar1 = plVar3[-1];
      puVar2 = (undefined8 *)*plVar3;
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(lVar1);
      }
      if (puVar2[1] != 0) {
        thunk_FUN_1801d3330(lVar1,puVar2[1],puVar2[2]);
      }
      plVar3 = plVar3 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}


