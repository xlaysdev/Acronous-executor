/* FUN_18000b2a0 @ 18000b2a0 */

void FUN_18000b2a0(byte *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_38;
  
  bVar1 = *param_1;
  if (2 < bVar1) {
    if (bVar1 == 3) {
      lVar4 = *(longlong *)(param_1 + 8);
      if (lVar4 != 0) {
        lVar3 = *(longlong *)(param_1 + 0x10);
        uVar5 = 1;
        goto LAB_18000b354;
      }
    }
    else {
      if (bVar1 != 4) {
        FUN_180031170(param_1 + 8);
        return;
      }
      lVar3 = *(longlong *)(param_1 + 0x10);
      lVar4 = *(longlong *)(param_1 + 0x18);
      local_38 = 0;
      lVar2 = lVar3;
      while (lVar4 != local_38) {
        local_38 = local_38 + 1;
        FUN_1800300c0(lVar2);
        lVar2 = lVar2 + 0x20;
      }
      if (*(longlong *)(param_1 + 8) != 0) {
        lVar4 = *(longlong *)(param_1 + 8) << 5;
        uVar5 = 8;
LAB_18000b354:
        thunk_FUN_1801d3330(lVar3,lVar4,uVar5);
        return;
      }
    }
  }
  return;
}


