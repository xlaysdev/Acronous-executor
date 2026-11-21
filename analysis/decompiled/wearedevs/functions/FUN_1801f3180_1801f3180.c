/* FUN_1801f3180 @ 1801f3180 */

ulonglong FUN_1801f3180(uint param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar1 = param_1 * 0x800;
  lVar4 = (ulonglong)(0x10eaa < param_1) * 0x10;
  lVar3 = lVar4 + 8;
  if (uVar1 < (uint)(*(int *)(&DAT_180293cf4 + (ulonglong)(0x10eaa < param_1) * 0x40) * 0x800)) {
    lVar3 = lVar4;
  }
  lVar4 = lVar3 + 4;
  if (uVar1 < (uint)(*(int *)(&DAT_180293ce4 + lVar3 * 4) * 0x800)) {
    lVar4 = lVar3;
  }
  lVar3 = lVar4 + 2;
  if (uVar1 < (uint)(*(int *)(&DAT_180293cdc + lVar4 * 4) * 0x800)) {
    lVar3 = lVar4;
  }
  lVar4 = lVar3 + 1;
  if (uVar1 < (uint)(*(int *)(&DAT_180293cd8 + lVar3 * 4) * 0x800)) {
    lVar4 = lVar3;
  }
  lVar3 = lVar4 + 1;
  if (uVar1 < (uint)(*(int *)(&DAT_180293cd8 + lVar4 * 4) * 0x800)) {
    lVar3 = lVar4;
  }
  uVar7 = (ulonglong)(*(int *)(&DAT_180293cd4 + lVar3 * 4) * 0x800 == uVar1) + lVar3 +
          (ulonglong)((uint)(*(int *)(&DAT_180293cd4 + lVar3 * 4) * 0x800) < uVar1);
  uVar2 = (ulonglong)(*(uint *)(&DAT_180293cd4 + uVar7 * 4) >> 0x15);
  uVar5 = 0x2ff;
  if ((uVar7 < 0x20) &&
     (uVar5 = (ulonglong)(*(uint *)(&DAT_180293cd8 + uVar7 * 4) >> 0x15), uVar7 == 0)) {
    uVar1 = 0;
    lVar3 = ~uVar2 + uVar5;
  }
  else {
    uVar1 = *(uint *)("lue" + uVar7 * 4) & 0x1fffff;
    lVar3 = ~uVar2 + uVar5;
  }
  if (lVar3 != 0) {
    uVar6 = 0;
    do {
      uVar6 = (byte)(&DAT_1802931d0)[uVar2] + uVar6;
      if (param_1 - uVar1 < uVar6) break;
      uVar2 = uVar2 + 1;
    } while (uVar5 - 1 != uVar2);
  }
  return uVar2 & 0xffffffffffffff01;
}


