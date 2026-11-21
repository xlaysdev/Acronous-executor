/* FUN_1801145b0 @ 1801145b0 */

undefined8 FUN_1801145b0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_180121a10();
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x18), plVar1 != (longlong *)0x0)) {
    uVar2 = FUN_1801775a0(plVar1 + 6);
    if ((uVar2 & 5) == 1) {
      (**(code **)(plVar1[4] + 0x10))(plVar1[5]);
    }
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180113f90(param_1 + 0x18);
    }
  }
  *(undefined8 *)(param_1 + 0x10) = 1;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  return param_2;
}


