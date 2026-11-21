/* Unwind@1800bf610 @ 1800bf610 */

void Unwind_1800bf610(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xa8);
  if (*(int *)(param_2 + 0x70) == 0) {
    uVar1 = 0;
  }
  FUN_18002ce10(uVar1);
  *(undefined1 *)(param_2 + 0x1b7) = 0;
  return;
}


