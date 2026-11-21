/* FUN_1801c4a30 @ 1801c4a30 */

longlong FUN_1801c4a30(void)

{
  return *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 200;
}


