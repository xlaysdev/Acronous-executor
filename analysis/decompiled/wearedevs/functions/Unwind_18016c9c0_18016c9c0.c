/* Unwind@18016c9c0 @ 18016c9c0 */

void Unwind_18016c9c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_2 + 0x30) != *(longlong *)(param_2 + 0x38)) {
    do {
      lVar2 = *(longlong *)(param_2 + 0x40);
      FUN_18016bbc0(lVar2);
      *(longlong *)(param_2 + 0x40) = lVar2 + 0x10;
      plVar1 = (longlong *)(param_2 + 0x28);
      *plVar1 = *plVar1 + -1;
    } while (*plVar1 != 0);
  }
  return;
}


