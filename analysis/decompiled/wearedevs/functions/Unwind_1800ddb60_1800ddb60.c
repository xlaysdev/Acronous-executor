/* Unwind@1800ddb60 @ 1800ddb60 */

void Unwind_1800ddb60(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x1918);
  uVar2 = *(undefined8 *)(param_2 + 0x1920);
  uVar3 = *(undefined8 *)(param_2 + 0x1928);
  FUN_18007c8d0(*(longlong *)(param_2 + 0x19a8) + 0x890);
  *(undefined8 *)(param_2 + 0x18a8) = uVar3;
  *(undefined8 *)(param_2 + 0x18a0) = uVar2;
  *(undefined8 *)(param_2 + 0x1898) = uVar1;
  return;
}


