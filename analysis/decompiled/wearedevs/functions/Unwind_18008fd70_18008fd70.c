/* Unwind@18008fd70 @ 18008fd70 */

void Unwind_18008fd70(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xb8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180114260(param_2 + 0xa0);
    }
  }
  FUN_18008ee90(*(undefined8 *)(param_2 + 0xb0));
  FUN_1800755d0(*(undefined8 *)(param_2 + 0xa8));
  return;
}


