/* Unwind@18018d7c0 @ 18018d7c0 */

void Unwind_18018d7c0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  if ((*(char *)(param_2 + 0x84) == '\0') &&
     ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) != 0)) {
    cVar1 = FUN_180200a50();
    if (cVar1 == '\0') {
      *(undefined1 *)(*(longlong *)(param_2 + 0x68) + 0x31) = 1;
    }
  }
  LOCK();
  cVar1 = **(char **)(param_2 + 0x58);
  **(char **)(param_2 + 0x58) = '\0';
  UNLOCK();
  if (cVar1 == '\x02') {
    WakeByAddressSingle();
  }
  return;
}


