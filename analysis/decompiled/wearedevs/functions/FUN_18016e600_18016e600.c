/* FUN_18016e600 @ 18016e600 */

void FUN_18016e600(longlong param_1)

{
  longlong *plVar1;
  longlong local_8;
  
  local_8 = param_1 + -0x80;
  LOCK();
  plVar1 = (longlong *)(param_1 + -0x80);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1801635e0(&local_8);
  }
  return;
}


