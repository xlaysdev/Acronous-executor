/* Unwind@180065c20 @ 180065c20 */

void Unwind_180065c20(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  plVar2 = *(longlong **)(lVar1 + 8);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_18003d400(lVar1 + 8);
  }
  return;
}


