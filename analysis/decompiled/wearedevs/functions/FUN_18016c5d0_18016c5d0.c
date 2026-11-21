/* FUN_18016c5d0 @ 18016c5d0 */

undefined8 FUN_18016c5d0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0xb8) != '\x01') {
    if (*(char *)(lVar1 + 0xb8) == '\x02') {
      return 0;
    }
    FUN_1801d8880(lVar1 + 0x70,FUN_18016d130);
    *(undefined1 *)(lVar1 + 0xb8) = 1;
  }
  uVar2 = *(undefined8 *)(lVar1 + 0xa0);
  *(undefined8 *)(lVar1 + 0xa0) = param_1;
  return uVar2;
}


