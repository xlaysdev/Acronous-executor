/* FUN_1801e9327 @ 1801e9327 */

void FUN_1801e9327(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 local_19;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  cVar2 = FUN_1801e7288(param_1,0);
  if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("`fmt::Error`s should be impossible without a `fmt::Formatter`",0x3d,&local_19,"",
                  &PTR_s__rust_deps_rustc_demangle_0_1_26_180292448);
  }
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}


