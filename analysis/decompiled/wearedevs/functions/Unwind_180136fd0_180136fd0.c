/* Unwind@180136fd0 @ 180136fd0 */

void Unwind_180136fd0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = *(undefined8 **)(param_2 + 0x58);
  puVar2 = *(undefined8 **)(param_2 + 0x50);
  puVar2[4] = puVar1[4];
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[3];
  puVar2[2] = puVar1[2];
  puVar2[3] = uVar5;
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  *(undefined1 *)(param_2 + 0x67) = 0;
  return;
}


