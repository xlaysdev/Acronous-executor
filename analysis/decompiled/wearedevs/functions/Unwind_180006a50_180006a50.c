/* Unwind@180006a50 @ 180006a50 */

void Unwind_180006a50(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x700);
  **(undefined1 **)(param_2 + 0x708) = 2;
  *(undefined8 *)(param_2 + 0x428) = uVar1;
  return;
}


