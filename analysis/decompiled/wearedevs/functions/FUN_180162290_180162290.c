/* FUN_180162290 @ 180162290 */

void FUN_180162290(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    CloseHandle((HANDLE)param_1[2]);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1801e3970(param_1);
    }
    plVar1 = (longlong *)param_1[1];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1801e3850(param_1 + 1);
      return;
    }
  }
  return;
}


