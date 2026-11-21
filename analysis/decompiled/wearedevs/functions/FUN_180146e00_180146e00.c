/* FUN_180146e00 @ 180146e00 */

void FUN_180146e00(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (1 < (ulonglong)*(byte *)(param_2 + 0x40)) {
    lVar1 = (ulonglong)*(byte *)(param_2 + 0x40) - 1;
  }
                    /* WARNING: Could not emulate address calculation at 0x000180146e27 */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((longlong)&UINT_180253d5c + (longlong)(int)(&UINT_180253d5c)[lVar1]))
            ((code *)((longlong)&UINT_180253d5c + (longlong)(int)(&UINT_180253d5c)[lVar1]));
  return;
}


