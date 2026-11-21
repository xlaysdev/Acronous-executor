/* FUN_18003abe0 @ 18003abe0 */

char FUN_18003abe0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  
  plVar1 = (longlong *)*param_1;
  LOCK();
  *(undefined1 *)(plVar1 + 0x10) = 1;
  UNLOCK();
  LOCK();
  cVar4 = (char)plVar1[0xc];
  *(char *)(plVar1 + 0xc) = '\x01';
  UNLOCK();
  if (cVar4 == '\0') {
    lVar2 = plVar1[10];
    plVar1[10] = 0;
    LOCK();
    lVar3 = plVar1[0xc];
    *(undefined1 *)(plVar1 + 0xc) = 0;
    UNLOCK();
    cVar4 = '\0';
    if (lVar2 != 0) {
      cVar4 = (**(code **)(lVar2 + 8))(plVar1[0xb],(char)lVar3);
    }
  }
  LOCK();
  lVar2 = plVar1[0xf];
  *(char *)(plVar1 + 0xf) = '\x01';
  UNLOCK();
  if ((char)lVar2 == '\0') {
    lVar2 = plVar1[0xd];
    plVar1[0xd] = 0;
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x18))(plVar1[0xe]);
    }
    LOCK();
    cVar4 = (char)plVar1[0xf];
    *(char *)(plVar1 + 0xf) = '\0';
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
    cVar4 = FUN_18003ce90(param_1);
    return cVar4;
  }
  return cVar4;
}


