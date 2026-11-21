/* FUN_180161550 @ 180161550 */

void FUN_180161550(undefined8 *param_1,char *param_2)

{
  ulonglong *puVar1;
  char cVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  ulonglong *puVar6;
  undefined *puVar7;
  ulonglong uVar8;
  char cVar9;
  ulonglong uVar10;
  
  if (DAT_1802fd740 == 0) {
    if (DAT_1802fd738 == 2) {
      puVar7 = PTR_DAT_1802fd4a0;
      if ((int)DAT_1802fd498 == 1) {
        puVar7 = PTR_DAT_1802fd4a0 +
                 (*(longlong *)(PTR_DAT_1802fd4a8 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
      }
      cVar5 = (**(code **)(PTR_DAT_1802fd4a8 + 0x20))(puVar7,*param_1);
      cVar2 = *param_2;
      cVar9 = '\x01';
      if (cVar2 == cVar5) {
        cVar9 = cVar2;
      }
      if (cVar2 != '\x03') {
        cVar5 = cVar9;
      }
      *param_2 = cVar5;
      return;
    }
  }
  else {
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar1 = (ulonglong *)(lVar3 + 0x30);
    if (*(char *)(lVar3 + 0x58) != '\x01') {
      if (*(char *)(lVar3 + 0x58) == '\x02') goto LAB_180161674;
      FUN_1801d8880(puVar1,FUN_180160a20);
      *(undefined1 *)(lVar3 + 0x58) = 1;
    }
    cVar2 = *(char *)(lVar3 + 0x50);
    *(undefined1 *)(lVar3 + 0x50) = 0;
    if (cVar2 != '\0') {
      if (0x7ffffffffffffffe < *puVar1) {
        FUN_180201940(&PTR_s_C__Users_burne__cargo_registry_s_18025fa80);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      *puVar1 = *puVar1 + 1;
      uVar10 = *(ulonglong *)(lVar3 + 0x38);
      if (uVar10 == 2) {
        puVar6 = &DAT_18025f9f8;
        if (DAT_1802fd738 == 2) {
          puVar6 = &DAT_1802fd498;
        }
        uVar10 = *puVar6;
      }
      else {
        puVar6 = (ulonglong *)(lVar3 + 0x38);
      }
      uVar8 = puVar6[1];
      if ((uVar10 & 1) != 0) {
        uVar8 = uVar8 + (*(longlong *)(puVar6[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
      }
      cVar5 = (**(code **)(puVar6[2] + 0x20))(uVar8,*param_1);
      cVar2 = *param_2;
      cVar9 = '\x01';
      if (cVar2 == cVar5) {
        cVar9 = cVar2;
      }
      if (cVar2 != '\x03') {
        cVar5 = cVar9;
      }
      *param_2 = cVar5;
      *puVar1 = *puVar1 - 1;
      *(undefined1 *)(lVar3 + 0x50) = 1;
      return;
    }
  }
LAB_180161674:
  *param_2 = *param_2 != '\0' && *param_2 != '\x03';
  return;
}


