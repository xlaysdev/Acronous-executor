/* FUN_180177630 @ 180177630 */

void FUN_180177630(ulonglong *param_1)

{
  ulonglong uVar1;
  
  LOCK();
  uVar1 = *param_1;
  *param_1 = *param_1 - 0x40;
  UNLOCK();
  if (uVar1 < 0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: prev.ref_count() >= 1",0x27,
                  &PTR_s_C__Users_burne__cargo_registry_s_180263618);
  }
  if ((uVar1 & 0xffffffffffffffc0) == 0x40) {
    FUN_18017f1f0();
    return;
  }
  return;
}


