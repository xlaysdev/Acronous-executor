/* Unwind@180103720 @ 180103720 */

void Unwind_180103720(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined1 **)(param_2 + 0x138);
  *puVar1 = (char)*(undefined4 *)(param_2 + 0x160);
  uVar2 = *(undefined8 *)(param_2 + 0x147);
  *(undefined8 *)(puVar1 + 1) = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(puVar1 + 8) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(puVar1 + 0x18) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x118);
  *(undefined8 *)(puVar1 + 0x20) = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(puVar1 + 0x28) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(puVar1 + 0x30) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(puVar1 + 0x38) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(puVar1 + 0x40) = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(puVar1 + 0x48) = uVar2;
  *(undefined2 *)(puVar1 + 0x50) = *(undefined2 *)(param_2 + 0x164);
  *(undefined4 *)(puVar1 + 0x52) = *(undefined4 *)(param_2 + 0x158);
  *(undefined2 *)(puVar1 + 0x56) = *(undefined2 *)(param_2 + 0x15c);
  return;
}


