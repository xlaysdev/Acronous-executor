/* FUN_1801cb8a0 @ 1801cb8a0 */

void FUN_1801cb8a0(undefined2 *param_1,longlong *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 local_50 [3];
  undefined1 local_32;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar6 = param_2[1];
  uVar9 = param_2[2];
  if (uVar6 < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(uVar9,uVar6,uVar6,&PTR_s_C__Users_burne__cargo_registry_s_180289058);
  }
  if (uVar6 - uVar9 < 4) {
    param_2[2] = uVar6;
    local_50[0] = 4;
    lVar7 = *param_2;
    local_32 = 1;
    lVar10 = lVar7;
    uVar9 = (**(code **)PTR_PTR_1802fd598)(10,lVar7,lVar7 + uVar6);
    if ((uVar9 & 1) == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (lVar10 - lVar7) + 1;
    }
    local_32 = 1;
    lVar7 = (**(code **)PTR_PTR_1802fd590)(10,lVar7,lVar7 + lVar10);
    local_32 = 0;
    uVar8 = FUN_1801ff730(local_50,lVar7 + 1,uVar6 - lVar10);
  }
  else {
    lVar7 = *param_2;
    bVar1 = *(byte *)(lVar7 + uVar9);
    bVar2 = *(byte *)(lVar7 + 1 + uVar9);
    bVar3 = *(byte *)(lVar7 + 2 + uVar9);
    bVar4 = *(byte *)(lVar7 + 3 + uVar9);
    uVar9 = uVar9 + 4;
    param_2[2] = uVar9;
    uVar5 = (int)(short)(*(ushort *)(&DAT_180288bc4 + (ulonglong)bVar2 * 2) |
                        *(ushort *)(&DAT_180288dc4 + (ulonglong)bVar1 * 2)) << 8 |
            (int)*(short *)(&DAT_180288dc4 + (ulonglong)bVar3 * 2) |
            (int)*(short *)(&DAT_180288bc4 + (ulonglong)bVar4 * 2);
    if (-1 < (int)uVar5) {
      param_1[1] = (short)uVar5;
      *param_1 = 0;
      return;
    }
    local_50[0] = 0xc;
    if (uVar6 < uVar9) {
      local_31 = 1;
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(0,uVar9,uVar6,&PTR_s_C__Users_burne__cargo_registry_s_180289040);
    }
    local_31 = 1;
    lVar10 = lVar7;
    uVar6 = (**(code **)PTR_PTR_1802fd598)
                      (CONCAT71((uint7)(byte)((*(ushort *)(&DAT_180288bc4 + (ulonglong)bVar2 * 2) |
                                              *(ushort *)(&DAT_180288dc4 + (ulonglong)bVar1 * 2)) >>
                                             8),10),lVar7,lVar7 + uVar9);
    if ((uVar6 & 1) == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (lVar10 - lVar7) + 1;
    }
    local_31 = 1;
    lVar7 = (**(code **)PTR_PTR_1802fd590)(10,lVar7,lVar7 + lVar10);
    local_31 = 0;
    uVar8 = FUN_1801ff730(local_50,lVar7 + 1,uVar9 - lVar10);
  }
  *(undefined8 *)(param_1 + 4) = uVar8;
  *param_1 = 1;
  return;
}


