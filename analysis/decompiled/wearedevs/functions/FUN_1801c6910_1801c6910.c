/* FUN_1801c6910 @ 1801c6910 */

void FUN_1801c6910(undefined8 *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)param_1[1];
  if (param_1[3] - (longlong)puVar3 != 0) {
    uVar2 = (ulonglong)(param_1[3] - (longlong)puVar3) >> 4;
    do {
      plVar1 = (longlong *)*puVar3;
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_1801c68a0(puVar3);
      }
      puVar3 = puVar3 + 2;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (param_1[2] == 0) {
    return;
  }
  thunk_FUN_1801d3330(*param_1,param_1[2] << 4,8);
  return;
}


