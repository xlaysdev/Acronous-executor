/* FUN_1801dfd60 @ 1801dfd60 */

longlong FUN_1801dfd60(void)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = DAT_1802fd828;
  do {
    if (lVar3 == -1) {
      FUN_180200880();
      pcVar2 = (code *)swi(3);
      lVar3 = (*pcVar2)();
      return lVar3;
    }
    lVar1 = lVar3 + 1;
    LOCK();
    bVar4 = lVar3 == DAT_1802fd828;
    if (bVar4) {
      DAT_1802fd828 = lVar1;
    }
    else {
      lVar3 = DAT_1802fd828;
    }
    UNLOCK();
  } while (!bVar4);
  return lVar1;
}


