/* FUN_180191910 @ 180191910 */

undefined8 * FUN_180191910(undefined8 *param_1,longlong *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined **ppuVar4;
  undefined1 uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  
  pbVar3 = (byte *)*param_2;
  pbVar9 = (byte *)param_2[1];
  pbVar8 = pbVar9 + -(longlong)pbVar3;
  if (pbVar8 == (byte *)0x0) {
    uVar5 = 2;
  }
  else {
    pbVar7 = pbVar3;
    do {
      pbVar10 = pbVar7 + 1;
      *param_2 = (longlong)pbVar10;
      bVar1 = *pbVar7;
      uVar11 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        uVar6 = bVar1 & 0x1f;
        pbVar10 = pbVar7 + 2;
        *param_2 = (longlong)pbVar10;
        bVar2 = pbVar7[1];
        if (bVar1 < 0xe0) {
          uVar11 = uVar6 << 6 | bVar2 & 0x3f;
          goto joined_r0x0001801919e4;
        }
        pbVar10 = pbVar7 + 3;
        *param_2 = (longlong)pbVar10;
        uVar11 = pbVar7[2] & 0x3f | (bVar2 & 0x3f) << 6;
        if (bVar1 < 0xf0) {
          uVar11 = uVar11 | uVar6 << 0xc;
          goto joined_r0x0001801919e4;
        }
        pbVar10 = pbVar7 + 4;
        *param_2 = (longlong)pbVar10;
        uVar11 = pbVar7[3] & 0x3f | uVar11 << 6 | (bVar1 & 7) << 0x12;
        if (uVar11 != 0x23) goto LAB_1801919e6;
LAB_180191a10:
        if ((char)param_2[4] != '\0') {
          uVar5 = 1;
          pbVar10 = pbVar8 + ~(ulonglong)pbVar9 + (longlong)pbVar10;
          if (pbVar10 == (byte *)0x0) {
            pbVar9 = (byte *)0x0;
            goto LAB_180191a88;
          }
          if (pbVar10 < pbVar8) {
            if (-0x41 < (char)pbVar3[(longlong)pbVar10]) {
              pbVar9 = pbVar10;
              goto LAB_180191a88;
            }
          }
          else {
            pbVar9 = pbVar8;
            if (pbVar10 == pbVar8) goto LAB_180191a88;
          }
          ppuVar4 = &PTR_s_C__Users_burne__cargo_registry_s_180266ea8;
          pbVar9 = pbVar10;
LAB_180191ab9:
                    /* WARNING: Subroutine does not return */
          FUN_1802018d0(pbVar3,pbVar8,0,pbVar9,ppuVar4);
        }
      }
      else {
joined_r0x0001801919e4:
        if (uVar11 == 0x23) goto LAB_180191a10;
LAB_1801919e6:
        if ((uVar11 - 9 < 2) || (uVar11 == 0xd)) {
          pbVar9 = pbVar8 + ~(ulonglong)pbVar9 + (longlong)pbVar10;
          if (pbVar9 == (byte *)0x0) {
            pbVar8 = (byte *)0x0;
            break;
          }
          if (pbVar9 < pbVar8) {
            if (-0x41 < (char)pbVar3[(longlong)pbVar9]) {
              uVar5 = 0;
              goto LAB_180191a88;
            }
          }
          else if (pbVar9 == pbVar8) break;
          ppuVar4 = &PTR_s_C__Users_burne__cargo_registry_s_180266e90;
          goto LAB_180191ab9;
        }
      }
      if (param_2[2] != 0) {
        FUN_180191cf0(param_2 + 2,&LAB_18003ecb0,uVar11,pbVar10,pbVar9);
        pbVar10 = (byte *)*param_2;
        pbVar9 = (byte *)param_2[1];
      }
      pbVar7 = pbVar10;
    } while (pbVar10 != pbVar9);
    uVar5 = 0;
    pbVar9 = pbVar8;
LAB_180191a88:
    *param_1 = pbVar3;
    param_1[1] = pbVar9;
  }
  *(undefined1 *)(param_1 + 2) = uVar5;
  return param_1;
}


