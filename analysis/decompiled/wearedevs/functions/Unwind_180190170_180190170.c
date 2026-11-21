/* Unwind@180190170 @ 180190170 */

void Unwind_180190170(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  if (*(longlong *)(param_2 + 0x30) + -1 != *(longlong *)(param_2 + 0x40)) {
    lVar2 = ~*(ulonglong *)(param_2 + 0x40) + *(longlong *)(param_2 + 0x30);
    do {
      puVar3 = puVar3 + 1;
      plVar1 = (longlong *)*puVar3;
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_180187b30(puVar3);
      }
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}


