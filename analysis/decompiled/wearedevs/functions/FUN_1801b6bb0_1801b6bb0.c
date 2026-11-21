/* FUN_1801b6bb0 @ 1801b6bb0 */

longlong FUN_1801b6bb0(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  uVar1 = param_1[2];
  if (param_2 < uVar1) {
    param_1[2] = uVar1 + ~param_2;
    lVar3 = *param_1;
    bVar5 = (ulonglong)(param_1[1] - lVar3) >> 4 <= param_2;
    lVar4 = lVar3 + 0x10 + param_2 * 0x10;
    if (bVar5) {
      lVar4 = param_1[1];
    }
    lVar2 = 0;
    if (!bVar5) {
      lVar2 = lVar3 + param_2 * 0x10;
    }
    *param_1 = lVar4;
    return lVar2;
  }
  if (uVar1 != 0) {
    lVar3 = *param_1 + 0x10 + (uVar1 - 1) * 0x10;
    if ((ulonglong)(param_1[1] - *param_1) >> 4 <= uVar1 - 1) {
      lVar3 = param_1[1];
    }
    *param_1 = lVar3;
    param_1[2] = 0;
  }
  return 0;
}


