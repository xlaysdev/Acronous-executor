/* FUN_18003dcd0 @ 18003dcd0 */

void FUN_18003dcd0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  lVar1 = *param_1;
  puVar4 = *(undefined8 **)(lVar1 + 0x18);
  while (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar4;
    thunk_FUN_1801d3330(puVar4,8,8);
    puVar4 = puVar2;
  }
  puVar4 = *(undefined8 **)(lVar1 + 0x28);
  while (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar4;
    plVar3 = (longlong *)puVar4[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_18003cd00(puVar4 + 1);
      }
    }
    thunk_FUN_1801d3330(puVar4,0x10,8);
    puVar4 = puVar2;
  }
  if (*(longlong *)(lVar1 + 0x48) != 0) {
    (**(code **)(*(longlong *)(lVar1 + 0x48) + 0x18))(*(undefined8 *)(lVar1 + 0x50));
  }
  if (lVar1 != -1) {
    LOCK();
    plVar3 = (longlong *)(lVar1 + 8);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      thunk_FUN_1801d3330(lVar1,0x60,8);
      return;
    }
  }
  return;
}


