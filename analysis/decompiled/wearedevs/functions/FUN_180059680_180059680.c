/* FUN_180059680 @ 180059680 */

undefined8 FUN_180059680(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong local_28;
  
  if (*(longlong *)(param_1 + 0x138) == 4) {
    return 1;
  }
  if ((*(longlong *)(param_1 + 0x138) == 0) &&
     (*(longlong *)(param_1 + 0x1a0) == -0x7ffffffffffffffe)) {
    if (*(longlong *)(param_1 + 0x98) == 0) {
      uVar1 = FUN_18006a180();
      if (uVar1 == 2) {
        return 1;
      }
      if ((uVar1 & 1) != 0) {
        FUN_1801146e0(param_1 + 0xb8);
        local_28 = param_2;
        goto LAB_180059744;
      }
      if (param_2 == 0) {
        if (*(char *)(param_1 + 0x1fd) != '\0') {
          FUN_180115760();
        }
        FUN_180114360(param_1 + 0xb8);
        return 0;
      }
    }
    FUN_180115820();
  }
  else {
    if (*(char *)(param_1 + 0x1f0) != '\0') {
      return 1;
    }
    if (*(longlong *)(param_1 + 0x98) != 0) {
      return 1;
    }
    uVar1 = FUN_18006a180();
    if (uVar1 == 2) {
      return 1;
    }
    if ((uVar1 & 1) != 0) {
      FUN_1801146e0();
      local_28 = param_2;
LAB_180059744:
      FUN_180115d60(local_28);
      return 0;
    }
    if (param_2 != 0) {
      return 0;
    }
    FUN_180114360(param_1 + 0xb8,0);
    FUN_180115760();
  }
  return 0;
}


