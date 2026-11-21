/* Unwind@18011a530 @ 18011a530 */

void Unwind_18011a530(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_2 + 0xa8);
  puVar1[4] = *(undefined8 *)(param_2 + 0xa0);
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  uVar3 = *(undefined8 *)(param_2 + 0x88);
  uVar4 = *(undefined8 *)(param_2 + 0x98);
  puVar1[2] = *(undefined8 *)(param_2 + 0x90);
  puVar1[3] = uVar4;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(undefined1 *)(param_2 + 0xd7) = 0;
  return;
}


