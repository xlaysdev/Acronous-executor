/* Unwind@18017d3b0 @ 18017d3b0 */

void Unwind_18017d3b0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  longlong *plVar3;
  
  bVar1 = *(byte *)(param_2 + 0x102);
  bVar2 = *(byte *)(param_2 + 0x103);
  plVar3 = *(longlong **)(param_2 + 0xf8);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    FUN_1801e3970(param_2 + 0xf8);
  }
  *(byte *)(param_2 + 0x107) = bVar2 & 1;
  *(byte *)(param_2 + 0x106) = bVar1 & 1;
  *(undefined1 *)(param_2 + 0x105) = 0;
  return;
}


