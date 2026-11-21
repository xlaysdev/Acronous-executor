/* Unwind@18004a8a0 @ 18004a8a0 */

void Unwind_18004a8a0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0xd87);
  uVar2 = *(undefined1 *)(param_2 + 0xd88);
  if (*(longlong *)(param_2 + 0xd78) == 0) {
    *(undefined1 *)(param_2 + 0xd8f) = uVar2;
    *(undefined1 *)(param_2 + 0xd8e) = 0;
    *(undefined1 *)(param_2 + 0xd8d) = uVar1;
    return;
  }
  FUN_1800444b0(param_2 + 0x9b8);
  *(undefined1 *)(param_2 + 0xd8f) = uVar2;
  *(undefined1 *)(param_2 + 0xd8e) = 1;
  *(undefined1 *)(param_2 + 0xd8d) = uVar1;
  return;
}


