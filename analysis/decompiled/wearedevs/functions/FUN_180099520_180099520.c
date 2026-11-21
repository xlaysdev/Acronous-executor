/* FUN_180099520 @ 180099520 */

void FUN_180099520(ulonglong *param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = 1;
  if (1 < *param_1) {
    lVar3 = *param_1 - 2;
  }
  if (lVar3 == 0) {
    FUN_1800975b0(param_1 + 1);
    if ((int)param_1[0x3d] != 3) {
      FUN_18009aff0(param_1 + 0x3d);
      return;
    }
  }
  else if (lVar3 == 1) {
    if ((int)param_1[0x3c] != 3) {
      FUN_18009aff0(param_1 + 0x3c);
    }
    FUN_1800975b0(param_1);
    if ((char)param_1[0x5c] == '\0') {
      uVar1 = param_1[0x5d];
      puVar2 = (undefined8 *)param_1[0x5e];
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(uVar1);
      }
      if (puVar2[1] != 0) {
        thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
        return;
      }
    }
  }
  return;
}


