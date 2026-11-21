/* FUN_1801c6400 @ 1801c6400 */

void FUN_1801c6400(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar1 = (undefined8 *)param_1[1];
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    puVar3 = puVar1;
    do {
      plVar2 = (longlong *)*puVar3;
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_1801c68a0(puVar3);
      }
      puVar3 = puVar3 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (*param_1 != 0) {
    thunk_FUN_1801d3330(puVar1,*param_1 << 5,8);
  }
  puVar1 = (undefined8 *)param_1[4];
  lVar4 = param_1[5];
  if (lVar4 != 0) {
    puVar3 = puVar1;
    do {
      plVar2 = (longlong *)*puVar3;
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_1801c68a0(puVar3);
      }
      puVar3 = puVar3 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (param_1[3] == 0) {
    return;
  }
  thunk_FUN_1801d3330(puVar1,param_1[3] << 4,8);
  return;
}


