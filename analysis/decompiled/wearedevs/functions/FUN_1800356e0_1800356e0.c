/* FUN_1800356e0 @ 1800356e0 */

void FUN_1800356e0(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  longlong local_40;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_48 = param_1;
  lVar1 = FUN_180179990(param_1,&PTR_s_C__Users_burne__cargo_registry_s_1802068b8);
  if (*(longlong *)(lVar1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_1802068d0);
  }
  *(undefined8 *)(lVar1 + 8) = 0xffffffffffffffff;
  local_40 = *(longlong *)(lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  if (local_40 == 0) {
    local_40 = lVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("core missing",0xc,&PTR_s_C__Users_burne__cargo_registry_s_1802068e8);
  }
  *(undefined8 *)(lVar1 + 8) = 0;
  local_31 = 1;
  lVar2 = FUN_18016c6f0();
  if (*(char *)(lVar2 + 0x48) != '\x01') {
    if (*(char *)(lVar2 + 0x48) == '\x02') {
      FUN_180028df0(local_40);
                    /* WARNING: Subroutine does not return */
      FUN_1802008b0(&PTR_s_C__Users_burne__rustup_toolchain_180205658);
    }
    local_31 = 1;
    FUN_1801d8880(lVar2,FUN_18002ca60);
    *(undefined1 *)(lVar2 + 0x48) = 1;
  }
  local_60 = local_40;
  local_31 = 0;
  uVar4 = local_48;
  local_68 = param_2;
  local_58 = lVar1;
  uVar3 = FUN_18002d160(lVar2 + 0x28,local_48,&local_68);
  if (*(longlong *)(lVar1 + 8) != 0) {
    local_50 = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_180206900);
  }
  *(undefined8 *)(lVar1 + 8) = 0xffffffffffffffff;
  if (*(longlong *)(lVar1 + 0x10) == 0) {
    lVar2 = 0;
  }
  else {
    local_50 = uVar3;
    local_40 = lVar1;
    FUN_1800353f0();
    lVar2 = *(longlong *)(local_40 + 8) + 1;
    uVar3 = local_50;
    lVar1 = local_40;
  }
  *(undefined8 *)(lVar1 + 0x10) = uVar3;
  *(longlong *)(lVar1 + 8) = lVar2;
  FUN_18016b9f0(local_48);
  FUN_180034a10(local_48);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0("a spawned task panicked and the runtime is configured to shut down on unhandled panic"
                  ,0xab,param_3);
  }
  return;
}


