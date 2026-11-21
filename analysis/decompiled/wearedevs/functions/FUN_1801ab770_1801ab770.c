/* FUN_1801ab770 @ 1801ab770 */

undefined8 FUN_1801ab770(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 == 0) {
    pcVar3 = "/";
    lVar4 = 1;
  }
  else {
    pcVar3 = *(char **)(param_1 + 8);
    if ((*pcVar3 != '*') && (*pcVar3 != '/')) {
      cVar1 = FUN_1801f0c50(param_2,"/",1);
      if (cVar1 != '\0') {
        return 1;
      }
      pcVar3 = *(char **)(param_1 + 8);
      lVar4 = *(longlong *)(param_1 + 0x10);
    }
  }
  uVar2 = FUN_1801f0c50(param_2,pcVar3,lVar4);
  return uVar2;
}


