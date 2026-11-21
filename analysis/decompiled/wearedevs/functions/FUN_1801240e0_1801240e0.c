/* FUN_1801240e0 @ 1801240e0 */

longlong * FUN_1801240e0(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  longlong lStack_50;
  char local_48;
  longlong local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_38 = *param_3;
  uStack_30 = (undefined4)param_3[1];
  uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_28 = (undefined4)param_3[2];
  uStack_24 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_20 = (undefined4)param_3[3];
  uStack_1c = *(undefined4 *)((longlong)param_3 + 0x1c);
  if (*(char *)(param_2 + 0x20) == '\x02') {
    local_68 = (undefined4)*param_3;
    uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_60 = (undefined4)param_3[1];
    uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
    local_58 = param_3[2];
    lStack_50 = param_3[3];
  }
  else {
    FUN_180128250(&local_68,param_2 + 0x10,&local_38);
    if (local_48 == '\x02') {
      *param_1 = 0;
      return param_1;
    }
  }
  local_38 = CONCAT44(uStack_5c,uStack_60);
  if (CONCAT44(uStack_64,local_68) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("just sent Ok",0xc,&local_38,&PTR_FUN_1802422e8,
                  &PTR_s_C__Users_burne__cargo_registry_s_180242380);
  }
  param_1[2] = local_58;
  param_1[3] = lStack_50;
  *param_1 = CONCAT44(uStack_64,local_68);
  param_1[1] = local_38;
  return param_1;
}


