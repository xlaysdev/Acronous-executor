/* FUN_1801e10c0 @ 1801e10c0 */

void FUN_1801e10c0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar1 = DAT_1802fd838;
  local_20 = 0xfffffffffffffffe;
  LOCK();
  DAT_1802fd838 = DAT_1802fd838 + 1;
  UNLOCK();
  if (DAT_1802fd838 != 0 && -2 < lVar1) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x150) == '\0') {
      *(longlong *)(lVar1 + 0x148) = *(longlong *)(lVar1 + 0x148) + 1;
      *(undefined1 *)(lVar1 + 0x150) = 0;
    }
  }
  local_30 = param_1;
  local_28 = param_2;
  FUN_1801d3270(&local_30,&PTR_FUN_180290868);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


