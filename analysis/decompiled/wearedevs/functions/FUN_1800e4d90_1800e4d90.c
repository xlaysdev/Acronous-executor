/* FUN_1800e4d90 @ 1800e4d90 */

void FUN_1800e4d90(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uStack_1c;
  
  uVar3 = (**(code **)(param_1[1] + 0x28))(*param_1);
  uVar2 = param_1[2];
  uVar1 = *(undefined4 *)(param_1 + 3);
  FUN_180027490();
  puVar4 = (undefined8 *)thunk_FUN_1801d32d0(0x20,8);
  if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x20);
  }
  puVar4[2] = uVar2;
  puVar4[3] = CONCAT44(uStack_1c,uVar1);
  *puVar4 = uVar3;
  puVar4[1] = param_2;
  return;
}


