/* Unwind@18004acc0 @ 18004acc0 */

void Unwind_18004acc0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined1 uVar6;
  longlong *plVar7;
  
  bVar1 = *(byte *)(param_2 + 0xdc2);
  bVar2 = *(byte *)(param_2 + 0xdc3);
  bVar3 = *(byte *)(param_2 + 0xdc4);
  uVar4 = *(undefined1 *)(param_2 + 0xdc6);
  bVar5 = *(byte *)(param_2 + 0xdc7);
  uVar6 = *(undefined1 *)(param_2 + 0xdc8);
  if (*(char *)(param_2 + 0xdc5) == '\0') {
    *(undefined1 *)(param_2 + 0xdd2) = uVar6;
    *(byte *)(param_2 + 0xdd1) = bVar5 & 1;
    *(undefined1 *)(param_2 + 0xdd0) = uVar4;
    *(undefined1 *)(param_2 + 0xdcf) = 0;
    *(undefined1 *)(param_2 + 0xdce) = 0;
    *(byte *)(param_2 + 0xdcd) = bVar3 & 1;
    *(byte *)(param_2 + 0xdcc) = bVar2 & 1;
    *(byte *)(param_2 + 0xdcb) = bVar1 & 1;
    return;
  }
  plVar7 = *(longlong **)(param_2 + 0xd60);
  LOCK();
  *plVar7 = *plVar7 + -1;
  UNLOCK();
  if (*plVar7 == 0) {
    FUN_18003d670(param_2 + 0xd60);
  }
  *(undefined1 *)(param_2 + 0xdd2) = uVar6;
  *(byte *)(param_2 + 0xdd1) = bVar5 & 1;
  *(undefined1 *)(param_2 + 0xdd0) = uVar4;
  *(undefined1 *)(param_2 + 0xdcf) = 0;
  *(undefined1 *)(param_2 + 0xdce) = 1;
  *(byte *)(param_2 + 0xdcd) = bVar3 & 1;
  *(byte *)(param_2 + 0xdcc) = bVar2 & 1;
  *(byte *)(param_2 + 0xdcb) = bVar1 & 1;
  return;
}


