/* Unwind@18016f730 @ 18016f730 */

void Unwind_18016f730(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  plVar2 = *(longlong **)(lVar1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_1801638e0(lVar1 + 8);
    }
  }
  return;
}


