/* FUN_180177e60 @ 180177e60 */

ulonglong FUN_180177e60(ulonglong *param_1)

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
      *param_1 = uVar2 & 0xffffffffffffffef;
    }
    else {
      uVar2 = uVar1;
    }
    UNLOCK();
  } while (!bVar3);
  if ((uVar2 & 2) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: prev.is_complete()",0x24,
                  &PTR_s_C__Users_burne__cargo_registry_s_180263500);
  }
  if ((uVar2 & 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: prev.is_join_waker_set()",0x2a,
                  &PTR_s_C__Users_burne__cargo_registry_s_180263548);
  }
  return uVar2 & 0xffffffffffffffef;
}


