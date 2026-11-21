/* FUN_1801c4b90 @ 1801c4b90 */

void FUN_1801c4b90(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  bool bVar6;
  
  puVar1 = (undefined8 *)param_1[1];
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    lVar4 = 1;
    puVar5 = puVar1;
    do {
      plVar3 = (longlong *)*puVar5;
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_1801c68a0(puVar5);
      }
      puVar5 = puVar5 + 2;
      bVar6 = lVar4 != lVar2;
      lVar4 = lVar4 + 1;
    } while (bVar6);
  }
  if (*param_1 == 0) {
    return;
  }
  thunk_FUN_1801d3330(puVar1,*param_1 << 4,8);
  return;
}


