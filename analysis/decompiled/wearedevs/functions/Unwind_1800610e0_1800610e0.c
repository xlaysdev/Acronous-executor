/* Unwind@1800610e0 @ 1800610e0 */

void Unwind_1800610e0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_2 + 0x610);
  puVar1[4] = *(undefined8 *)(param_2 + 0x690);
  uVar2 = *(undefined8 *)(param_2 + 0x670);
  uVar3 = *(undefined8 *)(param_2 + 0x678);
  uVar4 = *(undefined8 *)(param_2 + 0x688);
  puVar1[2] = *(undefined8 *)(param_2 + 0x680);
  puVar1[3] = uVar4;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(undefined1 *)(param_2 + 0x8d7) = 0;
  return;
}


