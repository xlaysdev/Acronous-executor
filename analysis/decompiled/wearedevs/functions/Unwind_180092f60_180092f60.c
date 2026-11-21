/* Unwind@180092f60 @ 180092f60 */

void Unwind_180092f60(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar2 = *(undefined4 *)(param_2 + 0x50);
  uVar3 = *(undefined4 *)(param_2 + 0x54);
  uVar4 = *(undefined4 *)(param_2 + 0x58);
  uVar5 = *(undefined4 *)(param_2 + 0x5c);
  uVar6 = *(undefined4 *)(param_2 + 100);
  uVar7 = *(undefined4 *)(param_2 + 0x68);
  uVar8 = *(undefined4 *)(param_2 + 0x6c);
  puVar1 = *(undefined4 **)(param_2 + 0x90);
  puVar1[4] = *(undefined4 *)(param_2 + 0x60);
  puVar1[5] = uVar6;
  puVar1[6] = uVar7;
  puVar1[7] = uVar8;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  FUN_1801783b0(param_2 + 0x70);
  *(undefined1 *)(param_2 + 0x9f) = 0;
  return;
}


