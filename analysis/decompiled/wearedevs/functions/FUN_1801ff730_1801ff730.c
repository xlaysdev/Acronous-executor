/* FUN_1801ff730 @ 1801ff730 */

void FUN_1801ff730(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar1 = param_1[2];
  uVar2 = *param_1;
  uVar3 = param_1[1];
  FUN_180027490();
  puVar4 = (undefined8 *)thunk_FUN_1801d32d0(0x28,8);
  if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x28);
  }
  puVar4[4] = param_3;
  puVar4[2] = uVar1;
  puVar4[3] = param_2;
  *puVar4 = uVar2;
  puVar4[1] = uVar3;
  return;
}


