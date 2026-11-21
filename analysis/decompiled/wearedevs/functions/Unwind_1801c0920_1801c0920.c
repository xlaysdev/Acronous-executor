/* Unwind@1801c0920 @ 1801c0920 */

void Unwind_1801c0920(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_2 + 0x90);
  *puVar1 = *(undefined8 *)(param_2 + 0x70);
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  puVar1[1] = *(undefined8 *)(param_2 + 0x60);
  puVar1[2] = uVar2;
  puVar1[3] = *(undefined8 *)(param_2 + 0x58);
  return;
}


