/* FUN_18018f160 @ 18018f160 */

void FUN_18018f160(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180187680(param_1);
  }
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    puVar4 = (undefined8 *)param_1[3];
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
  if (param_1[2] == 0) {
    return;
  }
  thunk_FUN_1801d3330(param_1[3],param_1[2] << 3,8);
  return;
}


