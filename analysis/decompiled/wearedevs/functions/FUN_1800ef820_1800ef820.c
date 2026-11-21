/* FUN_1800ef820 @ 1800ef820 */

void FUN_1800ef820(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar2 = param_1[2];
  if ((!SBORROW8(0,lVar2)) && (lVar2 != 0)) {
    thunk_FUN_1801d3330(param_1[3],lVar2 * 2,2);
  }
  plVar1 = (longlong *)param_1[8];
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_1 + 8);
    }
  }
  if (*param_1 != 0) {
    FUN_180101150(param_1 + 1);
  }
  lVar2 = param_1[5];
  if (!SBORROW8(0,lVar2)) {
    lVar3 = param_1[7];
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(param_1[6] + 8);
      do {
        if (puVar4[-1] != 0) {
          thunk_FUN_1801d3330(*puVar4,puVar4[-1],1);
        }
        puVar4 = puVar4 + 3;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      lVar2 = param_1[5];
    }
    if (lVar2 != 0) {
      thunk_FUN_1801d3330(param_1[6],lVar2 * 0x18,8);
      return;
    }
  }
  return;
}


