/* FUN_180168c40 @ 180168c40 */

ulonglong FUN_180168c40(ulonglong *param_1,longlong param_2,int param_3)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined *puVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  ulonglong *local_68;
  code *local_60;
  byte local_58;
  ulonglong local_50;
  ulonglong *local_48;
  uint local_40;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  uVar5 = 2;
  LOCK();
  uVar6 = *param_1;
  if (uVar6 == 2) {
    *param_1 = 0;
  }
  else {
    uVar5 = uVar6;
  }
  UNLOCK();
  if ((uVar6 != 2) &&
     (uVar5 = CONCAT71((int7)(uVar5 >> 8),param_2 == 0), param_2 != 0 || param_3 != 0)) {
    puVar1 = (ulonglong *)((longlong)param_1 + 0xc);
    LOCK();
    bVar7 = *(char *)((longlong)param_1 + 0xc) == '\0';
    if (bVar7) {
      *(char *)((longlong)param_1 + 0xc) = '\x01';
    }
    UNLOCK();
    if (!bVar7) {
      FUN_180200390(puVar1);
    }
    puVar3 = PTR_DAT_1802fd600;
    if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
      local_40 = 0;
    }
    else {
      local_40 = FUN_180200a50();
      local_40 = local_40 ^ 1;
    }
    local_50 = 0;
    LOCK();
    local_39 = *param_1 == 0;
    if ((bool)local_39) {
      *param_1 = 1;
    }
    else {
      local_50 = *param_1;
    }
    UNLOCK();
    local_48 = puVar1;
    if ((bool)local_39) {
      local_58 = FUN_1801dc3b0(param_1 + 1,puVar1,param_2,param_3);
      if (*(char *)((longlong)param_1 + 0xd) != '\0') {
        local_58 = local_58 ^ 1;
        local_68 = local_48;
        local_60 = (code *)CONCAT71(local_60._1_7_,(char)local_40);
                    /* WARNING: Subroutine does not return */
        FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_68,
                      &PTR_FUN_180260bf8,&PTR_s_C__Users_burne__cargo_registry_s_180260cd0);
      }
      LOCK();
      local_50 = *param_1;
      *param_1 = 0;
      UNLOCK();
      if (1 < local_50 - 1) {
        local_68 = &local_50;
        local_60 = FUN_1801ee720;
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0(&DAT_180260ce8,&local_68,&PTR_s_C__Users_burne__cargo_registry_s_180260d10);
      }
      if ((((char)local_40 == '\0') && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
         (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
        *(undefined1 *)((longlong)param_1 + 0xd) = 1;
      }
      LOCK();
      uVar6 = *local_48;
      *(byte *)local_48 = 0;
      uVar5 = (ulonglong)(byte)uVar6;
      UNLOCK();
      if ((byte)uVar6 == 2) {
        uVar5 = WakeByAddressSingle(local_48);
      }
    }
    else {
      if (local_50 != 2) {
        local_68 = &local_50;
        local_60 = FUN_1801ee720;
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0(&DAT_180260d28,&local_68,&PTR_s_C__Users_burne__cargo_registry_s_180260d58);
      }
      LOCK();
      *param_1 = 0;
      UNLOCK();
      if ((((char)local_40 == '\0') && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
         (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
        *(undefined1 *)((longlong)param_1 + 0xd) = 1;
      }
      LOCK();
      bVar2 = *(byte *)puVar1;
      *(byte *)puVar1 = 0;
      uVar5 = (ulonglong)bVar2;
      UNLOCK();
      if (bVar2 == 2) {
        uVar6 = WakeByAddressSingle(puVar1);
        return uVar6;
      }
    }
  }
  return uVar5;
}


