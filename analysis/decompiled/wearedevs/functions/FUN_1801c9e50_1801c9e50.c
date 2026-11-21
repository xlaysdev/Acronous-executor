/* FUN_1801c9e50 @ 1801c9e50 */

void FUN_1801c9e50(byte *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong local_b8 [3];
  undefined8 local_a0;
  ulonglong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70 [2];
  longlong local_60;
  ulonglong *local_58;
  longlong local_50;
  byte *local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  bVar1 = *param_1;
  if (2 < bVar1) {
    if (bVar1 == 3) {
      lVar4 = *(longlong *)(param_1 + 8);
      if (lVar4 != 0) {
        lVar3 = *(longlong *)(param_1 + 0x10);
        uVar6 = 1;
LAB_1801c9f93:
        thunk_FUN_1801d3330(lVar3,lVar4,uVar6);
        return;
      }
    }
    else if (bVar1 == 4) {
      local_38 = *(longlong *)(param_1 + 0x10);
      lVar4 = *(longlong *)(param_1 + 0x18);
      local_48 = param_1;
      local_40 = lVar4;
      if (lVar4 != 0) {
        plVar5 = (longlong *)(local_38 + 8);
        lVar3 = 1;
        do {
          bVar1 = *(byte *)(plVar5 + -1);
          local_50 = lVar3;
          if (2 < bVar1) {
            if (bVar1 == 3) {
              if (*plVar5 != 0) {
                thunk_FUN_1801d3330(plVar5[1],*plVar5,1);
              }
            }
            else if (bVar1 == 4) {
              FUN_1801ccc90(plVar5);
            }
            else {
              FUN_1801cac20(plVar5);
            }
          }
          lVar3 = local_50 + 1;
          plVar5 = plVar5 + 4;
        } while (local_50 != lVar4);
      }
      if (*(longlong *)(local_48 + 8) != 0) {
        lVar4 = *(longlong *)(local_48 + 8) << 5;
        uVar6 = 8;
        lVar3 = local_38;
        goto LAB_1801c9f93;
      }
    }
    else {
      lVar4 = *(longlong *)(param_1 + 8);
      if (lVar4 == 0) {
        local_78 = 0;
      }
      else {
        local_a0 = *(undefined8 *)(param_1 + 0x10);
        local_78 = *(undefined8 *)(param_1 + 0x18);
        local_b8[1] = 0;
        local_90 = 0;
        local_b8[2] = lVar4;
        local_88 = lVar4;
        local_80 = local_a0;
      }
      local_b8[0] = (ulonglong)(lVar4 != 0);
      local_98 = local_b8[0];
      FUN_1801ca4c0(local_70,local_b8);
      if (local_70[0] != 0) {
        do {
          lVar2 = local_60;
          lVar3 = local_70[0];
          lVar4 = *(longlong *)(local_70[0] + 0x168 + local_60 * 0x18);
          local_58 = local_b8;
          if (lVar4 != 0) {
            thunk_FUN_1801d3330(*(undefined8 *)(local_70[0] + local_60 * 0x18 + 0x170),lVar4,1);
          }
          FUN_1801c9e50(lVar3 + lVar2 * 0x20);
          FUN_1801ca4c0(local_70,local_b8);
        } while (local_70[0] != 0);
      }
    }
  }
  return;
}


