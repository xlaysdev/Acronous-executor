/* FUN_1800693c0 @ 1800693c0 */

void FUN_1800693c0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000180069491. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_18020c6d4 + *(int *)(&DAT_18020c6d4 + *param_2 * 4)))();
    return;
  }
  uVar12 = *(ulonglong *)(param_1 + 0x20);
  uVar10 = *(ulonglong *)(param_1 + 0x38);
  if (uVar10 == uVar12) {
    FUN_18007d1c0(param_1 + 0x20);
    uVar12 = *(ulonglong *)(param_1 + 0x20);
    uVar10 = *(ulonglong *)(param_1 + 0x38);
  }
  *(ulonglong *)(param_1 + 0x38) = uVar10 + 1;
  uVar10 = uVar10 + *(longlong *)(param_1 + 0x30);
  uVar13 = 0;
  if (uVar12 <= uVar10) {
    uVar13 = uVar12;
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  lVar11 = (uVar10 - uVar13) * 0x50;
  lVar3 = param_2[9];
  plVar1 = (longlong *)(lVar2 + 0x40 + lVar11);
  *plVar1 = param_2[8];
  plVar1[1] = lVar3;
  lVar3 = *param_2;
  lVar4 = param_2[1];
  lVar5 = param_2[2];
  lVar6 = param_2[3];
  lVar7 = param_2[4];
  lVar8 = param_2[5];
  lVar9 = param_2[7];
  plVar1 = (longlong *)(lVar2 + 0x30 + lVar11);
  *plVar1 = param_2[6];
  plVar1[1] = lVar9;
  plVar1 = (longlong *)(lVar2 + 0x20 + lVar11);
  *plVar1 = lVar7;
  plVar1[1] = lVar8;
  plVar1 = (longlong *)(lVar2 + 0x10 + lVar11);
  *plVar1 = lVar5;
  plVar1[1] = lVar6;
  *(longlong *)(lVar2 + lVar11) = lVar3;
  ((longlong *)(lVar2 + lVar11))[1] = lVar4;
  return;
}


