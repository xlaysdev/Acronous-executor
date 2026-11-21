/* FUN_180167570 @ 180167570 */

void FUN_180167570(undefined8 *param_1)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  undefined *puVar4;
  byte bVar5;
  char cVar6;
  ulonglong uVar7;
  bool bVar8;
  
  if (*(char *)(param_1 + 2) == '\0') {
    lVar1 = param_1[1];
    LOCK();
    bVar8 = *(char *)(lVar1 + 8) == '\0';
    if (bVar8) {
      *(char *)(lVar1 + 8) = '\x01';
    }
    UNLOCK();
    if (!bVar8) {
      FUN_180200390(lVar1 + 8);
    }
    puVar4 = PTR_DAT_1802fd600;
    if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
      bVar5 = 0;
    }
    else {
      bVar5 = FUN_180200a50();
      bVar5 = bVar5 ^ 1;
    }
    uVar7 = (ulonglong)*(byte *)(lVar1 + 9);
    puVar2 = (ulonglong *)*param_1;
    puVar3 = (ulonglong *)*puVar2;
    while( true ) {
      if (puVar3 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180260830);
      }
      if (puVar3 == puVar2) break;
      uVar7 = *puVar3;
      if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180260848);
      }
      *puVar2 = uVar7;
      *(ulonglong **)(uVar7 + 8) = puVar2;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[4] = 2;
      puVar3 = (ulonglong *)*puVar2;
    }
    if (((bVar5 == 0) && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
       (cVar6 = FUN_180200a50(0,uVar7), cVar6 == '\0')) {
      *(undefined1 *)(lVar1 + 9) = 1;
    }
    LOCK();
    cVar6 = *(char *)(lVar1 + 8);
    *(char *)(lVar1 + 8) = '\0';
    UNLOCK();
    if (cVar6 == '\x02') {
      WakeByAddressSingle(lVar1 + 8);
      return;
    }
  }
  return;
}


