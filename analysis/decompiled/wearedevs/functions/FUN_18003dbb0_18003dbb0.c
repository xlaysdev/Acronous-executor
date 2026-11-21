/* FUN_18003dbb0 @ 18003dbb0 */

void FUN_18003dbb0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  lVar2 = *param_1;
  if (*(longlong *)(lVar2 + 0x10) == 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x18);
    puVar4 = *(undefined8 **)(lVar2 + 0x20);
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)(uVar3);
    }
    if (puVar4[1] != 0) {
      thunk_FUN_1801d3330(uVar3,puVar4[1],puVar4[2]);
    }
  }
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      thunk_FUN_1801d3330(lVar2,0x28,8);
      return;
    }
  }
  return;
}


