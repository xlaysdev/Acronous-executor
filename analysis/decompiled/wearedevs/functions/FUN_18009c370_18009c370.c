/* FUN_18009c370 @ 18009c370 */

void FUN_18009c370(longlong *param_1,void *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  LOCK();
  puVar1 = (ulonglong *)(param_1 + 1);
  uVar10 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  uVar12 = uVar10 & 0xffffffffffffffe0;
  lVar5 = *param_1;
  uVar4 = uVar12 - *(longlong *)(lVar5 + 0x2300);
  uVar9 = (uint)uVar10;
  if (uVar4 == 0) {
    uVar10 = (ulonglong)(uVar9 & 0x1f);
  }
  else {
    uVar10 = (ulonglong)(uVar9 & 0x1f);
    bVar3 = uVar10 < uVar4 >> 5;
    lVar11 = lVar5;
    do {
      while( true ) {
        lVar5 = *(longlong *)(lVar11 + 0x2308);
        if (*(longlong *)(lVar11 + 0x2308) == 0) {
          lVar2 = *(longlong *)(lVar11 + 0x2300);
          FUN_180027490();
          lVar5 = thunk_FUN_1801d32d0(0x2320,8);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_180201705(8,0x2320);
          }
          *(longlong *)(lVar5 + 0x2300) = lVar2 + 0x20;
          *(undefined8 *)(lVar5 + 0x2308) = 0;
          *(undefined8 *)(lVar5 + 0x2310) = 0;
          *(undefined8 *)(lVar5 + 0x2318) = 0;
          lVar6 = 0;
          LOCK();
          lVar2 = *(longlong *)(lVar11 + 0x2308);
          if (lVar2 == 0) {
            *(longlong *)(lVar11 + 0x2308) = lVar5;
          }
          else {
            lVar6 = lVar2;
          }
          UNLOCK();
          if (lVar2 != 0) {
            *(longlong *)(lVar5 + 0x2300) = *(longlong *)(lVar6 + 0x2300) + 0x20;
            lVar7 = 0;
            LOCK();
            lVar2 = *(longlong *)(lVar6 + 0x2308);
            if (lVar2 == 0) {
              *(longlong *)(lVar6 + 0x2308) = lVar5;
            }
            else {
              lVar7 = lVar2;
            }
            UNLOCK();
            if (lVar2 != 0) {
              do {
                *(longlong *)(lVar5 + 0x2300) = *(longlong *)(lVar7 + 0x2300) + 0x20;
                lVar8 = 0;
                LOCK();
                lVar2 = *(longlong *)(lVar7 + 0x2308);
                if (lVar2 == 0) {
                  *(longlong *)(lVar7 + 0x2308) = lVar5;
                }
                else {
                  lVar8 = lVar2;
                }
                UNLOCK();
                lVar7 = lVar8;
              } while (lVar2 != 0);
            }
            lVar5 = lVar6;
          }
        }
        if ((bool)(bVar3 & (int)*(undefined8 *)(lVar11 + 0x2310) == -1)) break;
LAB_18009c3e0:
        bVar3 = false;
        lVar11 = lVar5;
        if (*(ulonglong *)(lVar5 + 0x2300) == uVar12) goto LAB_18009c50c;
      }
      LOCK();
      lVar2 = *param_1;
      if (lVar11 == lVar2) {
        *param_1 = lVar5;
      }
      UNLOCK();
      if (lVar11 != lVar2) goto LAB_18009c3e0;
      LOCK();
      UNLOCK();
      *(longlong *)(lVar11 + 0x2318) = param_1[1];
      LOCK();
      *(ulonglong *)(lVar11 + 0x2310) = *(ulonglong *)(lVar11 + 0x2310) | 0x100000000;
      UNLOCK();
      bVar3 = true;
      lVar11 = lVar5;
    } while (*(ulonglong *)(lVar5 + 0x2300) != uVar12);
  }
LAB_18009c50c:
  memmove((void *)(uVar10 * 0x118 + lVar5),param_2,0x118);
  LOCK();
  *(ulonglong *)(lVar5 + 0x2310) = *(ulonglong *)(lVar5 + 0x2310) | 1L << (sbyte)uVar10;
  UNLOCK();
  return;
}


