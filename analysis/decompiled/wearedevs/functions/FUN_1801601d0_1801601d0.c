/* FUN_1801601d0 @ 1801601d0 */

undefined8 FUN_1801601d0(undefined8 param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (param_2 == '\x02') {
    return 1;
  }
  if (*(longlong *)PTR_DAT_1802fd4b8 == 0) {
    if (*(longlong *)PTR_DAT_1802fd4b0 == 2) {
      lVar7 = *(longlong *)(PTR_DAT_1802fd4c0 + 8);
      lVar2 = *(longlong *)(PTR_DAT_1802fd4c0 + 0x10);
      iVar1 = *(int *)PTR_DAT_1802fd4c0;
      goto joined_r0x0001801602a1;
    }
  }
  else {
    puVar4 = (ulonglong *)FUN_180160ac0();
    if ((char)puVar4[5] != '\x01') {
      if ((char)puVar4[5] == '\x02') goto LAB_1801602a5;
      FUN_1801d8880(puVar4,FUN_1801600d0);
      *(undefined1 *)(puVar4 + 5) = 1;
    }
    uVar9 = puVar4[4];
    *(undefined1 *)(puVar4 + 4) = 0;
    if ((char)uVar9 != '\0') {
      if (0x7ffffffffffffffe < *puVar4) {
        FUN_180201940(&DAT_18025f3e8);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      *puVar4 = *puVar4 + 1;
      uVar9 = puVar4[1];
      if (uVar9 == 2) {
        if (*(longlong *)PTR_DAT_1802fd4b0 == 2) {
          puVar5 = (ulonglong *)PTR_DAT_1802fd4c0;
        }
        else {
          puVar5 = (ulonglong *)PTR_DAT_1802fd4c8;
        }
        uVar9 = *puVar5;
      }
      else {
        puVar5 = puVar4 + 1;
      }
      uVar8 = puVar5[1];
      if ((uVar9 & 1) != 0) {
        uVar8 = uVar8 + (*(longlong *)(puVar5[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
      }
      uVar6 = (**(code **)(puVar5[2] + 0x28))(uVar8,param_1);
      *puVar4 = *puVar4 - 1;
      *(undefined1 *)(puVar4 + 4) = 1;
      return uVar6;
    }
  }
LAB_1801602a5:
  lVar7 = *(longlong *)(PTR_DAT_1802fd4c8 + 8);
  lVar2 = *(longlong *)(PTR_DAT_1802fd4c8 + 0x10);
  iVar1 = *(int *)PTR_DAT_1802fd4c8;
joined_r0x0001801602a1:
  if (iVar1 == 1) {
    lVar7 = lVar7 + (*(longlong *)(lVar2 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0001801602d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(lVar2 + 0x28))(lVar7,param_1);
  return uVar6;
}


