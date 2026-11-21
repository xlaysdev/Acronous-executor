/* Unwind@180014760 @ 180014760 */

void Unwind_180014760(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x700);
  **(undefined1 **)(param_2 + 0x708) = 2;
  *(undefined8 *)(param_2 + 0x428) = uVar1;
  return;
}


