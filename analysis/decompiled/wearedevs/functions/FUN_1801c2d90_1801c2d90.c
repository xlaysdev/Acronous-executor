/* FUN_1801c2d90 @ 1801c2d90 */

void FUN_1801c2d90(undefined8 param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 local_200 [8];
  undefined1 local_1f8 [248];
  ulonglong local_100;
  longlong local_f0;
  undefined1 *local_58;
  undefined8 local_48;
  
  local_58 = local_1f8;
  local_48 = 0xfffffffffffffffe;
  FUN_1801c4480(local_200,param_1);
  lVar3 = local_f0;
  uVar2 = local_100;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(longlong *)(lVar1 + 200) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: t.get().is_null()C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\rayon-core-1.13.0\\src\\registry.rs"
                  ,0x23,&DAT_180287998);
  }
  *(undefined1 **)(lVar1 + 200) = local_200;
  if (*(ulonglong *)(local_f0 + 0x208) <= local_100) {
                    /* WARNING: Subroutine does not return */
    FUN_180201d02(local_100,*(ulonglong *)(local_f0 + 0x208),
                  &PTR_s_C__Users_burne__cargo_registry_s_180287f90);
  }
  FUN_1801c5bf0(local_100 * 0x28 + *(longlong *)(local_f0 + 0x200));
  if (*(longlong *)(lVar3 + 0x1b0) != 0) {
    (**(code **)(*(longlong *)(lVar3 + 0x1b8) + 0x28))(*(longlong *)(lVar3 + 0x1b0),uVar2);
  }
  if (*(ulonglong *)(local_f0 + 0x208) <= local_100) {
                    /* WARNING: Subroutine does not return */
    FUN_180201d02(local_100,*(ulonglong *)(local_f0 + 0x208),
                  &PTR_s_C__Users_burne__cargo_registry_s_180287ee8);
  }
  if (*(longlong *)(*(longlong *)(local_f0 + 0x200) + 0x10 + local_100 * 0x28) != 3) {
    FUN_1801fe2e0(local_200,*(longlong *)(local_f0 + 0x200) + local_100 * 0x28 + 0x10);
  }
  if (*(ulonglong *)(local_f0 + 0x208) <= local_100) {
                    /* WARNING: Subroutine does not return */
    FUN_180201d02(local_100,*(ulonglong *)(local_f0 + 0x208),
                  &PTR_s_C__Users_burne__cargo_registry_s_180287f00);
  }
  FUN_1801c5bf0(*(longlong *)(local_f0 + 0x200) + local_100 * 0x28 + 8);
  if (*(longlong *)(lVar3 + 0x1c0) != 0) {
    (**(code **)(*(longlong *)(lVar3 + 0x1c8) + 0x28))(*(longlong *)(lVar3 + 0x1c0),uVar2);
  }
  FUN_1801c52b0(local_200);
  return;
}


