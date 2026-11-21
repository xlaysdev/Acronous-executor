/* FUN_18003a880 @ 18003a880 */

void FUN_18003a880(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *(undefined1 *)(plVar1 + 8) = 1;
    UNLOCK();
    LOCK();
    lVar2 = plVar1[4];
    *(char *)(plVar1 + 4) = '\x01';
    UNLOCK();
    if ((char)lVar2 == '\0') {
      lVar2 = plVar1[2];
      plVar1[2] = 0;
      LOCK();
      lVar3 = plVar1[4];
      *(undefined1 *)(plVar1 + 4) = 0;
      UNLOCK();
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 8))(plVar1[3],(char)lVar3);
      }
    }
    LOCK();
    lVar2 = plVar1[7];
    *(char *)(plVar1 + 7) = '\x01';
    UNLOCK();
    if ((char)lVar2 == '\0') {
      lVar2 = plVar1[5];
      plVar1[5] = 0;
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 0x18))(plVar1[6]);
      }
      LOCK();
      *(undefined1 *)(plVar1 + 7) = 0;
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
      FUN_18003cda0(param_1);
      return;
    }
  }
  return;
}


