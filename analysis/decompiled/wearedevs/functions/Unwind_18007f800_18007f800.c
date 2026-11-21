/* Unwind@18007f800 @ 18007f800 */

void Unwind_18007f800(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_2 + 0x30) != *(longlong *)(param_2 + 0x48)) {
    do {
      lVar2 = *(longlong *)(param_2 + 0x50);
      FUN_180076810(lVar2);
      *(longlong *)(param_2 + 0x50) = lVar2 + 8;
      plVar1 = (longlong *)(param_2 + 0x40);
      *plVar1 = *plVar1 + -1;
    } while (*plVar1 != 0);
  }
  return;
}


