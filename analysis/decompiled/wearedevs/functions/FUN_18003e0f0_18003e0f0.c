/* FUN_18003e0f0 @ 18003e0f0 */

void FUN_18003e0f0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_148 [256];
  longlong local_48;
  longlong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_30 = *param_1;
  lVar2 = local_30 + 0x80;
  lVar4 = local_30 + 0x1a0;
  FUN_18009c180(local_148,lVar4,lVar2);
  if (1 < local_48 - 3U) {
    do {
      FUN_1800a5ed0(local_148);
      FUN_18009c180(local_148,lVar4,lVar2);
    } while (1 < local_48 - 3U);
  }
  lVar2 = local_30;
  lVar4 = *(longlong *)(local_30 + 0x1a8);
  do {
    lVar3 = *(longlong *)(lVar4 + 0x2308);
    thunk_FUN_1801d3330(lVar4,0x2320,8);
    lVar4 = lVar3;
  } while (lVar3 != 0);
  if (*(longlong *)(lVar2 + 0x100) != 0) {
    (**(code **)(*(longlong *)(lVar2 + 0x100) + 0x18))(*(undefined8 *)(local_30 + 0x108));
  }
  if (local_30 != -1) {
    LOCK();
    plVar1 = (longlong *)(local_30 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      thunk_FUN_1801d3330(local_30,0x200,0x80);
      return;
    }
  }
  return;
}


