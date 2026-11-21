/* FUN_1801c8e20 @ 1801c8e20 */

void FUN_1801c8e20(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_38;
  ulonglong local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = param_1 + 0x80;
  uVar2 = *(ulonglong *)(param_1 + 0x200);
  while( true ) {
    if ((ulonglong *)(uVar2 & 0xfffffffffffffff8) == (ulonglong *)0x0) {
      FUN_1801c94a0(local_28);
      return;
    }
    uVar1 = *(ulonglong *)(uVar2 & 0xfffffffffffffff8);
    local_30 = (ulonglong)((uint)uVar1 & 7);
    if (local_30 != 1) break;
    local_38 = uVar2 & 0x78;
    if (local_38 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201c9f(0,&local_38,&DAT_180288500,"unaligned pointer",0x23,
                    &PTR_s_C__Users_burne__cargo_registry_s_180288588);
    }
    FUN_1801c9350(&DAT_1802887a8);
    uVar2 = uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180201c9f(0,&local_30,&DAT_180288718,0);
}


