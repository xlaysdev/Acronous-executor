/* FUN_18016ead0 @ 18016ead0 */

void FUN_18016ead0(undefined8 *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  bool bVar5;
  
  puVar3 = (undefined8 *)param_1[1];
  uVar4 = param_1[3] - (longlong)puVar3;
  if (uVar4 != 0) {
    uVar2 = 1;
    do {
      plVar1 = (longlong *)*puVar3;
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_180162e30(puVar3);
      }
      puVar3 = puVar3 + 1;
      bVar5 = uVar2 != uVar4 >> 3;
      uVar2 = uVar2 + 1;
    } while (bVar5);
  }
  if (param_1[2] == 0) {
    return;
  }
  thunk_FUN_1801d3330(*param_1,param_1[2] << 3,8);
  return;
}


