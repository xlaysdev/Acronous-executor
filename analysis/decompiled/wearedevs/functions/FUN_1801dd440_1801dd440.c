/* FUN_1801dd440 @ 1801dd440 */

undefined1 * FUN_1801dd440(void)

{
  bool bVar1;
  
  LOCK();
  bVar1 = DAT_1802fd809 == '\0';
  if (bVar1) {
    DAT_1802fd809 = '\x01';
  }
  UNLOCK();
  if (!bVar1) {
    FUN_180200390(&DAT_1802fd809);
  }
  if ((DAT_1802fd838 & 0x7fffffffffffffff) != 0) {
    FUN_180200a50();
  }
  return &DAT_1802fd809;
}


