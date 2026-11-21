/* FUN_180115be0 @ 180115be0 */

undefined8 * FUN_180115be0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  longlong *local_30;
  undefined8 *local_28;
  undefined1 local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_30 = param_1;
  if ((char)*param_1 != '\x04') {
    FUN_180027490();
    puVar2 = (undefined8 *)thunk_FUN_1801d32d0(0x18,8);
    if (puVar2 == (undefined8 *)0x0) {
      local_19 = 1;
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x18);
    }
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 2) = 10;
    local_19 = 0;
    FUN_1801158f0(puVar2,param_1);
    return puVar2;
  }
  local_38 = param_1[4];
  local_58 = *param_1;
  uStack_50 = (undefined4)param_1[1];
  uStack_4c = *(undefined4 *)((longlong)param_1 + 0xc);
  local_48 = (undefined4)param_1[2];
  uStack_44 = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_40 = (undefined4)param_1[3];
  uStack_3c = *(undefined4 *)((longlong)param_1 + 0x1c);
  local_19 = 0;
  lVar1 = FUN_18012d690(&local_58);
  if (lVar1 == 0) {
    local_19 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("h2::Error::is_io",0x10,&PTR_s_C__Users_burne__cargo_registry_s_18023fdb0);
  }
  local_58 = lVar1;
  FUN_180027490();
  local_28 = (undefined8 *)thunk_FUN_1801d32d0(0x18,8);
  if (local_28 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x18);
  }
  *local_28 = 0;
  *(undefined1 *)(local_28 + 2) = 6;
  FUN_180115a70(local_28,lVar1);
  return local_28;
}


