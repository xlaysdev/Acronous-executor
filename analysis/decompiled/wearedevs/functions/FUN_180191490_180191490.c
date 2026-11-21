/* FUN_180191490 @ 180191490 */

void FUN_180191490(longlong param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  
  lVar5 = *(longlong *)(param_1 + 8);
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  uVar7 = *(int *)(param_1 + 0x2c) + 1;
  uVar8 = (ulonglong)uVar7;
  if (uVar7 != 0) {
    if (uVar8 < uVar6) {
      if (*(char *)(lVar5 + uVar8) < -0x40) {
LAB_1801914b3:
                    /* WARNING: Subroutine does not return */
        FUN_1802018d0(lVar5,uVar6,uVar8,uVar6,&PTR_s_C__Users_burne__cargo_registry_s_180266d20);
      }
    }
    else if (uVar6 != uVar8) goto LAB_1801914b3;
  }
  bVar11 = true;
  if (uVar6 != uVar8) {
    bVar11 = *(char *)(lVar5 + uVar8) != '/';
  }
  if (!bVar11) {
    return;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    return;
  }
  if (uVar6 != 0) {
    lVar9 = lVar5 + uVar6;
    uVar8 = 0;
    do {
      pbVar1 = (byte *)(lVar9 + -1);
      uVar7 = (uint)(char)*pbVar1;
      if ((int)uVar7 < 0) {
        bVar3 = *(byte *)(lVar9 + -2);
        if ((char)bVar3 < -0x40) {
          bVar4 = *(byte *)(lVar9 + -3);
          if ((char)bVar4 < -0x40) {
            pbVar2 = (byte *)(lVar9 + -4);
            lVar9 = lVar9 + -4;
            uVar7 = bVar4 & 0x3f | (*pbVar2 & 7) << 6;
          }
          else {
            lVar9 = lVar9 + -3;
            uVar7 = bVar4 & 0xf;
          }
          uVar7 = bVar3 & 0x3f | uVar7 << 6;
        }
        else {
          lVar9 = lVar9 + -2;
          uVar7 = bVar3 & 0x1f;
        }
        uVar7 = (uint)(*pbVar1 & 0x3f) | uVar7 << 6;
        if (uVar7 == 0x110000) goto LAB_18019158d;
      }
      else {
        lVar9 = lVar9 + -1;
      }
      if ((uVar7 != 0x20) || (uVar8 = uVar8 + 1, lVar5 == lVar9)) goto LAB_18019158d;
    } while( true );
  }
  uVar10 = 0;
  goto LAB_1801915c9;
LAB_18019158d:
  uVar10 = uVar6 - uVar8;
  if (uVar6 < uVar8) {
    return;
  }
  if ((uVar10 < uVar6 && uVar10 != 0) && (*(char *)(lVar5 + uVar10) < -0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: self.is_char_boundary(new_len)EmptyHostIdnaErrorInvalidPortInvalidIpv4AddressInvalidIpv6AddressInvalidDomainCharacterRelativeUrlWithoutBaseRelativeUrlWithCannotBeABaseBaseSetHostOnCannotBeABaseUrlOverflow"
                  ,0x30,&PTR_s_C__Users_burne__cargo_registry_s_180266ba8);
  }
LAB_1801915c9:
  *(ulonglong *)(param_1 + 0x10) = uVar10;
  return;
}


