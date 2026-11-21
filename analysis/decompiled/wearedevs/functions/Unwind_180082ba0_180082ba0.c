/* Unwind@180082ba0 @ 180082ba0 */

void Unwind_180082ba0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = *(undefined8 **)(param_2 + 0x7c0);
  puVar1[10] = *(undefined8 *)(param_2 + 0x570);
  uVar2 = *(undefined8 *)(param_2 + 0x568);
  puVar1[8] = *(undefined8 *)(param_2 + 0x560);
  puVar1[9] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x520);
  uVar3 = *(undefined8 *)(param_2 + 0x528);
  uVar4 = *(undefined8 *)(param_2 + 0x530);
  uVar5 = *(undefined8 *)(param_2 + 0x538);
  uVar6 = *(undefined8 *)(param_2 + 0x540);
  uVar7 = *(undefined8 *)(param_2 + 0x548);
  uVar8 = *(undefined8 *)(param_2 + 0x558);
  puVar1[6] = *(undefined8 *)(param_2 + 0x550);
  puVar1[7] = uVar8;
  puVar1[4] = uVar6;
  puVar1[5] = uVar7;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(undefined1 *)(param_2 + 0x7ce) = 1;
  *(undefined1 *)(param_2 + 0x7cd) = 1;
  return;
}


