/* FUN_1800c3710 @ 1800c3710 */

void FUN_1800c3710(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 local_10;
  ulonglong local_8;
  
  lVar1 = 0;
  do {
    if (param_4 * 0x10 == lVar1) {
      local_10 = 1;
      local_8 = 0;
      goto LAB_1800c3741;
    }
    local_8 = (ulonglong)*(uint *)(param_3 + lVar1);
    lVar1 = lVar1 + 0x10;
  } while (local_8 == 0);
  local_10 = *(undefined8 *)(param_3 + -8 + lVar1);
LAB_1800c3741:
  FUN_1800eb830(param_1,param_2,&local_10);
  return;
}


