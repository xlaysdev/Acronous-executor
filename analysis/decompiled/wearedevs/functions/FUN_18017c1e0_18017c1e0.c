/* FUN_18017c1e0 @ 18017c1e0 */

ulonglong FUN_18017c1e0(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined *puVar5;
  byte bVar6;
  char cVar7;
  ulonglong unaff_RSI;
  undefined7 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  
  LOCK();
  bVar11 = *(char *)(param_2 + 0xe0) == '\0';
  if (bVar11) {
    *(char *)(param_2 + 0xe0) = '\x01';
  }
  UNLOCK();
  if (!bVar11) {
    FUN_180200390(param_2 + 0xe0);
    unaff_RSI = param_2;
  }
  puVar5 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    bVar6 = 0;
  }
  else {
    bVar6 = FUN_180200a50();
    bVar6 = bVar6 ^ 1;
    unaff_RSI = param_2;
  }
  lVar2 = *(longlong *)(param_2 + 0xf0);
  uVar3 = *(ulonglong *)(param_2 + 0xf8);
  uVar9 = uVar3 & 0xffffffffffffff8;
  uVar10 = 0;
  while (uVar8 = (undefined7)(unaff_RSI >> 8), uVar9 != uVar10) {
    unaff_RSI = CONCAT71(uVar8,1);
    if (((((*(longlong *)(lVar2 + uVar10 * 8) == param_3) ||
          (*(longlong *)(lVar2 + 8 + uVar10 * 8) == param_3)) ||
         (*(longlong *)(lVar2 + 0x10 + uVar10 * 8) == param_3)) ||
        ((*(longlong *)(lVar2 + 0x18 + uVar10 * 8) == param_3 ||
         (*(longlong *)(lVar2 + 0x20 + uVar10 * 8) == param_3)))) ||
       ((*(longlong *)(lVar2 + 0x28 + uVar10 * 8) == param_3 ||
        ((*(longlong *)(lVar2 + 0x30 + uVar10 * 8) == param_3 ||
         (lVar1 = uVar10 * 8, uVar10 = uVar10 + 8, *(longlong *)(lVar2 + 0x38 + lVar1) == param_3)))
        ))) goto LAB_18017c29d;
  }
  uVar4 = (uint)uVar3 & 7;
  if ((uVar3 & 7) != 0) {
    unaff_RSI = CONCAT71(uVar8,1);
    if (*(longlong *)(lVar2 + uVar9 * 8) == param_3) goto LAB_18017c29d;
    if (uVar4 != 1) {
      if (*(longlong *)(lVar2 + 8 + uVar9 * 8) == param_3) goto LAB_18017c29d;
      if (uVar4 != 2) {
        if (*(longlong *)(lVar2 + 0x10 + uVar9 * 8) == param_3) goto LAB_18017c29d;
        if (uVar4 != 3) {
          if (*(longlong *)(lVar2 + 0x18 + uVar9 * 8) == param_3) goto LAB_18017c29d;
          if (uVar4 != 4) {
            if (*(longlong *)(lVar2 + 0x20 + uVar9 * 8) == param_3) goto LAB_18017c29d;
            if (uVar4 != 5) {
              if (*(longlong *)(lVar2 + 0x28 + uVar9 * 8) == param_3) goto LAB_18017c29d;
              if (uVar4 != 6) {
                if (*(longlong *)(lVar2 + 0x30 + uVar9 * 8) != param_3) {
                  unaff_RSI = CONCAT71(uVar8,-(uVar4 != 7));
                }
                goto LAB_18017c29d;
              }
            }
          }
        }
      }
    }
  }
  unaff_RSI = 0;
LAB_18017c29d:
  if ((bVar6 == 0) &&
     (((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0 && (cVar7 = FUN_180200a50(), cVar7 == '\0'))
     )) {
    *(undefined1 *)(param_2 + 0xe1) = 1;
  }
  LOCK();
  cVar7 = *(char *)(param_2 + 0xe0);
  *(char *)(param_2 + 0xe0) = '\0';
  UNLOCK();
  if (cVar7 == '\x02') {
    WakeByAddressSingle(param_2 + 0xe0);
  }
  return unaff_RSI & 0xffffff01;
}


