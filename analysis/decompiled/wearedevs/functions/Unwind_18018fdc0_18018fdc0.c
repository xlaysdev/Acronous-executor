/* Unwind@18018fdc0 @ 18018fdc0 */

void Unwind_18018fdc0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_2 + 0x60) + -1 != *(longlong *)(param_2 + 0x58)) {
    *(longlong *)(param_2 + 0x68) = *(longlong *)(param_2 + 0x68) + 8;
    lVar2 = ~*(ulonglong *)(param_2 + 0x58) + *(longlong *)(param_2 + 0x60);
    do {
      plVar1 = (longlong *)**(undefined8 **)(param_2 + 0x68);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_180187b30(*(undefined8 *)(param_2 + 0x68));
      }
      *(longlong *)(param_2 + 0x68) = *(longlong *)(param_2 + 0x68) + 8;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}


