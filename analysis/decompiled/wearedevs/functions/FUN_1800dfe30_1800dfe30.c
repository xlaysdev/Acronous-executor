/* FUN_1800dfe30 @ 1800dfe30 */

void FUN_1800dfe30(ulonglong *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  uVar1 = *param_1;
  lVar4 = 1;
  if (5 < uVar1) {
    lVar4 = uVar1 - 6;
  }
  if (lVar4 == 1) {
    if ((int)uVar1 != 5) {
      FUN_1800df420();
      return;
    }
    if ((char)param_1[0xf] == '\x02') {
      FUN_18009acf0(param_1 + 1);
      return;
    }
    if ((char)param_1[0xf] != '\x03') {
      FUN_1800e1260();
      return;
    }
  }
  else if (lVar4 == 0) {
    plVar2 = (longlong *)param_1[0x45];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_18003cf20(param_1 + 0x45);
      }
    }
    if (1 < (byte)param_1[0x32]) {
      plVar2 = (longlong *)param_1[0x33];
      (**(code **)(*plVar2 + 0x20))(plVar2[3],plVar2[1],plVar2[2]);
      thunk_FUN_1801d3330(plVar2,0x20,8);
    }
    (**(code **)(param_1[0x34] + 0x20))(param_1[0x37],param_1[0x35],param_1[0x36]);
    if ((int)param_1[0x20] == 2) {
      uVar1 = param_1[0x21];
      puVar3 = (undefined8 *)param_1[0x22];
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)(uVar1);
      }
      if (puVar3[1] != 0) {
        thunk_FUN_1801d3330(uVar1,puVar3[1],puVar3[2]);
      }
    }
    else {
      FUN_180043680(param_1 + 0x20);
    }
    FUN_18000adf0(param_1 + 0x38);
    plVar2 = (longlong *)param_1[0x14];
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cc40(param_1 + 0x14);
    }
    plVar2 = (longlong *)param_1[0x16];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_18003cc40(param_1 + 0x16);
      }
    }
    plVar2 = (longlong *)param_1[0x43];
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cc40(param_1 + 0x43);
      return;
    }
  }
  return;
}


