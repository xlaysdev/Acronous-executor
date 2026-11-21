/* Unwind@180135030 @ 180135030 */

void Unwind_180135030(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  puVar1 = *(undefined8 **)(param_2 + 0x48);
  puVar1[2] = *(undefined8 *)(param_2 + 0x38);
  puVar1[3] = uVar4;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  return;
}


