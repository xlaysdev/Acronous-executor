/* FUN_180177bb0 @ 180177bb0 */

ulonglong FUN_180177bb0(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined7 uVar3;
  ulonglong uVar4;
  bool bVar5;
  
  uVar2 = *param_1;
  do {
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("assertion failed: curr.is_running()",0x23,
                    &PTR_s_C__Users_burne__cargo_registry_s_1802633d0);
    }
    uVar3 = (undefined7)(param_2 >> 8);
    if ((uVar2 & 0x20) != 0) {
      param_2 = CONCAT71(uVar3,3);
      break;
    }
    if ((uVar2 & 4) == 0) {
      if (uVar2 < 0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: self.ref_count() > 0",0x26,
                      &PTR_s_C__Users_burne__cargo_registry_s_180263658);
      }
      uVar4 = (uVar2 & 0xffffffffffffffde) - 0x40;
      param_2 = CONCAT71(uVar3,(uVar4 < 0x40) * '\x02');
    }
    else {
      if ((longlong)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: self.0 <= isize::MAX as usize",0x2f,
                      &PTR_s_C__Users_burne__cargo_registry_s_1802636a0);
      }
      uVar4 = (uVar2 & 0xffffffffffffffde) + 0x40;
      param_2 = CONCAT71(uVar3,1);
    }
    LOCK();
    uVar1 = *param_1;
    bVar5 = uVar2 == uVar1;
    if (bVar5) {
      *param_1 = uVar4;
    }
    else {
      uVar2 = uVar1;
    }
    UNLOCK();
  } while (!bVar5);
  return param_2 & 0xffffffff;
}


