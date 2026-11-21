/* FUN_180181c20 @ 180181c20 */

ulonglong FUN_180181c20(char param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0xb8) != '\x01') {
    if (*(char *)(lVar1 + 0xb8) == '\x02') goto LAB_180181cdc;
    FUN_1801d8880(lVar1 + 0x70,FUN_18016d130);
    *(undefined1 *)(lVar1 + 0xb8) = 1;
  }
  if (((param_1 != '\0') && (*(char *)(lVar1 + 0xb4) != '\0')) && (*(char *)(lVar1 + 0xb5) == '\0'))
  {
    *(undefined1 *)(lVar1 + 0xb4) = 0;
    uVar2 = FUN_1801799c0(param_2,param_3);
    if (*(char *)(lVar1 + 0xb8) != '\x01') {
      if (*(char *)(lVar1 + 0xb8) == '\x02') {
        return uVar2;
      }
      uVar2 = uVar2 & 0xffffffff;
      FUN_1801d8880(lVar1 + 0x70,FUN_18016d130);
      *(undefined1 *)(lVar1 + 0xb8) = 1;
    }
    *(undefined2 *)(lVar1 + 0xb4) = 1;
    return uVar2;
  }
LAB_180181cdc:
  uVar2 = FUN_1801799c0(param_2,param_3);
  return uVar2;
}


