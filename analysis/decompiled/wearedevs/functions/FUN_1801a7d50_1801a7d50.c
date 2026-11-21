/* FUN_1801a7d50 @ 1801a7d50 */

void FUN_1801a7d50(ulonglong *param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong *puVar11;
  
  if (param_2 <= param_3 - 1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (param_3 != param_2) {
    lVar10 = param_3 * 0x10;
    puVar8 = param_1 + param_3 * 2;
    do {
      uVar3 = *puVar8;
      if (uVar3 < puVar8[-2]) {
        uVar7 = puVar8[1];
        lVar9 = lVar10;
        do {
          puVar2 = (undefined8 *)((longlong)param_1 + lVar9 + -0x10);
          uVar5 = puVar2[1];
          *(undefined8 *)((longlong)param_1 + lVar9) = *puVar2;
          ((undefined8 *)((longlong)param_1 + lVar9))[1] = uVar5;
          if (lVar9 == 0x10) {
            puVar11 = param_1;
            goto LAB_1801a7d83;
          }
          lVar1 = lVar9 + -0x10;
          lVar6 = lVar9 + -0x20;
          lVar9 = lVar1;
        } while (uVar3 < *(ulonglong *)((longlong)param_1 + lVar6));
        puVar11 = (ulonglong *)(lVar1 + (longlong)param_1);
LAB_1801a7d83:
        *puVar11 = uVar3;
        *(int *)(puVar11 + 1) = (int)uVar7;
      }
      puVar8 = puVar8 + 2;
      lVar10 = lVar10 + 0x10;
    } while (puVar8 != param_1 + param_2 * 2);
  }
  return;
}


