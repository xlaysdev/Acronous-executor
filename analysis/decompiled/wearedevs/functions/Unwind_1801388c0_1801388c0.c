/* Unwind@1801388c0 @ 1801388c0 */

void Unwind_1801388c0(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = *(undefined4 **)(param_2 + 0xb8);
  *puVar1 = 1;
  uVar2 = *(undefined8 *)(param_2 + 100);
  uVar3 = *(undefined8 *)(param_2 + 0x6c);
  uVar4 = *(undefined8 *)(param_2 + 0x74);
  uVar5 = *(undefined8 *)(param_2 + 0x78);
  uVar6 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(puVar1 + 1) = *(undefined8 *)(param_2 + 0x5c);
  *(undefined8 *)(puVar1 + 3) = uVar2;
  *(undefined8 *)(puVar1 + 5) = uVar3;
  *(undefined8 *)(puVar1 + 7) = uVar4;
  *(undefined8 *)(puVar1 + 8) = uVar5;
  *(undefined8 *)(puVar1 + 10) = uVar6;
  return;
}


