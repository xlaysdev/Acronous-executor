/* Unwind@18007de90 @ 18007de90 */

void Unwind_18007de90(undefined8 param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  
  cVar1 = *(char *)(param_2 + 0x6a6);
  bVar2 = *(byte *)(param_2 + 0x6a7);
  bVar3 = *(byte *)(param_2 + 0x6a8);
  lVar4 = *(longlong *)(param_2 + 0x690);
  if (cVar1 != '\0') {
    plVar5 = *(longlong **)(param_2 + 0x660);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        FUN_180114260(param_2 + 0x660);
      }
    }
    FUN_18003b7b0(lVar4 + 0x18);
  }
  if ((bVar3 & 1) != 0) {
    FUN_1800755d0(lVar4 + 0x30);
  }
  if ((bVar2 & 1) != 0) {
    FUN_18000b7c0(lVar4 + 0x48);
  }
  if (cVar1 != '\0') {
    FUN_180077610(lVar4);
  }
  return;
}


