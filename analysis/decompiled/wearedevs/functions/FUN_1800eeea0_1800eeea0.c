/* FUN_1800eeea0 @ 1800eeea0 */

void FUN_1800eeea0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0xf40) == '\0') {
    plVar2 = *(longlong **)(param_1 + 0x58);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_1800f5960(param_1 + 0x58);
    }
    plVar2 = *(longlong **)(param_1 + 0x60);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cc40(param_1 + 0x60);
    }
    FUN_18000adf0(param_1);
    return;
  }
  if (*(char *)(param_1 + 0xf40) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x132);
  if (cVar1 == '\x04') {
    FUN_1800ee020(param_1 + 0x138);
LAB_1800eef47:
    *(undefined1 *)(param_1 + 0x133) = 0;
    lVar3 = param_1 + 0xd0;
  }
  else {
    if (cVar1 == '\x03') {
      FUN_1800ee7c0(param_1 + 0x158);
      goto LAB_1800eef47;
    }
    if (cVar1 != '\0') goto LAB_1800eef5e;
    lVar3 = param_1 + 0x70;
  }
  FUN_18000adf0(lVar3);
LAB_1800eef5e:
  plVar2 = *(longlong **)(param_1 + 0x58);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_1800f5960(param_1 + 0x58);
  }
  plVar2 = *(longlong **)(param_1 + 0x60);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_18003cc40(param_1 + 0x60);
    return;
  }
  return;
}


