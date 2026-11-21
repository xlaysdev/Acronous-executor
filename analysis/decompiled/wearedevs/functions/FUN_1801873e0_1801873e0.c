/* FUN_1801873e0 @ 1801873e0 */

void FUN_1801873e0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(lVar1 + 8);
    do {
      if (puVar3[-1] != 0) {
        thunk_FUN_1801d3330(*puVar3,puVar3[-1],1);
      }
      puVar3 = puVar3 + 3;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  thunk_FUN_1801d3330(lVar1,*(longlong *)(param_1 + 8) * 0x18,8);
  return;
}


