/* FUN_1801d09b0 @ 1801d09b0 */

undefined8 FUN_1801d09b0(undefined1 *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  
  uVar1 = (*(code *)PTR_FUN_1802fd578)(*param_1,param_3,param_3 + param_4);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  return 1;
}


