/* FUN_18016be60 @ 18016be60 */

undefined8 * FUN_18016be60(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  uVar10 = *(ulonglong *)(param_2 + 0x408);
  if (uVar10 == 0) {
    uVar7 = 0;
    goto LAB_18016bf8a;
  }
  uVar1 = *(ulonglong *)(param_2 + 0x400);
  if ((int)uVar1 == 0) {
    uVar6 = 1;
    if ((int)(param_3 >> 0x20) != 0) goto LAB_18016beb9;
LAB_18016bedb:
    iVar4 = (int)((param_3 & 0xffffffff) / (uVar6 & 0xffffffff));
  }
  else {
    lVar5 = 0x40;
    uVar6 = 1;
    for (uVar8 = uVar1 & 0xffffffff; ((uVar8 & 1) == 0 || (uVar6 = uVar6 * lVar5, (uint)uVar8 != 1))
        ; uVar8 = (ulonglong)((uint)uVar8 >> 1)) {
      lVar5 = lVar5 * lVar5;
    }
    if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201c20(&PTR_s_C__Users_burne__cargo_registry_s_1802613f0);
    }
    if ((param_3 | uVar6) >> 0x20 == 0) goto LAB_18016bedb;
LAB_18016beb9:
    iVar4 = (int)(param_3 / uVar6);
  }
  bVar2 = (byte)iVar4 & 0x3f;
  iVar3 = 0;
  for (uVar10 = uVar10 >> bVar2 | uVar10 << 0x40 - bVar2; (uVar10 & 1) == 0;
      uVar10 = uVar10 >> 1 | 0x8000000000000000) {
    iVar3 = iVar3 + 1;
  }
  uVar10 = (ulonglong)(iVar4 + iVar3 & 0x3f);
  uVar7 = 1;
  if ((int)uVar1 == 0) {
    lVar5 = 0x40;
    lVar11 = 1;
  }
  else {
    lVar11 = 0x40;
    lVar5 = 1;
    for (uVar6 = uVar1 & 0xffffffff;
        ((uVar6 & 1) == 0 || (lVar5 = lVar5 * lVar11, (uint)uVar6 != 1));
        uVar6 = (ulonglong)((uint)uVar6 >> 1)) {
      lVar11 = lVar11 * lVar11;
    }
    lVar5 = lVar5 * 0x40;
    lVar9 = 0x40;
    lVar11 = 1;
    for (uVar6 = uVar1 & 0xffffffff;
        ((uVar6 & 1) == 0 || (lVar11 = lVar11 * lVar9, (uint)uVar6 != 1));
        uVar6 = (ulonglong)((uint)uVar6 >> 1)) {
      lVar9 = lVar9 * lVar9;
    }
  }
  uVar6 = lVar11 * uVar10 + (-lVar5 & param_3);
  lVar11 = 0;
  if (uVar6 <= param_3) {
    lVar11 = lVar5;
  }
  param_1[1] = uVar1;
  param_1[2] = uVar10;
  param_1[3] = lVar11 + uVar6;
LAB_18016bf8a:
  *param_1 = uVar7;
  return param_1;
}


