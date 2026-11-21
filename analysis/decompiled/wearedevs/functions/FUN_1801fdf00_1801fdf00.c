/* FUN_1801fdf00 @ 1801fdf00 */

void FUN_1801fdf00(longlong param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_1 + 0x10), lVar1 != 0)) {
    lVar3 = 0;
    do {
      cVar2 = FUN_1801c2880(param_1,lVar3);
      if ((cVar2 != '\0') && (param_2 = param_2 + -1, param_2 == 0)) {
        return;
      }
      lVar3 = lVar3 + 1;
    } while (lVar1 != lVar3);
  }
  return;
}


