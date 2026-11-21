/* FUN_18016ea20 @ 18016ea20 */

void FUN_18016ea20(undefined8 *param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)*param_1;
  LOCK();
  uVar1 = *puVar2;
  *puVar2 = *puVar2 - 0x80;
  UNLOCK();
  if (uVar1 < 0x80) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: prev.ref_count() >= 2",0x27,
                  &PTR_s_C__Users_burne__cargo_registry_s_180263330);
  }
  if ((uVar1 & 0xffffffffffffffc0) == 0x80) {
                    /* WARNING: Could not recover jumptable at 0x00018016ea4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(puVar2[2] + 0x10))();
    return;
  }
  return;
}


