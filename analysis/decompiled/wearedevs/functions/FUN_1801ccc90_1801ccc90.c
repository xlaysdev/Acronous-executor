/* FUN_1801ccc90 @ 1801ccc90 */

void FUN_1801ccc90(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong local_88 [3];
  undefined8 local_70;
  ulonglong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = param_1[1];
  local_38 = param_1[2];
  local_30 = param_1;
  if (local_38 != 0) {
    puVar3 = (undefined8 *)(local_28 + 0x18);
    lVar2 = -1;
    do {
      bVar1 = *(byte *)(puVar3 + -3);
      local_40 = lVar2;
      if (2 < bVar1) {
        if (bVar1 == 3) {
          if (puVar3[-2] != 0) {
            thunk_FUN_1801d3330(puVar3[-1],puVar3[-2],1);
          }
        }
        else if (bVar1 == 4) {
          FUN_1801ccc90(puVar3 + -2);
        }
        else {
          lVar2 = puVar3[-2];
          if (lVar2 == 0) {
            local_48 = 0;
          }
          else {
            local_70 = puVar3[-1];
            local_48 = *puVar3;
            local_88[1] = 0;
            local_60 = 0;
            local_88[2] = lVar2;
            local_58 = lVar2;
            local_50 = local_70;
          }
          local_88[0] = (ulonglong)(lVar2 != 0);
          local_68 = local_88[0];
          FUN_1801c9cf0(local_88);
        }
      }
      lVar2 = local_40 + -1;
      puVar3 = puVar3 + 4;
    } while (local_38 + local_40 != 0);
  }
  if (*local_30 == 0) {
    return;
  }
  thunk_FUN_1801d3330(local_28,*local_30 << 5,8);
  return;
}


