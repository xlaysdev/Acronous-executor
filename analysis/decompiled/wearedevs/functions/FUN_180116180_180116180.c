/* FUN_180116180 @ 180116180 */

void FUN_180116180(char *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (*param_1 != '\x01') {
    uVar2 = *(ulonglong *)(param_1 + 8);
    if (param_2 < uVar2) {
      lVar1 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      uVar2 = (0xffffffffffffffffU >> (~(byte)lVar1 + 2 & 0x3f)) + 1;
      if (uVar2 <= param_2) {
        param_1[1] = '\0';
        return;
      }
      if (param_1[1] == '\0') {
        param_1[1] = '\x01';
        return;
      }
      uVar3 = 0x2000;
      if (0x2000 < uVar2) {
        uVar3 = uVar2;
      }
      *(ulonglong *)(param_1 + 8) = uVar3;
      param_1[1] = '\0';
      return;
    }
    if ((longlong)uVar2 < 0) {
      uVar2 = 0xffffffffffffffff;
    }
    else {
      uVar2 = uVar2 * 2;
    }
    if (*(ulonglong *)(param_1 + 0x10) < uVar2) {
      uVar2 = *(ulonglong *)(param_1 + 0x10);
    }
    *(ulonglong *)(param_1 + 8) = uVar2;
    param_1[1] = '\0';
  }
  return;
}


