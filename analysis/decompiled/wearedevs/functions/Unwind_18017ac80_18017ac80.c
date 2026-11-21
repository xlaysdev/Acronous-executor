/* Unwind@18017ac80 @ 18017ac80 */

void Unwind_18017ac80(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong *plVar2;
  
  bVar1 = *(byte *)(param_2 + 0x3af);
  if ((bVar1 & 1) != 0) {
    plVar2 = *(longlong **)(param_2 + 0x398);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_180163bb0(param_2 + 0x398);
    }
  }
  FUN_180179e50(param_2 + 0x360);
  *(byte *)(param_2 + 0x3ae) = bVar1;
  return;
}


