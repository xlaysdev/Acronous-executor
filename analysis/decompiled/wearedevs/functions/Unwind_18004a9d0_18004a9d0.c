/* Unwind@18004a9d0 @ 18004a9d0 */

void Unwind_18004a9d0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0xd82);
  if ((*(byte *)(param_2 + 0xd83) & 1) == 0) {
    *(undefined1 *)(param_2 + 0xd8a) = uVar1;
    return;
  }
  FUN_1800a0a80(param_2 + 0xaa8);
  *(undefined1 *)(param_2 + 0xd8a) = uVar1;
  return;
}


