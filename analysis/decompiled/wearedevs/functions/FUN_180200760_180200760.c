/* FUN_180200760 @ 180200760 */

ulonglong FUN_180200760(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  bool bVar3;
  
  if ((param_2 & 0x3fffffff) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: is_unlocked(state)",0x24,&DAT_18028fc08);
  }
  uVar2 = (ulonglong)(uint)-(int)param_2;
  if (SBORROW4(0,(int)param_2)) {
    uVar2 = 0x80000000;
    LOCK();
    uVar1 = *param_1;
    if (uVar1 == 0x80000000) {
      *param_1 = 0;
    }
    else {
      uVar2 = (ulonglong)uVar1;
    }
    UNLOCK();
    if (uVar1 == 0x80000000) {
      LOCK();
      param_1[1] = param_1[1] + 1;
      UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x000180200798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = WakeByAddressSingle(param_1 + 1);
      return uVar2;
    }
    param_2 = uVar2;
  }
  if ((int)param_2 == -0x40000000) {
    uVar2 = 0xc0000000;
    LOCK();
    uVar1 = *param_1;
    if (uVar1 == 0xc0000000) {
      *param_1 = 0x40000000;
    }
    else {
      uVar2 = (ulonglong)uVar1;
    }
    UNLOCK();
    if (uVar1 != 0xc0000000) {
      return uVar2;
    }
    LOCK();
    param_1[1] = param_1[1] + 1;
    UNLOCK();
    WakeByAddressSingle(param_1 + 1);
    uVar2 = 0x40000000;
    LOCK();
    bVar3 = *param_1 == 0x40000000;
    if (bVar3) {
      *param_1 = 0;
    }
    else {
      uVar2 = (ulonglong)*param_1;
    }
    UNLOCK();
  }
  else {
    if ((int)param_2 != 0x40000000) {
      return uVar2;
    }
    uVar2 = 0x40000000;
    LOCK();
    bVar3 = *param_1 == 0x40000000;
    if (bVar3) {
      *param_1 = 0;
    }
    else {
      uVar2 = (ulonglong)*param_1;
    }
    UNLOCK();
  }
  if (bVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001802007fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = WakeByAddressAll();
    return uVar2;
  }
  return uVar2;
}


