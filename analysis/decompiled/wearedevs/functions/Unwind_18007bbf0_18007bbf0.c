/* Unwind@18007bbf0 @ 18007bbf0 */

void Unwind_18007bbf0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  plVar2 = *(longlong **)(lVar1 + 8);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_18003e050(lVar1 + 8);
  }
  return;
}


