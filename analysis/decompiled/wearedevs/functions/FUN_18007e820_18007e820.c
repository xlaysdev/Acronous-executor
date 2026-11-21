/* FUN_18007e820 @ 18007e820 */

void FUN_18007e820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 local_20;
  uint7 uStack_17;
  
  FUN_180027490();
  puVar1 = (undefined8 *)thunk_FUN_1801d32d0(0x20,8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x20);
  }
  puVar1[2] = local_20;
  puVar1[3] = (ulonglong)uStack_17 << 8;
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return;
}


