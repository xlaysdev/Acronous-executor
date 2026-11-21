/* FUN_180162330 @ 180162330 */

void FUN_180162330(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  bool bVar6;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 != 0) {
    lVar4 = 1;
    puVar5 = puVar1;
    do {
      plVar3 = (longlong *)*puVar5;
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_180162e30(puVar5);
      }
      puVar5 = puVar5 + 1;
      bVar6 = lVar4 != lVar2;
      lVar4 = lVar4 + 1;
    } while (bVar6);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  thunk_FUN_1801d3330(puVar1,*(longlong *)(param_1 + 8) << 3,8);
  return;
}


