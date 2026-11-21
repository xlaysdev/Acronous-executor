/* FUN_180116200 @ 180116200 */

void FUN_180116200(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  size_t _Size;
  
  uVar1 = param_1[3];
  if ((uVar1 != 0) && (uVar2 = param_1[2], *param_1 - uVar2 < param_2)) {
    _Size = uVar2 - uVar1;
    if (uVar2 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(0,uVar1,uVar2,&PTR_s_C__Users_burne__rustup_toolchain_180242678);
    }
    param_1[2] = 0;
    if (_Size != 0) {
      memmove((void *)param_1[1],(void *)(uVar1 + param_1[1]),_Size);
      param_1[2] = _Size;
    }
    param_1[3] = 0;
  }
  return;
}


