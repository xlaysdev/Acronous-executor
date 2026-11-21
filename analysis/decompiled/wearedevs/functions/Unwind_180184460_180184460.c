/* Unwind@180184460 @ 180184460 */

void Unwind_180184460(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  bVar1 = *(byte *)(param_2 + 0x66);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  if (*(char *)(param_2 + 0x67) == '\0') {
    *(undefined8 *)(param_2 + 0x30) = uVar2;
    *(byte *)(param_2 + 0x65) = bVar1 & 1;
    return;
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    FUN_1801638e0(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x30) = uVar2;
  *(byte *)(param_2 + 0x65) = bVar1 & 1;
  return;
}


