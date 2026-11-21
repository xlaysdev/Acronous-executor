/* FUN_1800a5d50 @ 1800a5d50 */

void FUN_1800a5d50(char *param_1)

{
  longlong *plVar1;
  uint uVar2;
  
  FUN_1800ac410();
  if (*param_1 == '\0') {
    if ((*(longlong *)(param_1 + 8) != 0) &&
       (plVar1 = *(longlong **)(param_1 + 0x10), plVar1 != (longlong *)0x0)) {
      uVar2 = FUN_1801775a0(plVar1 + 6);
      if ((uVar2 & 5) == 1) {
        (**(code **)(plVar1[4] + 0x10))(plVar1[5]);
      }
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_18003d880(param_1 + 0x10);
        return;
      }
    }
  }
  else if ((*(longlong *)(param_1 + 8) != 0) &&
          (plVar1 = *(longlong **)(param_1 + 0x10), plVar1 != (longlong *)0x0)) {
    uVar2 = FUN_1801775a0(plVar1 + 6);
    if ((uVar2 & 5) == 1) {
      (**(code **)(plVar1[4] + 0x10))(plVar1[5]);
    }
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003d580(param_1 + 0x10);
      return;
    }
  }
  return;
}


