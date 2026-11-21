/* FUN_180178080 @ 180178080 */

void FUN_180178080(undefined8 *param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  
  puVar2 = (ulonglong *)*param_1;
  uVar4 = *puVar2;
  do {
    if ((uVar4 & 0x22) != 0) {
      bVar3 = false;
      break;
    }
    if ((uVar4 & 1) == 0) {
      if ((uVar4 & 4) != 0) {
        uVar5 = uVar4 | 0x20;
        goto LAB_1801780e6;
      }
      if ((longlong)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: self.0 <= isize::MAX as usize",0x2f,
                      &PTR_s_C__Users_burne__cargo_registry_s_1802636a0);
      }
      uVar5 = uVar4 + 100;
      bVar3 = true;
    }
    else {
      uVar5 = uVar4 | 0x24;
LAB_1801780e6:
      bVar3 = false;
    }
    LOCK();
    uVar1 = *puVar2;
    bVar6 = uVar4 == uVar1;
    if (bVar6) {
      *puVar2 = uVar5;
    }
    else {
      uVar4 = uVar1;
    }
    UNLOCK();
  } while (!bVar6);
  if (bVar3) {
                    /* WARNING: Could not recover jumptable at 0x000180178118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(puVar2[2] + 8))();
    return;
  }
  return;
}


