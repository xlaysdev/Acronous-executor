/* FUN_1800300c0 @ 1800300c0 */

void FUN_1800300c0(byte *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong local_b8 [3];
  undefined8 local_a0;
  ulonglong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70 [2];
  longlong local_60;
  longlong local_58;
  ulonglong *local_50;
  longlong local_48;
  byte *local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  bVar1 = *param_1;
  if (2 < bVar1) {
    if (bVar1 == 3) {
      lVar3 = *(longlong *)(param_1 + 8);
      if (lVar3 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x10);
        uVar4 = 1;
LAB_1800301ab:
        thunk_FUN_1801d3330(lVar2,lVar3,uVar4);
        return;
      }
    }
    else if (bVar1 == 4) {
      local_30 = *(longlong *)(param_1 + 0x10);
      local_48 = *(longlong *)(param_1 + 0x18);
      local_38 = 0;
      lVar3 = local_30;
      local_40 = param_1;
      while (local_48 != local_38) {
        local_38 = local_38 + 1;
        FUN_1800300c0(lVar3);
        lVar3 = lVar3 + 0x20;
      }
      if (*(longlong *)(local_40 + 8) != 0) {
        lVar3 = *(longlong *)(local_40 + 8) << 5;
        uVar4 = 8;
        lVar2 = local_30;
        goto LAB_1800301ab;
      }
    }
    else {
      lVar3 = *(longlong *)(param_1 + 8);
      if (lVar3 == 0) {
        local_78 = 0;
      }
      else {
        local_a0 = *(undefined8 *)(param_1 + 0x10);
        local_78 = *(undefined8 *)(param_1 + 0x18);
        local_b8[1] = 0;
        local_90 = 0;
        local_b8[2] = lVar3;
        local_88 = lVar3;
        local_80 = local_a0;
      }
      local_b8[0] = (ulonglong)(lVar3 != 0);
      local_98 = local_b8[0];
      FUN_180030530(local_70,local_b8);
      if (local_70[0] != 0) {
        do {
          local_58 = local_60 * 0x20 + local_70[0];
          lVar3 = *(longlong *)(local_70[0] + 0x168 + local_60 * 0x18);
          local_50 = local_b8;
          if (lVar3 != 0) {
            thunk_FUN_1801d3330(*(undefined8 *)(local_70[0] + local_60 * 0x18 + 0x170),lVar3,1);
          }
          FUN_18002fb10(&local_58);
          FUN_180030530(local_70,local_b8);
        } while (local_70[0] != 0);
      }
    }
  }
  return;
}


