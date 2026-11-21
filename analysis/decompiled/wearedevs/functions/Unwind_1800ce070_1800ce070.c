/* Unwind@1800ce070 @ 1800ce070 */

void Unwind_1800ce070(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x2b30) + 0xdd8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003d670(*(longlong *)(param_2 + 0x2b30) + 0xdd8);
  }
  return;
}


