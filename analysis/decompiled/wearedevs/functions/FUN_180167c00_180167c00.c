/* FUN_180167c00 @ 180167c00 */

void FUN_180167c00(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)param_1[1];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180163980(param_1 + 1);
    }
  }
  else {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180187950(param_1);
    }
    lVar2 = param_1[7];
    if (lVar2 != 0) {
      puVar4 = (undefined8 *)param_1[6];
      lVar3 = 1;
      do {
        plVar1 = (longlong *)*puVar4;
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          FUN_180162e30(puVar4);
        }
        puVar4 = puVar4 + 1;
        bVar5 = lVar3 != lVar2;
        lVar3 = lVar3 + 1;
      } while (bVar5);
    }
    if (param_1[5] != 0) {
      thunk_FUN_1801d3330(param_1[6],param_1[5] << 3,8);
    }
    plVar1 = (longlong *)param_1[1];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180187680(param_1 + 1);
    }
  }
  if (*(int *)(param_1 + 0x13) == 1000000000) {
    return;
  }
  thunk_FUN_1801d3330(param_1[0xc],0x1860,8);
  return;
}


