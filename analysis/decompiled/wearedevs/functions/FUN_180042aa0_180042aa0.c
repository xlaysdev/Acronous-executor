/* FUN_180042aa0 @ 180042aa0 */

void FUN_180042aa0(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    uVar3 = FUN_1801775a0(plVar2 + 6);
    if ((uVar3 & 5) == 1) {
      (**(code **)(plVar2[4] + 0x10))(plVar2[5]);
      plVar2 = (longlong *)*param_1;
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      LOCK();
      *plVar2 = *plVar2 + -1;
      lVar1 = *plVar2;
      UNLOCK();
    }
    else {
      LOCK();
      *plVar2 = *plVar2 + -1;
      lVar1 = *plVar2;
      UNLOCK();
    }
    if (lVar1 == 0) {
      FUN_180113f90(param_1);
      return;
    }
  }
  return;
}


