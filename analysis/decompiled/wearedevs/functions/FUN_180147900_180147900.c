/* FUN_180147900 @ 180147900 */

void FUN_180147900(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (1 < (ulonglong)*(byte *)(param_1 + 0x40)) {
    lVar1 = (ulonglong)*(byte *)(param_1 + 0x40) - 1;
  }
                    /* WARNING: Could not emulate address calculation at 0x000180147918 */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((longlong)&DAT_18025544c + (longlong)(int)(&DAT_18025544c)[lVar1]))
            (param_1,(code *)((longlong)&DAT_18025544c + (longlong)(int)(&DAT_18025544c)[lVar1]));
  return;
}


