/* Unwind@1801ccf70 @ 1801ccf70 */

void Unwind_1801ccf70(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_2 + 0x68) != 0) {
    *(longlong *)(param_2 + 0x68) = -*(longlong *)(param_2 + 0x68);
    do {
      lVar2 = *(longlong *)(param_2 + 0x70);
      FUN_1801cca30(lVar2);
      *(longlong *)(param_2 + 0x70) = lVar2 + 0x20;
      plVar1 = (longlong *)(param_2 + 0x68);
      *plVar1 = *plVar1 + -1;
    } while (*plVar1 != 0);
  }
  return;
}


