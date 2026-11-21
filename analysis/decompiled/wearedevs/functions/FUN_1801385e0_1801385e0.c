/* FUN_1801385e0 @ 1801385e0 */

void FUN_1801385e0(undefined2 *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_2;
  iVar2 = 6;
  if (3 < uVar1) {
    iVar2 = uVar1 - 4;
  }
  if ((iVar2 == 1) || (iVar2 == 5)) {
    *param_1 = 3;
  }
  else {
    if (iVar2 == 6) {
                    /* WARNING: Could not recover jumptable at 0x00018013861f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_18024e0f8 + *(int *)(&DAT_18024e0f8 + (ulonglong)uVar1 * 4)))
                (&DAT_18024e0f8 + *(int *)(&DAT_18024e0f8 + (ulonglong)uVar1 * 4));
      return;
    }
    *param_1 = 0x103;
  }
  return;
}


