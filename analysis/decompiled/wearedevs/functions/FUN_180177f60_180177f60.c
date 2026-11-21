/* FUN_180177f60 @ 180177f60 */

void FUN_180177f60(undefined8 *param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  
  puVar2 = (ulonglong *)*param_1;
  uVar3 = *puVar2;
  do {
    if ((uVar3 & 1) == 0) {
      if ((uVar3 & 6) == 0) {
        if ((longlong)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ec0("assertion failed: self.0 <= isize::MAX as usize",0x2f,
                        &PTR_s_C__Users_burne__cargo_registry_s_1802636a0);
        }
        uVar5 = uVar3 + 0x44;
        cVar4 = '\x01';
      }
      else {
        if (uVar3 < 0x40) goto LAB_180178015;
        uVar5 = uVar3 - 0x40;
        cVar4 = (uVar5 < 0x40) * '\x02';
      }
    }
    else {
      if (uVar3 < 0x40) {
LAB_180178015:
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: self.ref_count() > 0",0x26,
                      &PTR_s_C__Users_burne__cargo_registry_s_180263658);
      }
      uVar5 = (uVar3 | 4) - 0x40;
      if (uVar5 < 0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: snapshot.ref_count() > 0",0x2a,
                      &PTR_s_C__Users_burne__cargo_registry_s_180263590);
      }
      cVar4 = '\0';
    }
    LOCK();
    uVar1 = *puVar2;
    bVar6 = uVar3 == uVar1;
    if (bVar6) {
      *puVar2 = uVar5;
    }
    else {
      uVar3 = uVar1;
    }
    UNLOCK();
    if (bVar6) {
      if (cVar4 == '\0') {
        return;
      }
      if (cVar4 == '\x01') {
        (**(code **)(puVar2[2] + 8))(puVar2);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 - 0x40;
        UNLOCK();
        if (uVar3 < 0x40) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ec0("assertion failed: prev.ref_count() >= 1",0x27,
                        &PTR_s_C__Users_burne__cargo_registry_s_180263618);
        }
        if ((uVar3 & 0xffffffffffffffc0) != 0x40) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00018017800a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(puVar2[2] + 0x10))(puVar2);
      return;
    }
  } while( true );
}


