/* FUN_180076d70 @ 180076d70 */

void FUN_180076d70(ulonglong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar5 = 2;
  if (2 < *param_1) {
    lVar5 = *param_1 - 3;
  }
  if (lVar5 == 0) {
    FUN_18007cb20(param_1 + 3);
    if ((char)param_1[0x12] != '\x03') {
      FUN_18007c6c0(param_1 + 0x10);
    }
    if ((param_1[1] != 0) && (plVar3 = (longlong *)param_1[2], plVar3 != (longlong *)0x0)) {
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_180114260(param_1 + 2);
      }
    }
    uVar4 = param_1[0x13];
    if (uVar4 != 0) {
      LOCK();
      *(undefined1 *)(uVar4 + 0x42) = 1;
      UNLOCK();
      LOCK();
      cVar1 = *(char *)(uVar4 + 0x20);
      *(char *)(uVar4 + 0x20) = '\x01';
      UNLOCK();
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(uVar4 + 0x10);
        *(undefined8 *)(uVar4 + 0x10) = 0;
        LOCK();
        *(undefined1 *)(uVar4 + 0x20) = 0;
        UNLOCK();
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 0x18))(*(undefined8 *)(uVar4 + 0x18));
        }
      }
      LOCK();
      cVar1 = *(char *)(uVar4 + 0x38);
      *(char *)(uVar4 + 0x38) = '\x01';
      UNLOCK();
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(uVar4 + 0x28);
        *(undefined8 *)(uVar4 + 0x28) = 0;
        LOCK();
        uVar2 = *(undefined1 *)(uVar4 + 0x38);
        *(undefined1 *)(uVar4 + 0x38) = 0;
        UNLOCK();
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 8))(*(undefined8 *)(uVar4 + 0x30),uVar2);
        }
      }
      plVar3 = (longlong *)param_1[0x13];
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_18003cda0();
        return;
      }
    }
  }
  else {
    if (lVar5 != 1) {
      FUN_1800ab580();
      plVar3 = (longlong *)param_1[0xb2];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_18003dcd0();
        }
      }
      uVar4 = param_1[0xb3];
      if (uVar4 != 0) {
        LOCK();
        *(undefined1 *)(uVar4 + 0x40) = 1;
        UNLOCK();
        LOCK();
        cVar1 = *(char *)(uVar4 + 0x20);
        *(char *)(uVar4 + 0x20) = '\x01';
        UNLOCK();
        if (cVar1 == '\0') {
          lVar5 = *(longlong *)(uVar4 + 0x10);
          *(undefined8 *)(uVar4 + 0x10) = 0;
          LOCK();
          uVar2 = *(undefined1 *)(uVar4 + 0x20);
          *(undefined1 *)(uVar4 + 0x20) = 0;
          UNLOCK();
          if (lVar5 != 0) {
            (**(code **)(lVar5 + 8))(*(undefined8 *)(uVar4 + 0x18),uVar2);
          }
        }
        LOCK();
        cVar1 = *(char *)(uVar4 + 0x38);
        *(char *)(uVar4 + 0x38) = '\x01';
        UNLOCK();
        if (cVar1 == '\0') {
          lVar5 = *(longlong *)(uVar4 + 0x28);
          *(undefined8 *)(uVar4 + 0x28) = 0;
          if (lVar5 != 0) {
            (**(code **)(lVar5 + 0x18))(*(undefined8 *)(uVar4 + 0x30));
          }
          LOCK();
          *(undefined1 *)(uVar4 + 0x38) = 0;
          UNLOCK();
          plVar3 = (longlong *)param_1[0xb3];
          LOCK();
          *plVar3 = *plVar3 + -1;
          lVar5 = *plVar3;
          UNLOCK();
        }
        else {
          plVar3 = (longlong *)param_1[0xb3];
          LOCK();
          *plVar3 = *plVar3 + -1;
          lVar5 = *plVar3;
          UNLOCK();
        }
        if (lVar5 == 0) {
          FUN_18003cda0();
        }
      }
      FUN_180076270(param_1);
      return;
    }
    FUN_18013c270();
    plVar3 = (longlong *)param_1[7];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18013bc70();
    }
    if ((param_1[1] != 0) && (plVar3 = (longlong *)param_1[2], plVar3 != (longlong *)0x0)) {
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_180114260(param_1 + 2);
      }
    }
    if ((param_1[3] != 0) && (param_1[4] != 0)) {
      FUN_1800755d0(param_1 + 4);
    }
    plVar3 = (longlong *)param_1[10];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003cc40(param_1 + 10);
    }
    uVar4 = param_1[0xc];
    if (uVar4 != 0) {
      LOCK();
      *(undefined1 *)(uVar4 + 0x42) = 1;
      UNLOCK();
      LOCK();
      cVar1 = *(char *)(uVar4 + 0x20);
      *(char *)(uVar4 + 0x20) = '\x01';
      UNLOCK();
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(uVar4 + 0x10);
        *(undefined8 *)(uVar4 + 0x10) = 0;
        LOCK();
        uVar2 = *(undefined1 *)(uVar4 + 0x20);
        *(undefined1 *)(uVar4 + 0x20) = 0;
        UNLOCK();
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 8))(*(undefined8 *)(uVar4 + 0x18),uVar2);
        }
      }
      LOCK();
      cVar1 = *(char *)(uVar4 + 0x38);
      *(char *)(uVar4 + 0x38) = '\x01';
      UNLOCK();
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(uVar4 + 0x28);
        *(undefined8 *)(uVar4 + 0x28) = 0;
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 0x18))(*(undefined8 *)(uVar4 + 0x30));
        }
        LOCK();
        *(undefined1 *)(uVar4 + 0x38) = 0;
        UNLOCK();
        plVar3 = (longlong *)param_1[0xc];
        LOCK();
        *plVar3 = *plVar3 + -1;
        lVar5 = *plVar3;
        UNLOCK();
      }
      else {
        plVar3 = (longlong *)param_1[0xc];
        LOCK();
        *plVar3 = *plVar3 + -1;
        lVar5 = *plVar3;
        UNLOCK();
      }
      if (lVar5 == 0) {
        FUN_18003cda0();
      }
    }
    if ((int)param_1[0xd] != 2) {
      FUN_180077610(param_1 + 0xd);
      return;
    }
  }
  return;
}


