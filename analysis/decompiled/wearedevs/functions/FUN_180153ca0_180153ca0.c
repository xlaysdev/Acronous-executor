/* FUN_180153ca0 @ 180153ca0 */

undefined8 FUN_180153ca0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  if (param_2 < 0x100) {
    if (*(ulonglong *)(param_1 + 0x58) < 0x100 - param_2) {
      return 1;
    }
    *(ulonglong *)(param_1 + 0x58) = *(ulonglong *)(param_1 + 0x58) - (0x100 - param_2);
  }
  else {
    uVar1 = 0xffffffffffffffff;
    if (!CARRY8(param_2 - 0x100,*(ulonglong *)(param_1 + 0x58))) {
      uVar1 = (param_2 - 0x100) + *(ulonglong *)(param_1 + 0x58);
    }
    if (*(ulonglong *)(param_1 + 0x60) < uVar1) {
      uVar1 = *(ulonglong *)(param_1 + 0x60);
    }
    *(ulonglong *)(param_1 + 0x58) = uVar1;
  }
  return 0;
}


