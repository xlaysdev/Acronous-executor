/* Unwind@18001e630 @ 18001e630 */

void Unwind_18001e630(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 0x460);
  uVar3 = *(undefined8 *)(param_2 + 0x468);
  uVar4 = *(undefined8 *)(param_2 + 0x478);
  puVar1 = *(undefined8 **)(param_2 + 0x768);
  puVar1[2] = *(undefined8 *)(param_2 + 0x470);
  puVar1[3] = uVar4;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(undefined1 *)(param_2 + 0x747) = 0;
  return;
}


