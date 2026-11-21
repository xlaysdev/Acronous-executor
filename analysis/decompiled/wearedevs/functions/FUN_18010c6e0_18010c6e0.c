/* FUN_18010c6e0 @ 18010c6e0 */

void FUN_18010c6e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  FUN_180027490();
  puVar8 = (undefined8 *)thunk_FUN_1801d32d0(0x40,4);
  if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(4,0x40);
  }
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[4];
  uVar6 = param_1[5];
  uVar7 = param_1[7];
  puVar8[6] = param_1[6];
  puVar8[7] = uVar7;
  puVar8[4] = uVar5;
  puVar8[5] = uVar6;
  puVar8[2] = uVar3;
  puVar8[3] = uVar4;
  *puVar8 = uVar1;
  puVar8[1] = uVar2;
  return;
}


