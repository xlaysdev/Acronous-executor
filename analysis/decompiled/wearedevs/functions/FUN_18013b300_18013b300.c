/* FUN_18013b300 @ 18013b300 */

void FUN_18013b300(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_1[2] != 0) {
    lVar2 = param_1[1] + 0x18;
    lVar1 = 1;
    do {
      if (*(int *)(lVar2 + -0x18) != 2) {
                    /* WARNING: Could not recover jumptable at 0x00018013b390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_18024fb28 + *(int *)(&DAT_18024fb28 + *(longlong *)(lVar2 + -8) * 4)))();
        return;
      }
      lVar2 = lVar2 + 0xf8;
      bVar3 = lVar1 != param_1[2];
      lVar1 = lVar1 + 1;
    } while (bVar3);
  }
  if (*param_1 == 0) {
    return;
  }
  thunk_FUN_1801d3330(param_1[1],*param_1 * 0xf8,8);
  return;
}


