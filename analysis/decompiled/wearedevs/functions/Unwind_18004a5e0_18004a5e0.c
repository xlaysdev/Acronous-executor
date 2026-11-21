/* Unwind@18004a5e0 @ 18004a5e0 */

void Unwind_18004a5e0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_2 + 0xd98);
  lVar2 = *(longlong *)(param_2 + 0xd78);
  for (lVar4 = *(longlong *)(param_2 + 0xdb0); lVar4 != lVar1; lVar4 = lVar4 + 1) {
    plVar3 = *(longlong **)(lVar2 + lVar4 * 0x10);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003cc40(lVar4 * 0x10 + lVar2);
    }
  }
  return;
}


