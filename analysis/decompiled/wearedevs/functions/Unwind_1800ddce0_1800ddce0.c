/* Unwind@1800ddce0 @ 1800ddce0 */

void Unwind_1800ddce0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x1960);
  if (*(char *)(*(longlong *)(param_2 + 0x19a8) + 0x84a) == '\0') {
    *(undefined8 *)(param_2 + 0x18b0) = uVar1;
    return;
  }
  FUN_1800e1260(*(longlong *)(param_2 + 0x19a8) + 0x850);
  *(undefined8 *)(param_2 + 0x18b0) = uVar1;
  return;
}


