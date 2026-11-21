/* FUN_180119920 @ 180119920 */

undefined8 FUN_180119920(longlong param_1,void *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong _Size;
  undefined **local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  uVar1 = (ulonglong)*(byte *)(param_1 + 0x13);
  if (0x12 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(uVar1,0x12,0x12,&PTR_s_C__Users_burne__cargo_registry_s_180240b90);
  }
  uVar2 = 0x12 - uVar1;
  _Size = param_3;
  if (uVar2 < param_3) {
    _Size = uVar2;
  }
  memcpy((void *)(uVar1 + param_1),param_2,_Size);
  if (uVar2 < param_3) {
    local_30 = &PTR_DAT_1802409e8;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("&mut [u8].write() cannot error",0x1e,&local_30,&PTR_FUN_180240a20,
                  &PTR_s_C__Users_burne__cargo_registry_s_180240b78);
  }
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + (char)param_3;
  return 0;
}


