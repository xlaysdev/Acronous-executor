/* Unwind@18018a4c0 @ 18018a4c0 */

void Unwind_18018a4c0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x68);
  *(undefined8 *)(lVar1 + 0x10) = 3;
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  *(undefined1 *)(param_2 + 0x76) = 1;
  *(undefined8 *)(param_2 + 0x58) = uVar2;
  *(undefined1 *)(param_2 + 0x75) = 0;
  *(undefined1 *)(param_2 + 0x74) = 1;
  return;
}


