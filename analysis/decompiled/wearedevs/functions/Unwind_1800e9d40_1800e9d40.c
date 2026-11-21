/* Unwind@1800e9d40 @ 1800e9d40 */

void Unwind_1800e9d40(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x560);
  uVar2 = *(undefined8 *)(param_2 + 0x568);
  uVar3 = *(undefined8 *)(param_2 + 0x570);
  FUN_180042ef0(*(longlong *)(param_2 + 0x600) + 0xad8);
  *(undefined8 *)(param_2 + 0x548) = uVar3;
  *(undefined8 *)(param_2 + 0x540) = uVar2;
  *(undefined8 *)(param_2 + 0x538) = uVar1;
  return;
}


