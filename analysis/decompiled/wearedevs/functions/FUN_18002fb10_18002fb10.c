/* FUN_18002fb10 @ 18002fb10 */

void FUN_18002fb10(undefined8 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong local_b0 [3];
  undefined8 local_98;
  ulonglong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68 [3];
  ulonglong *local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  byte *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  pbVar2 = (byte *)*param_1;
  bVar1 = *pbVar2;
  if (2 < bVar1) {
    if (bVar1 == 3) {
      lVar4 = *(longlong *)(pbVar2 + 8);
      if (lVar4 != 0) {
        uVar3 = *(undefined8 *)(pbVar2 + 0x10);
        uVar5 = 1;
LAB_18002fbfb:
        thunk_FUN_1801d3330(uVar3,lVar4,uVar5);
        return;
      }
    }
    else if (bVar1 == 4) {
      local_48 = *(longlong *)(pbVar2 + 0x10);
      local_40 = *(longlong *)(pbVar2 + 0x18);
      local_38 = 0;
      lVar4 = local_48;
      local_30 = pbVar2;
      while (local_40 != local_38) {
        local_38 = local_38 + 1;
        FUN_1800300c0(lVar4);
        lVar4 = lVar4 + 0x20;
      }
      if (*(longlong *)(local_30 + 8) != 0) {
        uVar3 = *(undefined8 *)(local_30 + 0x10);
        lVar4 = *(longlong *)(local_30 + 8) << 5;
        uVar5 = 8;
        goto LAB_18002fbfb;
      }
    }
    else {
      lVar4 = *(longlong *)(pbVar2 + 8);
      if (lVar4 == 0) {
        local_70 = 0;
      }
      else {
        local_98 = *(undefined8 *)(pbVar2 + 0x10);
        local_70 = *(undefined8 *)(pbVar2 + 0x18);
        local_b0[1] = 0;
        local_88 = 0;
        local_b0[2] = lVar4;
        local_80 = lVar4;
        local_78 = local_98;
      }
      local_b0[0] = (ulonglong)(lVar4 != 0);
      local_90 = local_b0[0];
      FUN_180030530(local_68,local_b0);
      if (local_68[0] != 0) {
        do {
          local_50 = local_b0;
          FUN_180030930(local_68);
          FUN_180030530(local_68,local_b0);
        } while (local_68[0] != 0);
      }
    }
  }
  return;
}


