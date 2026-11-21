/* FUN_18016e590 @ 18016e590 */

undefined1 FUN_18016e590(void)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0xb8) != '\x01') {
    if (*(char *)(lVar2 + 0xb8) == '\x02') {
      return 0;
    }
    FUN_1801d8880(lVar2 + 0x70,FUN_18016d130);
    *(undefined1 *)(lVar2 + 0xb8) = 1;
  }
  uVar1 = *(undefined1 *)(lVar2 + 0xb4);
  *(undefined1 *)(lVar2 + 0xb4) = 0;
  return uVar1;
}


