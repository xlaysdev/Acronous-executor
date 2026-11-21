/* FUN_1801e3620 @ 1801e3620 */

void FUN_1801e3620(longlong *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ushort uVar9;
  uint uVar10;
  
  uVar10 = (uint)*(ushort *)(param_2 + 2);
  pbVar5 = (byte *)*param_2;
  pbVar3 = (byte *)param_2[1];
  do {
    if ((short)uVar10 == 0) {
      if (pbVar5 == pbVar3) {
        return;
      }
      bVar2 = *pbVar5;
      uVar10 = (uint)bVar2;
      if (-1 < (char)bVar2) {
        pbVar5 = pbVar5 + 1;
        goto LAB_1801e36f0;
      }
      uVar4 = bVar2 & 0x1f;
      pbVar1 = pbVar5 + 1;
      if (bVar2 < 0xe0) {
        pbVar5 = pbVar5 + 2;
        uVar10 = uVar4 << 6 | *pbVar1 & 0x3f;
        goto LAB_1801e36f0;
      }
      uVar10 = pbVar5[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
      if (bVar2 < 0xf0) {
        pbVar5 = pbVar5 + 3;
        uVar10 = uVar10 | uVar4 << 0xc;
      }
      else {
        pbVar1 = pbVar5 + 3;
        pbVar5 = pbVar5 + 4;
        uVar10 = *pbVar1 & 0x3f | uVar10 << 6 | (bVar2 & 7) << 0x12;
      }
      if (uVar10 < 0x10000) goto LAB_1801e36f0;
      uVar9 = (ushort)(uVar10 + 0xff0000 >> 10) | 0xd800;
      uVar10 = uVar10 & 0x3ff | 0xdc00;
      lVar6 = param_1[2];
      if (lVar6 == *param_1) goto LAB_1801e3700;
    }
    else {
LAB_1801e36f0:
      uVar9 = (ushort)uVar10;
      uVar10 = 0;
      lVar6 = param_1[2];
      if (lVar6 == *param_1) {
LAB_1801e3700:
        uVar7 = (longlong)pbVar3 - (longlong)pbVar5;
        uVar8 = uVar7 + 3;
        if (0xfffffffffffffffc < uVar7) {
          uVar8 = 0xffffffffffffffff;
        }
        FUN_180200f70(param_1,lVar6,((uVar8 >> 2) - (ulonglong)((short)uVar10 == 0)) + 2,2,2);
      }
    }
    *(ushort *)(param_1[1] + lVar6 * 2) = uVar9;
    param_1[2] = lVar6 + 1;
  } while( true );
}


