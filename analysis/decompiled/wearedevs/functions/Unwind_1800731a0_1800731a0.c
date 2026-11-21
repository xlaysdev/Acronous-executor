/* Unwind@1800731a0 @ 1800731a0 */

void Unwind_1800731a0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  
  puVar2 = *(undefined8 **)(param_2 + 0x90);
  plVar3 = (longlong *)*puVar2;
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    FUN_18003cc40(puVar2);
    lVar4 = puVar2[2];
  }
  else {
    lVar4 = puVar2[2];
  }
  if (lVar4 == 0) {
    cVar1 = *(char *)(puVar2 + 0x11);
  }
  else {
    FUN_18003ed40(puVar2 + 2);
    cVar1 = *(char *)(puVar2 + 0x11);
  }
  if (cVar1 == '\0') {
    return;
  }
  FUN_18007c980(puVar2 + 3);
  return;
}


