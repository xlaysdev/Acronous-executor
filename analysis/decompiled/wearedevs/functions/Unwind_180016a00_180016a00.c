/* Unwind@180016a00 @ 180016a00 */

void Unwind_180016a00(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x418);
  uVar2 = *(undefined8 *)(param_2 + 0x138);
  uVar3 = *(undefined8 *)(param_2 + 0x140);
  FUN_180018400(*(undefined8 *)(param_2 + 0x410));
  *(undefined8 *)(param_2 + 0x6f8) = uVar3;
  *(undefined8 *)(param_2 + 0x6f0) = uVar2;
  *(undefined8 *)(param_2 + 0x6e8) = uVar1;
  return;
}


