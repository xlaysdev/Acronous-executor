/* FUN_180051b80 @ 180051b80 */

void FUN_180051b80(undefined8 param_1,int *param_2,ulonglong *param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (*param_2 == 1) {
    uVar3 = *(ulonglong *)(param_2 + 4);
    uVar4 = param_3[2];
    uVar9 = *(undefined4 *)param_4;
    uVar10 = *(undefined4 *)((longlong)param_4 + 4);
    uVar11 = *(undefined4 *)(param_4 + 1);
    uVar12 = *(undefined4 *)((longlong)param_4 + 0xc);
    uVar5 = param_4[2];
    uVar6 = param_4[3];
    uVar7 = param_4[4];
    if (uVar4 == *param_3) {
      FUN_1801f8b00(param_3);
    }
    uVar8 = param_3[1];
    *(undefined8 *)(uVar8 + uVar4 * 0x48) = 1;
    *(ulonglong *)(uVar8 + 8 + uVar4 * 0x48) = uVar3;
    *(undefined8 *)(uVar8 + 0x10 + uVar4 * 0x48) = 0;
    *(undefined8 *)(uVar8 + 0x18 + uVar4 * 0x48) = param_1;
    puVar1 = (undefined4 *)(uVar8 + 0x20 + uVar4 * 0x48);
    *puVar1 = uVar9;
    puVar1[1] = uVar10;
    puVar1[2] = uVar11;
    puVar1[3] = uVar12;
    *(undefined8 *)(uVar8 + 0x30 + uVar4 * 0x48) = uVar5;
    *(undefined8 *)(uVar8 + 0x38 + uVar4 * 0x48) = uVar6;
    *(undefined8 *)(uVar8 + 0x40 + uVar4 * 0x48) = uVar7;
    param_3[2] = uVar4 + 1;
    if (uVar4 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar3,uVar4 + 1,&PTR_s_C__Users_burne__cargo_registry_s_180208e48);
    }
    uVar8 = param_3[1];
    *(undefined8 *)(uVar8 + 0x10 + uVar3 * 0x48) = 1;
    *(ulonglong *)(uVar8 + 0x18 + uVar3 * 0x48) = uVar4;
    param_2[0] = 1;
    param_2[1] = 0;
    *(ulonglong *)(param_2 + 4) = uVar4;
  }
  else {
    uVar3 = param_3[2];
    uVar13 = *param_4;
    uVar14 = param_4[1];
    uVar5 = param_4[2];
    uVar6 = param_4[3];
    uVar7 = param_4[4];
    if (uVar3 == *param_3) {
      FUN_1801f8b00(param_3);
    }
    uVar4 = param_3[1];
    *(undefined8 *)(uVar4 + uVar3 * 0x48) = 0;
    *(undefined8 *)(uVar4 + 8 + uVar3 * 0x48) = param_1;
    *(undefined8 *)(uVar4 + 0x10 + uVar3 * 0x48) = 0;
    *(undefined8 *)(uVar4 + 0x18 + uVar3 * 0x48) = param_1;
    puVar2 = (undefined8 *)(uVar4 + 0x20 + uVar3 * 0x48);
    *puVar2 = uVar13;
    puVar2[1] = uVar14;
    *(undefined8 *)(uVar4 + 0x30 + uVar3 * 0x48) = uVar5;
    *(undefined8 *)(uVar4 + 0x38 + uVar3 * 0x48) = uVar6;
    *(undefined8 *)(uVar4 + 0x40 + uVar3 * 0x48) = uVar7;
    param_3[2] = uVar3 + 1;
    param_2[0] = 1;
    param_2[1] = 0;
    *(ulonglong *)(param_2 + 2) = uVar3;
    *(ulonglong *)(param_2 + 4) = uVar3;
  }
  return;
}


