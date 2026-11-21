/* FUN_180200a50 @ 180200a50 */

undefined8 FUN_180200a50(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(longlong *)(lVar1 + 0x148) == 0);
}


