/* FUN_18018b160 @ 18018b160 */

void FUN_18018b160(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  CloseHandle(*(HANDLE *)(param_1 + 0xb0));
  FUN_18018b250(param_1 + 0xc0);
  lVar1 = *(longlong *)(param_1 + 0x150);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x148) + 8);
    do {
      if (puVar2[-1] != 0) {
        thunk_FUN_1801d3330(*puVar2,puVar2[-1],1);
      }
      puVar2 = puVar2 + 3;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  if (*(longlong *)(param_1 + 0x140) == 0) {
    return;
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x148),*(longlong *)(param_1 + 0x140) * 0x18,8);
  return;
}


