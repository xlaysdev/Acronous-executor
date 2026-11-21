/* Unwind@18017b9d0 @ 18017b9d0 */

void Unwind_18017b9d0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  longlong *plVar3;
  
  bVar1 = *(byte *)(param_2 + 0x46c);
  bVar2 = *(byte *)(param_2 + 0x46d);
  if ((bVar1 & 1) != 0) {
    plVar3 = *(longlong **)(param_2 + 0x450);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_180163bb0(param_2 + 0x450);
    }
  }
  if ((bVar2 & 1) == 0) {
    *(byte *)(param_2 + 0x469) = bVar1;
    return;
  }
  FUN_180179e50(param_2 + 0x290);
  *(byte *)(param_2 + 0x469) = bVar1;
  return;
}


