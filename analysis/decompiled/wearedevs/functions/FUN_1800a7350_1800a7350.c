/* FUN_1800a7350 @ 1800a7350 */

void FUN_1800a7350(char *param_1)

{
  longlong *plVar1;
  uint uVar2;
  
  if ((*param_1 != '\0') && (plVar1 = *(longlong **)(param_1 + 8), plVar1 != (longlong *)0x0)) {
    uVar2 = FUN_1801775a0(plVar1 + 6);
    if ((uVar2 & 5) == 1) {
      (**(code **)(plVar1[4] + 0x10))(plVar1[5]);
    }
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180113f90(param_1 + 8);
      return;
    }
  }
  return;
}


