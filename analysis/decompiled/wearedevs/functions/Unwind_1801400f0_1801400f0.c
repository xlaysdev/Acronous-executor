/* Unwind@1801400f0 @ 1801400f0 */

void Unwind_1801400f0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_2 + 0x5a0);
  *puVar1 = 0;
  memcpy(puVar1 + 1,(void *)(param_2 + 0x2e0),0x120);
  uVar2 = *(undefined8 *)(param_2 + 0x4c8);
  uVar3 = *(undefined8 *)(param_2 + 0x4d0);
  uVar4 = *(undefined8 *)(param_2 + 0x4d8);
  puVar1[0x25] = *(undefined8 *)(param_2 + 0x4c0);
  puVar1[0x26] = uVar2;
  puVar1[0x27] = uVar3;
  puVar1[0x28] = uVar4;
  puVar1[0x29] = 0;
  *(undefined1 *)(param_2 + 0x505) = 0;
  return;
}


