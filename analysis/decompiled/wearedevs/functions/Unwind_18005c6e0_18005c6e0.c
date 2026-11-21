/* Unwind@18005c6e0 @ 18005c6e0 */

void Unwind_18005c6e0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = *(undefined8 **)(param_2 + 0x390);
  puVar1[8] = *(undefined8 *)(param_2 + 0x380);
  uVar2 = *(undefined8 *)(param_2 + 0x340);
  uVar3 = *(undefined8 *)(param_2 + 0x348);
  uVar4 = *(undefined8 *)(param_2 + 0x350);
  uVar5 = *(undefined8 *)(param_2 + 0x358);
  uVar6 = *(undefined8 *)(param_2 + 0x360);
  uVar7 = *(undefined8 *)(param_2 + 0x368);
  uVar8 = *(undefined8 *)(param_2 + 0x378);
  puVar1[6] = *(undefined8 *)(param_2 + 0x370);
  puVar1[7] = uVar8;
  puVar1[4] = uVar6;
  puVar1[5] = uVar7;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(undefined1 *)(param_2 + 0x39f) = 0;
  return;
}


