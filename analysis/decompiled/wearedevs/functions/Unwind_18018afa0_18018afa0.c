/* Unwind@18018afa0 @ 18018afa0 */

void Unwind_18018afa0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x78);
  *(undefined8 *)(lVar1 + 0xa0) = 2;
  *(undefined8 *)(lVar1 + 0xa8) = *(undefined8 *)(param_2 + 0x80);
  puVar2 = *(undefined8 **)(param_2 + 0x88);
  puVar2[2] = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  *puVar2 = *(undefined8 *)(param_2 + 0x40);
  puVar2[1] = uVar3;
  return;
}


