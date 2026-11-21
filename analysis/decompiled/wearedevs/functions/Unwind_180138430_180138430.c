/* Unwind@180138430 @ 180138430 */

void Unwind_180138430(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = *(undefined4 **)(param_2 + 0x90);
  *puVar1 = 1;
  uVar2 = *(undefined8 *)(param_2 + 0x4c);
  uVar3 = *(undefined8 *)(param_2 + 0x54);
  uVar4 = *(undefined8 *)(param_2 + 0x5c);
  uVar5 = *(undefined8 *)(param_2 + 0x60);
  uVar6 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(puVar1 + 1) = *(undefined8 *)(param_2 + 0x44);
  *(undefined8 *)(puVar1 + 3) = uVar2;
  *(undefined8 *)(puVar1 + 5) = uVar3;
  *(undefined8 *)(puVar1 + 7) = uVar4;
  *(undefined8 *)(puVar1 + 8) = uVar5;
  *(undefined8 *)(puVar1 + 10) = uVar6;
  return;
}


