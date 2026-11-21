/* FUN_180177b70 @ 180177b70 */

void FUN_180177b70(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0("waker missing",0x1b,&DAT_1802631e0);
  }
                    /* WARNING: Could not recover jumptable at 0x000180177b85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x10) + 0x10))(*(undefined8 *)(param_1 + 0x18));
  return;
}


