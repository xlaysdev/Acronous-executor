/* Unwind@180181870 @ 180181870 */

void Unwind_180181870(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  LOCK();
  plVar1 = (longlong *)(*(longlong *)(param_2 + 0x30) + 0x20);
  lVar2 = *plVar1;
  *plVar1 = 0;
  UNLOCK();
  *(longlong *)(param_2 + 0x28) = lVar2;
  if (lVar2 != 0) {
    FUN_18016f640(param_2 + 0x28);
  }
  return;
}


