/* FUN_1800f7ba0 @ 1800f7ba0 */

void FUN_1800f7ba0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,ulonglong param_6,byte param_7,longlong param_8)

{
  ulonglong uVar1;
  undefined2 local_5a;
  longlong local_58;
  char local_50;
  undefined2 local_4f;
  ulonglong local_48;
  
  *(undefined1 *)(param_2 + 0x28) = 9;
  if (param_8 == 1) {
    FUN_1800f7a30(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0,0xef);
  }
  else if (param_8 == 0) {
    local_5a = 0xbbef;
    FUN_1800f8990(&local_58,param_2,&local_5a,2,param_5,param_6,0);
    uVar1 = local_48;
    if (local_50 == '\0') {
      if (param_6 < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_180201a30(local_48,param_6,param_6,&PTR_s_C__Users_burne__cargo_registry_s_1802199b8);
      }
      FUN_1800f8990(&local_58,param_2,param_3,param_4,param_5 + local_48,param_6 - local_48,param_7)
      ;
      if ((local_50 == '\0' & param_7) == 1) {
        *(undefined1 *)(param_2 + 0x28) = 10;
      }
      local_48 = uVar1 + local_48;
    }
    else {
      if (local_50 != '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("Output buffer must have been too small.",0x27,
                      &PTR_s_C__Users_burne__cargo_registry_s_1802199b8);
      }
      local_50 = '\x02';
      if (local_58 == 1) {
        *(undefined1 *)(param_2 + 0x28) = 8;
      }
      local_58 = 0;
    }
    *(char *)(param_1 + 1) = local_50;
    *(undefined2 *)((longlong)param_1 + 9) = local_4f;
    *param_1 = local_58;
    param_1[2] = local_48;
  }
  else {
    FUN_1800f8990(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    if ((param_7 != 0) && ((char)param_1[1] == '\0')) {
      *(undefined1 *)(param_2 + 0x28) = 10;
    }
  }
  return;
}


