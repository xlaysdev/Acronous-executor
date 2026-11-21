/* FUN_18012a510 @ 18012a510 */

ulonglong FUN_18012a510(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ushort uVar2;
  ushort uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  void *_Buf2;
  size_t _Size;
  longlong lVar9;
  longlong lVar10;
  ushort uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  uVar4 = *(ulonglong *)(param_1 + 0x28);
  if (uVar4 != 0) {
    uVar11 = FUN_180026950(param_1,param_2);
    uVar2 = *(ushort *)(param_1 + 0x58);
    uVar17 = (ulonglong)(uVar11 & uVar2);
    uVar5 = *(ulonglong *)(param_1 + 0x50);
    lVar6 = *(longlong *)(param_1 + 0x20);
    lVar7 = *(longlong *)(param_1 + 0x48);
    lVar8 = *param_2;
    _Buf2 = (void *)param_2[1];
    lVar10 = param_2[1];
    _Size = param_2[2];
    uVar16 = 0;
    do {
      uVar15 = 0;
      if (uVar5 <= uVar17) {
        uVar17 = uVar15;
      }
      if (uVar5 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar13 = (ulonglong)*(ushort *)(lVar7 + uVar17 * 4);
      if ((uVar13 == 0xffff) ||
         (uVar3 = *(ushort *)(lVar7 + 2 + uVar17 * 4),
         ((int)uVar17 - (uint)(uVar3 & uVar2) & (uint)uVar2) < uVar16)) goto joined_r0x00018012a677;
      if (uVar3 == uVar11) {
        if (uVar4 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar13,uVar4,&PTR_s_C__Users_burne__cargo_registry_s_180242e98);
        }
        lVar14 = uVar13 * 0x68;
        lVar9 = *(longlong *)(lVar6 + 0x40 + lVar14);
        if ((lVar8 == 0) != (lVar9 != 0)) {
          lVar1 = lVar6 + lVar14;
          if (lVar9 == 0) {
            if (*(char *)(lVar1 + 0x48) == (char)lVar10) goto LAB_18012a664;
          }
          else if ((*(size_t *)(lVar1 + 0x50) == _Size) &&
                  (iVar12 = memcmp(*(void **)(lVar1 + 0x48),_Buf2,_Size), iVar12 == 0))
          goto LAB_18012a664;
        }
      }
      uVar16 = uVar16 + 1;
      uVar17 = uVar17 + 1;
    } while( true );
  }
  lVar8 = *param_2;
  uVar15 = 0;
joined_r0x00018012a677:
  if (lVar8 != 0) {
    (**(code **)(lVar8 + 0x20))(param_2[3],param_2[1],param_2[2]);
  }
  return uVar15;
LAB_18012a664:
  uVar15 = lVar6 + lVar14 + 0x18;
  goto joined_r0x00018012a677;
}


