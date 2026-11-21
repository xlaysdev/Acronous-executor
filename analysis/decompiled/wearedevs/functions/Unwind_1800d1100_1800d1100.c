/* Unwind@1800d1100 @ 1800d1100 */

void Unwind_1800d1100(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x230);
  *(undefined8 *)(param_2 + 0x228) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x210);
  *(undefined8 *)(param_2 + 0x220) = uVar2;
  *(undefined1 *)(param_2 + 0x23d) = 0;
  FUN_18000c630(param_2 + 0xb0);
  *(undefined8 *)(param_2 + 0x228) = uVar1;
  *(undefined8 *)(param_2 + 0x220) = uVar2;
  *(undefined1 *)(param_2 + 0x23d) = 0;
  return;
}


