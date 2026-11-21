/* Unwind@180172040 @ 180172040 */

void Unwind_180172040(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  
  bVar2 = *(byte *)(param_2 + 0xbf);
  plVar3 = *(longlong **)(param_2 + 0xb0);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    FUN_180187950(param_2 + 0x90);
    plVar3 = *(longlong **)(param_2 + 0x98);
    LOCK();
    *plVar3 = *plVar3 + -1;
    lVar1 = *plVar3;
    UNLOCK();
  }
  else {
    plVar3 = *(longlong **)(param_2 + 0x98);
    LOCK();
    *plVar3 = *plVar3 + -1;
    lVar1 = *plVar3;
    UNLOCK();
  }
  if (lVar1 == 0) {
    FUN_180187680(param_2 + 0x98);
  }
  if ((bVar2 & 1) != 0) {
    plVar3 = *(longlong **)(param_2 + 0xa8);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_180187950(param_2 + 0xa8);
    }
  }
  return;
}


