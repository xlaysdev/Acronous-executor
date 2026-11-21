/* Unwind@1800c6630 @ 1800c6630 */

void Unwind_1800c6630(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x38);
  if (*(char *)(lVar1 + 0x53a) == '\0') {
    return;
  }
  plVar2 = *(longlong **)(lVar1 + 0x270);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003dca0(lVar1 + 0x270);
    }
  }
  return;
}


