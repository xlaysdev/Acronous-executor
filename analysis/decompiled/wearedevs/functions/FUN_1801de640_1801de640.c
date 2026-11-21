/* FUN_1801de640 @ 1801de640 */

longlong FUN_1801de640(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  short *psVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  psVar2 = (short *)FUN_1801de6b0();
  if ((psVar2 != (short *)0x0) && ((param_2 != 2 || (*psVar2 != 0x2e2e)))) {
    lVar5 = 0;
    lVar3 = (longlong)psVar2 + param_2 + 1;
    while (param_2 != lVar5) {
      lVar4 = lVar3 + -1;
      lVar5 = lVar5 + 1;
      pcVar1 = (char *)(lVar3 + -2);
      lVar3 = lVar4;
      if (*pcVar1 == '.') {
        if (param_2 == lVar5) {
          lVar4 = 0;
        }
        return lVar4;
      }
    }
  }
  return 0;
}


