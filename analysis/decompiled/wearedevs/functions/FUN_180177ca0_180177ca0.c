/* FUN_180177ca0 @ 180177ca0 */

undefined8 FUN_180177ca0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  LOCK();
  lVar1 = *param_1;
  if (lVar1 == 0xcc) {
    *param_1 = 0x84;
  }
  else {
    lVar2 = lVar1;
  }
  UNLOCK();
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar1 != 0xcc);
}


