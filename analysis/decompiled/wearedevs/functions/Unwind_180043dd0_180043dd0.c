/* Unwind@180043dd0 @ 180043dd0 */

void Unwind_180043dd0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  plVar2 = *(longlong **)(lVar1 + 0x6e8);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_18003e300(lVar1 + 0x6e8);
  }
  return;
}


