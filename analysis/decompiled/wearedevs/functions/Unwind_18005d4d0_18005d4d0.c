/* Unwind@18005d4d0 @ 18005d4d0 */

void Unwind_18005d4d0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *(longlong *)(param_2 + 0x78);
  *(undefined8 *)(lVar1 + 0x98) = *(undefined8 *)(param_2 + 0xd8);
  puVar2 = *(undefined8 **)(param_2 + 0xd0);
  puVar3 = *(undefined8 **)(param_2 + 0x28);
  puVar3[4] = puVar2[4];
  uVar4 = *puVar2;
  uVar5 = puVar2[1];
  uVar6 = puVar2[3];
  puVar3[2] = puVar2[2];
  puVar3[3] = uVar6;
  *puVar3 = uVar4;
  puVar3[1] = uVar5;
  puVar2 = *(undefined8 **)(param_2 + 0x60);
  *(undefined8 *)(lVar1 + 0xd8) = puVar2[2];
  uVar4 = puVar2[1];
  *(undefined8 *)(lVar1 + 200) = *puVar2;
  *(undefined8 *)(lVar1 + 0xd0) = uVar4;
  return;
}


