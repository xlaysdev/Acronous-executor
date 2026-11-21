/* Unwind@18004a940 @ 18004a940 */

void Unwind_18004a940(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0xda6);
  uVar2 = *(undefined1 *)(param_2 + 0xda8);
  if ((*(byte *)(param_2 + 0xda7) & 1) == 0) {
    *(undefined1 *)(param_2 + 0xd8c) = uVar2;
    *(undefined1 *)(param_2 + 0xd8b) = uVar1;
    return;
  }
  FUN_180044390(param_2 + 0x9d0);
  *(undefined1 *)(param_2 + 0xd8c) = uVar2;
  *(undefined1 *)(param_2 + 0xd8b) = uVar1;
  return;
}


