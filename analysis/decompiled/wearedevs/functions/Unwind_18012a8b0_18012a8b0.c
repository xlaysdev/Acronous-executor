/* Unwind@18012a8b0 @ 18012a8b0 */

void Unwind_18012a8b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_2 + 0x40) != *(longlong *)(param_2 + 0x28)) {
    do {
      lVar2 = *(longlong *)(param_2 + 0x30);
      FUN_180026670(lVar2);
      *(longlong *)(param_2 + 0x30) = lVar2 + 0x68;
      plVar1 = (longlong *)(param_2 + 0x20);
      *plVar1 = *plVar1 + -1;
    } while (*plVar1 != 0);
  }
  return;
}


