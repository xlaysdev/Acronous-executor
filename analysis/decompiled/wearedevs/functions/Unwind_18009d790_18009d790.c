/* Unwind@18009d790 @ 18009d790 */

void Unwind_18009d790(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = *(undefined8 **)(param_2 + 0x600);
  *puVar1 = *(undefined8 *)(param_2 + 0x5d8);
  puVar1[1] = *(undefined8 *)(param_2 + 0x5f0);
  puVar2 = *(undefined8 **)(param_2 + 0x608);
  *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(param_2 + 0x5d0);
  uVar3 = *(undefined8 *)(param_2 + 0x5b0);
  uVar4 = *(undefined8 *)(param_2 + 0x5b8);
  uVar5 = *(undefined8 *)(param_2 + 0x5c8);
  puVar2[2] = *(undefined8 *)(param_2 + 0x5c0);
  puVar2[3] = uVar5;
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  *(undefined1 *)((longlong)puVar1 + 0x31) = *(undefined1 *)(param_2 + 0x61f);
  *(undefined4 *)((longlong)puVar1 + 0x32) = *(undefined4 *)(param_2 + 0x614);
  *(undefined2 *)((longlong)puVar1 + 0x36) = *(undefined2 *)(param_2 + 0x618);
  *(char *)(puVar1 + 7) = (char)*(undefined8 *)(param_2 + 0x5e8);
  uVar3 = *(undefined8 *)(param_2 + 0x578);
  uVar4 = *(undefined8 *)(param_2 + 0x580);
  uVar5 = *(undefined8 *)(param_2 + 0x588);
  uVar6 = *(undefined8 *)(param_2 + 0x590);
  uVar7 = *(undefined8 *)(param_2 + 0x598);
  *(undefined8 *)((longlong)puVar1 + 0x39) = *(undefined8 *)(param_2 + 0x570);
  *(undefined8 *)((longlong)puVar1 + 0x41) = uVar3;
  *(undefined8 *)((longlong)puVar1 + 0x49) = uVar4;
  *(undefined8 *)((longlong)puVar1 + 0x51) = uVar5;
  *(undefined8 *)((longlong)puVar1 + 0x59) = uVar6;
  *(undefined8 *)((longlong)puVar1 + 0x61) = uVar7;
  uVar3 = *(undefined8 *)(param_2 + 0x5a7);
  puVar1[0xd] = *(undefined8 *)(param_2 + 0x59f);
  puVar1[0xe] = uVar3;
  *(undefined1 *)(puVar1 + 0xf) = *(undefined1 *)(param_2 + 0x61d);
  memcpy((void *)((longlong)puVar1 + 0x79),(void *)(param_2 + 0x200),0xb7);
  uVar3 = *(undefined8 *)(param_2 + 0x568);
  puVar1[0x26] = *(undefined8 *)(param_2 + 0x560);
  puVar1[0x27] = uVar3;
  puVar1[0x28] = *(undefined8 *)(param_2 + 0x5e0);
  *(undefined1 *)(puVar1 + 0x29) = *(undefined1 *)(param_2 + 0x61e);
  memcpy((void *)((longlong)puVar1 + 0x149),(void *)(param_2 + 0x110),0xef);
  return;
}


