/* FUN_1801e2bf0 @ 1801e2bf0 */

void FUN_1801e2bf0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  size_t _Size;
  
  if (param_2 != 0) {
    uVar1 = *(ulonglong *)(param_1 + 0x10);
    _Size = uVar1 - param_2;
    if (uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(0,param_2,uVar1,&PTR_s__rustc_01f6ddf7588f42ae2d7eb0a2f_180290c60);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (_Size != 0) {
      memmove(*(void **)(param_1 + 8),(void *)(param_2 + (longlong)*(void **)(param_1 + 8)),_Size);
      *(size_t *)(param_1 + 0x10) = _Size;
    }
  }
  return;
}


