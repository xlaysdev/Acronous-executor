/* Unwind@180128ec0 @ 180128ec0 */

void Unwind_180128ec0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x30);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180114080(param_2 + 0x28);
  }
  return;
}


