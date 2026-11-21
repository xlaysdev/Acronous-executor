/* FUN_180200920 @ 180200920 */

void FUN_180200920(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  undefined8 local_30 [3];
  undefined4 local_18;
  undefined1 local_14;
  
  if (param_1 != 0) {
LAB_1802009d0:
    if (param_1 == 1) {
      local_18 = 0;
      local_14 = 0;
      local_30[0] = FUN_1801d62f0(&local_18,
                                  "fatal runtime error: init_current() was re-entrant, which indicates a bug in the Rust threading implementation, aborting\n"
                                  ,0xf3);
      FUN_1801e2b90(local_30);
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(7);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0("use of std::thread::current() is not possible after the thread\'s local data has been destroyedlibrary\\std\\src\\thread\\current.rs"
                  ,0xbd,&DAT_1802905f0);
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined8 *)(lVar1 + 0x130) = 1;
  param_1 = *(longlong *)(lVar1 + 0x128);
  if (param_1 == 0) {
    param_1 = 0;
    lVar3 = DAT_1802fd828;
    do {
      if (lVar3 == -1) {
        FUN_180200880();
        goto LAB_1802009d0;
      }
      param_1 = lVar3 + 1;
      LOCK();
      bVar5 = lVar3 == DAT_1802fd828;
      if (bVar5) {
        DAT_1802fd828 = param_1;
      }
      else {
        lVar3 = DAT_1802fd828;
      }
      UNLOCK();
    } while (!bVar5);
    *(longlong *)(lVar1 + 0x128) = param_1;
  }
  local_30[0] = 0x8000000000000000;
  plVar4 = (longlong *)FUN_1801dfe00(param_1,local_30);
  LOCK();
  lVar3 = *plVar4;
  *plVar4 = *plVar4 + 1;
  UNLOCK();
  if (*plVar4 == 0 || SCARRY8(lVar3,1) != *plVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  *(longlong **)(lVar1 + 0x130) = plVar4 + 2;
  return;
}


