/* FUN_1801c8310 @ 1801c8310 */

void FUN_1801c8310(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  if ((lVar1 != 0) && (lVar2 != 0)) {
    puVar3 = *(undefined8 **)(param_1 + 0x28);
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(lVar2);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_1801d3330(lVar2,puVar3[1],puVar3[2]);
    }
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 != (longlong *)0x0) {
    FUN_1801dfdb0(plVar4 + 2,
                  CONCAT71((int7)((ulonglong)lVar1 >> 8),(byte)lVar1 & lVar2 != 0) & 0xffffffff);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_1801e3800((undefined8 *)(param_1 + 0x10));
    }
  }
  if ((*(longlong *)(param_1 + 0x18) != 0) && (lVar1 = *(longlong *)(param_1 + 0x20), lVar1 != 0)) {
    puVar3 = *(undefined8 **)(param_1 + 0x28);
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(lVar1);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_1801d3330(lVar1,puVar3[1],puVar3[2]);
    }
  }
  return;
}


