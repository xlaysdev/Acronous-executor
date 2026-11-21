/* FUN_180032520 @ 180032520 */

void FUN_180032520(undefined8 param_1,undefined1 param_2,void *param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 local_558 [1264];
  int local_68 [2];
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [8];
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  void *local_28;
  undefined1 local_1a;
  undefined1 local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_3;
  local_1a = param_2;
  FUN_180028ab0(local_68,&PTR_FUN_180206220,&local_1a,param_1);
  if (local_68[0] == 3) {
    local_19 = 1;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0("Cannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks."
                  ,0x183,param_4);
  }
  local_38 = local_58;
  uStack_30 = uStack_50;
  uStack_40 = uStack_60;
  memcpy(local_558,local_28,0x4f0);
  cVar1 = FUN_18000d550(local_558,local_558);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("failed to park thread",0x15,local_558,&DAT_180206200,
                  &PTR_s_C__Users_burne__cargo_registry_s_180206380);
  }
  local_19 = 0;
  FUN_180031b90(local_48);
  return;
}


