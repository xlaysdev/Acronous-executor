/* FUN_18016edf0 @ 18016edf0 */

void FUN_18016edf0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 0;
  while( true ) {
    if (lVar4 == param_2) {
      return;
    }
    lVar3 = lVar4 * 0x10;
    lVar4 = lVar4 + 1;
    puVar2 = *(ulonglong **)(param_1 + lVar3);
    LOCK();
    uVar1 = *puVar2;
    *puVar2 = *puVar2 - 0x80;
    UNLOCK();
    if (uVar1 < 0x80) break;
    if ((uVar1 & 0xffffffffffffffc0) == 0x80) {
      (**(code **)(puVar2[2] + 0x10))();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180201ec0("assertion failed: prev.ref_count() >= 2",0x27,
                &PTR_s_C__Users_burne__cargo_registry_s_180263330);
}


