/* Unwind@180136e70 @ 180136e70 */

void Unwind_180136e70(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  puVar1 = *(undefined8 **)(param_2 + 0x80);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  uVar2 = *(undefined8 *)(param_2 + 0x88);
  puVar1[2] = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x90);
  puVar1[3] = uVar3;
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined8 *)(param_2 + 0x70) = uVar3;
  *(undefined8 *)(param_2 + 0x68) = uVar2;
  *(undefined8 *)(param_2 + 0x60) = uVar5;
  *(undefined8 *)(param_2 + 0x58) = uVar4;
  *(undefined1 *)(param_2 + 0xa7) = 0;
  return;
}


