/* Unwind@1800f4730 @ 1800f4730 */

void Unwind_1800f4730(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x1340) + 0x2d8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003d670(*(longlong *)(param_2 + 0x1340) + 0x2d8);
  }
  return;
}


