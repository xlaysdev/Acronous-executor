/* FUN_1800acd90 @ 1800acd90 */

undefined8 * FUN_1800acd90(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int local_68 [2];
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  FUN_1800a4970(local_68);
  if (local_68[0] == 1) {
    if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_1802108f8);
    }
    FUN_1801b4030(*param_2 + 0x48,*param_3);
    FUN_1800a4970(param_1,param_2);
  }
  else {
    if (local_60 == 0) {
      plVar1 = (longlong *)*param_2;
      local_48 = param_2;
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          FUN_18003d970(param_2);
        }
      }
      *local_48 = 0;
    }
    param_1[1] = local_60;
    param_1[2] = local_58;
    param_1[3] = uStack_50;
    *param_1 = 0;
  }
  return param_1;
}


