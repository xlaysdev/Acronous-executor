/* FUN_1801ecf20 @ 1801ecf20 */

longlong * FUN_1801ecf20(longlong *param_1,ushort *param_2,longlong param_3)

{
  ushort uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ushort *puVar6;
  ushort *puVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_3 == 0) {
    lVar4 = 1;
  }
  else {
    FUN_180027490();
    lVar4 = thunk_FUN_1801d32d0(param_3,1);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(1,param_3);
    }
  }
  local_50 = 0;
  local_60 = param_3;
  local_58 = lVar4;
  if (param_3 != 0) {
    puVar6 = param_2;
    do {
      lVar3 = local_50;
      puVar7 = puVar6 + 1;
      uVar1 = *puVar6;
      bVar5 = (byte)uVar1;
      uVar10 = (uint)uVar1;
      if ((uVar1 & 0xf800) == 0xd800) {
        if (((0xdbff < uVar10) || (puVar7 == param_2 + param_3)) ||
           (uVar1 = *puVar7, (ushort)(uVar1 + 0x2000) < 0xfc00)) {
          *param_1 = -0x8000000000000000;
          if (local_60 == 0) {
            return param_1;
          }
          thunk_FUN_1801d3330(local_58,local_60,1);
          return param_1;
        }
        puVar7 = puVar6 + 2;
        uVar11 = ((ulonglong)((uVar1 & 0x3ff) << 0x10) | (ulonglong)(uVar10 & 0x3ff) << 0x1a) +
                 0x100000000;
        bVar5 = (byte)(uVar11 >> 0x10);
LAB_1801ed069:
        uVar12 = 4 - (ulonglong)(uVar11 >> 0x20 == 0);
        bVar2 = false;
      }
      else {
        uVar11 = (ulonglong)uVar1 << 0x10;
        if (uVar10 < 0x80) {
          uVar12 = 1;
          bVar2 = true;
        }
        else {
          if (0x7ff < uVar10) goto LAB_1801ed069;
          uVar12 = 2;
          bVar2 = false;
        }
      }
      if ((ulonglong)(local_60 - local_50) < uVar12) {
        FUN_180201860(&local_60,local_50,uVar12);
        lVar4 = local_58;
        if (!bVar2) goto LAB_1801ed09c;
LAB_1801ecfa0:
        *(byte *)(lVar4 + local_50) = bVar5;
      }
      else {
        if (bVar2) goto LAB_1801ecfa0;
LAB_1801ed09c:
        bVar9 = bVar5 & 0x3f | 0x80;
        bVar5 = (byte)(uVar11 >> 0x16);
        if (uVar11 < 0x8000000) {
          *(byte *)(lVar4 + local_50) = bVar5 | 0xc0;
          *(byte *)(lVar4 + 1 + local_50) = bVar9;
        }
        else {
          bVar5 = bVar5 & 0x3f | 0x80;
          bVar8 = (byte)(uVar11 >> 0x1c);
          if (uVar11 >> 0x20 == 0) {
            *(byte *)(lVar4 + local_50) = bVar8 | 0xe0;
            *(byte *)(lVar4 + 1 + local_50) = bVar5;
            *(byte *)(lVar4 + 2 + local_50) = bVar9;
          }
          else {
            *(byte *)(lVar4 + local_50) = (byte)(uVar11 >> 0x22) | 0xf0;
            *(byte *)(lVar4 + 1 + local_50) = bVar8 & 0x3f | 0x80;
            *(byte *)(lVar4 + 2 + local_50) = bVar5;
            *(byte *)(lVar4 + 3 + local_50) = bVar9;
          }
        }
      }
      local_50 = lVar3 + uVar12;
      puVar6 = puVar7;
    } while (puVar7 != param_2 + param_3);
  }
  param_1[2] = local_50;
  *param_1 = local_60;
  param_1[1] = local_58;
  return param_1;
}


