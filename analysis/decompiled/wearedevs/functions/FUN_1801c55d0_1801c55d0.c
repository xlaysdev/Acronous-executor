/* FUN_1801c55d0 @ 1801c55d0 */

void FUN_1801c55d0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  bool bVar9;
  
  lVar1 = *(longlong *)(param_1 + 0x200);
  lVar5 = *(longlong *)(param_1 + 0x208);
  if (lVar5 != 0) {
    puVar7 = (undefined8 *)(lVar1 + 0x18);
    lVar4 = 1;
    do {
      plVar2 = (longlong *)*puVar7;
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_1801c68a0(puVar7);
      }
      puVar7 = puVar7 + 5;
      bVar9 = lVar4 != lVar5;
      lVar4 = lVar4 + 1;
    } while (bVar9);
  }
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    thunk_FUN_1801d3330(lVar1,*(longlong *)(param_1 + 0x1f8) * 0x28,8);
  }
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x1e0),*(longlong *)(param_1 + 0x1d8) << 7,0x80);
  }
  uVar3 = *(ulonglong *)(param_1 + 0x100);
  puVar7 = *(undefined8 **)(param_1 + 0x88);
  for (uVar8 = *(ulonglong *)(param_1 + 0x80) & 0xfffffffffffffffe;
      uVar8 != (uVar3 & 0xfffffffffffffffe); uVar8 = uVar8 + 2) {
    puVar6 = puVar7;
    if ((~(uint)uVar8 & 0x7e) == 0) {
      puVar6 = (undefined8 *)*puVar7;
      thunk_FUN_1801d3330(puVar7,0x5f0,8);
    }
    puVar7 = puVar6;
  }
  thunk_FUN_1801d3330(puVar7,0x5f0,8);
  puVar7 = *(undefined8 **)(param_1 + 400);
  lVar1 = *(longlong *)(param_1 + 0x198);
  if (lVar1 != 0) {
    lVar5 = 1;
    puVar6 = puVar7;
    do {
      plVar2 = (longlong *)*puVar6;
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_1801c68a0(puVar6);
      }
      puVar6 = puVar6 + 4;
      bVar9 = lVar5 != lVar1;
      lVar5 = lVar5 + 1;
    } while (bVar9);
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    thunk_FUN_1801d3330(puVar7,*(longlong *)(param_1 + 0x188) << 5,8);
  }
  lVar1 = *(longlong *)(param_1 + 0x1a0);
  if (lVar1 != 0) {
    puVar7 = *(undefined8 **)(param_1 + 0x1a8);
    if ((code *)*puVar7 != (code *)0x0) {
      (*(code *)*puVar7)(lVar1);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_1801d3330(lVar1,puVar7[1],puVar7[2]);
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 != 0) {
    puVar7 = *(undefined8 **)(param_1 + 0x1b8);
    if ((code *)*puVar7 != (code *)0x0) {
      (*(code *)*puVar7)(lVar1);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_1801d3330(lVar1,puVar7[1],puVar7[2]);
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x1c0);
  if (lVar1 != 0) {
    puVar7 = *(undefined8 **)(param_1 + 0x1c8);
    if ((code *)*puVar7 != (code *)0x0) {
      (*(code *)*puVar7)(lVar1);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_1801d3330(lVar1,puVar7[1],puVar7[2]);
      return;
    }
  }
  return;
}


