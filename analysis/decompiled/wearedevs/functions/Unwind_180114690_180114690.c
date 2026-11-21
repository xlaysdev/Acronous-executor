/* Unwind@180114690 @ 180114690 */

void Unwind_180114690(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x48);
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_2 + 0x28);
  if (*(longlong *)(param_2 + 0x38) != 0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_1801139f0(param_2 + 0x20);
    }
  }
  return;
}


