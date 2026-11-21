/* FUN_180187950 @ 180187950 */

void FUN_180187950(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar1 = *param_1;
  FUN_18018f5c0();
  plVar2 = *(longlong **)(lVar1 + 0x10);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_180187680();
  }
  FUN_18018ffd0();
  if (*(longlong *)(lVar1 + 0x48) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar1 + 0x50),*(longlong *)(lVar1 + 0x48) << 3,8);
  }
  plVar2 = *(longlong **)(lVar1 + 0x18);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_180187680(lVar1 + 0x18);
  }
  lVar4 = *(longlong *)(lVar1 + 0x38);
  if (lVar4 != 0) {
    puVar3 = *(undefined8 **)(lVar1 + 0x30);
    do {
      plVar2 = (longlong *)*puVar3;
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180187680(puVar3);
      }
      puVar3 = puVar3 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (*(longlong *)(lVar1 + 0x28) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar1 + 0x30),*(longlong *)(lVar1 + 0x28) << 3,8);
  }
  if (lVar1 != -1) {
    LOCK();
    plVar2 = (longlong *)(lVar1 + 8);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      thunk_FUN_1801d3330(lVar1,0x70,8);
      return;
    }
  }
  return;
}


