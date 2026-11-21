/* FUN_18017f960 @ 18017f960 */

void FUN_18017f960(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 local_58 [8];
  ulonglong local_38;
  ulonglong *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  uVar3 = *param_1;
  do {
    uVar2 = uVar3;
    if ((uVar2 & 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("assertion failed: snapshot.is_join_interested()",0x2f,
                    &PTR_s_C__Users_burne__cargo_registry_s_1802635d8);
    }
    uVar4 = 0xfffffffffffffff7;
    if ((uVar2 & 2) == 0) {
      uVar4 = 0xffffffffffffffe5;
    }
    uVar4 = uVar4 & uVar2;
    LOCK();
    uVar1 = *param_1;
    if (uVar2 == uVar1) {
      *param_1 = uVar4;
      uVar3 = uVar2;
    }
    else {
      uVar3 = uVar1;
    }
    UNLOCK();
  } while (uVar2 != uVar1);
  local_20 = param_1;
  if ((uVar2 & 2) != 0) {
    local_58[0] = 2;
    local_38 = uVar4;
    FUN_1801779a0(param_1 + 4,local_58);
    uVar4 = local_38;
  }
  if ((uVar4 & 0x10) == 0) {
    if (local_20[0xd] != 0) {
      (**(code **)(local_20[0xd] + 0x18))(local_20[0xe]);
    }
    local_20[0xd] = 0;
  }
  LOCK();
  uVar3 = *local_20;
  *local_20 = *local_20 - 0x40;
  UNLOCK();
  if (uVar3 < 0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: prev.ref_count() >= 1",0x27,
                  &PTR_s_C__Users_burne__cargo_registry_s_180263618);
  }
  if ((uVar3 & 0xffffffffffffffc0) == 0x40) {
    FUN_18017f1f0();
  }
  return;
}


