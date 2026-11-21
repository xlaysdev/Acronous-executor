/* FUN_1801e27a0 @ 1801e27a0 */

void FUN_1801e27a0(longlong *param_1)

{
  longlong *plVar1;
  char *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  lVar4 = param_1[1];
  lVar5 = param_1[2];
  if ((lVar4 != 0) && (lVar5 != 0)) {
    puVar6 = (undefined8 *)param_1[3];
    if ((code *)*puVar6 != (code *)0x0) {
      (*(code *)*puVar6)(lVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_1801d3330(lVar5,puVar6[1],puVar6[2]);
    }
  }
  param_1[1] = 0;
  lVar7 = *param_1;
  if (lVar7 != 0) {
    if (((byte)lVar4 & lVar5 != 0) != 0) {
      *(undefined1 *)(lVar7 + 0x20) = 1;
    }
    LOCK();
    plVar1 = (longlong *)(lVar7 + 0x18);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(longlong *)(lVar7 + 0x10);
      LOCK();
      pcVar2 = (char *)(lVar4 + 0x28);
      cVar3 = *pcVar2;
      *pcVar2 = '\x01';
      UNLOCK();
      if (cVar3 == -1) {
        WakeByAddressSingle(lVar4 + 0x28);
      }
    }
    plVar1 = (longlong *)*param_1;
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_1801e3800(param_1);
      }
    }
  }
  if ((param_1[1] != 0) && (lVar4 = param_1[2], lVar4 != 0)) {
    puVar6 = (undefined8 *)param_1[3];
    if ((code *)*puVar6 != (code *)0x0) {
      (*(code *)*puVar6)(lVar4);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_1801d3330(lVar4,puVar6[1],puVar6[2]);
    }
  }
  return;
}


