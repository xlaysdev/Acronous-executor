/* Unwind@18018a3e0 @ 18018a3e0 */

void Unwind_18018a3e0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x68);
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_2 + 0x40);
  *(undefined1 *)(param_2 + 0x76) = 0;
  *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x60);
  *(undefined1 *)(param_2 + 0x75) = 1;
  *(undefined1 *)(param_2 + 0x74) = 0;
  return;
}


