/* FUN_1801ca110 @ 1801ca110 */

longlong FUN_1801ca110(void *param_1,ulonglong param_2,char *param_3)

{
  ushort uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong _Size;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_50;
  
  if ((*param_3 != '\x05') || (lVar9 = *(longlong *)(param_3 + 8), lVar9 == 0)) {
    return 0;
  }
  local_50 = *(longlong *)(param_3 + 0x10);
  do {
    uVar1 = *(ushort *)(lVar9 + 0x272);
    lVar6 = (ulonglong)((uint)uVar1 * 8) * 3;
    lVar5 = lVar9 + -0x20;
    uVar8 = 0xffffffffffffffff;
    lVar4 = lVar9 + 0x168;
    do {
      if (lVar6 == 0) {
        uVar8 = (ulonglong)uVar1;
        goto LAB_1801ca1d5;
      }
      uVar2 = *(ulonglong *)(lVar4 + 0x10);
      _Size = uVar2;
      if (param_2 < uVar2) {
        _Size = param_2;
      }
      iVar3 = memcmp(param_1,*(void **)(lVar4 + 8),_Size);
      lVar7 = param_2 - uVar2;
      if (iVar3 != 0) {
        lVar7 = (longlong)iVar3;
      }
      lVar6 = lVar6 + -0x18;
      uVar8 = uVar8 + 1;
      lVar5 = lVar5 + 0x20;
      lVar4 = lVar4 + 0x18;
    } while ((char)((0 < lVar7) - (lVar7 < 0)) == '\x01');
    if (0 < lVar7 == lVar7 < 0) {
      return lVar5;
    }
LAB_1801ca1d5:
    bVar10 = local_50 == 0;
    local_50 = local_50 + -1;
    if (bVar10) {
      return 0;
    }
    lVar9 = *(longlong *)(lVar9 + 0x278 + uVar8 * 8);
  } while( true );
}


