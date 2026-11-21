/* FUN_1801ca8c0 @ 1801ca8c0 */

void FUN_1801ca8c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_50 = param_2[4];
  local_40 = param_2;
  local_48 = param_3;
  if (local_50 == 0) {
    puVar4 = (undefined8 *)param_2[3];
    FUN_180027490();
    local_a0 = (undefined8 *)thunk_FUN_1801d32d0(0x278,8);
    if (local_a0 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x278);
    }
    local_a0[0x2c] = 0;
    *puVar4 = local_a0;
    puVar4[1] = 0;
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar1 = param_2[2];
    *(undefined2 *)((longlong)local_a0 + 0x272) = 1;
    local_a0[0x2d] = uVar2;
    local_a0[0x2e] = uVar3;
    local_a0[0x2f] = uVar1;
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    *local_a0 = *param_3;
    local_a0[1] = uVar1;
    local_a0[2] = uVar2;
    local_a0[3] = uVar3;
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
  }
  else {
    local_58 = param_2[6];
    local_68 = param_2[4];
    uStack_60 = param_2[5];
    local_78 = param_2[2];
    local_88 = *(undefined4 *)param_2;
    uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_80 = *(undefined4 *)(param_2 + 1);
    uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
    FUN_1801cd120(&local_a0,&local_68,&local_88,param_3,param_2 + 3,param_2 + 7);
    puVar4 = (undefined8 *)param_2[3];
  }
  puVar4[2] = puVar4[2] + 1;
  uVar1 = local_40[3];
  *param_1 = local_a0;
  *(undefined4 *)(param_1 + 1) = local_98;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_94;
  *(undefined4 *)(param_1 + 2) = uStack_90;
  *(undefined4 *)((longlong)param_1 + 0x14) = uStack_8c;
  param_1[3] = uVar1;
  return;
}


