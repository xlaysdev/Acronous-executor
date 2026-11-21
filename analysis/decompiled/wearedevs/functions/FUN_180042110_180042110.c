/* FUN_180042110 @ 180042110 */

void FUN_180042110(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  FUN_1800429a0(param_1 + 0x1a8);
  FUN_180041c30(param_1);
  plVar1 = *(longlong **)(param_1 + 0x1f8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003dbb0(param_1 + 0x1f8);
  }
  lVar2 = *(longlong *)(param_1 + 0x1f0);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x1e8) + 8);
    do {
      if (puVar3[-1] != 0) {
        thunk_FUN_1801d3330(*puVar3,puVar3[-1],1);
      }
      puVar3 = puVar3 + 0xb;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (*(longlong *)(param_1 + 0x1e0) == 0) {
    return;
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x1e8),*(longlong *)(param_1 + 0x1e0) * 0x58,8);
  return;
}


