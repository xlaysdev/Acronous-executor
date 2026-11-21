/* FUN_18017bee0 @ 18017bee0 */

bool FUN_18017bee0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  bool bVar6;
  byte bVar7;
  char cVar8;
  longlong lVar9;
  bool bVar10;
  
  LOCK();
  bVar10 = *(char *)(param_2 + 0xe0) == '\0';
  if (bVar10) {
    *(char *)(param_2 + 0xe0) = '\x01';
  }
  UNLOCK();
  if (!bVar10) {
    FUN_180200390(param_2 + 0xe0);
  }
  puVar5 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    bVar7 = 0;
  }
  else {
    bVar7 = FUN_180200a50();
    bVar7 = bVar7 ^ 1;
  }
  lVar3 = *(longlong *)(param_2 + 0xf8);
  lVar9 = 0;
  do {
    bVar10 = lVar3 == lVar9;
    if (bVar10) {
      if (((bVar7 == 0) && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
         (cVar8 = FUN_180200a50(), cVar8 == '\0')) {
        *(undefined1 *)(param_2 + 0xe1) = 1;
      }
      bVar6 = false;
      LOCK();
      cVar8 = *(char *)(param_2 + 0xe0);
      *(char *)(param_2 + 0xe0) = '\0';
      UNLOCK();
      goto LAB_18017bfa0;
    }
    lVar1 = lVar9 + 1;
    lVar4 = *(longlong *)(param_2 + 0xf0);
    lVar2 = lVar9 * 8;
    lVar9 = lVar1;
  } while (*(longlong *)(lVar4 + lVar2) != param_3);
  *(undefined8 *)(lVar4 + -8 + lVar1 * 8) = *(undefined8 *)(lVar4 + -8 + lVar3 * 8);
  *(longlong *)(param_2 + 0xf8) = lVar3 + -1;
  LOCK();
  *param_1 = *param_1 + 0x10000;
  UNLOCK();
  if (((bVar7 == 0) && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
     (cVar8 = FUN_180200a50(), cVar8 == '\0')) {
    *(undefined1 *)(param_2 + 0xe1) = 1;
  }
  LOCK();
  cVar8 = *(char *)(param_2 + 0xe0);
  *(char *)(param_2 + 0xe0) = '\0';
  UNLOCK();
  bVar6 = true;
LAB_18017bfa0:
  if (cVar8 == '\x02') {
    WakeByAddressSingle(param_2 + 0xe0);
    bVar6 = !bVar10;
  }
  return bVar6;
}


