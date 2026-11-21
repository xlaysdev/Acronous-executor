/* FUN_1801b4540 @ 1801b4540 */

void FUN_1801b4540(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = 0xf;
  if (*param_1 < 0) {
    lVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001801b457f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_180286268 + *(int *)(&DAT_180286268 + lVar1 * 4)))();
  return;
}


