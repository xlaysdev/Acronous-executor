/* FUN_180191ad0 @ 180191ad0 */

byte * FUN_180191ad0(longlong *param_1)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  
  pbVar6 = (byte *)*param_1;
  pbVar8 = (byte *)param_1[1];
  pbVar7 = pbVar8 + -(longlong)pbVar6;
  if (pbVar7 != (byte *)0x0) {
    plVar1 = param_1 + 2;
    pbVar5 = pbVar6;
    do {
      pbVar9 = pbVar5 + 1;
      *param_1 = (longlong)pbVar9;
      bVar2 = *pbVar5;
      uVar10 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        uVar4 = bVar2 & 0x1f;
        pbVar9 = pbVar5 + 2;
        *param_1 = (longlong)pbVar9;
        bVar3 = pbVar5[1];
        if (bVar2 < 0xe0) {
          uVar10 = uVar4 << 6 | bVar3 & 0x3f;
          goto joined_r0x000180191ba3;
        }
        pbVar9 = pbVar5 + 3;
        *param_1 = (longlong)pbVar9;
        uVar10 = pbVar5[2] & 0x3f | (bVar3 & 0x3f) << 6;
        if (bVar2 < 0xf0) {
          uVar10 = uVar10 | uVar4 << 0xc;
          goto joined_r0x000180191ba3;
        }
        pbVar9 = pbVar5 + 4;
        *param_1 = (longlong)pbVar9;
        uVar10 = pbVar5[3] & 0x3f | uVar10 << 6 | (bVar2 & 7) << 0x12;
        if (uVar10 != 0) goto LAB_180191ba5;
LAB_180191bf0:
        if (*plVar1 != 0) {
          (**(code **)(param_1[3] + 0x28))(*plVar1,CONCAT71((int7)((ulonglong)pbVar5 >> 8),7));
        }
      }
      else {
joined_r0x000180191ba3:
        if (uVar10 == 0) goto LAB_180191bf0;
LAB_180191ba5:
        if ((uVar10 - 9 < 2) || (uVar10 == 0xd)) {
          pbVar9 = pbVar7 + ~(ulonglong)pbVar8 + (longlong)pbVar9;
          if (pbVar9 == (byte *)0x0) {
            return pbVar6;
          }
          if (pbVar9 < pbVar7) {
            if (-0x41 < (char)pbVar6[(longlong)pbVar9]) {
              return pbVar6;
            }
          }
          else if (pbVar9 == pbVar7) {
            return pbVar6;
          }
                    /* WARNING: Subroutine does not return */
          FUN_1802018d0(pbVar6,pbVar7,0,pbVar9,&PTR_s_C__Users_burne__cargo_registry_s_180266ec0);
        }
        if (*plVar1 != 0) {
          FUN_180191cf0(plVar1,&LAB_18003ecb0,uVar10,pbVar9,pbVar8);
        }
      }
      pbVar5 = (byte *)*param_1;
      pbVar8 = (byte *)param_1[1];
    } while (pbVar5 != pbVar8);
  }
  if (pbVar7 == (byte *)0x0) {
    pbVar6 = (byte *)0x0;
  }
  return pbVar6;
}


