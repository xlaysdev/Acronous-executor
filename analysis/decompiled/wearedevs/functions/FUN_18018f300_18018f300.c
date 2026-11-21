/* FUN_18018f300 @ 18018f300 */

void FUN_18018f300(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  
  FUN_18018f5c0();
  plVar1 = *(longlong **)(param_1 + 0x10);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180187680();
  }
  FUN_18018ffd0();
  if (*(longlong *)(param_1 + 0x48) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x50),*(longlong *)(param_1 + 0x48) << 3,8);
  }
  plVar1 = *(longlong **)(param_1 + 0x18);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180187680(param_1 + 0x18);
  }
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (lVar2 != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x30);
    lVar3 = 1;
    do {
      plVar1 = (longlong *)*puVar4;
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_180187680(puVar4);
      }
      puVar4 = puVar4 + 1;
      bVar5 = lVar3 != lVar2;
      lVar3 = lVar3 + 1;
    } while (bVar5);
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x30),*(longlong *)(param_1 + 0x28) << 3,8);
  return;
}


