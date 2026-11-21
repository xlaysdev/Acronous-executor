/* Unwind@1800499f0 @ 1800499f0 */

void Unwind_1800499f0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  longlong *plVar6;
  
  bVar1 = *(byte *)(param_2 + 0xdd3);
  bVar2 = *(byte *)(param_2 + 0xdd4);
  bVar3 = *(byte *)(param_2 + 0xdd5);
  bVar4 = *(byte *)(param_2 + 0xdd6);
  bVar5 = *(byte *)(param_2 + 0xdd7);
  plVar6 = *(longlong **)(param_2 + 0xd30);
  LOCK();
  *plVar6 = *plVar6 + -1;
  UNLOCK();
  if (*plVar6 == 0) {
    FUN_18003cc40(param_2 + 0xd30);
  }
  *(char *)(param_2 + 0xdc8) = (char)*(undefined4 *)(param_2 + 0xd68);
  *(byte *)(param_2 + 0xdc7) = bVar5 & 1;
  *(char *)(param_2 + 0xdc6) = (char)*(undefined4 *)(param_2 + 0xd94);
  *(byte *)(param_2 + 0xdc5) = bVar4 & 1;
  *(byte *)(param_2 + 0xdc4) = bVar3 & 1;
  *(byte *)(param_2 + 0xdc3) = bVar2 & 1;
  *(byte *)(param_2 + 0xdc2) = bVar1 & 1;
  return;
}


