/* FUN_18013a080 @ 18013a080 */

bool FUN_18013a080(longlong param_1,byte param_2,uint param_3)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_3 == 0) {
    return false;
  }
  if (((param_2 ^ (byte)param_3) & 1) == 0) {
    lVar2 = 0x2c;
    cVar1 = *(char *)(param_1 + 0x28);
  }
  else {
    lVar2 = 0xa4;
    cVar1 = *(char *)(param_1 + 0xa0);
  }
  bVar3 = true;
  if (cVar1 == '\0') {
    bVar3 = param_3 < *(uint *)(param_1 + lVar2);
  }
  return bVar3;
}


