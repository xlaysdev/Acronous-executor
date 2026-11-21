/* Unwind@1800f4bf0 @ 1800f4bf0 */

void Unwind_1800f4bf0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x12d0);
  uVar2 = *(undefined8 *)(param_2 + 0x12d8);
  FUN_1800ef720(*(undefined8 *)(param_2 + 0x12c8));
  *(undefined8 *)(param_2 + 0x12b8) = uVar2;
  *(undefined8 *)(param_2 + 0x12b0) = uVar1;
  return;
}


