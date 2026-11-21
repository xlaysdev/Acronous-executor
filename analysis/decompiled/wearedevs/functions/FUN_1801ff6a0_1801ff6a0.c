/* FUN_1801ff6a0 @ 1801ff6a0 */

void FUN_1801ff6a0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  
  FUN_180027490();
  puVar1 = (undefined8 *)thunk_FUN_1801d32d0(0x28,8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x28);
  }
  puVar1[4] = 0;
  puVar1[2] = uStack_28;
  puVar1[3] = 0;
  *puVar1 = 1;
  puVar1[1] = param_1;
  return;
}


