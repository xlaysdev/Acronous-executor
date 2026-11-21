/* FUN_18018c7b0 @ 18018c7b0 */

undefined8
FUN_18018c7b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (param_1[1] != 0) {
    return 0xc00000003;
  }
  FUN_18018e420(&local_38,param_2,*param_1,param_3,param_4);
  if (CONCAT44(uStack_34,local_38) == 0) {
    return CONCAT44(uStack_2c,uStack_30);
  }
  FUN_180027490();
  puVar1 = (undefined8 *)thunk_FUN_1801d32d0(0x20,8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x20);
  }
  puVar1[2] = CONCAT44(uStack_24,local_28);
  puVar1[3] = CONCAT44(uStack_1c,uStack_20);
  *puVar1 = CONCAT44(uStack_34,local_38);
  puVar1[1] = CONCAT44(uStack_2c,uStack_30);
  param_1[1] = puVar1;
  return 0;
}


