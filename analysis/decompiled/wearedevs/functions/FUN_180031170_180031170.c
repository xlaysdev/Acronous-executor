/* FUN_180031170 @ 180031170 */

void FUN_180031170(longlong *param_1)

{
  longlong lVar1;
  ulonglong local_98 [3];
  longlong local_80;
  ulonglong local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50 [2];
  longlong local_40;
  longlong local_38;
  ulonglong *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
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
  FUN_180030530(local_50,local_98);
  if (local_50[0] != 0) {
    do {
      local_38 = local_40 * 0x20 + local_50[0];
      lVar1 = *(longlong *)(local_50[0] + 0x168 + local_40 * 0x18);
      local_30 = local_98;
      if (lVar1 != 0) {
        thunk_FUN_1801d3330(*(undefined8 *)(local_50[0] + local_40 * 0x18 + 0x170),lVar1,1);
      }
      FUN_18002fb10(&local_38);
      FUN_180030530(local_50,local_98);
    } while (local_50[0] != 0);
  }
  return;
}


