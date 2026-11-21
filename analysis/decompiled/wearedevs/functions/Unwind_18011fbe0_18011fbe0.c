/* Unwind@18011fbe0 @ 18011fbe0 */

void Unwind_18011fbe0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x1d32);
  uVar2 = *(undefined1 *)(param_2 + 0x1d33);
  if (*(char *)(param_2 + 0x1d31) == '\0') {
    *(undefined1 *)(param_2 + 0x1d2e) = uVar2;
    *(undefined1 *)(param_2 + 0x1d2d) = 0;
    *(undefined1 *)(param_2 + 0x1d2c) = uVar1;
    return;
  }
  FUN_18000b400(*(undefined8 *)(param_2 + 0x1bc0));
  *(undefined1 *)(param_2 + 0x1d2e) = uVar2;
  *(undefined1 *)(param_2 + 0x1d2d) = 1;
  *(undefined1 *)(param_2 + 0x1d2c) = uVar1;
  return;
}


