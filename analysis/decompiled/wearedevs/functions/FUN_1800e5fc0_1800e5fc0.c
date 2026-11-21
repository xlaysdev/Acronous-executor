/* FUN_1800e5fc0 @ 1800e5fc0 */

void FUN_1800e5fc0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_78;
  undefined8 *puStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = param_2[10];
  local_38 = param_2[8];
  uStack_30 = param_2[9];
  local_78 = *param_2;
  puStack_70 = (undefined8 *)param_2[1];
  local_68 = *(undefined4 *)(param_2 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_60 = *(undefined4 *)(param_2 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_58 = *(undefined4 *)(param_2 + 4);
  uStack_54 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_50 = *(undefined4 *)(param_2 + 5);
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_48 = *(undefined4 *)(param_2 + 6);
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_40 = *(undefined4 *)(param_2 + 7);
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0x3c);
  puVar3 = &local_78;
  uVar1 = FUN_1800d49f0();
  local_78 = uVar1;
  puStack_70 = puVar3;
  FUN_180027490();
  puVar2 = (undefined8 *)thunk_FUN_1801d32d0(0x10,8);
  if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x10);
  }
  *puVar2 = uVar1;
  puVar2[1] = puVar3;
  return;
}


