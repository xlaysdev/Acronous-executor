/* FUN_180075580 @ 180075580 */

longlong FUN_180075580(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar1 = lVar2 + 8;
  if (*(char *)(lVar2 + 0x18) == '\0') {
    FUN_1801f8c30(lVar1,param_1);
    return lVar1;
  }
  return lVar1;
}


