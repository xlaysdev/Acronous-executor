/* Unwind@18013b400 @ 18013b400 */

void Unwind_18013b400(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  while( true ) {
    if (lVar1 == *(longlong *)(param_2 + 0x38)) {
      return;
    }
    if (*(int *)(*(longlong *)(param_2 + 0x40) + lVar1 * 0xf8) != 2) break;
    lVar1 = lVar1 + 1;
  }
  lVar1 = lVar1 * 0xf8 + *(longlong *)(param_2 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00018013b477. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_18024fb38 + *(int *)(&DAT_18024fb38 + *(longlong *)(lVar1 + 0x10) * 4)))
            (lVar1 + 0x18,
             &DAT_18024fb38 + *(int *)(&DAT_18024fb38 + *(longlong *)(lVar1 + 0x10) * 4));
  return;
}


