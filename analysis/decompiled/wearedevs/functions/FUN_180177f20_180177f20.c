/* FUN_180177f20 @ 180177f20 */

undefined8 FUN_180177f20(ulonglong *param_1)

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
  uVar1 = uVar1 & 0xffffffffffffffc0;
  return CONCAT71((int7)(uVar1 >> 8),uVar1 == 0x40);
}


