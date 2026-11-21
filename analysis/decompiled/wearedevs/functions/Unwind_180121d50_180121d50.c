/* Unwind@180121d50 @ 180121d50 */

void Unwind_180121d50(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x38) = 1;
  puVar1 = *(undefined8 **)(param_2 + 0x48);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  uVar7 = puVar1[5];
  puVar2 = *(undefined8 **)(param_2 + 0x28);
  puVar2[4] = puVar1[4];
  puVar2[5] = uVar7;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  return;
}


