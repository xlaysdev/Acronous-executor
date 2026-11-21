/* FUN_180200110 @ 180200110 */

void FUN_180200110(void)

{
  code *pcVar1;
  char cVar2;
  WSADATA local_1b0;
  int local_14;
  
  memset(&local_1b0,0,0x198);
  local_14 = WSAStartup(0x202,&local_1b0);
  cVar2 = DAT_1802fd808;
  if (local_14 != 0) {
    FUN_180200bc2(0,&local_14,&DAT_18028fa90,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  LOCK();
  DAT_1802fd808 = 1;
  UNLOCK();
  if (cVar2 != '\0') {
    WSACleanup();
  }
  return;
}


