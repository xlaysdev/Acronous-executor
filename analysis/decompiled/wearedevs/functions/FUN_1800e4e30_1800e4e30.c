/* FUN_1800e4e30 @ 1800e4e30 */

void FUN_1800e4e30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = param_1[1];
  uVar1 = (**(code **)(lVar3 + 0x28))(*param_1);
  FUN_180027490();
  puVar2 = (undefined8 *)thunk_FUN_1801d32d0(0x10,8);
  if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x10);
  }
  *puVar2 = uVar1;
  puVar2[1] = lVar3;
  return;
}


