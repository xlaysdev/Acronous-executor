/* FUN_180079a50 @ 180079a50 */

void FUN_180079a50(undefined8 *param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if (*(char *)((longlong)param_1 + 0x89) == '\0') {
    plVar5 = (longlong *)param_1[0xb];
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      FUN_18003cc40(param_1 + 0xb);
    }
    lVar3 = param_1[0xd];
    if (1 < lVar3 + 1U) {
      LOCK();
      plVar5 = (longlong *)(lVar3 + 8);
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        thunk_FUN_1801d3330(lVar3,0xe8,8);
      }
    }
    lVar3 = param_1[0xe];
    LOCK();
    *(undefined1 *)(lVar3 + 0x40) = 1;
    UNLOCK();
    LOCK();
    cVar1 = *(char *)(lVar3 + 0x20);
    *(char *)(lVar3 + 0x20) = '\x01';
    UNLOCK();
    if (cVar1 == '\0') {
      lVar4 = *(longlong *)(lVar3 + 0x10);
      *(undefined8 *)(lVar3 + 0x10) = 0;
      LOCK();
      *(undefined1 *)(lVar3 + 0x20) = 0;
      UNLOCK();
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar3 + 0x18));
      }
    }
    LOCK();
    cVar1 = *(char *)(lVar3 + 0x38);
    *(char *)(lVar3 + 0x38) = '\x01';
    UNLOCK();
    if (cVar1 == '\0') {
      lVar4 = *(longlong *)(lVar3 + 0x28);
      *(undefined8 *)(lVar3 + 0x28) = 0;
      LOCK();
      uVar2 = *(undefined1 *)(lVar3 + 0x38);
      *(undefined1 *)(lVar3 + 0x38) = 0;
      UNLOCK();
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 8))(*(undefined8 *)(lVar3 + 0x30),uVar2);
      }
    }
    plVar5 = (longlong *)param_1[0xe];
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      FUN_18003cda0();
      return;
    }
  }
  else if (*(char *)((longlong)param_1 + 0x89) == '\x03') {
    lVar3 = param_1[10];
    LOCK();
    *(undefined1 *)(lVar3 + 0x40) = 1;
    UNLOCK();
    LOCK();
    cVar1 = *(char *)(lVar3 + 0x20);
    *(char *)(lVar3 + 0x20) = '\x01';
    UNLOCK();
    if (cVar1 == '\0') {
      lVar4 = *(longlong *)(lVar3 + 0x10);
      *(undefined8 *)(lVar3 + 0x10) = 0;
      LOCK();
      *(undefined1 *)(lVar3 + 0x20) = 0;
      UNLOCK();
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar3 + 0x18));
      }
    }
    LOCK();
    cVar1 = *(char *)(lVar3 + 0x38);
    *(char *)(lVar3 + 0x38) = '\x01';
    UNLOCK();
    if (cVar1 == '\0') {
      lVar4 = *(longlong *)(lVar3 + 0x28);
      *(undefined8 *)(lVar3 + 0x28) = 0;
      LOCK();
      uVar2 = *(undefined1 *)(lVar3 + 0x38);
      *(undefined1 *)(lVar3 + 0x38) = 0;
      UNLOCK();
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 8))(*(undefined8 *)(lVar3 + 0x30),uVar2);
      }
    }
    plVar5 = (longlong *)param_1[10];
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      FUN_18003cda0();
    }
    uVar6 = param_1[6];
    puVar7 = (undefined8 *)param_1[7];
    if ((code *)*puVar7 != (code *)0x0) {
      (*(code *)*puVar7)(uVar6);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_1801d3330(uVar6,puVar7[1],puVar7[2]);
    }
    plVar5 = (longlong *)*param_1;
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      FUN_18003cc40(param_1);
    }
    lVar3 = param_1[2];
    if (1 < lVar3 + 1U) {
      LOCK();
      plVar5 = (longlong *)(lVar3 + 8);
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        thunk_FUN_1801d3330(lVar3,0xe8,8);
      }
    }
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  return;
}


