/* FUN_1801ef8f0 @ 1801ef8f0 */

undefined8 * FUN_1801ef8f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(param_2[1] + 0x18))(*param_2,&DAT_1802936c0,1);
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  return param_1;
}


