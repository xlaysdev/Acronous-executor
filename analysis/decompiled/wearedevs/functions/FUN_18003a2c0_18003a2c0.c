/* FUN_18003a2c0 @ 18003a2c0 */

void FUN_18003a2c0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *local_20;
  undefined8 *local_18;
  
  if (*(char *)(param_1 + 2) == '\x02') {
    plVar1 = (longlong *)*param_1;
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cd00(param_1);
    }
    local_20 = (longlong *)param_1[1];
    LOCK();
    plVar1 = local_20 + 0x39;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18009c5a0(local_20 + 0x10);
      FUN_18017a7e0(local_20 + 0x20);
    }
  }
  else {
    plVar1 = (longlong *)*param_1;
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cd00(param_1);
    }
    local_20 = (longlong *)param_1[1];
    LOCK();
    plVar1 = local_20 + 0x39;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18009c5a0(local_20 + 0x10);
      FUN_18017a7e0(local_20 + 0x20);
    }
  }
  local_18 = param_1 + 1;
  LOCK();
  *local_20 = *local_20 + -1;
  UNLOCK();
  if (*local_20 == 0) {
    FUN_18003e0f0(local_18);
    return;
  }
  return;
}


