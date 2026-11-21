/* FUN_180187600 @ 180187600 */

void FUN_180187600(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180187680(param_1);
  }
  puVar2 = (undefined8 *)param_1[3];
  lVar4 = param_1[4];
  if (lVar4 != 0) {
    puVar3 = puVar2;
    do {
      plVar1 = (longlong *)*puVar3;
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_180187680(puVar3);
      }
      puVar3 = puVar3 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (param_1[2] == 0) {
    return;
  }
  thunk_FUN_1801d3330(puVar2,param_1[2] << 3,8);
  return;
}


