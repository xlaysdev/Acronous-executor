/* FUN_1801a9cc0 @ 1801a9cc0 */

undefined8 FUN_1801a9cc0(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  if (param_2 <= param_3) {
    return uVar3;
  }
  uVar2 = *(ushort *)(param_1 + param_3 * 2);
  uVar1 = param_3 + 1;
  if ((short)uVar2 < 0) {
    if (0x3fff < (uVar2 & 0x7fff)) {
      if ((uVar2 & 0x7fff) == 0x7fff) {
        if (param_2 <= uVar1) {
          return uVar3;
        }
        uVar1 = param_3 + 2;
      }
      if (param_2 <= uVar1) {
        return 0;
      }
    }
    uVar4 = 2;
  }
  else {
    if (uVar2 < 0x4040) {
      return 3;
    }
    if (uVar2 < 0x7fc0) {
      if (uVar1 < param_2) {
        return 3;
      }
    }
    else {
      if (param_2 <= uVar1) {
        return uVar3;
      }
      if (param_3 + 2 < param_2) {
        return 3;
      }
    }
  }
  return uVar4;
}


