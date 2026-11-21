/* FUN_180161360 @ 180161360 */

void FUN_180161360(undefined8 param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined *puVar6;
  char cVar7;
  ulonglong *puVar8;
  undefined *puVar9;
  ulonglong uVar10;
  
  puVar6 = PTR_DAT_1802fd4a8;
  if (DAT_1802fd740 == 0) {
    if (DAT_1802fd738 == 2) {
      puVar9 = PTR_DAT_1802fd4a0;
      if ((int)DAT_1802fd498 == 1) {
        puVar9 = PTR_DAT_1802fd4a0 +
                 (*(longlong *)(PTR_DAT_1802fd4a8 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
      }
      cVar7 = (**(code **)(PTR_DAT_1802fd4a8 + 0x50))(puVar9,param_1);
      if (cVar7 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00018016148f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(puVar6 + 0x58))(puVar9,param_1);
        return;
      }
    }
  }
  else {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar1 = (ulonglong *)(lVar2 + 0x30);
    if (*(char *)(lVar2 + 0x58) != '\x01') {
      if (*(char *)(lVar2 + 0x58) == '\x02') {
        return;
      }
      FUN_1801d8880(puVar1,FUN_180160a20);
      *(undefined1 *)(lVar2 + 0x58) = 1;
    }
    cVar7 = *(char *)(lVar2 + 0x50);
    *(undefined1 *)(lVar2 + 0x50) = 0;
    if (cVar7 == '\x01') {
      if (0x7ffffffffffffffe < *puVar1) {
        FUN_180201940(&PTR_s_C__Users_burne__cargo_registry_s_18025fa80);
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      *puVar1 = *puVar1 + 1;
      uVar3 = *(ulonglong *)(lVar2 + 0x38);
      if (uVar3 == 2) {
        puVar8 = &DAT_18025f9f8;
        if (DAT_1802fd738 == 2) {
          puVar8 = &DAT_1802fd498;
        }
        uVar3 = *puVar8;
        uVar10 = puVar8[1];
        uVar4 = puVar8[2];
      }
      else {
        uVar10 = *(ulonglong *)(lVar2 + 0x40);
        uVar4 = *(ulonglong *)(lVar2 + 0x48);
      }
      if ((uVar3 & 1) != 0) {
        uVar10 = uVar10 + (*(longlong *)(uVar4 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
      }
      cVar7 = (**(code **)(uVar4 + 0x50))(uVar10,param_1);
      if (cVar7 != '\0') {
        (**(code **)(uVar4 + 0x58))(uVar10,param_1);
      }
      *puVar1 = *puVar1 - 1;
      *(undefined1 *)(lVar2 + 0x50) = 1;
    }
  }
  return;
}


