/* FUN_18002cc30 @ 18002cc30 */

void FUN_18002cc30(longlong *param_1)

{
  longlong *plVar1;
  
  if (*param_1 != 0) {
    FUN_1801e5800(param_1 + 1);
  }
  plVar1 = (longlong *)param_1[2];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18002d110(param_1[2]);
    return;
  }
  return;
}


