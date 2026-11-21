/* FUN_180168860 @ 180168860 */

void FUN_180168860(longlong param_1)

{
  longlong *plVar1;
  longlong local_8;
  
  local_8 = param_1 + -0x10;
  LOCK();
  plVar1 = (longlong *)(param_1 + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180163980(&local_8);
  }
  return;
}


