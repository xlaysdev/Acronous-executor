/* FUN_1801e8e2f @ 1801e8e2f */

undefined8 FUN_1801e8e2f(longlong *param_1)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  bool bVar6;
  char local_40;
  byte local_3f;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar5 = 0;
    do {
      uVar1 = param_1[2];
      if ((uVar1 < (ulonglong)param_1[1]) && (*(char *)(lVar3 + uVar1) == 'E')) {
        param_1[2] = uVar1 + 1;
        return 0;
      }
      bVar6 = lVar5 == 0;
      lVar5 = lVar5 + -1;
      if ((bVar6) || (param_1[4] == 0)) {
LAB_1801e8e9f:
        uVar1 = param_1[2];
        if ((ulonglong)param_1[1] <= uVar1) goto LAB_1801e8eee;
        if (*(char *)(lVar3 + uVar1) == 'L') {
          param_1[2] = uVar1 + 1;
          FUN_1801e6e06(&local_40,param_1);
          if (local_40 != '\0') {
            if (param_1[4] != 0) {
              pcVar4 = "{invalid syntax}";
              if (local_3f != 0) {
                pcVar4 = "{recursion limit reached}";
              }
              cVar2 = FUN_1801edcb0(pcVar4,(ulonglong)local_3f * 9 + 0x10);
              if (cVar2 != '\0') {
                return 1;
              }
            }
            *param_1 = 0;
            *(byte *)(param_1 + 1) = local_3f;
            return 0;
          }
          cVar2 = FUN_1801e96ba(param_1);
        }
        else {
          if (*(char *)(lVar3 + uVar1) != 'K') goto LAB_1801e8eee;
          param_1[2] = uVar1 + 1;
          cVar2 = FUN_1801e81c8(param_1,0);
        }
      }
      else {
        cVar2 = FUN_1801edcb0(", ",2);
        if (cVar2 != '\0') {
          return 1;
        }
        lVar3 = *param_1;
        if (lVar3 != 0) goto LAB_1801e8e9f;
LAB_1801e8eee:
        cVar2 = FUN_1801e7926(param_1);
      }
      if (cVar2 != '\0') {
        return 1;
      }
      lVar3 = *param_1;
    } while (lVar3 != 0);
  }
  return 0;
}


