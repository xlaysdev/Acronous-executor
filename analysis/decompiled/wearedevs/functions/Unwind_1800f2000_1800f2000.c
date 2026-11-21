/* Unwind@1800f2000 @ 1800f2000 */

void Unwind_1800f2000(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 1000) + 0x180);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cc40(*(longlong *)(param_2 + 1000) + 0x180);
  }
  return;
}


