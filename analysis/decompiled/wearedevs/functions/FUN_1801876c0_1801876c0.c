/* FUN_1801876c0 @ 1801876c0 */

void FUN_1801876c0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar1 = *param_1;
  CloseHandle(*(HANDLE *)(lVar1 + 0xb0));
  plVar2 = *(longlong **)(lVar1 + 0x128);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_180187680(lVar1 + 0x128);
    }
  }
  FUN_180187500(lVar1 + 0xd8);
  FUN_180187500(lVar1 + 0x100);
  lVar4 = *(longlong *)(lVar1 + 0x130);
  if (((uint)lVar4 & 3) == 1) {
    uVar3 = *(undefined8 *)(lVar4 + -1);
    puVar5 = *(undefined8 **)(lVar4 + 7);
    if ((code *)*puVar5 != (code *)0x0) {
      (*(code *)*puVar5)(uVar3);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_1801d3330(uVar3,puVar5[1],puVar5[2]);
    }
    thunk_FUN_1801d3330(lVar4 + -1,0x18,8);
    lVar4 = *(longlong *)(lVar1 + 0x150);
  }
  else {
    lVar4 = *(longlong *)(lVar1 + 0x150);
  }
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x148) + 8);
    do {
      if (puVar5[-1] != 0) {
        thunk_FUN_1801d3330(*puVar5,puVar5[-1],1);
      }
      puVar5 = puVar5 + 3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (*(longlong *)(lVar1 + 0x140) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar1 + 0x148),*(longlong *)(lVar1 + 0x140) * 0x18,8);
  }
  if (lVar1 != -1) {
    LOCK();
    plVar2 = (longlong *)(lVar1 + 8);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      thunk_FUN_1801d3330(lVar1,0x158,8);
      return;
    }
  }
  return;
}


