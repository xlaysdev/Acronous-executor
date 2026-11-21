/* FUN_1801787d0 @ 1801787d0 */

ulonglong *
FUN_1801787d0(ulonglong *param_1,ulonglong param_2,undefined4 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = param_2;
  uVar1 = FUN_1801798a0(param_4);
  lVar2 = uVar3 + 0x220;
  if ((uVar1 & 1) != 0) {
    lVar2 = uVar3 + 0x160;
  }
  if (*(int *)(lVar2 + 0x98) == 1000000000) {
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                  ,0x73,param_4);
  }
  param_1[0xc] = param_2;
  *(undefined4 *)(param_1 + 0xd) = param_3;
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = 2;
  return param_1;
}


