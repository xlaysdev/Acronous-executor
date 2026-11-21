/* FUN_18012dae0 @ 18012dae0 */

void FUN_18012dae0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  (**(code **)*param_1)(&local_30,param_1 + 3,param_1[1],param_1[2]);
  FUN_180027490();
  puVar1 = (undefined8 *)thunk_FUN_1801d32d0(0x20,8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x20);
  }
  puVar1[2] = local_20;
  puVar1[3] = uStack_18;
  *puVar1 = local_30;
  puVar1[1] = uStack_28;
  return;
}


