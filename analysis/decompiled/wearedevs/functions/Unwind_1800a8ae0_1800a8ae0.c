/* Unwind@1800a8ae0 @ 1800a8ae0 */

void Unwind_1800a8ae0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  **(undefined8 **)(param_2 + 0x4d0) = 1;
  uVar2 = *(undefined8 *)(param_2 + 0xf0);
  uVar3 = *(undefined8 *)(param_2 + 0xf8);
  uVar4 = *(undefined8 *)(param_2 + 0x108);
  puVar1 = *(undefined8 **)(param_2 + 0x4b8);
  puVar1[2] = *(undefined8 *)(param_2 + 0x100);
  puVar1[3] = uVar4;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(undefined1 *)(param_2 + 0x4fe) = 0;
  *(undefined1 *)(param_2 + 0x4fd) = 1;
  return;
}


