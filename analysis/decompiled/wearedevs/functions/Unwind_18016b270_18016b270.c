/* Unwind@18016b270 @ 18016b270 */

void Unwind_18016b270(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  uVar4 = *(undefined8 *)(param_2 + 0x80);
  uVar5 = *(undefined8 *)(param_2 + 0x88);
  uVar6 = *(undefined8 *)(param_2 + 0x90);
  uVar7 = *(undefined8 *)(param_2 + 0x98);
  uVar8 = *(undefined8 *)(param_2 + 0xa8);
  puVar1 = *(undefined8 **)(param_2 + 200);
  puVar1[6] = *(undefined8 *)(param_2 + 0xa0);
  puVar1[7] = uVar8;
  puVar1[4] = uVar6;
  puVar1[5] = uVar7;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(undefined8 **)(param_2 + 0xd0) = puVar1;
  *(undefined1 *)(param_2 + 0xdf) = 0;
  *(undefined1 *)(param_2 + 0xde) = 1;
  return;
}


