/* FUN_180108520 @ 180108520 */

void FUN_180108520(undefined8 *param_1)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_180027490();
  local_20 = (undefined8 *)thunk_FUN_1801d32d0(0x20,8);
  if (local_20 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x20);
  }
  (**(code **)*param_1)(&local_40,param_1 + 3,param_1[1],param_1[2]);
  local_20[2] = local_30;
  local_20[3] = uStack_28;
  *local_20 = local_40;
  local_20[1] = uStack_38;
  return;
}


