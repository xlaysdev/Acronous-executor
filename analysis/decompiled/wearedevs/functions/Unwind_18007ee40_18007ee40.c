/* Unwind@18007ee40 @ 18007ee40 */

void Unwind_18007ee40(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x30);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1801876c0(param_2 + 0x30);
  }
  return;
}


