/* FUN_18009b360 @ 18009b360 */

void FUN_18009b360(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar1 = *param_1;
  if (uVar1 != 0x8000000000000002) {
    FUN_18000adf0(param_1 + 6);
    uVar2 = 2;
    if ((longlong)uVar1 < 0) {
      uVar2 = uVar1 ^ 0x8000000000000000;
    }
    if (uVar2 != 0) {
      if (uVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00018009b3da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1[1] + 0x20))(param_1[4],param_1[2],param_1[3]);
        return;
      }
      if (uVar1 != 0) {
        thunk_FUN_1801d3330(param_1[1],uVar1,1,param_4,param_1,uVar3);
      }
      if (param_1[3] != 0) {
        thunk_FUN_1801d3330(param_1[4],param_1[3],1);
        return;
      }
    }
  }
  return;
}


