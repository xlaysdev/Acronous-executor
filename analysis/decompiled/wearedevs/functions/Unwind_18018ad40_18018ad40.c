/* Unwind@18018ad40 @ 18018ad40 */

void Unwind_18018ad40(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x70);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1801876c0(param_2 + 0x70);
  }
  return;
}


