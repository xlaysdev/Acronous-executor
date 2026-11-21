/* FUN_180180030 @ 180180030 */

void FUN_180180030(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  bool bVar4;
  undefined4 local_88 [8];
  ulonglong *local_68;
  code *local_60;
  ulonglong *local_58;
  code *local_50;
  ulonglong local_48 [4];
  ulonglong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  uVar2 = *param_1;
  do {
    LOCK();
    uVar1 = *param_1;
    bVar4 = uVar2 == uVar1;
    if (bVar4) {
      *param_1 = uVar2 ^ 3;
    }
    else {
      uVar2 = uVar1;
    }
    UNLOCK();
  } while (!bVar4);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: prev.is_running()",0x23,
                  &PTR_s_C__Users_burne__cargo_registry_s_180263450);
  }
  if ((uVar2 & 2) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: !prev.is_complete()",0x25,
                  &PTR_s_C__Users_burne__cargo_registry_s_180263490);
  }
  if ((uVar2 & 8) == 0) {
    local_88[0] = 2;
    local_28 = param_1;
    FUN_1801779a0(param_1 + 4,local_88);
    puVar3 = local_28;
  }
  else {
    puVar3 = param_1;
    if ((uVar2 & 0x10) != 0) {
      if (param_1[0xd] == 0) {
        local_28 = param_1;
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0("waker missing",0x1b,&DAT_1802631e0);
      }
      local_28 = param_1;
      (**(code **)(param_1[0xd] + 0x10))(param_1[0xe]);
      uVar2 = *local_28;
      do {
        LOCK();
        uVar1 = *local_28;
        bVar4 = uVar2 == uVar1;
        if (bVar4) {
          *local_28 = uVar2 & 0xffffffffffffffef;
        }
        else {
          uVar2 = uVar1;
        }
        UNLOCK();
      } while (!bVar4);
      if ((uVar2 & 2) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: prev.is_complete()",0x24,
                      &PTR_s_C__Users_burne__cargo_registry_s_180263500);
      }
      if ((uVar2 & 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: prev.is_join_waker_set()",0x2a,
                      &PTR_s_C__Users_burne__cargo_registry_s_180263548);
      }
      puVar3 = local_28;
      if ((uVar2 & 8) == 0) {
        if (local_28[0xd] != 0) {
          (**(code **)(local_28[0xd] + 0x18))(local_28[0xe]);
        }
        local_28[0xd] = 0;
        puVar3 = local_28;
      }
    }
  }
  local_48[1] = 1;
  LOCK();
  local_48[0] = *puVar3;
  *puVar3 = *puVar3 - 0x40;
  UNLOCK();
  local_48[0] = local_48[0] >> 6;
  if (local_48[0] == 0) {
    local_68 = local_48;
    local_60 = FUN_1801ee720;
    local_58 = local_48 + 1;
    local_50 = FUN_1801ee720;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_1802634a8,&local_68,&PTR_s_C__Users_burne__cargo_registry_s_1802634c0);
  }
  if (local_48[0] == 1) {
    FUN_18017f1f0(puVar3);
  }
  return;
}


