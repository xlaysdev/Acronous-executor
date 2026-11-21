/* FUN_18019cf10 @ 18019cf10 */

undefined8 FUN_18019cf10(ulonglong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (0x8000000000000000 < *param_1) {
    uVar3 = *param_1;
  }
  if ((uVar3 & 0x7fffffffffffffff) == 0) {
    uVar2 = FUN_1801edcb0(param_1[1],param_1[2],param_2);
    return uVar2;
  }
  if ((uVar3 & 0x7fffffffffffffff) == 1) {
    uVar2 = FUN_1801f4680(param_1 + 1,param_2);
    return uVar2;
  }
  cVar1 = FUN_1801f0c50(param_2,&DAT_180267e55,1);
  if (cVar1 == '\0') {
    cVar1 = FUN_18019af80(param_1 + 1,param_2);
    if (cVar1 == '\0') {
      uVar2 = FUN_1801f0c50(param_2,&DAT_180267e56,1);
      return uVar2;
    }
  }
  return 1;
}


