/* Unwind@1801faf70 @ 1801faf70 */

void Unwind_1801faf70(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  
  puVar2 = *(ulonglong **)(param_2 + 0x20);
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
    (**(code **)(puVar2[2] + 0x10))();
  }
  return;
}


