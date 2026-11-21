/* FUN_1801f5a90 @ 1801f5a90 */

longlong FUN_1801f5a90(ulonglong *param_1)

{
  ulonglong uVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar1 = param_1[1];
  uVar3 = (longlong)uVar1 >> 0x3f;
  uVar6 = *param_1 ^ uVar3;
  uVar7 = uVar6 - uVar3;
  uVar6 = ((uVar1 ^ uVar3) - uVar3) - (ulonglong)(uVar6 < uVar3);
  uVar3 = 0x3f;
  if (uVar6 != 0) {
    for (; uVar6 >> uVar3 == 0; uVar3 = uVar3 - 1) {
    }
  }
  uVar4 = 0x3f;
  if (uVar7 != 0) {
    for (; uVar7 >> uVar4 == 0; uVar4 = uVar4 - 1) {
    }
  }
  uVar4 = (uVar4 ^ 0x3f) + 0x40;
  if (uVar6 != 0) {
    uVar4 = uVar3 ^ 0x3f;
  }
  bVar2 = (byte)uVar4 & 0x3f;
  uVar8 = uVar7 << ((byte)uVar4 & 0x3f);
  uVar9 = uVar8;
  uVar3 = uVar6 << bVar2 | uVar7 >> 0x40 - bVar2;
  if ((uVar4 & 0x40) != 0) {
    uVar9 = 0;
    uVar3 = uVar8;
  }
  uVar6 = uVar3 << 0x35 | uVar9 >> 0xb;
  lVar5 = 0x47d0000000000000 - (uVar4 << 0x34);
  if (*param_1 == 0 && uVar1 == 0) {
    lVar5 = 0;
  }
  return ((uVar3 >> 0xb | uVar1 & 0x8000000000000000) + lVar5) -
         ((longlong)
          ((uVar9 & 0xffffffff | uVar6) - (ulonglong)((uint)(uVar6 >> 0x3f) & ~(uint)(uVar3 >> 0xb))
          ) >> 0x3f);
}


