/* FUN_1801625a0 @ 1801625a0 */

void FUN_1801625a0(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_18017cc50();
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180163890();
    return;
  }
  return;
}


