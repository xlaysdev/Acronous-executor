/* FUN_1801e5cf0 @ 1801e5cf0 */

void FUN_1801e5cf0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  FUN_180027490();
  puVar3 = (undefined8 *)thunk_FUN_1801d32d0(0x10,8);
  if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x10);
  }
  *puVar3 = uVar1;
  puVar3[1] = uVar2;
  return;
}


