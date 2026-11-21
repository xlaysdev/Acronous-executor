/* FUN_1801a4d30 @ 1801a4d30 */

longlong FUN_1801a4d30(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x3f8);
  if (uVar1 < 0xfe) {
    param_1 = param_1 + 4;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 8);
    param_1 = *(longlong *)(param_1 + 0x10);
  }
  if (uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(param_2,uVar1,uVar1,param_3);
  }
  return param_1 + param_2 * 4;
}


