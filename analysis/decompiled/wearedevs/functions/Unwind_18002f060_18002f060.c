/* Unwind@18002f060 @ 18002f060 */

void Unwind_18002f060(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  uVar4 = *(undefined8 *)(param_2 + 0x88);
  puVar1 = *(undefined8 **)(param_2 + 0xb8);
  puVar1[2] = *(undefined8 *)(param_2 + 0x80);
  puVar1[3] = uVar4;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  return;
}


