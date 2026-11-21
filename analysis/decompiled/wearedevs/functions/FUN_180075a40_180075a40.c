/* FUN_180075a40 @ 180075a40 */

void FUN_180075a40(char *param_1,byte param_2)

{
  char cVar1;
  
  if (((param_2 & 1) == 0) && ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) != 0)) {
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
    WakeByAddressSingle();
    return;
  }
  return;
}


