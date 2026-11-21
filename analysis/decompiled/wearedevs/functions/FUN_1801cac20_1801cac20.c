/* FUN_1801cac20 @ 1801cac20 */

void FUN_1801cac20(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong local_98 [3];
  longlong local_80;
  ulonglong local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50 [2];
  longlong local_40;
  ulonglong *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  if (lVar1 == 0) {
    local_58 = 0;
  }
  else {
    local_80 = param_1[1];
    local_58 = param_1[2];
    local_98[1] = 0;
    local_70 = 0;
    local_98[2] = lVar1;
    local_68 = lVar1;
    local_60 = local_80;
  }
  local_98[0] = (ulonglong)(lVar1 != 0);
  local_78 = local_98[0];
  FUN_1801ca4c0(local_50,local_98);
  if (local_50[0] != 0) {
    do {
      lVar3 = local_40;
      lVar2 = local_50[0];
      lVar1 = *(longlong *)(local_50[0] + 0x168 + local_40 * 0x18);
      local_38 = local_98;
      if (lVar1 != 0) {
        thunk_FUN_1801d3330(*(undefined8 *)(local_50[0] + local_40 * 0x18 + 0x170),lVar1,1);
      }
      FUN_1801c9e50(lVar2 + lVar3 * 0x20);
      FUN_1801ca4c0(local_50,local_98);
    } while (local_50[0] != 0);
  }
  return;
}


