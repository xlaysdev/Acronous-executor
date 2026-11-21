/* FUN_1801c8690 @ 1801c8690 */

longlong FUN_1801c8690(void)

{
  return *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd0;
}


