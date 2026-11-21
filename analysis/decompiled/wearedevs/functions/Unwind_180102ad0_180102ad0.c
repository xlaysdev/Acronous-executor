/* Unwind@180102ad0 @ 180102ad0 */

void Unwind_180102ad0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_2 + 0x80);
  puVar1[4] = *(undefined8 *)(param_2 + 0x70);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  puVar1[2] = *(undefined8 *)(param_2 + 0x60);
  puVar1[3] = uVar4;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  return;
}


