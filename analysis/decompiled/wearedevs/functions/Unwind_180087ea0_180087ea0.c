/* Unwind@180087ea0 @ 180087ea0 */

void Unwind_180087ea0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_2 + 0x68);
  puVar1[4] = *(undefined8 *)(param_2 + 0x90);
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  uVar4 = *(undefined8 *)(param_2 + 0x88);
  puVar1[2] = *(undefined8 *)(param_2 + 0x80);
  puVar1[3] = uVar4;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(undefined1 *)(param_2 + 0xad) = 0;
  return;
}


