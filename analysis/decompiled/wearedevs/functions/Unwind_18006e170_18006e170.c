/* Unwind@18006e170 @ 18006e170 */

void Unwind_18006e170(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  longlong *plVar3;
  
  bVar1 = *(byte *)(param_2 + 0x45b);
  bVar2 = *(byte *)(param_2 + 0x45c);
  if (*(char *)(param_2 + 0x45d) == '\0') {
    *(byte *)(param_2 + 0x45f) = bVar2 & 1;
    *(byte *)(param_2 + 0x45e) = bVar1 & 1;
    return;
  }
  plVar3 = *(longlong **)(param_2 + 0x448);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_180114260(param_2 + 0x448);
    }
  }
  *(byte *)(param_2 + 0x45f) = bVar2 & 1;
  *(byte *)(param_2 + 0x45e) = bVar1 & 1;
  return;
}


