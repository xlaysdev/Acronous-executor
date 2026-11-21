/* FUN_180162080 @ 180162080 */

void FUN_180162080(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar3 = param_1[2];
  do {
    LOCK();
    uVar1 = param_1[2];
    bVar4 = uVar3 == uVar1;
    if (bVar4) {
      param_1[2] = uVar3 | 2;
    }
    else {
      uVar3 = uVar1;
    }
    UNLOCK();
  } while (!bVar4);
  if (uVar3 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    LOCK();
    param_1[2] = param_1[2] & 0xfffffffffffffffd;
    UNLOCK();
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001801620c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 8))(param_1[1]);
      return;
    }
  }
  return;
}


