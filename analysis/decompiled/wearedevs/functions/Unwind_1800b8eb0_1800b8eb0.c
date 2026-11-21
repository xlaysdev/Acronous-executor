/* Unwind@1800b8eb0 @ 1800b8eb0 */

void Unwind_1800b8eb0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x58);
  plVar2 = *(longlong **)(lVar1 + 0x10);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_1801029b0(lVar1 + 0x10);
  }
  return;
}


