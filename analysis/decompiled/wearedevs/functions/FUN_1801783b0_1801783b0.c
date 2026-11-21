/* FUN_1801783b0 @ 1801783b0 */

void FUN_1801783b0(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = *param_1;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0xb8) != '\x01') {
    if (*(char *)(lVar2 + 0xb8) == '\x02') {
      return;
    }
    FUN_1801d8880(lVar2 + 0x70,FUN_18016d130);
    *(undefined1 *)(lVar2 + 0xb8) = 1;
  }
  *(undefined8 *)(lVar2 + 0xa0) = uVar1;
  return;
}


