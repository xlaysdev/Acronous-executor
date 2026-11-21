/* FUN_1801692b0 @ 1801692b0 */

void FUN_1801692b0(longlong *param_1,longlong *param_2,ulonglong param_3,uint param_4)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  char cVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  bool bVar14;
  undefined8 local_78;
  int local_70;
  ulonglong local_60;
  longlong *local_58;
  uint local_50;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if ((int)param_2[0x13] == 1000000000) {
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                  ,0x73,&PTR_s_C__Users_burne__cargo_registry_s_180260e70);
  }
  local_58 = param_2 + 0xb;
  LOCK();
  bVar14 = (char)param_2[0xb] == '\0';
  if (bVar14) {
    *(char *)(param_2 + 0xb) = '\x01';
  }
  UNLOCK();
  if (!bVar14) {
    FUN_180200390(local_58);
  }
  puVar6 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_50 = 0;
    cVar1 = (char)param_2[0x11];
  }
  else {
    local_50 = FUN_180200a50();
    local_50 = local_50 ^ 1;
    cVar1 = (char)param_2[0x11];
  }
  if (cVar1 != '\0') {
    local_49 = 1;
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: !handle.is_shutdown()",0x27,
                  &PTR_s_C__Users_burne__cargo_registry_s_180260eb0);
  }
  iVar11 = (int)param_2 + 0x60;
  local_49 = 1;
  FUN_180163f50();
  cVar1 = (char)local_78;
  lVar9 = 0;
  if ((char)local_78 != '\0') {
    lVar9 = local_60 + (local_60 == 0);
  }
  param_2[0x10] = lVar9;
  if (((char)local_50 == '\0') && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) {
    local_49 = 0;
    cVar7 = FUN_180200a50();
    if (cVar7 == '\0') {
      *(undefined1 *)((longlong)param_2 + 0x59) = 1;
    }
  }
  LOCK();
  lVar9 = *local_58;
  *(char *)local_58 = '\0';
  UNLOCK();
  if ((char)lVar9 == '\x02') {
    local_49 = 0;
    WakeByAddressSingle(local_58);
  }
  if (cVar1 == '\0') {
    if (param_4 == 1000000000) {
      if (SBORROW8(0,*param_1)) {
        local_49 = 0;
        FUN_180168f60(param_1[1] + 0x10);
      }
      else {
        if (*param_2 == 0) {
          local_49 = 0;
                    /* WARNING: Subroutine does not return */
          FUN_180201b60("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                        ,0x68,&PTR_s_C__Users_burne__cargo_registry_s_180262570);
        }
        local_49 = 0;
        plVar12 = param_2;
        FUN_1801720f0(param_1);
        iVar11 = (int)plVar12;
      }
    }
    else if (SBORROW8(0,*param_1)) {
      local_49 = 0;
      FUN_180168c40(param_1[1] + 0x10,param_3,param_4);
      iVar11 = (int)param_3;
    }
    else {
      if (*param_2 == 0) {
        local_49 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_180201b60("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                      ,0x68,&PTR_s_C__Users_burne__cargo_registry_s_180262558);
      }
      local_49 = 0;
      plVar12 = param_2;
      FUN_1801720f0(param_1,param_2,param_3,param_4);
      iVar11 = (int)plVar12;
    }
  }
  else {
    local_49 = 0;
    local_78 = FUN_1801df8c0();
    uVar10 = param_2[0x12];
    local_49 = 0;
    local_70 = iVar11;
    uVar8 = FUN_1801df680(&local_78,uVar10,(int)param_2[0x13]);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar8;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (uVar10 & 0xffffffff) / 1000000;
    auVar4 = auVar2 * ZEXT816(1000) + auVar4;
    uVar10 = auVar4._0_8_;
    if (0xfffffffffffffffc < uVar10) {
      uVar10 = 0xfffffffffffffffd;
    }
    if (auVar4._8_8_ != 0) {
      uVar10 = 0xfffffffffffffffd;
    }
    uVar8 = 0;
    if (uVar10 <= local_60) {
      uVar8 = local_60 - uVar10;
    }
    uVar10 = uVar8 / 1000;
    if (uVar8 < 1000 && uVar8 % 1000 == 0) {
      if (SBORROW8(0,*param_1)) {
        iVar11 = 0;
        LOCK();
        if (*(longlong *)(param_1[1] + 0x10) == 2) {
          *(longlong *)(param_1[1] + 0x10) = 0;
        }
        UNLOCK();
      }
      else {
        if (*param_2 == 0) {
          local_49 = 0;
                    /* WARNING: Subroutine does not return */
          FUN_180201b60("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                        ,0x68,&PTR_s_C__Users_burne__cargo_registry_s_180262558);
        }
        local_49 = 0;
        plVar12 = param_2;
        FUN_1801720f0(param_1,param_2,0,0);
        iVar11 = (int)plVar12;
      }
    }
    else {
      uVar13 = (int)(uVar8 % 1000) * 1000000;
      if (param_4 != 1000000000) {
        bVar14 = uVar10 < param_3;
        if (uVar10 == param_3) {
          bVar14 = uVar13 < param_4;
        }
        if (!bVar14) {
          uVar10 = param_3;
          uVar13 = param_4;
        }
      }
      if (SBORROW8(0,*param_1)) {
        local_49 = 0;
        FUN_180168c40(param_1[1] + 0x10,uVar10,uVar13);
        iVar11 = (int)uVar10;
      }
      else {
        if (*param_2 == 0) {
          local_49 = 0;
                    /* WARNING: Subroutine does not return */
          FUN_180201b60("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                        ,0x68,&PTR_s_C__Users_burne__cargo_registry_s_180262558);
        }
        local_49 = 0;
        plVar12 = param_2;
        FUN_1801720f0(param_1);
        iVar11 = (int)plVar12;
      }
    }
  }
  local_49 = 0;
  local_78 = FUN_1801df8c0();
  uVar10 = param_2[0x12];
  local_49 = 0;
  local_70 = iVar11;
  uVar8 = FUN_1801df680(&local_78,uVar10,(int)param_2[0x13]);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar8;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (uVar10 & 0xffffffff) / 1000000;
  auVar5 = auVar3 * ZEXT816(1000) + auVar5;
  uVar10 = auVar5._0_8_;
  if (0xfffffffffffffffc < uVar10) {
    uVar10 = 0xfffffffffffffffd;
  }
  if (auVar5._8_8_ != 0) {
    uVar10 = 0xfffffffffffffffd;
  }
  local_49 = 0;
  FUN_180170050(local_58,uVar10);
  return;
}


