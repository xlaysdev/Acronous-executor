/* FUN_180097190 @ 180097190 */

void FUN_180097190(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_180090be0();
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18013bc70(param_1);
  }
  plVar1 = (longlong *)param_1[1];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003d400(param_1 + 1);
  }
  if (param_1[2] != 0) {
    FUN_18013c270(param_1 + 2);
    plVar1 = (longlong *)param_1[2];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18013bc70();
      return;
    }
  }
  return;
}


