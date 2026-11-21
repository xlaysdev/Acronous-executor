/* FUN_1801febc0 @ 1801febc0 */

/* WARNING: Removing unreachable block (ram,0x0001801fec4e) */

ulonglong FUN_1801febc0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong local_38;
  
  uVar2 = *(ulonglong *)(param_1 + 0x100);
  LOCK();
  UNLOCK();
  uVar6 = *(ulonglong *)(param_1 + 0x180);
  puVar5 = (ulonglong *)(param_1 + 0x180);
  do {
    local_38 = uVar6;
    while( true ) {
      puVar4 = (ulonglong *)(local_38 & 0xfffffffffffffff8);
      if (puVar4 == (ulonglong *)0x0) {
        *(ulonglong *)(param_1 + 0x100) = uVar2 + 2;
        return uVar2 + 2;
      }
      uVar6 = *puVar4;
      if (((uint)uVar6 & 7) != 1) break;
      LOCK();
      uVar1 = *puVar5;
      if (local_38 == uVar1) {
        *puVar5 = uVar6 & 0xfffffffffffffff8;
        uVar3 = local_38;
      }
      else {
        uVar3 = uVar1;
      }
      UNLOCK();
      if (local_38 == uVar1) {
        local_38 = local_38 & 0x78;
        if (local_38 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201c9f(0,&local_38,&DAT_180288500,"unaligned pointer",0x23,
                        &PTR_s_C__Users_burne__cargo_registry_s_180288588);
        }
        FUN_1801c9350(param_2);
        local_38 = uVar6 & 0xfffffffffffffff8;
      }
      else {
        local_38 = uVar3;
        if ((uVar3 & 7) != 0) {
          return uVar2;
        }
      }
    }
    puVar5 = puVar4;
    if ((puVar4[0x110] & 0xfffffffffffffffe) != uVar2 && (puVar4[0x110] & 1) != 0) {
      return uVar2;
    }
  } while( true );
}


