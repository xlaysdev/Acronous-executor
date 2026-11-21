/* FUN_180090840 @ 180090840 */

undefined8 * FUN_180090840(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_30 = param_2;
  if (*(int *)(param_2 + 3) == 1) {
    FUN_1801004d0(&local_a0,10,0,10,*(undefined4 *)((longlong)param_2 + 0x1c));
    FUN_180027490();
    puVar3 = (undefined8 *)thunk_FUN_1801d32d0(0x70,8);
    if (puVar3 == (undefined8 *)0x0) {
      local_38 = local_80;
      local_40 = local_78;
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x70);
    }
    *puVar3 = 1;
    puVar3[1] = 1;
    puVar3[2] = local_a0;
    puVar3[3] = uStack_98;
    puVar3[4] = local_90;
    puVar3[5] = uStack_88;
    puVar3[6] = local_80;
    puVar3[7] = local_78;
    puVar3[8] = local_70;
    puVar3[9] = uStack_68;
    puVar3[10] = local_60;
    puVar3[0xb] = uStack_58;
    puVar3[0xc] = local_50;
    puVar3[0xd] = uStack_48;
  }
  else {
    puVar3 = (undefined8 *)0x0;
  }
  param_1[2] = local_30[2];
  uVar2 = local_30[1];
  *param_1 = *local_30;
  param_1[1] = uVar2;
  uVar1 = *(undefined4 *)(local_30 + 6);
  param_1[3] = puVar3;
  *(undefined4 *)(param_1 + 6) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  uVar2 = local_30[5];
  param_1[4] = local_30[4];
  param_1[5] = uVar2;
  return param_1;
}


