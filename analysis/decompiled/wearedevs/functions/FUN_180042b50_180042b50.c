/* FUN_180042b50 @ 180042b50 */

void FUN_180042b50(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[4];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1800f5960(param_1 + 4);
  }
  plVar1 = (longlong *)param_1[5];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cc40(param_1 + 5);
  }
  if (*param_1 != 0) {
    FUN_180101100(param_1 + 1);
  }
  FUN_180101150(param_1 + 2);
  return;
}


