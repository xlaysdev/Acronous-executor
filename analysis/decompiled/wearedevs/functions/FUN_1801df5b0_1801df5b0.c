/* FUN_1801df5b0 @ 1801df5b0 */

void FUN_1801df5b0(int *param_1)

{
  LOCK();
  *param_1 = *param_1 + 1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x0001801df5b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeByAddressAll();
  return;
}


