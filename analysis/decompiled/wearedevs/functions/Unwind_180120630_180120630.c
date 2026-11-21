/* Unwind@180120630 @ 180120630 */

void Unwind_180120630(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x1d27);
  if ((*(byte *)(param_2 + 0x1d28) & 1) == 0) {
    *(undefined1 *)(param_2 + 0x1d0c) = uVar1;
    return;
  }
  FUN_18000b470(param_2 + 0x1ad0);
  *(undefined1 *)(param_2 + 0x1d0c) = uVar1;
  return;
}


