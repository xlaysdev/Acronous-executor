/* FUN_18016cc40 @ 18016cc40 */

void FUN_18016cc40(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  
  puVar5 = (undefined8 *)*param_1;
  lVar6 = param_1[1];
  *param_1 = 8;
  param_1[1] = 8;
  uVar7 = lVar6 - (longlong)puVar5;
  if (uVar7 == 0) {
    lVar6 = param_1[4];
    if (lVar6 == 0) {
      return;
    }
    lVar8 = param_1[2];
    lVar4 = *(longlong *)(lVar8 + 0x10);
    lVar2 = param_1[3];
    if (lVar2 == lVar4) goto LAB_18016ccf6;
  }
  else {
    uVar3 = 1;
    do {
      plVar1 = (longlong *)*puVar5;
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_1801639b0(puVar5);
      }
      puVar5 = puVar5 + 1;
      bVar9 = uVar3 != uVar7 >> 3;
      uVar3 = uVar3 + 1;
    } while (bVar9);
    lVar6 = param_1[4];
    if (lVar6 == 0) {
      return;
    }
    lVar8 = param_1[2];
    lVar2 = param_1[3];
    lVar4 = *(longlong *)(lVar8 + 0x10);
    if (lVar2 == lVar4) goto LAB_18016ccf6;
  }
  memmove((void *)(*(longlong *)(lVar8 + 8) + lVar4 * 8),
          (void *)(*(longlong *)(lVar8 + 8) + lVar2 * 8),lVar6 * 8);
LAB_18016ccf6:
  *(longlong *)(lVar8 + 0x10) = lVar4 + lVar6;
  return;
}


