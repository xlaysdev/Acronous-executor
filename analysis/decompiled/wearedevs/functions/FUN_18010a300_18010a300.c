/* FUN_18010a300 @ 18010a300 */

void FUN_18010a300(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_1801787d0(&local_80,param_2,param_3,&PTR_s_C__Users_burne__cargo_registry_s_18023bb08);
  FUN_180027490();
  puVar1 = (undefined8 *)thunk_FUN_1801d32d0(0x70,8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x70);
  }
  puVar1[0xc] = local_20;
  puVar1[0xd] = uStack_18;
  puVar1[10] = local_30;
  puVar1[0xb] = uStack_28;
  puVar1[8] = local_40;
  puVar1[9] = uStack_38;
  puVar1[6] = local_50;
  puVar1[7] = uStack_48;
  puVar1[4] = local_60;
  puVar1[5] = uStack_58;
  puVar1[2] = local_70;
  puVar1[3] = uStack_68;
  *puVar1 = local_80;
  puVar1[1] = uStack_78;
  return;
}


