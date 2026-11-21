/* FUN_1801ef980 @ 1801ef980 */

undefined8 *
FUN_1801ef980(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(param_2[1] + 0x18))(*param_2,param_3,param_4);
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  return param_1;
}


