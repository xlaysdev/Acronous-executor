/* FUN_18019a170 @ 18019a170 */

void FUN_18019a170(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (0x8000000000000000 < param_1) {
    uVar1 = param_1;
  }
  if (((uVar1 & 0x7fffffffffffffff) == 0) && ((param_1 & 0x7fffffffffffffff) != 0)) {
    thunk_FUN_1801d3330(param_2,param_1,1);
    return;
  }
  return;
}


