/* Unwind@1801c4700 @ 1801c4700 */

/* WARNING: Type propagation algorithm not settling */

void Unwind_1801c4700(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  plVar2 = *(longlong **)(param_2 + 0x60);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_1801c68a0(param_2 + 0x40);
    plVar2 = *(longlong **)(param_2 + 0x20);
    LOCK();
    *plVar2 = *plVar2 + -1;
    lVar1 = *plVar2;
    UNLOCK();
    lVar3 = *(longlong *)(param_2 + 0x58);
  }
  else {
    plVar2 = *(longlong **)(param_2 + 0x20);
    LOCK();
    *plVar2 = *plVar2 + -1;
    lVar1 = *plVar2;
    UNLOCK();
    lVar3 = *(longlong *)(param_2 + 0x58);
  }
  if (lVar1 == 0) {
    FUN_1801c68a0(param_2 + 0x20);
    uVar4 = *(ulonglong *)(lVar3 + 0x10);
  }
  else {
    uVar4 = *(ulonglong *)(lVar3 + 0x10);
  }
  if ((uVar4 & 0x7fffffffffffffff) == 0) {
    plVar2 = *(longlong **)(lVar3 + 0x58);
    LOCK();
    *plVar2 = *plVar2 + -1;
    lVar1 = *plVar2;
    UNLOCK();
  }
  else {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar3 + 0x18),uVar4,1);
    plVar2 = *(longlong **)(lVar3 + 0x58);
    LOCK();
    *plVar2 = *plVar2 + -1;
    lVar1 = *plVar2;
    UNLOCK();
  }
  if (lVar1 == 0) {
    FUN_1801c64c0(lVar3 + 0x58);
  }
  return;
}


