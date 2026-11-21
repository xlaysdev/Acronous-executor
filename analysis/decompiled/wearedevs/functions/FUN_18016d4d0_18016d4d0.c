/* FUN_18016d4d0 @ 18016d4d0 */

longlong FUN_18016d4d0(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar2 = lVar1 + 0x70;
  if (*(char *)(lVar1 + 0xb8) != '\x01') {
    if (*(char *)(lVar1 + 0xb8) != '\x02') {
      FUN_1801d8880(lVar2,FUN_18016d130);
      *(undefined1 *)(lVar1 + 0xb8) = 1;
      return lVar2;
    }
    lVar2 = 0;
  }
  return lVar2;
}


