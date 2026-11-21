/* FUN_1801c8fe0 @ 1801c8fe0 */

void FUN_1801c8fe0(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong local_40;
  ulonglong local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_30 = *param_1;
  local_28 = local_30 + 0x80;
  uVar3 = *(ulonglong *)(local_30 + 0x200);
  while( true ) {
    if ((ulonglong *)(uVar3 & 0xfffffffffffffff8) == (ulonglong *)0x0) {
      FUN_1801c94a0(local_28);
      if (local_30 != -1) {
        LOCK();
        plVar1 = (longlong *)(local_30 + 8);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          thunk_FUN_1801d3330(local_30,0x280,0x80);
          return;
        }
      }
      return;
    }
    uVar2 = *(ulonglong *)(uVar3 & 0xfffffffffffffff8);
    local_38 = (ulonglong)((uint)uVar2 & 7);
    if (local_38 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_180201c9f(0,&local_38,&DAT_180288718,0);
    }
    local_40 = uVar3 & 0x78;
    if (local_40 != 0) break;
    FUN_1801c9350(&DAT_1802887a8);
    uVar3 = uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180201c9f(0,&local_40,&DAT_180288500,"unaligned pointer",0x23,
                &PTR_s_C__Users_burne__cargo_registry_s_180288588);
}


