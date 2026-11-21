/* Unwind@180090030 @ 180090030 */

void Unwind_180090030(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = *(undefined8 **)(param_2 + 0x130);
  uVar2 = puVar1[0xb];
  *(undefined8 *)(param_2 + 0xe0) = puVar1[10];
  *(undefined8 *)(param_2 + 0xe8) = uVar2;
  uVar2 = puVar1[9];
  *(undefined8 *)(param_2 + 0xd0) = puVar1[8];
  *(undefined8 *)(param_2 + 0xd8) = uVar2;
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  uVar6 = puVar1[4];
  uVar7 = puVar1[5];
  uVar8 = puVar1[7];
  *(undefined8 *)(param_2 + 0xc0) = puVar1[6];
  *(undefined8 *)(param_2 + 200) = uVar8;
  *(undefined8 *)(param_2 + 0xb0) = uVar6;
  *(undefined8 *)(param_2 + 0xb8) = uVar7;
  *(undefined8 *)(param_2 + 0xa0) = uVar4;
  *(undefined8 *)(param_2 + 0xa8) = uVar5;
  *(undefined8 *)(param_2 + 0x90) = uVar2;
  *(undefined8 *)(param_2 + 0x98) = uVar3;
  *(undefined1 *)(param_2 + 0x145) = 1;
  return;
}


