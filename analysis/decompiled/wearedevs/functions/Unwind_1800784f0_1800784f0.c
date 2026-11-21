/* Unwind@1800784f0 @ 1800784f0 */

void Unwind_1800784f0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x40);
  plVar2 = *(longlong **)(lVar1 + 0x218);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_18003cc40(lVar1 + 0x218);
  }
  return;
}


