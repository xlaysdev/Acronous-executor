/* Unwind@18014a160 @ 18014a160 */

void Unwind_18014a160(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_2 + 0x1c0);
  if (uVar1 < 6) {
    if ((0x2cUL >> (uVar1 & 0x3f) & 1) != 0) goto LAB_18014a1b9;
    if ((3UL >> (uVar1 & 0x3f) & 1) != 0) {
      *(longlong *)(param_2 + 0x328) = param_2 + 0x1d0;
    }
  }
  FUN_18014b170(*(undefined8 *)(param_2 + 0x328));
LAB_18014a1b9:
  *(undefined1 *)(param_2 + 0x36e) = 0;
  return;
}


