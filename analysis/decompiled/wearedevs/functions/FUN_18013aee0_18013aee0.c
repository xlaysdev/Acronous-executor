/* FUN_18013aee0 @ 18013aee0 */

void FUN_18013aee0(longlong param_1)

{
  char *pcVar1;
  char cVar2;
  
  pcVar1 = *(char **)(param_1 + 8);
  if ((*(char *)(param_1 + 0x10) == '\0') &&
     ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) != 0)) {
    cVar2 = FUN_180200a50();
    if (cVar2 == '\0') {
      pcVar1[1] = '\x01';
    }
  }
  LOCK();
  cVar2 = *pcVar1;
  *pcVar1 = '\0';
  UNLOCK();
  if (cVar2 == '\x02') {
    WakeByAddressSingle(pcVar1);
    return;
  }
  return;
}


