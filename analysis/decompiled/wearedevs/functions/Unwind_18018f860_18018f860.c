/* Unwind@18018f860 @ 18018f860 */

void Unwind_18018f860(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar2 = *(undefined8 **)(param_2 + 0x30);
  if (*(longlong *)(param_2 + 0x28) != 0) {
    lVar3 = -*(longlong *)(param_2 + 0x28);
    do {
      puVar2 = puVar2 + 1;
      plVar1 = (longlong *)*puVar2;
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_180187b30(puVar2);
      }
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}


