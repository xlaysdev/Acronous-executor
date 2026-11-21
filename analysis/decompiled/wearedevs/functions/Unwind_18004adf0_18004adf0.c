/* Unwind@18004adf0 @ 18004adf0 */

/* WARNING: Type propagation algorithm not settling */

void Unwind_18004adf0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  longlong *plVar8;
  
  bVar1 = *(byte *)(param_2 + 0xdcb);
  bVar2 = *(byte *)(param_2 + 0xdcc);
  bVar3 = *(byte *)(param_2 + 0xdcd);
  bVar4 = *(byte *)(param_2 + 0xdce);
  bVar5 = *(byte *)(param_2 + 0xdd0);
  bVar6 = *(byte *)(param_2 + 0xdd1);
  bVar7 = *(byte *)(param_2 + 0xdd2);
  if (*(char *)(param_2 + 0xdcf) != '\0') {
    FUN_1800444b0(param_2 + 0xcd0);
  }
  if ((bVar4 & 1) != 0) {
    FUN_1800430f0(param_2 + 0x908);
  }
  if ((bVar2 & 1) != 0) {
    FUN_180042e50(param_2 + 0x968);
  }
  if ((bVar3 & 1) != 0) {
    FUN_180042db0(param_2 + 0x980);
  }
  if ((bVar6 & 1) != 0) {
    FUN_180044390(param_2 + 0x9d0);
  }
  if ((bVar1 & 1) != 0) {
    FUN_1800433d0(param_2 + 0x9e8);
  }
  if ((bVar7 & 1) == 0) {
    plVar8 = *(longlong **)(param_2 + 0xae8);
  }
  else {
    FUN_1800a0a80(param_2 + 0xaa8);
    plVar8 = *(longlong **)(param_2 + 0xae8);
  }
  if ((plVar8 != (longlong *)0x0) && ((bVar5 & 1) != 0)) {
    LOCK();
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      FUN_18003cc40(param_2 + 0xae8);
    }
  }
  plVar8 = *(longlong **)(param_2 + 0xaf8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      FUN_18003dca0(param_2 + 0xaf8);
    }
  }
  return;
}


