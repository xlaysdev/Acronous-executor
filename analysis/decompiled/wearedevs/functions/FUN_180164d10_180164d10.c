/* FUN_180164d10 @ 180164d10 */

void FUN_180164d10(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong local_18 [2];
  
  local_18[1] = 0xfffffffffffffffe;
  piVar1 = (int *)*param_1;
  lVar2 = *param_2;
  if (piVar1 == (int *)0x0) {
    if (*(longlong *)(lVar2 + 0x220) == 0) {
LAB_180164da2:
      FUN_1801691b0(*(longlong *)(lVar2 + 0x228) + 0x10);
      return;
    }
    local_18[0] = FUN_18018cbb0();
    if (local_18[0] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("failed to wake I/O driver",0x19,local_18,&PTR_FUN_180262428,
                    &PTR_s_C__Users_burne__cargo_registry_s_180262610);
    }
  }
  else if ((*piVar1 == 1) || (lVar2 != *(longlong *)(piVar1 + 2))) {
    if (*(longlong *)(lVar2 + 0x220) == 0) goto LAB_180164da2;
    local_18[0] = FUN_18018cbb0();
    if (local_18[0] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("failed to wake I/O driver",0x19,local_18,&PTR_FUN_180262428,
                    &PTR_s_C__Users_burne__cargo_registry_s_180262610);
    }
  }
  return;
}


