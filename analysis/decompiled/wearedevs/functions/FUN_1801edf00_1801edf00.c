/* FUN_1801edf00 @ 1801edf00 */

void FUN_1801edf00(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if (0xf < param_3) {
    uVar1 = (param_2 + 7U & 0xfffffffffffffff8) - param_2;
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar3 = 0;
      do {
        if (*(char *)(param_2 + uVar3) == '\0') goto LAB_1801edfdb;
        uVar3 = uVar3 + 1;
      } while (uVar1 != uVar3);
      if (param_3 - 0x10 < uVar1) goto LAB_1801edfc9;
    }
    do {
      uVar3 = *(ulonglong *)(param_2 + 8 + uVar1);
      if ((~((0x101010101010100 - uVar3 | uVar3) &
            (0x101010101010100 - *(ulonglong *)(param_2 + uVar1) | *(ulonglong *)(param_2 + uVar1)))
          & 0x8080808080808080) != 0) break;
      uVar1 = uVar1 + 0x10;
    } while (uVar1 <= param_3 - 0x10);
LAB_1801edfc9:
    do {
      if (param_3 == uVar1) goto LAB_1801edfce;
      if (*(char *)(param_2 + uVar1) == '\0') {
        uVar3 = uVar1;
        goto LAB_1801edfdb;
      }
      uVar1 = uVar1 + 1;
    } while( true );
  }
  if (param_3 != 0) {
    uVar3 = 0;
    do {
      if (*(char *)(param_2 + uVar3) == '\0') goto LAB_1801edfdb;
      uVar3 = uVar3 + 1;
    } while (param_3 != uVar3);
  }
LAB_1801edfce:
  param_1[1] = 1;
  goto LAB_1801edffc;
LAB_1801edfdb:
  if (uVar3 + 1 == param_3) {
    param_1[1] = param_2;
    param_1[2] = param_3;
    uVar2 = 0;
    goto LAB_1801ee001;
  }
  param_1[1] = 0;
  param_1[2] = uVar3;
LAB_1801edffc:
  uVar2 = 1;
LAB_1801ee001:
  *param_1 = uVar2;
  return;
}


