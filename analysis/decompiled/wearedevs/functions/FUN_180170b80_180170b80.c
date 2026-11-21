/* FUN_180170b80 @ 180170b80 */

void FUN_180170b80(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong local_38;
  longlong local_30;
  
  uVar1 = param_1[3];
  if (uVar1 == 0) {
    local_30 = 0;
    uVar3 = 0;
    lVar6 = 0;
  }
  else {
    uVar3 = *param_1;
    uVar5 = 0;
    if (uVar3 <= param_1[2]) {
      uVar5 = uVar3;
    }
    lVar6 = param_1[2] - uVar5;
    local_30 = uVar1 - (uVar3 - lVar6);
    if (uVar1 < uVar3 - lVar6 || local_30 == 0) {
      uVar3 = uVar1 + lVar6;
      local_30 = 0;
    }
  }
  uVar1 = param_1[1];
  local_38 = 0;
  while( true ) {
    if (local_38 == uVar3 - lVar6) {
      lVar6 = 0;
      while( true ) {
        if (lVar6 == local_30) {
          return;
        }
        lVar4 = lVar6 * 0x10;
        lVar6 = lVar6 + 1;
        puVar2 = *(ulonglong **)(uVar1 + lVar4);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 - 0x80;
        UNLOCK();
        if (uVar3 < 0x80) break;
        if ((uVar3 & 0xffffffffffffffc0) == 0x80) {
          (**(code **)(puVar2[2] + 0x10))();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("assertion failed: prev.ref_count() >= 2",0x27,
                    &PTR_s_C__Users_burne__cargo_registry_s_180263330);
    }
    lVar4 = local_38 * 0x10;
    local_38 = local_38 + 1;
    puVar2 = *(ulonglong **)(lVar6 * 0x10 + uVar1 + lVar4);
    LOCK();
    uVar5 = *puVar2;
    *puVar2 = *puVar2 - 0x80;
    UNLOCK();
    if (uVar5 < 0x80) break;
    if ((uVar5 & 0xffffffffffffffc0) == 0x80) {
      (**(code **)(puVar2[2] + 0x10))();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180201ec0("assertion failed: prev.ref_count() >= 2",0x27,
                &PTR_s_C__Users_burne__cargo_registry_s_180263330);
}


