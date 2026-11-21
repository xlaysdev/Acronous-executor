/* FUN_180110560 @ 180110560 */

void FUN_180110560(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  FUN_180027490();
  puVar4 = (undefined4 *)thunk_FUN_1801d32d0(0x18,8);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x18);
  }
  *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(param_2 + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *puVar4 = *param_2;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  FUN_1801d6870(param_1,puVar4,&PTR_FUN_18023ead8);
  return;
}


