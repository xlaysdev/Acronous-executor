/* FUN_180128ef0 @ 180128ef0 */

undefined8 * FUN_180128ef0(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_180127cf0(&local_80);
  if (local_80 == 2) {
    if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180242d28);
    }
    FUN_1801b4030(*param_2 + 0x48,*param_3);
    FUN_180127cf0(param_1,param_2);
  }
  else {
    local_58 = local_80;
    uStack_54 = uStack_7c;
    uStack_50 = uStack_78;
    uStack_4c = uStack_74;
    local_38 = local_60;
    local_48 = local_70;
    uStack_44 = uStack_6c;
    uStack_40 = uStack_68;
    uStack_3c = uStack_64;
    if (CONCAT44(uStack_7c,local_80) == 0) {
      plVar1 = (longlong *)*param_2;
      local_30 = param_2;
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          FUN_180114080(param_2);
        }
      }
      *local_30 = 0;
    }
    param_1[4] = local_38;
    param_1[2] = CONCAT44(uStack_44,local_48);
    param_1[3] = CONCAT44(uStack_3c,uStack_40);
    *param_1 = CONCAT44(uStack_54,local_58);
    param_1[1] = CONCAT44(uStack_4c,uStack_50);
  }
  return param_1;
}


