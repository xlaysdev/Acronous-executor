/* FUN_1801cca30 @ 1801cca30 */

void FUN_1801cca30(byte *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong local_90 [3];
  undefined8 local_78;
  ulonglong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
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
        uVar5 = 1;
LAB_1801ccbbd:
        thunk_FUN_1801d3330(lVar2,lVar3,uVar5);
        return;
      }
    }
    else if (bVar1 == 4) {
      local_30 = *(longlong *)(param_1 + 0x10);
      lVar3 = *(longlong *)(param_1 + 0x18);
      local_40 = param_1;
      local_38 = lVar3;
      if (lVar3 != 0) {
        puVar4 = (undefined8 *)(local_30 + 0x18);
        lVar2 = 1;
        do {
          bVar1 = *(byte *)(puVar4 + -3);
          local_48 = lVar2;
          if (2 < bVar1) {
            if (bVar1 == 3) {
              if (puVar4[-2] != 0) {
                thunk_FUN_1801d3330(puVar4[-1],puVar4[-2],1);
              }
            }
            else if (bVar1 == 4) {
              FUN_1801ccc90(puVar4 + -2);
            }
            else {
              lVar2 = puVar4[-2];
              if (lVar2 == 0) {
                local_50 = 0;
              }
              else {
                local_78 = puVar4[-1];
                local_50 = *puVar4;
                local_90[1] = 0;
                local_68 = 0;
                local_90[2] = lVar2;
                local_60 = lVar2;
                local_58 = local_78;
              }
              local_90[0] = (ulonglong)(lVar2 != 0);
              local_70 = local_90[0];
              FUN_1801c9cf0(local_90);
            }
          }
          lVar2 = local_48 + 1;
          puVar4 = puVar4 + 4;
        } while (local_48 != lVar3);
      }
      if (*(longlong *)(local_40 + 8) != 0) {
        lVar3 = *(longlong *)(local_40 + 8) << 5;
        uVar5 = 8;
        lVar2 = local_30;
        goto LAB_1801ccbbd;
      }
    }
    else {
      lVar3 = *(longlong *)(param_1 + 8);
      if (lVar3 == 0) {
        local_50 = 0;
      }
      else {
        local_78 = *(undefined8 *)(param_1 + 0x10);
        local_50 = *(undefined8 *)(param_1 + 0x18);
        local_90[1] = 0;
        local_68 = 0;
        local_90[2] = lVar3;
        local_60 = lVar3;
        local_58 = local_78;
      }
      local_90[0] = (ulonglong)(lVar3 != 0);
      local_70 = local_90[0];
      FUN_1801c9cf0(local_90);
    }
  }
  return;
}


