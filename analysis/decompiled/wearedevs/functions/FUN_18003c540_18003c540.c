/* FUN_18003c540 @ 18003c540 */

char FUN_18003c540(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  
  plVar1 = (longlong *)*param_1;
  LOCK();
  *(undefined1 *)(plVar1 + 10) = 1;
  UNLOCK();
  LOCK();
  cVar4 = (char)plVar1[6];
  *(char *)(plVar1 + 6) = '\x01';
  UNLOCK();
  if (cVar4 == '\0') {
    lVar2 = plVar1[4];
    plVar1[4] = 0;
    LOCK();
    lVar3 = plVar1[6];
    *(undefined1 *)(plVar1 + 6) = 0;
    UNLOCK();
    cVar4 = '\0';
    if (lVar2 != 0) {
      cVar4 = (**(code **)(lVar2 + 8))(plVar1[5],(char)lVar3);
    }
  }
  LOCK();
  lVar2 = plVar1[9];
  *(char *)(plVar1 + 9) = '\x01';
  UNLOCK();
  if ((char)lVar2 == '\0') {
    lVar2 = plVar1[7];
    plVar1[7] = 0;
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x18))(plVar1[8]);
    }
    LOCK();
    cVar4 = (char)plVar1[9];
    *(char *)(plVar1 + 9) = '\0';
    UNLOCK();
    LOCK();
    *plVar1 = *plVar1 + -1;
    lVar2 = *plVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *plVar1 = *plVar1 + -1;
    lVar2 = *plVar1;
    UNLOCK();
  }
  if (lVar2 == 0) {
    cVar4 = FUN_18003df30(param_1);
    return cVar4;
  }
  return cVar4;
}


