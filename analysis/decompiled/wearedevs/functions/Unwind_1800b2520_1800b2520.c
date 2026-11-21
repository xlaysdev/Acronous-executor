/* Unwind@1800b2520 @ 1800b2520 */

void Unwind_1800b2520(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x438);
  *(undefined8 *)(param_2 + 0x428) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x448);
  *(undefined8 *)(param_2 + 0x420) = uVar2;
  FUN_1800b0d40(*(undefined8 *)(param_2 + 0x430));
  *(undefined8 *)(param_2 + 0x428) = uVar1;
  *(undefined8 *)(param_2 + 0x420) = uVar2;
  return;
}


