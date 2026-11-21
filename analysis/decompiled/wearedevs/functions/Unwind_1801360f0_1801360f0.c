/* Unwind@1801360f0 @ 1801360f0 */

void Unwind_1801360f0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  puVar1 = *(undefined8 **)(param_2 + 400);
  puVar1[2] = *(undefined8 *)(param_2 + 0x30);
  puVar1[3] = uVar4;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(undefined1 *)(param_2 + 0x19f) = 0;
  return;
}


