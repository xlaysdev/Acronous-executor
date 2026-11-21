/* FUN_180030930 @ 180030930 */

void FUN_180030930(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  byte *pbVar6;
  undefined8 uVar7;
  longlong local_38;
  
  lVar5 = *param_1;
  lVar3 = param_1[2];
  pbVar6 = (byte *)(lVar3 * 0x20 + lVar5);
  lVar2 = *(longlong *)(lVar5 + 0x168 + lVar3 * 0x18);
  if (lVar2 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar5 + lVar3 * 0x18 + 0x170),lVar2,1);
  }
  bVar1 = *pbVar6;
  if (2 < bVar1) {
    if (bVar1 == 3) {
      lVar5 = *(longlong *)(pbVar6 + 8);
      if (lVar5 != 0) {
        uVar4 = *(undefined8 *)(pbVar6 + 0x10);
        uVar7 = 1;
        goto LAB_180030a27;
      }
    }
    else {
      if (bVar1 != 4) {
        FUN_18002fdc0(pbVar6 + 8);
        return;
      }
      lVar5 = *(longlong *)(pbVar6 + 0x18);
      local_38 = 0;
      lVar3 = *(longlong *)(pbVar6 + 0x10);
      while (lVar5 != local_38) {
        local_38 = local_38 + 1;
        FUN_1800300c0(lVar3);
        lVar3 = lVar3 + 0x20;
      }
      if (*(longlong *)(pbVar6 + 8) != 0) {
        uVar4 = *(undefined8 *)(pbVar6 + 0x10);
        lVar5 = *(longlong *)(pbVar6 + 8) << 5;
        uVar7 = 8;
LAB_180030a27:
        thunk_FUN_1801d3330(uVar4,lVar5,uVar7);
        return;
      }
    }
  }
  return;
}


