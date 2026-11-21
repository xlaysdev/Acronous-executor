/* FUN_1801688a0 @ 1801688a0 */

void FUN_1801688a0(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 local_1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  plVar2 = (longlong *)(lVar1 + 0x60);
  if (*(char *)(lVar1 + 0x68) != '\x01') {
    plVar2 = (longlong *)FUN_1801fb130(plVar2,0);
    if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_1,&DAT_180260b88,
                    &PTR_s_C__Users_burne__cargo_registry_s_180260c98);
    }
  }
  FUN_180168f60(*plVar2 + 0x10);
  return;
}


