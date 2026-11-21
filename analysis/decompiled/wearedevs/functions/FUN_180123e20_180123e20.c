/* FUN_180123e20 @ 180123e20 */

undefined1 FUN_180123e20(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  longlong local_30;
  longlong *local_28;
  code *local_20;
  
  lVar1 = *(longlong *)(param_1 + 8);
  FUN_1801620d0(lVar1 + 0x18,*param_2);
  local_30 = *(longlong *)(lVar1 + 0x10);
  if (local_30 != 0) {
    if (local_30 == 1) {
      return 1;
    }
    if (local_30 != 2) {
      local_28 = &local_30;
      local_20 = FUN_1801ee720;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_180242398,&local_28,&PTR_s_C__Users_burne__cargo_registry_s_1802423d8);
    }
    if ((*(char *)(param_1 + 0x20) != '\x02') &&
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38) < 0)) {
      uVar2 = FUN_180127fe0((longlong *)(param_1 + 0x10),param_2);
      return uVar2;
    }
  }
  FUN_180027490();
  puVar3 = (undefined8 *)thunk_FUN_1801d32d0(0x18,8);
  if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x18);
  }
  *puVar3 = 0;
  *(undefined1 *)(puVar3 + 2) = 5;
  return 0;
}


