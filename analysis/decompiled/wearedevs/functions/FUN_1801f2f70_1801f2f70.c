/* FUN_1801f2f70 @ 1801f2f70 */

undefined8 FUN_1801f2f70(byte param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = (param_2 + 7U & 0xfffffffffffffff8) - param_2;
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    if (param_3 < uVar1) {
      uVar1 = param_3;
    }
    if (param_3 != 0) {
      uVar2 = 0;
      do {
        if (*(byte *)(param_2 + uVar2) == param_1) {
          return 1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar1 != uVar2);
    }
    if (param_3 - 0x10 < uVar1) goto joined_r0x0001801f302a;
  }
  do {
    uVar2 = *(ulonglong *)(param_2 + uVar1) ^ (ulonglong)param_1 * 0x101010101010101;
    uVar3 = *(ulonglong *)(param_2 + 8 + uVar1) ^ (ulonglong)param_1 * 0x101010101010101;
    if ((~((0x101010101010100 - uVar3 | uVar3) & (0x101010101010100 - uVar2 | uVar2)) &
        0x8080808080808080) != 0) break;
    uVar1 = uVar1 + 0x10;
  } while (uVar1 <= param_3 - 0x10);
joined_r0x0001801f302a:
  while( true ) {
    if (param_3 == uVar1) {
      return 0;
    }
    if (*(byte *)(param_2 + uVar1) == param_1) break;
    uVar1 = uVar1 + 1;
  }
  return 1;
}


