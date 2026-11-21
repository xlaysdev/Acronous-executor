/* FUN_1801b4910 @ 1801b4910 */

ulonglong FUN_1801b4910(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  
  uVar1 = param_1[3];
  if (param_2 < uVar1) {
    param_1[3] = uVar1 + ~param_2;
    uVar1 = param_1[1];
    bVar3 = uVar1 - *param_1 <= param_2;
    uVar2 = *param_1 + 1 + param_2;
    if (bVar3) {
      uVar2 = uVar1;
    }
    *param_1 = uVar2;
    if (!bVar3) {
      uVar1 = param_1[2];
      param_1[2] = param_2 + uVar1 + 1;
      return uVar1 + param_2;
    }
  }
  else if (uVar1 != 0) {
    bVar3 = param_1[1] - *param_1 <= uVar1 - 1;
    uVar2 = *param_1 + uVar1;
    if (bVar3) {
      uVar2 = param_1[1];
    }
    *param_1 = uVar2;
    if (!bVar3) {
      param_1[2] = param_1[2] + uVar1;
    }
    param_1[3] = 0;
  }
  return uVar1;
}


