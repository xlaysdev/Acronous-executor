/* FUN_180054890 @ 180054890 */

longlong FUN_180054890(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ushort uVar2;
  ushort uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ushort uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar4 = *(ulonglong *)(param_1 + 0x28);
  if (uVar4 == 0) {
    return 0;
  }
  uVar9 = FUN_180026950();
  uVar2 = *(ushort *)(param_1 + 0x58);
  uVar14 = (ulonglong)(uVar9 & uVar2);
  uVar5 = *(ulonglong *)(param_1 + 0x50);
  lVar6 = *(longlong *)(param_1 + 0x20);
  lVar7 = *(longlong *)(param_1 + 0x48);
  uVar13 = 0;
  do {
    if (uVar5 <= uVar14) {
      uVar14 = 0;
    }
    if (uVar5 == 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    uVar11 = (ulonglong)*(ushort *)(lVar7 + uVar14 * 4);
    if (uVar11 == 0xffff) {
      return 0;
    }
    uVar3 = *(ushort *)(lVar7 + 2 + uVar14 * 4);
    if (((int)uVar14 - (uint)(uVar3 & uVar2) & (uint)uVar2) < uVar13) {
      return 0;
    }
    if (uVar3 == uVar9) {
      if (uVar4 <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar11,uVar4,&PTR_s_C__Users_burne__cargo_registry_s_180208f98);
      }
      lVar12 = uVar11 * 0x68;
      lVar8 = *(longlong *)(lVar6 + 0x40 + lVar12);
      if ((lVar8 != 0) != (*param_2 == 0)) {
        lVar1 = lVar6 + lVar12;
        if (lVar8 == 0) {
          if (*(char *)(lVar1 + 0x48) == (char)param_2[1]) {
LAB_1800549b8:
            return lVar6 + lVar12 + 0x18;
          }
        }
        else if ((*(size_t *)(lVar1 + 0x50) == param_2[2]) &&
                (iVar10 = memcmp(*(void **)(lVar1 + 0x48),(void *)param_2[1],
                                 *(size_t *)(lVar1 + 0x50)), iVar10 == 0)) goto LAB_1800549b8;
      }
    }
    uVar13 = uVar13 + 1;
    uVar14 = uVar14 + 1;
  } while( true );
}


