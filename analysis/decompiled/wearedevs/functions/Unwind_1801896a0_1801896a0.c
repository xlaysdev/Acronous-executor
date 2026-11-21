/* Unwind@1801896a0 @ 1801896a0 */

void Unwind_1801896a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_2 + 0xd8);
  *(undefined8 *)(lVar1 + 0xa0) = 1;
  *(undefined8 *)(lVar1 + 0xa8) = *(undefined8 *)(param_2 + 0x80);
  puVar2 = *(undefined8 **)(param_2 + 200);
  puVar2[2] = *(undefined8 *)(param_2 + 0x70);
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  *puVar2 = *(undefined8 *)(param_2 + 0x60);
  puVar2[1] = uVar3;
  return;
}


