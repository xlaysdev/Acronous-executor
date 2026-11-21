/* FUN_180198070 @ 180198070 */

void FUN_180198070(longlong *param_1,longlong *param_2,ulonglong param_3,uint param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,longlong *param_8,
                  undefined2 param_9,undefined2 param_10,uint param_11,undefined8 param_12,
                  undefined8 param_13)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  ulonglong _Size;
  ulonglong uVar8;
  ulonglong uVar9;
  int local_8c;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined2 local_5a;
  longlong *local_58;
  undefined2 local_4c;
  byte local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar6 = (ulonglong)param_11;
  local_5a = param_9;
  local_7c = param_5;
  uVar9 = (ulonglong)param_4;
  bVar7 = (byte)param_3;
  local_58 = param_2;
  if (uVar9 + 1 == uVar6) {
    local_74 = param_6;
    local_4c = param_10;
    local_78 = param_7;
    lVar5 = param_2[1];
    uVar8 = param_2[2];
    _Size = uVar8 - uVar6;
    if (uVar8 < uVar6 || _Size == 0) {
      if (_Size != 0) goto LAB_180198111;
    }
    else if (*(char *)(lVar5 + uVar6) < -0x40) {
LAB_180198111:
                    /* WARNING: Subroutine does not return */
      FUN_1802018d0(lVar5,uVar8,uVar6,uVar8,&PTR_s_C__Users_burne__cargo_registry_s_1802672a0);
    }
    if ((1 < _Size) && (*(short *)(lVar5 + uVar6) == 0x2f2f)) {
      if (*(char *)(lVar5 + uVar6) < -0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0(&DAT_180267468,0x2c,&PTR_s_C__Users_burne__cargo_registry_s_1802672b8);
      }
      local_68 = param_13;
      local_70 = param_12;
      local_49 = bVar7;
      if (*param_2 - uVar8 < 2) {
        FUN_1801f6a80(param_2,uVar8,2,1,1);
        lVar5 = local_58[1];
      }
      memmove((void *)(uVar6 + lVar5 + 2),(void *)(uVar6 + lVar5),_Size);
      *(undefined2 *)(lVar5 + uVar6) = 0x2e2f;
      uVar8 = uVar8 + 2;
      local_58[2] = uVar8;
      param_11 = param_11 + 2;
      param_3 = (ulonglong)local_49;
      param_6 = local_74;
      param_10 = local_4c;
      param_7 = local_78;
      param_13 = local_68;
      param_12 = local_70;
    }
    local_78 = param_7;
    local_74 = param_6;
    local_4c = param_10;
    if (param_4 != 0) {
      if (uVar9 < uVar8) {
        if (*(char *)(lVar5 + uVar9) < -0x40) {
LAB_180198547:
                    /* WARNING: Subroutine does not return */
          FUN_1802018d0(lVar5,uVar8,uVar9,uVar8,&PTR_s_C__Users_burne__cargo_registry_s_1802672d0);
        }
      }
      else if (uVar8 != uVar9) goto LAB_180198547;
    }
    if (uVar8 - uVar9 < 3) {
    }
    else if (*(char *)(lVar5 + 2 + uVar9) == '/' && *(short *)(lVar5 + uVar9) == 0x2f3a) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("assertion failed: !self.serialization[scheme_end_as_usize..].starts_with(\"://\")"
                    ,0x4f,&PTR_s_C__Users_burne__cargo_registry_s_1802672e8);
    }
  }
  else {
    if (uVar9 + 3 != uVar6) goto LAB_1801983a8;
    local_68 = param_13;
    local_70 = param_12;
    lVar5 = param_2[1];
    uVar8 = param_2[2];
    if (param_4 != 0) {
      if (uVar9 < uVar8) {
        if (*(char *)(lVar5 + uVar9) < -0x40) goto LAB_180198528;
      }
      else if (uVar8 != uVar9) goto LAB_180198528;
    }
    if (uVar6 < uVar8) {
      if (*(char *)(lVar5 + uVar6) < -0x40) {
LAB_180198528:
        local_49 = bVar7;
                    /* WARNING: Subroutine does not return */
        FUN_1802018d0(lVar5,uVar8,uVar9,uVar6,&PTR_s_C__Users_burne__cargo_registry_s_1802671b8);
      }
      local_49 = bVar7;
      if (*(char *)(lVar5 + 2 + uVar9) == '.' && *(short *)(lVar5 + uVar9) == 0x2f3a) {
        if (*(char *)(lVar5 + uVar6) != '/') {
          FUN_1801fbaba(0,lVar5 + uVar6,&DAT_1802671e8,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if ((uVar8 <= uVar6 + 1) || (*(char *)(lVar5 + uVar6 + 1) != '/')) {
          FUN_18019dac0(param_2,uVar9,uVar6,&DAT_180267198,1,
                        &PTR_s_C__Users_burne__cargo_registry_s_180267208);
          param_11 = param_11 - 2;
          lVar5 = local_58[1];
          uVar8 = local_58[2];
        }
        if (param_4 != 0) {
          if (uVar9 < uVar8) {
            if (*(char *)(lVar5 + uVar9) < -0x40) {
LAB_180198325:
                    /* WARNING: Subroutine does not return */
              FUN_1802018d0(lVar5,uVar8,uVar9,uVar8,
                            &PTR_s_C__Users_burne__cargo_registry_s_180267220);
            }
          }
          else if (uVar8 != uVar9) goto LAB_180198325;
        }
        if (2 < uVar8 - uVar9) {
          param_3 = (ulonglong)local_49;
          param_13 = local_68;
          param_12 = local_70;
          if (*(char *)(lVar5 + 2 + uVar9) == '/' && *(short *)(lVar5 + uVar9) == 0x2f3a) {
                    /* WARNING: Subroutine does not return */
            FUN_180201ec0("assertion failed: !self.serialization[scheme_end_as_usize..].starts_with(\"://\")"
                          ,0x4f,&PTR_s_C__Users_burne__cargo_registry_s_180267288);
          }
          goto LAB_1801983a8;
        }
      }
      param_3 = (ulonglong)local_49;
      param_13 = local_68;
      param_12 = local_70;
    }
    else {
      if (uVar8 != uVar6) goto LAB_180198528;
      param_3 = param_3 & 0xff;
      local_49 = bVar7;
      if (*(char *)(lVar5 + 2 + uVar9) == '.' && *(short *)(lVar5 + uVar9) == 0x2f3a) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar6,uVar6,&PTR_s_C__Users_burne__cargo_registry_s_1802671d0);
      }
    }
  }
