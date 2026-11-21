/* FUN_180173c90 @ 180173c90 */

void FUN_180173c90(longlong param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  ulonglong *puVar6;
  char *pcVar7;
  uint uVar8;
  undefined8 uVar9;
  
  uVar9 = 0xfffffffffffffffe;
  pcVar7 = (char *)(param_1 + 0xf8);
  LOCK();
  bVar5 = *(char *)(param_1 + 0xf8) == '\0';
  if (bVar5) {
    *(char *)(param_1 + 0xf8) = '\x01';
  }
  UNLOCK();
  puVar6 = param_2;
  if (!bVar5) {
    FUN_180200390(pcVar7);
  }
  puVar3 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    uVar8 = 0;
    cVar4 = *(char *)(param_1 + 0x128);
  }
  else {
    uVar8 = FUN_180200a50();
    uVar8 = uVar8 ^ 1;
    cVar4 = *(char *)(param_1 + 0x128);
  }
  if (cVar4 == '\0') {
    lVar2 = *(longlong *)(param_1 + 0xe0);
    if (*(longlong *)(param_1 + 0x120) == 0) {
      *(ulonglong **)(param_1 + 0x118) = param_2;
    }
    else {
      *(ulonglong **)(*(longlong *)(param_1 + 0x120) + 8) = param_2;
    }
    *(ulonglong **)(param_1 + 0x120) = param_2;
    *(longlong *)(param_1 + 0xe0) = lVar2 + 1;
    cVar4 = (char)uVar8;
  }
  else {
    LOCK();
    uVar1 = *param_2;
    *param_2 = *param_2 - 0x40;
    UNLOCK();
    if (uVar1 < 0x40) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("assertion failed: prev.ref_count() >= 1",0x27,
                    &PTR_s_C__Users_burne__cargo_registry_s_180263618,param_4,puVar6,pcVar7,uVar8,
                    uVar9);
    }
    if ((uVar1 & 0xffffffffffffffc0) == 0x40) {
      (**(code **)(param_2[2] + 0x10))(param_2);
    }
    cVar4 = (char)uVar8;
  }
  if (((cVar4 == '\0') && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
     (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
    *(undefined1 *)(param_1 + 0xf9) = 1;
  }
  LOCK();
  cVar4 = *pcVar7;
  *pcVar7 = '\0';
  UNLOCK();
  if (cVar4 == '\x02') {
    WakeByAddressSingle(pcVar7);
  }
  return;
}


