/* Unwind@180077ab0 @ 180077ab0 */

void Unwind_180077ab0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x20);
  if (*(longlong *)(param_2 + 0x28) != 0) {
    *(longlong *)(param_2 + 0x28) = -*(longlong *)(param_2 + 0x28);
    do {
      FUN_180067c10(lVar2);
      lVar2 = lVar2 + 0x50;
      plVar1 = (longlong *)(param_2 + 0x28);
      *plVar1 = *plVar1 + -1;
    } while (*plVar1 != 0);
  }
  return;
}


