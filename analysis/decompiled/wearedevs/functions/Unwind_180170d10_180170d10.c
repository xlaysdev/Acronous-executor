/* Unwind@180170d10 @ 180170d10 */

void Unwind_180170d10(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong *puVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_2 + 0x30);
  lVar5 = *(longlong *)(param_2 + 0x40);
  lVar3 = *(longlong *)(param_2 + 0x38);
  while( true ) {
    if (lVar5 == lVar2) {
      return;
    }
    puVar4 = *(ulonglong **)(lVar3 + lVar5 * 0x10);
    LOCK();
    uVar1 = *puVar4;
    *puVar4 = *puVar4 - 0x80;
    UNLOCK();
    if (uVar1 < 0x80) break;
    if ((uVar1 & 0xffffffffffffffc0) == 0x80) {
      (**(code **)(puVar4[2] + 0x10))();
    }
    lVar5 = lVar5 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180201ec0("assertion failed: prev.ref_count() >= 2",0x27,
                &PTR_s_C__Users_burne__cargo_registry_s_180263330);
}


