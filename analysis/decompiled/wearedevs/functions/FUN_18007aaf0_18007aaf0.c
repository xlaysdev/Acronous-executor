/* FUN_18007aaf0 @ 18007aaf0 */

void FUN_18007aaf0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if ((int)*param_1 == 2) {
    lVar1 = param_1[1];
    puVar2 = (undefined8 *)param_1[2];
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(lVar1);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_1801d3330(lVar1,puVar2[1],puVar2[2]);
      return;
    }
  }
  else {
    plVar3 = (longlong *)param_1[4];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_1800f5960(param_1 + 4);
    }
    plVar3 = (longlong *)param_1[5];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003cc40(param_1 + 5);
    }
    if (*param_1 != 0) {
      FUN_180101100(param_1 + 1);
    }
    FUN_180101150(param_1 + 2);
    plVar3 = (longlong *)param_1[0xe];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003d670(param_1 + 0xe);
    }
    if ((char)param_1[0xd] != '\x02') {
      (**(code **)(param_1[9] + 0x20))(param_1[0xc],param_1[10],param_1[0xb]);
    }
    plVar3 = (longlong *)param_1[0xf];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_18003dca0(param_1 + 0xf);
        return;
      }
    }
  }
  return;
}


