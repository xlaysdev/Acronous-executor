/* Unwind@18017eba0 @ 18017eba0 */

void Unwind_18017eba0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x50);
  if (*(longlong *)(param_2 + 0x48) != 0) {
    *(longlong *)(param_2 + 0x48) = -*(longlong *)(param_2 + 0x48);
    do {
      puVar2 = puVar2 + 1;
      plVar1 = (longlong *)*puVar2;
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_180162e30(puVar2);
      }
      plVar1 = (longlong *)(param_2 + 0x48);
      *plVar1 = *plVar1 + -1;
    } while (*plVar1 != 0);
  }
  return;
}


