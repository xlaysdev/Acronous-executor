/* FUN_1800537f0 @ 1800537f0 */

ulonglong FUN_1800537f0(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  void *_Buf2;
  size_t _Size;
  longlong lVar7;
  longlong lVar8;
  ushort uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined7 uVar15;
  ulonglong uVar14;
  ulonglong uVar16;
  
  uVar14 = *(ulonglong *)(param_1 + 0x28);
  if (uVar14 != 0) {
    uVar9 = FUN_180026950();
    uVar1 = *(ushort *)(param_1 + 0x58);
    uVar16 = (ulonglong)(uVar9 & uVar1);
    uVar3 = *(ulonglong *)(param_1 + 0x50);
    lVar4 = *(longlong *)(param_1 + 0x20);
    lVar5 = *(longlong *)(param_1 + 0x48);
    lVar6 = *param_2;
    _Buf2 = (void *)param_2[1];
    lVar8 = param_2[1];
    _Size = param_2[2];
    uVar13 = 0;
    do {
      if (uVar3 <= uVar16) {
        uVar16 = 0;
      }
      if (uVar3 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar12 = (ulonglong)*(ushort *)(lVar5 + uVar16 * 4);
      if ((uVar12 == 0xffff) ||
         (uVar2 = *(ushort *)(lVar5 + 2 + uVar16 * 4),
         ((int)uVar16 - (uint)(uVar2 & uVar1) & (uint)uVar1) < uVar13)) {
        uVar14 = 0;
        goto joined_r0x00018005395b;
      }
      if (uVar2 == uVar9) {
        if (uVar14 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar12,uVar14,&PTR_s_C__Users_burne__cargo_registry_s_180208f98);
        }
        lVar7 = *(longlong *)(lVar4 + 0x40 + uVar12 * 0x68);
        if ((lVar6 == 0) != (lVar7 != 0)) {
          lVar11 = uVar12 * 0x68 + lVar4;
          uVar15 = (undefined7)(uVar13 >> 8);
          if (lVar7 == 0) {
            if (*(char *)(lVar11 + 0x48) == (char)lVar8) {
              uVar14 = CONCAT71(uVar15,1);
              goto LAB_18005397d;
            }
          }
          else if ((*(size_t *)(lVar11 + 0x50) == _Size) &&
                  (iVar10 = memcmp(*(void **)(lVar11 + 0x48),_Buf2,_Size), iVar10 == 0))
          goto code_r0x000180053939;
        }
      }
      uVar13 = uVar13 + 1;
      uVar16 = uVar16 + 1;
    } while( true );
  }
  lVar6 = *param_2;
  uVar14 = 0;
joined_r0x00018005395b:
  if (lVar6 != 0) {
    (**(code **)(lVar6 + 0x20))(param_2[3],param_2[1],param_2[2]);
  }
LAB_18005397d:
  return uVar14 & 0xffffffff;
code_r0x000180053939:
  uVar14 = CONCAT71(uVar15,1);
  goto joined_r0x00018005395b;
}


