/* FUN_18002fdc0 @ 18002fdc0 */

void FUN_18002fdc0(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong local_b8 [2];
  longlong local_a8;
  ulonglong local_a0 [3];
  longlong local_88;
  ulonglong local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  ulonglong *local_58;
  longlong local_50;
  longlong local_48;
  byte *local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar4 = *param_1;
  if (lVar4 == 0) {
    local_60 = 0;
  }
  else {
    local_88 = param_1[1];
    local_60 = param_1[2];
    local_a0[1] = 0;
    local_78 = 0;
    local_a0[2] = lVar4;
    local_70 = lVar4;
    local_68 = local_88;
  }
  local_a0[0] = (ulonglong)(lVar4 != 0);
  local_80 = local_a0[0];
  while( true ) {
    FUN_180030530(local_b8,local_a0);
    lVar3 = local_a8;
    lVar4 = local_b8[0];
    if (local_b8[0] == 0) break;
    lVar2 = *(longlong *)(local_b8[0] + 0x168 + local_a8 * 0x18);
    local_58 = local_a0;
    if (lVar2 != 0) {
      thunk_FUN_1801d3330(*(undefined8 *)(local_b8[0] + local_a8 * 0x18 + 0x170),lVar2,1);
    }
    pbVar5 = (byte *)(lVar4 + lVar3 * 0x20);
    bVar1 = *pbVar5;
    if (2 < bVar1) {
      if (bVar1 == 3) {
        if (*(longlong *)(pbVar5 + 8) != 0) {
          thunk_FUN_1801d3330(*(undefined8 *)(pbVar5 + 0x10),*(longlong *)(pbVar5 + 8),1);
        }
      }
      else if (bVar1 == 4) {
        local_50 = *(longlong *)(pbVar5 + 0x10);
        local_48 = *(longlong *)(pbVar5 + 0x18);
        local_38 = 0;
        lVar4 = local_50;
        local_40 = pbVar5;
        while (local_48 != local_38) {
          local_38 = local_38 + 1;
          FUN_1800300c0(lVar4);
          lVar4 = lVar4 + 0x20;
        }
        if (*(longlong *)(local_40 + 8) != 0) {
          thunk_FUN_1801d3330(*(undefined8 *)(local_40 + 0x10),*(longlong *)(local_40 + 8) << 5,8);
        }
      }
      else {
        FUN_18002fdc0(pbVar5 + 8);
      }
    }
  }
  return;
}


