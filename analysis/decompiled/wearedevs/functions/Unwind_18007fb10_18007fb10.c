/* Unwind@18007fb10 @ 18007fb10 */

void Unwind_18007fb10(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x38);
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(longlong *)(param_2 + 0x40) = -*(longlong *)(param_2 + 0x40);
    do {
      FUN_180067c10(lVar2);
      lVar2 = lVar2 + 0x50;
      plVar1 = (longlong *)(param_2 + 0x40);
      *plVar1 = *plVar1 + -1;
    } while (*plVar1 != 0);
  }
  return;
}


