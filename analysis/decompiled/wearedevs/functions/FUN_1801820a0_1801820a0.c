/* FUN_1801820a0 @ 1801820a0 */

void FUN_1801820a0(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined *puVar4;
  char cVar5;
  longlong lVar6;
  bool bVar7;
  
  uVar1 = param_2[1];
  uVar2 = *(ulonglong *)(*param_2 + 0xe8);
  if (uVar2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_180201d02(uVar1,uVar2,&PTR_s_C__Users_burne__cargo_registry_s_180264f10);
  }
  lVar3 = *(longlong *)(*param_2 + 0xe0);
  lVar6 = uVar1 * 0x80;
  *(undefined8 *)(lVar3 + 0x10 + lVar6) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(lVar3 + 0x20 + lVar6) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(lVar3 + 0x28 + lVar6) = *(undefined8 *)(param_1 + 0x40);
  if (*(char *)(param_1 + 0x72) == '\0') {
    lVar3 = *param_2;
    LOCK();
    bVar7 = *(char *)(lVar3 + 0x108) == '\0';
    if (bVar7) {
      *(char *)(lVar3 + 0x108) = '\x01';
    }
    UNLOCK();
    if (!bVar7) {
      FUN_180200390(lVar3 + 0x108);
    }
    puVar4 = PTR_DAT_1802fd600;
    if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
      *(undefined1 *)(param_1 + 0x72) = *(undefined1 *)(lVar3 + 0x138);
      uVar1 = *(ulonglong *)puVar4;
joined_r0x0001801821a3:
      if ((uVar1 & 0x7fffffffffffffff) != 0) {
        cVar5 = FUN_180200a50();
        if (cVar5 == '\0') {
          *(undefined1 *)(lVar3 + 0x109) = 1;
        }
      }
    }
    else {
      cVar5 = FUN_180200a50();
      *(undefined1 *)(param_1 + 0x72) = *(undefined1 *)(lVar3 + 0x138);
      if (cVar5 != '\0') {
        uVar1 = *(ulonglong *)puVar4;
        goto joined_r0x0001801821a3;
      }
    }
    LOCK();
    cVar5 = *(char *)(lVar3 + 0x108);
    *(char *)(lVar3 + 0x108) = '\0';
    UNLOCK();
    if (cVar5 == '\x02') {
      WakeByAddressSingle(lVar3 + 0x108);
      cVar5 = *(char *)(param_1 + 0x73);
      goto joined_r0x000180182147;
    }
  }
  cVar5 = *(char *)(param_1 + 0x73);
joined_r0x000180182147:
  if (cVar5 == '\0') {
    *(undefined1 *)(param_1 + 0x73) = 0;
  }
  return;
}


