/* Unwind@18018d830 @ 18018d830 */

void Unwind_18018d830(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  if ((*(char *)(param_2 + 0x80) == '\0') &&
     ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) != 0)) {
    cVar1 = FUN_180200a50();
    if (cVar1 == '\0') {
      *(undefined1 *)(*(longlong *)(param_2 + 0x88) + 0x11) = 1;
    }
  }
  LOCK();
  cVar1 = **(char **)(param_2 + 0x60);
  **(char **)(param_2 + 0x60) = '\0';
  UNLOCK();
  if (cVar1 == '\x02') {
    WakeByAddressSingle(*(undefined8 *)(param_2 + 0x60));
  }
  return;
}


