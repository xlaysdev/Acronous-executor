/* FUN_180121670 @ 180121670 */

void FUN_180121670(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x30);
  if ((uVar1 & 1) != 0) {
    FUN_180177590(param_1 + 0x20);
  }
  if ((uVar1 & 8) != 0) {
    FUN_180177590(param_1 + 0x10);
  }
  if (*(longlong *)(param_1 + 0x38) == 0) {
    return;
  }
  FUN_180121830(param_1 + 0x40);
  return;
}


