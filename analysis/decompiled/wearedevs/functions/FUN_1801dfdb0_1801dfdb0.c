/* FUN_1801dfdb0 @ 1801dfdb0 */

void FUN_1801dfdb0(longlong *param_1,char param_2)

{
  longlong *plVar1;
  char *pcVar2;
  char cVar3;
  longlong lVar4;
  
  if (param_2 != '\0') {
    *(undefined1 *)(param_1 + 2) = 1;
  }
  LOCK();
  plVar1 = param_1 + 1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar4 = *param_1;
    LOCK();
    pcVar2 = (char *)(lVar4 + 0x28);
    cVar3 = *pcVar2;
    *pcVar2 = '\x01';
    UNLOCK();
    if (cVar3 == -1) {
                    /* WARNING: Could not recover jumptable at 0x0001801dfdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      WakeByAddressSingle(lVar4 + 0x28);
      return;
    }
  }
  return;
}


