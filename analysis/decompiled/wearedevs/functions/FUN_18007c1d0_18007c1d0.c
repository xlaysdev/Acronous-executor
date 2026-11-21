/* FUN_18007c1d0 @ 18007c1d0 */

void FUN_18007c1d0(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((char)param_1[4] != '\x03') {
    plVar3 = (longlong *)param_1[1];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003cd00(param_1 + 1);
    }
    FUN_180076120(param_1 + 2);
    lVar4 = *param_1;
    if (lVar4 != 0) {
      LOCK();
      *(undefined1 *)(lVar4 + 0xa8) = 1;
      UNLOCK();
      LOCK();
      cVar1 = *(char *)(lVar4 + 0x88);
      *(char *)(lVar4 + 0x88) = '\x01';
      UNLOCK();
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(lVar4 + 0x78);
        *(undefined8 *)(lVar4 + 0x78) = 0;
        LOCK();
        uVar2 = *(undefined1 *)(lVar4 + 0x88);
        *(undefined1 *)(lVar4 + 0x88) = 0;
        UNLOCK();
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 8))(*(undefined8 *)(lVar4 + 0x80),uVar2);
        }
      }
      LOCK();
      cVar1 = *(char *)(lVar4 + 0xa0);
      *(char *)(lVar4 + 0xa0) = '\x01';
      UNLOCK();
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(lVar4 + 0x90);
        *(undefined8 *)(lVar4 + 0x90) = 0;
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar4 + 0x98));
        }
        LOCK();
        *(undefined1 *)(lVar4 + 0xa0) = 0;
        UNLOCK();
        param_1 = (longlong *)*param_1;
        LOCK();
        *param_1 = *param_1 + -1;
        lVar4 = *param_1;
        UNLOCK();
      }
      else {
        param_1 = (longlong *)*param_1;
        LOCK();
        *param_1 = *param_1 + -1;
        lVar4 = *param_1;
        UNLOCK();
      }
      if (lVar4 == 0) {
        FUN_180113b80();
        return;
      }
    }
  }
  return;
}


