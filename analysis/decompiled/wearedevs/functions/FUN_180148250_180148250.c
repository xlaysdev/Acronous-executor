/* FUN_180148250 @ 180148250 */

void FUN_180148250(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (1 < (ulonglong)*(byte *)(param_1 + 0x40)) {
    lVar1 = (ulonglong)*(byte *)(param_1 + 0x40) - 1;
  }
                    /* WARNING: Could not emulate address calculation at 0x000180148267 */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((longlong)&DAT_1802554b0 + (longlong)(int)(&DAT_1802554b0)[lVar1]))();
  return;
}


