/* Unwind@180104010 @ 180104010 */

void Unwind_180104010(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = *(undefined8 **)(param_2 + 0x170);
  puVar1[10] = *(undefined8 *)(param_2 + 0x140);
  uVar2 = *(undefined8 *)(param_2 + 0x138);
  puVar1[8] = *(undefined8 *)(param_2 + 0x130);
  puVar1[9] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0xf0);
  uVar3 = *(undefined8 *)(param_2 + 0xf8);
  uVar4 = *(undefined8 *)(param_2 + 0x100);
  uVar5 = *(undefined8 *)(param_2 + 0x108);
  uVar6 = *(undefined8 *)(param_2 + 0x110);
  uVar7 = *(undefined8 *)(param_2 + 0x118);
  uVar8 = *(undefined8 *)(param_2 + 0x128);
  puVar1[6] = *(undefined8 *)(param_2 + 0x120);
  puVar1[7] = uVar8;
  puVar1[4] = uVar6;
  puVar1[5] = uVar7;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  return;
}


