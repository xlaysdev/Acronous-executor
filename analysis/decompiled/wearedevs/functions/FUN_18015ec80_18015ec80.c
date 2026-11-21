/* FUN_18015ec80 @ 18015ec80 */

void FUN_18015ec80(int *param_1)

{
  if (*param_1 == 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018015ec9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_18025f308 + *(int *)(&DAT_18025f308 + *(longlong *)(param_1 + 4) * 4)))
            (param_1,&DAT_18025f308 + *(int *)(&DAT_18025f308 + *(longlong *)(param_1 + 4) * 4));
  return;
}


