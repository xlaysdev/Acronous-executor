/* FUN_18016d970 @ 18016d970 */

longlong * FUN_18016d970(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_31 = 1;
  plVar2 = param_2;
  local_48 = param_2;
  uVar1 = FUN_1801798a0(param_4);
  local_40 = param_2;
  FUN_180178f50(&local_60,&local_40,param_3,uVar1,plVar2,param_4);
  if (local_60 == 2) {
    param_1[1] = local_58;
    *param_1 = 2;
    FUN_18018bdc0(&local_40);
    LOCK();
    *local_40 = *local_40 + -1;
    UNLOCK();
    if (*local_40 == 0) {
      local_31 = 0;
      FUN_1801876c0(&local_40);
    }
  }
  else {
    *param_1 = local_60;
    param_1[1] = local_58;
    param_1[2] = local_50;
    param_1[3] = (longlong)local_40;
  }
  return param_1;
}


