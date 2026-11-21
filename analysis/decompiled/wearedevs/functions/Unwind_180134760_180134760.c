/* Unwind@180134760 @ 180134760 */

void Unwind_180134760(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  puVar1 = *(undefined8 **)(param_2 + 0x1a0);
  puVar1[2] = *(undefined8 *)(param_2 + 0x30);
  puVar1[3] = uVar4;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(undefined1 *)(param_2 + 0x1af) = 0;
  return;
}


