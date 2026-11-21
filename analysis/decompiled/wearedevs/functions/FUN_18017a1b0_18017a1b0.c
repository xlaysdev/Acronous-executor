/* FUN_18017a1b0 @ 18017a1b0 */

/* WARNING: Removing unreachable block (ram,0x00018017a2b7) */

longlong FUN_18017a1b0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = 0;
  LOCK();
  lVar4 = param_1[2];
  if (lVar4 == 0) {
    param_1[2] = 1;
  }
  else {
    lVar5 = lVar4;
  }
  UNLOCK();
  if (lVar5 == 2) {
    lVar5 = (**(code **)(*param_2 + 0x10))(param_2[1]);
  }
  else if (lVar5 == 0) {
    lVar4 = (**(code **)*param_2)(param_2[1]);
    lVar1 = *param_1;
    lVar2 = param_1[1];
    *param_1 = lVar4;
    param_1[1] = (longlong)param_2;
    lVar5 = 1;
    LOCK();
    lVar4 = param_1[2];
    if (lVar4 == 1) {
      param_1[2] = 0;
    }
    else {
      lVar5 = lVar4;
    }
    UNLOCK();
    if (lVar4 == 1) {
      if (lVar1 != 0) {
        lVar5 = (**(code **)(lVar1 + 0x18))(lVar2);
      }
    }
    else {
      lVar4 = *param_1;
      lVar3 = param_1[1];
      *param_1 = 0;
      LOCK();
      param_1[2] = 0;
      UNLOCK();
      if (lVar1 != 0) {
        (**(code **)(lVar1 + 8))(lVar2);
      }
      lVar5 = 0;
      if (lVar4 != 0) {
        lVar5 = (**(code **)(lVar4 + 8))(lVar3);
      }
    }
  }
  return lVar5;
}


