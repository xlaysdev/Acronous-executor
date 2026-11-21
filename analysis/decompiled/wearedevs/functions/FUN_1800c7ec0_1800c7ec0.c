/* FUN_1800c7ec0 @ 1800c7ec0 */

void FUN_1800c7ec0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = 2;
  if (2 < *(ulonglong *)(param_1 + 0x40)) {
    lVar1 = *(ulonglong *)(param_1 + 0x40) - 3;
  }
  if (lVar1 != 0) {
    if (lVar1 == 1) {
      (**(code **)(*(longlong *)(param_1 + 0x48) + 0x20))
                (*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x50),
                 *(undefined8 *)(param_1 + 0x58),param_4,param_1,0xfffffffffffffffe);
    }
    else {
      FUN_18000b470(param_1 + 0x40);
    }
  }
  FUN_180042b50(param_1);
  FUN_18000adf0(param_1 + 0xa0);
  return;
}


