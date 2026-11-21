/* FUN_180029bb0 @ 180029bb0 */

void FUN_180029bb0(char *param_1)

{
  char *pcVar1;
  longlong *plVar2;
  
  FUN_180173f80();
  if (*param_1 == '\0') {
    LOCK();
    pcVar1 = param_1 + 0x28;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    UNLOCK();
    FUN_1800312e0(*(undefined8 *)pcVar1);
  }
  if (param_1[0x30] == '\0') {
    plVar2 = *(longlong **)(param_1 + 0x38);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_1801635e0();
    }
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x38);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_180162f80();
    }
  }
  FUN_180029d70(param_1 + 0x40);
  return;
}


