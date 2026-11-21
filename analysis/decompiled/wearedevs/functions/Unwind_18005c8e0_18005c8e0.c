/* Unwind@18005c8e0 @ 18005c8e0 */

void Unwind_18005c8e0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x390);
  *(undefined8 *)(lVar1 + 0xe0) = 3;
  uVar2 = *(undefined8 *)(param_2 + 0x348);
  uVar3 = *(undefined8 *)(param_2 + 0x350);
  uVar4 = *(undefined8 *)(param_2 + 0x358);
  *(undefined8 *)(lVar1 + 0xe8) = *(undefined8 *)(param_2 + 0x340);
  *(undefined8 *)(lVar1 + 0xf0) = uVar2;
  *(undefined8 *)(lVar1 + 0xf8) = uVar3;
  *(undefined8 *)(lVar1 + 0x100) = uVar4;
  *(undefined8 *)(lVar1 + 0x108) = *(undefined8 *)(param_2 + 0x360);
  *(undefined1 *)(param_2 + 0x3a7) = 1;
  *(undefined1 *)(param_2 + 0x3a6) = 0;
  *(undefined1 *)(param_2 + 0x3a5) = 1;
  *(undefined1 *)(param_2 + 0x3a4) = 1;
  return;
}


