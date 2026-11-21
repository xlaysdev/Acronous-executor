/* FUN_180139330 @ 180139330 */

void FUN_180139330(uint *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = 6;
  if (3 < *param_1) {
    uVar1 = (ulonglong)(*param_1 - 4);
  }
                    /* WARNING: Could not recover jumptable at 0x00018013935b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_18024e144 + *(int *)(&DAT_18024e144 + uVar1 * 4)))
            (param_2,&DAT_18024e144,&DAT_18024e144 + *(int *)(&DAT_18024e144 + uVar1 * 4));
  return;
}


