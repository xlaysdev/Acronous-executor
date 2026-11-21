/* Unwind@18009b7a0 @ 18009b7a0 */

void Unwind_18009b7a0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x60) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x58) = uVar2;
  FUN_180097000(*(undefined8 *)(param_2 + 0x28));
  *(undefined8 *)(param_2 + 0x60) = uVar1;
  *(undefined8 *)(param_2 + 0x58) = uVar2;
  return;
}


