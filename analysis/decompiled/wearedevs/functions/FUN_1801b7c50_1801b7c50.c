/* FUN_1801b7c50 @ 1801b7c50 */

void FUN_1801b7c50(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 == *param_1) {
    FUN_180201770(param_1);
  }
  *(char *)(param_1[1] + lVar1) = (char)param_2;
  param_1[2] = lVar1 + 1;
  if (lVar1 + 1 == *param_1) {
    FUN_180201770(param_1);
  }
  *(char *)(param_1[1] + 1 + lVar1) = (char)((uint)param_2 >> 8);
  param_1[2] = lVar1 + 2;
  if (lVar1 + 2 == *param_1) {
    FUN_180201770(param_1);
  }
  *(char *)(param_1[1] + 2 + lVar1) = (char)((uint)param_2 >> 0x10);
  param_1[2] = lVar1 + 3;
  if (lVar1 + 3 == *param_1) {
    FUN_180201770(param_1);
  }
  *(char *)(param_1[1] + 3 + lVar1) = (char)((uint)param_2 >> 0x18);
  param_1[2] = lVar1 + 4;
  return;
}


