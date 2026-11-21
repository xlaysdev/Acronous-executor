/* FUN_1801ae320 @ 1801ae320 */

void FUN_1801ae320(char *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (*param_1 == '\x01') {
    puVar1 = &DAT_1802843f0;
    if ((ulonglong)(byte)param_1[1] != 0) {
      puVar1 = &DAT_1802843f4;
    }
    FUN_1801f0c50(param_2,puVar1,(ulonglong)(byte)param_1[1] + 4);
    return;
  }
  if (*param_1 != '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("internal error: entered unreachable code",0x28,
                  &PTR_s_C__Users_burne__cargo_registry_s_1802843d8);
  }
  FUN_1801f0c50(param_2,*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),
                *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10));
  return;
}


