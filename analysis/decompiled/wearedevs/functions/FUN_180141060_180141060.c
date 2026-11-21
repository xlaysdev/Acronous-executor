/* FUN_180141060 @ 180141060 */

void FUN_180141060(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (1 < (ulonglong)*(byte *)(param_2 + 0x40)) {
    lVar1 = (ulonglong)*(byte *)(param_2 + 0x40) - 1;
  }
                    /* WARNING: Could not emulate address calculation at 0x000180141090 */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((longlong)&DAT_180253bdc + (longlong)(int)(&DAT_180253bdc)[lVar1]))
            ((code *)((longlong)&DAT_180253bdc + (longlong)(int)(&DAT_180253bdc)[lVar1]));
  return;
}


