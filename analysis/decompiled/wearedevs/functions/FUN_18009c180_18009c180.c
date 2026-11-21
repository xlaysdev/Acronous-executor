/* FUN_18009c180 @ 18009c180 */

void * FUN_18009c180(void *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  
  lVar6 = *param_2;
  uVar2 = *(ulonglong *)(lVar6 + 0x2300);
  while (uVar2 != (param_2[2] & 0xffffffffffffffe0U)) {
    lVar6 = *(longlong *)(lVar6 + 0x2308);
    if (lVar6 == 0) goto LAB_18009c33b;
    *param_2 = lVar6;
    uVar2 = *(ulonglong *)(lVar6 + 0x2300);
  }
  lVar5 = param_2[1];
  if (((lVar5 != lVar6) && ((*(ulonglong *)(lVar5 + 0x2310) >> 0x20 & 1) != 0)) &&
     (*(ulonglong *)(lVar5 + 0x2318) <= (ulonglong)param_2[2])) {
    do {
      if (*(longlong *)(lVar5 + 0x2308) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_18020f718);
      }
      param_2[1] = *(longlong *)(lVar5 + 0x2308);
      *(undefined8 *)(lVar5 + 0x2300) = 0;
      *(undefined8 *)(lVar5 + 0x2308) = 0;
      *(undefined8 *)(lVar5 + 0x2310) = 0;
      lVar6 = *param_3;
      *(longlong *)(lVar5 + 0x2300) = *(longlong *)(lVar6 + 0x2300) + 0x20;
      lVar3 = 0;
      plVar1 = (longlong *)(lVar6 + 0x2308);
      LOCK();
      lVar6 = *plVar1;
      if (lVar6 == 0) {
        *plVar1 = lVar5;
      }
      else {
        lVar3 = lVar6;
      }
      UNLOCK();
      if (lVar6 != 0) {
        *(longlong *)(lVar5 + 0x2300) = *(longlong *)(lVar3 + 0x2300) + 0x20;
        lVar4 = 0;
        LOCK();
        lVar6 = *(longlong *)(lVar3 + 0x2308);
        if (lVar6 == 0) {
          *(longlong *)(lVar3 + 0x2308) = lVar5;
        }
        else {
          lVar4 = lVar6;
        }
        UNLOCK();
        if (lVar6 != 0) {
          *(longlong *)(lVar5 + 0x2300) = *(longlong *)(lVar4 + 0x2300) + 0x20;
          LOCK();
          bVar8 = *(longlong *)(lVar4 + 0x2308) == 0;
          if (bVar8) {
            *(longlong *)(lVar4 + 0x2308) = lVar5;
          }
          UNLOCK();
          if (!bVar8) {
            thunk_FUN_1801d3330(lVar5,0x2320,8);
          }
        }
      }
      lVar6 = *param_2;
      lVar5 = param_2[1];
    } while (((lVar5 != lVar6) && ((*(ulonglong *)(lVar5 + 0x2310) >> 0x20 & 1) != 0)) &&
            (*(ulonglong *)(lVar5 + 0x2318) <= (ulonglong)param_2[2]));
  }
  lVar5 = param_2[2];
  uVar7 = (uint)lVar5;
  if (((uint)*(ulonglong *)(lVar6 + 0x2310) >> (uVar7 & 0x1f) & 1) == 0) {
    if ((*(ulonglong *)(lVar6 + 0x2310) >> 0x21 & 1) == 0) {
LAB_18009c33b:
      *(undefined8 *)((longlong)param_1 + 0x100) = 4;
    }
    else {
      *(undefined8 *)((longlong)param_1 + 0x100) = 3;
    }
  }
  else {
    memcpy(param_1,(void *)(lVar6 + (ulonglong)(uVar7 & 0x1f) * 0x118),0x118);
    if (1 < *(longlong *)((longlong)param_1 + 0x100) - 3U) {
      param_2[2] = lVar5 + 1;
    }
  }
  return param_1;
}


