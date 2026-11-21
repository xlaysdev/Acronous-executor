/* FUN_1800a6620 @ 1800a6620 */

void FUN_1800a6620(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x30);
  if ((uVar1 & 1) != 0) {
    FUN_180177590(param_1 + 0x20);
  }
  if ((uVar1 & 8) != 0) {
    FUN_180177590(param_1 + 0x10);
  }
  if (*(int *)(param_1 + 0x38) == 5) {
    return;
  }
  FUN_1800a62b0(param_1 + 0x38);
  return;
}


