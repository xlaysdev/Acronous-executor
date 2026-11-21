/* FUN_180177d50 @ 180177d50 */

ulonglong FUN_180177d50(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  
  uVar2 = *param_1;
  do {
    LOCK();
    uVar1 = *param_1;
    bVar3 = uVar2 == uVar1;
    if (bVar3) {
      *param_1 = uVar2 ^ 3;
    }
    else {
      uVar2 = uVar1;
    }
    UNLOCK();
  } while (!bVar3);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: prev.is_running()",0x23,
                  &PTR_s_C__Users_burne__cargo_registry_s_180263450);
  }
  if ((uVar2 & 2) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: !prev.is_complete()",0x25,
                  &PTR_s_C__Users_burne__cargo_registry_s_180263490);
  }
  return uVar2 ^ 3;
}


