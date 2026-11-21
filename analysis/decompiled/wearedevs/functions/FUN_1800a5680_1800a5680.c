/* FUN_1800a5680 @ 1800a5680 */

void FUN_1800a5680(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x30);
  if ((uVar1 & 1) != 0) {
    FUN_180177590(param_1 + 0x20);
  }
  if ((uVar1 & 8) != 0) {
    FUN_180177590(param_1 + 0x10);
  }
  FUN_18003c2f0(*(undefined8 *)(param_1 + 0x38));
  return;
}


