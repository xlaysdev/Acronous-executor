/* Unwind@18018fe30 @ 18018fe30 */

void Unwind_18018fe30(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_2 + 0x58);
  plVar1 = (longlong *)(param_2 + 0x38);
  *plVar1 = *plVar1 + lVar3;
  lVar2 = *(longlong *)(param_2 + 0x30);
  if (*plVar1 != 0) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x68) + lVar3 * 8);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_180187b30(*(longlong *)(param_2 + 0x68) + lVar3 * 8);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != lVar2);
  }
  return;
}


