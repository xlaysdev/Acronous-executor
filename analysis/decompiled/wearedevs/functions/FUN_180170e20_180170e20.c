/* FUN_180170e20 @ 180170e20 */

void FUN_180170e20(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong local_30;
  longlong local_28;
  
  uVar1 = param_1[3];
  if (uVar1 == 0) {
    local_28 = 0;
    uVar4 = 0;
    lVar3 = 0;
  }
  else {
    uVar4 = *param_1;
    uVar5 = 0;
    if (uVar4 <= param_1[2]) {
      uVar5 = uVar4;
    }
    lVar3 = param_1[2] - uVar5;
    local_28 = uVar1 - (uVar4 - lVar3);
    if (uVar1 < uVar4 - lVar3 || local_28 == 0) {
      uVar4 = uVar1 + lVar3;
      local_28 = 0;
    }
  }
  uVar1 = param_1[1];
  local_30 = 0;
  while( true ) {
    if (local_30 == uVar4 - lVar3) {
      lVar3 = 0;
      while( true ) {
        if (lVar3 == local_28) {
          return;
        }
        puVar2 = *(ulonglong **)(uVar1 + lVar3 * 8);
        lVar3 = lVar3 + 1;
        LOCK();
        uVar4 = *puVar2;
        *puVar2 = *puVar2 - 0x40;
        UNLOCK();
        if (uVar4 < 0x40) break;
        if ((uVar4 & 0xffffffffffffffc0) == 0x40) {
          (**(code **)(puVar2[2] + 0x10))();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("assertion failed: prev.ref_count() >= 1",0x27,
                    &PTR_s_C__Users_burne__cargo_registry_s_180263618);
    }
    puVar2 = *(ulonglong **)(uVar1 + lVar3 * 8 + local_30 * 8);
    local_30 = local_30 + 1;
    LOCK();
    uVar5 = *puVar2;
    *puVar2 = *puVar2 - 0x40;
    UNLOCK();
    if (uVar5 < 0x40) break;
    if ((uVar5 & 0xffffffffffffffc0) == 0x40) {
      (**(code **)(puVar2[2] + 0x10))();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180201ec0("assertion failed: prev.ref_count() >= 1",0x27,
                &PTR_s_C__Users_burne__cargo_registry_s_180263618);
}


