/* FUN_1801fb130 @ 1801fb130 */

longlong * FUN_1801fb130(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *local_10;
  
  if ((char)param_1[1] == '\0') {
    if (param_2 != (longlong *)0x0) {
      lVar1 = *param_2;
      *param_2 = 0;
      if (lVar1 != 0) {
        *param_1 = lVar1;
        *(undefined1 *)(param_1 + 1) = 1;
        goto LAB_1801fb1e3;
      }
    }
    FUN_180027490();
    puVar2 = (undefined8 *)thunk_FUN_1801d32d0(0x20,8);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x20);
    }
    *puVar2 = 1;
    puVar2[1] = 1;
    puVar2[2] = 0;
    *(undefined4 *)(puVar2 + 3) = 0;
    *(undefined2 *)((longlong)puVar2 + 0x1c) = 0;
    lVar1 = param_1[1];
    local_10 = (longlong *)*param_1;
    *param_1 = (longlong)puVar2;
    *(undefined1 *)(param_1 + 1) = 1;
    if ((char)lVar1 != '\x01') {
      if ((char)lVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("internal error: entered unreachable codeC:\\Users\\burne\\.rustup\\toolchains\\stable-x86_64-pc-windows-msvc\\lib/rustlib/src/rust\\library\\std\\src\\sys\\thread_local\\native\\lazy.rs"
                      ,0x28,&DAT_180264828);
      }
LAB_1801fb1e3:
      FUN_1801d8880(param_1,FUN_18017cd50);
      return param_1;
    }
    LOCK();
    *local_10 = *local_10 + -1;
    UNLOCK();
    if (*local_10 == 0) {
      FUN_180163980(&local_10);
      return param_1;
    }
  }
  else if ((char)param_1[1] != '\x01') {
    param_1 = (longlong *)0x0;
  }
  return param_1;
}


