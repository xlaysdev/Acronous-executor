/* FUN_1801d5430 @ 1801d5430 */

undefined **
FUN_1801d5430(undefined8 param_1,undefined **param_2,undefined **param_3,undefined **param_4)

{
  ulonglong uVar1;
  undefined **local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined5 local_64;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined2 uStack_5b;
  undefined **local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_78 = (undefined **)((ulonglong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  local_68 = 7;
  local_64 = 0;
  uStack_5e = 0;
  uStack_5b = 0;
  uStack_5f = 1;
  uStack_5c = 1;
  uStack_5d = 1;
  uVar1 = FUN_1801d9410(param_1,param_2,&local_78);
  if ((uVar1 & 1) == 0) {
    local_78 = param_2;
    local_58 = param_2;
    if (param_4 != (undefined **)0x0) {
      do {
        param_2 = param_3;
        uVar1 = FUN_1801db350(&local_78,param_3,param_4,0);
        if ((uVar1 & 1) == 0) {
          if (param_2 == (undefined **)0x0) {
            param_2 = &PTR_s_failed_to_write_whole_buffer_18028ef30;
            goto switchD_1801d54fa_caseD_2;
          }
          if (param_4 < param_2) {
                    /* WARNING: Subroutine does not return */
            FUN_180201a30(param_2,param_4,param_4,&PTR_s_library_std_src_io_mod_rs_18028ef48);
          }
          param_3 = (undefined **)((longlong)param_3 + (longlong)param_2);
          param_4 = (undefined **)((longlong)param_4 - (longlong)param_2);
        }
        else {
          switch((uint)param_2 & 3) {
          case 0:
            if (*(char *)(param_2 + 2) != '#') goto switchD_1801d54fa_caseD_2;
            break;
          case 1:
            if (*(char *)((longlong)param_2 + 0xf) != '#') goto switchD_1801d54fa_caseD_2;
            local_50 = (longlong)param_2 - 1;
            local_48 = *(undefined8 *)((longlong)param_2 - 1);
            local_40 = *(undefined8 **)((longlong)param_2 + 7);
            if ((code *)*local_40 != (code *)0x0) {
              (*(code *)*local_40)(local_48);
            }
            if (local_40[1] != 0) {
              thunk_FUN_1801d3330(local_48,local_40[1],local_40[2]);
            }
            thunk_FUN_1801d3330(local_50,0x18,8);
            break;
          case 2:
            goto switchD_1801d54fa_caseD_2;
          case 3:
            if ((int)((ulonglong)param_2 >> 0x20) != 0x23) goto switchD_1801d54fa_caseD_2;
          }
        }
      } while (param_4 != (undefined **)0x0);
    }
    param_2 = (undefined **)0x0;
switchD_1801d54fa_caseD_2:
    CloseHandle(local_58);
  }
  return param_2;
}


