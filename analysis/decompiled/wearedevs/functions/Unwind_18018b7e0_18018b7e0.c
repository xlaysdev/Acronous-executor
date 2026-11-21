/* Unwind@18018b7e0 @ 18018b7e0 */

void Unwind_18018b7e0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x88);
  *(undefined8 *)(lVar1 + 0xd8) = 1;
  *(undefined8 *)(lVar1 + 0xe0) = *(undefined8 *)(param_2 + 0x90);
  puVar2 = *(undefined8 **)(param_2 + 0x98);
  puVar2[2] = *(undefined8 *)(param_2 + 0x40);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  *puVar2 = *(undefined8 *)(param_2 + 0x30);
  puVar2[1] = uVar3;
  return;
}


