/* Unwind@1800a8c00 @ 1800a8c00 */

void Unwind_1800a8c00(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = *(undefined4 **)(param_2 + 0x4c8);
  *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_2 + 0x480);
  uVar2 = *(undefined4 *)(param_2 + 0x474);
  uVar3 = *(undefined4 *)(param_2 + 0x478);
  uVar4 = *(undefined4 *)(param_2 + 0x47c);
  *puVar1 = *(undefined4 *)(param_2 + 0x470);
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  FUN_1800a73f0(param_2 + 0x110);
  FUN_18000b7c0(param_2 + 0x450);
  *(undefined1 *)(param_2 + 0x4ef) = 0;
  return;
}


