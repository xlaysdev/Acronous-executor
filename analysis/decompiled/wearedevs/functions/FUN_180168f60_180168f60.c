/* FUN_180168f60 @ 180168f60 */

void FUN_180168f60(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  longlong local_58;
  longlong *local_50;
  code *local_48;
  longlong *local_40;
  uint local_38;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  LOCK();
  lVar2 = *param_1;
  if (lVar2 == 2) {
    *param_1 = 0;
  }
  UNLOCK();
  if (lVar2 != 2) {
    plVar1 = (longlong *)((longlong)param_1 + 0xc);
    LOCK();
    bVar5 = *(char *)((longlong)param_1 + 0xc) == '\0';
    if (bVar5) {
      *(char *)((longlong)param_1 + 0xc) = '\x01';
    }
    UNLOCK();
    if (!bVar5) {
      FUN_180200390(plVar1);
    }
    puVar3 = PTR_DAT_1802fd600;
    if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
      local_38 = 0;
    }
    else {
      local_38 = FUN_180200a50();
      local_38 = local_38 ^ 1;
    }
    local_58 = 0;
    LOCK();
    bVar5 = *param_1 == 0;
    if (bVar5) {
      *param_1 = 1;
    }
    else {
      local_58 = *param_1;
    }
    UNLOCK();
    if (bVar5) {
      local_31 = 1;
      local_40 = plVar1;
      do {
        FUN_1801dc490(param_1 + 1);
        if (*(char *)((longlong)param_1 + 0xd) != '\0') {
          local_50 = local_40;
          local_48 = (code *)CONCAT71(local_48._1_7_,(char)local_38);
                    /* WARNING: Subroutine does not return */
          FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_50,
                        &PTR_FUN_180260bd8,&PTR_s_C__Users_burne__cargo_registry_s_180260d70);
        }
        LOCK();
        lVar2 = *param_1;
        if (lVar2 == 2) {
          *param_1 = 0;
        }
        UNLOCK();
        plVar1 = local_40;
      } while (lVar2 != 2);
    }
    else {
      if (local_58 != 2) {
        local_50 = &local_58;
        local_48 = FUN_1801ee720;
        local_40 = plVar1;
        local_31 = bVar5;
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0(&DAT_180260d88,&local_50,&PTR_s_C__Users_burne__cargo_registry_s_180260db0);
      }
      LOCK();
      *param_1 = 0;
      UNLOCK();
    }
    if ((((char)local_38 == '\0') && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
       (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
      *(undefined1 *)((longlong)param_1 + 0xd) = 1;
    }
    LOCK();
    lVar2 = *plVar1;
    *(char *)plVar1 = '\0';
    UNLOCK();
    if ((char)lVar2 == '\x02') {
      WakeByAddressSingle(plVar1);
      return;
    }
  }
  return;
}


