/* FUN_1801fff20 @ 1801fff20 */

longlong FUN_1801fff20(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 local_38;
  longlong *local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(longlong *)(lVar1 + 0xf0) != 0) {
    local_28 = 0;
    local_24 = 0;
    local_38 = FUN_1801d62f0(&local_28,
                             "fatal runtime error: the System allocator may not use TLS with destructors, aborting\n"
                             ,0xab);
    FUN_1801e2b90(&local_38);
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(7);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_30 = (longlong *)(lVar1 + 0xf0);
  *local_30 = -1;
  lVar2 = *(longlong *)(lVar1 + 0x108);
  if (lVar2 == *(longlong *)(lVar1 + 0xf8)) {
    FUN_180200c00(lVar1 + 0xf8);
  }
  lVar1 = local_30[2];
  *(longlong *)(lVar1 + lVar2 * 0x10) = param_1;
  *(undefined1 **)(lVar1 + 8 + lVar2 * 0x10) = &LAB_1801d8b70;
  local_30[3] = lVar2 + 1;
  *local_30 = *local_30 + 1;
  *(undefined1 *)(param_1 + 8) = 1;
  return param_1;
}


