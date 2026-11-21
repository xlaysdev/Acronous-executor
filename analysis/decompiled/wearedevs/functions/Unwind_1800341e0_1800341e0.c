/* Unwind@1800341e0 @ 1800341e0 */

void Unwind_1800341e0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  plVar2 = *(longlong **)(lVar1 + 0x78);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_18003e300(lVar1 + 0x78);
  }
  return;
}


