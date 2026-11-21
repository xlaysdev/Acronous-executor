/* FUN_1801df520 @ 1801df520 */

void FUN_1801df520(ulonglong *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  
  LOCK();
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    *param_2 = '\x01';
  }
  UNLOCK();
  if (cVar1 != '\0') {
    FUN_180200390(param_2);
  }
  if ((DAT_1802fd838 & 0x7fffffffffffffff) == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = FUN_180200a50();
    bVar2 = bVar2 ^ 1;
  }
  cVar1 = param_2[1];
  param_1[1] = (ulonglong)param_2;
  *(byte *)(param_1 + 2) = bVar2;
  *param_1 = (ulonglong)(cVar1 != '\0');
  return;
}


