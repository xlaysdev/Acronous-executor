/* FUN_18016d1d0 @ 18016d1d0 */

void FUN_18016d1d0(char *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined **local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined **local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  char *local_30;
  undefined1 local_22;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_21 = 1;
  local_30 = param_1;
  FUN_18016e710(&local_60);
  if ((int)local_60 == 3) {
    local_48 = &PTR_s_The_Tokio_context_thread_local_v_180263a58;
    uStack_40 = (longlong *)&LAB_1800a5660;
    local_21 = 1;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_180263a68,&local_48,&PTR_s_C__Users_burne__cargo_registry_s_180263ad8);
  }
  local_38 = local_50;
  local_48 = local_60;
  uStack_40 = (longlong *)CONCAT44(uStack_54,uStack_58);
  lVar2 = 0x2c8;
  if (*local_30 != '\0') {
    lVar2 = 0x200;
  }
  local_22 = 1;
  FUN_1801757c0(*(longlong *)(*(longlong *)(local_30 + 8) + lVar2) + 0x10,
                *(undefined8 *)(local_30 + 0x18));
  local_60 = *(undefined ***)(local_30 + 0x10);
  LOCK();
  *local_60 = (undefined *)((longlong)*local_60 + -1);
  UNLOCK();
  if (*local_60 == (undefined *)0x0) {
    local_22 = 0;
    FUN_180162d10(&local_60);
  }
  FUN_18016ec90(&PTR_FUN_180261980,&local_48,&local_38);
  if (local_48 != (undefined **)0x2) {
    if (local_48 == (undefined **)0x0) {
      LOCK();
      *uStack_40 = *uStack_40 + -1;
      UNLOCK();
      if (*uStack_40 == 0) {
        local_21 = 0;
        FUN_1801635e0(&uStack_40);
      }
    }
    else {
      LOCK();
      *uStack_40 = *uStack_40 + -1;
      UNLOCK();
      if (*uStack_40 == 0) {
        local_21 = 0;
        FUN_180162f80();
      }
    }
  }
  if (*local_30 == '\0') {
    plVar1 = *(longlong **)(local_30 + 8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1801635e0();
    }
  }
  else {
    plVar1 = *(longlong **)(local_30 + 8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180162f80();
    }
  }
  return;
}


