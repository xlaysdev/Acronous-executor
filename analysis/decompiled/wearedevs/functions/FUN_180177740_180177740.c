/* FUN_180177740 @ 180177740 */

void FUN_180177740(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = *param_1;
  do {
    uVar2 = uVar3;
    LOCK();
    uVar1 = *param_1;
    if (uVar2 == uVar1) {
      *param_1 = (uVar2 & 3) == 0 | uVar2 | 0x20;
      uVar3 = uVar2;
    }
    else {
      uVar3 = uVar1;
    }
    UNLOCK();
  } while (uVar2 != uVar1);
  if ((uVar2 & 3) == 0) {
    FUN_18017f350(param_1 + 4);
    FUN_180180030(param_1);
    return;
  }
  LOCK();
  uVar3 = *param_1;
  *param_1 = *param_1 - 0x40;
  UNLOCK();
  if (uVar3 < 0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: prev.ref_count() >= 1",0x27,
                  &PTR_s_C__Users_burne__cargo_registry_s_180263618);
  }
  if ((uVar3 & 0xffffffffffffffc0) == 0x40) {
    FUN_18017f1f0();
    return;
  }
  return;
}


