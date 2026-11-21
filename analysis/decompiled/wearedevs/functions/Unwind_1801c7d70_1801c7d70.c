/* Unwind@1801c7d70 @ 1801c7d70 */

void Unwind_1801c7d70(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  longlong *plVar3;
  
  bVar1 = *(byte *)(param_2 + 0x192);
  bVar2 = *(byte *)(param_2 + 0x193);
  plVar3 = *(longlong **)(param_2 + 0x188);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    FUN_1801e3970(param_2 + 0x188);
  }
  *(byte *)(param_2 + 0x197) = bVar2 & 1;
  *(byte *)(param_2 + 0x196) = bVar1 & 1;
  *(undefined1 *)(param_2 + 0x195) = 0;
  return;
}


