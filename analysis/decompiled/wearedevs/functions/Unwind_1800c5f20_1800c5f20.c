/* Unwind@1800c5f20 @ 1800c5f20 */

void Unwind_1800c5f20(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x5b8);
  if (*(char *)(*(longlong *)(param_2 + 0x630) + 0x37d) == '\0') {
    *(undefined8 *)(param_2 + 0x5f8) = uVar1;
    return;
  }
  FUN_1800c7250(*(longlong *)(param_2 + 0x630) + 0x228);
  *(undefined8 *)(param_2 + 0x5f8) = uVar1;
  return;
}


