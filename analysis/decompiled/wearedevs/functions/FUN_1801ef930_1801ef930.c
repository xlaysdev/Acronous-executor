/* FUN_1801ef930 @ 1801ef930 */

undefined8 *
FUN_1801ef930(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(param_2[1] + 0x18))(*param_2,param_3,param_4);
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = uVar1;
  *param_1 = 0;
  *(bool *)((longlong)param_1 + 0x11) = param_4 == 0;
  return param_1;
}


