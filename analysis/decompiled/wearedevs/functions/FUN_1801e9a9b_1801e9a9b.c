/* FUN_1801e9a9b @ 1801e9a9b */

ulonglong FUN_1801e9a9b(longlong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  char *pcVar3;
  undefined7 uVar4;
  longlong lVar5;
  char local_40;
  byte local_3f;
  longlong local_38;
  
  if (*param_1 == 0) {
    if (param_1[4] != 0) {
      uVar2 = FUN_1801edcb0("?",1);
      return uVar2;
    }
  }
  else {
    FUN_1801e6f57(&local_40,param_1,0x47);
    uVar4 = (undefined7)((ulonglong)&local_40 >> 8);
    if (local_40 != '\x01') {
      if (param_1[4] == 0) {
        uVar2 = FUN_1801e7e41(param_1);
        return uVar2;
      }
      if (local_38 == 0) {
LAB_1801e9bf4:
        uVar2 = FUN_1801e7e41(param_1);
        *(int *)(param_1 + 5) = (int)param_1[5] - (int)local_38;
        return uVar2;
      }
      cVar1 = FUN_1801edcb0("for<",4);
      uVar2 = CONCAT71(uVar4,1);
      if (cVar1 == '\0') {
        lVar5 = 0;
        do {
          if (local_38 == lVar5) {
            if ((param_1[4] == 0) || (cVar1 = FUN_1801edcb0("> ",2), cVar1 == '\0'))
            goto LAB_1801e9bf4;
            break;
          }
          if (((lVar5 != 0) && (param_1[4] != 0)) && (cVar1 = FUN_1801edcb0(", ",2), cVar1 != '\0'))
          break;
          *(int *)(param_1 + 5) = (int)param_1[5] + 1;
          cVar1 = FUN_1801e96ba(param_1,1);
          lVar5 = lVar5 + 1;
        } while (cVar1 == '\0');
      }
      goto LAB_1801e9b37;
    }
    if (param_1[4] != 0) {
      pcVar3 = "{invalid syntax}";
      if (local_3f != 0) {
        pcVar3 = "{recursion limit reached}";
      }
      cVar1 = FUN_1801edcb0(pcVar3,(ulonglong)local_3f * 9 + 0x10);
      uVar2 = CONCAT71(uVar4,1);
      if (cVar1 != '\0') goto LAB_1801e9b37;
    }
    *param_1 = 0;
    *(byte *)(param_1 + 1) = local_3f;
  }
  uVar2 = 0;
LAB_1801e9b37:
  return uVar2 & 0xffffffff;
}


