/* FUN_180177cc0 @ 180177cc0 */

ulonglong FUN_180177cc0(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  
  uVar2 = *param_1;
  do {
    while( true ) {
      if ((uVar2 & 4) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: next.is_notified()",0x24,
                      &PTR_s_C__Users_burne__cargo_registry_s_180263410);
      }
      if ((uVar2 & 3) == 0) break;
      if (uVar2 < 0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: self.ref_count() > 0",0x26,
                      &PTR_s_C__Users_burne__cargo_registry_s_180263658);
      }
      param_2 = CONCAT71((int7)(param_2 >> 8),uVar2 - 0x40 < 0x40) | 2;
      LOCK();
      uVar1 = *param_1;
      bVar3 = uVar2 == uVar1;
      if (bVar3) {
        *param_1 = uVar2 - 0x40;
      }
      else {
        uVar2 = uVar1;
      }
      UNLOCK();
      if (bVar3) goto LAB_180177d0c;
    }
    param_2 = CONCAT71((int7)((uVar2 & 0xffffffff) >> 8),(byte)(uVar2 & 0xffffffff) >> 5) &
              0xffffffffffffff01;
    LOCK();
    uVar1 = *param_1;
    bVar3 = uVar2 == uVar1;
    if (bVar3) {
      *param_1 = (uVar2 & 0xfffffffffffffff8) + 1;
    }
    else {
      uVar2 = uVar1;
    }
    UNLOCK();
  } while (!bVar3);
LAB_180177d0c:
  return param_2 & 0xffffffff;
}


