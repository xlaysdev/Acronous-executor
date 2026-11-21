/* FUN_1801fd000 @ 1801fd000 */

longlong * FUN_1801fd000(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if ((char)param_1[1] == '\0') {
    if (param_2 != (int *)0x0) {
      param_2[0] = 0;
      param_2[1] = 0;
      if (*param_2 == 1) {
        *param_1 = *(longlong *)(param_2 + 2);
        *(undefined1 *)(param_1 + 1) = 1;
        goto LAB_1801fd091;
      }
    }
    uVar3 = FUN_1801c8660();
    lVar4 = FUN_1801c8b90(uVar3);
    lVar2 = param_1[1];
    lVar1 = *param_1;
    *param_1 = lVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    if ((char)lVar2 != '\x01') {
      if ((char)lVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("internal error: entered unreachable codeC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\rayon-core-1.13.0\\src\\job.rs"
                      ,0x28,&PTR_s_C__Users_burne__rustup_toolchain_180287170);
      }
LAB_1801fd091:
      FUN_1801d8880(param_1,FUN_1801c0280);
      return param_1;
    }
    lVar2 = *(longlong *)(lVar1 + 0x820);
    *(longlong *)(lVar1 + 0x820) = lVar2 + -1;
    if (lVar2 == 1 && *(longlong *)(lVar1 + 0x818) == 0) {
      FUN_1801fe8b0();
      return param_1;
    }
  }
  else if ((char)param_1[1] != '\x01') {
    param_1 = (longlong *)0x0;
  }
  return param_1;
}


