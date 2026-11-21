/* FUN_180168bd0 @ 180168bd0 */

void FUN_180168bd0(longlong param_1)

{
  longlong *local_20;
  longlong *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_20 = (longlong *)(param_1 + -0x10);
  local_18 = local_20;
  FUN_1801691b0();
  LOCK();
  *local_18 = *local_18 + -1;
  UNLOCK();
  if (*local_18 == 0) {
    FUN_180163980(&local_20);
  }
  return;
}


