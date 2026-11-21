/* FUN_1801ffd80 @ 1801ffd80 */

ulonglong FUN_1801ffd80(ulonglong *param_1,void *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *param_1;
  if (uVar1 - param_1[2] < param_3) {
    uVar1 = FUN_1801d74c0(param_1);
    if (uVar1 != 0) {
      return uVar1;
    }
    uVar1 = *param_1;
  }
  if (param_3 < uVar1) {
    uVar1 = param_1[2];
    memcpy((void *)(param_1[1] + uVar1),param_2,param_3);
    param_1[2] = uVar1 + param_3;
    uVar1 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 3) = 1;
    uVar2 = FUN_1801d5fb0((longlong)param_1 + 0x19,param_2,param_3);
    uVar1 = 0;
    if ((uVar2 & 0xffffffff00000003) != 0x600000002) {
      uVar1 = uVar2;
    }
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return uVar1;
}


