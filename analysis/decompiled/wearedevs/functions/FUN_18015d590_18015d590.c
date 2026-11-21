/* FUN_18015d590 @ 18015d590 */

void FUN_18015d590(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  longlong local_38;
  longlong local_30;
  
  *(longlong *)(param_1 + 0x50) = param_2;
  if (param_2 != 0) {
    FUN_18015d860(param_1,0);
    return;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  lVar9 = *(longlong *)(param_1 + 0x10);
  if (lVar9 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 8);
    uVar1 = lVar9 * 0x18 - 0x18;
    uVar6 = (uint)(uVar1 / 0x18);
    puVar5 = puVar2;
    if ((~uVar6 & 7) != 0) {
      lVar7 = -(ulonglong)(uVar6 + 1 & 7);
      do {
        *puVar5 = 0;
        puVar5 = puVar5 + 3;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0);
    }
    if (0xa7 < uVar1) {
      do {
        *puVar5 = 0;
        puVar5[3] = 0;
        puVar5[6] = 0;
        puVar5[9] = 0;
        puVar5[0xc] = 0;
        puVar5[0xf] = 0;
        puVar5[0x12] = 0;
        puVar5[0x15] = 0;
        puVar5 = puVar5 + 0x18;
      } while (puVar5 != puVar2 + lVar9 * 3);
    }
  }
  uVar1 = *(ulonglong *)(param_1 + 0x30);
  if (uVar1 != 0) {
    uVar3 = *(ulonglong *)(param_1 + 0x28);
    uVar4 = *(ulonglong *)(param_1 + 0x18);
    uVar8 = uVar4;
    if (uVar3 < uVar4) {
      uVar8 = 0;
    }
    lVar9 = uVar3 - uVar8;
    uVar10 = uVar4 - lVar9;
    local_38 = uVar1 - uVar10;
    bVar12 = local_38 != 0;
    local_30 = 0;
    if (uVar1 < uVar10) {
      local_38 = 0;
    }
    uVar11 = lVar9 + uVar1;
    if (uVar1 >= uVar10 && bVar12) {
      uVar11 = uVar4;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    lVar7 = *(longlong *)(param_1 + 0x20) + uVar3 * 0x60 + uVar8 * -0x60 + 0x10;
    while (uVar11 - lVar9 != local_30) {
      local_30 = local_30 + 1;
      FUN_18015dc20(lVar7);
      lVar7 = lVar7 + 0x60;
    }
    while (bVar12 = local_38 != 0, local_38 = local_38 + -1, bVar12) {
      FUN_18015dc20();
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}


