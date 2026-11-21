/* FUN_1801e2c50 @ 1801e2c50 */

ulonglong FUN_1801e2c50(uint *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  bool bVar3;
  
  LOCK();
  uVar2 = *param_1;
  *param_1 = *param_1 - 1;
  UNLOCK();
  uVar2 = uVar2 - 1;
  if (!SBORROW4(0,uVar2 & 0xbfffffff)) {
    return (ulonglong)-(uVar2 & 0xbfffffff);
  }
  if ((uVar2 & 0x3fffffff) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: is_unlocked(state)",0x24,&DAT_18028fc08);
  }
  uVar1 = (ulonglong)-uVar2;
  if (SBORROW4(0,uVar2)) {
    uVar1 = 0x80000000;
    LOCK();
    uVar2 = *param_1;
    if (uVar2 == 0x80000000) {
      *param_1 = 0;
    }
    else {
      uVar1 = (ulonglong)uVar2;
    }
    UNLOCK();
    if (uVar2 == 0x80000000) {
      LOCK();
      param_1[1] = param_1[1] + 1;
      UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x000180200798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = WakeByAddressSingle(param_1 + 1);
      return uVar1;
    }
    uVar2 = (uint)uVar1;
  }
  if (uVar2 == 0xc0000000) {
    uVar1 = 0xc0000000;
    LOCK();
    uVar2 = *param_1;
    if (uVar2 == 0xc0000000) {
      *param_1 = 0x40000000;
    }
    else {
      uVar1 = (ulonglong)uVar2;
    }
    UNLOCK();
    if (uVar2 != 0xc0000000) {
      return uVar1;
    }
    LOCK();
    param_1[1] = param_1[1] + 1;
    UNLOCK();
    WakeByAddressSingle(param_1 + 1);
    uVar1 = 0x40000000;
    LOCK();
    bVar3 = *param_1 == 0x40000000;
    if (bVar3) {
      *param_1 = 0;
    }
    else {
      uVar1 = (ulonglong)*param_1;
    }
    UNLOCK();
  }
  else {
    if (uVar2 != 0x40000000) {
      return uVar1;
    }
    uVar1 = 0x40000000;
    LOCK();
    bVar3 = *param_1 == 0x40000000;
    if (bVar3) {
      *param_1 = 0;
    }
    else {
      uVar1 = (ulonglong)*param_1;
    }
    UNLOCK();
  }
  if (bVar3) {
                    /* WARNING: Could not recover jumptable at 0x0001802007fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = WakeByAddressAll();
    return uVar1;
  }
  return uVar1;
}


