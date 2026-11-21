/* FUN_1800915c0 @ 1800915c0 */

bool FUN_1800915c0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = param_1;
  if (param_2 == 0) {
    if (param_1 != (longlong *)0x0) {
      uVar1 = FUN_1801775a0(param_1 + 6);
      if ((uVar1 & 5) == 1) {
        (**(code **)(param_1[4] + 0x10))(param_1[5]);
        param_1 = local_28;
        if (local_28 == (longlong *)0x0) goto LAB_1800915e8;
      }
      LOCK();
      *param_1 = *param_1 + -1;
      UNLOCK();
      if (*param_1 == 0) {
        FUN_18003de40(&local_28);
      }
    }
  }
  else {
    FUN_1800e4430(param_1,param_2);
  }
LAB_1800915e8:
  return param_2 != 0;
}


