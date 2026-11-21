/* FUN_1801e2000 @ 1801e2000 */

void FUN_1801e2000(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *param_1 = 0;
    LOCK();
    cVar2 = *(char *)((longlong)param_1 + 0xc);
    *(char *)((longlong)param_1 + 0xc) = '\0';
    UNLOCK();
    if (cVar2 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x0001801e201a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      WakeByAddressSingle((longlong)param_1 + 0xc);
      return;
    }
  }
  return;
}


