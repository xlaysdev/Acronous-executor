/* Unwind@180170f90 @ 180170f90 */

void Unwind_180170f90(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_2 + 0x30);
  lVar4 = *(longlong *)(param_2 + 0x38);
  while( true ) {
    if (lVar4 == lVar2) {
      return;
    }
    puVar3 = *(ulonglong **)(*(longlong *)(param_2 + 0x28) + lVar4 * 8);
    LOCK();
    uVar1 = *puVar3;
    *puVar3 = *puVar3 - 0x40;
    UNLOCK();
    if (uVar1 < 0x40) break;
    if ((uVar1 & 0xffffffffffffffc0) == 0x40) {
      (**(code **)(puVar3[2] + 0x10))();
    }
    lVar4 = lVar4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180201ec0("assertion failed: prev.ref_count() >= 1",0x27,
                &PTR_s_C__Users_burne__cargo_registry_s_180263618);
}


