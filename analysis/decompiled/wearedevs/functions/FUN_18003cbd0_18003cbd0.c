/* FUN_18003cbd0 @ 18003cbd0 */

longlong FUN_18003cbd0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined *local_10;
  undefined1 *local_8;
  
  lVar2 = *param_1;
  do {
    lVar3 = *(longlong *)(lVar2 + 8);
    while (lVar3 != -1) {
      if (lVar3 < 0) {
        local_10 = &DAT_1802071f8;
        local_8 = &LAB_1800a5660;
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0(&DAT_180207208,&local_10,&PTR_s_C__Users_burne__rustup_toolchain_180207280);
      }
      LOCK();
      lVar1 = *(longlong *)(lVar2 + 8);
      bVar4 = lVar3 == lVar1;
      if (bVar4) {
        *(longlong *)(lVar2 + 8) = lVar3 + 1;
      }
      else {
        lVar3 = lVar1;
      }
      UNLOCK();
      if (bVar4) {
        return lVar2;
      }
    }
  } while( true );
}


