/* FUN_180181110 @ 180181110 */

void FUN_180181110(ulonglong *param_1)

{
  ulonglong uVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  
  uVar3 = *param_1;
  do {
    if ((uVar3 & 2) != 0) {
      bVar2 = false;
      break;
    }
    if ((uVar3 & 4) == 0) {
      if ((uVar3 & 1) == 0) {
        if ((longlong)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ec0("assertion failed: self.0 <= isize::MAX as usize",0x2f,
                        &PTR_s_C__Users_burne__cargo_registry_s_1802636a0);
        }
        bVar2 = true;
        uVar4 = uVar3 + 0x44;
      }
      else {
        bVar2 = false;
        uVar4 = uVar3 | 4;
      }
    }
    else {
      bVar2 = false;
      uVar4 = uVar3;
    }
    LOCK();
    uVar1 = *param_1;
    bVar5 = uVar3 == uVar1;
    if (bVar5) {
      *param_1 = uVar4;
    }
    else {
      uVar3 = uVar1;
    }
    UNLOCK();
  } while (!bVar5);
  if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x0001801811b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[2] + 8))();
    return;
  }
  return;
}


