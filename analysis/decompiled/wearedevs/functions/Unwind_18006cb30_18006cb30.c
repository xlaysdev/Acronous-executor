/* Unwind@18006cb30 @ 18006cb30 */

void Unwind_18006cb30(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = *(undefined8 *)(param_2 + 0x4c8);
  puVar1 = *(undefined8 **)(param_2 + 0x648);
  puVar1[0xc] = *(undefined8 *)(param_2 + 0x4c0);
  puVar1[0xd] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x4b8);
  puVar1[10] = *(undefined8 *)(param_2 + 0x4b0);
  puVar1[0xb] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x4a8);
  puVar1[8] = *(undefined8 *)(param_2 + 0x4a0);
  puVar1[9] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x460);
  uVar3 = *(undefined8 *)(param_2 + 0x468);
  uVar4 = *(undefined8 *)(param_2 + 0x470);
  uVar5 = *(undefined8 *)(param_2 + 0x478);
  uVar6 = *(undefined8 *)(param_2 + 0x480);
  uVar7 = *(undefined8 *)(param_2 + 0x488);
  uVar8 = *(undefined8 *)(param_2 + 0x498);
  puVar1[6] = *(undefined8 *)(param_2 + 0x490);
  puVar1[7] = uVar8;
  puVar1[4] = uVar6;
  puVar1[5] = uVar7;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(undefined1 *)(param_2 + 0x65a) = 0;
  *(undefined1 *)(param_2 + 0x659) = 0;
  return;
}


