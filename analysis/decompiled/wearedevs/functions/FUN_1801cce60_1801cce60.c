/* FUN_1801cce60 @ 1801cce60 */

void FUN_1801cce60(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulonglong local_78 [3];
  undefined8 local_60;
  ulonglong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  byte *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    local_30 = 1 - *(longlong *)(param_1 + 0x10);
    pbVar3 = *(byte **)(param_1 + 8);
    do {
      pbVar4 = pbVar3 + 0x20;
      bVar1 = *pbVar3;
      if (2 < bVar1) {
        local_28 = pbVar4;
        if (bVar1 == 3) {
          if (*(longlong *)(pbVar3 + 8) != 0) {
            thunk_FUN_1801d3330(*(undefined8 *)(pbVar3 + 0x10),*(longlong *)(pbVar3 + 8),1);
          }
        }
        else if (bVar1 == 4) {
          FUN_1801ccc90(pbVar3 + 8);
        }
        else {
          lVar2 = *(longlong *)(pbVar3 + 8);
          if (lVar2 == 0) {
            local_38 = 0;
          }
          else {
            local_60 = *(undefined8 *)(pbVar3 + 0x10);
            local_38 = *(undefined8 *)(pbVar3 + 0x18);
            local_78[1] = 0;
            local_50 = 0;
            local_78[2] = lVar2;
            local_48 = lVar2;
            local_40 = local_60;
          }
          local_78[0] = (ulonglong)(lVar2 != 0);
          local_58 = local_78[0];
          FUN_1801c9cf0(local_78);
        }
      }
      local_30 = local_30 + 1;
      pbVar3 = pbVar4;
    } while (local_30 != 1);
  }
  return;
}


