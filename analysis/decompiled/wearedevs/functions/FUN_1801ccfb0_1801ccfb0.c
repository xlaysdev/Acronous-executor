/* FUN_1801ccfb0 @ 1801ccfb0 */

void FUN_1801ccfb0(byte *param_1)

{
  byte bVar1;
  longlong lVar2;
  ulonglong local_68 [3];
  undefined8 local_50;
  ulonglong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  byte *local_20;
  byte *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  bVar1 = *param_1;
  if (2 < bVar1) {
    if (bVar1 == 3) {
      if (*(longlong *)(param_1 + 8) != 0) {
        thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x10),*(longlong *)(param_1 + 8),1);
        return;
      }
    }
    else if (bVar1 == 4) {
      local_20 = param_1 + 8;
      local_18 = param_1;
      FUN_1801cce60();
      if (*(longlong *)local_20 != 0) {
        thunk_FUN_1801d3330(*(undefined8 *)(local_18 + 0x10),*(longlong *)local_20 << 5,8);
        return;
      }
    }
    else {
      lVar2 = *(longlong *)(param_1 + 8);
      if (lVar2 == 0) {
        local_28 = 0;
      }
      else {
        local_50 = *(undefined8 *)(param_1 + 0x10);
        local_28 = *(undefined8 *)(param_1 + 0x18);
        local_68[1] = 0;
        local_40 = 0;
        local_68[2] = lVar2;
        local_38 = lVar2;
        local_30 = local_50;
      }
      local_68[0] = (ulonglong)(lVar2 != 0);
      local_48 = local_68[0];
      FUN_1801c9cf0(local_68);
    }
  }
  return;
}


