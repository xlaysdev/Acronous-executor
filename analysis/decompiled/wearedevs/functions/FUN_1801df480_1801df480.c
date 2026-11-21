/* FUN_1801df480 @ 1801df480 */

void FUN_1801df480(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = *(undefined8 **)*param_1;
  *(undefined8 *)*param_1 = 0;
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ba0(&PTR_s_library_std_src_sync_once_rs_180290260);
  }
  FUN_180027490();
  lVar2 = thunk_FUN_1801d32d0(0x400,1);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(1,0x400);
  }
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined1 *)((longlong)puVar1 + 0xc) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0x400;
  puVar1[4] = lVar2;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x35) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x31) = 0;
  return;
}


