/* FUN_180077530 @ 180077530 */

void FUN_180077530(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cd00(param_1);
  }
  lVar2 = param_1[1];
  LOCK();
  plVar1 = (longlong *)(lVar2 + 0x1c8);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18009c5a0(lVar2 + 0x80);
    FUN_18017a7e0(lVar2 + 0x100);
  }
  plVar1 = (longlong *)param_1[1];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003e0f0();
    return;
  }
  return;
}


