/* Unwind@1800c0d40 @ 1800c0d40 */

void Unwind_1800c0d40(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xb8);
  if (*(int *)(param_2 + 0x78) == 0) {
    uVar1 = 0;
  }
  FUN_18002ce10(uVar1);
  *(undefined1 *)(param_2 + 0x1c7) = 0;
  return;
}


