/* FUN_1800af330 @ 1800af330 */

void FUN_1800af330(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_1[0x23] != 0) {
    (**(code **)(param_1[0x23] + 0x20))(param_1[0x26],param_1[0x24],param_1[0x25]);
  }
  if (param_1[5] != 0) {
    (**(code **)(param_1[5] + 0x20))(param_1[8],param_1[6],param_1[7]);
  }
  if (param_1[0x1c] != 0) {
    FUN_18012e1e0();
    plVar1 = (longlong *)param_1[0x1c];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18013bb80();
    }
  }
  FUN_180065b90(param_1 + 0x21);
  lVar2 = *param_1;
  if (lVar2 != 2) {
    FUN_1801617b0(param_1,param_1[3]);
    if (lVar2 != 0) {
      plVar1 = (longlong *)param_1[1];
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_18003cc40(param_1 + 1);
        return;
      }
    }
  }
  return;
}


