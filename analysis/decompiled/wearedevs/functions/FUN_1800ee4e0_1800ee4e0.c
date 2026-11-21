/* FUN_1800ee4e0 @ 1800ee4e0 */

void FUN_1800ee4e0(char *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  if (param_1[0xe8] == '\x03') {
    FUN_1800efc50(param_1 + 0xa0);
    param_1[0xe9] = '\0';
    cVar1 = *param_1;
  }
  else {
    if (param_1[0xe8] == '\0') {
      closesocket(*(SOCKET *)(param_1 + 0x90));
    }
    cVar1 = *param_1;
  }
  if (cVar1 == '\0') {
    plVar2 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_1801635e0();
    }
  }
  else {
    plVar2 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_180162f80();
    }
  }
  FUN_18000c570(param_1 + 0x10);
  return;
}


