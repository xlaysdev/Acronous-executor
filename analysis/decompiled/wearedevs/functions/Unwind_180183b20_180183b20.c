/* Unwind@180183b20 @ 180183b20 */

void Unwind_180183b20(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  longlong *plVar3;
  
  bVar1 = *(byte *)(param_2 + 0x476);
  bVar2 = *(byte *)(param_2 + 0x477);
  if ((bVar1 & 1) != 0) {
    plVar3 = *(longlong **)(param_2 + 0x3b8);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_1801638e0(param_2 + 0x3b8);
    }
  }
  if ((bVar2 & 1) == 0) {
    *(undefined1 *)(param_2 + 0x46f) = 0;
    *(byte *)(param_2 + 0x46e) = bVar1;
    return;
  }
  plVar3 = *(longlong **)(param_2 + 0x290);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    FUN_1801638e0(param_2 + 0x290);
  }
  *(undefined1 *)(param_2 + 0x46f) = 1;
  *(byte *)(param_2 + 0x46e) = bVar1;
  return;
}


