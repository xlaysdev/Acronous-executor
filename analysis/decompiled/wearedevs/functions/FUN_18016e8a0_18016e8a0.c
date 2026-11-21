/* FUN_18016e8a0 @ 18016e8a0 */

void FUN_18016e8a0(char *param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (*param_1 != '\x01') {
    return;
  }
  cVar1 = param_1[1];
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0xb8) != '\x01') {
    if (*(char *)(lVar2 + 0xb8) == '\x02') {
      return;
    }
    FUN_1801d8880(lVar2 + 0x70,FUN_18016d130);
    *(undefined1 *)(lVar2 + 0xb8) = 1;
  }
  *(undefined1 *)(lVar2 + 0xb4) = 1;
  *(char *)(lVar2 + 0xb5) = cVar1;
  return;
}


