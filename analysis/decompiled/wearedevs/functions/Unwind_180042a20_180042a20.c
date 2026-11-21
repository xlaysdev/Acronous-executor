/* Unwind@180042a20 @ 180042a20 */

void Unwind_180042a20(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  longlong *plVar2;
  
  puVar1 = *(uint **)(param_2 + 0x20);
  if (1 < *puVar1) {
    plVar2 = *(longlong **)(puVar1 + 2);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cc40(puVar1 + 2);
    }
  }
  return;
}


