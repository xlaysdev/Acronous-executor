/* FUN_18010d130 @ 18010d130 */

void FUN_18010d130(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  uVar9 = (**(code **)(param_1[9] + 0x18))(param_1[8]);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[4];
  uVar6 = param_1[5];
  uVar7 = param_1[6];
  uVar8 = param_1[7];
  FUN_180027490();
  puVar10 = (undefined8 *)thunk_FUN_1801d32d0(0x50,8);
  if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x50);
  }
  puVar10[8] = uVar9;
  puVar10[9] = param_2;
  puVar10[6] = uVar7;
  puVar10[7] = uVar8;
  puVar10[4] = uVar5;
  puVar10[5] = uVar6;
  puVar10[2] = uVar3;
  puVar10[3] = uVar4;
  *puVar10 = uVar1;
  puVar10[1] = uVar2;
  return;
}


