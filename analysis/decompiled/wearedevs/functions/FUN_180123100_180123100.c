/* FUN_180123100 @ 180123100 */

longlong * FUN_180123100(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *local_20;
  longlong *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_20 = param_1;
  local_18 = param_1;
  cVar1 = FUN_18013a0c0(param_2);
  if (cVar1 == '\0') {
    return local_18;
  }
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *local_18 = *local_18 + -1;
    UNLOCK();
    if (*local_18 == 0) {
      FUN_180114260(&local_20);
    }
  }
  return (longlong *)0x0;
}


