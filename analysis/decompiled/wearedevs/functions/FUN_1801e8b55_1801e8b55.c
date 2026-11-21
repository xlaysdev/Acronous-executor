/* FUN_1801e8b55 @ 1801e8b55 */

undefined8 FUN_1801e8b55(longlong *param_1)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      uVar1 = param_1[2];
      if ((uVar1 < (ulonglong)param_1[1]) && (*(char *)(lVar3 + uVar1) == 'E')) {
        param_1[2] = uVar1 + 1;
        return 0;
      }
      bVar5 = lVar4 != 0;
      lVar4 = lVar4 + -1;
      if ((((bVar5) && (param_1[4] != 0)) && (cVar2 = FUN_1801edcb0(", ",2), cVar2 != '\0')) ||
         (cVar2 = FUN_1801e81c8(param_1,1), cVar2 != '\0')) {
        return 1;
      }
      lVar3 = *param_1;
    } while (lVar3 != 0);
  }
  return 0;
}


