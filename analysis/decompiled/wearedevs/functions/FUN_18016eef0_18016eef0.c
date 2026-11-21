/* FUN_18016eef0 @ 18016eef0 */

void FUN_18016eef0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  
  lVar3 = 0;
  while( true ) {
    if (lVar3 == param_2) {
      return;
    }
    puVar2 = *(ulonglong **)(param_1 + lVar3 * 8);
    lVar3 = lVar3 + 1;
    LOCK();
    uVar1 = *puVar2;
    *puVar2 = *puVar2 - 0x40;
    UNLOCK();
    if (uVar1 < 0x40) break;
    if ((uVar1 & 0xffffffffffffffc0) == 0x40) {
      (**(code **)(puVar2[2] + 0x10))();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180201ec0("assertion failed: prev.ref_count() >= 1",0x27,
                &PTR_s_C__Users_burne__cargo_registry_s_180263618);
}


