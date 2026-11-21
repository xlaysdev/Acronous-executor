/* FUN_18017ef70 @ 18017ef70 */

undefined8 FUN_18017ef70(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  uint local_54;
  uint *local_50;
  code *local_48;
  
  lVar2 = *param_2;
  uVar7 = *(uint *)(lVar2 + 0x20);
  if (uVar7 - (int)((ulonglong)*(undefined8 *)(lVar2 + 0x18) >> 0x20) < 0x81) {
    lVar3 = *param_1;
    uVar6 = *(ulonglong *)(lVar3 + 0x18);
    iVar9 = *(int *)(lVar3 + 0x20);
    if ((int)(uVar6 >> 0x20) == (int)uVar6) {
      do {
        uVar11 = uVar6 >> 0x20;
        iVar10 = (int)(uVar6 >> 0x20);
        local_54 = iVar9 - iVar10;
        if (local_54 == 0) {
          return 0;
        }
        local_54 = local_54 - (local_54 >> 1);
        uVar8 = uVar6 & 0xffffffff00000000 | (ulonglong)(local_54 + iVar10);
        LOCK();
        uVar1 = *(ulonglong *)(lVar3 + 0x18);
        bVar14 = uVar6 == uVar1;
        if (bVar14) {
          *(ulonglong *)(lVar3 + 0x18) = uVar8;
        }
        else {
          uVar6 = uVar1;
        }
        UNLOCK();
        if (bVar14) {
          if (0x80 < local_54) {
            local_50 = &local_54;
            local_48 = FUN_1801ee6c0;
                    /* WARNING: Subroutine does not return */
            FUN_180201ee0(&DAT_180264b90,&local_50,&PTR_s_C__Users_burne__cargo_registry_s_180264ba0
                         );
          }
          uVar12 = 0;
          uVar5 = 1;
          if (1 < local_54) {
            uVar12 = 0;
            uVar13 = uVar7;
            do {
              *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)(uVar13 & 0xff) * 8) =
                   *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + (uVar11 & 0xff) * 8);
              uVar12 = uVar12 + 2;
              *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)(byte)((char)uVar13 + 1) * 8)
                   = *(undefined8 *)
                      (*(longlong *)(lVar3 + 0x10) + (ulonglong)((int)uVar11 + 1U & 0xff) * 8);
              uVar13 = uVar13 + 2;
              uVar11 = (ulonglong)((int)uVar11 + 2);
              uVar5 = local_54;
            } while ((local_54 & 0xfe) != uVar12);
          }
          if ((uVar5 & 1) != 0) {
            *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)(uVar12 + uVar7 & 0xff) * 8) =
                 *(undefined8 *)
                  (*(longlong *)(lVar3 + 0x10) + (ulonglong)(iVar10 + uVar12 & 0xff) * 8);
          }
          do {
            LOCK();
            uVar6 = *(ulonglong *)(lVar3 + 0x18);
            bVar14 = uVar8 == uVar6;
            if (bVar14) {
              *(ulonglong *)(lVar3 + 0x18) = uVar8 << 0x20 | uVar8 & 0xffffffff;
            }
            else {
              uVar8 = uVar6;
            }
            UNLOCK();
          } while (!bVar14);
          uVar7 = (local_54 + uVar7) - 1;
          uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)(uVar7 & 0xff) * 8);
          if (local_54 == 1) {
            return uVar4;
          }
          *(uint *)(lVar2 + 0x20) = uVar7;
          return uVar4;
        }
        iVar9 = *(int *)(lVar3 + 0x20);
      } while ((int)(uVar6 >> 0x20) == (int)uVar6);
    }
  }
  return 0;
}


