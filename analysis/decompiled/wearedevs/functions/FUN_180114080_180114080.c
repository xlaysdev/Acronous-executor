/* FUN_180114080 @ 180114080 */

void FUN_180114080(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  
  lVar1 = *param_1;
  plVar4 = *(longlong **)(lVar1 + 0x18);
  while (plVar4 != (longlong *)0x0) {
    plVar2 = (longlong *)plVar4[5];
    if (*plVar4 != 0) {
      FUN_180044a30(plVar4 + 1);
    }
    thunk_FUN_1801d3330(plVar4,0x30,8);
    plVar4 = plVar2;
  }
  puVar5 = *(undefined8 **)(lVar1 + 0x28);
  while (puVar5 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar5;
    plVar4 = (longlong *)puVar5[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        FUN_18003cd00(puVar5 + 1);
      }
    }
    thunk_FUN_1801d3330(puVar5,0x10,8);
    puVar5 = puVar3;
  }
  if (*(longlong *)(lVar1 + 0x48) != 0) {
    (**(code **)(*(longlong *)(lVar1 + 0x48) + 0x18))(*(undefined8 *)(lVar1 + 0x50));
  }
  if (lVar1 != -1) {
    LOCK();
    plVar4 = (longlong *)(lVar1 + 8);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      thunk_FUN_1801d3330(lVar1,0x60,8);
      return;
    }
  }
  return;
}


