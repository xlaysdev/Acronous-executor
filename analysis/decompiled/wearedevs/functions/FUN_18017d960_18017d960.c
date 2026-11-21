/* FUN_18017d960 @ 18017d960 */

void FUN_18017d960(undefined8 *param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)*param_1;
  if (puVar2 != (ulonglong *)0x0) {
    LOCK();
    uVar1 = *puVar2;
    *puVar2 = *puVar2 - 0x40;
    UNLOCK();
    if (uVar1 < 0x40) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("assertion failed: prev.ref_count() >= 1",0x27,
                    &PTR_s_C__Users_burne__cargo_registry_s_180263618);
    }
    if ((uVar1 & 0xffffffffffffffc0) == 0x40) {
                    /* WARNING: Could not recover jumptable at 0x00018017d990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(puVar2[2] + 0x10))();
      return;
    }
  }
  return;
}


