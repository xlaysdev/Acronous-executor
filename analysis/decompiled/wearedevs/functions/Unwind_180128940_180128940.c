/* Unwind@180128940 @ 180128940 */

void Unwind_180128940(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x80);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180114080(param_2 + 0x20);
  }
  plVar1 = *(longlong **)(param_2 + 0x88);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180114080(param_2 + 0x88);
  }
  return;
}


