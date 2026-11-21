/* Unwind@1800883a0 @ 1800883a0 */

void Unwind_1800883a0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_2 + 0x50);
  puVar1[4] = *(undefined8 *)(param_2 + 0x80);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  uVar4 = *(undefined8 *)(param_2 + 0x78);
  puVar1[2] = *(undefined8 *)(param_2 + 0x70);
  puVar1[3] = uVar4;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(undefined1 *)(param_2 + 0xbf) = 0;
  return;
}


