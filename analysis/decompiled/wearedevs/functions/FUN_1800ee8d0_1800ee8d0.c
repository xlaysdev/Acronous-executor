/* FUN_1800ee8d0 @ 1800ee8d0 */

void FUN_1800ee8d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if ((int)*param_1 == 2) {
    FUN_1800ede40(param_1 + 1);
    return;
  }
  plVar1 = (longlong *)param_1[0x1c];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003d7f0(param_1 + 0x1c);
  }
  DeleteSecurityContext(param_1 + 0x1d);
  if (*param_1 != 0) {
    FUN_180101150(param_1 + 1);
  }
  lVar2 = param_1[0x13];
  if ((!SBORROW8(0,lVar2)) && (lVar2 != 0)) {
    thunk_FUN_1801d3330(param_1[0x14],lVar2 * 2,2);
  }
  plVar1 = (longlong *)param_1[0x1f];
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_1 + 0x1f);
    }
  }
  FUN_1800ede40(param_1 + 2);
  if (param_1[7] != 0) {
    thunk_FUN_1801d3330(param_1[8],param_1[7],1);
  }
  if (param_1[0xb] != 0) {
    thunk_FUN_1801d3330(param_1[0xc],param_1[0xb],1);
  }
  if (param_1[0xf] != 0) {
    thunk_FUN_1801d3330(param_1[0x10],param_1[0xf],1);
  }
  lVar2 = param_1[0x16];
  if (!SBORROW8(0,lVar2)) {
    lVar3 = param_1[0x18];
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(param_1[0x17] + 8);
      do {
        if (puVar4[-1] != 0) {
          thunk_FUN_1801d3330(*puVar4,puVar4[-1],1);
        }
        puVar4 = puVar4 + 3;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      lVar2 = param_1[0x16];
    }
    if (lVar2 != 0) {
      thunk_FUN_1801d3330(param_1[0x17],lVar2 * 0x18,8);
      return;
    }
  }
  return;
}


