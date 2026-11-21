/* FUN_1801dfde0 @ 1801dfde0 */

void FUN_1801dfde0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  
  LOCK();
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) {
    FUN_1802008f0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}


