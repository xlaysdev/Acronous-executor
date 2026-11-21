/* FUN_1801c8f30 @ 1801c8f30 */

void FUN_1801c8f30(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_20;
  ulonglong local_18;
  
  uVar2 = *param_1;
  while( true ) {
    if ((ulonglong *)(uVar2 & 0xfffffffffffffff8) == (ulonglong *)0x0) {
      return;
    }
    uVar1 = *(ulonglong *)(uVar2 & 0xfffffffffffffff8);
    local_20 = (ulonglong)((uint)uVar1 & 7);
    if (local_20 != 1) break;
    local_18 = uVar2 & 0x78;
    if (local_18 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201c9f(0,&local_18,&DAT_180288500,"unaligned pointer",0x23,
                    &PTR_s_C__Users_burne__cargo_registry_s_180288588);
    }
    FUN_1801c9350(&DAT_1802887a8);
    uVar2 = uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180201c9f(0,&local_20,&DAT_180288718,0);
}


