/* FUN_1801e2520 @ 1801e2520 */

void FUN_1801e2520(char *param_1,byte param_2)

{
  char cVar1;
  
  if (((param_2 & 1) == 0) && ((DAT_1802fd838 & 0x7fffffffffffffff) != 0)) {
    cVar1 = FUN_180200a50();
    if (cVar1 == '\0') {
      param_1[1] = '\x01';
    }
  }
  LOCK();
  cVar1 = *param_1;
  *param_1 = '\0';
  UNLOCK();
  if (cVar1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x0001801e2554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    WakeByAddressSingle();
    return;
  }
  return;
}


