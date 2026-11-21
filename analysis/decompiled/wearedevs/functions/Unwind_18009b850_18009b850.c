/* Unwind@18009b850 @ 18009b850 */

void Unwind_18009b850(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x60) = uVar1;
  *(undefined8 *)(param_2 + 0x58) = 1;
  FUN_180097000(*(undefined8 *)(param_2 + 0x48));
  *(undefined8 *)(param_2 + 0x60) = uVar1;
  *(undefined8 *)(param_2 + 0x58) = 1;
  return;
}


