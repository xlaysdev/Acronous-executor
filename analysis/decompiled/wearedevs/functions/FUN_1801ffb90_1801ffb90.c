/* FUN_1801ffb90 @ 1801ffb90 */

void FUN_1801ffb90(undefined8 *param_1,longlong param_2,char param_3,byte param_4,byte param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 local_20 [3];
  
  if ((byte)(param_5 ^ 1 | param_4) != 1) {
    local_20[0] = 0xe;
    uVar2 = FUN_1801ffc40(param_2,local_20);
    param_1[1] = uVar2;
    *param_1 = 1;
    return;
  }
  uVar1 = *(ulonglong *)(param_2 + 0x28);
  if (uVar1 < *(ulonglong *)(param_2 + 0x20)) {
    do {
      uVar1 = uVar1 + 1;
      if (9 < (byte)(*(char *)(*(longlong *)(param_2 + 0x18) + -1 + uVar1) - 0x30U)) break;
      *(ulonglong *)(param_2 + 0x28) = uVar1;
    } while (uVar1 != *(ulonglong *)(param_2 + 0x20));
  }
  uVar2 = 0;
  if (param_3 == '\0') {
    uVar2 = 0x8000000000000000;
  }
  param_1[1] = uVar2;
  *param_1 = 0;
  return;
}


