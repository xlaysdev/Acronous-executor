/* FUN_180132c20 @ 180132c20 */

void FUN_180132c20(uint *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000180132c3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_180249fe8 + *(int *)(&DAT_180249fe8 + (ulonglong)*param_1 * 4)))
            (param_1 + 1,&DAT_180249fe8 + *(int *)(&DAT_180249fe8 + (ulonglong)*param_1 * 4));
  return;
}


