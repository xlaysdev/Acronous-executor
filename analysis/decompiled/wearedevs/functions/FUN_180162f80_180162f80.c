/* FUN_180162f80 @ 180162f80 */

void FUN_180162f80(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  longlong local_50;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x10);
  if ((!SBORROW8(0,lVar2)) && (lVar2 != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar1 + 0x18),lVar2,1);
  }
  lVar2 = *(longlong *)(lVar1 + 0xa0);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(lVar1 + 0x98);
    lVar6 = 0;
    lVar5 = 1;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar6);
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        FUN_180163890(lVar3 + lVar6);
      }
      plVar4 = *(longlong **)(lVar3 + 8 + lVar6);
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        FUN_1801638e0(lVar3 + lVar6 + 8);
      }
      lVar6 = lVar6 + 0x10;
      bVar7 = lVar5 != lVar2;
      lVar5 = lVar5 + 1;
    } while (bVar7);
    thunk_FUN_1801d3330(lVar3,lVar2 << 4,8);
  }
  if (*(longlong *)(lVar1 + 0xb0) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar1 + 0xa8),*(longlong *)(lVar1 + 0xb0) * 0x18,8);
  }
  if (*(longlong *)(lVar1 + 0x110) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar1 + 0x118),*(longlong *)(lVar1 + 0x110) << 3,8);
  }
  lVar2 = *(longlong *)(lVar1 + 0x150);
  lVar3 = *(longlong *)(lVar1 + 0x158);
  local_50 = 0;
  while (lVar3 != local_50) {
    lVar5 = local_50 * 8;
    local_50 = local_50 + 1;
    FUN_18016bc40(*(undefined8 *)(lVar2 + lVar5));
  }
  if (*(longlong *)(lVar1 + 0x148) != 0) {
    thunk_FUN_1801d3330(lVar2,*(longlong *)(lVar1 + 0x148) << 3,8);
  }
  FUN_180162610(lVar1 + 0x28);
  if (*(longlong *)(lVar1 + 0xe8) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar1 + 0xe0),*(longlong *)(lVar1 + 0xe8) << 7,0x80);
  }
  FUN_180162800(lVar1 + 0x160);
  if (*(int *)(lVar1 + 0x1f8) != 1000000000) {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar1 + 0x1c0),0x1860,8);
  }
  plVar4 = *(longlong **)(lVar1 + 0x200);
  LOCK();
  *plVar4 = *plVar4 + -1;
  UNLOCK();
  if (*plVar4 == 0) {
    FUN_180163bb0(lVar1 + 0x200);
  }
  plVar4 = *(longlong **)(lVar1 + 0x208);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18003cc40(lVar1 + 0x208);
    }
  }
  plVar4 = *(longlong **)(lVar1 + 0x218);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18003cc40(lVar1 + 0x218);
    }
  }
  if (lVar1 != -1) {
    LOCK();
    plVar4 = (longlong *)(lVar1 + 8);
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      thunk_FUN_1801d3330(lVar1,0x238,8);
      return;
    }
  }
  return;
}


