/* Unwind@18018a7a0 @ 18018a7a0 */

void Unwind_18018a7a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_2 + 0xb0);
  *(undefined8 *)(lVar1 + 0x38) = 2;
  *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(param_2 + 0x30);
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  uVar3 = puVar2[1];
  *(undefined8 *)(lVar1 + 0x48) = *puVar2;
  *(undefined8 *)(lVar1 + 0x50) = uVar3;
  *(undefined8 *)(lVar1 + 0x58) = puVar2[2];
  *(undefined1 *)(param_2 + 0x47) = 0;
  return;
}


