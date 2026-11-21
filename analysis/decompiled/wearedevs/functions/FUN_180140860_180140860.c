/* FUN_180140860 @ 180140860 */

ulonglong FUN_180140860(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201c20(&PTR_s_C__Users_burne__cargo_registry_s_180251cc8);
  }
  if ((param_1 | param_2) >> 0x20 == 0) {
    param_1 = (param_1 & 0xffffffff) / (param_2 & 0xffffffff);
  }
  else {
    param_1 = param_1 / param_2;
  }
  param_1 = param_1 + (param_1 == 0);
  uVar2 = 0xffffffffffffffff;
  if (!CARRY8(param_1 >> 2,param_1)) {
    uVar2 = (param_1 >> 2) + param_1;
  }
  uVar1 = 5;
  if (5 < uVar2) {
    uVar1 = uVar2;
  }
  return uVar1;
}


