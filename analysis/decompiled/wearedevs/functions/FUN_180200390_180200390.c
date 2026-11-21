/* FUN_180200390 @ 180200390 */

void FUN_180200390(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  undefined1 local_29;
  
  cVar2 = *param_1;
  if (cVar2 == '\x01') {
    iVar3 = -99;
    do {
      cVar2 = *param_1;
      if (cVar2 != '\x01') break;
      bVar4 = iVar3 != 0;
      iVar3 = iVar3 + 1;
    } while (bVar4);
  }
  if (cVar2 == '\0') {
    cVar2 = '\0';
    LOCK();
    cVar1 = *param_1;
    if (cVar1 == '\0') {
      *param_1 = '\x01';
    }
    else {
      cVar2 = cVar1;
    }
    UNLOCK();
    if (cVar1 == '\0') {
      return;
    }
  }
  do {
    do {
      if (cVar2 != '\x02') {
        LOCK();
        cVar2 = *param_1;
        *param_1 = '\x02';
        UNLOCK();
        if (cVar2 == '\0') {
          return;
        }
      }
      local_29 = 2;
      iVar3 = WaitOnAddress(param_1,&local_29,1,0xffffffff);
      if (iVar3 != 1) {
        GetLastError();
      }
      cVar2 = *param_1;
    } while (cVar2 != '\x01');
    iVar3 = -99;
    do {
      cVar2 = *param_1;
      if (cVar2 != '\x01') break;
      bVar4 = iVar3 != 0;
      iVar3 = iVar3 + 1;
    } while (bVar4);
  } while( true );
}


