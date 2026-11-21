/* FUN_18007c6c0 @ 18007c6c0 */

void FUN_18007c6c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((char)param_1[2] != '\x02') {
    lVar2 = *param_1;
    LOCK();
    plVar1 = (longlong *)(lVar2 + 0x40);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (*(longlong *)(lVar2 + 0x38) < 0) {
        LOCK();
        *(ulonglong *)(lVar2 + 0x38) = *(ulonglong *)(lVar2 + 0x38) & 0x7fffffffffffffff;
        UNLOCK();
      }
      FUN_18017a7e0(lVar2 + 0x48);
    }
    plVar1 = (longlong *)*param_1;
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003dcd0(param_1);
    }
    plVar1 = (longlong *)param_1[1];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cd00(param_1 + 1);
      return;
    }
  }
  return;
}