LAB_1801983a8:
  FUN_1801985c0(&local_8c,local_58,param_3,param_4,param_12,param_13);
  if (local_8c == 2) {
    *(undefined1 *)(param_1 + 1) = local_88;
    *param_1 = -0x8000000000000000;
    if (*local_58 != 0) {
      thunk_FUN_1801d3330(local_58[1],*local_58,1);
      return;
    }
  }
  else {
    param_1[2] = local_58[2];
    lVar5 = local_58[1];
    lVar2 = *param_8;
    lVar3 = param_8[1];
    lVar4 = param_8[2];
    *param_1 = *local_58;
    param_1[1] = lVar5;
    *(char *)(param_1 + 10) = (char)lVar4;
    param_1[8] = lVar2;
    param_1[9] = lVar3;
    *(int *)(param_1 + 3) = local_8c;
    *(ulonglong *)((longlong)param_1 + 0x1c) = CONCAT71(uStack_87,local_88);
    *(undefined4 *)((longlong)param_1 + 0x24) = local_80;
    *(undefined2 *)(param_1 + 5) = local_5a;
    *(undefined2 *)((longlong)param_1 + 0x2a) = param_10;
    *(uint *)((longlong)param_1 + 0x2c) = param_4;
    *(undefined4 *)(param_1 + 6) = local_7c;
    *(undefined4 *)((longlong)param_1 + 0x34) = param_6;
    *(undefined4 *)(param_1 + 7) = param_7;
    *(uint *)((longlong)param_1 + 0x3c) = param_11;
  }
  return;
}


