/* Unwind@18016cd90 @ 18016cd90 */

void Unwind_18016cd90(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  lVar2 = *(longlong *)(param_2 + 0x20);
  for (lVar4 = *(longlong *)(param_2 + 0x30); lVar4 != lVar1; lVar4 = lVar4 + 1) {
    plVar3 = *(longlong **)(lVar2 + lVar4 * 8);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_1801639b0(lVar2 + lVar4 * 8);
    }
  }
  return;
}


