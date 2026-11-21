/* Unwind@1800d6610 @ 1800d6610 */

void Unwind_1800d6610(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x7e0);
  puVar2 = *(undefined1 **)(param_2 + 0x7e8);
  *(undefined8 *)(param_2 + 0x7f0) = uVar1;
  FUN_1800e3610(*(undefined8 *)(param_2 + 0x7d8));
  *puVar2 = 2;
  *(undefined8 *)(param_2 + 0x7f0) = uVar1;
  return;
}


