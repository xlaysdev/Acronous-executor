/* Unwind@180120540 @ 180120540 */

void Unwind_180120540(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x1d2c);
  uVar2 = *(undefined1 *)(param_2 + 0x1d2d);
  if (*(int *)(param_2 + 0x1b40) == 3) {
    *(undefined1 *)(param_2 + 0x1d28) = uVar2;
    *(undefined1 *)(param_2 + 0x1d27) = uVar1;
    return;
  }
  if ((*(byte *)(param_2 + 0x1d2e) & 1) == 0) {
    *(undefined1 *)(param_2 + 0x1d28) = uVar2;
    *(undefined1 *)(param_2 + 0x1d27) = uVar1;
    return;
  }
  FUN_18011b5a0(param_2 + 0x1b40);
  *(undefined1 *)(param_2 + 0x1d28) = uVar2;
  *(undefined1 *)(param_2 + 0x1d27) = uVar1;
  return;
}


