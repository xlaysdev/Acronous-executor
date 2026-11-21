/* FUN_180114980 @ 180114980 */

void FUN_180114980(ulonglong *param_1)

{
  longlong lVar1;
  
  lVar1 = 1;
  if (0x8000000000000001 < *param_1) {
    lVar1 = *param_1 + 0x7ffffffffffffffe;
  }
                    /* WARNING: Could not recover jumptable at 0x0001801149b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_18023f314 + *(int *)(&DAT_18023f314 + lVar1 * 4)))();
  return;
}


