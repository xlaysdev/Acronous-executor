/* Unwind@18007ac10 @ 18007ac10 */

void Unwind_18007ac10(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  plVar2 = *(longlong **)(lVar1 + 0x28);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_18003cc40(lVar1 + 0x28);
  }
  return;
}


