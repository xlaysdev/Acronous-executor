/* FUN_1801d8880 @ 1801d8880 */

void FUN_1801d8880(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 local_40;
  longlong *local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(longlong *)(lVar1 + 0xf0) != 0) {
    local_30 = 0;
    local_2c = 0;
    local_40 = FUN_1801d62f0(&local_30,
                             "fatal runtime error: the System allocator may not use TLS with destructors, aborting\n"
                             ,0xab);
    FUN_1801e2b90(&local_40);
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(7);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_38 = (longlong *)(lVar1 + 0xf0);
  *local_38 = -1;
  lVar2 = *(longlong *)(lVar1 + 0x108);
  if (lVar2 == *(longlong *)(lVar1 + 0xf8)) {
    FUN_180200c00(lVar1 + 0xf8);
  }
  lVar1 = local_38[2];
  *(undefined8 *)(lVar1 + lVar2 * 0x10) = param_1;
  *(undefined8 *)(lVar1 + 8 + lVar2 * 0x10) = param_2;
  local_38[3] = lVar2 + 1;
  *local_38 = *local_38 + 1;
  return;
}


