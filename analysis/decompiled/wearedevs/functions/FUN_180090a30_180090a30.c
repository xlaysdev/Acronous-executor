/* FUN_180090a30 @ 180090a30 */

void FUN_180090a30(int *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 local_10;
  ulonglong local_8;
  
  if (*param_1 == 2) {
    FUN_18016ec40(param_1 + 2);
    return;
  }
  lVar1 = 0;
  do {
    if (param_4 * 0x10 == lVar1) {
      local_10 = 1;
      local_8 = 0;
      goto LAB_180090a71;
    }
    local_8 = (ulonglong)*(uint *)(param_3 + lVar1);
    lVar1 = lVar1 + 0x10;
  } while (local_8 == 0);
  local_10 = *(undefined8 *)(param_3 + -8 + lVar1);
LAB_180090a71:
  FUN_1800eb230(param_1,param_2,&local_10);
  return;
}


