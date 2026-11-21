/* FUN_1801c64c0 @ 1801c64c0 */

void FUN_1801c64c0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar1 = *param_1;
  lVar6 = *(longlong *)(lVar1 + 0x208);
  if (lVar6 != 0) {
    puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x200) + 0x18);
    do {
      plVar2 = (longlong *)*puVar5;
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_1801c68a0(puVar5);
      }
      puVar5 = puVar5 + 5;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (*(longlong *)(lVar1 + 0x1f8) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar1 + 0x200),*(longlong *)(lVar1 + 0x1f8) * 0x28,8);
  }
  if (*(longlong *)(lVar1 + 0x1d8) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar1 + 0x1e0),*(longlong *)(lVar1 + 0x1d8) << 7,0x80);
  }
  uVar3 = *(ulonglong *)(lVar1 + 0x100);
  puVar5 = *(undefined8 **)(lVar1 + 0x88);
  for (uVar7 = *(ulonglong *)(lVar1 + 0x80) & 0xfffffffffffffffe;
      uVar7 != (uVar3 & 0xfffffffffffffffe); uVar7 = uVar7 + 2) {
    puVar4 = puVar5;
    if ((~(uint)uVar7 & 0x7e) == 0) {
      puVar4 = (undefined8 *)*puVar5;
      thunk_FUN_1801d3330(puVar5,0x5f0,8);
    }
    puVar5 = puVar4;
  }
  thunk_FUN_1801d3330(puVar5,0x5f0,8);
  lVar6 = *(longlong *)(lVar1 + 0x198);
  if (lVar6 != 0) {
    puVar5 = *(undefined8 **)(lVar1 + 400);
    do {
      plVar2 = (longlong *)*puVar5;
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_1801c68a0(puVar5);
      }
      puVar5 = puVar5 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (*(longlong *)(lVar1 + 0x188) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar1 + 400),*(longlong *)(lVar1 + 0x188) << 5,8);
  }
  lVar6 = *(longlong *)(lVar1 + 0x1a0);
  if (lVar6 != 0) {
    puVar5 = *(undefined8 **)(lVar1 + 0x1a8);
    if ((code *)*puVar5 != (code *)0x0) {
      (*(code *)*puVar5)(lVar6);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_1801d3330(lVar6,puVar5[1],puVar5[2]);
    }
  }
  lVar6 = *(longlong *)(lVar1 + 0x1b0);
  if (lVar6 != 0) {
    puVar5 = *(undefined8 **)(lVar1 + 0x1b8);
    if ((code *)*puVar5 != (code *)0x0) {
      (*(code *)*puVar5)(lVar6);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_1801d3330(lVar6,puVar5[1],puVar5[2]);
    }
  }
  lVar6 = *(longlong *)(lVar1 + 0x1c0);
  if (lVar6 != 0) {
    puVar5 = *(undefined8 **)(lVar1 + 0x1c8);
    if ((code *)*puVar5 != (code *)0x0) {
      (*(code *)*puVar5)(lVar6);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_1801d3330(lVar6,puVar5[1],puVar5[2]);
    }
  }
  if (lVar1 != -1) {
    LOCK();
    plVar2 = (longlong *)(lVar1 + 8);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      thunk_FUN_1801d3330(lVar1,0x280,0x80);
      return;
    }
  }
  return;
}


