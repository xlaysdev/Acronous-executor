/* FUN_18009c5a0 @ 18009c5a0 */

void FUN_18009c5a0(longlong *param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  LOCK();
  puVar1 = (ulonglong *)(param_1 + 1);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  uVar11 = uVar2 & 0xffffffffffffffe0;
  lVar5 = *param_1;
  uVar10 = uVar11 - *(longlong *)(lVar5 + 0x2300);
  if (uVar10 != 0) {
    bVar4 = (ulonglong)((uint)uVar2 & 0x1f) < uVar10 >> 5;
    lVar9 = lVar5;
    do {
      while( true ) {
        lVar5 = *(longlong *)(lVar9 + 0x2308);
        if (*(longlong *)(lVar9 + 0x2308) == 0) {
          lVar3 = *(longlong *)(lVar9 + 0x2300);
          FUN_180027490();
          lVar5 = thunk_FUN_1801d32d0(0x2320,8);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_180201705(8,0x2320);
          }
          *(longlong *)(lVar5 + 0x2300) = lVar3 + 0x20;
          *(undefined8 *)(lVar5 + 0x2308) = 0;
          *(undefined8 *)(lVar5 + 0x2310) = 0;
          *(undefined8 *)(lVar5 + 0x2318) = 0;
          lVar6 = 0;
          LOCK();
          lVar3 = *(longlong *)(lVar9 + 0x2308);
          if (lVar3 == 0) {
            *(longlong *)(lVar9 + 0x2308) = lVar5;
          }
          else {
            lVar6 = lVar3;
          }
          UNLOCK();
          if (lVar3 != 0) {
            *(longlong *)(lVar5 + 0x2300) = *(longlong *)(lVar6 + 0x2300) + 0x20;
            lVar7 = 0;
            LOCK();
            lVar3 = *(longlong *)(lVar6 + 0x2308);
            if (lVar3 == 0) {
              *(longlong *)(lVar6 + 0x2308) = lVar5;
            }
            else {
              lVar7 = lVar3;
            }
            UNLOCK();
            if (lVar3 != 0) {
              do {
                *(longlong *)(lVar5 + 0x2300) = *(longlong *)(lVar7 + 0x2300) + 0x20;
                lVar8 = 0;
                LOCK();
                lVar3 = *(longlong *)(lVar7 + 0x2308);
                if (lVar3 == 0) {
                  *(longlong *)(lVar7 + 0x2308) = lVar5;
                }
                else {
                  lVar8 = lVar3;
                }
                UNLOCK();
                lVar7 = lVar8;
              } while (lVar3 != 0);
            }
            lVar5 = lVar6;
          }
        }
        if ((bool)(bVar4 & (int)*(undefined8 *)(lVar9 + 0x2310) == -1)) break;
LAB_18009c620:
        bVar4 = false;
        lVar9 = lVar5;
        if (*(ulonglong *)(lVar5 + 0x2300) == uVar11) goto LAB_18009c5d5;
      }
      LOCK();
      lVar3 = *param_1;
      if (lVar9 == lVar3) {
        *param_1 = lVar5;
      }
      UNLOCK();
      if (lVar9 != lVar3) goto LAB_18009c620;
      LOCK();
      UNLOCK();
      *(longlong *)(lVar9 + 0x2318) = param_1[1];
      LOCK();
      *(ulonglong *)(lVar9 + 0x2310) = *(ulonglong *)(lVar9 + 0x2310) | 0x100000000;
      UNLOCK();
      bVar4 = true;
      lVar9 = lVar5;
    } while (*(ulonglong *)(lVar5 + 0x2300) != uVar11);
  }
LAB_18009c5d5:
  LOCK();
  *(ulonglong *)(lVar5 + 0x2310) = *(ulonglong *)(lVar5 + 0x2310) | 0x200000000;
  UNLOCK();
  return;
}


