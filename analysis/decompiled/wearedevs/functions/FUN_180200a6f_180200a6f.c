/* FUN_180200a6f @ 180200a6f */

undefined8 FUN_180200a6f(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 local_20 [2];
  
  FUN_1801e6810(local_20,param_1);
  LOCK();
  DAT_1802fd838 = DAT_1802fd838 + -1;
  UNLOCK();
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  plVar1 = (longlong *)(lVar2 + 0x148);
  *plVar1 = *plVar1 + -1;
  *(undefined1 *)(lVar2 + 0x150) = 0;
  return local_20[0];
}


