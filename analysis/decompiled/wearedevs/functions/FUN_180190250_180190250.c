/* FUN_180190250 @ 180190250 */

void FUN_180190250(longlong param_1)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    puVar4 = *(undefined8 **)(param_1 + 8);
    lVar6 = 0;
    lVar5 = 1;
    do {
      puVar2 = (ulonglong *)*puVar4;
      if (*puVar2 < 2) {
        LOCK();
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if (*puVar2 == 0) {
          FUN_180187680();
        }
        lVar6 = 1;
        if (lVar5 != lVar1) {
          do {
            lVar3 = *(longlong *)(param_1 + 8);
            puVar2 = *(ulonglong **)(lVar3 + lVar5 * 8);
            if (*puVar2 < 2) {
              lVar6 = lVar6 + 1;
              LOCK();
              *puVar2 = *puVar2 - 1;
              UNLOCK();
              if (*puVar2 == 0) {
                FUN_180187680(lVar3 + lVar5 * 8);
              }
            }
            else {
              *(ulonglong **)(lVar3 + (lVar5 - lVar6) * 8) = puVar2;
            }
            lVar5 = lVar5 + 1;
          } while (lVar5 != lVar1);
        }
        break;
      }
      puVar4 = puVar4 + 1;
      bVar7 = lVar5 != lVar1;
      lVar5 = lVar5 + 1;
    } while (bVar7);
    *(longlong *)(param_1 + 0x10) = lVar1 - lVar6;
  }
  return;
}


