/* FUN_18016ea70 @ 18016ea70 */

void FUN_18016ea70(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0xb8) != '\x01') {
    if (*(char *)(lVar3 + 0xb8) == '\x02') {
      return;
    }
    FUN_1801d8880(lVar3 + 0x70,FUN_18016d130);
    *(undefined1 *)(lVar3 + 0xb8) = 1;
  }
  *(undefined1 *)(lVar3 + 0xb4) = uVar1;
  *(undefined1 *)(lVar3 + 0xb5) = uVar2;
  return;
}


