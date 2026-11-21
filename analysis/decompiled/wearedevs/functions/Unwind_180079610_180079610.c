/* Unwind@180079610 @ 180079610 */

void Unwind_180079610(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_2 + 0x30) != *(longlong *)(param_2 + 0x38)) {
    do {
      lVar2 = *(longlong *)(param_2 + 0x48);
      FUN_180076810(lVar2);
      *(longlong *)(param_2 + 0x48) = lVar2 + 8;
      plVar1 = (longlong *)(param_2 + 0x28);
      *plVar1 = *plVar1 + -1;
    } while (*plVar1 != 0);
  }
  return;
}


