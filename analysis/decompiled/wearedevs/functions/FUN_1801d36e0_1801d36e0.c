/* FUN_1801d36e0 @ 1801d36e0 */

void FUN_1801d36e0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  ushort uVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong local_58;
  ushort *puStack_50;
  longlong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  uVar10 = *(ushort *)(param_2 + 2);
  if (uVar10 != 0) {
    *(undefined2 *)(param_2 + 2) = 0;
    pbVar5 = (byte *)*param_2;
    pbVar4 = (byte *)param_2[1];
    lVar9 = 0;
    goto LAB_1801d3814;
  }
  pbVar3 = (byte *)*param_2;
  pbVar4 = (byte *)param_2[1];
  if (pbVar3 == pbVar4) {
    *param_1 = 0;
    param_1[1] = 2;
    param_1[2] = 0;
    return;
  }
  pbVar5 = pbVar3 + 1;
  *param_2 = (longlong)pbVar5;
  bVar1 = *pbVar3;
  uVar12 = (uint)bVar1;
  if ((char)bVar1 < '\0') {
    uVar8 = bVar1 & 0x1f;
    pbVar5 = pbVar3 + 2;
    *param_2 = (longlong)pbVar5;
    bVar2 = pbVar3[1];
    if (bVar1 < 0xe0) {
      uVar10 = (ushort)(uVar8 << 6) | (ushort)(bVar2 & 0x3f);
      lVar9 = 0;
      goto LAB_1801d3814;
    }
    pbVar5 = pbVar3 + 3;
    *param_2 = (longlong)pbVar5;
    uVar12 = pbVar3[2] & 0x3f | (bVar2 & 0x3f) << 6;
    if (bVar1 < 0xf0) {
      uVar12 = uVar12 | uVar8 << 0xc;
    }
    else {
      pbVar5 = pbVar3 + 4;
      *param_2 = (longlong)pbVar5;
      uVar12 = pbVar3[3] & 0x3f | uVar12 << 6 | (bVar1 & 7) << 0x12;
    }
    if (0xffff < uVar12) {
      uVar10 = (ushort)(uVar12 + 0xff0000 >> 10) | 0xd800;
      *(ushort *)(param_2 + 2) = (ushort)uVar12 & 0x3ff | 0xdc00;
      lVar9 = 1;
      goto LAB_1801d3814;
    }
  }
  uVar10 = (ushort)uVar12;
  lVar9 = 0;
LAB_1801d3814:
  uVar6 = 0xffffffffffffffff;
  if ((ulonglong)((longlong)pbVar4 - (longlong)pbVar5) < 0xfffffffffffffffd) {
    uVar6 = ((longlong)pbVar4 - (longlong)pbVar5) + 3;
  }
  uVar7 = (uVar6 >> 2) + lVar9;
  uVar6 = 3;
  if (3 < uVar7) {
    uVar6 = uVar7;
  }
  lVar9 = uVar6 * 2 + 2;
  if (uVar7 < 0x3fffffffffffffff) {
    FUN_180027490();
    uVar11 = 2;
    puStack_50 = (ushort *)thunk_FUN_1801d32d0(lVar9,2);
    if (puStack_50 != (ushort *)0x0) {
      local_58 = uVar6 + 1;
      *puStack_50 = uVar10;
      local_48 = 1;
      FUN_1801e3620(&local_58,param_2);
      param_1[2] = local_48;
      *param_1 = local_58;
      param_1[1] = (longlong)puStack_50;
      return;
    }
  }
  else {
    uVar11 = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_18020171e(uVar11,lVar9);
}


