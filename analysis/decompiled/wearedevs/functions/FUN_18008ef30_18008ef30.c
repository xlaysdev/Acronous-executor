/* FUN_18008ef30 @ 18008ef30 */

void FUN_18008ef30(char *param_1)

{
  longlong lVar1;
  
  if (*param_1 != '\0') {
    lVar1 = 1;
    if (1 < *(ulonglong *)(param_1 + 8)) {
      lVar1 = *(ulonglong *)(param_1 + 8) - 2;
    }
    if (lVar1 != 1) {
      if (lVar1 == 0) {
        FUN_1800429a0(param_1 + 0x1b8);
        FUN_18000bd70(param_1 + 0x10);
        if (*(int *)(param_1 + 0x1f0) != 3) {
          FUN_18008f650(param_1 + 0x1f0);
          return;
        }
      }
      return;
    }
  }
  FUN_18008ea30();
  return;
}


