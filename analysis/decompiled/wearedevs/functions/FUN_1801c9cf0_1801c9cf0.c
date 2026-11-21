/* FUN_1801c9cf0 @ 1801c9cf0 */

void FUN_1801c9cf0(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_50 [2];
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_1801ca4c0(local_50,param_1);
  if (local_50[0] != 0) {
    do {
      lVar3 = local_40;
      lVar2 = local_50[0];
      lVar1 = *(longlong *)(local_50[0] + 0x168 + local_40 * 0x18);
      local_38 = param_1;
      if (lVar1 != 0) {
        thunk_FUN_1801d3330(*(undefined8 *)(local_50[0] + local_40 * 0x18 + 0x170),lVar1,1);
      }
      FUN_1801c9e50(lVar2 + lVar3 * 0x20);
      FUN_1801ca4c0(local_50,param_1);
    } while (local_50[0] != 0);
  }
  return;
}


